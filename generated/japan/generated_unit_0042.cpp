#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0042[4094] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 8, 0,
    9, 0, 10, 0, 0, 0, 11, 12, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18,
    0, 19, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0,
    27, 28, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0,
    36, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 47, 0, 48, 0, 49, 50, 0, 51, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 54,
    0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 61, 62, 0, 0, 63, 0, 0, 0,
    64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0,
    0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 75, 0, 76, 0, 77, 78, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 82,
    0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 89, 90, 0, 0, 91, 0, 0, 92,
    0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0,
    0, 100, 0, 101, 0, 0, 0, 102, 0, 103, 0, 104, 0, 105, 106, 0, 107, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 117, 118, 0, 0, 119, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0, 127, 0, 0, 128, 0, 129,
    0, 130, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 137, 0, 138, 0, 139,
    0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0,
    0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0,
    157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0,
    165, 0, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 171, 0, 0, 0, 172, 173, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180,
    0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 189, 190, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0,
    0, 0, 196, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 201, 0, 202, 0, 203, 0, 0, 204, 0, 205, 0, 206, 0, 0, 207, 0,
    208, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 0, 213, 0, 214, 0, 215, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 218, 0,
    219, 0, 220, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 229,
    0, 230, 0, 0, 231, 0, 232, 0, 0, 233, 0, 234, 0, 235, 0, 0, 236, 0, 237, 0, 238, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 241,
    0, 242, 0, 243, 0, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 249, 0, 250, 0, 251, 0, 0, 252, 0,
    253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 257, 0, 258, 0, 259, 0, 0, 260, 0, 261, 0, 262, 0, 0, 0, 0, 0,
    263, 0, 264, 0, 0, 265, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 270, 0, 0, 271, 0, 272, 0, 273, 0, 0,
    0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 276, 0, 0, 277, 0, 278, 0, 0, 279, 0, 280, 0, 281, 0, 0, 282, 0, 283, 0, 284, 0, 0,
    285, 0, 286, 0, 287, 0, 288, 0, 0, 289, 0, 290, 0, 291, 0, 0, 292, 0, 293, 0, 0, 294, 0, 295, 0, 296, 0, 0, 297, 0, 298, 0,
    299, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 302, 0, 303, 0, 304, 0, 0, 305, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0,
    309, 0, 0, 310, 0, 311, 0, 312, 0, 0, 313, 0, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 318, 0, 319, 0, 320,
    0, 0, 321, 0, 322, 0, 323, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 326, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0,
    330, 0, 331, 0, 0, 332, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 337, 0, 0, 338, 0, 339, 0, 340, 0, 0,
    341, 0, 0, 0, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 0, 347, 0, 0, 348, 0, 349, 0, 0, 350, 0, 351, 0, 352, 0, 353, 0,
    0, 354, 0, 355, 0, 356, 0, 357, 0, 0, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 0, 0, 0, 363, 0, 364, 0, 0, 365, 0, 366,
    0, 367, 0, 0, 0, 0, 368, 0, 369, 0, 0, 370, 371, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 380, 0, 0, 381, 0, 382, 383, 0,
    0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 387, 0, 388, 0, 0, 0, 389, 0, 390, 0, 391, 0, 392, 0, 393, 0, 394,
    0, 395, 0, 396, 0, 397, 0, 398, 0, 399, 0, 400, 0, 401, 0, 402, 0, 403, 0, 404, 0, 405, 0, 406, 0, 407, 0, 408, 0, 409, 0, 410,
    0, 411, 0, 412, 0, 413, 0, 414, 0, 415, 0, 416, 0, 417, 0, 418, 0, 419, 0, 420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 425, 0, 426,
    0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 432, 0, 433, 0, 434, 0, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442,
    0, 443, 0, 444, 0, 445, 0, 446, 0, 447, 0, 448, 0, 449, 0, 450, 0, 451, 0, 452, 0, 453, 0, 454, 0, 455, 0, 456, 0, 457, 0, 458,
    0, 459, 0, 460, 0, 461, 0, 462, 0, 463, 0, 464, 0, 465, 0, 466, 0, 467, 0, 468, 0, 469, 0, 470, 0, 471, 0, 472, 0, 473, 0, 474,
    0, 475, 0, 476, 0, 477, 0, 478, 0, 479, 0, 480, 0, 481, 0, 482, 0, 483, 0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 489, 0, 490,
    0, 491, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499, 0, 500, 0, 501, 0, 502, 0, 503, 0, 504, 0, 505, 0, 506,
    0, 507, 0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 522,
    0, 523, 0, 524, 0, 525, 0, 526, 0, 527, 0, 528, 0, 529, 0, 530, 0, 531, 0, 532, 0, 533, 0, 534, 0, 535, 0, 536, 0, 537, 0, 0,
    0, 538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0,
    544, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 550,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 553, 0,
    0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0,
    0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 0,
    0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569,
    0, 570, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0,
    0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 0, 0,
    585, 0, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 589, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0,
    0, 0, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0,
    597, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600,
    0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0,
    606, 0, 0, 0, 607, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 610, 0, 0,
    0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 617, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 621, 0, 0, 0,
    622, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 0, 628, 0, 0,
    0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 639, 0,
    0, 640, 0, 641, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0,
    0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 652,
    0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0,
    0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 661,
    0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0,
    0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0,
    673, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 678, 0,
    0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0,
    0, 0, 0, 684, 685, 0, 686, 0, 0, 0, 0, 0, 687, 0, 0, 688, 0, 0, 689, 0, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0,
    0, 0, 692, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 695, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0,
    0, 0, 701, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 705, 0, 0,
    0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 711, 0, 0, 0,
    0, 0, 0, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 721, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 726, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 728, 0, 729, 0, 0, 730, 0, 0, 731, 0, 732, 0, 0, 0, 0, 0, 733, 0,
    0, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 741, 0, 742, 0, 743, 0, 0, 0, 744, 0, 0, 745,
    0, 746, 0, 0, 747, 0, 748, 0, 0, 749, 0, 750, 0, 0, 751, 0, 752, 0, 0, 753, 0, 754, 0, 0, 0, 755, 0, 0, 756, 0, 757, 0,
    758, 0, 0, 0, 759, 0, 0, 0, 760, 0, 0, 761, 0, 762, 0, 763, 0, 0, 0, 764, 0, 0, 0, 765, 0, 0, 766, 0, 767, 0, 768, 0,
    0, 0, 769, 0, 0, 770, 0, 771, 0, 0, 772, 0, 773, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 775, 0, 0, 0, 776, 0, 0, 0,
    777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 779, 0, 0, 0, 780,
    0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 784, 0, 0, 785, 0, 0, 0, 0,
    786, 0, 0, 0, 787, 0, 0, 0, 788, 0, 0, 0, 0, 789, 0, 0, 0, 790, 0, 0, 0, 791, 0, 0, 0, 792, 0, 0, 793, 0, 0, 0,
    0, 794, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 797, 0, 0, 0, 0, 0, 0, 798, 0, 0, 799, 0, 0,
    0, 0, 0, 0, 800, 0, 0, 801, 0, 0, 0, 0, 0, 0, 802, 0, 0, 803, 0, 0, 0, 0, 0, 0, 804, 0, 0, 805, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 809, 0,
    810, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 812, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 815, 0, 0,
    0, 816, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 0, 819, 0,
    0, 0, 820, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 823, 0, 0, 0, 824, 0, 0, 0, 0,
    0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0,
    829, 0, 830, 0, 0, 0, 0, 0, 831, 0, 0, 0, 0, 832, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 835,
    0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 838, 0,
    0, 0, 839, 0, 0, 0, 840, 0, 0, 0, 841, 0, 0, 0, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 844, 0, 0, 0, 845, 0, 0, 0, 0, 0, 846, 0, 0, 0, 847, 0, 0, 0, 848, 0, 0, 0, 849, 0, 0, 0, 850, 0,
    0, 0, 0, 0, 851, 0, 0, 0, 0, 852, 0, 853, 0, 0, 0, 0, 0, 854, 0, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 0, 856,
    0, 0, 857, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 860, 0, 0, 0, 0, 0, 861, 0, 0, 0, 0, 0, 862, 0, 0, 0, 863,
    0, 0, 0, 864, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 0, 866, 0,
    0, 0, 867, 0, 0, 0, 868, 0, 0, 0, 0, 0, 0, 0, 0, 0, 869, 0, 0, 0, 0, 0, 0, 870, 0, 0, 0, 871, 0, 0, 872, 0,
    0, 0, 0, 0, 0, 873, 0, 0, 0, 0, 0, 0, 874, 0, 0, 0, 0, 875, 0, 0, 0, 0, 876, 0, 0, 0, 0, 877, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 878, 0, 0, 0, 0, 0, 0, 879, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 881, 0, 882, 0, 0, 0, 0, 0,
    883, 0, 0, 0, 0, 884, 0, 0, 0, 0, 0, 885, 0, 886, 0, 0, 0, 0, 0, 0, 887, 0, 0, 0, 0, 0, 888, 0, 0, 0, 889, 0,
    0, 0, 890, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 891, 0, 0, 0, 892, 0, 0, 0, 893,
    0, 0, 0, 894, 0, 0, 0, 0, 0, 0, 0, 0, 0, 895, 0, 0, 0, 0, 0, 0, 896, 0, 0, 0, 897, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 898, 0, 0, 0, 899, 0, 0, 0, 900, 0, 0, 0, 901, 0, 0, 0, 902, 0,
    0, 0, 903, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 904, 0, 0, 0, 0, 0, 0, 905, 0, 0, 0, 0, 0, 906, 0, 0, 0,
    0, 907, 0, 908, 0, 0, 0, 0, 0, 909, 0, 0, 0, 0, 910, 0, 0, 0, 0, 911, 0, 0, 0, 0, 0, 0, 912, 0, 0, 0, 0, 0,
    913, 0, 0, 0, 914, 0, 0, 0, 915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 916, 0, 0,
    0, 917, 0, 0, 0, 918, 0, 0, 0, 919, 0, 0, 0, 0, 0, 920, 0, 921, 0, 0, 922, 0, 0, 923, 0, 924, 0, 0, 0, 0, 0, 925,
    0, 0, 0, 0, 0, 926, 0, 0, 0, 0, 927, 0, 928, 0, 0, 0, 0, 0, 929, 0, 0, 0, 0, 930, 0, 0, 0, 0, 931, 0, 0, 0,
    0, 0, 0, 932, 0, 0, 0, 0, 0, 933, 0, 0, 0, 934, 0, 0, 0, 935, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 936, 0, 0, 0, 937, 0, 0, 0, 938, 0, 0, 0, 939, 0, 0, 0, 940, 0, 0, 0, 0, 0, 0, 0, 0, 941,
    0, 0, 0, 0, 0, 0, 942, 0, 0, 0, 943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 944, 0, 0, 0, 0, 0, 945, 0, 0,
    0, 0, 0, 946, 0, 947, 0, 0, 948, 0, 0, 949, 0, 950, 0, 0, 0, 0, 0, 951, 0, 0, 0, 0, 0, 952, 0, 0, 0, 0, 953, 0,
    954, 0, 0, 0, 0, 0, 955, 0, 0, 0, 0, 956, 0, 0, 0, 0, 957, 0, 0, 0, 0, 0, 0, 958, 0, 0, 0, 0, 0, 959, 0, 0,
    0, 960, 0, 0, 0, 961, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 962, 0, 0, 0,
    963, 0, 0, 0, 964, 0, 0, 0, 965, 0, 0, 0, 0, 0, 0, 0, 0, 966, 0, 0, 0, 0, 0, 0, 967, 0, 0, 0, 968, 0, 0, 0,
    0, 969, 0, 0, 0, 0, 0, 0, 0, 0, 0, 970, 0, 0, 0, 971, 0, 0, 0, 0, 0, 972, 0, 0, 0, 973, 0, 0, 0, 974, 0, 0,
    0, 975, 0, 0, 0, 976, 0, 0, 0, 0, 0, 977, 0, 0, 0, 0, 978, 0, 979, 0, 0, 0, 0, 0, 980, 0, 0, 0, 0, 981,
};
void recomp_unit_0042_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088AC000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0042[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088AC000;
    case 2u: goto L_088AC014;
    case 3u: goto L_088AC01C;
    case 4u: goto L_088AC038;
    case 5u: goto L_088AC040;
    case 6u: goto L_088AC060;
    case 7u: goto L_088AC068;
    case 8u: goto L_088AC078;
    case 9u: goto L_088AC080;
    case 10u: goto L_088AC088;
    case 11u: goto L_088AC098;
    case 12u: goto L_088AC09C;
    case 13u: goto L_088AC0A4;
    case 14u: goto L_088AC0B0;
    case 15u: goto L_088AC0C8;
    case 16u: goto L_088AC0D4;
    case 17u: goto L_088AC0E0;
    case 18u: goto L_088AC0FC;
    case 19u: goto L_088AC104;
    case 20u: goto L_088AC114;
    case 21u: goto L_088AC11C;
    case 22u: goto L_088AC124;
    case 23u: goto L_088AC140;
    case 24u: goto L_088AC148;
    case 25u: goto L_088AC168;
    case 26u: goto L_088AC170;
    case 27u: goto L_088AC180;
    case 28u: goto L_088AC184;
    case 29u: goto L_088AC190;
    case 30u: goto L_088AC198;
    case 31u: goto L_088AC1B4;
    case 32u: goto L_088AC1BC;
    case 33u: goto L_088AC1DC;
    case 34u: goto L_088AC1E4;
    case 35u: goto L_088AC1F4;
    case 36u: goto L_088AC200;
    case 37u: goto L_088AC20C;
    case 38u: goto L_088AC21C;
    case 39u: goto L_088AC228;
    case 40u: goto L_088AC23C;
    case 41u: goto L_088AC244;
    case 42u: goto L_088AC260;
    case 43u: goto L_088AC268;
    case 44u: goto L_088AC288;
    case 45u: goto L_088AC290;
    case 46u: goto L_088AC2A0;
    case 47u: goto L_088AC2A8;
    case 48u: goto L_088AC2B0;
    case 49u: goto L_088AC2B8;
    case 50u: goto L_088AC2BC;
    case 51u: goto L_088AC2C4;
    case 52u: goto L_088AC2D8;
    case 53u: goto L_088AC2E0;
    case 54u: goto L_088AC2FC;
    case 55u: goto L_088AC304;
    case 56u: goto L_088AC324;
    case 57u: goto L_088AC32C;
    case 58u: goto L_088AC33C;
    case 59u: goto L_088AC344;
    case 60u: goto L_088AC34C;
    case 61u: goto L_088AC360;
    case 62u: goto L_088AC364;
    case 63u: goto L_088AC370;
    case 64u: goto L_088AC380;
    case 65u: goto L_088AC38C;
    case 66u: goto L_088AC39C;
    case 67u: goto L_088AC3A8;
    case 68u: goto L_088AC3BC;
    case 69u: goto L_088AC3C4;
    case 70u: goto L_088AC3E0;
    case 71u: goto L_088AC3E8;
    case 72u: goto L_088AC408;
    case 73u: goto L_088AC410;
    case 74u: goto L_088AC420;
    case 75u: goto L_088AC428;
    case 76u: goto L_088AC430;
    case 77u: goto L_088AC438;
    case 78u: goto L_088AC43C;
    case 79u: goto L_088AC444;
    case 80u: goto L_088AC458;
    case 81u: goto L_088AC460;
    case 82u: goto L_088AC47C;
    case 83u: goto L_088AC484;
    case 84u: goto L_088AC4A4;
    case 85u: goto L_088AC4AC;
    case 86u: goto L_088AC4BC;
    case 87u: goto L_088AC4C4;
    case 88u: goto L_088AC4CC;
    case 89u: goto L_088AC4E0;
    case 90u: goto L_088AC4E4;
    case 91u: goto L_088AC4F0;
    case 92u: goto L_088AC4FC;
    case 93u: goto L_088AC508;
    case 94u: goto L_088AC518;
    case 95u: goto L_088AC524;
    case 96u: goto L_088AC538;
    case 97u: goto L_088AC540;
    case 98u: goto L_088AC55C;
    case 99u: goto L_088AC564;
    case 100u: goto L_088AC584;
    case 101u: goto L_088AC58C;
    case 102u: goto L_088AC59C;
    case 103u: goto L_088AC5A4;
    case 104u: goto L_088AC5AC;
    case 105u: goto L_088AC5B4;
    case 106u: goto L_088AC5B8;
    case 107u: goto L_088AC5C0;
    case 108u: goto L_088AC5D4;
    case 109u: goto L_088AC5DC;
    case 110u: goto L_088AC5F8;
    case 111u: goto L_088AC600;
    case 112u: goto L_088AC620;
    case 113u: goto L_088AC628;
    case 114u: goto L_088AC638;
    case 115u: goto L_088AC640;
    case 116u: goto L_088AC648;
    case 117u: goto L_088AC65C;
    case 118u: goto L_088AC660;
    case 119u: goto L_088AC66C;
    case 120u: goto L_088AC670;
    case 121u: goto L_088AC69C;
    case 122u: goto L_088AC6A4;
    case 123u: goto L_088AC6C4;
    case 124u: goto L_088AC6CC;
    case 125u: goto L_088AC6D8;
    case 126u: goto L_088AC6E0;
    case 127u: goto L_088AC6E8;
    case 128u: goto L_088AC6F4;
    case 129u: goto L_088AC6FC;
    case 130u: goto L_088AC704;
    case 131u: goto L_088AC70C;
    case 132u: goto L_088AC718;
    case 133u: goto L_088AC730;
    case 134u: goto L_088AC738;
    case 135u: goto L_088AC750;
    case 136u: goto L_088AC758;
    case 137u: goto L_088AC76C;
    case 138u: goto L_088AC774;
    case 139u: goto L_088AC77C;
    case 140u: goto L_088AC790;
    case 141u: goto L_088AC798;
    case 142u: goto L_088AC7AC;
    case 143u: goto L_088AC7B4;
    case 144u: goto L_088AC7BC;
    case 145u: goto L_088AC7D0;
    case 146u: goto L_088AC7E8;
    case 147u: goto L_088AC7F0;
    case 148u: goto L_088AC7F8;
    case 149u: goto L_088AC804;
    case 150u: goto L_088AC810;
    case 151u: goto L_088AC818;
    case 152u: goto L_088AC834;
    case 153u: goto L_088AC83C;
    case 154u: goto L_088AC860;
    case 155u: goto L_088AC868;
    case 156u: goto L_088AC878;
    case 157u: goto L_088AC880;
    case 158u: goto L_088AC890;
    case 159u: goto L_088AC898;
    case 160u: goto L_088AC8A8;
    case 161u: goto L_088AC8B0;
    case 162u: goto L_088AC8CC;
    case 163u: goto L_088AC8D4;
    case 164u: goto L_088AC8F8;
    case 165u: goto L_088AC900;
    case 166u: goto L_088AC910;
    case 167u: goto L_088AC918;
    case 168u: goto L_088AC928;
    case 169u: goto L_088AC930;
    case 170u: goto L_088AC940;
    case 171u: goto L_088AC948;
    case 172u: goto L_088AC958;
    case 173u: goto L_088AC95C;
    case 174u: goto L_088AC978;
    case 175u: goto L_088AC988;
    case 176u: goto L_088AC998;
    case 177u: goto L_088AC9A8;
    case 178u: goto L_088AC9B8;
    case 179u: goto L_088AC9D8;
    case 180u: goto L_088AC9FC;
    case 181u: goto L_088ACA08;
    case 182u: goto L_088ACA18;
    case 183u: goto L_088ACA30;
    case 184u: goto L_088ACA38;
    case 185u: goto L_088ACA50;
    case 186u: goto L_088ACA58;
    case 187u: goto L_088ACA70;
    case 188u: goto L_088ACA94;
    case 189u: goto L_088ACA9C;
    case 190u: goto L_088ACAA0;
    case 191u: goto L_088ACAA8;
    case 192u: goto L_088ACAC4;
    case 193u: goto L_088ACACC;
    case 194u: goto L_088ACAF0;
    case 195u: goto L_088ACAF8;
    case 196u: goto L_088ACB08;
    case 197u: goto L_088ACB10;
    case 198u: goto L_088ACB20;
    case 199u: goto L_088ACB34;
    case 200u: goto L_088ACB3C;
    case 201u: goto L_088ACB40;
    case 202u: goto L_088ACB48;
    case 203u: goto L_088ACB50;
    case 204u: goto L_088ACB5C;
    case 205u: goto L_088ACB64;
    case 206u: goto L_088ACB6C;
    case 207u: goto L_088ACB78;
    case 208u: goto L_088ACB80;
    case 209u: goto L_088ACB88;
    case 210u: goto L_088ACB94;
    case 211u: goto L_088ACB9C;
    case 212u: goto L_088ACBA4;
    case 213u: goto L_088ACBB8;
    case 214u: goto L_088ACBC0;
    case 215u: goto L_088ACBC8;
    case 216u: goto L_088ACBDC;
    case 217u: goto L_088ACBE4;
    case 218u: goto L_088ACBF8;
    case 219u: goto L_088ACC00;
    case 220u: goto L_088ACC08;
    case 221u: goto L_088ACC1C;
    case 222u: goto L_088ACC24;
    case 223u: goto L_088ACC2C;
    case 224u: goto L_088ACC38;
    case 225u: goto L_088ACC40;
    case 226u: goto L_088ACC48;
    case 227u: goto L_088ACC68;
    case 228u: goto L_088ACC74;
    case 229u: goto L_088ACC7C;
    case 230u: goto L_088ACC84;
    case 231u: goto L_088ACC90;
    case 232u: goto L_088ACC98;
    case 233u: goto L_088ACCA4;
    case 234u: goto L_088ACCAC;
    case 235u: goto L_088ACCB4;
    case 236u: goto L_088ACCC0;
    case 237u: goto L_088ACCC8;
    case 238u: goto L_088ACCD0;
    case 239u: goto L_088ACCE8;
    case 240u: goto L_088ACCF0;
    case 241u: goto L_088ACCFC;
    case 242u: goto L_088ACD04;
    case 243u: goto L_088ACD0C;
    case 244u: goto L_088ACD18;
    case 245u: goto L_088ACD20;
    case 246u: goto L_088ACD28;
    case 247u: goto L_088ACD48;
    case 248u: goto L_088ACD50;
    case 249u: goto L_088ACD5C;
    case 250u: goto L_088ACD64;
    case 251u: goto L_088ACD6C;
    case 252u: goto L_088ACD78;
    case 253u: goto L_088ACD80;
    case 254u: goto L_088ACD88;
    case 255u: goto L_088ACDA8;
    case 256u: goto L_088ACDB0;
    case 257u: goto L_088ACDBC;
    case 258u: goto L_088ACDC4;
    case 259u: goto L_088ACDCC;
    case 260u: goto L_088ACDD8;
    case 261u: goto L_088ACDE0;
    case 262u: goto L_088ACDE8;
    case 263u: goto L_088ACE00;
    case 264u: goto L_088ACE08;
    case 265u: goto L_088ACE14;
    case 266u: goto L_088ACE1C;
    case 267u: goto L_088ACE24;
    case 268u: goto L_088ACE44;
    case 269u: goto L_088ACE50;
    case 270u: goto L_088ACE58;
    case 271u: goto L_088ACE64;
    case 272u: goto L_088ACE6C;
    case 273u: goto L_088ACE74;
    case 274u: goto L_088ACE94;
    case 275u: goto L_088ACEA0;
    case 276u: goto L_088ACEA8;
    case 277u: goto L_088ACEB4;
    case 278u: goto L_088ACEBC;
    case 279u: goto L_088ACEC8;
    case 280u: goto L_088ACED0;
    case 281u: goto L_088ACED8;
    case 282u: goto L_088ACEE4;
    case 283u: goto L_088ACEEC;
    case 284u: goto L_088ACEF4;
    case 285u: goto L_088ACF00;
    case 286u: goto L_088ACF08;
    case 287u: goto L_088ACF10;
    case 288u: goto L_088ACF18;
    case 289u: goto L_088ACF24;
    case 290u: goto L_088ACF2C;
    case 291u: goto L_088ACF34;
    case 292u: goto L_088ACF40;
    case 293u: goto L_088ACF48;
    case 294u: goto L_088ACF54;
    case 295u: goto L_088ACF5C;
    case 296u: goto L_088ACF64;
    case 297u: goto L_088ACF70;
    case 298u: goto L_088ACF78;
    case 299u: goto L_088ACF80;
    case 300u: goto L_088ACF98;
    case 301u: goto L_088ACFA0;
    case 302u: goto L_088ACFAC;
    case 303u: goto L_088ACFB4;
    case 304u: goto L_088ACFBC;
    case 305u: goto L_088ACFC8;
    case 306u: goto L_088ACFD0;
    case 307u: goto L_088ACFD8;
    case 308u: goto L_088ACFF8;
    case 309u: goto L_088AD000;
    case 310u: goto L_088AD00C;
    case 311u: goto L_088AD014;
    case 312u: goto L_088AD01C;
    case 313u: goto L_088AD028;
    case 314u: goto L_088AD030;
    case 315u: goto L_088AD038;
    case 316u: goto L_088AD058;
    case 317u: goto L_088AD060;
    case 318u: goto L_088AD06C;
    case 319u: goto L_088AD074;
    case 320u: goto L_088AD07C;
    case 321u: goto L_088AD088;
    case 322u: goto L_088AD090;
    case 323u: goto L_088AD098;
    case 324u: goto L_088AD0B0;
    case 325u: goto L_088AD0B8;
    case 326u: goto L_088AD0C4;
    case 327u: goto L_088AD0CC;
    case 328u: goto L_088AD0D4;
    case 329u: goto L_088AD0F4;
    case 330u: goto L_088AD100;
    case 331u: goto L_088AD108;
    case 332u: goto L_088AD114;
    case 333u: goto L_088AD11C;
    case 334u: goto L_088AD124;
    case 335u: goto L_088AD144;
    case 336u: goto L_088AD150;
    case 337u: goto L_088AD158;
    case 338u: goto L_088AD164;
    case 339u: goto L_088AD16C;
    case 340u: goto L_088AD174;
    case 341u: goto L_088AD180;
    case 342u: goto L_088AD194;
    case 343u: goto L_088AD19C;
    case 344u: goto L_088AD1A4;
    case 345u: goto L_088AD1AC;
    case 346u: goto L_088AD1B4;
    case 347u: goto L_088AD1C0;
    case 348u: goto L_088AD1CC;
    case 349u: goto L_088AD1D4;
    case 350u: goto L_088AD1E0;
    case 351u: goto L_088AD1E8;
    case 352u: goto L_088AD1F0;
    case 353u: goto L_088AD1F8;
    case 354u: goto L_088AD204;
    case 355u: goto L_088AD20C;
    case 356u: goto L_088AD214;
    case 357u: goto L_088AD21C;
    case 358u: goto L_088AD22C;
    case 359u: goto L_088AD234;
    case 360u: goto L_088AD23C;
    case 361u: goto L_088AD244;
    case 362u: goto L_088AD24C;
    case 363u: goto L_088AD260;
    case 364u: goto L_088AD268;
    case 365u: goto L_088AD274;
    case 366u: goto L_088AD27C;
    case 367u: goto L_088AD284;
    case 368u: goto L_088AD298;
    case 369u: goto L_088AD2A0;
    case 370u: goto L_088AD2AC;
    case 371u: goto L_088AD2B0;
    case 372u: goto L_088AD2C8;
    case 373u: goto L_088AD2D0;
    case 374u: goto L_088AD308;
    case 375u: goto L_088AD328;
    case 376u: goto L_088AD330;
    case 377u: goto L_088AD340;
    case 378u: goto L_088AD34C;
    case 379u: goto L_088AD358;
    case 380u: goto L_088AD360;
    case 381u: goto L_088AD36C;
    case 382u: goto L_088AD374;
    case 383u: goto L_088AD378;
    case 384u: goto L_088AD384;
    case 385u: goto L_088AD3A8;
    case 386u: goto L_088AD3B4;
    case 387u: goto L_088AD3BC;
    case 388u: goto L_088AD3C4;
    case 389u: goto L_088AD3D4;
    case 390u: goto L_088AD3DC;
    case 391u: goto L_088AD3E4;
    case 392u: goto L_088AD3EC;
    case 393u: goto L_088AD3F4;
    case 394u: goto L_088AD3FC;
    case 395u: goto L_088AD404;
    case 396u: goto L_088AD40C;
    case 397u: goto L_088AD414;
    case 398u: goto L_088AD41C;
    case 399u: goto L_088AD424;
    case 400u: goto L_088AD42C;
    case 401u: goto L_088AD434;
    case 402u: goto L_088AD43C;
    case 403u: goto L_088AD444;
    case 404u: goto L_088AD44C;
    case 405u: goto L_088AD454;
    case 406u: goto L_088AD45C;
    case 407u: goto L_088AD464;
    case 408u: goto L_088AD46C;
    case 409u: goto L_088AD474;
    case 410u: goto L_088AD47C;
    case 411u: goto L_088AD484;
    case 412u: goto L_088AD48C;
    case 413u: goto L_088AD494;
    case 414u: goto L_088AD49C;
    case 415u: goto L_088AD4A4;
    case 416u: goto L_088AD4AC;
    case 417u: goto L_088AD4B4;
    case 418u: goto L_088AD4BC;
    case 419u: goto L_088AD4C4;
    case 420u: goto L_088AD4CC;
    case 421u: goto L_088AD4D4;
    case 422u: goto L_088AD4DC;
    case 423u: goto L_088AD4E4;
    case 424u: goto L_088AD4EC;
    case 425u: goto L_088AD4F4;
    case 426u: goto L_088AD4FC;
    case 427u: goto L_088AD504;
    case 428u: goto L_088AD50C;
    case 429u: goto L_088AD514;
    case 430u: goto L_088AD51C;
    case 431u: goto L_088AD524;
    case 432u: goto L_088AD52C;
    case 433u: goto L_088AD534;
    case 434u: goto L_088AD53C;
    case 435u: goto L_088AD544;
    case 436u: goto L_088AD54C;
    case 437u: goto L_088AD554;
    case 438u: goto L_088AD55C;
    case 439u: goto L_088AD564;
    case 440u: goto L_088AD56C;
    case 441u: goto L_088AD574;
    case 442u: goto L_088AD57C;
    case 443u: goto L_088AD584;
    case 444u: goto L_088AD58C;
    case 445u: goto L_088AD594;
    case 446u: goto L_088AD59C;
    case 447u: goto L_088AD5A4;
    case 448u: goto L_088AD5AC;
    case 449u: goto L_088AD5B4;
    case 450u: goto L_088AD5BC;
    case 451u: goto L_088AD5C4;
    case 452u: goto L_088AD5CC;
    case 453u: goto L_088AD5D4;
    case 454u: goto L_088AD5DC;
    case 455u: goto L_088AD5E4;
    case 456u: goto L_088AD5EC;
    case 457u: goto L_088AD5F4;
    case 458u: goto L_088AD5FC;
    case 459u: goto L_088AD604;
    case 460u: goto L_088AD60C;
    case 461u: goto L_088AD614;
    case 462u: goto L_088AD61C;
    case 463u: goto L_088AD624;
    case 464u: goto L_088AD62C;
    case 465u: goto L_088AD634;
    case 466u: goto L_088AD63C;
    case 467u: goto L_088AD644;
    case 468u: goto L_088AD64C;
    case 469u: goto L_088AD654;
    case 470u: goto L_088AD65C;
    case 471u: goto L_088AD664;
    case 472u: goto L_088AD66C;
    case 473u: goto L_088AD674;
    case 474u: goto L_088AD67C;
    case 475u: goto L_088AD684;
    case 476u: goto L_088AD68C;
    case 477u: goto L_088AD694;
    case 478u: goto L_088AD69C;
    case 479u: goto L_088AD6A4;
    case 480u: goto L_088AD6AC;
    case 481u: goto L_088AD6B4;
    case 482u: goto L_088AD6BC;
    case 483u: goto L_088AD6C4;
    case 484u: goto L_088AD6CC;
    case 485u: goto L_088AD6D4;
    case 486u: goto L_088AD6DC;
    case 487u: goto L_088AD6E4;
    case 488u: goto L_088AD6EC;
    case 489u: goto L_088AD6F4;
    case 490u: goto L_088AD6FC;
    case 491u: goto L_088AD704;
    case 492u: goto L_088AD70C;
    case 493u: goto L_088AD714;
    case 494u: goto L_088AD71C;
    case 495u: goto L_088AD724;
    case 496u: goto L_088AD72C;
    case 497u: goto L_088AD734;
    case 498u: goto L_088AD73C;
    case 499u: goto L_088AD744;
    case 500u: goto L_088AD74C;
    case 501u: goto L_088AD754;
    case 502u: goto L_088AD75C;
    case 503u: goto L_088AD764;
    case 504u: goto L_088AD76C;
    case 505u: goto L_088AD774;
    case 506u: goto L_088AD77C;
    case 507u: goto L_088AD784;
    case 508u: goto L_088AD78C;
    case 509u: goto L_088AD794;
    case 510u: goto L_088AD79C;
    case 511u: goto L_088AD7A4;
    case 512u: goto L_088AD7AC;
    case 513u: goto L_088AD7B4;
    case 514u: goto L_088AD7BC;
    case 515u: goto L_088AD7C4;
    case 516u: goto L_088AD7CC;
    case 517u: goto L_088AD7D4;
    case 518u: goto L_088AD7DC;
    case 519u: goto L_088AD7E4;
    case 520u: goto L_088AD7EC;
    case 521u: goto L_088AD7F4;
    case 522u: goto L_088AD7FC;
    case 523u: goto L_088AD804;
    case 524u: goto L_088AD80C;
    case 525u: goto L_088AD814;
    case 526u: goto L_088AD81C;
    case 527u: goto L_088AD824;
    case 528u: goto L_088AD82C;
    case 529u: goto L_088AD834;
    case 530u: goto L_088AD83C;
    case 531u: goto L_088AD844;
    case 532u: goto L_088AD84C;
    case 533u: goto L_088AD854;
    case 534u: goto L_088AD85C;
    case 535u: goto L_088AD864;
    case 536u: goto L_088AD86C;
    case 537u: goto L_088AD874;
    case 538u: goto L_088AD884;
    case 539u: goto L_088AD89C;
    case 540u: goto L_088AD8B0;
    case 541u: goto L_088AD8B8;
    case 542u: goto L_088AD8D0;
    case 543u: goto L_088AD8E8;
    case 544u: goto L_088AD900;
    case 545u: goto L_088AD924;
    case 546u: goto L_088AD92C;
    case 547u: goto L_088AD944;
    case 548u: goto L_088AD95C;
    case 549u: goto L_088AD96C;
    case 550u: goto L_088AD97C;
    case 551u: goto L_088AD9D8;
    case 552u: goto L_088AD9E8;
    case 553u: goto L_088AD9F8;
    case 554u: goto L_088ADA08;
    case 555u: goto L_088ADA18;
    case 556u: goto L_088ADA40;
    case 557u: goto L_088ADA5C;
    case 558u: goto L_088ADA6C;
    case 559u: goto L_088ADA84;
    case 560u: goto L_088ADAA0;
    case 561u: goto L_088ADAAC;
    case 562u: goto L_088ADAD8;
    case 563u: goto L_088ADAF4;
    case 564u: goto L_088ADB0C;
    case 565u: goto L_088ADB30;
    case 566u: goto L_088ADB38;
    case 567u: goto L_088ADB50;
    case 568u: goto L_088ADB68;
    case 569u: goto L_088ADB7C;
    case 570u: goto L_088ADB84;
    case 571u: goto L_088ADB9C;
    case 572u: goto L_088ADBB0;
    case 573u: goto L_088ADBC4;
    case 574u: goto L_088ADBE0;
    case 575u: goto L_088ADBF8;
    case 576u: goto L_088ADC1C;
    case 577u: goto L_088ADC34;
    case 578u: goto L_088ADC44;
    case 579u: goto L_088ADC54;
    case 580u: goto L_088ADCA8;
    case 581u: goto L_088ADCB8;
    case 582u: goto L_088ADCC8;
    case 583u: goto L_088ADCD8;
    case 584u: goto L_088ADCE8;
    case 585u: goto L_088ADD00;
    case 586u: goto L_088ADD14;
    case 587u: goto L_088ADD28;
    case 588u: goto L_088ADD40;
    case 589u: goto L_088ADD54;
    case 590u: goto L_088ADD5C;
    case 591u: goto L_088ADD74;
    case 592u: goto L_088ADD8C;
    case 593u: goto L_088ADDA4;
    case 594u: goto L_088ADDC8;
    case 595u: goto L_088ADDD0;
    case 596u: goto L_088ADDE8;
    case 597u: goto L_088ADE00;
    case 598u: goto L_088ADE10;
    case 599u: goto L_088ADE20;
    case 600u: goto L_088ADE7C;
    case 601u: goto L_088ADE8C;
    case 602u: goto L_088ADE9C;
    case 603u: goto L_088ADEAC;
    case 604u: goto L_088ADEBC;
    case 605u: goto L_088ADEE4;
    case 606u: goto L_088ADF00;
    case 607u: goto L_088ADF10;
    case 608u: goto L_088ADF1C;
    case 609u: goto L_088ADF58;
    case 610u: goto L_088ADF74;
    case 611u: goto L_088ADF8C;
    case 612u: goto L_088ADFA0;
    case 613u: goto L_088ADFA8;
    case 614u: goto L_088ADFC0;
    case 615u: goto L_088ADFD8;
    case 616u: goto L_088ADFE8;
    case 617u: goto L_088ADFF8;
    case 618u: goto L_088AE040;
    case 619u: goto L_088AE050;
    case 620u: goto L_088AE060;
    case 621u: goto L_088AE070;
    case 622u: goto L_088AE080;
    case 623u: goto L_088AE098;
    case 624u: goto L_088AE0AC;
    case 625u: goto L_088AE0B4;
    case 626u: goto L_088AE0CC;
    case 627u: goto L_088AE0E0;
    case 628u: goto L_088AE0F4;
    case 629u: goto L_088AE110;
    case 630u: goto L_088AE128;
    case 631u: goto L_088AE138;
    case 632u: goto L_088AE148;
    case 633u: goto L_088AE19C;
    case 634u: goto L_088AE1AC;
    case 635u: goto L_088AE1BC;
    case 636u: goto L_088AE1CC;
    case 637u: goto L_088AE1E4;
    case 638u: goto L_088AE1EC;
    case 639u: goto L_088AE1F8;
    case 640u: goto L_088AE204;
    case 641u: goto L_088AE20C;
    case 642u: goto L_088AE224;
    case 643u: goto L_088AE23C;
    case 644u: goto L_088AE250;
    case 645u: goto L_088AE258;
    case 646u: goto L_088AE270;
    case 647u: goto L_088AE288;
    case 648u: goto L_088AE2A0;
    case 649u: goto L_088AE2C4;
    case 650u: goto L_088AE2CC;
    case 651u: goto L_088AE2E4;
    case 652u: goto L_088AE2FC;
    case 653u: goto L_088AE30C;
    case 654u: goto L_088AE31C;
    case 655u: goto L_088AE378;
    case 656u: goto L_088AE388;
    case 657u: goto L_088AE398;
    case 658u: goto L_088AE3A8;
    case 659u: goto L_088AE3D0;
    case 660u: goto L_088AE3EC;
    case 661u: goto L_088AE3FC;
    case 662u: goto L_088AE40C;
    case 663u: goto L_088AE41C;
    case 664u: goto L_088AE42C;
    case 665u: goto L_088AE43C;
    case 666u: goto L_088AE448;
    case 667u: goto L_088AE474;
    case 668u: goto L_088AE488;
    case 669u: goto L_088AE4B0;
    case 670u: goto L_088AE4CC;
    case 671u: goto L_088AE4E4;
    case 672u: goto L_088AE4F8;
    case 673u: goto L_088AE500;
    case 674u: goto L_088AE518;
    case 675u: goto L_088AE530;
    case 676u: goto L_088AE54C;
    case 677u: goto L_088AE570;
    case 678u: goto L_088AE578;
    case 679u: goto L_088AE594;
    case 680u: goto L_088AE5AC;
    case 681u: goto L_088AE5CC;
    case 682u: goto L_088AE5E4;
    case 683u: goto L_088AE5F4;
    case 684u: goto L_088AE60C;
    case 685u: goto L_088AE610;
    case 686u: goto L_088AE618;
    case 687u: goto L_088AE630;
    case 688u: goto L_088AE63C;
    case 689u: goto L_088AE648;
    case 690u: goto L_088AE654;
    case 691u: goto L_088AE670;
    case 692u: goto L_088AE688;
    case 693u: goto L_088AE698;
    case 694u: goto L_088AE6A8;
    case 695u: goto L_088AE704;
    case 696u: goto L_088AE714;
    case 697u: goto L_088AE724;
    case 698u: goto L_088AE734;
    case 699u: goto L_088AE744;
    case 700u: goto L_088AE76C;
    case 701u: goto L_088AE788;
    case 702u: goto L_088AE798;
    case 703u: goto L_088AE7A4;
    case 704u: goto L_088AE7D8;
    case 705u: goto L_088AE7F4;
    case 706u: goto L_088AE80C;
    case 707u: goto L_088AE820;
    case 708u: goto L_088AE828;
    case 709u: goto L_088AE840;
    case 710u: goto L_088AE858;
    case 711u: goto L_088AE870;
    case 712u: goto L_088AE894;
    case 713u: goto L_088AE89C;
    case 714u: goto L_088AE8B4;
    case 715u: goto L_088AE8CC;
    case 716u: goto L_088AE8DC;
    case 717u: goto L_088AE8EC;
    case 718u: goto L_088AE948;
    case 719u: goto L_088AE958;
    case 720u: goto L_088AE968;
    case 721u: goto L_088AE978;
    case 722u: goto L_088AE9A0;
    case 723u: goto L_088AE9BC;
    case 724u: goto L_088AE9CC;
    case 725u: goto L_088AE9D8;
    case 726u: goto L_088AEA04;
    case 727u: goto L_088AEA20;
    case 728u: goto L_088AEA38;
    case 729u: goto L_088AEA40;
    case 730u: goto L_088AEA4C;
    case 731u: goto L_088AEA58;
    case 732u: goto L_088AEA60;
    case 733u: goto L_088AEA78;
    case 734u: goto L_088AEA90;
    case 735u: goto L_088AEAA4;
    case 736u: goto L_088AEAAC;
    case 737u: goto L_088AEAC4;
    case 738u: goto L_088AEADC;
    case 739u: goto L_088AEB1C;
    case 740u: goto L_088AEB44;
    case 741u: goto L_088AEB50;
    case 742u: goto L_088AEB58;
    case 743u: goto L_088AEB60;
    case 744u: goto L_088AEB70;
    case 745u: goto L_088AEB7C;
    case 746u: goto L_088AEB84;
    case 747u: goto L_088AEB90;
    case 748u: goto L_088AEB98;
    case 749u: goto L_088AEBA4;
    case 750u: goto L_088AEBAC;
    case 751u: goto L_088AEBB8;
    case 752u: goto L_088AEBC0;
    case 753u: goto L_088AEBCC;
    case 754u: goto L_088AEBD4;
    case 755u: goto L_088AEBE4;
    case 756u: goto L_088AEBF0;
    case 757u: goto L_088AEBF8;
    case 758u: goto L_088AEC00;
    case 759u: goto L_088AEC10;
    case 760u: goto L_088AEC20;
    case 761u: goto L_088AEC2C;
    case 762u: goto L_088AEC34;
    case 763u: goto L_088AEC3C;
    case 764u: goto L_088AEC4C;
    case 765u: goto L_088AEC5C;
    case 766u: goto L_088AEC68;
    case 767u: goto L_088AEC70;
    case 768u: goto L_088AEC78;
    case 769u: goto L_088AEC88;
    case 770u: goto L_088AEC94;
    case 771u: goto L_088AEC9C;
    case 772u: goto L_088AECA8;
    case 773u: goto L_088AECB0;
    case 774u: goto L_088AECC8;
    case 775u: goto L_088AECE0;
    case 776u: goto L_088AECF0;
    case 777u: goto L_088AED00;
    case 778u: goto L_088AED5C;
    case 779u: goto L_088AED6C;
    case 780u: goto L_088AED7C;
    case 781u: goto L_088AED8C;
    case 782u: goto L_088AEDB4;
    case 783u: goto L_088AEDD0;
    case 784u: goto L_088AEDE0;
    case 785u: goto L_088AEDEC;
    case 786u: goto L_088AEE00;
    case 787u: goto L_088AEE10;
    case 788u: goto L_088AEE20;
    case 789u: goto L_088AEE34;
    case 790u: goto L_088AEE44;
    case 791u: goto L_088AEE54;
    case 792u: goto L_088AEE64;
    case 793u: goto L_088AEE70;
    case 794u: goto L_088AEE84;
    case 795u: goto L_088AEE98;
    case 796u: goto L_088AEEC0;
    case 797u: goto L_088AEECC;
    case 798u: goto L_088AEEE8;
    case 799u: goto L_088AEEF4;
    case 800u: goto L_088AEF10;
    case 801u: goto L_088AEF1C;
    case 802u: goto L_088AEF38;
    case 803u: goto L_088AEF44;
    case 804u: goto L_088AEF60;
    case 805u: goto L_088AEF6C;
    case 806u: goto L_088AEFB0;
    case 807u: goto L_088AEFCC;
    case 808u: goto L_088AEFE4;
    case 809u: goto L_088AEFF8;
    case 810u: goto L_088AF000;
    case 811u: goto L_088AF018;
    case 812u: goto L_088AF02C;
    case 813u: goto L_088AF040;
    case 814u: goto L_088AF05C;
    case 815u: goto L_088AF074;
    case 816u: goto L_088AF084;
    case 817u: goto L_088AF094;
    case 818u: goto L_088AF0E8;
    case 819u: goto L_088AF0F8;
    case 820u: goto L_088AF108;
    case 821u: goto L_088AF118;
    case 822u: goto L_088AF140;
    case 823u: goto L_088AF15C;
    case 824u: goto L_088AF16C;
    case 825u: goto L_088AF184;
    case 826u: goto L_088AF1B8;
    case 827u: goto L_088AF1D4;
    case 828u: goto L_088AF1EC;
    case 829u: goto L_088AF200;
    case 830u: goto L_088AF208;
    case 831u: goto L_088AF220;
    case 832u: goto L_088AF234;
    case 833u: goto L_088AF248;
    case 834u: goto L_088AF264;
    case 835u: goto L_088AF27C;
    case 836u: goto L_088AF28C;
    case 837u: goto L_088AF29C;
    case 838u: goto L_088AF2F8;
    case 839u: goto L_088AF308;
    case 840u: goto L_088AF318;
    case 841u: goto L_088AF328;
    case 842u: goto L_088AF34C;
    case 843u: goto L_088AF368;
    case 844u: goto L_088AF390;
    case 845u: goto L_088AF3A0;
    case 846u: goto L_088AF3B8;
    case 847u: goto L_088AF3C8;
    case 848u: goto L_088AF3D8;
    case 849u: goto L_088AF3E8;
    case 850u: goto L_088AF3F8;
    case 851u: goto L_088AF410;
    case 852u: goto L_088AF424;
    case 853u: goto L_088AF42C;
    case 854u: goto L_088AF444;
    case 855u: goto L_088AF460;
    case 856u: goto L_088AF47C;
    case 857u: goto L_088AF488;
    case 858u: goto L_088AF490;
    case 859u: goto L_088AF4B4;
    case 860u: goto L_088AF4BC;
    case 861u: goto L_088AF4D4;
    case 862u: goto L_088AF4EC;
    case 863u: goto L_088AF4FC;
    case 864u: goto L_088AF50C;
    case 865u: goto L_088AF568;
    case 866u: goto L_088AF578;
    case 867u: goto L_088AF588;
    case 868u: goto L_088AF598;
    case 869u: goto L_088AF5C0;
    case 870u: goto L_088AF5DC;
    case 871u: goto L_088AF5EC;
    case 872u: goto L_088AF5F8;
    case 873u: goto L_088AF614;
    case 874u: goto L_088AF630;
    case 875u: goto L_088AF644;
    case 876u: goto L_088AF658;
    case 877u: goto L_088AF66C;
    case 878u: goto L_088AF698;
    case 879u: goto L_088AF6B4;
    case 880u: goto L_088AF6CC;
    case 881u: goto L_088AF6E0;
    case 882u: goto L_088AF6E8;
    case 883u: goto L_088AF700;
    case 884u: goto L_088AF714;
    case 885u: goto L_088AF72C;
    case 886u: goto L_088AF734;
    case 887u: goto L_088AF750;
    case 888u: goto L_088AF768;
    case 889u: goto L_088AF778;
    case 890u: goto L_088AF788;
    case 891u: goto L_088AF7DC;
    case 892u: goto L_088AF7EC;
    case 893u: goto L_088AF7FC;
    case 894u: goto L_088AF80C;
    case 895u: goto L_088AF834;
    case 896u: goto L_088AF850;
    case 897u: goto L_088AF860;
    case 898u: goto L_088AF8B8;
    case 899u: goto L_088AF8C8;
    case 900u: goto L_088AF8D8;
    case 901u: goto L_088AF8E8;
    case 902u: goto L_088AF8F8;
    case 903u: goto L_088AF908;
    case 904u: goto L_088AF93C;
    case 905u: goto L_088AF958;
    case 906u: goto L_088AF970;
    case 907u: goto L_088AF984;
    case 908u: goto L_088AF98C;
    case 909u: goto L_088AF9A4;
    case 910u: goto L_088AF9B8;
    case 911u: goto L_088AF9CC;
    case 912u: goto L_088AF9E8;
    case 913u: goto L_088AFA00;
    case 914u: goto L_088AFA10;
    case 915u: goto L_088AFA20;
    case 916u: goto L_088AFA74;
    case 917u: goto L_088AFA84;
    case 918u: goto L_088AFA94;
    case 919u: goto L_088AFAA4;
    case 920u: goto L_088AFABC;
    case 921u: goto L_088AFAC4;
    case 922u: goto L_088AFAD0;
    case 923u: goto L_088AFADC;
    case 924u: goto L_088AFAE4;
    case 925u: goto L_088AFAFC;
    case 926u: goto L_088AFB14;
    case 927u: goto L_088AFB28;
    case 928u: goto L_088AFB30;
    case 929u: goto L_088AFB48;
    case 930u: goto L_088AFB5C;
    case 931u: goto L_088AFB70;
    case 932u: goto L_088AFB8C;
    case 933u: goto L_088AFBA4;
    case 934u: goto L_088AFBB4;
    case 935u: goto L_088AFBC4;
    case 936u: goto L_088AFC18;
    case 937u: goto L_088AFC28;
    case 938u: goto L_088AFC38;
    case 939u: goto L_088AFC48;
    case 940u: goto L_088AFC58;
    case 941u: goto L_088AFC7C;
    case 942u: goto L_088AFC98;
    case 943u: goto L_088AFCA8;
    case 944u: goto L_088AFCDC;
    case 945u: goto L_088AFCF4;
    case 946u: goto L_088AFD0C;
    case 947u: goto L_088AFD14;
    case 948u: goto L_088AFD20;
    case 949u: goto L_088AFD2C;
    case 950u: goto L_088AFD34;
    case 951u: goto L_088AFD4C;
    case 952u: goto L_088AFD64;
    case 953u: goto L_088AFD78;
    case 954u: goto L_088AFD80;
    case 955u: goto L_088AFD98;
    case 956u: goto L_088AFDAC;
    case 957u: goto L_088AFDC0;
    case 958u: goto L_088AFDDC;
    case 959u: goto L_088AFDF4;
    case 960u: goto L_088AFE04;
    case 961u: goto L_088AFE14;
    case 962u: goto L_088AFE70;
    case 963u: goto L_088AFE80;
    case 964u: goto L_088AFE90;
    case 965u: goto L_088AFEA0;
    case 966u: goto L_088AFEC4;
    case 967u: goto L_088AFEE0;
    case 968u: goto L_088AFEF0;
    case 969u: goto L_088AFF04;
    case 970u: goto L_088AFF2C;
    case 971u: goto L_088AFF3C;
    case 972u: goto L_088AFF54;
    case 973u: goto L_088AFF64;
    case 974u: goto L_088AFF74;
    case 975u: goto L_088AFF84;
    case 976u: goto L_088AFF94;
    case 977u: goto L_088AFFAC;
    case 978u: goto L_088AFFC0;
    case 979u: goto L_088AFFC8;
    case 980u: goto L_088AFFE0;
    case 981u: goto L_088AFFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088AC000:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(69))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(22))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AC014u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC014u) goto L_088AC014;
    return;
L_088AC014:
    ctx.set_gpr(31, 0x088AC01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC01Cu) goto L_088AC01C;
    return;
L_088AC01C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(69))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC038u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC038u) goto L_088AC038;
    return;
L_088AC038:
    ctx.set_gpr(31, 0x088AC040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC040u) goto L_088AC040;
    return;
L_088AC040:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(69))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC060u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088AC060u) goto L_088AC060;
    return;
L_088AC060:
    ctx.set_gpr(31, 0x088AC068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC068u) goto L_088AC068;
    return;
L_088AC068:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(69))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AC078u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AC078u) goto L_088AC078;
    return;
L_088AC078:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088AC09C;
      }
      goto L_088AC080;
    }
L_088AC080:
    ctx.set_gpr(31, 0x088AC088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC088u) goto L_088AC088;
    return;
L_088AC088:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(69))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AC098u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AC098u) goto L_088AC098;
    return;
L_088AC098:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088AC09C;
L_088AC09C:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_088AC670;
    }
    goto L_088AC0A4;
L_088AC0A4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AC66C;
      }
      goto L_088AC0B0;
    }
L_088AC0B0:
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(272), 0u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(47));
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-48));
    goto L_088AC0C8;
L_088AC0C8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
        goto L_088AC11C;
    }
    goto L_088AC0D4;
L_088AC0D4:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(31, 0x088AC0E0u);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(23));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC0E0u) goto L_088AC0E0;
    return;
L_088AC0E0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC0FCu);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC0FCu) goto L_088AC0FC;
    return;
L_088AC0FC:
    ctx.set_gpr(31, 0x088AC104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC104u) goto L_088AC104;
    return;
L_088AC104:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AC114u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AC114u) goto L_088AC114;
    return;
L_088AC114:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088AC184;
      }
      goto L_088AC11C;
    }
L_088AC11C:
    ctx.set_gpr(31, 0x088AC124u);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(23));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC124u) goto L_088AC124;
    return;
L_088AC124:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC140u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC140u) goto L_088AC140;
    return;
L_088AC140:
    ctx.set_gpr(31, 0x088AC148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC148u) goto L_088AC148;
    return;
L_088AC148:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC168u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088AC168u) goto L_088AC168;
    return;
L_088AC168:
    ctx.set_gpr(31, 0x088AC170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC170u) goto L_088AC170;
    return;
L_088AC170:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AC180u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AC180u) goto L_088AC180;
    return;
L_088AC180:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088AC184;
L_088AC184:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 55 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-48));
        goto L_088AC0C8;
    }
    goto L_088AC190;
L_088AC190:
    ctx.set_gpr(31, 0x088AC198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC198u) goto L_088AC198;
    return;
L_088AC198:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(78))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC1B4u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC1B4u) goto L_088AC1B4;
    return;
L_088AC1B4:
    ctx.set_gpr(31, 0x088AC1BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC1BCu) goto L_088AC1BC;
    return;
L_088AC1BC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(78))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC1DCu);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088AC1DCu) goto L_088AC1DC;
    return;
L_088AC1DC:
    ctx.set_gpr(31, 0x088AC1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC1E4u) goto L_088AC1E4;
    return;
L_088AC1E4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(78))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AC1F4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AC1F4u) goto L_088AC1F4;
    return;
L_088AC1F4:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    goto L_088AC200;
L_088AC200:
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[19]);
    ctx.set_gpr(31, 0x088AC20Cu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 196u, 0x088A8A24u>(ctx, &aot_mem) && ctx.pc == 0x088AC20Cu) goto L_088AC20C;
    return;
L_088AC20C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088AC2A8;
      }
      goto L_088AC21C;
    }
L_088AC21C:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[19]);
    ctx.set_gpr(31, 0x088AC228u);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(86));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC228u) goto L_088AC228;
    return;
L_088AC228:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(22))))));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088AC23Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC23Cu) goto L_088AC23C;
    return;
L_088AC23C:
    ctx.set_gpr(31, 0x088AC244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC244u) goto L_088AC244;
    return;
L_088AC244:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC260u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC260u) goto L_088AC260;
    return;
L_088AC260:
    ctx.set_gpr(31, 0x088AC268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC268u) goto L_088AC268;
    return;
L_088AC268:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC288u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088AC288u) goto L_088AC288;
    return;
L_088AC288:
    ctx.set_gpr(31, 0x088AC290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC290u) goto L_088AC290;
    return;
L_088AC290:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AC2A0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AC2A0u) goto L_088AC2A0;
    return;
L_088AC2A0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088AC364;
      }
      goto L_088AC2A8;
    }
L_088AC2A8:
    if (ctx.gpr[20] != 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[19]);
        goto L_088AC2BC;
    }
    goto L_088AC2B0;
L_088AC2B0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC344;
      }
      goto L_088AC2B8;
    }
L_088AC2B8:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[19]);
    goto L_088AC2BC;
L_088AC2BC:
    ctx.set_gpr(31, 0x088AC2C4u);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(86));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC2C4u) goto L_088AC2C4;
    return;
L_088AC2C4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(22))))));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088AC2D8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC2D8u) goto L_088AC2D8;
    return;
L_088AC2D8:
    ctx.set_gpr(31, 0x088AC2E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC2E0u) goto L_088AC2E0;
    return;
L_088AC2E0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC2FCu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC2FCu) goto L_088AC2FC;
    return;
L_088AC2FC:
    ctx.set_gpr(31, 0x088AC304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC304u) goto L_088AC304;
    return;
L_088AC304:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC324u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088AC324u) goto L_088AC324;
    return;
L_088AC324:
    ctx.set_gpr(31, 0x088AC32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC32Cu) goto L_088AC32C;
    return;
L_088AC32C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AC33Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AC33Cu) goto L_088AC33C;
    return;
L_088AC33C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088AC360;
      }
      goto L_088AC344;
    }
L_088AC344:
    ctx.set_gpr(31, 0x088AC34Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC34Cu) goto L_088AC34C;
    return;
L_088AC34C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[19]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.set_gpr(31, 0x088AC360u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AC360u) goto L_088AC360;
    return;
L_088AC360:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088AC364;
L_088AC364:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
        goto L_088AC200;
    }
    goto L_088AC370;
L_088AC370:
    ctx.set_gpr(20, ctx.gpr[23] & 65535u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    goto L_088AC380;
L_088AC380:
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[21]);
    ctx.set_gpr(31, 0x088AC38Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 196u, 0x088A8A24u>(ctx, &aot_mem) && ctx.pc == 0x088AC38Cu) goto L_088AC38C;
    return;
L_088AC38C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088AC428;
      }
      goto L_088AC39C;
    }
L_088AC39C:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[21]);
    ctx.set_gpr(31, 0x088AC3A8u);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(93));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC3A8u) goto L_088AC3A8;
    return;
L_088AC3A8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(22))))));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088AC3BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC3BCu) goto L_088AC3BC;
    return;
L_088AC3BC:
    ctx.set_gpr(31, 0x088AC3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC3C4u) goto L_088AC3C4;
    return;
L_088AC3C4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC3E0u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC3E0u) goto L_088AC3E0;
    return;
L_088AC3E0:
    ctx.set_gpr(31, 0x088AC3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC3E8u) goto L_088AC3E8;
    return;
L_088AC3E8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC408u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088AC408u) goto L_088AC408;
    return;
L_088AC408:
    ctx.set_gpr(31, 0x088AC410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC410u) goto L_088AC410;
    return;
L_088AC410:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AC420u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AC420u) goto L_088AC420;
    return;
L_088AC420:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088AC4E4;
      }
      goto L_088AC428;
    }
L_088AC428:
    if (ctx.gpr[19] != 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[21]);
        goto L_088AC43C;
    }
    goto L_088AC430;
L_088AC430:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC4C4;
      }
      goto L_088AC438;
    }
L_088AC438:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[21]);
    goto L_088AC43C;
L_088AC43C:
    ctx.set_gpr(31, 0x088AC444u);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(93));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC444u) goto L_088AC444;
    return;
L_088AC444:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(22))))));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088AC458u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC458u) goto L_088AC458;
    return;
L_088AC458:
    ctx.set_gpr(31, 0x088AC460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC460u) goto L_088AC460;
    return;
L_088AC460:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC47Cu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC47Cu) goto L_088AC47C;
    return;
L_088AC47C:
    ctx.set_gpr(31, 0x088AC484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC484u) goto L_088AC484;
    return;
L_088AC484:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC4A4u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088AC4A4u) goto L_088AC4A4;
    return;
L_088AC4A4:
    ctx.set_gpr(31, 0x088AC4ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC4ACu) goto L_088AC4AC;
    return;
L_088AC4AC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AC4BCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AC4BCu) goto L_088AC4BC;
    return;
L_088AC4BC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088AC4E0;
      }
      goto L_088AC4C4;
    }
L_088AC4C4:
    ctx.set_gpr(31, 0x088AC4CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC4CCu) goto L_088AC4CC;
    return;
L_088AC4CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[21]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(93))))));
    ctx.set_gpr(31, 0x088AC4E0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AC4E0u) goto L_088AC4E0;
    return;
L_088AC4E0:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_088AC4E4;
L_088AC4E4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
        goto L_088AC380;
    }
    goto L_088AC4F0;
L_088AC4F0:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    goto L_088AC4FC;
L_088AC4FC:
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[19]);
    ctx.set_gpr(31, 0x088AC508u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 196u, 0x088A8A24u>(ctx, &aot_mem) && ctx.pc == 0x088AC508u) goto L_088AC508;
    return;
L_088AC508:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088AC5A4;
      }
      goto L_088AC518;
    }
L_088AC518:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[19]);
    ctx.set_gpr(31, 0x088AC524u);
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC524u) goto L_088AC524;
    return;
L_088AC524:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(22))))));
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088AC538u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC538u) goto L_088AC538;
    return;
L_088AC538:
    ctx.set_gpr(31, 0x088AC540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC540u) goto L_088AC540;
    return;
L_088AC540:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC55Cu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC55Cu) goto L_088AC55C;
    return;
L_088AC55C:
    ctx.set_gpr(31, 0x088AC564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC564u) goto L_088AC564;
    return;
L_088AC564:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC584u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088AC584u) goto L_088AC584;
    return;
L_088AC584:
    ctx.set_gpr(31, 0x088AC58Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC58Cu) goto L_088AC58C;
    return;
L_088AC58C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AC59Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AC59Cu) goto L_088AC59C;
    return;
L_088AC59C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088AC660;
      }
      goto L_088AC5A4;
    }
L_088AC5A4:
    if (ctx.gpr[18] != 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[19]);
        goto L_088AC5B8;
    }
    goto L_088AC5AC;
L_088AC5AC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC640;
      }
      goto L_088AC5B4;
    }
L_088AC5B4:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[19]);
    goto L_088AC5B8;
L_088AC5B8:
    ctx.set_gpr(31, 0x088AC5C0u);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC5C0u) goto L_088AC5C0;
    return;
L_088AC5C0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(22))))));
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088AC5D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC5D4u) goto L_088AC5D4;
    return;
L_088AC5D4:
    ctx.set_gpr(31, 0x088AC5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC5DCu) goto L_088AC5DC;
    return;
L_088AC5DC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC5F8u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC5F8u) goto L_088AC5F8;
    return;
L_088AC5F8:
    ctx.set_gpr(31, 0x088AC600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC600u) goto L_088AC600;
    return;
L_088AC600:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC620u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088AC620u) goto L_088AC620;
    return;
L_088AC620:
    ctx.set_gpr(31, 0x088AC628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC628u) goto L_088AC628;
    return;
L_088AC628:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AC638u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AC638u) goto L_088AC638;
    return;
L_088AC638:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088AC65C;
      }
      goto L_088AC640;
    }
L_088AC640:
    ctx.set_gpr(31, 0x088AC648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC648u) goto L_088AC648;
    return;
L_088AC648:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[19]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(96))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AC65Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AC65Cu) goto L_088AC65C;
    return;
L_088AC65C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088AC660;
L_088AC660:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
        goto L_088AC4FC;
    }
    goto L_088AC66C;
L_088AC66C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_088AC670;
L_088AC670:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
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
L_088AC69C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13629)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AC6A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088AC6C4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088AC6C4u) goto L_088AC6C4;
    return;
L_088AC6C4:
    ctx.set_gpr(31, 0x088AC6CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088AC6CCu) goto L_088AC6CC;
    return;
L_088AC6CC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088AC6F4;
      }
      goto L_088AC6D8;
    }
L_088AC6D8:
    ctx.set_gpr(31, 0x088AC6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088AC6E0u) goto L_088AC6E0;
    return;
L_088AC6E0:
    ctx.set_gpr(31, 0x088AC6E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088AC6E8u) goto L_088AC6E8;
    return;
L_088AC6E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088AC7F0;
      }
      goto L_088AC6F4;
    }
L_088AC6F4:
    ctx.set_gpr(31, 0x088AC6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088AC6FCu) goto L_088AC6FC;
    return;
L_088AC6FC:
    ctx.set_gpr(31, 0x088AC704u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 527u, 0x08861EF0u>(ctx, &aot_mem) && ctx.pc == 0x088AC704u) goto L_088AC704;
    return;
L_088AC704:
    ctx.set_gpr(31, 0x088AC70Cu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC70Cu) goto L_088AC70C;
    return;
L_088AC70C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(62))))));
    ctx.set_gpr(31, 0x088AC718u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088AC9B8;
L_088AC718:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[20] = ctx.fpr[1] / ctx.fpr[0];
      if (branch_taken) {
          goto L_088AC7F0;
      }
      goto L_088AC730;
    }
L_088AC730:
    ctx.set_gpr(31, 0x088AC738u);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 618u, 0x08852494u>(ctx, &aot_mem) && ctx.pc == 0x088AC738u) goto L_088AC738;
    return;
L_088AC738:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(15, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088AC750u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x088AC750u) goto L_088AC750;
    return;
L_088AC750:
    ctx.set_gpr(31, 0x088AC758u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088AC9A8;
L_088AC758:
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(480));
    ctx.set_gpr(18, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(31, 0x088AC76Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088AC998;
L_088AC76C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
      if (branch_taken) {
          goto L_088AC77C;
      }
      goto L_088AC774;
    }
L_088AC774:
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_088AC77C;
L_088AC77C:
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088AC790u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5692));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x088AC790u) goto L_088AC790;
    return;
L_088AC790:
    ctx.set_gpr(31, 0x088AC798u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088AC988;
L_088AC798:
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(480));
    ctx.set_gpr(31, 0x088AC7ACu);
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[3]);
    goto L_088AC978;
L_088AC7AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
      if (branch_taken) {
          goto L_088AC7BC;
      }
      goto L_088AC7B4;
    }
L_088AC7B4:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_088AC7BC;
L_088AC7BC:
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x088AC7D0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5692));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x088AC7D0u) goto L_088AC7D0;
    return;
L_088AC7D0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088AC7E8u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x088AC7E8u) goto L_088AC7E8;
    return;
L_088AC7E8:
    ctx.set_gpr(31, 0x088AC7F0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 618u, 0x08852494u>(ctx, &aot_mem) && ctx.pc == 0x088AC7F0u) goto L_088AC7F0;
    return;
L_088AC7F0:
    ctx.set_gpr(31, 0x088AC7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC7F8u) goto L_088AC7F8;
    return;
L_088AC7F8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(62))))));
    ctx.set_gpr(31, 0x088AC804u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 456u, 0x08846E40u>(ctx, &aot_mem) && ctx.pc == 0x088AC804u) goto L_088AC804;
    return;
L_088AC804:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_088AC95C;
    }
    goto L_088AC810;
L_088AC810:
    ctx.set_gpr(31, 0x088AC818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC818u) goto L_088AC818;
    return;
L_088AC818:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(66))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC834u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC834u) goto L_088AC834;
    return;
L_088AC834:
    ctx.set_gpr(31, 0x088AC83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC83Cu) goto L_088AC83C;
    return;
L_088AC83C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(66))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC860u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088AC860u) goto L_088AC860;
    return;
L_088AC860:
    ctx.set_gpr(31, 0x088AC868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC868u) goto L_088AC868;
    return;
L_088AC868:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(66))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AC878u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 490u, 0x088470A8u>(ctx, &aot_mem) && ctx.pc == 0x088AC878u) goto L_088AC878;
    return;
L_088AC878:
    ctx.set_gpr(31, 0x088AC880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC880u) goto L_088AC880;
    return;
L_088AC880:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(66))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AC890u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AC890u) goto L_088AC890;
    return;
L_088AC890:
    ctx.set_gpr(31, 0x088AC898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC898u) goto L_088AC898;
    return;
L_088AC898:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(64))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AC8A8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AC8A8u) goto L_088AC8A8;
    return;
L_088AC8A8:
    ctx.set_gpr(31, 0x088AC8B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC8B0u) goto L_088AC8B0;
    return;
L_088AC8B0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(67))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC8CCu);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC8CCu) goto L_088AC8CC;
    return;
L_088AC8CC:
    ctx.set_gpr(31, 0x088AC8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC8D4u) goto L_088AC8D4;
    return;
L_088AC8D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(67))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AC8F8u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088AC8F8u) goto L_088AC8F8;
    return;
L_088AC8F8:
    ctx.set_gpr(31, 0x088AC900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC900u) goto L_088AC900;
    return;
L_088AC900:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(67))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AC910u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 490u, 0x088470A8u>(ctx, &aot_mem) && ctx.pc == 0x088AC910u) goto L_088AC910;
    return;
L_088AC910:
    ctx.set_gpr(31, 0x088AC918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC918u) goto L_088AC918;
    return;
L_088AC918:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(67))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AC928u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AC928u) goto L_088AC928;
    return;
L_088AC928:
    ctx.set_gpr(31, 0x088AC930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC930u) goto L_088AC930;
    return;
L_088AC930:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(67))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AC940u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AC940u) goto L_088AC940;
    return;
L_088AC940:
    ctx.set_gpr(31, 0x088AC948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC948u) goto L_088AC948;
    return;
L_088AC948:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(65))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AC958u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AC958u) goto L_088AC958;
    return;
L_088AC958:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_088AC95C;
L_088AC95C:
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
L_088AC978:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 3564u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[1]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AC988:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3604)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AC998:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 3608u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[1]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AC9A8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3648)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AC9B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13556)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AC9D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088ACB40;
      }
      goto L_088AC9FC;
    }
L_088AC9FC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ACB40;
      }
      goto L_088ACA08;
    }
L_088ACA08:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(272)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACB40;
      }
      goto L_088ACA18;
    }
L_088ACA18:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(268)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[12];
        goto L_088ACB3C;
    }
    goto L_088ACA30;
L_088ACA30:
    ctx.set_gpr(31, 0x088ACA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088ACA38u) goto L_088ACA38;
    return;
L_088ACA38:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(71))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACA50u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088ACA50u) goto L_088ACA50;
    return;
L_088ACA50:
    ctx.set_gpr(31, 0x088ACA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088ACA58u) goto L_088ACA58;
    return;
L_088ACA58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(272)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(71))))));
    ctx.set_gpr(31, 0x088ACA70u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088ACA70u) goto L_088ACA70;
    return;
L_088ACA70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(272)));
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(272), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(268), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088ACB40;
      }
      goto L_088ACA94;
    }
L_088ACA94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_088ACB40;
      }
      goto L_088ACA9C;
    }
L_088ACA9C:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[16]);
    goto L_088ACAA0;
L_088ACAA0:
    ctx.set_gpr(31, 0x088ACAA8u);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(79));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088ACAA8u) goto L_088ACAA8;
    return;
L_088ACAA8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088ACAC4u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088ACAC4u) goto L_088ACAC4;
    return;
L_088ACAC4:
    ctx.set_gpr(31, 0x088ACACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088ACACCu) goto L_088ACACC;
    return;
L_088ACACC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088ACAF0u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088ACAF0u) goto L_088ACAF0;
    return;
L_088ACAF0:
    ctx.set_gpr(31, 0x088ACAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088ACAF8u) goto L_088ACAF8;
    return;
L_088ACAF8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACB08u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 490u, 0x088470A8u>(ctx, &aot_mem) && ctx.pc == 0x088ACB08u) goto L_088ACB08;
    return;
L_088ACB08:
    ctx.set_gpr(31, 0x088ACB10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088ACB10u) goto L_088ACB10;
    return;
L_088ACB10:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACB20u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088ACB20u) goto L_088ACB20;
    return;
L_088ACB20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(272)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[16]);
        goto L_088ACAA0;
    }
    goto L_088ACB34;
L_088ACB34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACB40;
      }
      goto L_088ACB3C;
    }
L_088ACB3C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088ACB40;
L_088ACB40:
    ctx.set_gpr(31, 0x088ACB48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACB48u) goto L_088ACB48;
    return;
L_088ACB48:
    ctx.set_gpr(31, 0x088ACB50u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088ACB50u) goto L_088ACB50;
    return;
L_088ACB50:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088ACB78;
      }
      goto L_088ACB5C;
    }
L_088ACB5C:
    ctx.set_gpr(31, 0x088ACB64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACB64u) goto L_088ACB64;
    return;
L_088ACB64:
    ctx.set_gpr(31, 0x088ACB6Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088ACB6Cu) goto L_088ACB6C;
    return;
L_088ACB6C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088ACC24;
      }
      goto L_088ACB78;
    }
L_088ACB78:
    ctx.set_gpr(31, 0x088ACB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACB80u) goto L_088ACB80;
    return;
L_088ACB80:
    ctx.set_gpr(31, 0x088ACB88u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 527u, 0x08861EF0u>(ctx, &aot_mem) && ctx.pc == 0x088ACB88u) goto L_088ACB88;
    return;
L_088ACB88:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACC24;
      }
      goto L_088ACB94;
    }
L_088ACB94:
    ctx.set_gpr(31, 0x088ACB9Cu);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 618u, 0x08852494u>(ctx, &aot_mem) && ctx.pc == 0x088ACB9Cu) goto L_088ACB9C;
    return;
L_088ACB9C:
    ctx.set_gpr(31, 0x088ACBA4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088AC9A8;
L_088ACBA4:
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(480));
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(31, 0x088ACBB8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088AC998;
L_088ACBB8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
      if (branch_taken) {
          goto L_088ACBC8;
      }
      goto L_088ACBC0;
    }
L_088ACBC0:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_088ACBC8;
L_088ACBC8:
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088ACBDCu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5692));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x088ACBDCu) goto L_088ACBDC;
    return;
L_088ACBDC:
    ctx.set_gpr(31, 0x088ACBE4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088AC988;
L_088ACBE4:
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(480));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088ACBF8u);
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[3]);
    goto L_088AC978;
L_088ACBF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
      if (branch_taken) {
          goto L_088ACC08;
      }
      goto L_088ACC00;
    }
L_088ACC00:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_088ACC08;
L_088ACC08:
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x088ACC1Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5692));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x088ACC1Cu) goto L_088ACC1C;
    return;
L_088ACC1C:
    ctx.set_gpr(31, 0x088ACC24u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 618u, 0x08852494u>(ctx, &aot_mem) && ctx.pc == 0x088ACC24u) goto L_088ACC24;
    return;
L_088ACC24:
    ctx.set_gpr(31, 0x088ACC2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088ACC2Cu) goto L_088ACC2C;
    return;
L_088ACC2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACC38u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x088ACC38u) goto L_088ACC38;
    return;
L_088ACC38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD1CC;
      }
      goto L_088ACC40;
    }
L_088ACC40:
    ctx.set_gpr(31, 0x088ACC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACC48u) goto L_088ACC48;
    return;
L_088ACC48:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088ACC68u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x088ACC68u) goto L_088ACC68;
    return;
L_088ACC68:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088ACC74u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 873u, 0x0885B50Cu>(ctx, &aot_mem) && ctx.pc == 0x088ACC74u) goto L_088ACC74;
    return;
L_088ACC74:
    ctx.set_gpr(31, 0x088ACC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACC7Cu) goto L_088ACC7C;
    return;
L_088ACC7C:
    ctx.set_gpr(31, 0x088ACC84u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088ACC84u) goto L_088ACC84;
    return;
L_088ACC84:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088ACF08;
      }
      goto L_088ACC90;
    }
L_088ACC90:
    ctx.set_gpr(31, 0x088ACC98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088ACC98u) goto L_088ACC98;
    return;
L_088ACC98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACCA4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x088ACCA4u) goto L_088ACCA4;
    return;
L_088ACCA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACE6C;
      }
      goto L_088ACCAC;
    }
L_088ACCAC:
    ctx.set_gpr(31, 0x088ACCB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088ACCB4u) goto L_088ACCB4;
    return;
L_088ACCB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACCC0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x088ACCC0u) goto L_088ACCC0;
    return;
L_088ACCC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACD04;
      }
      goto L_088ACCC8;
    }
L_088ACCC8:
    ctx.set_gpr(31, 0x088ACCD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACCD0u) goto L_088ACCD0;
    return;
L_088ACCD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088ACCE8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_088AD2D0;
L_088ACCE8:
    ctx.set_gpr(31, 0x088ACCF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACCF0u) goto L_088ACCF0;
    return;
L_088ACCF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACCFCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 177u, 0x08864B20u>(ctx, &aot_mem) && ctx.pc == 0x088ACCFCu) goto L_088ACCFC;
    return;
L_088ACCFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACEB4;
      }
      goto L_088ACD04;
    }
L_088ACD04:
    ctx.set_gpr(31, 0x088ACD0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088ACD0Cu) goto L_088ACD0C;
    return;
L_088ACD0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACD18u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x088ACD18u) goto L_088ACD18;
    return;
L_088ACD18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACD64;
      }
      goto L_088ACD20;
    }
L_088ACD20:
    ctx.set_gpr(31, 0x088ACD28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACD28u) goto L_088ACD28;
    return;
L_088ACD28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16153u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088ACD48u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    goto L_088AD2D0;
L_088ACD48:
    ctx.set_gpr(31, 0x088ACD50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACD50u) goto L_088ACD50;
    return;
L_088ACD50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACD5Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 177u, 0x08864B20u>(ctx, &aot_mem) && ctx.pc == 0x088ACD5Cu) goto L_088ACD5C;
    return;
L_088ACD5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACEB4;
      }
      goto L_088ACD64;
    }
L_088ACD64:
    ctx.set_gpr(31, 0x088ACD6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088ACD6Cu) goto L_088ACD6C;
    return;
L_088ACD6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACD78u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x088ACD78u) goto L_088ACD78;
    return;
L_088ACD78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACDC4;
      }
      goto L_088ACD80;
    }
L_088ACD80:
    ctx.set_gpr(31, 0x088ACD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACD88u) goto L_088ACD88;
    return;
L_088ACD88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088ACDA8u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    goto L_088AD2D0;
L_088ACDA8:
    ctx.set_gpr(31, 0x088ACDB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACDB0u) goto L_088ACDB0;
    return;
L_088ACDB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACDBCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 177u, 0x08864B20u>(ctx, &aot_mem) && ctx.pc == 0x088ACDBCu) goto L_088ACDBC;
    return;
L_088ACDBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACEB4;
      }
      goto L_088ACDC4;
    }
L_088ACDC4:
    ctx.set_gpr(31, 0x088ACDCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088ACDCCu) goto L_088ACDCC;
    return;
L_088ACDCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACDD8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x088ACDD8u) goto L_088ACDD8;
    return;
L_088ACDD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACE1C;
      }
      goto L_088ACDE0;
    }
L_088ACDE0:
    ctx.set_gpr(31, 0x088ACDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACDE8u) goto L_088ACDE8;
    return;
L_088ACDE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x088ACE00u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_088AD2D0;
L_088ACE00:
    ctx.set_gpr(31, 0x088ACE08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACE08u) goto L_088ACE08;
    return;
L_088ACE08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACE14u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 177u, 0x08864B20u>(ctx, &aot_mem) && ctx.pc == 0x088ACE14u) goto L_088ACE14;
    return;
L_088ACE14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACEB4;
      }
      goto L_088ACE1C;
    }
L_088ACE1C:
    ctx.set_gpr(31, 0x088ACE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACE24u) goto L_088ACE24;
    return;
L_088ACE24:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088ACE44u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x088ACE44u) goto L_088ACE44;
    return;
L_088ACE44:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088ACE50u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 873u, 0x0885B50Cu>(ctx, &aot_mem) && ctx.pc == 0x088ACE50u) goto L_088ACE50;
    return;
L_088ACE50:
    ctx.set_gpr(31, 0x088ACE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACE58u) goto L_088ACE58;
    return;
L_088ACE58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACE64u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 177u, 0x08864B20u>(ctx, &aot_mem) && ctx.pc == 0x088ACE64u) goto L_088ACE64;
    return;
L_088ACE64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACEB4;
      }
      goto L_088ACE6C;
    }
L_088ACE6C:
    ctx.set_gpr(31, 0x088ACE74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACE74u) goto L_088ACE74;
    return;
L_088ACE74:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088ACE94u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x088ACE94u) goto L_088ACE94;
    return;
L_088ACE94:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088ACEA0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 873u, 0x0885B50Cu>(ctx, &aot_mem) && ctx.pc == 0x088ACEA0u) goto L_088ACEA0;
    return;
L_088ACEA0:
    ctx.set_gpr(31, 0x088ACEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACEA8u) goto L_088ACEA8;
    return;
L_088ACEA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACEB4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 177u, 0x08864B20u>(ctx, &aot_mem) && ctx.pc == 0x088ACEB4u) goto L_088ACEB4;
    return;
L_088ACEB4:
    ctx.set_gpr(31, 0x088ACEBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088ACEBCu) goto L_088ACEBC;
    return;
L_088ACEBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACEC8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x088ACEC8u) goto L_088ACEC8;
    return;
L_088ACEC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACEEC;
      }
      goto L_088ACED0;
    }
L_088ACED0:
    ctx.set_gpr(31, 0x088ACED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACED8u) goto L_088ACED8;
    return;
L_088ACED8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACEE4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 176u, 0x08864B10u>(ctx, &aot_mem) && ctx.pc == 0x088ACEE4u) goto L_088ACEE4;
    return;
L_088ACEE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD164;
      }
      goto L_088ACEEC;
    }
L_088ACEEC:
    ctx.set_gpr(31, 0x088ACEF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACEF4u) goto L_088ACEF4;
    return;
L_088ACEF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACF00u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 176u, 0x08864B10u>(ctx, &aot_mem) && ctx.pc == 0x088ACF00u) goto L_088ACF00;
    return;
L_088ACF00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD164;
      }
      goto L_088ACF08;
    }
L_088ACF08:
    ctx.set_gpr(31, 0x088ACF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACF10u) goto L_088ACF10;
    return;
L_088ACF10:
    ctx.set_gpr(31, 0x088ACF18u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088ACF18u) goto L_088ACF18;
    return;
L_088ACF18:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088ACF40;
      }
      goto L_088ACF24;
    }
L_088ACF24:
    ctx.set_gpr(31, 0x088ACF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACF2Cu) goto L_088ACF2C;
    return;
L_088ACF2C:
    ctx.set_gpr(31, 0x088ACF34u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088ACF34u) goto L_088ACF34;
    return;
L_088ACF34:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088AD164;
      }
      goto L_088ACF40;
    }
L_088ACF40:
    ctx.set_gpr(31, 0x088ACF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088ACF48u) goto L_088ACF48;
    return;
L_088ACF48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACF54u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x088ACF54u) goto L_088ACF54;
    return;
L_088ACF54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD11C;
      }
      goto L_088ACF5C;
    }
L_088ACF5C:
    ctx.set_gpr(31, 0x088ACF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088ACF64u) goto L_088ACF64;
    return;
L_088ACF64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACF70u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x088ACF70u) goto L_088ACF70;
    return;
L_088ACF70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACFB4;
      }
      goto L_088ACF78;
    }
L_088ACF78:
    ctx.set_gpr(31, 0x088ACF80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACF80u) goto L_088ACF80;
    return;
L_088ACF80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088ACF98u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_088AD2D0;
L_088ACF98:
    ctx.set_gpr(31, 0x088ACFA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACFA0u) goto L_088ACFA0;
    return;
L_088ACFA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACFACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 177u, 0x08864B20u>(ctx, &aot_mem) && ctx.pc == 0x088ACFACu) goto L_088ACFAC;
    return;
L_088ACFAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD164;
      }
      goto L_088ACFB4;
    }
L_088ACFB4:
    ctx.set_gpr(31, 0x088ACFBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088ACFBCu) goto L_088ACFBC;
    return;
L_088ACFBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ACFC8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x088ACFC8u) goto L_088ACFC8;
    return;
L_088ACFC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD014;
      }
      goto L_088ACFD0;
    }
L_088ACFD0:
    ctx.set_gpr(31, 0x088ACFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ACFD8u) goto L_088ACFD8;
    return;
L_088ACFD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16153u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088ACFF8u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    goto L_088AD2D0;
L_088ACFF8:
    ctx.set_gpr(31, 0x088AD000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088AD000u) goto L_088AD000;
    return;
L_088AD000:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AD00Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 177u, 0x08864B20u>(ctx, &aot_mem) && ctx.pc == 0x088AD00Cu) goto L_088AD00C;
    return;
L_088AD00C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD164;
      }
      goto L_088AD014;
    }
L_088AD014:
    ctx.set_gpr(31, 0x088AD01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088AD01Cu) goto L_088AD01C;
    return;
L_088AD01C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AD028u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD028u) goto L_088AD028;
    return;
L_088AD028:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD074;
      }
      goto L_088AD030;
    }
L_088AD030:
    ctx.set_gpr(31, 0x088AD038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088AD038u) goto L_088AD038;
    return;
L_088AD038:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088AD058u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    goto L_088AD2D0;
L_088AD058:
    ctx.set_gpr(31, 0x088AD060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088AD060u) goto L_088AD060;
    return;
L_088AD060:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AD06Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 177u, 0x08864B20u>(ctx, &aot_mem) && ctx.pc == 0x088AD06Cu) goto L_088AD06C;
    return;
L_088AD06C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD164;
      }
      goto L_088AD074;
    }
L_088AD074:
    ctx.set_gpr(31, 0x088AD07Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088AD07Cu) goto L_088AD07C;
    return;
L_088AD07C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AD088u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD088u) goto L_088AD088;
    return;
L_088AD088:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD0CC;
      }
      goto L_088AD090;
    }
L_088AD090:
    ctx.set_gpr(31, 0x088AD098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088AD098u) goto L_088AD098;
    return;
L_088AD098:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x088AD0B0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_088AD2D0;
L_088AD0B0:
    ctx.set_gpr(31, 0x088AD0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088AD0B8u) goto L_088AD0B8;
    return;
L_088AD0B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AD0C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 177u, 0x08864B20u>(ctx, &aot_mem) && ctx.pc == 0x088AD0C4u) goto L_088AD0C4;
    return;
L_088AD0C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD164;
      }
      goto L_088AD0CC;
    }
L_088AD0CC:
    ctx.set_gpr(31, 0x088AD0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088AD0D4u) goto L_088AD0D4;
    return;
L_088AD0D4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088AD0F4u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x088AD0F4u) goto L_088AD0F4;
    return;
L_088AD0F4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AD100u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 873u, 0x0885B50Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD100u) goto L_088AD100;
    return;
L_088AD100:
    ctx.set_gpr(31, 0x088AD108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088AD108u) goto L_088AD108;
    return;
L_088AD108:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AD114u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 177u, 0x08864B20u>(ctx, &aot_mem) && ctx.pc == 0x088AD114u) goto L_088AD114;
    return;
L_088AD114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD164;
      }
      goto L_088AD11C;
    }
L_088AD11C:
    ctx.set_gpr(31, 0x088AD124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088AD124u) goto L_088AD124;
    return;
L_088AD124:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088AD144u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x088AD144u) goto L_088AD144;
    return;
L_088AD144:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AD150u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 873u, 0x0885B50Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD150u) goto L_088AD150;
    return;
L_088AD150:
    ctx.set_gpr(31, 0x088AD158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088AD158u) goto L_088AD158;
    return;
L_088AD158:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AD164u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 177u, 0x08864B20u>(ctx, &aot_mem) && ctx.pc == 0x088AD164u) goto L_088AD164;
    return;
L_088AD164:
    ctx.set_gpr(31, 0x088AD16Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x088AD16Cu) goto L_088AD16C;
    return;
L_088AD16C:
    ctx.set_gpr(31, 0x088AD174u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088AD174u) goto L_088AD174;
    return;
L_088AD174:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AD180u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 591u, 0x0886A738u>(ctx, &aot_mem) && ctx.pc == 0x088AD180u) goto L_088AD180;
    return;
L_088AD180:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088AD194u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AD194u) goto L_088AD194;
    return;
L_088AD194:
    ctx.set_gpr(31, 0x088AD19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088AD19Cu) goto L_088AD19C;
    return;
L_088AD19C:
    ctx.set_gpr(31, 0x088AD1A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 622u, 0x088571D0u>(ctx, &aot_mem) && ctx.pc == 0x088AD1A4u) goto L_088AD1A4;
    return;
L_088AD1A4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_088AD2B0;
    }
    goto L_088AD1AC;
L_088AD1AC:
    ctx.set_gpr(31, 0x088AD1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x088AD1B4u) goto L_088AD1B4;
    return;
L_088AD1B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AD1C0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 489u, 0x0885DDBCu>(ctx, &aot_mem) && ctx.pc == 0x088AD1C0u) goto L_088AD1C0;
    return;
L_088AD1C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD2B0;
      }
      goto L_088AD1CC;
    }
L_088AD1CC:
    ctx.set_gpr(31, 0x088AD1D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088AD1D4u) goto L_088AD1D4;
    return;
L_088AD1D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AD1E0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x088AD1E0u) goto L_088AD1E0;
    return;
L_088AD1E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD1F0;
      }
      goto L_088AD1E8;
    }
L_088AD1E8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_088AD2B0;
      }
      goto L_088AD1F0;
    }
L_088AD1F0:
    ctx.set_gpr(31, 0x088AD1F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AD1F8u) goto L_088AD1F8;
    return;
L_088AD1F8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(69))))));
    ctx.set_gpr(31, 0x088AD204u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 486u, 0x08846FF8u>(ctx, &aot_mem) && ctx.pc == 0x088AD204u) goto L_088AD204;
    return;
L_088AD204:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_088AD2B0;
    }
    goto L_088AD20C;
L_088AD20C:
    ctx.set_gpr(31, 0x088AD214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088AD214u) goto L_088AD214;
    return;
L_088AD214:
    ctx.set_gpr(31, 0x088AD21Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 924u, 0x0884B6F4u>(ctx, &aot_mem) && ctx.pc == 0x088AD21Cu) goto L_088AD21C;
    return;
L_088AD21C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[2]))));
    ctx.set_gpr(2, ctx.gpr[2] & 40u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD2AC;
      }
      goto L_088AD22C;
    }
L_088AD22C:
    ctx.set_gpr(31, 0x088AD234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x088AD234u) goto L_088AD234;
    return;
L_088AD234:
    ctx.set_gpr(31, 0x088AD23Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088AC69C;
L_088AD23C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD27C;
      }
      goto L_088AD244;
    }
L_088AD244:
    ctx.set_gpr(31, 0x088AD24Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AD24Cu) goto L_088AD24C;
    return;
L_088AD24C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(69))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AD260u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD260u) goto L_088AD260;
    return;
L_088AD260:
    ctx.set_gpr(31, 0x088AD268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x088AD268u) goto L_088AD268;
    return;
L_088AD268:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AD274u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_088AD2C8;
L_088AD274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD2AC;
      }
      goto L_088AD27C;
    }
L_088AD27C:
    ctx.set_gpr(31, 0x088AD284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AD284u) goto L_088AD284;
    return;
L_088AD284:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(69))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AD298u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(25));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD298u) goto L_088AD298;
    return;
L_088AD298:
    ctx.set_gpr(31, 0x088AD2A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x088AD2A0u) goto L_088AD2A0;
    return;
L_088AD2A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AD2ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_088AD2C8;
L_088AD2AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_088AD2B0;
L_088AD2B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AD2C8:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13629), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AD2D0:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4800), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4796), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4792), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(5, 16256u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4788), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AD308:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(39));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[16]);
    goto L_088AD328;
L_088AD328:
    ctx.set_gpr(31, 0x088AD330u);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(23));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AD330u) goto L_088AD330;
    return;
L_088AD330:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AD340u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AD340u) goto L_088AD340;
    return;
L_088AD340:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_088AD378;
    }
    goto L_088AD34C;
L_088AD34C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AD374;
      }
      goto L_088AD358;
    }
L_088AD358:
    ctx.set_gpr(31, 0x088AD360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AD360u) goto L_088AD360;
    return;
L_088AD360:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x088AD36Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 438u, 0x08846B50u>(ctx, &aot_mem) && ctx.pc == 0x088AD36Cu) goto L_088AD36C;
    return;
L_088AD36C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_088AD374;
L_088AD374:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088AD378;
L_088AD378:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 76 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[16]);
        goto L_088AD328;
    }
    goto L_088AD384;
L_088AD384:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(268), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(272), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(276), static_cast<std::uint8_t>(0u));
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
L_088AD3A8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32208)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AD3BC;
      }
      goto L_088AD3B4;
    }
L_088AD3B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32208), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_088AD3BC;
L_088AD3BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AD3C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AD3D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 649u, 0x088C3968u>(ctx, &aot_mem) && ctx.pc == 0x088AD3D4u) goto L_088AD3D4;
    return;
L_088AD3D4:
    ctx.set_gpr(31, 0x088AD3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 628u, 0x088C375Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD3DCu) goto L_088AD3DC;
    return;
L_088AD3DC:
    ctx.set_gpr(31, 0x088AD3E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 610u, 0x088C35C0u>(ctx, &aot_mem) && ctx.pc == 0x088AD3E4u) goto L_088AD3E4;
    return;
L_088AD3E4:
    ctx.set_gpr(31, 0x088AD3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 594u, 0x088C342Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD3ECu) goto L_088AD3EC;
    return;
L_088AD3EC:
    ctx.set_gpr(31, 0x088AD3F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 573u, 0x088C3278u>(ctx, &aot_mem) && ctx.pc == 0x088AD3F4u) goto L_088AD3F4;
    return;
L_088AD3F4:
    ctx.set_gpr(31, 0x088AD3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 550u, 0x088C3094u>(ctx, &aot_mem) && ctx.pc == 0x088AD3FCu) goto L_088AD3FC;
    return;
L_088AD3FC:
    ctx.set_gpr(31, 0x088AD404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 515u, 0x088C2D9Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD404u) goto L_088AD404;
    return;
L_088AD404:
    ctx.set_gpr(31, 0x088AD40Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 498u, 0x088C2C48u>(ctx, &aot_mem) && ctx.pc == 0x088AD40Cu) goto L_088AD40C;
    return;
L_088AD40C:
    ctx.set_gpr(31, 0x088AD414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 466u, 0x088C2988u>(ctx, &aot_mem) && ctx.pc == 0x088AD414u) goto L_088AD414;
    return;
L_088AD414:
    ctx.set_gpr(31, 0x088AD41Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 443u, 0x088C279Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD41Cu) goto L_088AD41C;
    return;
L_088AD41C:
    ctx.set_gpr(31, 0x088AD424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 423u, 0x088C25F8u>(ctx, &aot_mem) && ctx.pc == 0x088AD424u) goto L_088AD424;
    return;
L_088AD424:
    ctx.set_gpr(31, 0x088AD42Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 403u, 0x088C2454u>(ctx, &aot_mem) && ctx.pc == 0x088AD42Cu) goto L_088AD42C;
    return;
L_088AD42C:
    ctx.set_gpr(31, 0x088AD434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 383u, 0x088C22B0u>(ctx, &aot_mem) && ctx.pc == 0x088AD434u) goto L_088AD434;
    return;
L_088AD434:
    ctx.set_gpr(31, 0x088AD43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 369u, 0x088C2164u>(ctx, &aot_mem) && ctx.pc == 0x088AD43Cu) goto L_088AD43C;
    return;
L_088AD43C:
    ctx.set_gpr(31, 0x088AD444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 316u, 0x088C1C68u>(ctx, &aot_mem) && ctx.pc == 0x088AD444u) goto L_088AD444;
    return;
L_088AD444:
    ctx.set_gpr(31, 0x088AD44Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 285u, 0x088C199Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD44Cu) goto L_088AD44C;
    return;
L_088AD44C:
    ctx.set_gpr(31, 0x088AD454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 265u, 0x088C17F8u>(ctx, &aot_mem) && ctx.pc == 0x088AD454u) goto L_088AD454;
    return;
L_088AD454:
    ctx.set_gpr(31, 0x088AD45Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 237u, 0x088C156Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD45Cu) goto L_088AD45C;
    return;
L_088AD45C:
    ctx.set_gpr(31, 0x088AD464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 210u, 0x088C1308u>(ctx, &aot_mem) && ctx.pc == 0x088AD464u) goto L_088AD464;
    return;
L_088AD464:
    ctx.set_gpr(31, 0x088AD46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 183u, 0x088C10A4u>(ctx, &aot_mem) && ctx.pc == 0x088AD46Cu) goto L_088AD46C;
    return;
L_088AD46C:
    ctx.set_gpr(31, 0x088AD474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 165u, 0x088C0ED8u>(ctx, &aot_mem) && ctx.pc == 0x088AD474u) goto L_088AD474;
    return;
L_088AD474:
    ctx.set_gpr(31, 0x088AD47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 137u, 0x088C0C28u>(ctx, &aot_mem) && ctx.pc == 0x088AD47Cu) goto L_088AD47C;
    return;
L_088AD47C:
    ctx.set_gpr(31, 0x088AD484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 114u, 0x088C09FCu>(ctx, &aot_mem) && ctx.pc == 0x088AD484u) goto L_088AD484;
    return;
L_088AD484:
    ctx.set_gpr(31, 0x088AD48Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 81u, 0x088C070Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD48Cu) goto L_088AD48C;
    return;
L_088AD48C:
    ctx.set_gpr(31, 0x088AD494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 49u, 0x088C0468u>(ctx, &aot_mem) && ctx.pc == 0x088AD494u) goto L_088AD494;
    return;
L_088AD494:
    ctx.set_gpr(31, 0x088AD49Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 26u, 0x088C0220u>(ctx, &aot_mem) && ctx.pc == 0x088AD49Cu) goto L_088AD49C;
    return;
L_088AD49C:
    ctx.set_gpr(31, 0x088AD4A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 696u, 0x088BFF54u>(ctx, &aot_mem) && ctx.pc == 0x088AD4A4u) goto L_088AD4A4;
    return;
L_088AD4A4:
    ctx.set_gpr(31, 0x088AD4ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 664u, 0x088BFC94u>(ctx, &aot_mem) && ctx.pc == 0x088AD4ACu) goto L_088AD4AC;
    return;
L_088AD4AC:
    ctx.set_gpr(31, 0x088AD4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 641u, 0x088BFABCu>(ctx, &aot_mem) && ctx.pc == 0x088AD4B4u) goto L_088AD4B4;
    return;
L_088AD4B4:
    ctx.set_gpr(31, 0x088AD4BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 626u, 0x088BF934u>(ctx, &aot_mem) && ctx.pc == 0x088AD4BCu) goto L_088AD4BC;
    return;
L_088AD4BC:
    ctx.set_gpr(31, 0x088AD4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 606u, 0x088BF72Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD4C4u) goto L_088AD4C4;
    return;
L_088AD4C4:
    ctx.set_gpr(31, 0x088AD4CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 586u, 0x088BF540u>(ctx, &aot_mem) && ctx.pc == 0x088AD4CCu) goto L_088AD4CC;
    return;
L_088AD4CC:
    ctx.set_gpr(31, 0x088AD4D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 563u, 0x088BF314u>(ctx, &aot_mem) && ctx.pc == 0x088AD4D4u) goto L_088AD4D4;
    return;
L_088AD4D4:
    ctx.set_gpr(31, 0x088AD4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 537u, 0x088BF0D0u>(ctx, &aot_mem) && ctx.pc == 0x088AD4DCu) goto L_088AD4DC;
    return;
L_088AD4DC:
    ctx.set_gpr(31, 0x088AD4E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 517u, 0x088BEEE0u>(ctx, &aot_mem) && ctx.pc == 0x088AD4E4u) goto L_088AD4E4;
    return;
L_088AD4E4:
    ctx.set_gpr(31, 0x088AD4ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 497u, 0x088BECF4u>(ctx, &aot_mem) && ctx.pc == 0x088AD4ECu) goto L_088AD4EC;
    return;
L_088AD4EC:
    ctx.set_gpr(31, 0x088AD4F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 461u, 0x088BE99Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD4F4u) goto L_088AD4F4;
    return;
L_088AD4F4:
    ctx.set_gpr(31, 0x088AD4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 431u, 0x088BE704u>(ctx, &aot_mem) && ctx.pc == 0x088AD4FCu) goto L_088AD4FC;
    return;
L_088AD4FC:
    ctx.set_gpr(31, 0x088AD504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 417u, 0x088BE5B8u>(ctx, &aot_mem) && ctx.pc == 0x088AD504u) goto L_088AD504;
    return;
L_088AD504:
    ctx.set_gpr(31, 0x088AD50Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 403u, 0x088BE478u>(ctx, &aot_mem) && ctx.pc == 0x088AD50Cu) goto L_088AD50C;
    return;
L_088AD50C:
    ctx.set_gpr(31, 0x088AD514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 392u, 0x088BE378u>(ctx, &aot_mem) && ctx.pc == 0x088AD514u) goto L_088AD514;
    return;
L_088AD514:
    ctx.set_gpr(31, 0x088AD51Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 373u, 0x088BE190u>(ctx, &aot_mem) && ctx.pc == 0x088AD51Cu) goto L_088AD51C;
    return;
L_088AD51C:
    ctx.set_gpr(31, 0x088AD524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 344u, 0x088BDED8u>(ctx, &aot_mem) && ctx.pc == 0x088AD524u) goto L_088AD524;
    return;
L_088AD524:
    ctx.set_gpr(31, 0x088AD52Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 326u, 0x088BDD0Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD52Cu) goto L_088AD52C;
    return;
L_088AD52C:
    ctx.set_gpr(31, 0x088AD534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 312u, 0x088BDBC8u>(ctx, &aot_mem) && ctx.pc == 0x088AD534u) goto L_088AD534;
    return;
L_088AD534:
    ctx.set_gpr(31, 0x088AD53Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 279u, 0x088BD8C8u>(ctx, &aot_mem) && ctx.pc == 0x088AD53Cu) goto L_088AD53C;
    return;
L_088AD53C:
    ctx.set_gpr(31, 0x088AD544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 252u, 0x088BD668u>(ctx, &aot_mem) && ctx.pc == 0x088AD544u) goto L_088AD544;
    return;
L_088AD544:
    ctx.set_gpr(31, 0x088AD54Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 197u, 0x088BD204u>(ctx, &aot_mem) && ctx.pc == 0x088AD54Cu) goto L_088AD54C;
    return;
L_088AD54C:
    ctx.set_gpr(31, 0x088AD554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 161u, 0x088BCEF4u>(ctx, &aot_mem) && ctx.pc == 0x088AD554u) goto L_088AD554;
    return;
L_088AD554:
    ctx.set_gpr(31, 0x088AD55Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 126u, 0x088BCB94u>(ctx, &aot_mem) && ctx.pc == 0x088AD55Cu) goto L_088AD55C;
    return;
L_088AD55C:
    ctx.set_gpr(31, 0x088AD564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 93u, 0x088BC8D0u>(ctx, &aot_mem) && ctx.pc == 0x088AD564u) goto L_088AD564;
    return;
L_088AD564:
    ctx.set_gpr(31, 0x088AD56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 79u, 0x088BC784u>(ctx, &aot_mem) && ctx.pc == 0x088AD56Cu) goto L_088AD56C;
    return;
L_088AD56C:
    ctx.set_gpr(31, 0x088AD574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 25u, 0x088BC1F8u>(ctx, &aot_mem) && ctx.pc == 0x088AD574u) goto L_088AD574;
    return;
L_088AD574:
    ctx.set_gpr(31, 0x088AD57Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 3u, 0x088BC024u>(ctx, &aot_mem) && ctx.pc == 0x088AD57Cu) goto L_088AD57C;
    return;
L_088AD57C:
    ctx.set_gpr(31, 0x088AD584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 668u, 0x088BBD90u>(ctx, &aot_mem) && ctx.pc == 0x088AD584u) goto L_088AD584;
    return;
L_088AD584:
    ctx.set_gpr(31, 0x088AD58Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 641u, 0x088BBB24u>(ctx, &aot_mem) && ctx.pc == 0x088AD58Cu) goto L_088AD58C;
    return;
L_088AD58C:
    ctx.set_gpr(31, 0x088AD594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 618u, 0x088BB8F4u>(ctx, &aot_mem) && ctx.pc == 0x088AD594u) goto L_088AD594;
    return;
L_088AD594:
    ctx.set_gpr(31, 0x088AD59Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 600u, 0x088BB728u>(ctx, &aot_mem) && ctx.pc == 0x088AD59Cu) goto L_088AD59C;
    return;
L_088AD59C:
    ctx.set_gpr(31, 0x088AD5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 582u, 0x088BB55Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD5A4u) goto L_088AD5A4;
    return;
L_088AD5A4:
    ctx.set_gpr(31, 0x088AD5ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 551u, 0x088BB268u>(ctx, &aot_mem) && ctx.pc == 0x088AD5ACu) goto L_088AD5AC;
    return;
L_088AD5AC:
    ctx.set_gpr(31, 0x088AD5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 526u, 0x088BB008u>(ctx, &aot_mem) && ctx.pc == 0x088AD5B4u) goto L_088AD5B4;
    return;
L_088AD5B4:
    ctx.set_gpr(31, 0x088AD5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 508u, 0x088BAE3Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD5BCu) goto L_088AD5BC;
    return;
L_088AD5BC:
    ctx.set_gpr(31, 0x088AD5C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 489u, 0x088BAC54u>(ctx, &aot_mem) && ctx.pc == 0x088AD5C4u) goto L_088AD5C4;
    return;
L_088AD5C4:
    ctx.set_gpr(31, 0x088AD5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 468u, 0x088BAA5Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD5CCu) goto L_088AD5CC;
    return;
L_088AD5CC:
    ctx.set_gpr(31, 0x088AD5D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 442u, 0x088BA814u>(ctx, &aot_mem) && ctx.pc == 0x088AD5D4u) goto L_088AD5D4;
    return;
L_088AD5D4:
    ctx.set_gpr(31, 0x088AD5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 421u, 0x088BA60Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD5DCu) goto L_088AD5DC;
    return;
L_088AD5DC:
    ctx.set_gpr(31, 0x088AD5E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 407u, 0x088BA4C0u>(ctx, &aot_mem) && ctx.pc == 0x088AD5E4u) goto L_088AD5E4;
    return;
L_088AD5E4:
    ctx.set_gpr(31, 0x088AD5ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 372u, 0x088BA194u>(ctx, &aot_mem) && ctx.pc == 0x088AD5ECu) goto L_088AD5EC;
    return;
L_088AD5EC:
    ctx.set_gpr(31, 0x088AD5F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 340u, 0x088B9ECCu>(ctx, &aot_mem) && ctx.pc == 0x088AD5F4u) goto L_088AD5F4;
    return;
L_088AD5F4:
    ctx.set_gpr(31, 0x088AD5FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 298u, 0x088B9B40u>(ctx, &aot_mem) && ctx.pc == 0x088AD5FCu) goto L_088AD5FC;
    return;
L_088AD5FC:
    ctx.set_gpr(31, 0x088AD604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 266u, 0x088B98C8u>(ctx, &aot_mem) && ctx.pc == 0x088AD604u) goto L_088AD604;
    return;
L_088AD604:
    ctx.set_gpr(31, 0x088AD60Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 246u, 0x088B9724u>(ctx, &aot_mem) && ctx.pc == 0x088AD60Cu) goto L_088AD60C;
    return;
L_088AD60C:
    ctx.set_gpr(31, 0x088AD614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 225u, 0x088B957Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD614u) goto L_088AD614;
    return;
L_088AD614:
    ctx.set_gpr(31, 0x088AD61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 210u, 0x088B93F4u>(ctx, &aot_mem) && ctx.pc == 0x088AD61Cu) goto L_088AD61C;
    return;
L_088AD61C:
    ctx.set_gpr(31, 0x088AD624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 190u, 0x088B9208u>(ctx, &aot_mem) && ctx.pc == 0x088AD624u) goto L_088AD624;
    return;
L_088AD624:
    ctx.set_gpr(31, 0x088AD62Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 172u, 0x088B903Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD62Cu) goto L_088AD62C;
    return;
L_088AD62C:
    ctx.set_gpr(31, 0x088AD634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 146u, 0x088B8DF4u>(ctx, &aot_mem) && ctx.pc == 0x088AD634u) goto L_088AD634;
    return;
L_088AD634:
    ctx.set_gpr(31, 0x088AD63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 132u, 0x088B8CA8u>(ctx, &aot_mem) && ctx.pc == 0x088AD63Cu) goto L_088AD63C;
    return;
L_088AD63C:
    ctx.set_gpr(31, 0x088AD644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 109u, 0x088B8A6Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD644u) goto L_088AD644;
    return;
L_088AD644:
    ctx.set_gpr(31, 0x088AD64Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 93u, 0x088B88F0u>(ctx, &aot_mem) && ctx.pc == 0x088AD64Cu) goto L_088AD64C;
    return;
L_088AD64C:
    ctx.set_gpr(31, 0x088AD654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 70u, 0x088B86B4u>(ctx, &aot_mem) && ctx.pc == 0x088AD654u) goto L_088AD654;
    return;
L_088AD654:
    ctx.set_gpr(31, 0x088AD65Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 46u, 0x088B8454u>(ctx, &aot_mem) && ctx.pc == 0x088AD65Cu) goto L_088AD65C;
    return;
L_088AD65C:
    ctx.set_gpr(31, 0x088AD664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 22u, 0x088B8218u>(ctx, &aot_mem) && ctx.pc == 0x088AD664u) goto L_088AD664;
    return;
L_088AD664:
    ctx.set_gpr(31, 0x088AD66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 2u, 0x088B8010u>(ctx, &aot_mem) && ctx.pc == 0x088AD66Cu) goto L_088AD66C;
    return;
L_088AD66C:
    ctx.set_gpr(31, 0x088AD674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 654u, 0x088B7CE4u>(ctx, &aot_mem) && ctx.pc == 0x088AD674u) goto L_088AD674;
    return;
L_088AD674:
    ctx.set_gpr(31, 0x088AD67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 598u, 0x088B7900u>(ctx, &aot_mem) && ctx.pc == 0x088AD67Cu) goto L_088AD67C;
    return;
L_088AD67C:
    ctx.set_gpr(31, 0x088AD684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 576u, 0x088B76CCu>(ctx, &aot_mem) && ctx.pc == 0x088AD684u) goto L_088AD684;
    return;
L_088AD684:
    ctx.set_gpr(31, 0x088AD68Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 553u, 0x088B7490u>(ctx, &aot_mem) && ctx.pc == 0x088AD68Cu) goto L_088AD68C;
    return;
L_088AD68C:
    ctx.set_gpr(31, 0x088AD694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 533u, 0x088B7288u>(ctx, &aot_mem) && ctx.pc == 0x088AD694u) goto L_088AD694;
    return;
L_088AD694:
    ctx.set_gpr(31, 0x088AD69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 509u, 0x088B700Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD69Cu) goto L_088AD69C;
    return;
L_088AD69C:
    ctx.set_gpr(31, 0x088AD6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 478u, 0x088B6D50u>(ctx, &aot_mem) && ctx.pc == 0x088AD6A4u) goto L_088AD6A4;
    return;
L_088AD6A4:
    ctx.set_gpr(31, 0x088AD6ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 423u, 0x088B6824u>(ctx, &aot_mem) && ctx.pc == 0x088AD6ACu) goto L_088AD6AC;
    return;
L_088AD6AC:
    ctx.set_gpr(31, 0x088AD6B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 388u, 0x088B6508u>(ctx, &aot_mem) && ctx.pc == 0x088AD6B4u) goto L_088AD6B4;
    return;
L_088AD6B4:
    ctx.set_gpr(31, 0x088AD6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 355u, 0x088B622Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD6BCu) goto L_088AD6BC;
    return;
L_088AD6BC:
    ctx.set_gpr(31, 0x088AD6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 333u, 0x088B6020u>(ctx, &aot_mem) && ctx.pc == 0x088AD6C4u) goto L_088AD6C4;
    return;
L_088AD6C4:
    ctx.set_gpr(31, 0x088AD6CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 313u, 0x088B5E18u>(ctx, &aot_mem) && ctx.pc == 0x088AD6CCu) goto L_088AD6CC;
    return;
L_088AD6CC:
    ctx.set_gpr(31, 0x088AD6D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 292u, 0x088B5C00u>(ctx, &aot_mem) && ctx.pc == 0x088AD6D4u) goto L_088AD6D4;
    return;
L_088AD6D4:
    ctx.set_gpr(31, 0x088AD6DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 254u, 0x088B58ACu>(ctx, &aot_mem) && ctx.pc == 0x088AD6DCu) goto L_088AD6DC;
    return;
L_088AD6DC:
    ctx.set_gpr(31, 0x088AD6E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 228u, 0x088B5624u>(ctx, &aot_mem) && ctx.pc == 0x088AD6E4u) goto L_088AD6E4;
    return;
L_088AD6E4:
    ctx.set_gpr(31, 0x088AD6ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 198u, 0x088B5380u>(ctx, &aot_mem) && ctx.pc == 0x088AD6ECu) goto L_088AD6EC;
    return;
L_088AD6EC:
    ctx.set_gpr(31, 0x088AD6F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 175u, 0x088B512Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD6F4u) goto L_088AD6F4;
    return;
L_088AD6F4:
    ctx.set_gpr(31, 0x088AD6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 154u, 0x088B4F10u>(ctx, &aot_mem) && ctx.pc == 0x088AD6FCu) goto L_088AD6FC;
    return;
L_088AD6FC:
    ctx.set_gpr(31, 0x088AD704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 132u, 0x088B4CD4u>(ctx, &aot_mem) && ctx.pc == 0x088AD704u) goto L_088AD704;
    return;
L_088AD704:
    ctx.set_gpr(31, 0x088AD70Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 111u, 0x088B4AB8u>(ctx, &aot_mem) && ctx.pc == 0x088AD70Cu) goto L_088AD70C;
    return;
L_088AD70C:
    ctx.set_gpr(31, 0x088AD714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 92u, 0x088B48C0u>(ctx, &aot_mem) && ctx.pc == 0x088AD714u) goto L_088AD714;
    return;
L_088AD714:
    ctx.set_gpr(31, 0x088AD71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 72u, 0x088B46B8u>(ctx, &aot_mem) && ctx.pc == 0x088AD71Cu) goto L_088AD71C;
    return;
L_088AD71C:
    ctx.set_gpr(31, 0x088AD724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4460u>(ctx, &aot_mem) && ctx.pc == 0x088AD724u) goto L_088AD724;
    return;
L_088AD724:
    ctx.set_gpr(31, 0x088AD72Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 27u, 0x088B4234u>(ctx, &aot_mem) && ctx.pc == 0x088AD72Cu) goto L_088AD72C;
    return;
L_088AD72C:
    ctx.set_gpr(31, 0x088AD734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 686u, 0x088B3FC4u>(ctx, &aot_mem) && ctx.pc == 0x088AD734u) goto L_088AD734;
    return;
L_088AD734:
    ctx.set_gpr(31, 0x088AD73Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 663u, 0x088B3D84u>(ctx, &aot_mem) && ctx.pc == 0x088AD73Cu) goto L_088AD73C;
    return;
L_088AD73C:
    ctx.set_gpr(31, 0x088AD744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 638u, 0x088B3B28u>(ctx, &aot_mem) && ctx.pc == 0x088AD744u) goto L_088AD744;
    return;
L_088AD744:
    ctx.set_gpr(31, 0x088AD74Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 606u, 0x088B3814u>(ctx, &aot_mem) && ctx.pc == 0x088AD74Cu) goto L_088AD74C;
    return;
L_088AD74C:
    ctx.set_gpr(31, 0x088AD754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 585u, 0x088B3608u>(ctx, &aot_mem) && ctx.pc == 0x088AD754u) goto L_088AD754;
    return;
L_088AD754:
    ctx.set_gpr(31, 0x088AD75Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 554u, 0x088B3334u>(ctx, &aot_mem) && ctx.pc == 0x088AD75Cu) goto L_088AD75C;
    return;
L_088AD75C:
    ctx.set_gpr(31, 0x088AD764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 530u, 0x088B30E8u>(ctx, &aot_mem) && ctx.pc == 0x088AD764u) goto L_088AD764;
    return;
L_088AD764:
    ctx.set_gpr(31, 0x088AD76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 505u, 0x088B2E50u>(ctx, &aot_mem) && ctx.pc == 0x088AD76Cu) goto L_088AD76C;
    return;
L_088AD76C:
    ctx.set_gpr(31, 0x088AD774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 476u, 0x088B2BC4u>(ctx, &aot_mem) && ctx.pc == 0x088AD774u) goto L_088AD774;
    return;
L_088AD774:
    ctx.set_gpr(31, 0x088AD77Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 433u, 0x088B27A0u>(ctx, &aot_mem) && ctx.pc == 0x088AD77Cu) goto L_088AD77C;
    return;
L_088AD77C:
    ctx.set_gpr(31, 0x088AD784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 402u, 0x088B2544u>(ctx, &aot_mem) && ctx.pc == 0x088AD784u) goto L_088AD784;
    return;
L_088AD784:
    ctx.set_gpr(31, 0x088AD78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 373u, 0x088B22ACu>(ctx, &aot_mem) && ctx.pc == 0x088AD78Cu) goto L_088AD78C;
    return;
L_088AD78C:
    ctx.set_gpr(31, 0x088AD794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 341u, 0x088B1FE8u>(ctx, &aot_mem) && ctx.pc == 0x088AD794u) goto L_088AD794;
    return;
L_088AD794:
    ctx.set_gpr(31, 0x088AD79Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 314u, 0x088B1D50u>(ctx, &aot_mem) && ctx.pc == 0x088AD79Cu) goto L_088AD79C;
    return;
L_088AD79C:
    ctx.set_gpr(31, 0x088AD7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 278u, 0x088B1A14u>(ctx, &aot_mem) && ctx.pc == 0x088AD7A4u) goto L_088AD7A4;
    return;
L_088AD7A4:
    ctx.set_gpr(31, 0x088AD7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 244u, 0x088B16DCu>(ctx, &aot_mem) && ctx.pc == 0x088AD7ACu) goto L_088AD7AC;
    return;
L_088AD7AC:
    ctx.set_gpr(31, 0x088AD7B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 216u, 0x088B141Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD7B4u) goto L_088AD7B4;
    return;
L_088AD7B4:
    ctx.set_gpr(31, 0x088AD7BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 186u, 0x088B1128u>(ctx, &aot_mem) && ctx.pc == 0x088AD7BCu) goto L_088AD7BC;
    return;
L_088AD7BC:
    ctx.set_gpr(31, 0x088AD7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 157u, 0x088B0E8Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD7C4u) goto L_088AD7C4;
    return;
L_088AD7C4:
    ctx.set_gpr(31, 0x088AD7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 140u, 0x088B0CF0u>(ctx, &aot_mem) && ctx.pc == 0x088AD7CCu) goto L_088AD7CC;
    return;
L_088AD7CC:
    ctx.set_gpr(31, 0x088AD7D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 113u, 0x088B0A38u>(ctx, &aot_mem) && ctx.pc == 0x088AD7D4u) goto L_088AD7D4;
    return;
L_088AD7D4:
    ctx.set_gpr(31, 0x088AD7DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 82u, 0x088B0794u>(ctx, &aot_mem) && ctx.pc == 0x088AD7DCu) goto L_088AD7DC;
    return;
L_088AD7DC:
    ctx.set_gpr(31, 0x088AD7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 55u, 0x088B0514u>(ctx, &aot_mem) && ctx.pc == 0x088AD7E4u) goto L_088AD7E4;
    return;
L_088AD7E4:
    ctx.set_gpr(31, 0x088AD7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 31u, 0x088B02B8u>(ctx, &aot_mem) && ctx.pc == 0x088AD7ECu) goto L_088AD7EC;
    return;
L_088AD7EC:
    ctx.set_gpr(31, 0x088AD7F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 3u, 0x088B0024u>(ctx, &aot_mem) && ctx.pc == 0x088AD7F4u) goto L_088AD7F4;
    return;
L_088AD7F4:
    ctx.set_gpr(31, 0x088AD7FCu);
    // nop
    goto L_088AFDDC;
L_088AD7FC:
    ctx.set_gpr(31, 0x088AD804u);
    // nop
    goto L_088AFB8C;
L_088AD804:
    ctx.set_gpr(31, 0x088AD80Cu);
    // nop
    goto L_088AF9E8;
L_088AD80C:
    ctx.set_gpr(31, 0x088AD814u);
    // nop
    goto L_088AF750;
L_088AD814:
    ctx.set_gpr(31, 0x088AD81Cu);
    // nop
    goto L_088AF4D4;
L_088AD81C:
    ctx.set_gpr(31, 0x088AD824u);
    // nop
    goto L_088AF264;
L_088AD824:
    ctx.set_gpr(31, 0x088AD82Cu);
    // nop
    goto L_088AF05C;
L_088AD82C:
    ctx.set_gpr(31, 0x088AD834u);
    // nop
    goto L_088AECC8;
L_088AD834:
    ctx.set_gpr(31, 0x088AD83Cu);
    // nop
    goto L_088AE8B4;
L_088AD83C:
    ctx.set_gpr(31, 0x088AD844u);
    // nop
    goto L_088AE670;
L_088AD844:
    ctx.set_gpr(31, 0x088AD84Cu);
    // nop
    goto L_088AE2E4;
L_088AD84C:
    ctx.set_gpr(31, 0x088AD854u);
    // nop
    goto L_088AE110;
L_088AD854:
    ctx.set_gpr(31, 0x088AD85Cu);
    // nop
    goto L_088ADFC0;
L_088AD85C:
    ctx.set_gpr(31, 0x088AD864u);
    // nop
    goto L_088ADDE8;
L_088AD864:
    ctx.set_gpr(31, 0x088AD86Cu);
    // nop
    goto L_088ADC1C;
L_088AD86C:
    ctx.set_gpr(31, 0x088AD874u);
    // nop
    goto L_088AD944;
L_088AD874:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AD884:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23544)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD8B0;
      }
      goto L_088AD89C;
    }
L_088AD89C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AD8B8;
      }
      goto L_088AD8B0;
    }
L_088AD8B0:
    ctx.set_gpr(31, 0x088AD8B8u);
    // nop
    goto L_088AD944;
L_088AD8B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23544)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AD8D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088AD8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088AD8E8u) goto L_088AD8E8;
    return;
L_088AD8E8:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31100));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x088AD900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088AD900u) goto L_088AD900;
    return;
L_088AD900:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31100));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD92C;
      }
      goto L_088AD924;
    }
L_088AD924:
    ctx.set_gpr(31, 0x088AD92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088AD92Cu) goto L_088AD92C;
    return;
L_088AD92C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AD944:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-9876));
    ctx.set_gpr(31, 0x088AD95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088AD95Cu) goto L_088AD95C;
    return;
L_088AD95C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AD96C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AD97Cu);
    // nop
    goto L_088AD3A8;
L_088AD97C:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9704));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(5708));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23544));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-9752));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(5716));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-10032));
    ctx.set_gpr(31, 0x088AD9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088AD9D8u) goto L_088AD9D8;
    return;
L_088AD9D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AD9E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AD9F8u);
    // nop
    goto L_088AD884;
L_088AD9F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADA08:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23572)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADA18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23544)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088ADA40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088ADA40u) goto L_088ADA40;
    return;
L_088ADA40:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088ADA5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088ADA5Cu) goto L_088ADA5C;
    return;
L_088ADA5C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088ADA6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088ADA6Cu) goto L_088ADA6C;
    return;
L_088ADA6C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5788));
    ctx.set_gpr(31, 0x088ADA84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088ADA84u) goto L_088ADA84;
    return;
L_088ADA84:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9484));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088ADAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088ADAA0u) goto L_088ADAA0;
    return;
L_088ADAA0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ADAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 344u, 0x089F28B4u>(ctx, &aot_mem) && ctx.pc == 0x088ADAACu) goto L_088ADAAC;
    return;
L_088ADAAC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5764));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5772));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(5780));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088ADAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088ADAD8u) goto L_088ADAD8;
    return;
L_088ADAD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADAF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23556)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ADB38;
      }
      goto L_088ADB0C;
    }
L_088ADB0C:
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5892));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5868));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5880));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088ADB30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088ADB30u) goto L_088ADB30;
    return;
L_088ADB30:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(23556), ctx.gpr[2]);
    goto L_088ADB38;
L_088ADB38:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23556)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADB50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23560)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADB7C;
      }
      goto L_088ADB68;
    }
L_088ADB68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ADB84;
      }
      goto L_088ADB7C;
    }
L_088ADB7C:
    ctx.set_gpr(31, 0x088ADB84u);
    // nop
    goto L_088ADC1C;
L_088ADB84:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23560)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADB9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088ADBB0u);
    // nop
    goto L_088ADBE0;
L_088ADBB0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15380));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088ADBC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088ADBC4u) goto L_088ADBC4;
    return;
L_088ADBC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADBE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088ADBF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088ADBF8u) goto L_088ADBF8;
    return;
L_088ADBF8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1096));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADC1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-9148));
    ctx.set_gpr(31, 0x088ADC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088ADC34u) goto L_088ADC34;
    return;
L_088ADC34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADC44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088ADC54u);
    // nop
    goto L_088AD3A8;
L_088ADC54:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(5920));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23560));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-9032));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(5928));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-9316));
    ctx.set_gpr(31, 0x088ADCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088ADCA8u) goto L_088ADCA8;
    return;
L_088ADCA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADCB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088ADCC8u);
    // nop
    goto L_088ADB50;
L_088ADCC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADCD8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28824)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADCE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088ADD00u);
    // nop
    goto L_088ADDE8;
L_088ADD00:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23564)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088ADD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088ADD14u) goto L_088ADD14;
    return;
L_088ADD14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADD28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23564)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADD54;
      }
      goto L_088ADD40;
    }
L_088ADD40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ADD5C;
      }
      goto L_088ADD54;
    }
L_088ADD54:
    ctx.set_gpr(31, 0x088ADD5Cu);
    // nop
    goto L_088ADDE8;
L_088ADD5C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23564)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADD74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088ADD8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088ADD8Cu) goto L_088ADD8C;
    return;
L_088ADD8C:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31236));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(31, 0x088ADDA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088ADDA4u) goto L_088ADDA4;
    return;
L_088ADDA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31236));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADDD0;
      }
      goto L_088ADDC8;
    }
L_088ADDC8:
    ctx.set_gpr(31, 0x088ADDD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088ADDD0u) goto L_088ADDD0;
    return;
L_088ADDD0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADDE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-8688));
    ctx.set_gpr(31, 0x088ADE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088ADE00u) goto L_088ADE00;
    return;
L_088ADE00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADE10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088ADE20u);
    // nop
    goto L_088AD3A8;
L_088ADE20:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8516));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(5952));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23564));
    ctx.set_gpr(6, 2188u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(11376));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-8532));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-8564));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(5960));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-8844));
    ctx.set_gpr(31, 0x088ADE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088ADE7Cu) goto L_088ADE7C;
    return;
L_088ADE7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADE8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088ADE9Cu);
    // nop
    goto L_088ADD28;
L_088ADE9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADEAC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25612)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADEBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23564)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088ADEE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088ADEE4u) goto L_088ADEE4;
    return;
L_088ADEE4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5996));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088ADF00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088ADF00u) goto L_088ADF00;
    return;
L_088ADF00:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088ADF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088ADF10u) goto L_088ADF10;
    return;
L_088ADF10:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ADF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 54u, 0x0898C4FCu>(ctx, &aot_mem) && ctx.pc == 0x088ADF1Cu) goto L_088ADF1C;
    return;
L_088ADF1C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6016));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6020));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(6024));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088ADF58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088ADF58u) goto L_088ADF58;
    return;
L_088ADF58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADF74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23572)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADFA0;
      }
      goto L_088ADF8C;
    }
L_088ADF8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ADFA8;
      }
      goto L_088ADFA0;
    }
L_088ADFA0:
    ctx.set_gpr(31, 0x088ADFA8u);
    // nop
    goto L_088ADFC0;
L_088ADFA8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23572)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADFC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(31, 0x088ADFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088ADFD8u) goto L_088ADFD8;
    return;
L_088ADFD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ADFE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088ADFF8u);
    // nop
    goto L_088AD3A8;
L_088ADFF8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23572));
    ctx.set_gpr(6, 2188u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(11716));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-8080));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-8112));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(6028));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088AE040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088AE040u) goto L_088AE040;
    return;
L_088AE040:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE050:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AE060u);
    // nop
    goto L_088ADF74;
L_088AE060:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE070:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25616)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE080:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23576)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE0AC;
      }
      goto L_088AE098;
    }
L_088AE098:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AE0B4;
      }
      goto L_088AE0AC;
    }
L_088AE0AC:
    ctx.set_gpr(31, 0x088AE0B4u);
    // nop
    goto L_088AE110;
L_088AE0B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23576)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE0CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088AE0E0u);
    // nop
    goto L_088ADBE0;
L_088AE0E0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15484));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088AE0F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088AE0F4u) goto L_088AE0F4;
    return;
L_088AE0F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE110:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7880));
    ctx.set_gpr(31, 0x088AE128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088AE128u) goto L_088AE128;
    return;
L_088AE128:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE138:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AE148u);
    // nop
    goto L_088AD3A8;
L_088AE148:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6048));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23576));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-7764));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(6056));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-7988));
    ctx.set_gpr(31, 0x088AE19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088AE19Cu) goto L_088AE19C;
    return;
L_088AE19C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE1AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AE1BCu);
    // nop
    goto L_088AE080;
L_088AE1BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE1CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23580)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AE20C;
      }
      goto L_088AE1E4;
    }
L_088AE1E4:
    ctx.set_gpr(31, 0x088AE1ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088AE1ECu) goto L_088AE1EC;
    return;
L_088AE1EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088AE1F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088AE1F8u) goto L_088AE1F8;
    return;
L_088AE1F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AE204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088AE204u) goto L_088AE204;
    return;
L_088AE204:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(23580), ctx.gpr[2]);
    goto L_088AE20C;
L_088AE20C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23580)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE224:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23580)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE250;
      }
      goto L_088AE23C;
    }
L_088AE23C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AE258;
      }
      goto L_088AE250;
    }
L_088AE250:
    ctx.set_gpr(31, 0x088AE258u);
    // nop
    goto L_088AE2E4;
L_088AE258:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23580)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE270:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088AE288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088AE288u) goto L_088AE288;
    return;
L_088AE288:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31336));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(31, 0x088AE2A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088AE2A0u) goto L_088AE2A0;
    return;
L_088AE2A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31336));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE2CC;
      }
      goto L_088AE2C4;
    }
L_088AE2C4:
    ctx.set_gpr(31, 0x088AE2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088AE2CCu) goto L_088AE2CC;
    return;
L_088AE2CC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE2E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7412));
    ctx.set_gpr(31, 0x088AE2FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088AE2FCu) goto L_088AE2FC;
    return;
L_088AE2FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE30C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AE31Cu);
    // nop
    goto L_088AD3A8;
L_088AE31C:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6080));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23580));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-7288));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(6088));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-7568));
    ctx.set_gpr(31, 0x088AE378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088AE378u) goto L_088AE378;
    return;
L_088AE378:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE388:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AE398u);
    // nop
    goto L_088AE224;
L_088AE398:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE3A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23580)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088AE3D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088AE3D0u) goto L_088AE3D0;
    return;
L_088AE3D0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6104));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088AE3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088AE3ECu) goto L_088AE3EC;
    return;
L_088AE3EC:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088AE3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE3FCu) goto L_088AE3FC;
    return;
L_088AE3FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(639));
    ctx.set_gpr(31, 0x088AE40Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088AE40Cu) goto L_088AE40C;
    return;
L_088AE40C:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088AE41Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE41Cu) goto L_088AE41C;
    return;
L_088AE41C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(447));
    ctx.set_gpr(31, 0x088AE42Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088AE42Cu) goto L_088AE42C;
    return;
L_088AE42C:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088AE43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE43Cu) goto L_088AE43C;
    return;
L_088AE43C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AE448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 648u, 0x0898F98Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE448u) goto L_088AE448;
    return;
L_088AE448:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088AE474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE474u) goto L_088AE474;
    return;
L_088AE474:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AE488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x088AE488u) goto L_088AE488;
    return;
L_088AE488:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6176));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6204));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(6232));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088AE4B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE4B0u) goto L_088AE4B0;
    return;
L_088AE4B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE4CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23612)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE4F8;
      }
      goto L_088AE4E4;
    }
L_088AE4E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AE500;
      }
      goto L_088AE4F8;
    }
L_088AE4F8:
    ctx.set_gpr(31, 0x088AE500u);
    // nop
    goto L_088AE670;
L_088AE500:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23612)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE518:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088AE530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088AE530u) goto L_088AE530;
    return;
L_088AE530:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31476));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x088AE54Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088AE54Cu) goto L_088AE54C;
    return;
L_088AE54C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31476));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE578;
      }
      goto L_088AE570;
    }
L_088AE570:
    ctx.set_gpr(31, 0x088AE578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088AE578u) goto L_088AE578;
    return;
L_088AE578:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088AE594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088AE594u) goto L_088AE594;
    return;
L_088AE594:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE5AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE654;
      }
      goto L_088AE5CC;
    }
L_088AE5CC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE63C;
      }
      goto L_088AE5E4;
    }
L_088AE5E4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE610;
      }
      goto L_088AE5F4;
    }
L_088AE5F4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE610;
      }
      goto L_088AE60C;
    }
L_088AE60C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088AE610;
L_088AE610:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE63C;
      }
      goto L_088AE618;
    }
L_088AE618:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AE63C;
      }
      goto L_088AE630;
    }
L_088AE630:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088AE63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE63Cu) goto L_088AE63C;
    return;
L_088AE63C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088AE654;
      }
      goto L_088AE648;
    }
L_088AE648:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088AE654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 554u, 0x089467A8u>(ctx, &aot_mem) && ctx.pc == 0x088AE654u) goto L_088AE654;
    return;
L_088AE654:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE670:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6504));
    ctx.set_gpr(31, 0x088AE688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088AE688u) goto L_088AE688;
    return;
L_088AE688:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE698:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AE6A8u);
    // nop
    goto L_088AD3A8;
L_088AE6A8:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6332));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6260));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23612));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4924));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-6348));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-6380));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(6268));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-6888));
    ctx.set_gpr(31, 0x088AE704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088AE704u) goto L_088AE704;
    return;
L_088AE704:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE714:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AE724u);
    // nop
    goto L_088AE4CC;
L_088AE724:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE734:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29332)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE744:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23612)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088AE76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088AE76Cu) goto L_088AE76C;
    return;
L_088AE76C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6288));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088AE788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088AE788u) goto L_088AE788;
    return;
L_088AE788:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088AE798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE798u) goto L_088AE798;
    return;
L_088AE798:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AE7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 410u, 0x088C2510u>(ctx, &aot_mem) && ctx.pc == 0x088AE7A4u) goto L_088AE7A4;
    return;
L_088AE7A4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6312));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6316));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(6320));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088AE7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE7D8u) goto L_088AE7D8;
    return;
L_088AE7D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE7F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23620)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE820;
      }
      goto L_088AE80C;
    }
L_088AE80C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AE828;
      }
      goto L_088AE820;
    }
L_088AE820:
    ctx.set_gpr(31, 0x088AE828u);
    // nop
    goto L_088AE8B4;
L_088AE828:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23620)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE840:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088AE858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088AE858u) goto L_088AE858;
    return;
L_088AE858:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31584));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(31, 0x088AE870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088AE870u) goto L_088AE870;
    return;
L_088AE870:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31584));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE89C;
      }
      goto L_088AE894;
    }
L_088AE894:
    ctx.set_gpr(31, 0x088AE89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088AE89Cu) goto L_088AE89C;
    return;
L_088AE89C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE8B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5924));
    ctx.set_gpr(31, 0x088AE8CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088AE8CCu) goto L_088AE8CC;
    return;
L_088AE8CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE8DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AE8ECu);
    // nop
    goto L_088AD3A8;
L_088AE8EC:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5768));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6324));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23620));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-5800));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(6332));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-6080));
    ctx.set_gpr(31, 0x088AE948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088AE948u) goto L_088AE948;
    return;
L_088AE948:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE958:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AE968u);
    // nop
    goto L_088AE7F4;
L_088AE968:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE978:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23620)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088AE9A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088AE9A0u) goto L_088AE9A0;
    return;
L_088AE9A0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6356));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088AE9BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088AE9BCu) goto L_088AE9BC;
    return;
L_088AE9BC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088AE9CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE9CCu) goto L_088AE9CC;
    return;
L_088AE9CC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AE9D8u);
    // nop
    goto L_088AEA20;
L_088AE9D8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6376));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6380));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(6384));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088AEA04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEA04u) goto L_088AEA04;
    return;
L_088AEA04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AEA20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23628)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AEA60;
      }
      goto L_088AEA38;
    }
L_088AEA38:
    ctx.set_gpr(31, 0x088AEA40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088AEA40u) goto L_088AEA40;
    return;
L_088AEA40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088AEA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088AEA4Cu) goto L_088AEA4C;
    return;
L_088AEA4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AEA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088AEA58u) goto L_088AEA58;
    return;
L_088AEA58:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(23628), ctx.gpr[2]);
    goto L_088AEA60;
L_088AEA60:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23628)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AEA78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23628)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AEAA4;
      }
      goto L_088AEA90;
    }
L_088AEA90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AEAAC;
      }
      goto L_088AEAA4;
    }
L_088AEAA4:
    ctx.set_gpr(31, 0x088AEAACu);
    // nop
    goto L_088AECC8;
L_088AEAAC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23628)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AEAC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088AEADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088AEADCu) goto L_088AEADC;
    return;
L_088AEADC:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31720));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(31, 0x088AEB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088AEB1Cu) goto L_088AEB1C;
    return;
L_088AEB1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31720));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AEB58;
      }
      goto L_088AEB44;
    }
L_088AEB44:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x088AEB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEB50u) goto L_088AEB50;
    return;
L_088AEB50:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088AEB58;
L_088AEB58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AEB70;
      }
      goto L_088AEB60;
    }
L_088AEB60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088AEB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088AEB70u) goto L_088AEB70;
    return;
L_088AEB70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AEB84;
      }
      goto L_088AEB7C;
    }
L_088AEB7C:
    ctx.set_gpr(31, 0x088AEB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088AEB84u) goto L_088AEB84;
    return;
L_088AEB84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AEB98;
      }
      goto L_088AEB90;
    }
L_088AEB90:
    ctx.set_gpr(31, 0x088AEB98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088AEB98u) goto L_088AEB98;
    return;
L_088AEB98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AEBAC;
      }
      goto L_088AEBA4;
    }
L_088AEBA4:
    ctx.set_gpr(31, 0x088AEBACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088AEBACu) goto L_088AEBAC;
    return;
L_088AEBAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AEBC0;
      }
      goto L_088AEBB8;
    }
L_088AEBB8:
    ctx.set_gpr(31, 0x088AEBC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088AEBC0u) goto L_088AEBC0;
    return;
L_088AEBC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AEBD4;
      }
      goto L_088AEBCC;
    }
L_088AEBCC:
    ctx.set_gpr(31, 0x088AEBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088AEBD4u) goto L_088AEBD4;
    return;
L_088AEBD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AEBF8;
      }
      goto L_088AEBE4;
    }
L_088AEBE4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x088AEBF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEBF0u) goto L_088AEBF0;
    return;
L_088AEBF0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088AEBF8;
L_088AEBF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AEC10;
      }
      goto L_088AEC00;
    }
L_088AEC00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088AEC10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088AEC10u) goto L_088AEC10;
    return;
L_088AEC10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AEC34;
      }
      goto L_088AEC20;
    }
L_088AEC20:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088AEC2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEC2Cu) goto L_088AEC2C;
    return;
L_088AEC2C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088AEC34;
L_088AEC34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AEC4C;
      }
      goto L_088AEC3C;
    }
L_088AEC3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088AEC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088AEC4Cu) goto L_088AEC4C;
    return;
L_088AEC4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AEC70;
      }
      goto L_088AEC5C;
    }
L_088AEC5C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088AEC68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEC68u) goto L_088AEC68;
    return;
L_088AEC68:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088AEC70;
L_088AEC70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AEC88;
      }
      goto L_088AEC78;
    }
L_088AEC78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088AEC88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088AEC88u) goto L_088AEC88;
    return;
L_088AEC88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AEC9C;
      }
      goto L_088AEC94;
    }
L_088AEC94:
    ctx.set_gpr(31, 0x088AEC9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088AEC9Cu) goto L_088AEC9C;
    return;
L_088AEC9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AECB0;
      }
      goto L_088AECA8;
    }
L_088AECA8:
    ctx.set_gpr(31, 0x088AECB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088AECB0u) goto L_088AECB0;
    return;
L_088AECB0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AECC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4880));
    ctx.set_gpr(31, 0x088AECE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088AECE0u) goto L_088AECE0;
    return;
L_088AECE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AECF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AED00u);
    // nop
    goto L_088AD3A8;
L_088AED00:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4724));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6388));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23628));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-4756));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(6420));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-5436));
    ctx.set_gpr(31, 0x088AED5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088AED5Cu) goto L_088AED5C;
    return;
L_088AED5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AED6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AED7Cu);
    // nop
    goto L_088AEA78;
L_088AED7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AED8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23628)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AEDB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088AEDB4u) goto L_088AEDB4;
    return;
L_088AEDB4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6440));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x088AEDD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088AEDD0u) goto L_088AEDD0;
    return;
L_088AEDD0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088AEDE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEDE0u) goto L_088AEDE0;
    return;
L_088AEDE0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AEDECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 750u, 0x088F7FBCu>(ctx, &aot_mem) && ctx.pc == 0x088AEDECu) goto L_088AEDEC;
    return;
L_088AEDEC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AEE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEE00u) goto L_088AEE00;
    return;
L_088AEE00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088AEE10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088AEE10u) goto L_088AEE10;
    return;
L_088AEE10:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AEE20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEE20u) goto L_088AEE20;
    return;
L_088AEE20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6820));
    ctx.set_gpr(31, 0x088AEE34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088AEE34u) goto L_088AEE34;
    return;
L_088AEE34:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AEE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEE44u) goto L_088AEE44;
    return;
L_088AEE44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088AEE54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088AEE54u) goto L_088AEE54;
    return;
L_088AEE54:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AEE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEE64u) goto L_088AEE64;
    return;
L_088AEE64:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AEE70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 602u, 0x088F72C4u>(ctx, &aot_mem) && ctx.pc == 0x088AEE70u) goto L_088AEE70;
    return;
L_088AEE70:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AEE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEE84u) goto L_088AEE84;
    return;
L_088AEE84:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088AEE98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088AEE98u) goto L_088AEE98;
    return;
L_088AEE98:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AEEC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEEC0u) goto L_088AEEC0;
    return;
L_088AEEC0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AEECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 739u, 0x08997F88u>(ctx, &aot_mem) && ctx.pc == 0x088AEECCu) goto L_088AEECC;
    return;
L_088AEECC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AEEE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEEE8u) goto L_088AEEE8;
    return;
L_088AEEE8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AEEF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 503u, 0x08996CD0u>(ctx, &aot_mem) && ctx.pc == 0x088AEEF4u) goto L_088AEEF4;
    return;
L_088AEEF4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AEF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEF10u) goto L_088AEF10;
    return;
L_088AEF10:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AEF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 261u, 0x0898D6DCu>(ctx, &aot_mem) && ctx.pc == 0x088AEF1Cu) goto L_088AEF1C;
    return;
L_088AEF1C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AEF38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEF38u) goto L_088AEF38;
    return;
L_088AEF38:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AEF44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 409u, 0x08996500u>(ctx, &aot_mem) && ctx.pc == 0x088AEF44u) goto L_088AEF44;
    return;
L_088AEF44:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AEF60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEF60u) goto L_088AEF60;
    return;
L_088AEF60:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AEF6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 54u, 0x0898C4FCu>(ctx, &aot_mem) && ctx.pc == 0x088AEF6Cu) goto L_088AEF6C;
    return;
L_088AEF6C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6664));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6716));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(6768));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088AEFB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEFB0u) goto L_088AEFB0;
    return;
L_088AEFB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AEFCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23684)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AEFF8;
      }
      goto L_088AEFE4;
    }
L_088AEFE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF000;
      }
      goto L_088AEFF8;
    }
L_088AEFF8:
    ctx.set_gpr(31, 0x088AF000u);
    // nop
    goto L_088AF05C;
L_088AF000:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23684)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF018:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088AF02Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088AF02Cu) goto L_088AF02C;
    return;
L_088AF02C:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31856));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088AF040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088AF040u) goto L_088AF040;
    return;
L_088AF040:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF05C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3964));
    ctx.set_gpr(31, 0x088AF074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088AF074u) goto L_088AF074;
    return;
L_088AF074:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF084:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AF094u);
    // nop
    goto L_088AD3A8;
L_088AF094:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3816));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23684));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-3848));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(6828));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-4072));
    ctx.set_gpr(31, 0x088AF0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088AF0E8u) goto L_088AF0E8;
    return;
L_088AF0E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF0F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AF108u);
    // nop
    goto L_088AEFCC;
L_088AF108:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF118:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23684)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AF140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088AF140u) goto L_088AF140;
    return;
L_088AF140:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6856));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088AF15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088AF15Cu) goto L_088AF15C;
    return;
L_088AF15C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088AF16Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF16Cu) goto L_088AF16C;
    return;
L_088AF16C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6880));
    ctx.set_gpr(31, 0x088AF184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088AF184u) goto L_088AF184;
    return;
L_088AF184:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19292));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6868));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6872));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(6876));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088AF1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF1B8u) goto L_088AF1B8;
    return;
L_088AF1B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF1D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23692)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF200;
      }
      goto L_088AF1EC;
    }
L_088AF1EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF208;
      }
      goto L_088AF200;
    }
L_088AF200:
    ctx.set_gpr(31, 0x088AF208u);
    // nop
    goto L_088AF264;
L_088AF208:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23692)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF220:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088AF234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088AF234u) goto L_088AF234;
    return;
L_088AF234:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31992));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088AF248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088AF248u) goto L_088AF248;
    return;
L_088AF248:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF264:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3444));
    ctx.set_gpr(31, 0x088AF27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088AF27Cu) goto L_088AF27C;
    return;
L_088AF27C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF28C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AF29Cu);
    // nop
    goto L_088AD3A8;
L_088AF29C:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3288));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23692));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-3320));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(6884));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-3552));
    ctx.set_gpr(31, 0x088AF2F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088AF2F8u) goto L_088AF2F8;
    return;
L_088AF2F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF308:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AF318u);
    // nop
    goto L_088AF1D4;
L_088AF318:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF328:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23692)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AF34Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088AF34Cu) goto L_088AF34C;
    return;
L_088AF34C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6908));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088AF368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088AF368u) goto L_088AF368;
    return;
L_088AF368:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6924));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6928));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(6932));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088AF390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF390u) goto L_088AF390;
    return;
L_088AF390:
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3112));
    ctx.set_gpr(31, 0x088AF3A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x088AF3A0u) goto L_088AF3A0;
    return;
L_088AF3A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF3B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AF3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 541u, 0x088D297Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF3C8u) goto L_088AF3C8;
    return;
L_088AF3C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF3D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AF3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 542u, 0x088D2984u>(ctx, &aot_mem) && ctx.pc == 0x088AF3E8u) goto L_088AF3E8;
    return;
L_088AF3E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF3F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23700)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF424;
      }
      goto L_088AF410;
    }
L_088AF410:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF42C;
      }
      goto L_088AF424;
    }
L_088AF424:
    ctx.set_gpr(31, 0x088AF42Cu);
    // nop
    goto L_088AF4D4;
L_088AF42C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23700)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF444:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AF460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088AF460u) goto L_088AF460;
    return;
L_088AF460:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32132));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x088AF47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x088AF47Cu) goto L_088AF47C;
    return;
L_088AF47C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x088AF488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x088AF488u) goto L_088AF488;
    return;
L_088AF488:
    ctx.set_gpr(31, 0x088AF490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088AF490u) goto L_088AF490;
    return;
L_088AF490:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32132));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF4BC;
      }
      goto L_088AF4B4;
    }
L_088AF4B4:
    ctx.set_gpr(31, 0x088AF4BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088AF4BCu) goto L_088AF4BC;
    return;
L_088AF4BC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF4D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2820));
    ctx.set_gpr(31, 0x088AF4ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088AF4ECu) goto L_088AF4EC;
    return;
L_088AF4EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF4FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AF50Cu);
    // nop
    goto L_088AD3A8;
L_088AF50C:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2664));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6936));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23700));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-2696));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(6944));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(156));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-3004));
    ctx.set_gpr(31, 0x088AF568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088AF568u) goto L_088AF568;
    return;
L_088AF568:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF578:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AF588u);
    // nop
    goto L_088AF3F8;
L_088AF588:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF598:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23700)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088AF5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088AF5C0u) goto L_088AF5C0;
    return;
L_088AF5C0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6972));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088AF5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088AF5DCu) goto L_088AF5DC;
    return;
L_088AF5DC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088AF5ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF5ECu) goto L_088AF5EC;
    return;
L_088AF5EC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AF5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 613u, 0x08A73984u>(ctx, &aot_mem) && ctx.pc == 0x088AF5F8u) goto L_088AF5F8;
    return;
L_088AF5F8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088AF614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF614u) goto L_088AF614;
    return;
L_088AF614:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088AF630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF630u) goto L_088AF630;
    return;
L_088AF630:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088AF644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF644u) goto L_088AF644;
    return;
L_088AF644:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088AF658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF658u) goto L_088AF658;
    return;
L_088AF658:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088AF66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088AF66Cu) goto L_088AF66C;
    return;
L_088AF66C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7152));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7180));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(7208));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088AF698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF698u) goto L_088AF698;
    return;
L_088AF698:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF6B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23732)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF6E0;
      }
      goto L_088AF6CC;
    }
L_088AF6CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF6E8;
      }
      goto L_088AF6E0;
    }
L_088AF6E0:
    ctx.set_gpr(31, 0x088AF6E8u);
    // nop
    goto L_088AF750;
L_088AF6E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23732)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF700:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088AF714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088AF714u) goto L_088AF714;
    return;
L_088AF714:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32268));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088AF72Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x088AF72Cu) goto L_088AF72C;
    return;
L_088AF72C:
    ctx.set_gpr(31, 0x088AF734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088AF734u) goto L_088AF734;
    return;
L_088AF734:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF750:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2184));
    ctx.set_gpr(31, 0x088AF768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088AF768u) goto L_088AF768;
    return;
L_088AF768:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF778:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AF788u);
    // nop
    goto L_088AD3A8;
L_088AF788:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2036));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23732));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-2068));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(7236));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-2304));
    ctx.set_gpr(31, 0x088AF7DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088AF7DCu) goto L_088AF7DC;
    return;
L_088AF7DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF7EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AF7FCu);
    // nop
    goto L_088AF6B4;
L_088AF7FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF80C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23732)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AF834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088AF834u) goto L_088AF834;
    return;
L_088AF834:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7260));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088AF850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088AF850u) goto L_088AF850;
    return;
L_088AF850:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088AF860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF860u) goto L_088AF860;
    return;
L_088AF860:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x088AF8B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x088AF8B8u) goto L_088AF8B8;
    return;
L_088AF8B8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x088AF8C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x088AF8C8u) goto L_088AF8C8;
    return;
L_088AF8C8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x088AF8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x088AF8D8u) goto L_088AF8D8;
    return;
L_088AF8D8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088AF8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x088AF8E8u) goto L_088AF8E8;
    return;
L_088AF8E8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x088AF8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 575u, 0x089FAB04u>(ctx, &aot_mem) && ctx.pc == 0x088AF8F8u) goto L_088AF8F8;
    return;
L_088AF8F8:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AF908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF908u) goto L_088AF908;
    return;
L_088AF908:
    ctx.set_gpr(3, 2189u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(9312));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7284));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7292));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(7300));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088AF93Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF93Cu) goto L_088AF93C;
    return;
L_088AF93C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF958:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23744)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF984;
      }
      goto L_088AF970;
    }
L_088AF970:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF98C;
      }
      goto L_088AF984;
    }
L_088AF984:
    ctx.set_gpr(31, 0x088AF98Cu);
    // nop
    goto L_088AF9E8;
L_088AF98C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23744)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF9A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088AF9B8u);
    // nop
    goto L_088ADBE0;
L_088AF9B8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15680));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088AF9CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088AF9CCu) goto L_088AF9CC;
    return;
L_088AF9CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF9E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1520));
    ctx.set_gpr(31, 0x088AFA00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088AFA00u) goto L_088AFA00;
    return;
L_088AFA00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFA10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AFA20u);
    // nop
    goto L_088AD3A8;
L_088AFA20:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7308));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23744));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1404));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(7316));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1628));
    ctx.set_gpr(31, 0x088AFA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088AFA74u) goto L_088AFA74;
    return;
L_088AFA74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFA84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AFA94u);
    // nop
    goto L_088AF958;
L_088AFA94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFAA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23748)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AFAE4;
      }
      goto L_088AFABC;
    }
L_088AFABC:
    ctx.set_gpr(31, 0x088AFAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088AFAC4u) goto L_088AFAC4;
    return;
L_088AFAC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088AFAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088AFAD0u) goto L_088AFAD0;
    return;
L_088AFAD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AFADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088AFADCu) goto L_088AFADC;
    return;
L_088AFADC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(23748), ctx.gpr[2]);
    goto L_088AFAE4;
L_088AFAE4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23748)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFAFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23748)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AFB28;
      }
      goto L_088AFB14;
    }
L_088AFB14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AFB30;
      }
      goto L_088AFB28;
    }
L_088AFB28:
    ctx.set_gpr(31, 0x088AFB30u);
    // nop
    goto L_088AFB8C;
L_088AFB30:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23748)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFB48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088AFB5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088AFB5Cu) goto L_088AFB5C;
    return;
L_088AFB5C:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32408));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088AFB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088AFB70u) goto L_088AFB70;
    return;
L_088AFB70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFB8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1100));
    ctx.set_gpr(31, 0x088AFBA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088AFBA4u) goto L_088AFBA4;
    return;
L_088AFBA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFBB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AFBC4u);
    // nop
    goto L_088AD3A8;
L_088AFBC4:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-936));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23748));
    ctx.set_gpr(6, 2188u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1308));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-952));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-984));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(7344));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1208));
    ctx.set_gpr(31, 0x088AFC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088AFC18u) goto L_088AFC18;
    return;
L_088AFC18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFC28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AFC38u);
    // nop
    goto L_088AFAFC;
L_088AFC38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFC48:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25308)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFC58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23748)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AFC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088AFC7Cu) goto L_088AFC7C;
    return;
L_088AFC7C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7368));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088AFC98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088AFC98u) goto L_088AFC98;
    return;
L_088AFC98:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AFCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AFCA8u) goto L_088AFCA8;
    return;
L_088AFCA8:
    ctx.set_gpr(3, 2189u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8396));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7392));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7400));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(7408));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088AFCDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AFCDCu) goto L_088AFCDC;
    return;
L_088AFCDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFCF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23760)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AFD34;
      }
      goto L_088AFD0C;
    }
L_088AFD0C:
    ctx.set_gpr(31, 0x088AFD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088AFD14u) goto L_088AFD14;
    return;
L_088AFD14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088AFD20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088AFD20u) goto L_088AFD20;
    return;
L_088AFD20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AFD2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088AFD2Cu) goto L_088AFD2C;
    return;
L_088AFD2C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(23760), ctx.gpr[2]);
    goto L_088AFD34;
L_088AFD34:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23760)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFD4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23760)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AFD78;
      }
      goto L_088AFD64;
    }
L_088AFD64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AFD80;
      }
      goto L_088AFD78;
    }
L_088AFD78:
    ctx.set_gpr(31, 0x088AFD80u);
    // nop
    goto L_088AFDDC;
L_088AFD80:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23760)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFD98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088AFDACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088AFDACu) goto L_088AFDAC;
    return;
L_088AFDAC:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32580));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088AFDC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088AFDC0u) goto L_088AFDC0;
    return;
L_088AFDC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFDDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-508));
    ctx.set_gpr(31, 0x088AFDF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088AFDF4u) goto L_088AFDF4;
    return;
L_088AFDF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFE04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AFE14u);
    // nop
    goto L_088AD3A8;
L_088AFE14:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-352));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-172));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23760));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-384));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(7416));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-616));
    ctx.set_gpr(31, 0x088AFE70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088AFE70u) goto L_088AFE70;
    return;
L_088AFE70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFE80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AFE90u);
    // nop
    goto L_088AFD4C;
L_088AFE90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFEA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23760)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088AFEC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088AFEC4u) goto L_088AFEC4;
    return;
L_088AFEC4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7428));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088AFEE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088AFEE0u) goto L_088AFEE0;
    return;
L_088AFEE0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088AFEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088AFEF0u) goto L_088AFEF0;
    return;
L_088AFEF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088AFF04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 63u, 0x089284A0u>(ctx, &aot_mem) && ctx.pc == 0x088AFF04u) goto L_088AFF04;
    return;
L_088AFF04:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7440));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7444));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(7448));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088AFF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AFF2Cu) goto L_088AFF2C;
    return;
L_088AFF2C:
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-140));
    ctx.set_gpr(31, 0x088AFF3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x088AFF3Cu) goto L_088AFF3C;
    return;
L_088AFF3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFF54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AFF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 431u, 0x088D208Cu>(ctx, &aot_mem) && ctx.pc == 0x088AFF64u) goto L_088AFF64;
    return;
L_088AFF64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFF74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088AFF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 432u, 0x088D2094u>(ctx, &aot_mem) && ctx.pc == 0x088AFF84u) goto L_088AFF84;
    return;
L_088AFF84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFF94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23768)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AFFC0;
      }
      goto L_088AFFAC;
    }
L_088AFFAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AFFC8;
      }
      goto L_088AFFC0;
    }
L_088AFFC0:
    ctx.set_gpr(31, 0x088AFFC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 3u, 0x088B0024u>(ctx, &aot_mem) && ctx.pc == 0x088AFFC8u) goto L_088AFFC8;
    return;
L_088AFFC8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23768)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFFE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088AFFF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088AFFF4u) goto L_088AFFF4;
    return;
L_088AFFF4:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32716));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.pc = 0x088B0000u; return;
}

void recomp_unit_0042(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0042_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_42(Runtime &runtime) {
    runtime.register_generated_unit(42u, 0x088AC000u, 16384u, &recomp_unit_0042, &recomp_unit_0042_entry);
    runtime.register_function(0x088AC000u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC014u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC01Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC038u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC040u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC060u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC068u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC078u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC080u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC088u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC098u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC09Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC104u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC114u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC11Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC124u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC140u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC148u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC168u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC170u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC180u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC184u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC190u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC198u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC200u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC20Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC21Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC228u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC23Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC244u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC260u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC268u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC288u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC290u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC2A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC2A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC2B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC2B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC2BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC2C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC2D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC2E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC2FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC304u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC324u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC32Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC33Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC344u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC34Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC360u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC364u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC370u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC380u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC38Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC39Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC3A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC3BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC3C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC3E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC3E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC408u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC410u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC420u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC428u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC430u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC438u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC43Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC444u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC458u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC460u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC47Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC484u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC508u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC518u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC524u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC538u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC540u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC55Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC564u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC584u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC58Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC59Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC600u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC620u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC628u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC638u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC640u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC648u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC65Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC660u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC66Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC670u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC69Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC704u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC70Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC718u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC730u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC738u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC750u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC758u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC76Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC774u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC77Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC790u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC798u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC804u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC810u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC818u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC834u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC83Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC860u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC868u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC878u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC880u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC890u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC898u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC900u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC910u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC918u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC928u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC930u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC940u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC948u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC958u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC95Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC978u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC988u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC998u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC9A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC9B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC9D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC9FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA08u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA18u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA30u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA38u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA50u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA58u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA70u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA94u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA9Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACAA0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACAA8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACAC4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACACCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACAF0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACAF8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB08u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB10u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB34u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB3Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB40u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB48u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB50u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB64u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB6Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB78u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB80u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB88u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB94u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB9Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBA4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBDCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBE4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBF8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC08u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC1Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC24u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC2Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC38u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC40u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC48u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC68u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC74u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC7Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC84u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC90u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC98u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCA4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCB4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCD0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCE8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCF0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCFCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD04u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD0Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD18u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD28u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD48u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD50u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD64u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD6Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD78u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD80u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD88u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDA8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDB0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDBCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDC4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDCCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDD8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDE0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDE8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE08u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE1Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE24u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE44u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE50u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE58u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE64u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE6Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE74u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE94u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACEA0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACEA8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACEB4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACEBCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACEC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACED0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACED8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACEE4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACEECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACEF4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF08u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF10u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF18u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF24u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF2Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF34u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF40u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF48u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF54u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF64u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF70u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF78u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF80u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF98u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFA0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFB4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFBCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFD0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFD8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFF8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD000u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD00Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD014u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD01Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD028u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD030u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD038u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD058u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD060u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD06Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD074u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD07Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD088u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD090u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD098u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD0B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD0B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD0C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD0CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD0D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD0F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD100u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD108u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD114u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD11Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD124u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD144u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD150u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD158u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD164u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD16Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD174u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD180u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD194u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD19Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD204u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD20Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD214u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD21Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD22Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD234u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD23Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD244u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD24Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD260u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD268u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD274u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD27Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD284u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD298u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD2A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD2ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD2B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD2C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD2D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD308u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD328u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD330u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD340u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD34Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD358u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD360u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD36Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD374u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD378u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD384u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD404u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD40Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD414u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD41Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD424u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD42Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD434u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD43Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD444u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD44Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD454u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD45Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD464u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD46Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD474u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD47Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD484u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD48Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD494u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD49Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD504u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD50Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD514u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD51Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD524u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD52Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD534u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD53Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD544u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD54Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD554u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD55Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD564u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD56Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD574u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD57Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD584u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD58Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD594u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD59Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD604u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD60Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD614u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD61Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD624u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD62Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD634u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD63Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD644u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD64Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD654u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD65Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD664u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD66Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD674u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD67Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD684u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD68Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD694u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD69Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD704u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD70Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD714u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD71Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD724u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD72Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD734u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD73Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD744u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD74Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD754u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD75Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD764u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD76Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD774u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD77Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD784u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD78Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD794u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD79Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD804u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD80Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD814u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD81Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD824u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD82Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD834u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD83Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD844u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD84Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD854u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD85Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD864u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD86Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD874u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD884u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD89Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD8B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD8B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD8D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD8E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD900u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD924u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD92Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD944u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD95Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD96Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD97Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD9D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD9E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD9F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA08u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA18u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA40u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA6Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA84u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADAA0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADAACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADAD8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADAF4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB0Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB30u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB38u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB50u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB68u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB7Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB84u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB9Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADBB0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADBC4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADBE0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADBF8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADC1Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADC34u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADC44u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADC54u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADCA8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADCB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADCC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADCD8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADCE8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD28u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD40u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD54u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD74u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD8Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDA4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDD0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDE8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADE00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADE10u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADE20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADE7Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADE8Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADE9Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADEACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADEBCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADEE4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF10u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF1Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF58u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF74u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF8Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFA0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFA8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFD8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFE8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFF8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE040u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE050u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE060u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE070u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE080u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE098u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE110u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE128u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE138u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE148u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE19Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE204u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE20Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE224u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE23Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE250u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE258u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE270u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE288u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE2A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE2C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE2CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE2E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE2FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE30Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE31Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE378u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE388u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE398u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE3A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE3D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE3ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE3FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE40Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE41Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE42Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE43Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE448u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE474u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE488u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE4B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE4CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE4E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE4F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE500u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE518u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE530u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE54Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE570u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE578u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE594u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE60Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE610u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE618u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE630u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE63Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE648u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE654u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE670u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE688u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE698u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE6A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE704u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE714u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE724u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE734u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE744u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE76Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE788u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE798u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE7A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE7D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE7F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE80Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE820u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE828u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE840u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE858u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE870u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE894u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE89Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE8B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE8CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE8DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE8ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE948u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE958u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE968u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE978u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA04u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA38u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA40u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA4Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA58u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA60u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA78u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA90u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEAA4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEAACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEAC4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEADCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB1Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB44u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB50u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB58u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB60u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB70u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB7Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB84u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB90u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB98u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBA4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBCCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBD4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBE4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBF0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBF8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC10u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC2Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC34u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC3Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC4Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC68u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC70u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC78u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC88u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC94u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC9Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AECA8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AECB0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AECC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AECE0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AECF0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AED00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AED5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AED6Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AED7Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AED8Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEDB4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEDD0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEDE0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEDECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE10u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE34u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE44u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE54u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE64u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE70u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE84u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE98u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEEC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEECCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEEE8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEEF4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF10u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF1Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF38u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF44u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF60u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF6Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEFB0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEFCCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEFE4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEFF8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF000u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF018u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF02Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF040u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF05Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF074u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF084u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF094u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF0E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF0F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF108u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF118u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF140u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF15Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF16Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF184u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF1B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF1D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF1ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF200u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF208u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF220u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF234u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF248u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF264u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF27Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF28Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF29Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF2F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF308u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF318u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF328u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF34Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF368u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF390u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF410u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF424u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF42Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF444u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF460u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF47Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF488u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF490u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF4B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF4BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF4D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF4ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF4FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF50Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF568u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF578u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF588u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF598u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF5C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF5DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF5ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF5F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF614u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF630u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF644u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF658u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF66Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF698u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF6B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF6CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF6E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF6E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF700u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF714u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF72Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF734u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF750u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF768u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF778u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF788u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF7DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF7ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF7FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF80Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF834u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF850u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF860u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF8B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF8C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF8D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF8E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF8F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF908u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF93Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF958u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF970u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF984u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF98Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF9A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF9B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF9CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF9E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFA00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFA10u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFA20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFA74u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFA84u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFA94u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFAA4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFABCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFAC4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFAD0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFADCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFAE4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFAFCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFB14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFB28u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFB30u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFB48u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFB5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFB70u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFB8Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFBA4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFBB4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFBC4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFC18u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFC28u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFC38u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFC48u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFC58u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFC7Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFC98u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFCA8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFCDCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFCF4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD0Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD2Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD34u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD4Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD64u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD78u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD80u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD98u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFDACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFDC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFDDCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFDF4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE04u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE70u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE80u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE90u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFEA0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFEC4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFEE0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFEF0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF04u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF2Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF3Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF54u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF64u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF74u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF84u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF94u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFFACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFFC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFFC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFFE0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFFF4u, &recomp_unit_0042, "recomp_unit_0042");
}
} // namespace psprecomp
