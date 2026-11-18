#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0169[4094] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 5, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    0, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 0, 31,
    0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 41, 0, 42, 0, 43,
    0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 49, 0, 50, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 54,
    0, 55, 0, 56, 0, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 0, 64, 0, 65, 0, 66, 0, 0, 67, 68, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 77, 0, 78, 0, 0, 0,
    79, 0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0,
    89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101,
    0, 0, 102, 0, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0,
    114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 123, 0, 124, 0, 0, 0,
    0, 125, 0, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 131, 132, 0, 133, 134, 135, 0, 0, 0, 0, 136, 0, 137, 0, 138,
    0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 0, 147, 0, 148, 0, 149, 150,
    0, 151, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 0, 158, 159, 0, 160, 0, 0, 0, 161, 0,
    162, 0, 163, 0, 164, 0, 165, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 173, 0,
    174, 0, 0, 175, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 181, 182, 0, 183, 0, 0, 0, 184, 185, 0, 0,
    0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 0, 195, 0, 0, 196, 0, 197, 198, 0, 0, 0, 0,
    199, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 206,
    0, 207, 0, 0, 0, 208, 0, 209, 0, 0, 210, 0, 0, 211, 0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 0, 216, 0, 217, 0, 218, 0, 219,
    0, 0, 220, 0, 0, 221, 0, 222, 0, 223, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0,
    0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0,
    237, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 241, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246,
    0, 247, 0, 248, 0, 0, 249, 0, 250, 0, 0, 251, 0, 252, 0, 253, 0, 254, 0, 0, 0, 255, 0, 0, 256, 0, 257, 0, 258, 0, 0, 259,
    260, 0, 261, 0, 0, 0, 262, 0, 263, 264, 0, 265, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0,
    271, 0, 272, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279,
    0, 0, 280, 0, 281, 0, 282, 0, 283, 0, 284, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0,
    0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 303, 304, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0,
    0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 316, 317, 0, 0, 0, 0,
    0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 324, 0, 0,
    325, 0, 326, 0, 0, 0, 327, 0, 328, 0, 329, 0, 330, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0,
    335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 340, 0, 341, 0, 0, 342, 0, 343, 0, 344, 345, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 349,
    0, 350, 0, 0, 351, 0, 0, 352, 353, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 358, 0, 359, 0,
    0, 0, 360, 0, 361, 0, 0, 362, 0, 0, 0, 363, 0, 364, 0, 365, 0, 366, 0, 0, 367, 0, 0, 368, 0, 369, 0, 0, 0, 0, 370, 371,
    0, 372, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 376, 0, 0, 377, 0, 0, 0, 378, 0, 379, 0, 380, 0, 381, 0, 0, 382, 0, 0,
    383, 0, 384, 0, 0, 0, 0, 385, 386, 0, 387, 0, 388, 0, 0, 0, 389, 0, 0, 0, 390, 0, 391, 0, 0, 392, 0, 0, 0, 393, 0, 394,
    0, 395, 0, 396, 0, 0, 397, 0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 400, 401, 0, 402, 0, 403, 0, 0, 0, 404, 0, 0, 405, 406, 0,
    0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 411, 0, 412, 0, 0, 0, 413, 0, 414, 0, 0, 415,
    0, 0, 0, 416, 0, 417, 0, 418, 0, 419, 0, 0, 420, 0, 0, 421, 0, 422, 0, 0, 0, 0, 423, 424, 0, 425, 0, 426, 0, 0, 0, 427,
    0, 0, 0, 428, 0, 429, 0, 0, 430, 0, 0, 0, 431, 0, 432, 0, 433, 0, 434, 0, 0, 435, 0, 0, 436, 0, 437, 0, 0, 0, 0, 438,
    439, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 444, 0, 0, 445, 0, 0, 0, 446, 0, 447, 0, 448, 0, 449, 0, 0, 450, 0,
    0, 0, 451, 0, 452, 0, 0, 0, 0, 453, 454, 0, 455, 0, 456, 0, 0, 0, 457, 0, 0, 458, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0,
    461, 0, 462, 0, 463, 0, 464, 0, 465, 466, 0, 0, 467, 0, 0, 468, 0, 469, 0, 470, 0, 0, 471, 472, 0, 473, 0, 474, 0, 0, 475, 476,
    0, 477, 478, 0, 0, 0, 479, 0, 480, 0, 0, 481, 482, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 489, 0, 0, 0, 490, 0, 491, 0, 0,
    492, 0, 493, 0, 0, 494, 0, 495, 0, 0, 496, 0, 497, 0, 0, 498, 0, 499, 0, 0, 500, 0, 501, 0, 0, 502, 503, 0, 0, 0, 0, 0,
    504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0,
    0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 511, 512, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 521, 522, 0, 0, 523, 0, 0, 0,
    524, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0,
    0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 534, 0, 535, 0, 0, 536, 0, 537,
    0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0,
    0, 543, 0, 0, 544, 0, 545, 0, 0, 546, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0,
    552, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 557, 0, 558, 0, 0,
    559, 0, 560, 561, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0,
    0, 566, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 0,
    0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0,
    0, 576, 0, 577, 0, 578, 0, 0, 0, 0, 579, 0, 580, 0, 0, 581, 0, 582, 0, 583, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 589, 0, 0, 590, 0, 0, 0, 0, 0,
    591, 0, 592, 0, 0, 593, 0, 594, 0, 0, 0, 0, 0, 0, 595, 0, 596, 0, 0, 597, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 0, 601,
    0, 602, 603, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0, 608, 0, 609, 610, 0, 0, 0, 0, 611, 0, 0,
    0, 0, 0, 0, 0, 612, 0, 0, 613, 0, 0, 0, 614, 0, 615, 0, 616, 0, 0, 617, 0, 618, 0, 619, 0, 620, 0, 621, 0, 0, 0, 622,
    0, 623, 0, 624, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 628, 0, 629, 0, 0, 630, 0, 631, 632, 0, 0, 633, 0, 634, 0,
    635, 0, 0, 0, 0, 636, 637, 0, 0, 0, 638, 0, 639, 0, 640, 0, 0, 0, 0, 0, 641, 0, 642, 0, 643, 0, 644, 0, 645, 0, 646, 0,
    647, 0, 648, 0, 649, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 654, 0, 0, 0, 0, 655, 0, 0, 0, 0,
    0, 0, 656, 0, 0, 0, 0, 0, 657, 658, 0, 659, 0, 0, 0, 0, 660, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 663, 0, 0,
    0, 0, 664, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 669, 0, 670, 671, 0, 672, 0, 0, 0, 0, 673, 0, 674, 675, 0, 676, 0, 0, 0,
    0, 677, 0, 678, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 682, 0, 683, 0, 0, 0, 0, 0, 684, 0,
    0, 0, 0, 685, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 690, 691, 0, 692,
    0, 0, 0, 0, 693, 0, 694, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 697, 0,
    698, 0, 0, 0, 699, 700, 0, 701, 0, 0, 0, 702, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 704, 0, 0, 705, 0, 0, 706, 0, 0, 0, 0, 707, 0, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0, 0, 0, 0, 710, 0, 0, 0, 0,
    0, 711, 0, 712, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0,
    0, 0, 716, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 719, 0, 720, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0,
    723, 0, 0, 0, 724, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 726, 0, 727, 0, 0, 0, 728, 0, 0, 0, 0, 729, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 732, 0, 0, 0, 0, 733, 0, 734, 0, 0, 0, 0, 0,
    735, 0, 0, 0, 0, 736, 0, 0, 0, 0, 737, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 740, 0, 0, 741, 0, 0, 742,
    0, 0, 743, 0, 0, 744, 0, 0, 745, 0, 0, 746, 0, 0, 747, 0, 0, 748, 0, 0, 749, 0, 0, 750, 0, 751, 0, 752, 0, 753, 0, 754,
    0, 755, 0, 0, 0, 756, 0, 757, 0, 0, 0, 758, 0, 759, 0, 0, 760, 0, 0, 0, 761, 0, 762, 0, 0, 763, 0, 0, 0, 764, 0, 765,
    0, 0, 0, 0, 0, 766, 0, 767, 0, 768, 0, 769, 0, 0, 770, 0, 771, 0, 772, 0, 0, 773, 0, 774, 0, 775, 0, 0, 776, 0, 777, 0,
    778, 0, 0, 779, 0, 780, 0, 781, 0, 0, 782, 0, 0, 783, 0, 784, 0, 785, 0, 0, 786, 0, 787, 0, 0, 788, 789, 0, 0, 790, 0, 791,
    0, 792, 0, 0, 793, 0, 794, 0, 0, 795, 796, 0, 0, 797, 0, 798, 0, 799, 0, 0, 800, 0, 801, 0, 0, 802, 803, 0, 0, 804, 0, 805,
    0, 806, 0, 0, 807, 0, 808, 0, 0, 809, 810, 0, 0, 811, 0, 812, 0, 813, 0, 0, 814, 0, 815, 0, 0, 816, 817, 0, 0, 818, 0, 819,
    0, 820, 0, 0, 821, 0, 822, 0, 0, 823, 824, 0, 0, 825, 0, 826, 0, 827, 0, 0, 828, 0, 829, 0, 0, 830, 831, 0, 0, 832, 0, 833,
    0, 834, 0, 0, 835, 0, 836, 0, 0, 837, 838, 0, 0, 839, 0, 840, 0, 841, 0, 0, 842, 0, 843, 0, 0, 844, 845, 0, 0, 846, 0, 847,
    0, 0, 0, 848, 0, 849, 0, 0, 850, 0, 851, 0, 0, 0, 852, 0, 853, 0, 0, 854, 0, 855, 0, 0, 0, 856, 0, 857, 0, 0, 858, 0,
    859, 0, 0, 0, 860, 0, 861, 0, 0, 862, 0, 863, 0, 864, 0, 0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 866, 0, 0, 867, 0, 868,
    0, 0, 0, 0, 869, 0, 0, 870, 0, 0, 871, 872, 0, 873, 0, 0, 874, 0, 875, 0, 0, 0, 0, 876, 0, 0, 877, 0, 0, 0, 878, 879,
    0, 0, 880, 0, 0, 881, 0, 882, 0, 0, 0, 883, 0, 0, 884, 0, 0, 885, 0, 0, 0, 886, 0, 887, 0, 0, 888, 0, 0, 0, 0, 0,
    0, 0, 889, 0, 890, 0, 891, 0, 892, 0, 0, 0, 0, 0, 893, 0, 894, 0, 0, 0, 0, 0, 0, 0, 895, 896, 897, 0, 898, 0, 0, 0,
    0, 0, 0, 0, 899, 0, 0, 0, 0, 900, 0, 0, 0, 901, 0, 0, 0, 0, 0, 902, 0, 903, 0, 0, 0, 0, 904, 0, 0, 905, 0, 906,
    0, 907, 0, 908, 0, 0, 0, 0, 909, 910, 0, 911, 912, 0, 0, 0, 0, 0, 913, 0, 0, 0, 914, 0, 0, 0, 0, 0, 915, 0, 0, 0,
    916, 0, 0, 0, 0, 917, 0, 0, 0, 0, 918, 0, 919, 0, 0, 0, 920, 0, 0, 0, 0, 921, 0, 0, 0, 0, 0, 0, 922, 0, 0, 0,
    0, 923, 0, 0, 924, 0, 925, 926, 0, 0, 0, 0, 927, 0, 0, 0, 0, 0, 928, 0, 0, 0, 0, 929, 0, 930, 931, 0, 0, 0, 932, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 933, 0, 0, 0, 0, 934, 0, 0, 0, 0, 0, 0, 0, 935, 0, 0, 0, 0, 0, 0, 0, 936, 0, 0, 0, 0, 937, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 938, 0, 0, 0, 0, 0, 0, 939, 0, 0, 0, 0, 0, 0, 0, 0, 0, 940, 0, 0, 0,
    0, 941, 0, 942, 0, 0, 0, 0, 943, 0, 0, 0, 0, 944, 0, 945, 0, 0, 0, 946, 0, 0, 0, 0, 947, 0, 0, 0, 0, 0, 0, 948,
    0, 0, 0, 0, 949, 0, 0, 950, 0, 951, 952, 0, 0, 0, 0, 953, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 954, 0, 0, 0, 0, 955, 0, 0, 0, 0, 956, 0, 0, 0, 0, 957, 0, 0, 0, 0, 958, 0, 0, 0, 0,
    0, 0, 0, 959, 0, 960, 0, 0, 0, 0, 0, 961, 0, 0, 0, 0, 962, 0, 963, 0, 964, 965, 0, 966, 0, 0, 0, 0, 967, 0, 0, 0,
    968, 0, 0, 0, 0, 0, 969, 0, 0, 0, 0, 0, 0, 970, 0, 0, 0, 0, 971, 0, 0, 972, 0, 973, 974, 0, 0, 0, 0, 975, 0, 0,
    0, 0, 0, 0, 976, 0, 0, 0, 977, 0, 0, 978, 0, 979, 980, 0, 0, 0, 0, 981, 0, 0, 0, 0, 0, 0, 982, 0, 0, 0, 0, 983,
    0, 0, 984, 0, 985, 986, 0, 0, 0, 0, 987, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 988, 0, 989, 0, 0, 0, 990, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 991,
    0, 0, 0, 0, 0, 0, 992, 0, 0, 0, 0, 0, 0, 0, 993, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 994, 0, 995, 0, 0,
    0, 0, 996, 0, 0, 0, 997, 0, 0, 0, 0, 0, 0, 0, 998, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 999, 0, 1000, 0, 0, 0, 1001, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1002, 0, 0, 0, 0, 0, 0, 1003, 0, 0, 0, 0,
    0, 0, 0, 1004, 0, 1005, 0, 0, 0, 0, 1006, 0, 0, 0, 0, 1007, 0, 1008, 0, 0, 0, 1009, 0, 0, 0, 0, 1010, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1011, 0, 1012,
    0, 0, 0, 0, 0, 1013, 0, 0, 0, 0, 1014, 0, 1015, 0, 1016, 1017, 0, 1018, 0, 0, 0, 0, 1019, 0, 0, 0, 1020, 0, 0, 0, 0, 0,
    1021, 0, 0, 0, 0, 0, 0, 1022, 0, 0, 0, 0, 1023, 0, 0, 1024, 0, 1025, 1026, 0, 0, 0, 0, 1027, 0, 0, 0, 0, 0, 0, 1028, 0,
    0, 0, 0, 1029, 0, 0, 1030, 0, 1031, 1032, 0, 0, 0, 0, 1033, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1034, 0, 1035, 0, 0, 0, 1036, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1037, 0, 0,
    0, 0, 0, 0, 1038, 0, 0, 0, 0, 0, 0, 0, 1039, 0, 0, 0, 0, 0, 0, 1040, 0, 0, 0, 0, 0, 0, 0, 1041, 0, 1042, 0, 0,
    0, 0, 0, 1043, 0, 0, 0, 0, 1044, 0, 1045, 0, 1046, 1047, 0, 1048, 0, 0, 0, 0, 1049, 0, 0, 0, 1050, 0, 0, 0, 0, 0, 1051, 0,
    0, 0, 0, 0, 0, 1052, 0, 0, 0, 0, 1053, 0, 0, 1054, 0, 1055, 1056, 0, 0, 0, 0, 1057, 0, 0, 0, 0, 0, 0, 1058, 0, 0, 0,
    0, 1059, 0, 0, 1060, 0, 1061, 1062, 0, 0, 0, 0, 1063, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1064, 0, 1065, 0, 0, 0, 0, 0, 1066, 0, 0, 0, 0, 0, 0, 0, 1067, 0, 0,
    0, 0, 0, 1068, 0, 1069, 0, 0, 0, 1070, 0, 0, 0, 0, 1071, 0, 0, 0, 0, 0, 1072, 0, 1073, 0, 0, 0, 0, 1074, 0, 1075,
};
void recomp_unit_0169_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AA8000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0169[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AA8000;
    case 2u: goto L_08AA8020;
    case 3u: goto L_08AA802C;
    case 4u: goto L_08AA8034;
    case 5u: goto L_08AA803C;
    case 6u: goto L_08AA8044;
    case 7u: goto L_08AA8054;
    case 8u: goto L_08AA805C;
    case 9u: goto L_08AA8068;
    case 10u: goto L_08AA8074;
    case 11u: goto L_08AA80A8;
    case 12u: goto L_08AA80B0;
    case 13u: goto L_08AA80C0;
    case 14u: goto L_08AA80E0;
    case 15u: goto L_08AA80E8;
    case 16u: goto L_08AA80F8;
    case 17u: goto L_08AA8118;
    case 18u: goto L_08AA8120;
    case 19u: goto L_08AA8130;
    case 20u: goto L_08AA8150;
    case 21u: goto L_08AA8158;
    case 22u: goto L_08AA8168;
    case 23u: goto L_08AA8188;
    case 24u: goto L_08AA8190;
    case 25u: goto L_08AA81A0;
    case 26u: goto L_08AA81C0;
    case 27u: goto L_08AA81C8;
    case 28u: goto L_08AA81D4;
    case 29u: goto L_08AA81DC;
    case 30u: goto L_08AA81E4;
    case 31u: goto L_08AA81FC;
    case 32u: goto L_08AA8204;
    case 33u: goto L_08AA8210;
    case 34u: goto L_08AA8220;
    case 35u: goto L_08AA8228;
    case 36u: goto L_08AA8234;
    case 37u: goto L_08AA823C;
    case 38u: goto L_08AA824C;
    case 39u: goto L_08AA8254;
    case 40u: goto L_08AA8264;
    case 41u: goto L_08AA826C;
    case 42u: goto L_08AA8274;
    case 43u: goto L_08AA827C;
    case 44u: goto L_08AA828C;
    case 45u: goto L_08AA8294;
    case 46u: goto L_08AA829C;
    case 47u: goto L_08AA82B4;
    case 48u: goto L_08AA82BC;
    case 49u: goto L_08AA82C8;
    case 50u: goto L_08AA82D0;
    case 51u: goto L_08AA82D8;
    case 52u: goto L_08AA82E4;
    case 53u: goto L_08AA82F0;
    case 54u: goto L_08AA82FC;
    case 55u: goto L_08AA8304;
    case 56u: goto L_08AA830C;
    case 57u: goto L_08AA831C;
    case 58u: goto L_08AA8324;
    case 59u: goto L_08AA832C;
    case 60u: goto L_08AA8334;
    case 61u: goto L_08AA833C;
    case 62u: goto L_08AA8344;
    case 63u: goto L_08AA834C;
    case 64u: goto L_08AA8358;
    case 65u: goto L_08AA8360;
    case 66u: goto L_08AA8368;
    case 67u: goto L_08AA8374;
    case 68u: goto L_08AA8378;
    case 69u: goto L_08AA8380;
    case 70u: goto L_08AA8414;
    case 71u: goto L_08AA8458;
    case 72u: goto L_08AA8460;
    case 73u: goto L_08AA84A4;
    case 74u: goto L_08AA84B4;
    case 75u: goto L_08AA84D4;
    case 76u: goto L_08AA84DC;
    case 77u: goto L_08AA84E8;
    case 78u: goto L_08AA84F0;
    case 79u: goto L_08AA8500;
    case 80u: goto L_08AA8508;
    case 81u: goto L_08AA8514;
    case 82u: goto L_08AA851C;
    case 83u: goto L_08AA852C;
    case 84u: goto L_08AA8538;
    case 85u: goto L_08AA8550;
    case 86u: goto L_08AA8564;
    case 87u: goto L_08AA856C;
    case 88u: goto L_08AA8574;
    case 89u: goto L_08AA8580;
    case 90u: goto L_08AA8588;
    case 91u: goto L_08AA8590;
    case 92u: goto L_08AA8598;
    case 93u: goto L_08AA85A0;
    case 94u: goto L_08AA85A8;
    case 95u: goto L_08AA85B0;
    case 96u: goto L_08AA85C0;
    case 97u: goto L_08AA85C8;
    case 98u: goto L_08AA85D0;
    case 99u: goto L_08AA85DC;
    case 100u: goto L_08AA85F0;
    case 101u: goto L_08AA85FC;
    case 102u: goto L_08AA8608;
    case 103u: goto L_08AA8614;
    case 104u: goto L_08AA861C;
    case 105u: goto L_08AA8624;
    case 106u: goto L_08AA862C;
    case 107u: goto L_08AA8634;
    case 108u: goto L_08AA863C;
    case 109u: goto L_08AA8650;
    case 110u: goto L_08AA865C;
    case 111u: goto L_08AA8668;
    case 112u: goto L_08AA8670;
    case 113u: goto L_08AA8678;
    case 114u: goto L_08AA8680;
    case 115u: goto L_08AA8694;
    case 116u: goto L_08AA86A0;
    case 117u: goto L_08AA86A8;
    case 118u: goto L_08AA86B0;
    case 119u: goto L_08AA86B8;
    case 120u: goto L_08AA86CC;
    case 121u: goto L_08AA86D8;
    case 122u: goto L_08AA86E0;
    case 123u: goto L_08AA86E8;
    case 124u: goto L_08AA86F0;
    case 125u: goto L_08AA8704;
    case 126u: goto L_08AA8710;
    case 127u: goto L_08AA8718;
    case 128u: goto L_08AA8720;
    case 129u: goto L_08AA8728;
    case 130u: goto L_08AA873C;
    case 131u: goto L_08AA8744;
    case 132u: goto L_08AA8748;
    case 133u: goto L_08AA8750;
    case 134u: goto L_08AA8754;
    case 135u: goto L_08AA8758;
    case 136u: goto L_08AA876C;
    case 137u: goto L_08AA8774;
    case 138u: goto L_08AA877C;
    case 139u: goto L_08AA8784;
    case 140u: goto L_08AA87A4;
    case 141u: goto L_08AA87AC;
    case 142u: goto L_08AA87BC;
    case 143u: goto L_08AA87C4;
    case 144u: goto L_08AA87CC;
    case 145u: goto L_08AA87D4;
    case 146u: goto L_08AA87DC;
    case 147u: goto L_08AA87E8;
    case 148u: goto L_08AA87F0;
    case 149u: goto L_08AA87F8;
    case 150u: goto L_08AA87FC;
    case 151u: goto L_08AA8804;
    case 152u: goto L_08AA880C;
    case 153u: goto L_08AA8818;
    case 154u: goto L_08AA882C;
    case 155u: goto L_08AA8834;
    case 156u: goto L_08AA883C;
    case 157u: goto L_08AA8848;
    case 158u: goto L_08AA885C;
    case 159u: goto L_08AA8860;
    case 160u: goto L_08AA8868;
    case 161u: goto L_08AA8878;
    case 162u: goto L_08AA8880;
    case 163u: goto L_08AA8888;
    case 164u: goto L_08AA8890;
    case 165u: goto L_08AA8898;
    case 166u: goto L_08AA88A0;
    case 167u: goto L_08AA88B0;
    case 168u: goto L_08AA88B8;
    case 169u: goto L_08AA88C8;
    case 170u: goto L_08AA88DC;
    case 171u: goto L_08AA88E4;
    case 172u: goto L_08AA88EC;
    case 173u: goto L_08AA88F8;
    case 174u: goto L_08AA8900;
    case 175u: goto L_08AA890C;
    case 176u: goto L_08AA8914;
    case 177u: goto L_08AA8924;
    case 178u: goto L_08AA8938;
    case 179u: goto L_08AA8940;
    case 180u: goto L_08AA8948;
    case 181u: goto L_08AA8954;
    case 182u: goto L_08AA8958;
    case 183u: goto L_08AA8960;
    case 184u: goto L_08AA8970;
    case 185u: goto L_08AA8974;
    case 186u: goto L_08AA8988;
    case 187u: goto L_08AA8990;
    case 188u: goto L_08AA89EC;
    case 189u: goto L_08AA89F8;
    case 190u: goto L_08AA8A14;
    case 191u: goto L_08AA8A1C;
    case 192u: goto L_08AA8A38;
    case 193u: goto L_08AA8A40;
    case 194u: goto L_08AA8A48;
    case 195u: goto L_08AA8A54;
    case 196u: goto L_08AA8A60;
    case 197u: goto L_08AA8A68;
    case 198u: goto L_08AA8A6C;
    case 199u: goto L_08AA8A80;
    case 200u: goto L_08AA8A88;
    case 201u: goto L_08AA8A98;
    case 202u: goto L_08AA8AA8;
    case 203u: goto L_08AA8AB0;
    case 204u: goto L_08AA8AE8;
    case 205u: goto L_08AA8AF0;
    case 206u: goto L_08AA8AFC;
    case 207u: goto L_08AA8B04;
    case 208u: goto L_08AA8B14;
    case 209u: goto L_08AA8B1C;
    case 210u: goto L_08AA8B28;
    case 211u: goto L_08AA8B34;
    case 212u: goto L_08AA8B3C;
    case 213u: goto L_08AA8B44;
    case 214u: goto L_08AA8B4C;
    case 215u: goto L_08AA8B58;
    case 216u: goto L_08AA8B64;
    case 217u: goto L_08AA8B6C;
    case 218u: goto L_08AA8B74;
    case 219u: goto L_08AA8B7C;
    case 220u: goto L_08AA8B88;
    case 221u: goto L_08AA8B94;
    case 222u: goto L_08AA8B9C;
    case 223u: goto L_08AA8BA4;
    case 224u: goto L_08AA8BAC;
    case 225u: goto L_08AA8BB8;
    case 226u: goto L_08AA8BC4;
    case 227u: goto L_08AA8BD0;
    case 228u: goto L_08AA8BE0;
    case 229u: goto L_08AA8BF0;
    case 230u: goto L_08AA8C04;
    case 231u: goto L_08AA8C28;
    case 232u: goto L_08AA8C30;
    case 233u: goto L_08AA8C38;
    case 234u: goto L_08AA8C50;
    case 235u: goto L_08AA8C6C;
    case 236u: goto L_08AA8C74;
    case 237u: goto L_08AA8C80;
    case 238u: goto L_08AA8C8C;
    case 239u: goto L_08AA8C98;
    case 240u: goto L_08AA8CA4;
    case 241u: goto L_08AA8CAC;
    case 242u: goto L_08AA8CB0;
    case 243u: goto L_08AA8CC4;
    case 244u: goto L_08AA8CE0;
    case 245u: goto L_08AA8CF0;
    case 246u: goto L_08AA8CFC;
    case 247u: goto L_08AA8D04;
    case 248u: goto L_08AA8D0C;
    case 249u: goto L_08AA8D18;
    case 250u: goto L_08AA8D20;
    case 251u: goto L_08AA8D2C;
    case 252u: goto L_08AA8D34;
    case 253u: goto L_08AA8D3C;
    case 254u: goto L_08AA8D44;
    case 255u: goto L_08AA8D54;
    case 256u: goto L_08AA8D60;
    case 257u: goto L_08AA8D68;
    case 258u: goto L_08AA8D70;
    case 259u: goto L_08AA8D7C;
    case 260u: goto L_08AA8D80;
    case 261u: goto L_08AA8D88;
    case 262u: goto L_08AA8D98;
    case 263u: goto L_08AA8DA0;
    case 264u: goto L_08AA8DA4;
    case 265u: goto L_08AA8DAC;
    case 266u: goto L_08AA8DB8;
    case 267u: goto L_08AA8DC8;
    case 268u: goto L_08AA8DD8;
    case 269u: goto L_08AA8DE8;
    case 270u: goto L_08AA8DF8;
    case 271u: goto L_08AA8E00;
    case 272u: goto L_08AA8E08;
    case 273u: goto L_08AA8E10;
    case 274u: goto L_08AA8E18;
    case 275u: goto L_08AA8E2C;
    case 276u: goto L_08AA8E4C;
    case 277u: goto L_08AA8E54;
    case 278u: goto L_08AA8E6C;
    case 279u: goto L_08AA8E7C;
    case 280u: goto L_08AA8E88;
    case 281u: goto L_08AA8E90;
    case 282u: goto L_08AA8E98;
    case 283u: goto L_08AA8EA0;
    case 284u: goto L_08AA8EA8;
    case 285u: goto L_08AA8EAC;
    case 286u: goto L_08AA8EB8;
    case 287u: goto L_08AA8EE4;
    case 288u: goto L_08AA8EEC;
    case 289u: goto L_08AA8F04;
    case 290u: goto L_08AA8F34;
    case 291u: goto L_08AA8F44;
    case 292u: goto L_08AA8F4C;
    case 293u: goto L_08AA8F64;
    case 294u: goto L_08AA8F6C;
    case 295u: goto L_08AA8F80;
    case 296u: goto L_08AA8F98;
    case 297u: goto L_08AA8FB0;
    case 298u: goto L_08AA8FC0;
    case 299u: goto L_08AA8FC8;
    case 300u: goto L_08AA8FE0;
    case 301u: goto L_08AA8FE8;
    case 302u: goto L_08AA9000;
    case 303u: goto L_08AA9018;
    case 304u: goto L_08AA901C;
    case 305u: goto L_08AA902C;
    case 306u: goto L_08AA9034;
    case 307u: goto L_08AA904C;
    case 308u: goto L_08AA9054;
    case 309u: goto L_08AA906C;
    case 310u: goto L_08AA9084;
    case 311u: goto L_08AA9098;
    case 312u: goto L_08AA90A8;
    case 313u: goto L_08AA90B0;
    case 314u: goto L_08AA90C8;
    case 315u: goto L_08AA90D0;
    case 316u: goto L_08AA90E8;
    case 317u: goto L_08AA90EC;
    case 318u: goto L_08AA9104;
    case 319u: goto L_08AA912C;
    case 320u: goto L_08AA9134;
    case 321u: goto L_08AA914C;
    case 322u: goto L_08AA915C;
    case 323u: goto L_08AA916C;
    case 324u: goto L_08AA9174;
    case 325u: goto L_08AA9180;
    case 326u: goto L_08AA9188;
    case 327u: goto L_08AA9198;
    case 328u: goto L_08AA91A0;
    case 329u: goto L_08AA91A8;
    case 330u: goto L_08AA91B0;
    case 331u: goto L_08AA91B8;
    case 332u: goto L_08AA91CC;
    case 333u: goto L_08AA91DC;
    case 334u: goto L_08AA91F8;
    case 335u: goto L_08AA9200;
    case 336u: goto L_08AA9214;
    case 337u: goto L_08AA922C;
    case 338u: goto L_08AA9290;
    case 339u: goto L_08AA92A0;
    case 340u: goto L_08AA92A8;
    case 341u: goto L_08AA92B0;
    case 342u: goto L_08AA92BC;
    case 343u: goto L_08AA92C4;
    case 344u: goto L_08AA92CC;
    case 345u: goto L_08AA92D0;
    case 346u: goto L_08AA92D8;
    case 347u: goto L_08AA92E4;
    case 348u: goto L_08AA92F0;
    case 349u: goto L_08AA92FC;
    case 350u: goto L_08AA9304;
    case 351u: goto L_08AA9310;
    case 352u: goto L_08AA931C;
    case 353u: goto L_08AA9320;
    case 354u: goto L_08AA9328;
    case 355u: goto L_08AA9344;
    case 356u: goto L_08AA9360;
    case 357u: goto L_08AA9368;
    case 358u: goto L_08AA9370;
    case 359u: goto L_08AA9378;
    case 360u: goto L_08AA9388;
    case 361u: goto L_08AA9390;
    case 362u: goto L_08AA939C;
    case 363u: goto L_08AA93AC;
    case 364u: goto L_08AA93B4;
    case 365u: goto L_08AA93BC;
    case 366u: goto L_08AA93C4;
    case 367u: goto L_08AA93D0;
    case 368u: goto L_08AA93DC;
    case 369u: goto L_08AA93E4;
    case 370u: goto L_08AA93F8;
    case 371u: goto L_08AA93FC;
    case 372u: goto L_08AA9404;
    case 373u: goto L_08AA940C;
    case 374u: goto L_08AA941C;
    case 375u: goto L_08AA942C;
    case 376u: goto L_08AA9434;
    case 377u: goto L_08AA9440;
    case 378u: goto L_08AA9450;
    case 379u: goto L_08AA9458;
    case 380u: goto L_08AA9460;
    case 381u: goto L_08AA9468;
    case 382u: goto L_08AA9474;
    case 383u: goto L_08AA9480;
    case 384u: goto L_08AA9488;
    case 385u: goto L_08AA949C;
    case 386u: goto L_08AA94A0;
    case 387u: goto L_08AA94A8;
    case 388u: goto L_08AA94B0;
    case 389u: goto L_08AA94C0;
    case 390u: goto L_08AA94D0;
    case 391u: goto L_08AA94D8;
    case 392u: goto L_08AA94E4;
    case 393u: goto L_08AA94F4;
    case 394u: goto L_08AA94FC;
    case 395u: goto L_08AA9504;
    case 396u: goto L_08AA950C;
    case 397u: goto L_08AA9518;
    case 398u: goto L_08AA9528;
    case 399u: goto L_08AA9530;
    case 400u: goto L_08AA9544;
    case 401u: goto L_08AA9548;
    case 402u: goto L_08AA9550;
    case 403u: goto L_08AA9558;
    case 404u: goto L_08AA9568;
    case 405u: goto L_08AA9574;
    case 406u: goto L_08AA9578;
    case 407u: goto L_08AA9588;
    case 408u: goto L_08AA95A4;
    case 409u: goto L_08AA95C0;
    case 410u: goto L_08AA95C8;
    case 411u: goto L_08AA95D0;
    case 412u: goto L_08AA95D8;
    case 413u: goto L_08AA95E8;
    case 414u: goto L_08AA95F0;
    case 415u: goto L_08AA95FC;
    case 416u: goto L_08AA960C;
    case 417u: goto L_08AA9614;
    case 418u: goto L_08AA961C;
    case 419u: goto L_08AA9624;
    case 420u: goto L_08AA9630;
    case 421u: goto L_08AA963C;
    case 422u: goto L_08AA9644;
    case 423u: goto L_08AA9658;
    case 424u: goto L_08AA965C;
    case 425u: goto L_08AA9664;
    case 426u: goto L_08AA966C;
    case 427u: goto L_08AA967C;
    case 428u: goto L_08AA968C;
    case 429u: goto L_08AA9694;
    case 430u: goto L_08AA96A0;
    case 431u: goto L_08AA96B0;
    case 432u: goto L_08AA96B8;
    case 433u: goto L_08AA96C0;
    case 434u: goto L_08AA96C8;
    case 435u: goto L_08AA96D4;
    case 436u: goto L_08AA96E0;
    case 437u: goto L_08AA96E8;
    case 438u: goto L_08AA96FC;
    case 439u: goto L_08AA9700;
    case 440u: goto L_08AA9708;
    case 441u: goto L_08AA9710;
    case 442u: goto L_08AA9720;
    case 443u: goto L_08AA9730;
    case 444u: goto L_08AA9738;
    case 445u: goto L_08AA9744;
    case 446u: goto L_08AA9754;
    case 447u: goto L_08AA975C;
    case 448u: goto L_08AA9764;
    case 449u: goto L_08AA976C;
    case 450u: goto L_08AA9778;
    case 451u: goto L_08AA9788;
    case 452u: goto L_08AA9790;
    case 453u: goto L_08AA97A4;
    case 454u: goto L_08AA97A8;
    case 455u: goto L_08AA97B0;
    case 456u: goto L_08AA97B8;
    case 457u: goto L_08AA97C8;
    case 458u: goto L_08AA97D4;
    case 459u: goto L_08AA97D8;
    case 460u: goto L_08AA97E8;
    case 461u: goto L_08AA9800;
    case 462u: goto L_08AA9808;
    case 463u: goto L_08AA9810;
    case 464u: goto L_08AA9818;
    case 465u: goto L_08AA9820;
    case 466u: goto L_08AA9824;
    case 467u: goto L_08AA9830;
    case 468u: goto L_08AA983C;
    case 469u: goto L_08AA9844;
    case 470u: goto L_08AA984C;
    case 471u: goto L_08AA9858;
    case 472u: goto L_08AA985C;
    case 473u: goto L_08AA9864;
    case 474u: goto L_08AA986C;
    case 475u: goto L_08AA9878;
    case 476u: goto L_08AA987C;
    case 477u: goto L_08AA9884;
    case 478u: goto L_08AA9888;
    case 479u: goto L_08AA9898;
    case 480u: goto L_08AA98A0;
    case 481u: goto L_08AA98AC;
    case 482u: goto L_08AA98B0;
    case 483u: goto L_08AA98B8;
    case 484u: goto L_08AA98E8;
    case 485u: goto L_08AA991C;
    case 486u: goto L_08AA9928;
    case 487u: goto L_08AA9944;
    case 488u: goto L_08AA9954;
    case 489u: goto L_08AA995C;
    case 490u: goto L_08AA996C;
    case 491u: goto L_08AA9974;
    case 492u: goto L_08AA9980;
    case 493u: goto L_08AA9988;
    case 494u: goto L_08AA9994;
    case 495u: goto L_08AA999C;
    case 496u: goto L_08AA99A8;
    case 497u: goto L_08AA99B0;
    case 498u: goto L_08AA99BC;
    case 499u: goto L_08AA99C4;
    case 500u: goto L_08AA99D0;
    case 501u: goto L_08AA99D8;
    case 502u: goto L_08AA99E4;
    case 503u: goto L_08AA99E8;
    case 504u: goto L_08AA9A00;
    case 505u: goto L_08AA9A14;
    case 506u: goto L_08AA9A48;
    case 507u: goto L_08AA9A60;
    case 508u: goto L_08AA9A68;
    case 509u: goto L_08AA9A84;
    case 510u: goto L_08AA9A8C;
    case 511u: goto L_08AA9AA8;
    case 512u: goto L_08AA9AAC;
    case 513u: goto L_08AA9AB4;
    case 514u: goto L_08AA9AC4;
    case 515u: goto L_08AA9ADC;
    case 516u: goto L_08AA9B10;
    case 517u: goto L_08AA9B28;
    case 518u: goto L_08AA9B30;
    case 519u: goto L_08AA9B44;
    case 520u: goto L_08AA9B4C;
    case 521u: goto L_08AA9B60;
    case 522u: goto L_08AA9B64;
    case 523u: goto L_08AA9B70;
    case 524u: goto L_08AA9B80;
    case 525u: goto L_08AA9B90;
    case 526u: goto L_08AA9BA0;
    case 527u: goto L_08AA9BB8;
    case 528u: goto L_08AA9BDC;
    case 529u: goto L_08AA9BF4;
    case 530u: goto L_08AA9C08;
    case 531u: goto L_08AA9C2C;
    case 532u: goto L_08AA9C40;
    case 533u: goto L_08AA9C54;
    case 534u: goto L_08AA9C60;
    case 535u: goto L_08AA9C68;
    case 536u: goto L_08AA9C74;
    case 537u: goto L_08AA9C7C;
    case 538u: goto L_08AA9C90;
    case 539u: goto L_08AA9CA0;
    case 540u: goto L_08AA9CB0;
    case 541u: goto L_08AA9CC4;
    case 542u: goto L_08AA9CF0;
    case 543u: goto L_08AA9D04;
    case 544u: goto L_08AA9D10;
    case 545u: goto L_08AA9D18;
    case 546u: goto L_08AA9D24;
    case 547u: goto L_08AA9D2C;
    case 548u: goto L_08AA9D40;
    case 549u: goto L_08AA9D50;
    case 550u: goto L_08AA9D60;
    case 551u: goto L_08AA9D70;
    case 552u: goto L_08AA9D80;
    case 553u: goto L_08AA9D8C;
    case 554u: goto L_08AA9DA0;
    case 555u: goto L_08AA9DCC;
    case 556u: goto L_08AA9DE0;
    case 557u: goto L_08AA9DEC;
    case 558u: goto L_08AA9DF4;
    case 559u: goto L_08AA9E00;
    case 560u: goto L_08AA9E08;
    case 561u: goto L_08AA9E0C;
    case 562u: goto L_08AA9E1C;
    case 563u: goto L_08AA9E44;
    case 564u: goto L_08AA9E54;
    case 565u: goto L_08AA9E64;
    case 566u: goto L_08AA9E84;
    case 567u: goto L_08AA9EA4;
    case 568u: goto L_08AA9EC4;
    case 569u: goto L_08AA9ED8;
    case 570u: goto L_08AA9EEC;
    case 571u: goto L_08AA9F08;
    case 572u: goto L_08AA9F30;
    case 573u: goto L_08AA9F44;
    case 574u: goto L_08AA9F58;
    case 575u: goto L_08AA9F78;
    case 576u: goto L_08AA9F84;
    case 577u: goto L_08AA9F8C;
    case 578u: goto L_08AA9F94;
    case 579u: goto L_08AA9FA8;
    case 580u: goto L_08AA9FB0;
    case 581u: goto L_08AA9FBC;
    case 582u: goto L_08AA9FC4;
    case 583u: goto L_08AA9FCC;
    case 584u: goto L_08AA9FE0;
    case 585u: goto L_08AA9FE8;
    case 586u: goto L_08AAA010;
    case 587u: goto L_08AAA030;
    case 588u: goto L_08AAA050;
    case 589u: goto L_08AAA05C;
    case 590u: goto L_08AAA068;
    case 591u: goto L_08AAA080;
    case 592u: goto L_08AAA088;
    case 593u: goto L_08AAA094;
    case 594u: goto L_08AAA09C;
    case 595u: goto L_08AAA0B8;
    case 596u: goto L_08AAA0C0;
    case 597u: goto L_08AAA0CC;
    case 598u: goto L_08AAA0D8;
    case 599u: goto L_08AAA0E4;
    case 600u: goto L_08AAA0F0;
    case 601u: goto L_08AAA0FC;
    case 602u: goto L_08AAA104;
    case 603u: goto L_08AAA108;
    case 604u: goto L_08AAA11C;
    case 605u: goto L_08AAA124;
    case 606u: goto L_08AAA140;
    case 607u: goto L_08AAA148;
    case 608u: goto L_08AAA154;
    case 609u: goto L_08AAA15C;
    case 610u: goto L_08AAA160;
    case 611u: goto L_08AAA174;
    case 612u: goto L_08AAA194;
    case 613u: goto L_08AAA1A0;
    case 614u: goto L_08AAA1B0;
    case 615u: goto L_08AAA1B8;
    case 616u: goto L_08AAA1C0;
    case 617u: goto L_08AAA1CC;
    case 618u: goto L_08AAA1D4;
    case 619u: goto L_08AAA1DC;
    case 620u: goto L_08AAA1E4;
    case 621u: goto L_08AAA1EC;
    case 622u: goto L_08AAA1FC;
    case 623u: goto L_08AAA204;
    case 624u: goto L_08AAA20C;
    case 625u: goto L_08AAA218;
    case 626u: goto L_08AAA228;
    case 627u: goto L_08AAA238;
    case 628u: goto L_08AAA244;
    case 629u: goto L_08AAA24C;
    case 630u: goto L_08AAA258;
    case 631u: goto L_08AAA260;
    case 632u: goto L_08AAA264;
    case 633u: goto L_08AAA270;
    case 634u: goto L_08AAA278;
    case 635u: goto L_08AAA280;
    case 636u: goto L_08AAA294;
    case 637u: goto L_08AAA298;
    case 638u: goto L_08AAA2A8;
    case 639u: goto L_08AAA2B0;
    case 640u: goto L_08AAA2B8;
    case 641u: goto L_08AAA2D0;
    case 642u: goto L_08AAA2D8;
    case 643u: goto L_08AAA2E0;
    case 644u: goto L_08AAA2E8;
    case 645u: goto L_08AAA2F0;
    case 646u: goto L_08AAA2F8;
    case 647u: goto L_08AAA300;
    case 648u: goto L_08AAA308;
    case 649u: goto L_08AAA310;
    case 650u: goto L_08AAA318;
    case 651u: goto L_08AAA32C;
    case 652u: goto L_08AAA36C;
    case 653u: goto L_08AAA3C4;
    case 654u: goto L_08AAA3D8;
    case 655u: goto L_08AAA3EC;
    case 656u: goto L_08AAA408;
    case 657u: goto L_08AAA420;
    case 658u: goto L_08AAA424;
    case 659u: goto L_08AAA42C;
    case 660u: goto L_08AAA440;
    case 661u: goto L_08AAA448;
    case 662u: goto L_08AAA460;
    case 663u: goto L_08AAA474;
    case 664u: goto L_08AAA488;
    case 665u: goto L_08AAA4A0;
    case 666u: goto L_08AAA4B4;
    case 667u: goto L_08AAA4C8;
    case 668u: goto L_08AAA518;
    case 669u: goto L_08AAA534;
    case 670u: goto L_08AAA53C;
    case 671u: goto L_08AAA540;
    case 672u: goto L_08AAA548;
    case 673u: goto L_08AAA55C;
    case 674u: goto L_08AAA564;
    case 675u: goto L_08AAA568;
    case 676u: goto L_08AAA570;
    case 677u: goto L_08AAA584;
    case 678u: goto L_08AAA58C;
    case 679u: goto L_08AAA5A0;
    case 680u: goto L_08AAA5BC;
    case 681u: goto L_08AAA5D0;
    case 682u: goto L_08AAA5D8;
    case 683u: goto L_08AAA5E0;
    case 684u: goto L_08AAA5F8;
    case 685u: goto L_08AAA60C;
    case 686u: goto L_08AAA614;
    case 687u: goto L_08AAA628;
    case 688u: goto L_08AAA640;
    case 689u: goto L_08AAA654;
    case 690u: goto L_08AAA670;
    case 691u: goto L_08AAA674;
    case 692u: goto L_08AAA67C;
    case 693u: goto L_08AAA690;
    case 694u: goto L_08AAA698;
    case 695u: goto L_08AAA6B0;
    case 696u: goto L_08AAA6F0;
    case 697u: goto L_08AAA6F8;
    case 698u: goto L_08AAA700;
    case 699u: goto L_08AAA710;
    case 700u: goto L_08AAA714;
    case 701u: goto L_08AAA71C;
    case 702u: goto L_08AAA72C;
    case 703u: goto L_08AAA744;
    case 704u: goto L_08AAA784;
    case 705u: goto L_08AAA790;
    case 706u: goto L_08AAA79C;
    case 707u: goto L_08AAA7B0;
    case 708u: goto L_08AAA7C4;
    case 709u: goto L_08AAA7D8;
    case 710u: goto L_08AAA7EC;
    case 711u: goto L_08AAA804;
    case 712u: goto L_08AAA80C;
    case 713u: goto L_08AAA820;
    case 714u: goto L_08AAA850;
    case 715u: goto L_08AAA868;
    case 716u: goto L_08AAA888;
    case 717u: goto L_08AAA8A0;
    case 718u: goto L_08AAA8A8;
    case 719u: goto L_08AAA8BC;
    case 720u: goto L_08AAA8C4;
    case 721u: goto L_08AAA8DC;
    case 722u: goto L_08AAA8F8;
    case 723u: goto L_08AAA900;
    case 724u: goto L_08AAA910;
    case 725u: goto L_08AAA924;
    case 726u: goto L_08AAA940;
    case 727u: goto L_08AAA948;
    case 728u: goto L_08AAA958;
    case 729u: goto L_08AAA96C;
    case 730u: goto L_08AAA9AC;
    case 731u: goto L_08AAA9C4;
    case 732u: goto L_08AAA9CC;
    case 733u: goto L_08AAA9E0;
    case 734u: goto L_08AAA9E8;
    case 735u: goto L_08AAAA00;
    case 736u: goto L_08AAAA14;
    case 737u: goto L_08AAAA28;
    case 738u: goto L_08AAAA30;
    case 739u: goto L_08AAAA58;
    case 740u: goto L_08AAAA64;
    case 741u: goto L_08AAAA70;
    case 742u: goto L_08AAAA7C;
    case 743u: goto L_08AAAA88;
    case 744u: goto L_08AAAA94;
    case 745u: goto L_08AAAAA0;
    case 746u: goto L_08AAAAAC;
    case 747u: goto L_08AAAAB8;
    case 748u: goto L_08AAAAC4;
    case 749u: goto L_08AAAAD0;
    case 750u: goto L_08AAAADC;
    case 751u: goto L_08AAAAE4;
    case 752u: goto L_08AAAAEC;
    case 753u: goto L_08AAAAF4;
    case 754u: goto L_08AAAAFC;
    case 755u: goto L_08AAAB04;
    case 756u: goto L_08AAAB14;
    case 757u: goto L_08AAAB1C;
    case 758u: goto L_08AAAB2C;
    case 759u: goto L_08AAAB34;
    case 760u: goto L_08AAAB40;
    case 761u: goto L_08AAAB50;
    case 762u: goto L_08AAAB58;
    case 763u: goto L_08AAAB64;
    case 764u: goto L_08AAAB74;
    case 765u: goto L_08AAAB7C;
    case 766u: goto L_08AAAB94;
    case 767u: goto L_08AAAB9C;
    case 768u: goto L_08AAABA4;
    case 769u: goto L_08AAABAC;
    case 770u: goto L_08AAABB8;
    case 771u: goto L_08AAABC0;
    case 772u: goto L_08AAABC8;
    case 773u: goto L_08AAABD4;
    case 774u: goto L_08AAABDC;
    case 775u: goto L_08AAABE4;
    case 776u: goto L_08AAABF0;
    case 777u: goto L_08AAABF8;
    case 778u: goto L_08AAAC00;
    case 779u: goto L_08AAAC0C;
    case 780u: goto L_08AAAC14;
    case 781u: goto L_08AAAC1C;
    case 782u: goto L_08AAAC28;
    case 783u: goto L_08AAAC34;
    case 784u: goto L_08AAAC3C;
    case 785u: goto L_08AAAC44;
    case 786u: goto L_08AAAC50;
    case 787u: goto L_08AAAC58;
    case 788u: goto L_08AAAC64;
    case 789u: goto L_08AAAC68;
    case 790u: goto L_08AAAC74;
    case 791u: goto L_08AAAC7C;
    case 792u: goto L_08AAAC84;
    case 793u: goto L_08AAAC90;
    case 794u: goto L_08AAAC98;
    case 795u: goto L_08AAACA4;
    case 796u: goto L_08AAACA8;
    case 797u: goto L_08AAACB4;
    case 798u: goto L_08AAACBC;
    case 799u: goto L_08AAACC4;
    case 800u: goto L_08AAACD0;
    case 801u: goto L_08AAACD8;
    case 802u: goto L_08AAACE4;
    case 803u: goto L_08AAACE8;
    case 804u: goto L_08AAACF4;
    case 805u: goto L_08AAACFC;
    case 806u: goto L_08AAAD04;
    case 807u: goto L_08AAAD10;
    case 808u: goto L_08AAAD18;
    case 809u: goto L_08AAAD24;
    case 810u: goto L_08AAAD28;
    case 811u: goto L_08AAAD34;
    case 812u: goto L_08AAAD3C;
    case 813u: goto L_08AAAD44;
    case 814u: goto L_08AAAD50;
    case 815u: goto L_08AAAD58;
    case 816u: goto L_08AAAD64;
    case 817u: goto L_08AAAD68;
    case 818u: goto L_08AAAD74;
    case 819u: goto L_08AAAD7C;
    case 820u: goto L_08AAAD84;
    case 821u: goto L_08AAAD90;
    case 822u: goto L_08AAAD98;
    case 823u: goto L_08AAADA4;
    case 824u: goto L_08AAADA8;
    case 825u: goto L_08AAADB4;
    case 826u: goto L_08AAADBC;
    case 827u: goto L_08AAADC4;
    case 828u: goto L_08AAADD0;
    case 829u: goto L_08AAADD8;
    case 830u: goto L_08AAADE4;
    case 831u: goto L_08AAADE8;
    case 832u: goto L_08AAADF4;
    case 833u: goto L_08AAADFC;
    case 834u: goto L_08AAAE04;
    case 835u: goto L_08AAAE10;
    case 836u: goto L_08AAAE18;
    case 837u: goto L_08AAAE24;
    case 838u: goto L_08AAAE28;
    case 839u: goto L_08AAAE34;
    case 840u: goto L_08AAAE3C;
    case 841u: goto L_08AAAE44;
    case 842u: goto L_08AAAE50;
    case 843u: goto L_08AAAE58;
    case 844u: goto L_08AAAE64;
    case 845u: goto L_08AAAE68;
    case 846u: goto L_08AAAE74;
    case 847u: goto L_08AAAE7C;
    case 848u: goto L_08AAAE8C;
    case 849u: goto L_08AAAE94;
    case 850u: goto L_08AAAEA0;
    case 851u: goto L_08AAAEA8;
    case 852u: goto L_08AAAEB8;
    case 853u: goto L_08AAAEC0;
    case 854u: goto L_08AAAECC;
    case 855u: goto L_08AAAED4;
    case 856u: goto L_08AAAEE4;
    case 857u: goto L_08AAAEEC;
    case 858u: goto L_08AAAEF8;
    case 859u: goto L_08AAAF00;
    case 860u: goto L_08AAAF10;
    case 861u: goto L_08AAAF18;
    case 862u: goto L_08AAAF24;
    case 863u: goto L_08AAAF2C;
    case 864u: goto L_08AAAF34;
    case 865u: goto L_08AAAF50;
    case 866u: goto L_08AAAF68;
    case 867u: goto L_08AAAF74;
    case 868u: goto L_08AAAF7C;
    case 869u: goto L_08AAAF90;
    case 870u: goto L_08AAAF9C;
    case 871u: goto L_08AAAFA8;
    case 872u: goto L_08AAAFAC;
    case 873u: goto L_08AAAFB4;
    case 874u: goto L_08AAAFC0;
    case 875u: goto L_08AAAFC8;
    case 876u: goto L_08AAAFDC;
    case 877u: goto L_08AAAFE8;
    case 878u: goto L_08AAAFF8;
    case 879u: goto L_08AAAFFC;
    case 880u: goto L_08AAB008;
    case 881u: goto L_08AAB014;
    case 882u: goto L_08AAB01C;
    case 883u: goto L_08AAB02C;
    case 884u: goto L_08AAB038;
    case 885u: goto L_08AAB044;
    case 886u: goto L_08AAB054;
    case 887u: goto L_08AAB05C;
    case 888u: goto L_08AAB068;
    case 889u: goto L_08AAB088;
    case 890u: goto L_08AAB090;
    case 891u: goto L_08AAB098;
    case 892u: goto L_08AAB0A0;
    case 893u: goto L_08AAB0B8;
    case 894u: goto L_08AAB0C0;
    case 895u: goto L_08AAB0E0;
    case 896u: goto L_08AAB0E4;
    case 897u: goto L_08AAB0E8;
    case 898u: goto L_08AAB0F0;
    case 899u: goto L_08AAB110;
    case 900u: goto L_08AAB124;
    case 901u: goto L_08AAB134;
    case 902u: goto L_08AAB14C;
    case 903u: goto L_08AAB154;
    case 904u: goto L_08AAB168;
    case 905u: goto L_08AAB174;
    case 906u: goto L_08AAB17C;
    case 907u: goto L_08AAB184;
    case 908u: goto L_08AAB18C;
    case 909u: goto L_08AAB1A0;
    case 910u: goto L_08AAB1A4;
    case 911u: goto L_08AAB1AC;
    case 912u: goto L_08AAB1B0;
    case 913u: goto L_08AAB1C8;
    case 914u: goto L_08AAB1D8;
    case 915u: goto L_08AAB1F0;
    case 916u: goto L_08AAB200;
    case 917u: goto L_08AAB214;
    case 918u: goto L_08AAB228;
    case 919u: goto L_08AAB230;
    case 920u: goto L_08AAB240;
    case 921u: goto L_08AAB254;
    case 922u: goto L_08AAB270;
    case 923u: goto L_08AAB284;
    case 924u: goto L_08AAB290;
    case 925u: goto L_08AAB298;
    case 926u: goto L_08AAB29C;
    case 927u: goto L_08AAB2B0;
    case 928u: goto L_08AAB2C8;
    case 929u: goto L_08AAB2DC;
    case 930u: goto L_08AAB2E4;
    case 931u: goto L_08AAB2E8;
    case 932u: goto L_08AAB2F8;
    case 933u: goto L_08AAB38C;
    case 934u: goto L_08AAB3A0;
    case 935u: goto L_08AAB3C0;
    case 936u: goto L_08AAB3E0;
    case 937u: goto L_08AAB3F4;
    case 938u: goto L_08AAB42C;
    case 939u: goto L_08AAB448;
    case 940u: goto L_08AAB470;
    case 941u: goto L_08AAB484;
    case 942u: goto L_08AAB48C;
    case 943u: goto L_08AAB4A0;
    case 944u: goto L_08AAB4B4;
    case 945u: goto L_08AAB4BC;
    case 946u: goto L_08AAB4CC;
    case 947u: goto L_08AAB4E0;
    case 948u: goto L_08AAB4FC;
    case 949u: goto L_08AAB510;
    case 950u: goto L_08AAB51C;
    case 951u: goto L_08AAB524;
    case 952u: goto L_08AAB528;
    case 953u: goto L_08AAB53C;
    case 954u: goto L_08AAB59C;
    case 955u: goto L_08AAB5B0;
    case 956u: goto L_08AAB5C4;
    case 957u: goto L_08AAB5D8;
    case 958u: goto L_08AAB5EC;
    case 959u: goto L_08AAB60C;
    case 960u: goto L_08AAB614;
    case 961u: goto L_08AAB62C;
    case 962u: goto L_08AAB640;
    case 963u: goto L_08AAB648;
    case 964u: goto L_08AAB650;
    case 965u: goto L_08AAB654;
    case 966u: goto L_08AAB65C;
    case 967u: goto L_08AAB670;
    case 968u: goto L_08AAB680;
    case 969u: goto L_08AAB698;
    case 970u: goto L_08AAB6B4;
    case 971u: goto L_08AAB6C8;
    case 972u: goto L_08AAB6D4;
    case 973u: goto L_08AAB6DC;
    case 974u: goto L_08AAB6E0;
    case 975u: goto L_08AAB6F4;
    case 976u: goto L_08AAB710;
    case 977u: goto L_08AAB720;
    case 978u: goto L_08AAB72C;
    case 979u: goto L_08AAB734;
    case 980u: goto L_08AAB738;
    case 981u: goto L_08AAB74C;
    case 982u: goto L_08AAB768;
    case 983u: goto L_08AAB77C;
    case 984u: goto L_08AAB788;
    case 985u: goto L_08AAB790;
    case 986u: goto L_08AAB794;
    case 987u: goto L_08AAB7A8;
    case 988u: goto L_08AAB828;
    case 989u: goto L_08AAB830;
    case 990u: goto L_08AAB840;
    case 991u: goto L_08AAB87C;
    case 992u: goto L_08AAB898;
    case 993u: goto L_08AAB8B8;
    case 994u: goto L_08AAB8EC;
    case 995u: goto L_08AAB8F4;
    case 996u: goto L_08AAB908;
    case 997u: goto L_08AAB918;
    case 998u: goto L_08AAB938;
    case 999u: goto L_08AAB98C;
    case 1000u: goto L_08AAB994;
    case 1001u: goto L_08AAB9A4;
    case 1002u: goto L_08AAB9D0;
    case 1003u: goto L_08AAB9EC;
    case 1004u: goto L_08AABA0C;
    case 1005u: goto L_08AABA14;
    case 1006u: goto L_08AABA28;
    case 1007u: goto L_08AABA3C;
    case 1008u: goto L_08AABA44;
    case 1009u: goto L_08AABA54;
    case 1010u: goto L_08AABA68;
    case 1011u: goto L_08AABAF4;
    case 1012u: goto L_08AABAFC;
    case 1013u: goto L_08AABB14;
    case 1014u: goto L_08AABB28;
    case 1015u: goto L_08AABB30;
    case 1016u: goto L_08AABB38;
    case 1017u: goto L_08AABB3C;
    case 1018u: goto L_08AABB44;
    case 1019u: goto L_08AABB58;
    case 1020u: goto L_08AABB68;
    case 1021u: goto L_08AABB80;
    case 1022u: goto L_08AABB9C;
    case 1023u: goto L_08AABBB0;
    case 1024u: goto L_08AABBBC;
    case 1025u: goto L_08AABBC4;
    case 1026u: goto L_08AABBC8;
    case 1027u: goto L_08AABBDC;
    case 1028u: goto L_08AABBF8;
    case 1029u: goto L_08AABC0C;
    case 1030u: goto L_08AABC18;
    case 1031u: goto L_08AABC20;
    case 1032u: goto L_08AABC24;
    case 1033u: goto L_08AABC38;
    case 1034u: goto L_08AABCA8;
    case 1035u: goto L_08AABCB0;
    case 1036u: goto L_08AABCC0;
    case 1037u: goto L_08AABCF4;
    case 1038u: goto L_08AABD10;
    case 1039u: goto L_08AABD30;
    case 1040u: goto L_08AABD4C;
    case 1041u: goto L_08AABD6C;
    case 1042u: goto L_08AABD74;
    case 1043u: goto L_08AABD8C;
    case 1044u: goto L_08AABDA0;
    case 1045u: goto L_08AABDA8;
    case 1046u: goto L_08AABDB0;
    case 1047u: goto L_08AABDB4;
    case 1048u: goto L_08AABDBC;
    case 1049u: goto L_08AABDD0;
    case 1050u: goto L_08AABDE0;
    case 1051u: goto L_08AABDF8;
    case 1052u: goto L_08AABE14;
    case 1053u: goto L_08AABE28;
    case 1054u: goto L_08AABE34;
    case 1055u: goto L_08AABE3C;
    case 1056u: goto L_08AABE40;
    case 1057u: goto L_08AABE54;
    case 1058u: goto L_08AABE70;
    case 1059u: goto L_08AABE84;
    case 1060u: goto L_08AABE90;
    case 1061u: goto L_08AABE98;
    case 1062u: goto L_08AABE9C;
    case 1063u: goto L_08AABEB0;
    case 1064u: goto L_08AABF34;
    case 1065u: goto L_08AABF3C;
    case 1066u: goto L_08AABF54;
    case 1067u: goto L_08AABF74;
    case 1068u: goto L_08AABF8C;
    case 1069u: goto L_08AABF94;
    case 1070u: goto L_08AABFA4;
    case 1071u: goto L_08AABFB8;
    case 1072u: goto L_08AABFD0;
    case 1073u: goto L_08AABFD8;
    case 1074u: goto L_08AABFEC;
    case 1075u: goto L_08AABFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AA8000:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20196)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20200)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AA824C;
      }
      goto L_08AA8020;
    }
L_08AA8020:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA8220;
      }
      goto L_08AA802C;
    }
L_08AA802C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA803C;
      }
      goto L_08AA8034;
    }
L_08AA8034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA856C;
      }
      goto L_08AA803C;
    }
L_08AA803C:
    ctx.set_gpr(31, 0x08AA8044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA8044u) goto L_08AA8044;
    return;
L_08AA8044:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA8054u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20492));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AA8054u) goto L_08AA8054;
    return;
L_08AA8054:
    ctx.set_gpr(31, 0x08AA805Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AA805Cu) goto L_08AA805C;
    return;
L_08AA805C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.set_gpr(31, 0x08AA8068u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AA8068u) goto L_08AA8068;
    return;
L_08AA8068:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AA8074u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA8074u) goto L_08AA8074;
    return;
L_08AA8074:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16988u << 16u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(200));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(190));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08AA80A8u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08AA80A8u) goto L_08AA80A8;
    return;
L_08AA80A8:
    ctx.set_gpr(31, 0x08AA80B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA80B0u) goto L_08AA80B0;
    return;
L_08AA80B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA80C0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA80C0u) goto L_08AA80C0;
    return;
L_08AA80C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20500));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA80E0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AA80E0u) goto L_08AA80E0;
    return;
L_08AA80E0:
    ctx.set_gpr(31, 0x08AA80E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA80E8u) goto L_08AA80E8;
    return;
L_08AA80E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA80F8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA80F8u) goto L_08AA80F8;
    return;
L_08AA80F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20520));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA8118u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AA8118u) goto L_08AA8118;
    return;
L_08AA8118:
    ctx.set_gpr(31, 0x08AA8120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA8120u) goto L_08AA8120;
    return;
L_08AA8120:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA8130u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA8130u) goto L_08AA8130;
    return;
L_08AA8130:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20540));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA8150u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AA8150u) goto L_08AA8150;
    return;
L_08AA8150:
    ctx.set_gpr(31, 0x08AA8158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA8158u) goto L_08AA8158;
    return;
L_08AA8158:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA8168u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA8168u) goto L_08AA8168;
    return;
L_08AA8168:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20560));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA8188u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AA8188u) goto L_08AA8188;
    return;
L_08AA8188:
    ctx.set_gpr(31, 0x08AA8190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA8190u) goto L_08AA8190;
    return;
L_08AA8190:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA81A0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA81A0u) goto L_08AA81A0;
    return;
L_08AA81A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20568));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA81C0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AA81C0u) goto L_08AA81C0;
    return;
L_08AA81C0:
    ctx.set_gpr(31, 0x08AA81C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AA81C8u) goto L_08AA81C8;
    return;
L_08AA81C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA81D4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08AA81D4u) goto L_08AA81D4;
    return;
L_08AA81D4:
    ctx.set_gpr(31, 0x08AA81DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA81DCu) goto L_08AA81DC;
    return;
L_08AA81DC:
    ctx.set_gpr(31, 0x08AA81E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA81E4u) goto L_08AA81E4;
    return;
L_08AA81E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08AA81FCu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AA81FCu) goto L_08AA81FC;
    return;
L_08AA81FC:
    ctx.set_gpr(31, 0x08AA8204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA8204u) goto L_08AA8204;
    return;
L_08AA8204:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA8210u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08AA8210u) goto L_08AA8210;
    return;
L_08AA8210:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA8750;
      }
      goto L_08AA8220;
    }
L_08AA8220:
    ctx.set_gpr(31, 0x08AA8228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA8228u) goto L_08AA8228;
    return;
L_08AA8228:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA8234u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AA8234u) goto L_08AA8234;
    return;
L_08AA8234:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AA8754;
    }
    goto L_08AA823C;
L_08AA823C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA8750;
      }
      goto L_08AA824C;
    }
L_08AA824C:
    ctx.set_gpr(31, 0x08AA8254u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA8254u) goto L_08AA8254;
    return;
L_08AA8254:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA8264u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA8264u) goto L_08AA8264;
    return;
L_08AA8264:
    ctx.set_gpr(31, 0x08AA826Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AA826Cu) goto L_08AA826C;
    return;
L_08AA826C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA82B4;
      }
      goto L_08AA8274;
    }
L_08AA8274:
    ctx.set_gpr(31, 0x08AA827Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA827Cu) goto L_08AA827C;
    return;
L_08AA827C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA828Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA828Cu) goto L_08AA828C;
    return;
L_08AA828C:
    ctx.set_gpr(31, 0x08AA8294u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AA8294u) goto L_08AA8294;
    return;
L_08AA8294:
    ctx.set_gpr(31, 0x08AA829Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AA829Cu) goto L_08AA829C;
    return;
L_08AA829C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(31, 0x08AA82B4u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(316)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AA82B4u) goto L_08AA82B4;
    return;
L_08AA82B4:
    ctx.set_gpr(31, 0x08AA82BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA82BCu) goto L_08AA82BC;
    return;
L_08AA82BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA82C8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AA82C8u) goto L_08AA82C8;
    return;
L_08AA82C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8380;
      }
      goto L_08AA82D0;
    }
L_08AA82D0:
    ctx.set_gpr(31, 0x08AA82D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA82D8u) goto L_08AA82D8;
    return;
L_08AA82D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA82E4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AA82E4u) goto L_08AA82E4;
    return;
L_08AA82E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AA8360;
    }
    goto L_08AA82F0;
L_08AA82F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AA8304;
      }
      goto L_08AA82FC;
    }
L_08AA82FC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_08AA8378;
      }
      goto L_08AA8304;
    }
L_08AA8304:
    ctx.set_gpr(31, 0x08AA830Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA830Cu) goto L_08AA830C;
    return;
L_08AA830C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA831Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA831Cu) goto L_08AA831C;
    return;
L_08AA831C:
    ctx.set_gpr(31, 0x08AA8324u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AA8324u) goto L_08AA8324;
    return;
L_08AA8324:
    ctx.set_gpr(31, 0x08AA832Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AA832Cu) goto L_08AA832C;
    return;
L_08AA832C:
    ctx.set_gpr(31, 0x08AA8334u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08AA8334u) goto L_08AA8334;
    return;
L_08AA8334:
    ctx.set_gpr(31, 0x08AA833Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AA833Cu) goto L_08AA833C;
    return;
L_08AA833C:
    ctx.set_gpr(31, 0x08AA8344u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AA8344u) goto L_08AA8344;
    return;
L_08AA8344:
    ctx.set_gpr(31, 0x08AA834Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA834Cu) goto L_08AA834C;
    return;
L_08AA834C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA8358u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AA8358u) goto L_08AA8358;
    return;
L_08AA8358:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8374;
      }
      goto L_08AA8360;
    }
L_08AA8360:
    ctx.set_gpr(31, 0x08AA8368u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA8368u) goto L_08AA8368;
    return;
L_08AA8368:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA8374u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AA8374u) goto L_08AA8374;
    return;
L_08AA8374:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_08AA8378;
L_08AA8378:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_08AA8380;
L_08AA8380:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20204)));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20208)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20212)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20216)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20220)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20224)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20228)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20232)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20236)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20240)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20244)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20248)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08AA8414u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA8414u) goto L_08AA8414;
    return;
L_08AA8414:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17250u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17273u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16928u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AA8458u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 103u, 0x08B00814u>(ctx, &aot_mem) && ctx.pc == 0x08AA8458u) goto L_08AA8458;
    return;
L_08AA8458:
    ctx.set_gpr(31, 0x08AA8460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA8460u) goto L_08AA8460;
    return;
L_08AA8460:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17250u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17140u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17273u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17056u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AA84A4u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 103u, 0x08B00814u>(ctx, &aot_mem) && ctx.pc == 0x08AA84A4u) goto L_08AA84A4;
    return;
L_08AA84A4:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20252));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(120));
    goto L_08AA84B4;
L_08AA84B4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AA84B4;
      }
      goto L_08AA84D4;
    }
L_08AA84D4:
    ctx.set_gpr(31, 0x08AA84DCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 176u, 0x088AC998u>(ctx, &aot_mem) && ctx.pc == 0x08AA84DCu) goto L_08AA84DC;
    return;
L_08AA84DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AA84E8u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 176u, 0x088AC998u>(ctx, &aot_mem) && ctx.pc == 0x08AA84E8u) goto L_08AA84E8;
    return;
L_08AA84E8:
    ctx.set_gpr(31, 0x08AA84F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AA84F0u) goto L_08AA84F0;
    return;
L_08AA84F0:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA8500u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AA8500u) goto L_08AA8500;
    return;
L_08AA8500:
    ctx.set_gpr(31, 0x08AA8508u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 174u, 0x088AC978u>(ctx, &aot_mem) && ctx.pc == 0x08AA8508u) goto L_08AA8508;
    return;
L_08AA8508:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AA8514u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 174u, 0x088AC978u>(ctx, &aot_mem) && ctx.pc == 0x08AA8514u) goto L_08AA8514;
    return;
L_08AA8514:
    ctx.set_gpr(31, 0x08AA851Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AA851Cu) goto L_08AA851C;
    return;
L_08AA851C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA852Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AA852Cu) goto L_08AA852C;
    return;
L_08AA852C:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    goto L_08AA8538;
L_08AA8538:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20584));
    ctx.set_gpr(31, 0x08AA8550u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA8550u) goto L_08AA8550;
    return;
L_08AA8550:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AA8538;
      }
      goto L_08AA8564;
    }
L_08AA8564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8750;
      }
      goto L_08AA856C;
    }
L_08AA856C:
    ctx.set_gpr(31, 0x08AA8574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA8574u) goto L_08AA8574;
    return;
L_08AA8574:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA8580u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AA8580u) goto L_08AA8580;
    return;
L_08AA8580:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8750;
      }
      goto L_08AA8588;
    }
L_08AA8588:
    ctx.set_gpr(31, 0x08AA8590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA8590u) goto L_08AA8590;
    return;
L_08AA8590:
    ctx.set_gpr(31, 0x08AA8598u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA8598u) goto L_08AA8598;
    return;
L_08AA8598:
    ctx.set_gpr(31, 0x08AA85A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AA85A0u) goto L_08AA85A0;
    return;
L_08AA85A0:
    ctx.set_gpr(31, 0x08AA85A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA85A8u) goto L_08AA85A8;
    return;
L_08AA85A8:
    ctx.set_gpr(31, 0x08AA85B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA85B0u) goto L_08AA85B0;
    return;
L_08AA85B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA85C0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA85C0u) goto L_08AA85C0;
    return;
L_08AA85C0:
    ctx.set_gpr(31, 0x08AA85C8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AA85C8u) goto L_08AA85C8;
    return;
L_08AA85C8:
    ctx.set_gpr(31, 0x08AA85D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA85D0u) goto L_08AA85D0;
    return;
L_08AA85D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA85DCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA85DCu) goto L_08AA85DC;
    return;
L_08AA85DC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA8710;
      }
      goto L_08AA85F0;
    }
L_08AA85F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA86D8;
      }
      goto L_08AA85FC;
    }
L_08AA85FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA86A0;
      }
      goto L_08AA8608;
    }
L_08AA8608:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA865C;
    }
    goto L_08AA8614;
L_08AA8614:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8624;
      }
      goto L_08AA861C;
    }
L_08AA861C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA8748;
      }
      goto L_08AA8624;
    }
L_08AA8624:
    ctx.set_gpr(31, 0x08AA862Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AA862Cu) goto L_08AA862C;
    return;
L_08AA862C:
    ctx.set_gpr(31, 0x08AA8634u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA8634u) goto L_08AA8634;
    return;
L_08AA8634:
    ctx.set_gpr(31, 0x08AA863Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA863Cu) goto L_08AA863C;
    return;
L_08AA863C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08AA8650u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA8650u) goto L_08AA8650;
    return;
L_08AA8650:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA8744;
      }
      goto L_08AA865C;
    }
L_08AA865C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, 0x08AA8668u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 194u, 0x08A94E38u>(ctx, &aot_mem) && ctx.pc == 0x08AA8668u) goto L_08AA8668;
    return;
L_08AA8668:
    ctx.set_gpr(31, 0x08AA8670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AA8670u) goto L_08AA8670;
    return;
L_08AA8670:
    ctx.set_gpr(31, 0x08AA8678u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA8678u) goto L_08AA8678;
    return;
L_08AA8678:
    ctx.set_gpr(31, 0x08AA8680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA8680u) goto L_08AA8680;
    return;
L_08AA8680:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08AA8694u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA8694u) goto L_08AA8694;
    return;
L_08AA8694:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA8744;
      }
      goto L_08AA86A0;
    }
L_08AA86A0:
    ctx.set_gpr(31, 0x08AA86A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AA86A8u) goto L_08AA86A8;
    return;
L_08AA86A8:
    ctx.set_gpr(31, 0x08AA86B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA86B0u) goto L_08AA86B0;
    return;
L_08AA86B0:
    ctx.set_gpr(31, 0x08AA86B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA86B8u) goto L_08AA86B8;
    return;
L_08AA86B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08AA86CCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA86CCu) goto L_08AA86CC;
    return;
L_08AA86CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA8744;
      }
      goto L_08AA86D8;
    }
L_08AA86D8:
    ctx.set_gpr(31, 0x08AA86E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AA86E0u) goto L_08AA86E0;
    return;
L_08AA86E0:
    ctx.set_gpr(31, 0x08AA86E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA86E8u) goto L_08AA86E8;
    return;
L_08AA86E8:
    ctx.set_gpr(31, 0x08AA86F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA86F0u) goto L_08AA86F0;
    return;
L_08AA86F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08AA8704u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA8704u) goto L_08AA8704;
    return;
L_08AA8704:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA8744;
      }
      goto L_08AA8710;
    }
L_08AA8710:
    ctx.set_gpr(31, 0x08AA8718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AA8718u) goto L_08AA8718;
    return;
L_08AA8718:
    ctx.set_gpr(31, 0x08AA8720u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA8720u) goto L_08AA8720;
    return;
L_08AA8720:
    ctx.set_gpr(31, 0x08AA8728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA8728u) goto L_08AA8728;
    return;
L_08AA8728:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08AA873Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA873Cu) goto L_08AA873C;
    return;
L_08AA873C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_08AA8744;
L_08AA8744:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AA8748;
L_08AA8748:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA8758;
      }
      goto L_08AA8750;
    }
L_08AA8750:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AA8754;
L_08AA8754:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AA8758;
L_08AA8758:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA876C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 345u, 0x08A9A69Cu>(ctx, &aot_mem); return;
L_08AA8774:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 379u, 0x08A9A8A4u>(ctx, &aot_mem); return;
L_08AA877C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 422u, 0x08A9AC94u>(ctx, &aot_mem); return;
L_08AA8784:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AA87AC;
      }
      goto L_08AA87A4;
    }
L_08AA87A4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    goto L_08AA87AC;
L_08AA87AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08AA8878;
    }
    goto L_08AA87BC;
L_08AA87BC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA87CC;
      }
      goto L_08AA87C4;
    }
L_08AA87C4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AA8974;
      }
      goto L_08AA87CC;
    }
L_08AA87CC:
    ctx.set_gpr(31, 0x08AA87D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AA87D4u) goto L_08AA87D4;
    return;
L_08AA87D4:
    ctx.set_gpr(31, 0x08AA87DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08AA87DCu) goto L_08AA87DC;
    return;
L_08AA87DC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08AA87E8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AA8988;
L_08AA87E8:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
        goto L_08AA87FC;
    }
    goto L_08AA87F0;
L_08AA87F0:
    ctx.set_gpr(31, 0x08AA87F8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 624u, 0x08AAE7D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA87F8u) goto L_08AA87F8;
    return;
L_08AA87F8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08AA87FC;
L_08AA87FC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8834;
      }
      goto L_08AA8804;
    }
L_08AA8804:
    ctx.set_gpr(31, 0x08AA880Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 177u, 0x08848BDCu>(ctx, &aot_mem) && ctx.pc == 0x08AA880Cu) goto L_08AA880C;
    return;
L_08AA880C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AA8818u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 174u, 0x088AC978u>(ctx, &aot_mem) && ctx.pc == 0x08AA8818u) goto L_08AA8818;
    return;
L_08AA8818:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08AA882Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 87u, 0x08840464u>(ctx, &aot_mem) && ctx.pc == 0x08AA882Cu) goto L_08AA882C;
    return;
L_08AA882C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AA8860;
      }
      goto L_08AA8834;
    }
L_08AA8834:
    ctx.set_gpr(31, 0x08AA883Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 177u, 0x08848BDCu>(ctx, &aot_mem) && ctx.pc == 0x08AA883Cu) goto L_08AA883C;
    return;
L_08AA883C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AA8848u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 176u, 0x088AC998u>(ctx, &aot_mem) && ctx.pc == 0x08AA8848u) goto L_08AA8848;
    return;
L_08AA8848:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08AA885Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 87u, 0x08840464u>(ctx, &aot_mem) && ctx.pc == 0x08AA885Cu) goto L_08AA885C;
    return;
L_08AA885C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08AA8860;
L_08AA8860:
    ctx.set_gpr(31, 0x08AA8868u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 639u, 0x08AAE8B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA8868u) goto L_08AA8868;
    return;
L_08AA8868:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA8970;
      }
      goto L_08AA8878;
    }
L_08AA8878:
    ctx.set_gpr(31, 0x08AA8880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 646u, 0x08AAE9A8u>(ctx, &aot_mem) && ctx.pc == 0x08AA8880u) goto L_08AA8880;
    return;
L_08AA8880:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8970;
      }
      goto L_08AA8888;
    }
L_08AA8888:
    ctx.set_gpr(31, 0x08AA8890u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 653u, 0x08AAE9F4u>(ctx, &aot_mem) && ctx.pc == 0x08AA8890u) goto L_08AA8890;
    return;
L_08AA8890:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08AA8958;
    }
    goto L_08AA8898;
L_08AA8898:
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
        goto L_08AA8900;
    }
    goto L_08AA88A0;
L_08AA88A0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA88B0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA88B0u) goto L_08AA88B0;
    return;
L_08AA88B0:
    ctx.set_gpr(31, 0x08AA88B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 177u, 0x08848BDCu>(ctx, &aot_mem) && ctx.pc == 0x08AA88B8u) goto L_08AA88B8;
    return;
L_08AA88B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA88C8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 676u, 0x08AAEB20u>(ctx, &aot_mem) && ctx.pc == 0x08AA88C8u) goto L_08AA88C8;
    return;
L_08AA88C8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08AA88DCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 38u, 0x0884019Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA88DCu) goto L_08AA88DC;
    return;
L_08AA88DC:
    ctx.set_gpr(31, 0x08AA88E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA88E4u) goto L_08AA88E4;
    return;
L_08AA88E4:
    ctx.set_gpr(31, 0x08AA88ECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 527u, 0x08861EF0u>(ctx, &aot_mem) && ctx.pc == 0x08AA88ECu) goto L_08AA88EC;
    return;
L_08AA88EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA88F8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 447u, 0x08A9AE08u>(ctx, &aot_mem) && ctx.pc == 0x08AA88F8u) goto L_08AA88F8;
    return;
L_08AA88F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8954;
      }
      goto L_08AA8900;
    }
L_08AA8900:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA890Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA890Cu) goto L_08AA890C;
    return;
L_08AA890C:
    ctx.set_gpr(31, 0x08AA8914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 177u, 0x08848BDCu>(ctx, &aot_mem) && ctx.pc == 0x08AA8914u) goto L_08AA8914;
    return;
L_08AA8914:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA8924u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 676u, 0x08AAEB20u>(ctx, &aot_mem) && ctx.pc == 0x08AA8924u) goto L_08AA8924;
    return;
L_08AA8924:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08AA8938u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 38u, 0x0884019Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA8938u) goto L_08AA8938;
    return;
L_08AA8938:
    ctx.set_gpr(31, 0x08AA8940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA8940u) goto L_08AA8940;
    return;
L_08AA8940:
    ctx.set_gpr(31, 0x08AA8948u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 527u, 0x08861EF0u>(ctx, &aot_mem) && ctx.pc == 0x08AA8948u) goto L_08AA8948;
    return;
L_08AA8948:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA8954u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 451u, 0x08A9AE84u>(ctx, &aot_mem) && ctx.pc == 0x08AA8954u) goto L_08AA8954;
    return;
L_08AA8954:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08AA8958;
L_08AA8958:
    ctx.set_gpr(31, 0x08AA8960u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 631u, 0x08AAE850u>(ctx, &aot_mem) && ctx.pc == 0x08AA8960u) goto L_08AA8960;
    return;
L_08AA8960:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AA8974;
      }
      goto L_08AA8970;
    }
L_08AA8970:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AA8974;
L_08AA8974:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8988:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_08AA8990:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AA89ECu);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 186u, 0x08848C48u>(ctx, &aot_mem) && ctx.pc == 0x08AA89ECu) goto L_08AA89EC;
    return;
L_08AA89EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA89F8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08AA8A14;
L_08AA89F8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
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
L_08AA8A14:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8A1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AA8A68;
      }
      goto L_08AA8A38;
    }
L_08AA8A38:
    ctx.set_gpr(31, 0x08AA8A40u);
    // nop
    goto L_08AA8AA8;
L_08AA8A40:
    ctx.set_gpr(31, 0x08AA8A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 186u, 0x08848C48u>(ctx, &aot_mem) && ctx.pc == 0x08AA8A48u) goto L_08AA8A48;
    return;
L_08AA8A48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA8A54u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AA8A14;
L_08AA8A54:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AA8A6C;
    }
    goto L_08AA8A60;
L_08AA8A60:
    ctx.set_gpr(31, 0x08AA8A68u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AA8A80;
L_08AA8A68:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AA8A6C;
L_08AA8A6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8A80:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08AA8A88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AA8A98u);
    // nop
    goto L_08AA8AB0;
L_08AA8A98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8AA8:
    // nop
    goto L_08AA8AB0;
L_08AA8AB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AA8B04;
      }
      goto L_08AA8AE8;
    }
L_08AA8AE8:
    ctx.set_gpr(31, 0x08AA8AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA8AF0u) goto L_08AA8AF0;
    return;
L_08AA8AF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA8AFCu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 438u, 0x08846B50u>(ctx, &aot_mem) && ctx.pc == 0x08AA8AFCu) goto L_08AA8AFC;
    return;
L_08AA8AFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_08AA8B04;
L_08AA8B04:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08AA8B34;
    }
    goto L_08AA8B14;
L_08AA8B14:
    ctx.set_gpr(31, 0x08AA8B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA8B1Cu) goto L_08AA8B1C;
    return;
L_08AA8B1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA8B28u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 431u, 0x08846ABCu>(ctx, &aot_mem) && ctx.pc == 0x08AA8B28u) goto L_08AA8B28;
    return;
L_08AA8B28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08AA8B34;
L_08AA8B34:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08AA8B64;
    }
    goto L_08AA8B3C;
L_08AA8B3C:
    ctx.set_gpr(31, 0x08AA8B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AA8B44u) goto L_08AA8B44;
    return;
L_08AA8B44:
    ctx.set_gpr(31, 0x08AA8B4Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AA8B4Cu) goto L_08AA8B4C;
    return;
L_08AA8B4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA8B58u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA8B58u) goto L_08AA8B58;
    return;
L_08AA8B58:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08AA8B64;
L_08AA8B64:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_08AA8B94;
    }
    goto L_08AA8B6C;
L_08AA8B6C:
    ctx.set_gpr(31, 0x08AA8B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AA8B74u) goto L_08AA8B74;
    return;
L_08AA8B74:
    ctx.set_gpr(31, 0x08AA8B7Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AA8B7Cu) goto L_08AA8B7C;
    return;
L_08AA8B7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA8B88u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA8B88u) goto L_08AA8B88;
    return;
L_08AA8B88:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AA8B94;
L_08AA8B94:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
        goto L_08AA8BC4;
    }
    goto L_08AA8B9C;
L_08AA8B9C:
    ctx.set_gpr(31, 0x08AA8BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AA8BA4u) goto L_08AA8BA4;
    return;
L_08AA8BA4:
    ctx.set_gpr(31, 0x08AA8BACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AA8BACu) goto L_08AA8BAC;
    return;
L_08AA8BAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA8BB8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA8BB8u) goto L_08AA8BB8;
    return;
L_08AA8BB8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    goto L_08AA8BC4;
L_08AA8BC4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA8BD0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA8BD0u) goto L_08AA8BD0;
    return;
L_08AA8BD0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA8BE0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA8BE0u) goto L_08AA8BE0;
    return;
L_08AA8BE0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(312));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA8BF0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1024));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA8BF0u) goto L_08AA8BF0;
    return;
L_08AA8BF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8C04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AA8C28u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    goto L_08AA9290;
L_08AA8C28:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AA8CB0;
    }
    goto L_08AA8C30;
L_08AA8C30:
    ctx.set_gpr(31, 0x08AA8C38u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AA8A88;
L_08AA8C38:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8CAC;
      }
      goto L_08AA8C50;
    }
L_08AA8C50:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-23892));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8C6C:
    ctx.set_gpr(31, 0x08AA8C74u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AA8E2C;
L_08AA8C74:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AA8CAC;
      }
      goto L_08AA8C80;
    }
L_08AA8C80:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AA8CAC;
      }
      goto L_08AA8C8C;
    }
L_08AA8C8C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AA8CAC;
      }
      goto L_08AA8C98;
    }
L_08AA8C98:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AA8CAC;
      }
      goto L_08AA8CA4;
    }
L_08AA8CA4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_08AA8CAC;
L_08AA8CAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AA8CB0;
L_08AA8CB0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8CC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AA8D34;
      }
      goto L_08AA8CE0;
    }
L_08AA8CE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA8D18;
      }
      goto L_08AA8CF0;
    }
L_08AA8CF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA8D04;
      }
      goto L_08AA8CFC;
    }
L_08AA8CFC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AA8D2C;
      }
      goto L_08AA8D04;
    }
L_08AA8D04:
    ctx.set_gpr(31, 0x08AA8D0Cu);
    // nop
    goto L_08AA9328;
L_08AA8D0C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AA8DA0;
      }
      goto L_08AA8D18;
    }
L_08AA8D18:
    ctx.set_gpr(31, 0x08AA8D20u);
    // nop
    goto L_08AA9588;
L_08AA8D20:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AA8DA0;
      }
      goto L_08AA8D2C;
    }
L_08AA8D2C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08AA8DA4;
      }
      goto L_08AA8D34;
    }
L_08AA8D34:
    ctx.set_gpr(31, 0x08AA8D3Cu);
    // nop
    ctx.pc = 0x08B0E044u;
    return;
L_08AA8D3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8DA0;
      }
      goto L_08AA8D44;
    }
L_08AA8D44:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1416)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_08AA8D70;
      }
      goto L_08AA8D54;
    }
L_08AA8D54:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA8D80;
      }
      goto L_08AA8D60;
    }
L_08AA8D60:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8D80;
      }
      goto L_08AA8D68;
    }
L_08AA8D68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8D80;
      }
      goto L_08AA8D70;
    }
L_08AA8D70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2872)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8D80;
      }
      goto L_08AA8D7C;
    }
L_08AA8D7C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08AA8D80;
L_08AA8D80:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AA8E18;
    }
    goto L_08AA8D88;
L_08AA8D88:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08AA8D98u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AA8C04;
L_08AA8D98:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AA8E18;
      }
      goto L_08AA8DA0;
    }
L_08AA8DA0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08AA8DA4;
L_08AA8DA4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AA8E18;
    }
    goto L_08AA8DAC;
L_08AA8DAC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA8DB8u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    goto L_08AA9898;
L_08AA8DB8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA8DC8u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AA98A0;
L_08AA8DC8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA8DD8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1536));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA8DD8u) goto L_08AA8DD8;
    return;
L_08AA8DD8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AA8DE8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1536));
    goto L_08AA98B8;
L_08AA8DE8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA8DF8u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_08AA98E8;
L_08AA8DF8:
    ctx.set_gpr(31, 0x08AA8E00u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0E02Cu;
    return;
L_08AA8E00:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AA8E10;
    }
    goto L_08AA8E08;
L_08AA8E08:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA8E18;
      }
      goto L_08AA8E10;
    }
L_08AA8E10:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AA8E18;
L_08AA8E18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8E2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA8E4Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA8E4Cu) goto L_08AA8E4C;
    return;
L_08AA8E4C:
    ctx.set_gpr(31, 0x08AA8E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 177u, 0x08848BDCu>(ctx, &aot_mem) && ctx.pc == 0x08AA8E54u) goto L_08AA8E54;
    return;
L_08AA8E54:
    ctx.set_gpr(7, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08AA8E6Cu);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(20688));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 87u, 0x08840464u>(ctx, &aot_mem) && ctx.pc == 0x08AA8E6Cu) goto L_08AA8E6C;
    return;
L_08AA8E6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AA8EA0;
    }
    goto L_08AA8E7C;
L_08AA8E7C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AA8E90;
    }
    goto L_08AA8E88;
L_08AA8E88:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA8EAC;
      }
      goto L_08AA8E90;
    }
L_08AA8E90:
    ctx.set_gpr(31, 0x08AA8E98u);
    // nop
    goto L_08AA9104;
L_08AA8E98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8EA8;
      }
      goto L_08AA8EA0;
    }
L_08AA8EA0:
    ctx.set_gpr(31, 0x08AA8EA8u);
    // nop
    goto L_08AA8EB8;
L_08AA8EA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AA8EAC;
L_08AA8EAC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8EB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08AA8EE4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA8EE4u) goto L_08AA8EE4;
    return;
L_08AA8EE4:
    ctx.set_gpr(31, 0x08AA8EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 177u, 0x08848BDCu>(ctx, &aot_mem) && ctx.pc == 0x08AA8EECu) goto L_08AA8EEC;
    return;
L_08AA8EEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20608)));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(31, 0x08AA8F04u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 87u, 0x08840464u>(ctx, &aot_mem) && ctx.pc == 0x08AA8F04u) goto L_08AA8F04;
    return;
L_08AA8F04:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(20716)));
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(312));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(20717)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1024));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AA8F34u);
    ctx.set_gpr(17, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA8F34u) goto L_08AA8F34;
    return;
L_08AA8F34:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA8F44u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA8F44u) goto L_08AA8F44;
    return;
L_08AA8F44:
    ctx.set_gpr(31, 0x08AA8F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 177u, 0x08848BDCu>(ctx, &aot_mem) && ctx.pc == 0x08AA8F4Cu) goto L_08AA8F4C;
    return;
L_08AA8F4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20668)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08AA8F64u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 87u, 0x08840464u>(ctx, &aot_mem) && ctx.pc == 0x08AA8F64u) goto L_08AA8F64;
    return;
L_08AA8F64:
    ctx.set_gpr(31, 0x08AA8F6Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08AA8F6Cu) goto L_08AA8F6C;
    return;
L_08AA8F6C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(312));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08AA8F80u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AA8F80u) goto L_08AA8F80;
    return;
L_08AA8F80:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(312));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08AA8F98u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AA8F98u) goto L_08AA8F98;
    return;
L_08AA8F98:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-29964)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AA901C;
      }
      goto L_08AA8FB0;
    }
L_08AA8FB0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA8FC0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA8FC0u) goto L_08AA8FC0;
    return;
L_08AA8FC0:
    ctx.set_gpr(31, 0x08AA8FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 177u, 0x08848BDCu>(ctx, &aot_mem) && ctx.pc == 0x08AA8FC8u) goto L_08AA8FC8;
    return;
L_08AA8FC8:
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(2772));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x08AA8FE0u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 87u, 0x08840464u>(ctx, &aot_mem) && ctx.pc == 0x08AA8FE0u) goto L_08AA8FE0;
    return;
L_08AA8FE0:
    ctx.set_gpr(31, 0x08AA8FE8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08AA8FE8u) goto L_08AA8FE8;
    return;
L_08AA8FE8:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(312));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08AA9000u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AA9000u) goto L_08AA9000;
    return;
L_08AA9000:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(312));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08AA9018u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AA9018u) goto L_08AA9018;
    return;
L_08AA9018:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    goto L_08AA901C;
L_08AA901C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA902Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA902Cu) goto L_08AA902C;
    return;
L_08AA902C:
    ctx.set_gpr(31, 0x08AA9034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 177u, 0x08848BDCu>(ctx, &aot_mem) && ctx.pc == 0x08AA9034u) goto L_08AA9034;
    return;
L_08AA9034:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20652)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08AA904Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 87u, 0x08840464u>(ctx, &aot_mem) && ctx.pc == 0x08AA904Cu) goto L_08AA904C;
    return;
L_08AA904C:
    ctx.set_gpr(31, 0x08AA9054u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08AA9054u) goto L_08AA9054;
    return;
L_08AA9054:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(312));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08AA906Cu);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AA906Cu) goto L_08AA906C;
    return;
L_08AA906C:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(312));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08AA9084u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AA9084u) goto L_08AA9084;
    return;
L_08AA9084:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-30008)));
    if (static_cast<std::int32_t>(ctx.gpr[3]) <= 0) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AA90EC;
    }
    goto L_08AA9098;
L_08AA9098:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA90A8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA90A8u) goto L_08AA90A8;
    return;
L_08AA90A8:
    ctx.set_gpr(31, 0x08AA90B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 177u, 0x08848BDCu>(ctx, &aot_mem) && ctx.pc == 0x08AA90B0u) goto L_08AA90B0;
    return;
L_08AA90B0:
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(2728));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08AA90C8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 87u, 0x08840464u>(ctx, &aot_mem) && ctx.pc == 0x08AA90C8u) goto L_08AA90C8;
    return;
L_08AA90C8:
    ctx.set_gpr(31, 0x08AA90D0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08AA90D0u) goto L_08AA90D0;
    return;
L_08AA90D0:
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(312));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08AA90E8u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AA90E8u) goto L_08AA90E8;
    return;
L_08AA90E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AA90EC;
L_08AA90EC:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9104:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08AA912Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA912Cu) goto L_08AA912C;
    return;
L_08AA912C:
    ctx.set_gpr(31, 0x08AA9134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 177u, 0x08848BDCu>(ctx, &aot_mem) && ctx.pc == 0x08AA9134u) goto L_08AA9134;
    return;
L_08AA9134:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20628)));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(31, 0x08AA914Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 87u, 0x08840464u>(ctx, &aot_mem) && ctx.pc == 0x08AA914Cu) goto L_08AA914C;
    return;
L_08AA914C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(312));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA915Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1024));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA915Cu) goto L_08AA915C;
    return;
L_08AA915C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(31, 0x08AA916Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA916Cu) goto L_08AA916C;
    return;
L_08AA916C:
    ctx.set_gpr(31, 0x08AA9174u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 634u, 0x08847AC8u>(ctx, &aot_mem) && ctx.pc == 0x08AA9174u) goto L_08AA9174;
    return;
L_08AA9174:
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AA9180u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA9180u) goto L_08AA9180;
    return;
L_08AA9180:
    ctx.set_gpr(31, 0x08AA9188u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08AA9188u) goto L_08AA9188;
    return;
L_08AA9188:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AA9198u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 280u, 0x08860F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA9198u) goto L_08AA9198;
    return;
L_08AA9198:
    ctx.set_gpr(31, 0x08AA91A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA91A0u) goto L_08AA91A0;
    return;
L_08AA91A0:
    ctx.set_gpr(31, 0x08AA91A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 528u, 0x08861EF8u>(ctx, &aot_mem) && ctx.pc == 0x08AA91A8u) goto L_08AA91A8;
    return;
L_08AA91A8:
    ctx.set_gpr(31, 0x08AA91B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA91B0u) goto L_08AA91B0;
    return;
L_08AA91B0:
    ctx.set_gpr(31, 0x08AA91B8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08AA91B8u) goto L_08AA91B8;
    return;
L_08AA91B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08AA91CCu);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_08AA922C;
L_08AA91CC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA91DCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA91DCu) goto L_08AA91DC;
    return;
L_08AA91DC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AA91F8u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20720));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA91F8u) goto L_08AA91F8;
    return;
L_08AA91F8:
    ctx.set_gpr(31, 0x08AA9200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 177u, 0x08848BDCu>(ctx, &aot_mem) && ctx.pc == 0x08AA9200u) goto L_08AA9200;
    return;
L_08AA9200:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(312));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(31, 0x08AA9214u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 87u, 0x08840464u>(ctx, &aot_mem) && ctx.pc == 0x08AA9214u) goto L_08AA9214;
    return;
L_08AA9214:
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
L_08AA922C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 37282u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 46021u);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[3]) * static_cast<std::uint64_t>(ctx.gpr[8]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1000));
    ctx.set_gpr(10, ctx.hi);
    ctx.set_gpr(10, ctx.gpr[10] >> 11u);
    { const std::uint32_t dividend = ctx.gpr[10]; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, 34952u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 34953u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(9, ctx.hi);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[3]) * static_cast<std::uint64_t>(ctx.gpr[5]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[3] >> 5u);
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.hi);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.hi);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9290:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AA9320;
    }
    goto L_08AA92A0;
L_08AA92A0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA92B0;
      }
      goto L_08AA92A8;
    }
L_08AA92A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA92BC;
      }
      goto L_08AA92B0;
    }
L_08AA92B0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9320;
      }
      goto L_08AA92BC;
    }
L_08AA92BC:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
        goto L_08AA92D0;
    }
    goto L_08AA92C4;
L_08AA92C4:
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AA9320;
    }
    goto L_08AA92CC;
L_08AA92CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    goto L_08AA92D0;
L_08AA92D0:
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AA9320;
    }
    goto L_08AA92D8;
L_08AA92D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA9310;
      }
      goto L_08AA92E4;
    }
L_08AA92E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AA9320;
    }
    goto L_08AA92F0;
L_08AA92F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA9304;
      }
      goto L_08AA92FC;
    }
L_08AA92FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA931C;
      }
      goto L_08AA9304;
    }
L_08AA9304:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9320;
      }
      goto L_08AA9310;
    }
L_08AA9310:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9320;
      }
      goto L_08AA931C;
    }
L_08AA931C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AA9320;
L_08AA9320:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9328:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AA9574;
      }
      goto L_08AA9344;
    }
L_08AA9344:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-23856));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9360:
    ctx.set_gpr(31, 0x08AA9368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AA9368u) goto L_08AA9368;
    return;
L_08AA9368:
    ctx.set_gpr(31, 0x08AA9370u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1038u, 0x08AAFF54u>(ctx, &aot_mem) && ctx.pc == 0x08AA9370u) goto L_08AA9370;
    return;
L_08AA9370:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AA9578;
    }
    goto L_08AA9378;
L_08AA9378:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA9574;
      }
      goto L_08AA9388;
    }
L_08AA9388:
    ctx.set_gpr(31, 0x08AA9390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AA9390u) goto L_08AA9390;
    return;
L_08AA9390:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA939Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1736));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1046u, 0x08AAFFB8u>(ctx, &aot_mem) && ctx.pc == 0x08AA939Cu) goto L_08AA939C;
    return;
L_08AA939C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA9574;
      }
      goto L_08AA93AC;
    }
L_08AA93AC:
    ctx.set_gpr(31, 0x08AA93B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AA93B4u) goto L_08AA93B4;
    return;
L_08AA93B4:
    ctx.set_gpr(31, 0x08AA93BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1047u, 0x08AAFFCCu>(ctx, &aot_mem) && ctx.pc == 0x08AA93BCu) goto L_08AA93BC;
    return;
L_08AA93BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9574;
      }
      goto L_08AA93C4;
    }
L_08AA93C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA93FC;
      }
      goto L_08AA93D0;
    }
L_08AA93D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5476));
    ctx.set_gpr(31, 0x08AA93DCu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AA93DCu) goto L_08AA93DC;
    return;
L_08AA93DC:
    ctx.set_gpr(31, 0x08AA93E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AA93E4u) goto L_08AA93E4;
    return;
L_08AA93E4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AA93F8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA93F8u) goto L_08AA93F8;
    return;
L_08AA93F8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08AA93FC;
L_08AA93FC:
    ctx.set_gpr(31, 0x08AA9404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AA9404u) goto L_08AA9404;
    return;
L_08AA9404:
    ctx.set_gpr(31, 0x08AA940Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA940Cu) goto L_08AA940C;
    return;
L_08AA940C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08AA941Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AA941Cu) goto L_08AA941C;
    return;
L_08AA941C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA9574;
      }
      goto L_08AA942C;
    }
L_08AA942C:
    ctx.set_gpr(31, 0x08AA9434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AA9434u) goto L_08AA9434;
    return;
L_08AA9434:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA9440u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1737));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1046u, 0x08AAFFB8u>(ctx, &aot_mem) && ctx.pc == 0x08AA9440u) goto L_08AA9440;
    return;
L_08AA9440:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA9574;
      }
      goto L_08AA9450;
    }
L_08AA9450:
    ctx.set_gpr(31, 0x08AA9458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AA9458u) goto L_08AA9458;
    return;
L_08AA9458:
    ctx.set_gpr(31, 0x08AA9460u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1047u, 0x08AAFFCCu>(ctx, &aot_mem) && ctx.pc == 0x08AA9460u) goto L_08AA9460;
    return;
L_08AA9460:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9574;
      }
      goto L_08AA9468;
    }
L_08AA9468:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA94A0;
      }
      goto L_08AA9474;
    }
L_08AA9474:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5444));
    ctx.set_gpr(31, 0x08AA9480u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AA9480u) goto L_08AA9480;
    return;
L_08AA9480:
    ctx.set_gpr(31, 0x08AA9488u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AA9488u) goto L_08AA9488;
    return;
L_08AA9488:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AA949Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA949Cu) goto L_08AA949C;
    return;
L_08AA949C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08AA94A0;
L_08AA94A0:
    ctx.set_gpr(31, 0x08AA94A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AA94A8u) goto L_08AA94A8;
    return;
L_08AA94A8:
    ctx.set_gpr(31, 0x08AA94B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA94B0u) goto L_08AA94B0;
    return;
L_08AA94B0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08AA94C0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AA94C0u) goto L_08AA94C0;
    return;
L_08AA94C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA9574;
      }
      goto L_08AA94D0;
    }
L_08AA94D0:
    ctx.set_gpr(31, 0x08AA94D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AA94D8u) goto L_08AA94D8;
    return;
L_08AA94D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA94E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1738));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1046u, 0x08AAFFB8u>(ctx, &aot_mem) && ctx.pc == 0x08AA94E4u) goto L_08AA94E4;
    return;
L_08AA94E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA9574;
      }
      goto L_08AA94F4;
    }
L_08AA94F4:
    ctx.set_gpr(31, 0x08AA94FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AA94FCu) goto L_08AA94FC;
    return;
L_08AA94FC:
    ctx.set_gpr(31, 0x08AA9504u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1047u, 0x08AAFFCCu>(ctx, &aot_mem) && ctx.pc == 0x08AA9504u) goto L_08AA9504;
    return;
L_08AA9504:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9574;
      }
      goto L_08AA950C;
    }
L_08AA950C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9548;
      }
      goto L_08AA9518;
    }
L_08AA9518:
    ctx.set_gpr(2, 3u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 24158u);
    ctx.set_gpr(31, 0x08AA9528u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AA9528u) goto L_08AA9528;
    return;
L_08AA9528:
    ctx.set_gpr(31, 0x08AA9530u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AA9530u) goto L_08AA9530;
    return;
L_08AA9530:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AA9544u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA9544u) goto L_08AA9544;
    return;
L_08AA9544:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_08AA9548;
L_08AA9548:
    ctx.set_gpr(31, 0x08AA9550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AA9550u) goto L_08AA9550;
    return;
L_08AA9550:
    ctx.set_gpr(31, 0x08AA9558u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA9558u) goto L_08AA9558;
    return;
L_08AA9558:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08AA9568u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AA9568u) goto L_08AA9568;
    return;
L_08AA9568:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA9578;
      }
      goto L_08AA9574;
    }
L_08AA9574:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AA9578;
L_08AA9578:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9588:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AA97D4;
      }
      goto L_08AA95A4;
    }
L_08AA95A4:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-23828));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA95C0:
    ctx.set_gpr(31, 0x08AA95C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AA95C8u) goto L_08AA95C8;
    return;
L_08AA95C8:
    ctx.set_gpr(31, 0x08AA95D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1038u, 0x08AAFF54u>(ctx, &aot_mem) && ctx.pc == 0x08AA95D0u) goto L_08AA95D0;
    return;
L_08AA95D0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AA97D8;
    }
    goto L_08AA95D8;
L_08AA95D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA97D4;
      }
      goto L_08AA95E8;
    }
L_08AA95E8:
    ctx.set_gpr(31, 0x08AA95F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AA95F0u) goto L_08AA95F0;
    return;
L_08AA95F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA95FCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1739));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1046u, 0x08AAFFB8u>(ctx, &aot_mem) && ctx.pc == 0x08AA95FCu) goto L_08AA95FC;
    return;
L_08AA95FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA97D4;
      }
      goto L_08AA960C;
    }
L_08AA960C:
    ctx.set_gpr(31, 0x08AA9614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AA9614u) goto L_08AA9614;
    return;
L_08AA9614:
    ctx.set_gpr(31, 0x08AA961Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1047u, 0x08AAFFCCu>(ctx, &aot_mem) && ctx.pc == 0x08AA961Cu) goto L_08AA961C;
    return;
L_08AA961C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA97D4;
      }
      goto L_08AA9624;
    }
L_08AA9624:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA965C;
      }
      goto L_08AA9630;
    }
L_08AA9630:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5476));
    ctx.set_gpr(31, 0x08AA963Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AA963Cu) goto L_08AA963C;
    return;
L_08AA963C:
    ctx.set_gpr(31, 0x08AA9644u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AA9644u) goto L_08AA9644;
    return;
L_08AA9644:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AA9658u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA9658u) goto L_08AA9658;
    return;
L_08AA9658:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08AA965C;
L_08AA965C:
    ctx.set_gpr(31, 0x08AA9664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AA9664u) goto L_08AA9664;
    return;
L_08AA9664:
    ctx.set_gpr(31, 0x08AA966Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA966Cu) goto L_08AA966C;
    return;
L_08AA966C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08AA967Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AA967Cu) goto L_08AA967C;
    return;
L_08AA967C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA97D4;
      }
      goto L_08AA968C;
    }
L_08AA968C:
    ctx.set_gpr(31, 0x08AA9694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AA9694u) goto L_08AA9694;
    return;
L_08AA9694:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA96A0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1740));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1046u, 0x08AAFFB8u>(ctx, &aot_mem) && ctx.pc == 0x08AA96A0u) goto L_08AA96A0;
    return;
L_08AA96A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA97D4;
      }
      goto L_08AA96B0;
    }
L_08AA96B0:
    ctx.set_gpr(31, 0x08AA96B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AA96B8u) goto L_08AA96B8;
    return;
L_08AA96B8:
    ctx.set_gpr(31, 0x08AA96C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1047u, 0x08AAFFCCu>(ctx, &aot_mem) && ctx.pc == 0x08AA96C0u) goto L_08AA96C0;
    return;
L_08AA96C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA97D4;
      }
      goto L_08AA96C8;
    }
L_08AA96C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9700;
      }
      goto L_08AA96D4;
    }
L_08AA96D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5444));
    ctx.set_gpr(31, 0x08AA96E0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AA96E0u) goto L_08AA96E0;
    return;
L_08AA96E0:
    ctx.set_gpr(31, 0x08AA96E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AA96E8u) goto L_08AA96E8;
    return;
L_08AA96E8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AA96FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA96FCu) goto L_08AA96FC;
    return;
L_08AA96FC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08AA9700;
L_08AA9700:
    ctx.set_gpr(31, 0x08AA9708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AA9708u) goto L_08AA9708;
    return;
L_08AA9708:
    ctx.set_gpr(31, 0x08AA9710u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA9710u) goto L_08AA9710;
    return;
L_08AA9710:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08AA9720u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AA9720u) goto L_08AA9720;
    return;
L_08AA9720:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA97D4;
      }
      goto L_08AA9730;
    }
L_08AA9730:
    ctx.set_gpr(31, 0x08AA9738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AA9738u) goto L_08AA9738;
    return;
L_08AA9738:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA9744u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1741));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1046u, 0x08AAFFB8u>(ctx, &aot_mem) && ctx.pc == 0x08AA9744u) goto L_08AA9744;
    return;
L_08AA9744:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA97D4;
      }
      goto L_08AA9754;
    }
L_08AA9754:
    ctx.set_gpr(31, 0x08AA975Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AA975Cu) goto L_08AA975C;
    return;
L_08AA975C:
    ctx.set_gpr(31, 0x08AA9764u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1047u, 0x08AAFFCCu>(ctx, &aot_mem) && ctx.pc == 0x08AA9764u) goto L_08AA9764;
    return;
L_08AA9764:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA97D4;
      }
      goto L_08AA976C;
    }
L_08AA976C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA97A8;
      }
      goto L_08AA9778;
    }
L_08AA9778:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 24158u);
    ctx.set_gpr(31, 0x08AA9788u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AA9788u) goto L_08AA9788;
    return;
L_08AA9788:
    ctx.set_gpr(31, 0x08AA9790u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AA9790u) goto L_08AA9790;
    return;
L_08AA9790:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AA97A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA97A4u) goto L_08AA97A4;
    return;
L_08AA97A4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_08AA97A8;
L_08AA97A8:
    ctx.set_gpr(31, 0x08AA97B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AA97B0u) goto L_08AA97B0;
    return;
L_08AA97B0:
    ctx.set_gpr(31, 0x08AA97B8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA97B8u) goto L_08AA97B8;
    return;
L_08AA97B8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08AA97C8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AA97C8u) goto L_08AA97C8;
    return;
L_08AA97C8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA97D8;
      }
      goto L_08AA97D4;
    }
L_08AA97D4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AA97D8;
L_08AA97D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA97E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AA9808;
      }
      goto L_08AA9800;
    }
L_08AA9800:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AA9888;
      }
      goto L_08AA9808;
    }
L_08AA9808:
    ctx.set_gpr(31, 0x08AA9810u);
    // nop
    ctx.pc = 0x08B0E044u;
    return;
L_08AA9810:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1416)));
        goto L_08AA9824;
    }
    goto L_08AA9818;
L_08AA9818:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AA9888;
      }
      goto L_08AA9820;
    }
L_08AA9820:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1416)));
    goto L_08AA9824;
L_08AA9824:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2872)));
        goto L_08AA985C;
    }
    goto L_08AA9830;
L_08AA9830:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AA9888;
    }
    goto L_08AA983C;
L_08AA983C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9888;
      }
      goto L_08AA9844;
    }
L_08AA9844:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AA9888;
      }
      goto L_08AA984C;
    }
L_08AA984C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9888;
      }
      goto L_08AA9858;
    }
L_08AA9858:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2872)));
    goto L_08AA985C;
L_08AA985C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AA9888;
    }
    goto L_08AA9864;
L_08AA9864:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AA987C;
      }
      goto L_08AA986C;
    }
L_08AA986C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9888;
      }
      goto L_08AA9878;
    }
L_08AA9878:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AA987C;
L_08AA987C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9888;
      }
      goto L_08AA9884;
    }
L_08AA9884:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AA9888;
L_08AA9888:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9898:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1388));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA98A0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA98B0;
      }
      goto L_08AA98AC;
    }
L_08AA98AC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3056), ctx.gpr[5]);
    goto L_08AA98B0;
L_08AA98B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA98B8:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(17));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(19));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(18));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA98E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA991Cu);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1500));
    goto L_08AA9A00;
L_08AA991C:
    ctx.set_gpr(1, ctx.gpr[18] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AA99E8;
    }
    goto L_08AA9928;
L_08AA9928:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-23800));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9944:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA9954u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08AA9A14;
L_08AA9954:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AA99E8;
      }
      goto L_08AA995C;
    }
L_08AA995C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA996Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08AA9ADC;
L_08AA996C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA99E4;
      }
      goto L_08AA9974;
    }
L_08AA9974:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AA9980u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AA9BB8;
L_08AA9980:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA99E4;
      }
      goto L_08AA9988;
    }
L_08AA9988:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AA9994u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AA9C08;
L_08AA9994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA99E4;
      }
      goto L_08AA999C;
    }
L_08AA999C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AA99A8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AA9CC4;
L_08AA99A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA99E4;
      }
      goto L_08AA99B0;
    }
L_08AA99B0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AA99BCu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AA9DA0;
L_08AA99BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA99E4;
      }
      goto L_08AA99C4;
    }
L_08AA99C4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AA99D0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AA9E1C;
L_08AA99D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA99E4;
      }
      goto L_08AA99D8;
    }
L_08AA99D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA99E8;
      }
      goto L_08AA99E4;
    }
L_08AA99E4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AA99E8;
L_08AA99E8:
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
L_08AA9A00:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25808));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem); return;
L_08AA9A14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20740));
    ctx.set_gpr(31, 0x08AA9A48u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08AA9A48u) goto L_08AA9A48;
    return;
L_08AA9A48:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20752));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x08AA9A60u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08AA9A60u) goto L_08AA9A60;
    return;
L_08AA9A60:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AA9A8C;
      }
      goto L_08AA9A68;
    }
L_08AA9A68:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(7, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20760));
    ctx.set_gpr(31, 0x08AA9A84u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(20764));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 418u, 0x08815EF8u>(ctx, &aot_mem) && ctx.pc == 0x08AA9A84u) goto L_08AA9A84;
    return;
L_08AA9A84:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08AA9AAC;
      }
      goto L_08AA9A8C;
    }
L_08AA9A8C:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(7, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20760));
    ctx.set_gpr(31, 0x08AA9AA8u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(20776));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 418u, 0x08815EF8u>(ctx, &aot_mem) && ctx.pc == 0x08AA9AA8u) goto L_08AA9AA8;
    return;
L_08AA9AA8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA9AAC;
L_08AA9AAC:
    ctx.set_gpr(31, 0x08AA9AB4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08AA9ED8;
L_08AA9AB4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA9AC4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1284));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA9AC4u) goto L_08AA9AC4;
    return;
L_08AA9AC4:
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
L_08AA9ADC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20740));
    ctx.set_gpr(31, 0x08AA9B10u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08AA9B10u) goto L_08AA9B10;
    return;
L_08AA9B10:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20752));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x08AA9B28u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08AA9B28u) goto L_08AA9B28;
    return;
L_08AA9B28:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AA9B4C;
      }
      goto L_08AA9B30;
    }
L_08AA9B30:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20764));
    ctx.set_gpr(31, 0x08AA9B44u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08AA9B44u) goto L_08AA9B44;
    return;
L_08AA9B44:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AA9B64;
      }
      goto L_08AA9B4C;
    }
L_08AA9B4C:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20776));
    ctx.set_gpr(31, 0x08AA9B60u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08AA9B60u) goto L_08AA9B60;
    return;
L_08AA9B60:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    goto L_08AA9B64;
L_08AA9B64:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AA9B70u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08AA9EEC;
L_08AA9B70:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AA9B80u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08AA9F08;
L_08AA9B80:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AA9B90u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08AA9F78;
L_08AA9B90:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AA9BA0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08AA9FB0;
L_08AA9BA0:
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
L_08AA9BB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20740));
    ctx.set_gpr(31, 0x08AA9BDCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08AA9BDCu) goto L_08AA9BDC;
    return;
L_08AA9BDC:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20752));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x08AA9BF4u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08AA9BF4u) goto L_08AA9BF4;
    return;
L_08AA9BF4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9C08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(4, 2230u << 16u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AA9C2Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20740));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AA9C2Cu) goto L_08AA9C2C;
    return;
L_08AA9C2C:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20740));
    ctx.set_gpr(31, 0x08AA9C40u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08AA9C40u) goto L_08AA9C40;
    return;
L_08AA9C40:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 2226u << 16u);
        goto L_08AA9C74;
    }
    goto L_08AA9C54;
L_08AA9C54:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 2226u << 16u);
        goto L_08AA9C68;
    }
    goto L_08AA9C60;
L_08AA9C60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9C7C;
      }
      goto L_08AA9C68;
    }
L_08AA9C68:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25792));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA9C7C;
      }
      goto L_08AA9C74;
    }
L_08AA9C74:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25712));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    goto L_08AA9C7C;
L_08AA9C7C:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20764));
    ctx.set_gpr(31, 0x08AA9C90u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08AA9C90u) goto L_08AA9C90;
    return;
L_08AA9C90:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA9CA0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    goto L_08AA9ED8;
L_08AA9CA0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA9CB0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1284));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA9CB0u) goto L_08AA9CB0;
    return;
L_08AA9CB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9CC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20740));
    ctx.set_gpr(31, 0x08AA9CF0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08AA9CF0u) goto L_08AA9CF0;
    return;
L_08AA9CF0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 2226u << 16u);
        goto L_08AA9D24;
    }
    goto L_08AA9D04;
L_08AA9D04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 2226u << 16u);
        goto L_08AA9D18;
    }
    goto L_08AA9D10;
L_08AA9D10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9D2C;
      }
      goto L_08AA9D18;
    }
L_08AA9D18:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25792));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA9D2C;
      }
      goto L_08AA9D24;
    }
L_08AA9D24:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25712));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    goto L_08AA9D2C;
L_08AA9D2C:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20764));
    ctx.set_gpr(31, 0x08AA9D40u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08AA9D40u) goto L_08AA9D40;
    return;
L_08AA9D40:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA9D50u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    goto L_08AA9EEC;
L_08AA9D50:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA9D60u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08AA9F08;
L_08AA9D60:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA9D70u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08AA9F78;
L_08AA9D70:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA9D80u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08AA9FB0;
L_08AA9D80:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AA9D8Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AA9FE8;
L_08AA9D8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9DA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20740));
    ctx.set_gpr(31, 0x08AA9DCCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08AA9DCCu) goto L_08AA9DCC;
    return;
L_08AA9DCC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(3, 2226u << 16u);
        goto L_08AA9E00;
    }
    goto L_08AA9DE0;
L_08AA9DE0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(3, 2226u << 16u);
        goto L_08AA9DF4;
    }
    goto L_08AA9DEC;
L_08AA9DEC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA9E0C;
      }
      goto L_08AA9DF4;
    }
L_08AA9DF4:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-25792));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AA9E08;
      }
      goto L_08AA9E00;
    }
L_08AA9E00:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-25712));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[3]);
    goto L_08AA9E08;
L_08AA9E08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AA9E0C;
L_08AA9E0C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9E1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(2924));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA9E44u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA9E44u) goto L_08AA9E44;
    return;
L_08AA9E44:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(2944));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA9E54u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA9E54u) goto L_08AA9E54;
    return;
L_08AA9E54:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(3008));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA9E64u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA9E64u) goto L_08AA9E64;
    return;
L_08AA9E64:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(2924));
    ctx.set_gpr(5, 2230u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1488), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(2944));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1492), ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20740));
    ctx.set_gpr(31, 0x08AA9E84u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08AA9E84u) goto L_08AA9E84;
    return;
L_08AA9E84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1492)));
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20752));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1492)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x08AA9EA4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08AA9EA4u) goto L_08AA9EA4;
    return;
L_08AA9EA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1492)));
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(3008));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1496), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA9EC4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08AA9ADC;
L_08AA9EC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9ED8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(116), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(120), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9EEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(116), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(120), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(124), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9F08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08AA9F30u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(127));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08AA9F30u) goto L_08AA9F30;
    return;
L_08AA9F30:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(31, 0x08AA9F44u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(127), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08AA9F44u) goto L_08AA9F44;
    return;
L_08AA9F44:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(312));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1023));
    ctx.set_gpr(31, 0x08AA9F58u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(255), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08AA9F58u) goto L_08AA9F58;
    return;
L_08AA9F58:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1279), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9F78:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AA9FA8;
      }
      goto L_08AA9F84;
    }
L_08AA9F84:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
        goto L_08AA9F94;
    }
    goto L_08AA9F8C;
L_08AA9F8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9FA8;
      }
      goto L_08AA9F94;
    }
L_08AA9F94:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1412), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1416), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1420), ctx.gpr[3]);
    goto L_08AA9FA8;
L_08AA9FA8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9FB0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AA9FE0;
      }
      goto L_08AA9FBC;
    }
L_08AA9FBC:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
        goto L_08AA9FCC;
    }
    goto L_08AA9FC4;
L_08AA9FC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9FE0;
      }
      goto L_08AA9FCC;
    }
L_08AA9FCC:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1444), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1448), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1452), ctx.gpr[3]);
    goto L_08AA9FE0;
L_08AA9FE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9FE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(3036));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AAA010u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AAA010u) goto L_08AAA010;
    return;
L_08AAA010:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3036), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3040), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08AAA030u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3044), ctx.gpr[2]);
    goto L_08AAA050;
L_08AAA030:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3052), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(3036));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1476), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA050:
    ctx.set_gpr(2, 2230u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20684)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA05C:
    ctx.set_gpr(2, 2246u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19596)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA068:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-19596)));
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AAA094;
    }
    goto L_08AAA080;
L_08AAA080:
    ctx.set_gpr(31, 0x08AAA088u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08AAA09C;
L_08AAA088:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-19596), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AAA094;
L_08AAA094:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA09C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AAA104;
      }
      goto L_08AAA0B8;
    }
L_08AAA0B8:
    ctx.set_gpr(31, 0x08AAA0C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 331u, 0x08AAD724u>(ctx, &aot_mem) && ctx.pc == 0x08AAA0C0u) goto L_08AAA0C0;
    return;
L_08AAA0C0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(28992));
    ctx.set_gpr(31, 0x08AAA0CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AAA124;
L_08AAA0CC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15408));
    ctx.set_gpr(31, 0x08AAA0D8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 114u, 0x0884C754u>(ctx, &aot_mem) && ctx.pc == 0x08AAA0D8u) goto L_08AAA0D8;
    return;
L_08AAA0D8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(3648));
    ctx.set_gpr(31, 0x08AAA0E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 997u, 0x0885FD98u>(ctx, &aot_mem) && ctx.pc == 0x08AAA0E4u) goto L_08AAA0E4;
    return;
L_08AAA0E4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x08AAA0F0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 626u, 0x0885E5ACu>(ctx, &aot_mem) && ctx.pc == 0x08AAA0F0u) goto L_08AAA0F0;
    return;
L_08AAA0F0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AAA108;
    }
    goto L_08AAA0FC;
L_08AAA0FC:
    ctx.set_gpr(31, 0x08AAA104u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AAA11C;
L_08AAA104:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AAA108;
L_08AAA108:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA11C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08AAA124:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AAA15C;
      }
      goto L_08AAA140;
    }
L_08AAA140:
    ctx.set_gpr(31, 0x08AAA148u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 54u, 0x08A7C370u>(ctx, &aot_mem) && ctx.pc == 0x08AAA148u) goto L_08AAA148;
    return;
L_08AAA148:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AAA160;
    }
    goto L_08AAA154;
L_08AAA154:
    ctx.set_gpr(31, 0x08AAA15Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AAA15Cu) goto L_08AAA15C;
    return;
L_08AAA15C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AAA160;
L_08AAA160:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA174:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AAA218;
      }
      goto L_08AAA194;
    }
L_08AAA194:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AAA258;
      }
      goto L_08AAA1A0;
    }
L_08AAA1A0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19596)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAA1E4;
      }
      goto L_08AAA1B0;
    }
L_08AAA1B0:
    ctx.set_gpr(31, 0x08AAA1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AAA1B8u) goto L_08AAA1B8;
    return;
L_08AAA1B8:
    ctx.set_gpr(31, 0x08AAA1C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08AAA1C0u) goto L_08AAA1C0;
    return;
L_08AAA1C0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(29336));
    ctx.set_gpr(31, 0x08AAA1CCu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AAAA28;
L_08AAA1CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAA1DC;
      }
      goto L_08AAA1D4;
    }
L_08AAA1D4:
    ctx.set_gpr(31, 0x08AAA1DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AAA2B8;
L_08AAA1DC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-19596), ctx.gpr[2]);
    goto L_08AAA1E4;
L_08AAA1E4:
    ctx.set_gpr(31, 0x08AAA1ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 167u, 0x08848AFCu>(ctx, &aot_mem) && ctx.pc == 0x08AAA1ECu) goto L_08AAA1EC;
    return;
L_08AAA1EC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19596)));
    ctx.set_gpr(31, 0x08AAA1FCu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AAAA30;
L_08AAA1FC:
    ctx.set_gpr(31, 0x08AAA204u);
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 160u, 0x08848A74u>(ctx, &aot_mem) && ctx.pc == 0x08AAA204u) goto L_08AAA204;
    return;
L_08AAA204:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AAA298;
    }
    goto L_08AAA20C;
L_08AAA20C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_08AAA294;
      }
      goto L_08AAA218;
    }
L_08AAA218:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19596)));
    ctx.set_gpr(31, 0x08AAA228u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 384u, 0x08AAD994u>(ctx, &aot_mem) && ctx.pc == 0x08AAA228u) goto L_08AAA228;
    return;
L_08AAA228:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19596)));
    ctx.set_gpr(31, 0x08AAA238u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 436u, 0x08AADC0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAA238u) goto L_08AAA238;
    return;
L_08AAA238:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(31, 0x08AAA244u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19596)));
    goto L_08AAA2B0;
L_08AAA244:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAA294;
      }
      goto L_08AAA24C;
    }
L_08AAA24C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_08AAA294;
      }
      goto L_08AAA258;
    }
L_08AAA258:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AAA264;
      }
      goto L_08AAA260;
    }
L_08AAA260:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_08AAA264;
L_08AAA264:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(31, 0x08AAA270u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19596)));
    goto L_08AAA2A8;
L_08AAA270:
    ctx.set_gpr(31, 0x08AAA278u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08AAA068;
L_08AAA278:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAA294;
      }
      goto L_08AAA280;
    }
L_08AAA280:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_08AAA294;
L_08AAA294:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AAA298;
L_08AAA298:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA2A8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA2B0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA2B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AAA2D0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 618u, 0x0885E49Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAA2D0u) goto L_08AAA2D0;
    return;
L_08AAA2D0:
    ctx.set_gpr(31, 0x08AAA2D8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(3648));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 991u, 0x0885FCE0u>(ctx, &aot_mem) && ctx.pc == 0x08AAA2D8u) goto L_08AAA2D8;
    return;
L_08AAA2D8:
    ctx.set_gpr(31, 0x08AAA2E0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15408));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 73u, 0x0884C4D0u>(ctx, &aot_mem) && ctx.pc == 0x08AAA2E0u) goto L_08AAA2E0;
    return;
L_08AAA2E0:
    ctx.set_gpr(31, 0x08AAA2E8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15612));
    goto L_08AAA7EC;
L_08AAA2E8:
    ctx.set_gpr(31, 0x08AAA2F0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(25036));
    goto L_08AAA628;
L_08AAA2F0:
    ctx.set_gpr(31, 0x08AAA2F8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(25712));
    goto L_08AAA518;
L_08AAA2F8:
    ctx.set_gpr(31, 0x08AAA300u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28940));
    goto L_08AAA4A0;
L_08AAA300:
    ctx.set_gpr(31, 0x08AAA308u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28992));
    goto L_08AAA408;
L_08AAA308:
    ctx.set_gpr(31, 0x08AAA310u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(29304));
    goto L_08AAA3C4;
L_08AAA310:
    ctx.set_gpr(31, 0x08AAA318u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAA32C;
L_08AAA318:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA32C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AAA36Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AAA36Cu) goto L_08AAA36C;
    return;
L_08AAA36C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(3, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28936), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(29324), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(29328), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA3C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAA3D8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AAA3EC;
L_08AAA3D8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA3EC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA408:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AAA420u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 94u, 0x08A7C578u>(ctx, &aot_mem) && ctx.pc == 0x08AAA420u) goto L_08AAA420;
    return;
L_08AAA420:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(256));
    goto L_08AAA424;
L_08AAA424:
    ctx.set_gpr(31, 0x08AAA42Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAA460;
L_08AAA42C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAA424;
      }
      goto L_08AAA440;
    }
L_08AAA440:
    ctx.set_gpr(31, 0x08AAA448u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 217u, 0x08B0CC68u>(ctx, &aot_mem) && ctx.pc == 0x08AAA448u) goto L_08AAA448;
    return;
L_08AAA448:
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
L_08AAA460:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAA474u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AAA488;
L_08AAA474:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA488:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA4A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAA4B4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AAA4C8;
L_08AAA4B4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA4C8:
    ctx.set_gpr(5, 2233u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(3, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA518:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAA534u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AAA5F8;
L_08AAA534:
    ctx.set_gpr(31, 0x08AAA53Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(152));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 223u, 0x08848F30u>(ctx, &aot_mem) && ctx.pc == 0x08AAA53Cu) goto L_08AAA53C;
    return;
L_08AAA53C:
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(240));
    goto L_08AAA540;
L_08AAA540:
    ctx.set_gpr(31, 0x08AAA548u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AAA5BC;
L_08AAA548:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(2440));
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAA540;
      }
      goto L_08AAA55C;
    }
L_08AAA55C:
    ctx.set_gpr(31, 0x08AAA564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 223u, 0x08848F30u>(ctx, &aot_mem) && ctx.pc == 0x08AAA564u) goto L_08AAA564;
    return;
L_08AAA564:
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(2528));
    goto L_08AAA568;
L_08AAA568:
    ctx.set_gpr(31, 0x08AAA570u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 223u, 0x08848F30u>(ctx, &aot_mem) && ctx.pc == 0x08AAA570u) goto L_08AAA570;
    return;
L_08AAA570:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(2968));
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAA568;
      }
      goto L_08AAA584;
    }
L_08AAA584:
    ctx.set_gpr(31, 0x08AAA58Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08AAA58Cu) goto L_08AAA58C;
    return;
L_08AAA58C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(3224));
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAA584;
      }
      goto L_08AAA5A0;
    }
L_08AAA5A0:
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
L_08AAA5BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAA5D0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08AAA5D0u) goto L_08AAA5D0;
    return;
L_08AAA5D0:
    ctx.set_gpr(31, 0x08AAA5D8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08AAA5D8u) goto L_08AAA5D8;
    return;
L_08AAA5D8:
    ctx.set_gpr(31, 0x08AAA5E0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 223u, 0x08848F30u>(ctx, &aot_mem) && ctx.pc == 0x08AAA5E0u) goto L_08AAA5E0;
    return;
L_08AAA5E0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA5F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAA60Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08AAA60Cu) goto L_08AAA60C;
    return;
L_08AAA60C:
    ctx.set_gpr(31, 0x08AAA614u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 223u, 0x08848F30u>(ctx, &aot_mem) && ctx.pc == 0x08AAA614u) goto L_08AAA614;
    return;
L_08AAA614:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA628:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AAA640u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_08AAA654;
L_08AAA640:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA654:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08AAA670u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08AAA7C4;
L_08AAA670:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(33));
    goto L_08AAA674;
L_08AAA674:
    ctx.set_gpr(31, 0x08AAA67Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAA79C;
L_08AAA67C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAA674;
      }
      goto L_08AAA690;
    }
L_08AAA690:
    ctx.set_gpr(31, 0x08AAA698u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AAA6B0;
L_08AAA698:
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
L_08AAA6B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AAA6F0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(28));
    goto L_08AAA790;
L_08AAA6F0:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_08AAA6F8;
L_08AAA6F8:
    ctx.set_gpr(31, 0x08AAA700u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(33));
    goto L_08AAA784;
L_08AAA700:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08AAA6F8;
      }
      goto L_08AAA710;
    }
L_08AAA710:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AAA714;
L_08AAA714:
    ctx.set_gpr(31, 0x08AAA71Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(68));
    goto L_08AAA744;
L_08AAA71C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08AAA714;
      }
      goto L_08AAA72C;
    }
L_08AAA72C:
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
L_08AAA744:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA784:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem); return;
L_08AAA790:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem); return;
L_08AAA79C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAA7B0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AAA784;
L_08AAA7B0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA7C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAA7D8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AAA790;
L_08AAA7D8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA7EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AAA804u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    goto L_08AAA888;
L_08AAA804:
    ctx.set_gpr(31, 0x08AAA80Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAA820;
L_08AAA80C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA820:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08AAA850u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AAA868;
L_08AAA850:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9420), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA868:
    ctx.set_gpr(2, ctx.gpr[5] << 6u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA888:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_08AAA8A0;
L_08AAA8A0:
    ctx.set_gpr(31, 0x08AAA8A8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAA9AC;
L_08AAA8A8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1044));
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(9400));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAA8A0;
      }
      goto L_08AAA8BC;
    }
L_08AAA8BC:
    ctx.set_gpr(31, 0x08AAA8C4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AAA8DC;
L_08AAA8C4:
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
L_08AAA8DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AAA8F8;
L_08AAA8F8:
    ctx.set_gpr(31, 0x08AAA900u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08AAA924;
L_08AAA900:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1044));
      if (branch_taken) {
          goto L_08AAA8F8;
      }
      goto L_08AAA910;
    }
L_08AAA910:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA924:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AAA940;
L_08AAA940:
    ctx.set_gpr(31, 0x08AAA948u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08AAA96C;
L_08AAA948:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08AAA940;
      }
      goto L_08AAA958;
    }
L_08AAA958:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA96C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA9AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_08AAA9C4;
L_08AAA9C4:
    ctx.set_gpr(31, 0x08AAA9CCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAAA00;
L_08AAA9CC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(1044));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAA9C4;
      }
      goto L_08AAA9E0;
    }
L_08AAA9E0:
    ctx.set_gpr(31, 0x08AAA9E8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AAA924;
L_08AAA9E8:
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
L_08AAAA00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAAA14u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AAA96C;
L_08AAAA14:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAAA28:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_08AAAA30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AAB0E8;
      }
      goto L_08AAAA58;
    }
L_08AAAA58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AAB054;
    }
    goto L_08AAAA64;
L_08AAAA64:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(19));
        goto L_08AAAFF8;
    }
    goto L_08AAAA70;
L_08AAAA70:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AAAFAC;
    }
    goto L_08AAAA7C;
L_08AAAA7C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AAAF34;
      }
      goto L_08AAAA88;
    }
L_08AAAA88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AAAF10;
    }
    goto L_08AAAA94;
L_08AAAA94:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AAAEE4;
    }
    goto L_08AAAAA0;
L_08AAAAA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AAAEB8;
    }
    goto L_08AAAAAC;
L_08AAAAAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AAAE8C;
    }
    goto L_08AAAAB8;
L_08AAAAB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AAAC34;
      }
      goto L_08AAAAC4;
    }
L_08AAAAC4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AAAC0C;
      }
      goto L_08AAAAD0;
    }
L_08AAAAD0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AAABD4;
      }
      goto L_08AAAADC;
    }
L_08AAAADC:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29324), ctx.gpr[5]);
        goto L_08AAAAEC;
    }
    goto L_08AAAAE4;
L_08AAAAE4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AAB1B0;
      }
      goto L_08AAAAEC;
    }
L_08AAAAEC:
    ctx.set_gpr(31, 0x08AAAAF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AAAAF4u) goto L_08AAAAF4;
    return;
L_08AAAAF4:
    ctx.set_gpr(31, 0x08AAAAFCu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AAAAFCu) goto L_08AAAAFC;
    return;
L_08AAAAFC:
    ctx.set_gpr(31, 0x08AAAB04u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08AAAB04u) goto L_08AAAB04;
    return;
L_08AAAB04:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29328), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08AAAB14u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15612));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 75u, 0x08AAC614u>(ctx, &aot_mem) && ctx.pc == 0x08AAAB14u) goto L_08AAAB14;
    return;
L_08AAAB14:
    ctx.set_gpr(31, 0x08AAAB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 183u, 0x08848C24u>(ctx, &aot_mem) && ctx.pc == 0x08AAAB1Cu) goto L_08AAAB1C;
    return;
L_08AAAB1C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAAB2Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(29304));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 278u, 0x08B0D0A4u>(ctx, &aot_mem) && ctx.pc == 0x08AAAB2Cu) goto L_08AAAB2C;
    return;
L_08AAAB2C:
    ctx.set_gpr(31, 0x08AAAB34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAAB34u) goto L_08AAAB34;
    return;
L_08AAAB34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(31, 0x08AAAB40u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 305u, 0x088A54C4u>(ctx, &aot_mem) && ctx.pc == 0x08AAAB40u) goto L_08AAAB40;
    return;
L_08AAAB40:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAAB50u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 911u, 0x08AB3554u>(ctx, &aot_mem) && ctx.pc == 0x08AAAB50u) goto L_08AAAB50;
    return;
L_08AAAB50:
    ctx.set_gpr(31, 0x08AAAB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAAB58u) goto L_08AAAB58;
    return;
L_08AAAB58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(31, 0x08AAAB64u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 304u, 0x088A54BCu>(ctx, &aot_mem) && ctx.pc == 0x08AAAB64u) goto L_08AAAB64;
    return;
L_08AAAB64:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAAB74u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 911u, 0x08AB3554u>(ctx, &aot_mem) && ctx.pc == 0x08AAAB74u) goto L_08AAAB74;
    return;
L_08AAAB74:
    ctx.set_gpr(31, 0x08AAAB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AAAB7Cu) goto L_08AAAB7C;
    return;
L_08AAAB7C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AAAB94u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08AAAB94u) goto L_08AAAB94;
    return;
L_08AAAB94:
    ctx.set_gpr(31, 0x08AAAB9Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29328)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 74u, 0x08AAC60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAAB9Cu) goto L_08AAAB9C;
    return;
L_08AAAB9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAABB8;
      }
      goto L_08AAABA4;
    }
L_08AAABA4:
    ctx.set_gpr(31, 0x08AAABACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAABACu) goto L_08AAABAC;
    return;
L_08AAABAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAABB8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08AAABB8u) goto L_08AAABB8;
    return;
L_08AAABB8:
    ctx.set_gpr(31, 0x08AAABC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 183u, 0x08848C24u>(ctx, &aot_mem) && ctx.pc == 0x08AAABC0u) goto L_08AAABC0;
    return;
L_08AAABC0:
    ctx.set_gpr(31, 0x08AAABC8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 668u, 0x08852878u>(ctx, &aot_mem) && ctx.pc == 0x08AAABC8u) goto L_08AAABC8;
    return;
L_08AAABC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08AAABD4;
L_08AAABD4:
    ctx.set_gpr(31, 0x08AAABDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 183u, 0x08848C24u>(ctx, &aot_mem) && ctx.pc == 0x08AAABDCu) goto L_08AAABDC;
    return;
L_08AAABDC:
    ctx.set_gpr(31, 0x08AAABE4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 710u, 0x08852B44u>(ctx, &aot_mem) && ctx.pc == 0x08AAABE4u) goto L_08AAABE4;
    return;
L_08AAABE4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAB1AC;
      }
      goto L_08AAABF0;
    }
L_08AAABF0:
    ctx.set_gpr(31, 0x08AAABF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AAABF8u) goto L_08AAABF8;
    return;
L_08AAABF8:
    ctx.set_gpr(31, 0x08AAAC00u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 729u, 0x08857810u>(ctx, &aot_mem) && ctx.pc == 0x08AAAC00u) goto L_08AAAC00;
    return;
L_08AAAC00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08AAAC0C;
L_08AAAC0C:
    ctx.set_gpr(31, 0x08AAAC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AAAC14u) goto L_08AAAC14;
    return;
L_08AAAC14:
    ctx.set_gpr(31, 0x08AAAC1Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 730u, 0x08857818u>(ctx, &aot_mem) && ctx.pc == 0x08AAAC1Cu) goto L_08AAAC1C;
    return;
L_08AAAC1C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAB1AC;
      }
      goto L_08AAAC28;
    }
L_08AAAC28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08AAAC34;
L_08AAAC34:
    ctx.set_gpr(31, 0x08AAAC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AAAC3Cu) goto L_08AAAC3C;
    return;
L_08AAAC3C:
    ctx.set_gpr(31, 0x08AAAC44u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08AAAC44u) goto L_08AAAC44;
    return;
L_08AAAC44:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08AAAC50u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 73u, 0x08AAC604u>(ctx, &aot_mem) && ctx.pc == 0x08AAAC50u) goto L_08AAAC50;
    return;
L_08AAAC50:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
        goto L_08AAAC68;
    }
    goto L_08AAAC58;
L_08AAAC58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAAC64u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 69u, 0x08AAC594u>(ctx, &aot_mem) && ctx.pc == 0x08AAAC64u) goto L_08AAAC64;
    return;
L_08AAAC64:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08AAAC68;
L_08AAAC68:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AAAC74u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 123u, 0x08AAC85Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAAC74u) goto L_08AAAC74;
    return;
L_08AAAC74:
    ctx.set_gpr(31, 0x08AAAC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AAAC7Cu) goto L_08AAAC7C;
    return;
L_08AAAC7C:
    ctx.set_gpr(31, 0x08AAAC84u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08AAAC84u) goto L_08AAAC84;
    return;
L_08AAAC84:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(284));
    ctx.set_gpr(31, 0x08AAAC90u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 68u, 0x08AAC58Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAAC90u) goto L_08AAAC90;
    return;
L_08AAAC90:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
        goto L_08AAACA8;
    }
    goto L_08AAAC98;
L_08AAAC98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAACA4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 38u, 0x08AAC32Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAACA4u) goto L_08AAACA4;
    return;
L_08AAACA4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08AAACA8;
L_08AAACA8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AAACB4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 123u, 0x08AAC85Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAACB4u) goto L_08AAACB4;
    return;
L_08AAACB4:
    ctx.set_gpr(31, 0x08AAACBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AAACBCu) goto L_08AAACBC;
    return;
L_08AAACBC:
    ctx.set_gpr(31, 0x08AAACC4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08AAACC4u) goto L_08AAACC4;
    return;
L_08AAACC4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(444));
    ctx.set_gpr(31, 0x08AAACD0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 37u, 0x08AAC324u>(ctx, &aot_mem) && ctx.pc == 0x08AAACD0u) goto L_08AAACD0;
    return;
L_08AAACD0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
        goto L_08AAACE8;
    }
    goto L_08AAACD8;
L_08AAACD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAACE4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 7u, 0x08AAC08Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAACE4u) goto L_08AAACE4;
    return;
L_08AAACE4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08AAACE8;
L_08AAACE8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AAACF4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 123u, 0x08AAC85Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAACF4u) goto L_08AAACF4;
    return;
L_08AAACF4:
    ctx.set_gpr(31, 0x08AAACFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AAACFCu) goto L_08AAACFC;
    return;
L_08AAACFC:
    ctx.set_gpr(31, 0x08AAAD04u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08AAAD04u) goto L_08AAAD04;
    return;
L_08AAAD04:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(424));
    ctx.set_gpr(31, 0x08AAAD10u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 6u, 0x08AAC084u>(ctx, &aot_mem) && ctx.pc == 0x08AAAD10u) goto L_08AAAD10;
    return;
L_08AAAD10:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
        goto L_08AAAD28;
    }
    goto L_08AAAD18;
L_08AAAD18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAAD24u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08AABD74;
L_08AAAD24:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08AAAD28;
L_08AAAD28:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AAAD34u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 123u, 0x08AAC85Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAAD34u) goto L_08AAAD34;
    return;
L_08AAAD34:
    ctx.set_gpr(31, 0x08AAAD3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AAAD3Cu) goto L_08AAAD3C;
    return;
L_08AAAD3C:
    ctx.set_gpr(31, 0x08AAAD44u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08AAAD44u) goto L_08AAAD44;
    return;
L_08AAAD44:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(320));
    ctx.set_gpr(31, 0x08AAAD50u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AABD6C;
L_08AAAD50:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
        goto L_08AAAD68;
    }
    goto L_08AAAD58;
L_08AAAD58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAAD64u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08AABAFC;
L_08AAAD64:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08AAAD68;
L_08AAAD68:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AAAD74u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 123u, 0x08AAC85Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAAD74u) goto L_08AAAD74;
    return;
L_08AAAD74:
    ctx.set_gpr(31, 0x08AAAD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AAAD7Cu) goto L_08AAAD7C;
    return;
L_08AAAD7C:
    ctx.set_gpr(31, 0x08AAAD84u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08AAAD84u) goto L_08AAAD84;
    return;
L_08AAAD84:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x08AAAD90u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AABAF4;
L_08AAAD90:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
        goto L_08AAADA8;
    }
    goto L_08AAAD98;
L_08AAAD98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAADA4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08AABA14;
L_08AAADA4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08AAADA8;
L_08AAADA8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AAADB4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 123u, 0x08AAC85Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAADB4u) goto L_08AAADB4;
    return;
L_08AAADB4:
    ctx.set_gpr(31, 0x08AAADBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AAADBCu) goto L_08AAADBC;
    return;
L_08AAADBC:
    ctx.set_gpr(31, 0x08AAADC4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08AAADC4u) goto L_08AAADC4;
    return;
L_08AAADC4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(280));
    ctx.set_gpr(31, 0x08AAADD0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AABA0C;
L_08AAADD0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
        goto L_08AAADE8;
    }
    goto L_08AAADD8;
L_08AAADD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAADE4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08AAB614;
L_08AAADE4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08AAADE8;
L_08AAADE8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AAADF4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 123u, 0x08AAC85Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAADF4u) goto L_08AAADF4;
    return;
L_08AAADF4:
    ctx.set_gpr(31, 0x08AAADFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AAADFCu) goto L_08AAADFC;
    return;
L_08AAADFC:
    ctx.set_gpr(31, 0x08AAAE04u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08AAAE04u) goto L_08AAAE04;
    return;
L_08AAAE04:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08AAAE10u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AAB60C;
L_08AAAE10:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
        goto L_08AAAE28;
    }
    goto L_08AAAE18;
L_08AAAE18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAAE24u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08AAB48C;
L_08AAAE24:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08AAAE28;
L_08AAAE28:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AAAE34u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 123u, 0x08AAC85Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAAE34u) goto L_08AAAE34;
    return;
L_08AAAE34:
    ctx.set_gpr(31, 0x08AAAE3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AAAE3Cu) goto L_08AAAE3C;
    return;
L_08AAAE3C:
    ctx.set_gpr(31, 0x08AAAE44u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08AAAE44u) goto L_08AAAE44;
    return;
L_08AAAE44:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08AAAE50u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AAB484;
L_08AAAE50:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
        goto L_08AAAE68;
    }
    goto L_08AAAE58;
L_08AAAE58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAAE64u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08AAB200;
L_08AAAE64:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08AAAE68;
L_08AAAE68:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AAAE74u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 123u, 0x08AAC85Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAAE74u) goto L_08AAAE74;
    return;
L_08AAAE74:
    ctx.set_gpr(31, 0x08AAAE7Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 203u, 0x08AACE30u>(ctx, &aot_mem) && ctx.pc == 0x08AAAE7Cu) goto L_08AAAE7C;
    return;
L_08AAAE7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AAAE8C;
L_08AAAE8C:
    ctx.set_gpr(31, 0x08AAAE94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 206u, 0x08AACE4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAAE94u) goto L_08AAAE94;
    return;
L_08AAAE94:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAB1AC;
      }
      goto L_08AAAEA0;
    }
L_08AAAEA0:
    ctx.set_gpr(31, 0x08AAAEA8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 130u, 0x08AAC8BCu>(ctx, &aot_mem) && ctx.pc == 0x08AAAEA8u) goto L_08AAAEA8;
    return;
L_08AAAEA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AAAEB8;
L_08AAAEB8:
    ctx.set_gpr(31, 0x08AAAEC0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 137u, 0x08AAC910u>(ctx, &aot_mem) && ctx.pc == 0x08AAAEC0u) goto L_08AAAEC0;
    return;
L_08AAAEC0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAB1AC;
      }
      goto L_08AAAECC;
    }
L_08AAAECC:
    ctx.set_gpr(31, 0x08AAAED4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 208u, 0x08AACE70u>(ctx, &aot_mem) && ctx.pc == 0x08AAAED4u) goto L_08AAAED4;
    return;
L_08AAAED4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AAAEE4;
L_08AAAEE4:
    ctx.set_gpr(31, 0x08AAAEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 209u, 0x08AACE78u>(ctx, &aot_mem) && ctx.pc == 0x08AAAEECu) goto L_08AAAEEC;
    return;
L_08AAAEEC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAB1AC;
      }
      goto L_08AAAEF8;
    }
L_08AAAEF8:
    ctx.set_gpr(31, 0x08AAAF00u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 297u, 0x08AAD4F8u>(ctx, &aot_mem) && ctx.pc == 0x08AAAF00u) goto L_08AAAF00;
    return;
L_08AAAF00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AAAF10;
L_08AAAF10:
    ctx.set_gpr(31, 0x08AAAF18u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 299u, 0x08AAD508u>(ctx, &aot_mem) && ctx.pc == 0x08AAAF18u) goto L_08AAAF18;
    return;
L_08AAAF18:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08AAAF2C;
    }
    goto L_08AAAF24;
L_08AAAF24:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AAB1B0;
      }
      goto L_08AAAF2C;
    }
L_08AAAF2C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08AAAF34;
L_08AAAF34:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20816)));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20820)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08AAAF50u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AAAF50u) goto L_08AAAF50;
    return;
L_08AAAF50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(31, 0x08AAAF68u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 109u, 0x08AF0728u>(ctx, &aot_mem) && ctx.pc == 0x08AAAF68u) goto L_08AAAF68;
    return;
L_08AAAF68:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AAAF7C;
    }
    goto L_08AAAF74;
L_08AAAF74:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AAB1B0;
      }
      goto L_08AAAF7C;
    }
L_08AAAF7C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAAF34;
      }
      goto L_08AAAF90;
    }
L_08AAAF90:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AAAF9Cu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 270u, 0x08AAD300u>(ctx, &aot_mem) && ctx.pc == 0x08AAAF9Cu) goto L_08AAAF9C;
    return;
L_08AAAF9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08AAAFA8;
L_08AAAFA8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08AAAFAC;
L_08AAAFAC:
    ctx.set_gpr(31, 0x08AAAFB4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 271u, 0x08AAD308u>(ctx, &aot_mem) && ctx.pc == 0x08AAAFB4u) goto L_08AAAFB4;
    return;
L_08AAAFB4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AAAFC8;
    }
    goto L_08AAAFC0;
L_08AAAFC0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AAB1B0;
      }
      goto L_08AAAFC8;
    }
L_08AAAFC8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAAFA8;
      }
      goto L_08AAAFDC;
    }
L_08AAAFDC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AAAFE8u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 279u, 0x08AAD3ACu>(ctx, &aot_mem) && ctx.pc == 0x08AAAFE8u) goto L_08AAAFE8;
    return;
L_08AAAFE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(19));
    goto L_08AAAFF8;
L_08AAAFF8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_08AAAFFC;
L_08AAAFFC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AAB008u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 301u, 0x08AAD528u>(ctx, &aot_mem) && ctx.pc == 0x08AAB008u) goto L_08AAB008;
    return;
L_08AAB008:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AAB01C;
    }
    goto L_08AAB014;
L_08AAB014:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AAB1B0;
      }
      goto L_08AAB01C;
    }
L_08AAB01C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAAFFC;
      }
      goto L_08AAB02C;
    }
L_08AAB02C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(31, 0x08AAB038u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29328)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 25u, 0x08864208u>(ctx, &aot_mem) && ctx.pc == 0x08AAB038u) goto L_08AAB038;
    return;
L_08AAB038:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAB044u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 163u, 0x08AACA24u>(ctx, &aot_mem) && ctx.pc == 0x08AAB044u) goto L_08AAB044;
    return;
L_08AAB044:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AAB054;
L_08AAB054:
    ctx.set_gpr(31, 0x08AAB05Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 170u, 0x08AACAACu>(ctx, &aot_mem) && ctx.pc == 0x08AAB05Cu) goto L_08AAB05C;
    return;
L_08AAB05C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAB1AC;
      }
      goto L_08AAB068;
    }
L_08AAB068:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AAB088u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 489u, 0x08AAE0B0u>(ctx, &aot_mem) && ctx.pc == 0x08AAB088u) goto L_08AAB088;
    return;
L_08AAB088:
    ctx.set_gpr(31, 0x08AAB090u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29328)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 74u, 0x08AAC60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAB090u) goto L_08AAB090;
    return;
L_08AAB090:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(20));
        goto L_08AAB0E4;
    }
    goto L_08AAB098;
L_08AAB098:
    ctx.set_gpr(31, 0x08AAB0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AAB0A0u) goto L_08AAB0A0;
    return;
L_08AAB0A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AAB0B8u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08AAB0B8u) goto L_08AAB0B8;
    return;
L_08AAB0B8:
    ctx.set_gpr(31, 0x08AAB0C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AAB0C0u) goto L_08AAB0C0;
    return;
L_08AAB0C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AAB0E0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08AAB0E0u) goto L_08AAB0E0;
    return;
L_08AAB0E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(20));
    goto L_08AAB0E4;
L_08AAB0E4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08AAB0E8;
L_08AAB0E8:
    ctx.set_gpr(31, 0x08AAB0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08AAB0F0u) goto L_08AAB0F0;
    return;
L_08AAB0F0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AAB110u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x08AAB110u) goto L_08AAB110;
    return;
L_08AAB110:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAB124u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAB124u) goto L_08AAB124;
    return;
L_08AAB124:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AAB134u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AAB134u) goto L_08AAB134;
    return;
L_08AAB134:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AAB14Cu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AAB14Cu) goto L_08AAB14C;
    return;
L_08AAB14C:
    ctx.set_gpr(31, 0x08AAB154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AAB154u) goto L_08AAB154;
    return;
L_08AAB154:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15692u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(31, 0x08AAB168u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1017u, 0x08A7F7C8u>(ctx, &aot_mem) && ctx.pc == 0x08AAB168u) goto L_08AAB168;
    return;
L_08AAB168:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AAB174u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 526u, 0x08AAE2D8u>(ctx, &aot_mem) && ctx.pc == 0x08AAB174u) goto L_08AAB174;
    return;
L_08AAB174:
    ctx.set_gpr(31, 0x08AAB17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AAB17Cu) goto L_08AAB17C;
    return;
L_08AAB17C:
    ctx.set_gpr(31, 0x08AAB184u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AAB1F0;
L_08AAB184:
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
        goto L_08AAB1A4;
    }
    goto L_08AAB18C;
L_08AAB18C:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(28940));
    ctx.set_gpr(31, 0x08AAB1A0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AAB1C8;
L_08AAB1A0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    goto L_08AAB1A4;
L_08AAB1A4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08AAB1AC;
L_08AAB1AC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AAB1B0;
L_08AAB1B0:
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
L_08AAB1C8:
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + 0u);
    goto L_08AAB1D8;
L_08AAB1D8:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(13));
    ctx.set_fpr_bits(15, ctx.fpr_bits(13));
    ctx.set_fpr_bits(16, ctx.fpr_bits(13));
    (void)rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 129u, 0x08B0C6F0u>(ctx, &aot_mem); return;
L_08AAB1F0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-4781)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB200:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAB214u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AAB42C;
L_08AAB214:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7784));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AAB228u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    goto L_08AAB38C;
L_08AAB228:
    ctx.set_gpr(31, 0x08AAB230u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 717u, 0x08862D58u>(ctx, &aot_mem) && ctx.pc == 0x08AAB230u) goto L_08AAB230;
    return;
L_08AAB230:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAB240u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAB240u) goto L_08AAB240;
    return;
L_08AAB240:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB254:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AAB298;
      }
      goto L_08AAB270;
    }
L_08AAB270:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6632));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AAB284u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AAB2B0;
L_08AAB284:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AAB29C;
    }
    goto L_08AAB290;
L_08AAB290:
    ctx.set_gpr(31, 0x08AAB298u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AAB298u) goto L_08AAB298;
    return;
L_08AAB298:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AAB29C;
L_08AAB29C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB2B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AAB2E8;
    }
    goto L_08AAB2C8;
L_08AAB2C8:
    ctx.set_gpr(3, 2233u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(6600));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AAB2E4;
      }
      goto L_08AAB2DC;
    }
L_08AAB2DC:
    ctx.set_gpr(31, 0x08AAB2E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AAB2E4u) goto L_08AAB2E4;
    return;
L_08AAB2E4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AAB2E8;
L_08AAB2E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB2F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(5, 2233u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(3, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB38C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAB3A0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AAB3C0;
L_08AAB3A0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7848));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB3C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6588));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AAB3E0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08AAB3F4;
L_08AAB3E0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB3F4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, 2233u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(3, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB42C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AAB448u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    goto L_08AAB470;
L_08AAB448:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6632));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
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
L_08AAB470:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6600));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB484:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_08AAB48C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAB4A0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AAB42C;
L_08AAB4A0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6920));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AAB4B4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    goto L_08AAB5D8;
L_08AAB4B4:
    ctx.set_gpr(31, 0x08AAB4BCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(92));
    goto L_08AAB59C;
L_08AAB4BC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAB4CCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAB4CCu) goto L_08AAB4CC;
    return;
L_08AAB4CC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB4E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AAB524;
      }
      goto L_08AAB4FC;
    }
L_08AAB4FC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6952));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AAB510u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 68u, 0x08A7C42Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAB510u) goto L_08AAB510;
    return;
L_08AAB510:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AAB528;
    }
    goto L_08AAB51C;
L_08AAB51C:
    ctx.set_gpr(31, 0x08AAB524u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AAB524u) goto L_08AAB524;
    return;
L_08AAB524:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AAB528;
L_08AAB528:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB53C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(5, 2233u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(3, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB59C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAB5B0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AAB5C4;
L_08AAB5B0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB5C4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB5D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAB5ECu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 106u, 0x08A7C678u>(ctx, &aot_mem) && ctx.pc == 0x08AAB5ECu) goto L_08AAB5EC;
    return;
L_08AAB5EC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6952));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB60C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_08AAB614:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AAB62Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08AAB42C;
L_08AAB62C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7032));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AAB640u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    goto L_08AAB9D0;
L_08AAB640:
    ctx.set_gpr(31, 0x08AAB648u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    goto L_08AAB59C;
L_08AAB648:
    ctx.set_gpr(31, 0x08AAB650u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    goto L_08AAB87C;
L_08AAB650:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(200));
    goto L_08AAB654;
L_08AAB654:
    ctx.set_gpr(31, 0x08AAB65Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAA460;
L_08AAB65C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(248));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAB654;
      }
      goto L_08AAB670;
    }
L_08AAB670:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAB680u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAB680u) goto L_08AAB680;
    return;
L_08AAB680:
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
L_08AAB698:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AAB6DC;
      }
      goto L_08AAB6B4;
    }
L_08AAB6B4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7064));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AAB6C8u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AAB6F4;
L_08AAB6C8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AAB6E0;
    }
    goto L_08AAB6D4;
L_08AAB6D4:
    ctx.set_gpr(31, 0x08AAB6DCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AAB6DCu) goto L_08AAB6DC;
    return;
L_08AAB6DC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AAB6E0;
L_08AAB6E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB6F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AAB734;
      }
      goto L_08AAB710;
    }
L_08AAB710:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7464));
    ctx.set_gpr(31, 0x08AAB720u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 554u, 0x08ABDFB4u>(ctx, &aot_mem) && ctx.pc == 0x08AAB720u) goto L_08AAB720;
    return;
L_08AAB720:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AAB738;
    }
    goto L_08AAB72C;
L_08AAB72C:
    ctx.set_gpr(31, 0x08AAB734u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AAB734u) goto L_08AAB734;
    return;
L_08AAB734:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AAB738;
L_08AAB738:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB74C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AAB790;
      }
      goto L_08AAB768;
    }
L_08AAB768:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7096));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AAB77Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 74u, 0x08A7C488u>(ctx, &aot_mem) && ctx.pc == 0x08AAB77Cu) goto L_08AAB77C;
    return;
L_08AAB77C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AAB794;
    }
    goto L_08AAB788;
L_08AAB788:
    ctx.set_gpr(31, 0x08AAB790u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AAB790u) goto L_08AAB790;
    return;
L_08AAB790:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AAB794;
L_08AAB794:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB7A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08AAB828;
L_08AAB828:
    ctx.set_gpr(31, 0x08AAB830u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(200));
    goto L_08AAA488;
L_08AAB830:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AAB828;
      }
      goto L_08AAB840;
    }
L_08AAB840:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(252), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(272), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(276), ctx.gpr[3]);
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
L_08AAB87C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AAB898u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08AAB8B8;
L_08AAB898:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7064));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB8B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(2, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7464));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    goto L_08AAB8EC;
L_08AAB8EC:
    ctx.set_gpr(31, 0x08AAB8F4u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08AAA460;
L_08AAB8F4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAB8EC;
      }
      goto L_08AAB908;
    }
L_08AAB908:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AAB918u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08AAB938;
L_08AAB918:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_08AAB938:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20804)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20808)));
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20812)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    goto L_08AAB98C;
L_08AAB98C:
    ctx.set_gpr(31, 0x08AAB994u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    goto L_08AAA488;
L_08AAB994:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AAB98C;
      }
      goto L_08AAB9A4;
    }
L_08AAB9A4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
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
L_08AAB9D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AAB9ECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 110u, 0x08A7C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08AAB9ECu) goto L_08AAB9EC;
    return;
L_08AAB9EC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7096));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AABA0C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_08AABA14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AABA28u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AAB42C;
L_08AABA28:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7816));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AABA3Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    goto L_08AAB38C;
L_08AABA3C:
    ctx.set_gpr(31, 0x08AABA44u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 717u, 0x08862D58u>(ctx, &aot_mem) && ctx.pc == 0x08AABA44u) goto L_08AABA44;
    return;
L_08AABA44:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AABA54u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AABA54u) goto L_08AABA54;
    return;
L_08AABA54:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AABA68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(5, 2233u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(3, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AABAF4:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_08AABAFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AABB14u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08AAB42C;
L_08AABB14:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6664));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AABB28u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    goto L_08AABD30;
L_08AABB28:
    ctx.set_gpr(31, 0x08AABB30u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    goto L_08AAB59C;
L_08AABB30:
    ctx.set_gpr(31, 0x08AABB38u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(76));
    goto L_08AABCF4;
L_08AABB38:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(188));
    goto L_08AABB3C;
L_08AABB3C:
    ctx.set_gpr(31, 0x08AABB44u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAA460;
L_08AABB44:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(252));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AABB3C;
      }
      goto L_08AABB58;
    }
L_08AABB58:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AABB68u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AABB68u) goto L_08AABB68;
    return;
L_08AABB68:
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
L_08AABB80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AABBC4;
      }
      goto L_08AABB9C;
    }
L_08AABB9C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6556));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AABBB0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AAB6F4;
L_08AABBB0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AABBC8;
    }
    goto L_08AABBBC;
L_08AABBBC:
    ctx.set_gpr(31, 0x08AABBC4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AABBC4u) goto L_08AABBC4;
    return;
L_08AABBC4:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AABBC8;
L_08AABBC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AABBDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AABC20;
      }
      goto L_08AABBF8;
    }
L_08AABBF8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6696));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AABC0Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 74u, 0x08A7C488u>(ctx, &aot_mem) && ctx.pc == 0x08AABC0Cu) goto L_08AABC0C;
    return;
L_08AABC0C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AABC24;
    }
    goto L_08AABC18;
L_08AABC18:
    ctx.set_gpr(31, 0x08AABC20u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AABC20u) goto L_08AABC20;
    return;
L_08AABC20:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AABC24;
L_08AABC24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AABC38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, 2233u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(180), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08AABCA8;
L_08AABCA8:
    ctx.set_gpr(31, 0x08AABCB0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(188));
    goto L_08AAA488;
L_08AABCB0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AABCA8;
      }
      goto L_08AABCC0;
    }
L_08AABCC0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(252), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(284), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-12628), 0u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-12624), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(316), 0u);
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
L_08AABCF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AABD10u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08AAB8B8;
L_08AABD10:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6556));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AABD30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AABD4Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 110u, 0x08A7C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08AABD4Cu) goto L_08AABD4C;
    return;
L_08AABD4C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6696));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AABD6C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_08AABD74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AABD8Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08AAB42C;
L_08AABD8C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7176));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AABDA0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 4u, 0x08AAC048u>(ctx, &aot_mem) && ctx.pc == 0x08AABDA0u) goto L_08AABDA0;
    return;
L_08AABDA0:
    ctx.set_gpr(31, 0x08AABDA8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    goto L_08AAB59C;
L_08AABDA8:
    ctx.set_gpr(31, 0x08AABDB0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 2u, 0x08AAC00Cu>(ctx, &aot_mem) && ctx.pc == 0x08AABDB0u) goto L_08AABDB0;
    return;
L_08AABDB0:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(196));
    goto L_08AABDB4;
L_08AABDB4:
    ctx.set_gpr(31, 0x08AABDBCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AABFB8;
L_08AABDBC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AABDB4;
      }
      goto L_08AABDD0;
    }
L_08AABDD0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AABDE0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AABDE0u) goto L_08AABDE0;
    return;
L_08AABDE0:
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
L_08AABDF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AABE3C;
      }
      goto L_08AABE14;
    }
L_08AABE14:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7208));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AABE28u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AAB6F4;
L_08AABE28:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AABE40;
    }
    goto L_08AABE34;
L_08AABE34:
    ctx.set_gpr(31, 0x08AABE3Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AABE3Cu) goto L_08AABE3C;
    return;
L_08AABE3C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AABE40;
L_08AABE40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AABE54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AABE98;
      }
      goto L_08AABE70;
    }
L_08AABE70:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7240));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AABE84u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 74u, 0x08A7C488u>(ctx, &aot_mem) && ctx.pc == 0x08AABE84u) goto L_08AABE84;
    return;
L_08AABE84:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AABE9C;
    }
    goto L_08AABE90;
L_08AABE90:
    ctx.set_gpr(31, 0x08AABE98u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AABE98u) goto L_08AABE98;
    return;
L_08AABE98:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AABE9C;
L_08AABE9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AABEB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[16] + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08AABF34;
L_08AABF34:
    ctx.set_gpr(31, 0x08AABF3Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(196));
    goto L_08AABF74;
L_08AABF3C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(292), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08AABF34;
      }
      goto L_08AABF54;
    }
L_08AABF54:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(420), 0u);
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
L_08AABF74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AABF8C;
L_08AABF8C:
    ctx.set_gpr(31, 0x08AABF94u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAA488;
L_08AABF94:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AABF8C;
      }
      goto L_08AABFA4;
    }
L_08AABFA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AABFB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    goto L_08AABFD0;
L_08AABFD0:
    ctx.set_gpr(31, 0x08AABFD8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAA460;
L_08AABFD8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AABFD0;
      }
      goto L_08AABFEC;
    }
L_08AABFEC:
    ctx.set_gpr(31, 0x08AABFF4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AABF74;
L_08AABFF4:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08AAC000u; return;
}

void recomp_unit_0169(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0169_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_169(Runtime &runtime) {
    runtime.register_generated_unit(169u, 0x08AA8000u, 16384u, &recomp_unit_0169, &recomp_unit_0169_entry);
    runtime.register_function(0x08AA8000u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8020u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA802Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8034u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA803Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8044u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8054u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA805Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8068u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8074u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA80A8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA80B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA80C0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA80E0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA80E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA80F8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8118u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8120u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8130u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8150u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8158u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8168u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8188u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8190u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA81A0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA81C0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA81C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA81D4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA81DCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA81E4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA81FCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8204u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8210u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8220u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8228u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8234u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA823Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA824Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8254u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8264u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA826Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8274u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA827Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA828Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8294u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA829Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA82B4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA82BCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA82C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA82D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA82D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA82E4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA82F0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA82FCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8304u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA830Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA831Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8324u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA832Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8334u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA833Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8344u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA834Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8358u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8360u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8368u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8374u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8378u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8380u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8414u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8458u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8460u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA84A4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA84B4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA84D4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA84DCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA84E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA84F0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8500u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8508u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8514u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA851Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA852Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8538u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8550u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8564u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA856Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8574u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8580u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8588u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8590u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8598u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA85A0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA85A8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA85B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA85C0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA85C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA85D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA85DCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA85F0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA85FCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8608u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8614u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA861Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8624u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA862Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8634u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA863Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8650u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA865Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8668u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8670u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8678u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8680u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8694u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA86A0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA86A8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA86B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA86B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA86CCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA86D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA86E0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA86E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA86F0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8704u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8710u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8718u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8720u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8728u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA873Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8744u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8748u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8750u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8754u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8758u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA876Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8774u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA877Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8784u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA87A4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA87ACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA87BCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA87C4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA87CCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA87D4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA87DCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA87E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA87F0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA87F8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA87FCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8804u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA880Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8818u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA882Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8834u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA883Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8848u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA885Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8860u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8868u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8878u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8880u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8888u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8890u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8898u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA88A0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA88B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA88B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA88C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA88DCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA88E4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA88ECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA88F8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8900u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA890Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8914u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8924u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8938u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8940u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8948u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8954u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8958u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8960u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8970u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8974u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8988u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8990u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA89ECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA89F8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8A14u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8A1Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8A38u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8A40u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8A48u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8A54u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8A60u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8A68u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8A6Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8A80u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8A88u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8A98u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8AA8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8AB0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8AE8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8AF0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8AFCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B04u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B14u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B1Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B28u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B34u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B3Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B44u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B4Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B58u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B64u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B6Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B74u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B7Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B88u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B94u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B9Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8BA4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8BACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8BB8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8BC4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8BD0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8BE0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8BF0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8C04u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8C28u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8C30u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8C38u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8C50u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8C6Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8C74u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8C80u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8C8Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8C98u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8CA4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8CACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8CB0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8CC4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8CE0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8CF0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8CFCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8D04u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8D0Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8D18u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8D20u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8D2Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8D34u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8D3Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8D44u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8D54u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8D60u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8D68u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8D70u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8D7Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8D80u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8D88u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8D98u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8DA0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8DA4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8DACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8DB8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8DC8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8DD8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8DE8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8DF8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8E00u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8E08u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8E10u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8E18u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8E2Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8E4Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8E54u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8E6Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8E7Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8E88u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8E90u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8E98u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8EA0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8EA8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8EACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8EB8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8EE4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8EECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8F04u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8F34u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8F44u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8F4Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8F64u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8F6Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8F80u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8F98u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8FB0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8FC0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8FC8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8FE0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8FE8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9000u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9018u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA901Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA902Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9034u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA904Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9054u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA906Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9084u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9098u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA90A8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA90B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA90C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA90D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA90E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA90ECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9104u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA912Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9134u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA914Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA915Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA916Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9174u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9180u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9188u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9198u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA91A0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA91A8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA91B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA91B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA91CCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA91DCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA91F8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9200u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9214u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA922Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9290u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA92A0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA92A8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA92B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA92BCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA92C4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA92CCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA92D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA92D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA92E4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA92F0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA92FCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9304u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9310u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA931Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9320u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9328u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9344u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9360u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9368u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9370u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9378u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9388u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9390u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA939Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA93ACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA93B4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA93BCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA93C4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA93D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA93DCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA93E4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA93F8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA93FCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9404u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA940Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA941Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA942Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9434u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9440u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9450u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9458u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9460u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9468u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9474u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9480u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9488u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA949Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA94A0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA94A8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA94B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA94C0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA94D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA94D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA94E4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA94F4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA94FCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9504u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA950Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9518u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9528u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9530u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9544u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9548u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9550u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9558u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9568u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9574u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9578u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9588u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA95A4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA95C0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA95C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA95D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA95D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA95E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA95F0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA95FCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA960Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9614u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA961Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9624u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9630u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA963Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9644u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9658u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA965Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9664u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA966Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA967Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA968Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9694u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA96A0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA96B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA96B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA96C0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA96C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA96D4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA96E0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA96E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA96FCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9700u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9708u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9710u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9720u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9730u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9738u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9744u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9754u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA975Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9764u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA976Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9778u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9788u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9790u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA97A4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA97A8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA97B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA97B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA97C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA97D4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA97D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA97E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9800u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9808u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9810u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9818u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9820u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9824u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9830u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA983Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9844u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA984Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9858u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA985Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9864u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA986Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9878u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA987Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9884u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9888u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9898u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA98A0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA98ACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA98B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA98B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA98E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA991Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9928u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9944u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9954u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA995Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA996Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9974u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9980u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9988u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9994u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA999Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA99A8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA99B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA99BCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA99C4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA99D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA99D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA99E4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA99E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9A00u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9A14u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9A48u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9A60u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9A68u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9A84u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9A8Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9AA8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9AACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9AB4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9AC4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9ADCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B10u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B28u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B30u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B44u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B4Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B60u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B64u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B70u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B80u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B90u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9BA0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9BB8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9BDCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9BF4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9C08u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9C2Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9C40u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9C54u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9C60u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9C68u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9C74u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9C7Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9C90u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9CA0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9CB0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9CC4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9CF0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9D04u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9D10u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9D18u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9D24u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9D2Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9D40u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9D50u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9D60u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9D70u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9D80u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9D8Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9DA0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9DCCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9DE0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9DECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9DF4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9E00u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9E08u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9E0Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9E1Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9E44u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9E54u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9E64u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9E84u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9EA4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9EC4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9ED8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9EECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F08u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F30u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F44u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F58u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F78u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F84u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F8Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F94u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9FA8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9FB0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9FBCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9FC4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9FCCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9FE0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9FE8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA010u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA030u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA050u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA05Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA068u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA080u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA088u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA094u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA09Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA0B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA0C0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA0CCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA0D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA0E4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA0F0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA0FCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA104u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA108u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA11Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA124u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA140u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA148u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA154u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA15Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA160u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA174u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA194u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA1A0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA1B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA1B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA1C0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA1CCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA1D4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA1DCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA1E4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA1ECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA1FCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA204u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA20Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA218u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA228u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA238u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA244u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA24Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA258u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA260u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA264u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA270u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA278u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA280u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA294u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA298u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA2A8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA2B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA2B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA2D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA2D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA2E0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA2E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA2F0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA2F8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA300u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA308u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA310u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA318u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA32Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA36Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA3C4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA3D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA3ECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA408u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA420u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA424u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA42Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA440u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA448u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA460u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA474u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA488u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA4A0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA4B4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA4C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA518u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA534u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA53Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA540u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA548u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA55Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA564u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA568u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA570u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA584u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA58Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA5A0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA5BCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA5D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA5D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA5E0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA5F8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA60Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA614u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA628u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA640u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA654u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA670u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA674u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA67Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA690u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA698u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA6B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA6F0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA6F8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA700u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA710u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA714u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA71Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA72Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA744u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA784u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA790u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA79Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA7B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA7C4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA7D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA7ECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA804u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA80Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA820u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA850u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA868u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA888u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA8A0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA8A8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA8BCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA8C4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA8DCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA8F8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA900u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA910u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA924u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA940u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA948u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA958u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA96Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA9ACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA9C4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA9CCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA9E0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA9E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA00u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA14u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA28u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA30u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA58u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA64u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA70u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA7Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA88u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA94u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAAA0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAAACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAAB8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAAC4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAAD0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAADCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAAE4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAAECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAAF4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAAFCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAB04u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAB14u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAB1Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAB2Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAB34u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAB40u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAB50u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAB58u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAB64u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAB74u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAB7Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAB94u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAB9Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAABA4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAABACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAABB8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAABC0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAABC8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAABD4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAABDCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAABE4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAABF0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAABF8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC00u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC0Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC14u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC1Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC28u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC34u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC3Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC44u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC50u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC58u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC64u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC68u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC74u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC7Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC84u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC90u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC98u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAACA4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAACA8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAACB4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAACBCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAACC4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAACD0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAACD8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAACE4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAACE8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAACF4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAACFCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAD04u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAD10u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAD18u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAD24u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAD28u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAD34u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAD3Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAD44u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAD50u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAD58u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAD64u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAD68u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAD74u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAD7Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAD84u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAD90u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAD98u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAADA4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAADA8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAADB4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAADBCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAADC4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAADD0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAADD8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAADE4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAADE8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAADF4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAADFCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE04u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE10u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE18u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE24u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE28u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE34u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE3Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE44u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE50u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE58u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE64u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE68u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE74u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE7Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE8Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE94u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAEA0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAEA8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAEB8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAEC0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAECCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAED4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAEE4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAEECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAEF8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAF00u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAF10u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAF18u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAF24u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAF2Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAF34u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAF50u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAF68u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAF74u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAF7Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAF90u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAF9Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAFA8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAFACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAFB4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAFC0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAFC8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAFDCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAFE8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAFF8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAFFCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB008u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB014u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB01Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB02Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB038u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB044u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB054u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB05Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB068u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB088u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB090u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB098u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB0A0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB0B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB0C0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB0E0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB0E4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB0E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB0F0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB110u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB124u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB134u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB14Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB154u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB168u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB174u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB17Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB184u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB18Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB1A0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB1A4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB1ACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB1B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB1C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB1D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB1F0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB200u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB214u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB228u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB230u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB240u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB254u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB270u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB284u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB290u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB298u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB29Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB2B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB2C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB2DCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB2E4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB2E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB2F8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB38Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB3A0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB3C0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB3E0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB3F4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB42Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB448u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB470u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB484u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB48Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB4A0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB4B4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB4BCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB4CCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB4E0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB4FCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB510u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB51Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB524u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB528u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB53Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB59Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB5B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB5C4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB5D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB5ECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB60Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB614u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB62Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB640u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB648u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB650u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB654u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB65Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB670u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB680u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB698u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB6B4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB6C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB6D4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB6DCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB6E0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB6F4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB710u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB720u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB72Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB734u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB738u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB74Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB768u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB77Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB788u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB790u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB794u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB7A8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB828u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB830u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB840u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB87Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB898u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB8B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB8ECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB8F4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB908u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB918u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB938u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB98Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB994u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB9A4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB9D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB9ECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABA0Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABA14u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABA28u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABA3Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABA44u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABA54u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABA68u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABAF4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABAFCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABB14u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABB28u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABB30u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABB38u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABB3Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABB44u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABB58u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABB68u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABB80u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABB9Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABBB0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABBBCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABBC4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABBC8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABBDCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABBF8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABC0Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABC18u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABC20u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABC24u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABC38u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABCA8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABCB0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABCC0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABCF4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABD10u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABD30u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABD4Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABD6Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABD74u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABD8Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABDA0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABDA8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABDB0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABDB4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABDBCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABDD0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABDE0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABDF8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABE14u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABE28u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABE34u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABE3Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABE40u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABE54u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABE70u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABE84u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABE90u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABE98u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABE9Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABEB0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABF34u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABF3Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABF54u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABF74u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABF8Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABF94u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABFA4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABFB8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABFD0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABFD8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABFECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABFF4u, &recomp_unit_0169, "recomp_unit_0169");
}
} // namespace psprecomp
