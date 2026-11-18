#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0069[4073] = {
    1, 0, 0, 2, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 8, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 11,
    0, 0, 12, 0, 0, 13, 14, 0, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 19, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 23, 0, 0, 24, 25, 0, 0, 26, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 30, 0, 0, 31, 0, 32, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 34, 0, 0, 35, 36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 41, 0, 0, 42, 0, 43, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 47, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 52, 0, 0,
    0, 0, 0, 0, 0, 53, 0, 0, 54, 55, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 61, 0, 0, 62,
    0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 66, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 72, 0,
    0, 73, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 77, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81,
    82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0,
    0, 92, 93, 0, 0, 94, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0,
    101, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 108, 0, 0, 109, 0, 0, 110, 0, 0, 0,
    111, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0,
    0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0,
    132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 136, 0, 137, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0,
    0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164,
    0, 165, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0,
    0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 184,
    0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0,
    0, 191, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 198, 199, 0, 0, 0,
    200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 209,
    0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 224, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0,
    0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 0, 232, 233, 0, 0, 0, 234, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0,
    242, 0, 243, 0, 0, 0, 0, 244, 0, 245, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 257, 258, 0, 0, 259,
    0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0,
    0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0,
    0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 281, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0,
    0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291,
    0, 292, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 297, 298, 0, 0, 299, 0, 0,
    0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 306, 0, 0, 0, 0, 307, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 310, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 314,
    0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0,
    323, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0,
    0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0,
    0, 0, 0, 0, 0, 342, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 346, 0, 347, 0, 348, 349, 0, 350, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 0,
    356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 359, 0, 360, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 364,
    0, 0, 0, 365, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0,
    372, 0, 373, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 378, 379, 0, 0, 380, 0, 381, 0, 0,
    0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 388, 0, 389,
    0, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0,
    0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 400, 401, 0, 0, 402, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 405, 406, 0, 0,
    0, 407, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0,
    0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 417, 418, 0, 0, 419, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 422, 423, 0, 0, 0,
    424, 0, 0, 425, 0, 0, 0, 426, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 432, 0, 0, 433, 0, 0, 434,
    0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 0,
    445, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 452, 0, 0, 0, 453, 0, 0, 454, 0, 455, 0, 0,
    456, 0, 457, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0,
    465, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0, 470, 0, 471, 472, 0, 0, 473, 0, 474, 0, 0, 475, 0, 0,
    476, 0, 0, 0, 477, 478, 0, 0, 479, 0, 0, 0, 480, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 484, 0, 485, 0, 0, 486, 0, 0, 487,
    0, 488, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 491, 0, 492, 0, 0, 493, 0, 0, 494, 0, 495, 0, 0, 496, 0, 0, 0, 0,
    497, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 500, 0, 501, 0, 0, 0, 502, 0, 503, 504, 0, 0, 0, 505, 0, 0, 506, 0, 507, 0, 0,
    508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 511, 512, 0, 0, 513, 0, 514, 0, 0, 0, 515, 0, 0, 516, 0, 517, 0, 0,
    518, 0, 519, 0, 0, 520, 0, 0, 521, 0, 522, 0, 0, 0, 0, 523, 0, 524, 0, 525, 0, 0, 526, 0, 527, 528, 0, 529, 0, 530, 0, 531,
    532, 0, 533, 0, 0, 534, 535, 0, 536, 0, 0, 537, 0, 0, 538, 0, 0, 539, 0, 540, 0, 0, 0, 541, 0, 542, 0, 0, 543, 0, 0, 544,
    0, 0, 545, 0, 0, 546, 0, 547, 0, 0, 548, 0, 549, 0, 0, 0, 550, 0, 0, 551, 0, 552, 0, 0, 553, 0, 554, 0, 0, 555, 0, 0,
    556, 0, 0, 557, 0, 0, 558, 0, 559, 0, 0, 560, 0, 561, 0, 0, 562, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0,
    0, 567, 0, 568, 0, 0, 569, 0, 570, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 574, 0, 0, 575, 0, 0, 576,
    0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 0, 583, 0, 0, 584, 0, 0, 585, 0, 0, 586, 587, 0,
    0, 588, 0, 0, 589, 0, 590, 0, 0, 0, 591, 0, 592, 0, 0, 0, 593, 0, 0, 594, 0, 595, 0, 0, 596, 0, 597, 0, 0, 598, 0, 0,
    599, 0, 0, 600, 0, 0, 601, 0, 602, 0, 0, 603, 0, 604, 0, 0, 605, 0, 0, 606, 0, 0, 607, 0, 0, 608, 0, 609, 0, 0, 610, 0,
    611, 0, 0, 612, 0, 0, 613, 0, 0, 614, 0, 0, 615, 0, 616, 0, 0, 617, 0, 618, 0, 0, 619, 0, 0, 620, 0, 0, 621, 0, 0, 622,
    0, 623, 0, 0, 624, 0, 625, 0, 0, 626, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 630, 0, 0, 631, 0, 632, 0, 0, 633, 0, 634, 0,
    0, 0, 0, 0, 0, 0, 635, 0, 0, 636, 0, 0, 637, 0, 638, 0, 0, 0, 639, 0, 0, 0, 640, 0, 0, 641, 0, 0, 0, 642, 0, 0,
    0, 0, 643, 0, 644, 0, 645, 0, 0, 0, 0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 648, 0, 649, 0, 0, 650, 0, 651, 0, 0, 0, 652,
    0, 0, 653, 0, 654, 0, 0, 655, 0, 656, 0, 0, 0, 657, 0, 658, 0, 659, 0, 0, 660, 0, 0, 661, 0, 662, 0, 0, 0, 663, 0, 664,
    0, 0, 665, 0, 0, 666, 0, 667, 0, 668, 0, 0, 669, 0, 0, 670, 0, 671, 0, 0, 0, 672, 0, 673, 0, 0, 674, 0, 0, 675, 0, 0,
    676, 0, 677, 0, 0, 678, 0, 679, 0, 0, 680, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 683, 0, 0, 684, 0, 685, 0, 0, 0, 686, 0,
    687, 0, 0, 688, 0, 0, 689, 0, 0, 690, 0, 691, 0, 0, 692, 0, 693, 0, 0, 694, 0, 0, 695, 0, 0, 0, 0, 696, 0, 0, 697, 0,
    0, 698, 0, 699, 0, 0, 0, 700, 0, 701, 0, 0, 702, 0, 0, 703, 0, 704, 0, 705, 0, 0, 706, 0, 0, 707, 0, 708, 0, 0, 0, 709,
    0, 710, 0, 0, 711, 0, 0, 712, 0, 713, 0, 0, 714, 0, 0, 715, 0, 716, 0, 0, 0, 717, 0, 718, 0, 0, 0, 719, 0, 0, 720, 0,
    721, 0, 0, 722, 0, 723, 0, 0, 724, 0, 0, 725, 0, 0, 726, 0, 727, 0, 0, 728, 0, 729, 0, 0, 0, 0, 0, 730, 0, 0, 731, 0,
    0, 732, 0, 733, 0, 0, 0, 734, 0, 735, 0, 0, 0, 736, 0, 737, 0, 0, 0, 738, 0, 739, 0, 0, 740, 0, 0, 0, 0, 741, 0, 0,
    742, 0, 0, 743, 0, 744, 0, 0, 0, 745, 0, 746, 0, 0, 0, 747, 0, 748, 0, 0, 0, 749, 0, 750, 0, 0, 751, 0, 0, 0, 0, 0,
    0, 752, 753, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0, 756, 0, 0, 757, 0, 0, 0, 0, 758, 0, 0, 0, 0, 759, 0, 0, 760, 0, 0,
    0, 0, 761, 0, 0, 762, 0, 0, 763, 0, 764, 0, 765, 0, 0, 0, 766, 767, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0,
    0, 769, 0, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 772, 0, 773, 774, 0, 0, 0, 775, 0, 0, 0, 776, 0, 0, 777, 0, 0, 0, 0,
    0, 778, 0, 0, 779, 0, 780, 781, 0, 0, 0, 782, 0, 0, 0, 783, 0, 0, 784, 0, 0, 0, 0, 0, 785, 0, 0, 786, 0, 787, 788, 0,
    0, 0, 789, 0, 0, 0, 790, 0, 0, 791, 0, 0, 0, 0, 0, 792, 0, 0, 793, 0, 794, 795, 0, 0, 0, 796, 0, 0, 0, 797, 0, 0,
    798, 0, 0, 0, 0, 0, 799, 0, 0, 800, 0, 801, 802, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 808, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 809, 0, 0, 0, 810, 0, 0, 0, 0, 811, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    817, 0, 0, 0, 0, 0, 818, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 821, 0, 822, 0, 0, 0, 823, 0, 824, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 826,
    0, 0, 827, 828, 0, 0, 829, 0, 0, 0, 0, 830, 0, 0, 831, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 833, 0, 834, 0, 835, 0, 0,
    836, 0, 0, 837, 0, 0, 0, 838, 0, 0, 0, 839, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 841, 0, 0, 842, 0, 0, 843, 844, 0, 0, 845, 0, 0, 0, 0, 846, 0, 0, 847, 0, 0, 0, 848, 0, 0, 0, 0, 0, 0, 849,
    0, 850, 0, 851, 0, 0, 852, 0, 0, 853, 0, 0, 0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0, 856, 0,
    0, 0, 0, 0, 857, 0, 0, 0, 0, 0, 858, 859, 0, 0, 860, 0, 0, 0, 0, 0, 861, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    862, 0, 0, 863, 0, 0, 0, 0, 0, 0, 0, 864, 0, 0, 0, 0, 0, 0, 865, 0, 0, 866, 0, 0, 0, 867, 0, 0, 868, 0, 0, 869,
    0, 0, 870, 0, 0, 0, 0, 0, 871, 872, 0, 0, 873, 0, 0, 0, 874, 0, 0, 0, 0, 0, 0, 0, 875, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 876, 0, 0, 0, 0, 877, 0, 0, 0, 0, 878, 0, 0, 0, 0, 0, 0, 0, 0, 879, 0, 0,
    0, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 0, 0, 881, 0, 0, 0, 0, 882, 0, 0, 0, 0, 0, 0, 0, 883, 0, 0, 0, 0, 0,
    0, 884, 0, 0, 0, 0, 0, 885, 0, 0, 0, 0, 886, 0, 0, 887, 0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0, 0, 0, 889, 0, 0,
    890, 0, 0, 0, 891, 0, 0, 892, 0, 0, 893, 0, 0, 894, 0, 0, 0, 0, 895, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 897, 0, 0, 0, 0, 0, 0, 898, 0, 0, 0, 0, 899, 0, 0, 900, 0, 0,
    0, 0, 901, 902, 0, 0, 903, 904, 905, 0, 0, 0, 906, 0, 0, 907, 0, 0, 0, 0, 0, 0, 0, 908, 0, 0, 0, 0, 909, 0, 0, 0,
    910, 0, 0, 0, 0, 0, 911, 0, 0, 0, 0, 912, 0, 0, 913, 0, 0, 914, 0, 0, 0, 0, 915, 0, 0, 0, 0, 916, 917, 0, 0, 918,
    919, 0, 0, 0, 920, 0, 921, 0, 0, 922, 0, 0, 923, 0, 0, 0, 924, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 925, 926, 0, 0, 927,
    0, 0, 0, 0, 0, 0, 0, 928, 0, 0, 0, 929, 0, 0, 0, 930, 0, 0, 0, 931, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    932, 0, 0, 0, 933, 0, 0, 0, 934, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 935, 0, 0, 936, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 937, 0, 0, 0, 938, 0, 0, 939, 0, 0, 940, 0, 0, 0, 941, 0, 0, 0, 0, 942, 0, 0, 943, 0, 0, 0, 0, 944, 0, 0, 945,
    0, 0, 0, 0, 946, 0, 0, 0, 0, 0, 0, 0, 0, 947, 0, 0, 0, 0, 0, 948, 0, 0, 0, 949, 0, 950, 0, 951, 0, 0, 0, 952,
    0, 0, 953, 0, 954, 0, 0, 0, 0, 0, 0, 955, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 956, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 957, 0, 0, 958, 0, 0, 959, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 960, 961, 0, 0, 962, 0, 963,
    0, 0, 964, 0, 0, 0, 0, 965, 0, 0, 0, 966, 0, 0, 967, 968, 0, 0, 0, 0, 0, 0, 0, 0, 969, 0, 0, 0, 0, 0, 0, 970,
    0, 0, 0, 971, 0, 0, 0, 0, 0, 0, 972, 0, 0, 0, 973, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 974, 0, 975, 0, 976, 0,
    0, 0, 977, 0, 0, 0, 978, 0, 0, 0, 979, 0, 980, 0, 0, 0, 981, 0, 0, 0, 982, 0, 0, 983, 0, 0, 0, 0, 984, 0, 0, 0,
    0, 985, 0, 0, 0, 0, 986, 0, 0, 0, 0, 987, 0, 0, 0, 0, 988, 0, 0, 989, 0, 0, 0, 0, 0, 0, 0, 990, 0, 0, 991, 0,
    0, 992, 0, 0, 993, 0, 0, 0, 0, 0, 0, 0, 994, 0, 0, 995, 0, 0, 996, 0, 0, 997, 0, 0, 0, 0, 0, 0, 0, 998, 0, 0,
    999, 0, 0, 1000, 0, 0, 1001, 0, 0, 0, 0, 0, 0, 0, 1002, 0, 0, 1003, 0, 0, 1004, 0, 0, 0, 0, 0, 0, 1005, 0, 0, 0, 0,
    0, 1006, 0, 0, 0, 0, 0, 1007, 0, 0, 0, 0, 0, 0, 1008, 0, 0, 0, 0, 0, 1009, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1010,
};
void recomp_unit_0069_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08918004u;
        entry_id = (entry_delta < 16292u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0069[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08918004;
    case 2u: goto L_08918010;
    case 3u: goto L_08918014;
    case 4u: goto L_08918020;
    case 5u: goto L_0891802C;
    case 6u: goto L_0891803C;
    case 7u: goto L_0891804C;
    case 8u: goto L_08918050;
    case 9u: goto L_0891805C;
    case 10u: goto L_08918064;
    case 11u: goto L_08918080;
    case 12u: goto L_0891808C;
    case 13u: goto L_08918098;
    case 14u: goto L_0891809C;
    case 15u: goto L_089180A8;
    case 16u: goto L_089180B4;
    case 17u: goto L_089180C4;
    case 18u: goto L_089180D4;
    case 19u: goto L_089180D8;
    case 20u: goto L_089180E4;
    case 21u: goto L_089180EC;
    case 22u: goto L_08918108;
    case 23u: goto L_08918114;
    case 24u: goto L_08918120;
    case 25u: goto L_08918124;
    case 26u: goto L_08918130;
    case 27u: goto L_0891813C;
    case 28u: goto L_0891814C;
    case 29u: goto L_0891815C;
    case 30u: goto L_08918160;
    case 31u: goto L_0891816C;
    case 32u: goto L_08918174;
    case 33u: goto L_08918190;
    case 34u: goto L_0891819C;
    case 35u: goto L_089181A8;
    case 36u: goto L_089181AC;
    case 37u: goto L_089181B8;
    case 38u: goto L_089181C4;
    case 39u: goto L_089181D4;
    case 40u: goto L_089181E4;
    case 41u: goto L_089181E8;
    case 42u: goto L_089181F4;
    case 43u: goto L_089181FC;
    case 44u: goto L_08918218;
    case 45u: goto L_08918224;
    case 46u: goto L_08918230;
    case 47u: goto L_08918234;
    case 48u: goto L_08918240;
    case 49u: goto L_0891824C;
    case 50u: goto L_0891825C;
    case 51u: goto L_08918268;
    case 52u: goto L_08918278;
    case 53u: goto L_08918298;
    case 54u: goto L_089182A4;
    case 55u: goto L_089182A8;
    case 56u: goto L_089182B4;
    case 57u: goto L_089182BC;
    case 58u: goto L_089182D8;
    case 59u: goto L_089182E4;
    case 60u: goto L_089182F0;
    case 61u: goto L_089182F4;
    case 62u: goto L_08918300;
    case 63u: goto L_0891830C;
    case 64u: goto L_0891831C;
    case 65u: goto L_0891832C;
    case 66u: goto L_08918330;
    case 67u: goto L_0891833C;
    case 68u: goto L_08918344;
    case 69u: goto L_08918360;
    case 70u: goto L_0891836C;
    case 71u: goto L_08918378;
    case 72u: goto L_0891837C;
    case 73u: goto L_08918388;
    case 74u: goto L_08918394;
    case 75u: goto L_089183A4;
    case 76u: goto L_089183BC;
    case 77u: goto L_089183C0;
    case 78u: goto L_089183CC;
    case 79u: goto L_089183D4;
    case 80u: goto L_089183F4;
    case 81u: goto L_08918400;
    case 82u: goto L_08918404;
    case 83u: goto L_08918414;
    case 84u: goto L_08918424;
    case 85u: goto L_08918430;
    case 86u: goto L_0891843C;
    case 87u: goto L_08918444;
    case 88u: goto L_0891844C;
    case 89u: goto L_08918454;
    case 90u: goto L_08918470;
    case 91u: goto L_0891847C;
    case 92u: goto L_08918488;
    case 93u: goto L_0891848C;
    case 94u: goto L_08918498;
    case 95u: goto L_089184A4;
    case 96u: goto L_089184B4;
    case 97u: goto L_089184C8;
    case 98u: goto L_089184D0;
    case 99u: goto L_089184D8;
    case 100u: goto L_089184F8;
    case 101u: goto L_08918504;
    case 102u: goto L_08918514;
    case 103u: goto L_0891851C;
    case 104u: goto L_08918524;
    case 105u: goto L_08918540;
    case 106u: goto L_0891854C;
    case 107u: goto L_08918558;
    case 108u: goto L_0891855C;
    case 109u: goto L_08918568;
    case 110u: goto L_08918574;
    case 111u: goto L_08918584;
    case 112u: goto L_08918594;
    case 113u: goto L_089185A8;
    case 114u: goto L_089185B4;
    case 115u: goto L_089185C0;
    case 116u: goto L_089185D0;
    case 117u: goto L_089185D4;
    case 118u: goto L_089185F8;
    case 119u: goto L_0891860C;
    case 120u: goto L_0891862C;
    case 121u: goto L_08918638;
    case 122u: goto L_08918650;
    case 123u: goto L_08918664;
    case 124u: goto L_08918684;
    case 125u: goto L_08918690;
    case 126u: goto L_0891869C;
    case 127u: goto L_089186A8;
    case 128u: goto L_089186C0;
    case 129u: goto L_089186CC;
    case 130u: goto L_089186D8;
    case 131u: goto L_089186F8;
    case 132u: goto L_08918704;
    case 133u: goto L_08918710;
    case 134u: goto L_08918754;
    case 135u: goto L_08918760;
    case 136u: goto L_08918764;
    case 137u: goto L_0891876C;
    case 138u: goto L_08918784;
    case 139u: goto L_089187A4;
    case 140u: goto L_089187B0;
    case 141u: goto L_089187BC;
    case 142u: goto L_089187C8;
    case 143u: goto L_089187E0;
    case 144u: goto L_089187EC;
    case 145u: goto L_089187F8;
    case 146u: goto L_08918818;
    case 147u: goto L_08918824;
    case 148u: goto L_08918830;
    case 149u: goto L_08918878;
    case 150u: goto L_089188A8;
    case 151u: goto L_089188B4;
    case 152u: goto L_089188C0;
    case 153u: goto L_089188C4;
    case 154u: goto L_089188D0;
    case 155u: goto L_08918930;
    case 156u: goto L_0891894C;
    case 157u: goto L_08918954;
    case 158u: goto L_08918960;
    case 159u: goto L_08918974;
    case 160u: goto L_089189B4;
    case 161u: goto L_089189CC;
    case 162u: goto L_089189D4;
    case 163u: goto L_089189E4;
    case 164u: goto L_08918A00;
    case 165u: goto L_08918A08;
    case 166u: goto L_08918A20;
    case 167u: goto L_08918A28;
    case 168u: goto L_08918A34;
    case 169u: goto L_08918A48;
    case 170u: goto L_08918A54;
    case 171u: goto L_08918A70;
    case 172u: goto L_08918AA4;
    case 173u: goto L_08918AAC;
    case 174u: goto L_08918AC4;
    case 175u: goto L_08918AD4;
    case 176u: goto L_08918AFC;
    case 177u: goto L_08918B0C;
    case 178u: goto L_08918B1C;
    case 179u: goto L_08918B28;
    case 180u: goto L_08918B38;
    case 181u: goto L_08918B48;
    case 182u: goto L_08918B64;
    case 183u: goto L_08918B70;
    case 184u: goto L_08918B80;
    case 185u: goto L_08918B98;
    case 186u: goto L_08918BAC;
    case 187u: goto L_08918BB8;
    case 188u: goto L_08918BC4;
    case 189u: goto L_08918BE4;
    case 190u: goto L_08918BFC;
    case 191u: goto L_08918C08;
    case 192u: goto L_08918C1C;
    case 193u: goto L_08918C28;
    case 194u: goto L_08918C38;
    case 195u: goto L_08918C44;
    case 196u: goto L_08918C50;
    case 197u: goto L_08918C5C;
    case 198u: goto L_08918C70;
    case 199u: goto L_08918C74;
    case 200u: goto L_08918C84;
    case 201u: goto L_08918C94;
    case 202u: goto L_08918CC8;
    case 203u: goto L_08918D28;
    case 204u: goto L_08918D34;
    case 205u: goto L_08918D3C;
    case 206u: goto L_08918D54;
    case 207u: goto L_08918D6C;
    case 208u: goto L_08918D74;
    case 209u: goto L_08918D80;
    case 210u: goto L_08918D9C;
    case 211u: goto L_08918DA4;
    case 212u: goto L_08918DB0;
    case 213u: goto L_08918DBC;
    case 214u: goto L_08918DC8;
    case 215u: goto L_08918DD0;
    case 216u: goto L_08918DE0;
    case 217u: goto L_08918DEC;
    case 218u: goto L_08918DF4;
    case 219u: goto L_08918E18;
    case 220u: goto L_08918E34;
    case 221u: goto L_08918E4C;
    case 222u: goto L_08918E60;
    case 223u: goto L_08918E6C;
    case 224u: goto L_08918E7C;
    case 225u: goto L_08918EB0;
    case 226u: goto L_08918EE8;
    case 227u: goto L_08918EF8;
    case 228u: goto L_08918F18;
    case 229u: goto L_08918F34;
    case 230u: goto L_08918F40;
    case 231u: goto L_08918F4C;
    case 232u: goto L_08918F5C;
    case 233u: goto L_08918F60;
    case 234u: goto L_08918F70;
    case 235u: goto L_08918F74;
    case 236u: goto L_08918F9C;
    case 237u: goto L_08918FB0;
    case 238u: goto L_08918FBC;
    case 239u: goto L_08918FC8;
    case 240u: goto L_08918FE4;
    case 241u: goto L_08918FEC;
    case 242u: goto L_08919004;
    case 243u: goto L_0891900C;
    case 244u: goto L_08919020;
    case 245u: goto L_08919028;
    case 246u: goto L_0891902C;
    case 247u: goto L_08919034;
    case 248u: goto L_08919064;
    case 249u: goto L_08919074;
    case 250u: goto L_08919094;
    case 251u: goto L_089190AC;
    case 252u: goto L_089190B8;
    case 253u: goto L_089190C8;
    case 254u: goto L_089190D4;
    case 255u: goto L_089190E0;
    case 256u: goto L_089190EC;
    case 257u: goto L_089190F0;
    case 258u: goto L_089190F4;
    case 259u: goto L_08919100;
    case 260u: goto L_08919110;
    case 261u: goto L_08919134;
    case 262u: goto L_08919168;
    case 263u: goto L_08919170;
    case 264u: goto L_08919190;
    case 265u: goto L_089191AC;
    case 266u: goto L_089191B8;
    case 267u: goto L_089191C8;
    case 268u: goto L_089191D4;
    case 269u: goto L_089191E0;
    case 270u: goto L_089191EC;
    case 271u: goto L_08919208;
    case 272u: goto L_08919214;
    case 273u: goto L_08919220;
    case 274u: goto L_08919230;
    case 275u: goto L_08919240;
    case 276u: goto L_08919244;
    case 277u: goto L_08919264;
    case 278u: goto L_08919298;
    case 279u: goto L_089192AC;
    case 280u: goto L_089192B4;
    case 281u: goto L_089192C4;
    case 282u: goto L_089192CC;
    case 283u: goto L_089192D8;
    case 284u: goto L_089192F8;
    case 285u: goto L_08919310;
    case 286u: goto L_0891931C;
    case 287u: goto L_0891932C;
    case 288u: goto L_08919338;
    case 289u: goto L_08919340;
    case 290u: goto L_0891936C;
    case 291u: goto L_08919380;
    case 292u: goto L_08919388;
    case 293u: goto L_08919398;
    case 294u: goto L_089193A0;
    case 295u: goto L_089193CC;
    case 296u: goto L_089193D8;
    case 297u: goto L_089193E8;
    case 298u: goto L_089193EC;
    case 299u: goto L_089193F8;
    case 300u: goto L_08919408;
    case 301u: goto L_08919428;
    case 302u: goto L_08919438;
    case 303u: goto L_08919448;
    case 304u: goto L_0891944C;
    case 305u: goto L_08919454;
    case 306u: goto L_08919488;
    case 307u: goto L_0891949C;
    case 308u: goto L_089194A4;
    case 309u: goto L_089194B0;
    case 310u: goto L_089194C8;
    case 311u: goto L_089194CC;
    case 312u: goto L_089194EC;
    case 313u: goto L_089194F8;
    case 314u: goto L_08919500;
    case 315u: goto L_0891950C;
    case 316u: goto L_08919518;
    case 317u: goto L_08919530;
    case 318u: goto L_0891953C;
    case 319u: goto L_0891954C;
    case 320u: goto L_08919554;
    case 321u: goto L_08919560;
    case 322u: goto L_08919574;
    case 323u: goto L_08919584;
    case 324u: goto L_08919588;
    case 325u: goto L_08919598;
    case 326u: goto L_089195B0;
    case 327u: goto L_089195B8;
    case 328u: goto L_089195E8;
    case 329u: goto L_08919618;
    case 330u: goto L_0891962C;
    case 331u: goto L_0891963C;
    case 332u: goto L_08919648;
    case 333u: goto L_08919658;
    case 334u: goto L_08919664;
    case 335u: goto L_08919674;
    case 336u: goto L_0891968C;
    case 337u: goto L_089196A4;
    case 338u: goto L_089196B0;
    case 339u: goto L_089196CC;
    case 340u: goto L_089196F4;
    case 341u: goto L_089196FC;
    case 342u: goto L_08919718;
    case 343u: goto L_0891971C;
    case 344u: goto L_08919728;
    case 345u: goto L_08919750;
    case 346u: goto L_08919794;
    case 347u: goto L_0891979C;
    case 348u: goto L_089197A4;
    case 349u: goto L_089197A8;
    case 350u: goto L_089197B0;
    case 351u: goto L_089197C0;
    case 352u: goto L_089197CC;
    case 353u: goto L_089197DC;
    case 354u: goto L_089197E8;
    case 355u: goto L_089197F4;
    case 356u: goto L_08919804;
    case 357u: goto L_08919820;
    case 358u: goto L_08919834;
    case 359u: goto L_08919840;
    case 360u: goto L_08919848;
    case 361u: goto L_08919858;
    case 362u: goto L_08919868;
    case 363u: goto L_08919878;
    case 364u: goto L_08919880;
    case 365u: goto L_08919890;
    case 366u: goto L_08919898;
    case 367u: goto L_089198A4;
    case 368u: goto L_089198B0;
    case 369u: goto L_089198BC;
    case 370u: goto L_089198C4;
    case 371u: goto L_089198F0;
    case 372u: goto L_08919904;
    case 373u: goto L_0891990C;
    case 374u: goto L_08919920;
    case 375u: goto L_08919928;
    case 376u: goto L_0891993C;
    case 377u: goto L_08919944;
    case 378u: goto L_08919960;
    case 379u: goto L_08919964;
    case 380u: goto L_08919970;
    case 381u: goto L_08919978;
    case 382u: goto L_0891999C;
    case 383u: goto L_089199A8;
    case 384u: goto L_089199B4;
    case 385u: goto L_089199CC;
    case 386u: goto L_089199DC;
    case 387u: goto L_089199E8;
    case 388u: goto L_089199F8;
    case 389u: goto L_08919A00;
    case 390u: goto L_08919A0C;
    case 391u: goto L_08919A1C;
    case 392u: goto L_08919A28;
    case 393u: goto L_08919A3C;
    case 394u: goto L_08919A48;
    case 395u: goto L_08919A54;
    case 396u: goto L_08919A5C;
    case 397u: goto L_08919A74;
    case 398u: goto L_08919A8C;
    case 399u: goto L_08919AA4;
    case 400u: goto L_08919AB0;
    case 401u: goto L_08919AB4;
    case 402u: goto L_08919AC0;
    case 403u: goto L_08919AD0;
    case 404u: goto L_08919ADC;
    case 405u: goto L_08919AF4;
    case 406u: goto L_08919AF8;
    case 407u: goto L_08919B08;
    case 408u: goto L_08919B18;
    case 409u: goto L_08919B24;
    case 410u: goto L_08919B38;
    case 411u: goto L_08919B44;
    case 412u: goto L_08919B50;
    case 413u: goto L_08919B58;
    case 414u: goto L_08919B70;
    case 415u: goto L_08919B88;
    case 416u: goto L_08919BA0;
    case 417u: goto L_08919BAC;
    case 418u: goto L_08919BB0;
    case 419u: goto L_08919BBC;
    case 420u: goto L_08919BCC;
    case 421u: goto L_08919BD8;
    case 422u: goto L_08919BF0;
    case 423u: goto L_08919BF4;
    case 424u: goto L_08919C04;
    case 425u: goto L_08919C10;
    case 426u: goto L_08919C20;
    case 427u: goto L_08919C2C;
    case 428u: goto L_08919C38;
    case 429u: goto L_08919C44;
    case 430u: goto L_08919C50;
    case 431u: goto L_08919C5C;
    case 432u: goto L_08919C68;
    case 433u: goto L_08919C74;
    case 434u: goto L_08919C80;
    case 435u: goto L_08919C8C;
    case 436u: goto L_08919C98;
    case 437u: goto L_08919CA4;
    case 438u: goto L_08919CB0;
    case 439u: goto L_08919CBC;
    case 440u: goto L_08919CC8;
    case 441u: goto L_08919CD4;
    case 442u: goto L_08919CE0;
    case 443u: goto L_08919CEC;
    case 444u: goto L_08919CF8;
    case 445u: goto L_08919D04;
    case 446u: goto L_08919D10;
    case 447u: goto L_08919D1C;
    case 448u: goto L_08919D28;
    case 449u: goto L_08919D34;
    case 450u: goto L_08919D40;
    case 451u: goto L_08919D4C;
    case 452u: goto L_08919D54;
    case 453u: goto L_08919D64;
    case 454u: goto L_08919D70;
    case 455u: goto L_08919D78;
    case 456u: goto L_08919D84;
    case 457u: goto L_08919D8C;
    case 458u: goto L_08919D98;
    case 459u: goto L_08919DA0;
    case 460u: goto L_08919DC0;
    case 461u: goto L_08919DCC;
    case 462u: goto L_08919DD8;
    case 463u: goto L_08919DE0;
    case 464u: goto L_08919DF0;
    case 465u: goto L_08919E04;
    case 466u: goto L_08919E0C;
    case 467u: goto L_08919E14;
    case 468u: goto L_08919E30;
    case 469u: goto L_08919E38;
    case 470u: goto L_08919E4C;
    case 471u: goto L_08919E54;
    case 472u: goto L_08919E58;
    case 473u: goto L_08919E64;
    case 474u: goto L_08919E6C;
    case 475u: goto L_08919E78;
    case 476u: goto L_08919E84;
    case 477u: goto L_08919E94;
    case 478u: goto L_08919E98;
    case 479u: goto L_08919EA4;
    case 480u: goto L_08919EB4;
    case 481u: goto L_08919EBC;
    case 482u: goto L_08919EC8;
    case 483u: goto L_08919ED4;
    case 484u: goto L_08919EE0;
    case 485u: goto L_08919EE8;
    case 486u: goto L_08919EF4;
    case 487u: goto L_08919F00;
    case 488u: goto L_08919F08;
    case 489u: goto L_08919F14;
    case 490u: goto L_08919F28;
    case 491u: goto L_08919F3C;
    case 492u: goto L_08919F44;
    case 493u: goto L_08919F50;
    case 494u: goto L_08919F5C;
    case 495u: goto L_08919F64;
    case 496u: goto L_08919F70;
    case 497u: goto L_08919F84;
    case 498u: goto L_08919F98;
    case 499u: goto L_08919FA0;
    case 500u: goto L_08919FB0;
    case 501u: goto L_08919FB8;
    case 502u: goto L_08919FC8;
    case 503u: goto L_08919FD0;
    case 504u: goto L_08919FD4;
    case 505u: goto L_08919FE4;
    case 506u: goto L_08919FF0;
    case 507u: goto L_08919FF8;
    case 508u: goto L_0891A004;
    case 509u: goto L_0891A01C;
    case 510u: goto L_0891A02C;
    case 511u: goto L_0891A03C;
    case 512u: goto L_0891A040;
    case 513u: goto L_0891A04C;
    case 514u: goto L_0891A054;
    case 515u: goto L_0891A064;
    case 516u: goto L_0891A070;
    case 517u: goto L_0891A078;
    case 518u: goto L_0891A084;
    case 519u: goto L_0891A08C;
    case 520u: goto L_0891A098;
    case 521u: goto L_0891A0A4;
    case 522u: goto L_0891A0AC;
    case 523u: goto L_0891A0C0;
    case 524u: goto L_0891A0C8;
    case 525u: goto L_0891A0D0;
    case 526u: goto L_0891A0DC;
    case 527u: goto L_0891A0E4;
    case 528u: goto L_0891A0E8;
    case 529u: goto L_0891A0F0;
    case 530u: goto L_0891A0F8;
    case 531u: goto L_0891A100;
    case 532u: goto L_0891A104;
    case 533u: goto L_0891A10C;
    case 534u: goto L_0891A118;
    case 535u: goto L_0891A11C;
    case 536u: goto L_0891A124;
    case 537u: goto L_0891A130;
    case 538u: goto L_0891A13C;
    case 539u: goto L_0891A148;
    case 540u: goto L_0891A150;
    case 541u: goto L_0891A160;
    case 542u: goto L_0891A168;
    case 543u: goto L_0891A174;
    case 544u: goto L_0891A180;
    case 545u: goto L_0891A18C;
    case 546u: goto L_0891A198;
    case 547u: goto L_0891A1A0;
    case 548u: goto L_0891A1AC;
    case 549u: goto L_0891A1B4;
    case 550u: goto L_0891A1C4;
    case 551u: goto L_0891A1D0;
    case 552u: goto L_0891A1D8;
    case 553u: goto L_0891A1E4;
    case 554u: goto L_0891A1EC;
    case 555u: goto L_0891A1F8;
    case 556u: goto L_0891A204;
    case 557u: goto L_0891A210;
    case 558u: goto L_0891A21C;
    case 559u: goto L_0891A224;
    case 560u: goto L_0891A230;
    case 561u: goto L_0891A238;
    case 562u: goto L_0891A244;
    case 563u: goto L_0891A250;
    case 564u: goto L_0891A264;
    case 565u: goto L_0891A270;
    case 566u: goto L_0891A27C;
    case 567u: goto L_0891A288;
    case 568u: goto L_0891A290;
    case 569u: goto L_0891A29C;
    case 570u: goto L_0891A2A4;
    case 571u: goto L_0891A2B4;
    case 572u: goto L_0891A2D0;
    case 573u: goto L_0891A2DC;
    case 574u: goto L_0891A2E8;
    case 575u: goto L_0891A2F4;
    case 576u: goto L_0891A300;
    case 577u: goto L_0891A30C;
    case 578u: goto L_0891A318;
    case 579u: goto L_0891A324;
    case 580u: goto L_0891A330;
    case 581u: goto L_0891A33C;
    case 582u: goto L_0891A348;
    case 583u: goto L_0891A354;
    case 584u: goto L_0891A360;
    case 585u: goto L_0891A36C;
    case 586u: goto L_0891A378;
    case 587u: goto L_0891A37C;
    case 588u: goto L_0891A388;
    case 589u: goto L_0891A394;
    case 590u: goto L_0891A39C;
    case 591u: goto L_0891A3AC;
    case 592u: goto L_0891A3B4;
    case 593u: goto L_0891A3C4;
    case 594u: goto L_0891A3D0;
    case 595u: goto L_0891A3D8;
    case 596u: goto L_0891A3E4;
    case 597u: goto L_0891A3EC;
    case 598u: goto L_0891A3F8;
    case 599u: goto L_0891A404;
    case 600u: goto L_0891A410;
    case 601u: goto L_0891A41C;
    case 602u: goto L_0891A424;
    case 603u: goto L_0891A430;
    case 604u: goto L_0891A438;
    case 605u: goto L_0891A444;
    case 606u: goto L_0891A450;
    case 607u: goto L_0891A45C;
    case 608u: goto L_0891A468;
    case 609u: goto L_0891A470;
    case 610u: goto L_0891A47C;
    case 611u: goto L_0891A484;
    case 612u: goto L_0891A490;
    case 613u: goto L_0891A49C;
    case 614u: goto L_0891A4A8;
    case 615u: goto L_0891A4B4;
    case 616u: goto L_0891A4BC;
    case 617u: goto L_0891A4C8;
    case 618u: goto L_0891A4D0;
    case 619u: goto L_0891A4DC;
    case 620u: goto L_0891A4E8;
    case 621u: goto L_0891A4F4;
    case 622u: goto L_0891A500;
    case 623u: goto L_0891A508;
    case 624u: goto L_0891A514;
    case 625u: goto L_0891A51C;
    case 626u: goto L_0891A528;
    case 627u: goto L_0891A534;
    case 628u: goto L_0891A540;
    case 629u: goto L_0891A54C;
    case 630u: goto L_0891A554;
    case 631u: goto L_0891A560;
    case 632u: goto L_0891A568;
    case 633u: goto L_0891A574;
    case 634u: goto L_0891A57C;
    case 635u: goto L_0891A59C;
    case 636u: goto L_0891A5A8;
    case 637u: goto L_0891A5B4;
    case 638u: goto L_0891A5BC;
    case 639u: goto L_0891A5CC;
    case 640u: goto L_0891A5DC;
    case 641u: goto L_0891A5E8;
    case 642u: goto L_0891A5F8;
    case 643u: goto L_0891A60C;
    case 644u: goto L_0891A614;
    case 645u: goto L_0891A61C;
    case 646u: goto L_0891A638;
    case 647u: goto L_0891A640;
    case 648u: goto L_0891A654;
    case 649u: goto L_0891A65C;
    case 650u: goto L_0891A668;
    case 651u: goto L_0891A670;
    case 652u: goto L_0891A680;
    case 653u: goto L_0891A68C;
    case 654u: goto L_0891A694;
    case 655u: goto L_0891A6A0;
    case 656u: goto L_0891A6A8;
    case 657u: goto L_0891A6B8;
    case 658u: goto L_0891A6C0;
    case 659u: goto L_0891A6C8;
    case 660u: goto L_0891A6D4;
    case 661u: goto L_0891A6E0;
    case 662u: goto L_0891A6E8;
    case 663u: goto L_0891A6F8;
    case 664u: goto L_0891A700;
    case 665u: goto L_0891A70C;
    case 666u: goto L_0891A718;
    case 667u: goto L_0891A720;
    case 668u: goto L_0891A728;
    case 669u: goto L_0891A734;
    case 670u: goto L_0891A740;
    case 671u: goto L_0891A748;
    case 672u: goto L_0891A758;
    case 673u: goto L_0891A760;
    case 674u: goto L_0891A76C;
    case 675u: goto L_0891A778;
    case 676u: goto L_0891A784;
    case 677u: goto L_0891A78C;
    case 678u: goto L_0891A798;
    case 679u: goto L_0891A7A0;
    case 680u: goto L_0891A7AC;
    case 681u: goto L_0891A7B8;
    case 682u: goto L_0891A7CC;
    case 683u: goto L_0891A7D8;
    case 684u: goto L_0891A7E4;
    case 685u: goto L_0891A7EC;
    case 686u: goto L_0891A7FC;
    case 687u: goto L_0891A804;
    case 688u: goto L_0891A810;
    case 689u: goto L_0891A81C;
    case 690u: goto L_0891A828;
    case 691u: goto L_0891A830;
    case 692u: goto L_0891A83C;
    case 693u: goto L_0891A844;
    case 694u: goto L_0891A850;
    case 695u: goto L_0891A85C;
    case 696u: goto L_0891A870;
    case 697u: goto L_0891A87C;
    case 698u: goto L_0891A888;
    case 699u: goto L_0891A890;
    case 700u: goto L_0891A8A0;
    case 701u: goto L_0891A8A8;
    case 702u: goto L_0891A8B4;
    case 703u: goto L_0891A8C0;
    case 704u: goto L_0891A8C8;
    case 705u: goto L_0891A8D0;
    case 706u: goto L_0891A8DC;
    case 707u: goto L_0891A8E8;
    case 708u: goto L_0891A8F0;
    case 709u: goto L_0891A900;
    case 710u: goto L_0891A908;
    case 711u: goto L_0891A914;
    case 712u: goto L_0891A920;
    case 713u: goto L_0891A928;
    case 714u: goto L_0891A934;
    case 715u: goto L_0891A940;
    case 716u: goto L_0891A948;
    case 717u: goto L_0891A958;
    case 718u: goto L_0891A960;
    case 719u: goto L_0891A970;
    case 720u: goto L_0891A97C;
    case 721u: goto L_0891A984;
    case 722u: goto L_0891A990;
    case 723u: goto L_0891A998;
    case 724u: goto L_0891A9A4;
    case 725u: goto L_0891A9B0;
    case 726u: goto L_0891A9BC;
    case 727u: goto L_0891A9C4;
    case 728u: goto L_0891A9D0;
    case 729u: goto L_0891A9D8;
    case 730u: goto L_0891A9F0;
    case 731u: goto L_0891A9FC;
    case 732u: goto L_0891AA08;
    case 733u: goto L_0891AA10;
    case 734u: goto L_0891AA20;
    case 735u: goto L_0891AA28;
    case 736u: goto L_0891AA38;
    case 737u: goto L_0891AA40;
    case 738u: goto L_0891AA50;
    case 739u: goto L_0891AA58;
    case 740u: goto L_0891AA64;
    case 741u: goto L_0891AA78;
    case 742u: goto L_0891AA84;
    case 743u: goto L_0891AA90;
    case 744u: goto L_0891AA98;
    case 745u: goto L_0891AAA8;
    case 746u: goto L_0891AAB0;
    case 747u: goto L_0891AAC0;
    case 748u: goto L_0891AAC8;
    case 749u: goto L_0891AAD8;
    case 750u: goto L_0891AAE0;
    case 751u: goto L_0891AAEC;
    case 752u: goto L_0891AB08;
    case 753u: goto L_0891AB0C;
    case 754u: goto L_0891AB18;
    case 755u: goto L_0891AB28;
    case 756u: goto L_0891AB38;
    case 757u: goto L_0891AB44;
    case 758u: goto L_0891AB58;
    case 759u: goto L_0891AB6C;
    case 760u: goto L_0891AB78;
    case 761u: goto L_0891AB8C;
    case 762u: goto L_0891AB98;
    case 763u: goto L_0891ABA4;
    case 764u: goto L_0891ABAC;
    case 765u: goto L_0891ABB4;
    case 766u: goto L_0891ABC4;
    case 767u: goto L_0891ABC8;
    case 768u: goto L_0891ABF8;
    case 769u: goto L_0891AC08;
    case 770u: goto L_0891AC14;
    case 771u: goto L_0891AC2C;
    case 772u: goto L_0891AC38;
    case 773u: goto L_0891AC40;
    case 774u: goto L_0891AC44;
    case 775u: goto L_0891AC54;
    case 776u: goto L_0891AC64;
    case 777u: goto L_0891AC70;
    case 778u: goto L_0891AC88;
    case 779u: goto L_0891AC94;
    case 780u: goto L_0891AC9C;
    case 781u: goto L_0891ACA0;
    case 782u: goto L_0891ACB0;
    case 783u: goto L_0891ACC0;
    case 784u: goto L_0891ACCC;
    case 785u: goto L_0891ACE4;
    case 786u: goto L_0891ACF0;
    case 787u: goto L_0891ACF8;
    case 788u: goto L_0891ACFC;
    case 789u: goto L_0891AD0C;
    case 790u: goto L_0891AD1C;
    case 791u: goto L_0891AD28;
    case 792u: goto L_0891AD40;
    case 793u: goto L_0891AD4C;
    case 794u: goto L_0891AD54;
    case 795u: goto L_0891AD58;
    case 796u: goto L_0891AD68;
    case 797u: goto L_0891AD78;
    case 798u: goto L_0891AD84;
    case 799u: goto L_0891AD9C;
    case 800u: goto L_0891ADA8;
    case 801u: goto L_0891ADB0;
    case 802u: goto L_0891ADB4;
    case 803u: goto L_0891ADC4;
    case 804u: goto L_0891AE20;
    case 805u: goto L_0891AE58;
    case 806u: goto L_0891AE84;
    case 807u: goto L_0891AEDC;
    case 808u: goto L_0891AEE4;
    case 809u: goto L_0891AF14;
    case 810u: goto L_0891AF24;
    case 811u: goto L_0891AF38;
    case 812u: goto L_0891AF40;
    case 813u: goto L_0891AF70;
    case 814u: goto L_0891AF9C;
    case 815u: goto L_0891AFB8;
    case 816u: goto L_0891AFD4;
    case 817u: goto L_0891B004;
    case 818u: goto L_0891B01C;
    case 819u: goto L_0891B068;
    case 820u: goto L_0891B098;
    case 821u: goto L_0891B0B4;
    case 822u: goto L_0891B0BC;
    case 823u: goto L_0891B0CC;
    case 824u: goto L_0891B0D4;
    case 825u: goto L_0891B0F4;
    case 826u: goto L_0891B100;
    case 827u: goto L_0891B10C;
    case 828u: goto L_0891B110;
    case 829u: goto L_0891B11C;
    case 830u: goto L_0891B130;
    case 831u: goto L_0891B13C;
    case 832u: goto L_0891B14C;
    case 833u: goto L_0891B168;
    case 834u: goto L_0891B170;
    case 835u: goto L_0891B178;
    case 836u: goto L_0891B184;
    case 837u: goto L_0891B190;
    case 838u: goto L_0891B1A0;
    case 839u: goto L_0891B1B0;
    case 840u: goto L_0891B1D4;
    case 841u: goto L_0891B20C;
    case 842u: goto L_0891B218;
    case 843u: goto L_0891B224;
    case 844u: goto L_0891B228;
    case 845u: goto L_0891B234;
    case 846u: goto L_0891B248;
    case 847u: goto L_0891B254;
    case 848u: goto L_0891B264;
    case 849u: goto L_0891B280;
    case 850u: goto L_0891B288;
    case 851u: goto L_0891B290;
    case 852u: goto L_0891B29C;
    case 853u: goto L_0891B2A8;
    case 854u: goto L_0891B2B8;
    case 855u: goto L_0891B2DC;
    case 856u: goto L_0891B2FC;
    case 857u: goto L_0891B314;
    case 858u: goto L_0891B32C;
    case 859u: goto L_0891B330;
    case 860u: goto L_0891B33C;
    case 861u: goto L_0891B354;
    case 862u: goto L_0891B384;
    case 863u: goto L_0891B390;
    case 864u: goto L_0891B3B0;
    case 865u: goto L_0891B3CC;
    case 866u: goto L_0891B3D8;
    case 867u: goto L_0891B3E8;
    case 868u: goto L_0891B3F4;
    case 869u: goto L_0891B400;
    case 870u: goto L_0891B40C;
    case 871u: goto L_0891B424;
    case 872u: goto L_0891B428;
    case 873u: goto L_0891B434;
    case 874u: goto L_0891B444;
    case 875u: goto L_0891B464;
    case 876u: goto L_0891B4AC;
    case 877u: goto L_0891B4C0;
    case 878u: goto L_0891B4D4;
    case 879u: goto L_0891B4F8;
    case 880u: goto L_0891B51C;
    case 881u: goto L_0891B538;
    case 882u: goto L_0891B54C;
    case 883u: goto L_0891B56C;
    case 884u: goto L_0891B588;
    case 885u: goto L_0891B5A0;
    case 886u: goto L_0891B5B4;
    case 887u: goto L_0891B5C0;
    case 888u: goto L_0891B5E0;
    case 889u: goto L_0891B5F8;
    case 890u: goto L_0891B604;
    case 891u: goto L_0891B614;
    case 892u: goto L_0891B620;
    case 893u: goto L_0891B62C;
    case 894u: goto L_0891B638;
    case 895u: goto L_0891B64C;
    case 896u: goto L_0891B718;
    case 897u: goto L_0891B73C;
    case 898u: goto L_0891B758;
    case 899u: goto L_0891B76C;
    case 900u: goto L_0891B778;
    case 901u: goto L_0891B78C;
    case 902u: goto L_0891B790;
    case 903u: goto L_0891B79C;
    case 904u: goto L_0891B7A0;
    case 905u: goto L_0891B7A4;
    case 906u: goto L_0891B7B4;
    case 907u: goto L_0891B7C0;
    case 908u: goto L_0891B7E0;
    case 909u: goto L_0891B7F4;
    case 910u: goto L_0891B804;
    case 911u: goto L_0891B81C;
    case 912u: goto L_0891B830;
    case 913u: goto L_0891B83C;
    case 914u: goto L_0891B848;
    case 915u: goto L_0891B85C;
    case 916u: goto L_0891B870;
    case 917u: goto L_0891B874;
    case 918u: goto L_0891B880;
    case 919u: goto L_0891B884;
    case 920u: goto L_0891B894;
    case 921u: goto L_0891B89C;
    case 922u: goto L_0891B8A8;
    case 923u: goto L_0891B8B4;
    case 924u: goto L_0891B8C4;
    case 925u: goto L_0891B8F0;
    case 926u: goto L_0891B8F4;
    case 927u: goto L_0891B900;
    case 928u: goto L_0891B920;
    case 929u: goto L_0891B930;
    case 930u: goto L_0891B940;
    case 931u: goto L_0891B950;
    case 932u: goto L_0891B984;
    case 933u: goto L_0891B994;
    case 934u: goto L_0891B9A4;
    case 935u: goto L_0891B9D0;
    case 936u: goto L_0891B9DC;
    case 937u: goto L_0891BA08;
    case 938u: goto L_0891BA18;
    case 939u: goto L_0891BA24;
    case 940u: goto L_0891BA30;
    case 941u: goto L_0891BA40;
    case 942u: goto L_0891BA54;
    case 943u: goto L_0891BA60;
    case 944u: goto L_0891BA74;
    case 945u: goto L_0891BA80;
    case 946u: goto L_0891BA94;
    case 947u: goto L_0891BAB8;
    case 948u: goto L_0891BAD0;
    case 949u: goto L_0891BAE0;
    case 950u: goto L_0891BAE8;
    case 951u: goto L_0891BAF0;
    case 952u: goto L_0891BB00;
    case 953u: goto L_0891BB0C;
    case 954u: goto L_0891BB14;
    case 955u: goto L_0891BB30;
    case 956u: goto L_0891BB64;
    case 957u: goto L_0891BBA4;
    case 958u: goto L_0891BBB0;
    case 959u: goto L_0891BBBC;
    case 960u: goto L_0891BBE8;
    case 961u: goto L_0891BBEC;
    case 962u: goto L_0891BBF8;
    case 963u: goto L_0891BC00;
    case 964u: goto L_0891BC0C;
    case 965u: goto L_0891BC20;
    case 966u: goto L_0891BC30;
    case 967u: goto L_0891BC3C;
    case 968u: goto L_0891BC40;
    case 969u: goto L_0891BC64;
    case 970u: goto L_0891BC80;
    case 971u: goto L_0891BC90;
    case 972u: goto L_0891BCAC;
    case 973u: goto L_0891BCBC;
    case 974u: goto L_0891BCEC;
    case 975u: goto L_0891BCF4;
    case 976u: goto L_0891BCFC;
    case 977u: goto L_0891BD0C;
    case 978u: goto L_0891BD1C;
    case 979u: goto L_0891BD2C;
    case 980u: goto L_0891BD34;
    case 981u: goto L_0891BD44;
    case 982u: goto L_0891BD54;
    case 983u: goto L_0891BD60;
    case 984u: goto L_0891BD74;
    case 985u: goto L_0891BD88;
    case 986u: goto L_0891BD9C;
    case 987u: goto L_0891BDB0;
    case 988u: goto L_0891BDC4;
    case 989u: goto L_0891BDD0;
    case 990u: goto L_0891BDF0;
    case 991u: goto L_0891BDFC;
    case 992u: goto L_0891BE08;
    case 993u: goto L_0891BE14;
    case 994u: goto L_0891BE34;
    case 995u: goto L_0891BE40;
    case 996u: goto L_0891BE4C;
    case 997u: goto L_0891BE58;
    case 998u: goto L_0891BE78;
    case 999u: goto L_0891BE84;
    case 1000u: goto L_0891BE90;
    case 1001u: goto L_0891BE9C;
    case 1002u: goto L_0891BEBC;
    case 1003u: goto L_0891BEC8;
    case 1004u: goto L_0891BED4;
    case 1005u: goto L_0891BEF0;
    case 1006u: goto L_0891BF08;
    case 1007u: goto L_0891BF20;
    case 1008u: goto L_0891BF3C;
    case 1009u: goto L_0891BF54;
    case 1010u: goto L_0891BFA4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08918004:
    ctx.set_gpr(3, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918014;
      }
      goto L_08918010;
    }
L_08918010:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_08918014;
L_08918014:
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918010;
      }
      goto L_08918020;
    }
L_08918020:
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891803C;
      }
      goto L_0891802C;
    }
L_0891802C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 1088u, 0x08917FDCu>(ctx, &aot_mem); return;
      }
      goto L_0891803C;
    }
L_0891803C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x0891804Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0895CACCu>(ctx, &aot_mem) && ctx.pc == 0x0891804Cu) goto L_0891804C;
    return;
L_0891804C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    goto L_08918050;
L_08918050:
    ctx.set_gpr(2, ctx.gpr[17] & 128u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089180D8;
      }
      goto L_0891805C;
    }
L_0891805C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08918064;
L_08918064:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089180B4;
      }
      goto L_08918080;
    }
L_08918080:
    ctx.set_gpr(2, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089180C4;
      }
      goto L_0891808C;
    }
L_0891808C:
    ctx.set_gpr(3, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891809C;
      }
      goto L_08918098;
    }
L_08918098:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_0891809C;
L_0891809C:
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918098;
      }
      goto L_089180A8;
    }
L_089180A8:
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089180C4;
      }
      goto L_089180B4;
    }
L_089180B4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918064;
      }
      goto L_089180C4;
    }
L_089180C4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x089180D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0895CACCu>(ctx, &aot_mem) && ctx.pc == 0x089180D4u) goto L_089180D4;
    return;
L_089180D4:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_089180D8;
L_089180D8:
    ctx.set_gpr(2, ctx.gpr[17] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918160;
      }
      goto L_089180E4;
    }
L_089180E4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_089180EC;
L_089180EC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891813C;
      }
      goto L_08918108;
    }
L_08918108:
    ctx.set_gpr(2, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891814C;
      }
      goto L_08918114;
    }
L_08918114:
    ctx.set_gpr(3, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918124;
      }
      goto L_08918120;
    }
L_08918120:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_08918124;
L_08918124:
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918120;
      }
      goto L_08918130;
    }
L_08918130:
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891814C;
      }
      goto L_0891813C;
    }
L_0891813C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089180EC;
      }
      goto L_0891814C;
    }
L_0891814C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x0891815Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0895CACCu>(ctx, &aot_mem) && ctx.pc == 0x0891815Cu) goto L_0891815C;
    return;
L_0891815C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    goto L_08918160;
L_08918160:
    ctx.set_gpr(2, ctx.gpr[17] & 256u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089181E8;
      }
      goto L_0891816C;
    }
L_0891816C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08918174;
L_08918174:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089181C4;
      }
      goto L_08918190;
    }
L_08918190:
    ctx.set_gpr(2, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089181D4;
      }
      goto L_0891819C;
    }
L_0891819C:
    ctx.set_gpr(3, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089181AC;
      }
      goto L_089181A8;
    }
L_089181A8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_089181AC;
L_089181AC:
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089181A8;
      }
      goto L_089181B8;
    }
L_089181B8:
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089181D4;
      }
      goto L_089181C4;
    }
L_089181C4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918174;
      }
      goto L_089181D4;
    }
L_089181D4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x089181E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0895CACCu>(ctx, &aot_mem) && ctx.pc == 0x089181E4u) goto L_089181E4;
    return;
L_089181E4:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    goto L_089181E8;
L_089181E8:
    ctx.set_gpr(2, ctx.gpr[17] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089182A8;
      }
      goto L_089181F4;
    }
L_089181F4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_089181FC;
L_089181FC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891824C;
      }
      goto L_08918218;
    }
L_08918218:
    ctx.set_gpr(2, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891825C;
      }
      goto L_08918224;
    }
L_08918224:
    ctx.set_gpr(3, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918234;
      }
      goto L_08918230;
    }
L_08918230:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_08918234;
L_08918234:
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918230;
      }
      goto L_08918240;
    }
L_08918240:
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891825C;
      }
      goto L_0891824C;
    }
L_0891824C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089181FC;
      }
      goto L_0891825C;
    }
L_0891825C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08918268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0895CACCu>(ctx, &aot_mem) && ctx.pc == 0x08918268u) goto L_08918268;
    return;
L_08918268:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08918278;
L_08918278:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089182A4;
      }
      goto L_08918298;
    }
L_08918298:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918278;
      }
      goto L_089182A4;
    }
L_089182A4:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    goto L_089182A8;
L_089182A8:
    ctx.set_gpr(2, ctx.gpr[17] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918330;
      }
      goto L_089182B4;
    }
L_089182B4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_089182BC;
L_089182BC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891830C;
      }
      goto L_089182D8;
    }
L_089182D8:
    ctx.set_gpr(2, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891831C;
      }
      goto L_089182E4;
    }
L_089182E4:
    ctx.set_gpr(3, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089182F4;
      }
      goto L_089182F0;
    }
L_089182F0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_089182F4;
L_089182F4:
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089182F0;
      }
      goto L_08918300;
    }
L_08918300:
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891831C;
      }
      goto L_0891830C;
    }
L_0891830C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089182BC;
      }
      goto L_0891831C;
    }
L_0891831C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x0891832Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0895CACCu>(ctx, &aot_mem) && ctx.pc == 0x0891832Cu) goto L_0891832C;
    return;
L_0891832C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    goto L_08918330;
L_08918330:
    ctx.set_gpr(2, ctx.gpr[17] & 32u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089183C0;
      }
      goto L_0891833C;
    }
L_0891833C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08918344;
L_08918344:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918394;
      }
      goto L_08918360;
    }
L_08918360:
    ctx.set_gpr(2, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089183A4;
      }
      goto L_0891836C;
    }
L_0891836C:
    ctx.set_gpr(3, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891837C;
      }
      goto L_08918378;
    }
L_08918378:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_0891837C;
L_0891837C:
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918378;
      }
      goto L_08918388;
    }
L_08918388:
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089183A4;
      }
      goto L_08918394;
    }
L_08918394:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918344;
      }
      goto L_089183A4;
    }
L_089183A4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089183BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089183BCu) goto L_089183BC;
    return;
L_089183BC:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_089183C0;
L_089183C0:
    ctx.set_gpr(2, ctx.gpr[17] & 32768u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089185B4;
      }
      goto L_089183CC;
    }
L_089183CC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_089183D4;
L_089183D4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918400;
      }
      goto L_089183F4;
    }
L_089183F4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089183D4;
      }
      goto L_08918400;
    }
L_08918400:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    goto L_08918404;
L_08918404:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08918414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 17u, 0x0891C184u>(ctx, &aot_mem) && ctx.pc == 0x08918414u) goto L_08918414;
    return;
L_08918414:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891851C;
      }
      goto L_08918424;
    }
L_08918424:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089184D0;
      }
      goto L_08918430;
    }
L_08918430:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891844C;
      }
      goto L_0891843C;
    }
L_0891843C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089185A8;
      }
      goto L_08918444;
    }
L_08918444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089185A8;
      }
      goto L_0891844C;
    }
L_0891844C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08918454;
L_08918454:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089184A4;
      }
      goto L_08918470;
    }
L_08918470:
    ctx.set_gpr(2, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089184B4;
      }
      goto L_0891847C;
    }
L_0891847C:
    ctx.set_gpr(3, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891848C;
      }
      goto L_08918488;
    }
L_08918488:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_0891848C;
L_0891848C:
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918488;
      }
      goto L_08918498;
    }
L_08918498:
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089184B4;
      }
      goto L_089184A4;
    }
L_089184A4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918454;
      }
      goto L_089184B4;
    }
L_089184B4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089184C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 25u, 0x0891C1E0u>(ctx, &aot_mem) && ctx.pc == 0x089184C8u) goto L_089184C8;
    return;
L_089184C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089185A8;
      }
      goto L_089184D0;
    }
L_089184D0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_089184D8;
L_089184D8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918504;
      }
      goto L_089184F8;
    }
L_089184F8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089184D8;
      }
      goto L_08918504;
    }
L_08918504:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08918514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 32u, 0x0891C254u>(ctx, &aot_mem) && ctx.pc == 0x08918514u) goto L_08918514;
    return;
L_08918514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089185A8;
      }
      goto L_0891851C;
    }
L_0891851C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08918524;
L_08918524:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918574;
      }
      goto L_08918540;
    }
L_08918540:
    ctx.set_gpr(2, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918584;
      }
      goto L_0891854C;
    }
L_0891854C:
    ctx.set_gpr(3, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891855C;
      }
      goto L_08918558;
    }
L_08918558:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_0891855C;
L_0891855C:
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918558;
      }
      goto L_08918568;
    }
L_08918568:
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918584;
      }
      goto L_08918574;
    }
L_08918574:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918524;
      }
      goto L_08918584;
    }
L_08918584:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08918594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0895CACCu>(ctx, &aot_mem) && ctx.pc == 0x08918594u) goto L_08918594;
    return;
L_08918594:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089185A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 39u, 0x0891C2C8u>(ctx, &aot_mem) && ctx.pc == 0x089185A8u) goto L_089185A8;
    return;
L_089185A8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918404;
      }
      goto L_089185B4;
    }
L_089185B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089185D0;
      }
      goto L_089185C0;
    }
L_089185C0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089185D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089185D0u) goto L_089185D0;
    return;
L_089185D0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089185D4;
L_089185D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089185F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_0891860C;
L_0891860C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918638;
      }
      goto L_0891862C;
    }
L_0891862C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891860C;
      }
      goto L_08918638;
    }
L_08918638:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < 32 ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08918650:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_08918664;
L_08918664:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918690;
      }
      goto L_08918684;
    }
L_08918684:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918664;
      }
      goto L_08918690;
    }
L_08918690:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089186A8;
      }
      goto L_0891869C;
    }
L_0891869C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918764;
      }
      goto L_089186A8;
    }
L_089186A8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12984)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089186CC;
      }
      goto L_089186C0;
    }
L_089186C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918764;
      }
      goto L_089186CC;
    }
L_089186CC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_089186D8;
L_089186D8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918704;
      }
      goto L_089186F8;
    }
L_089186F8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089186D8;
      }
      goto L_08918704;
    }
L_08918704:
    ctx.set_gpr(2, ctx.gpr[7] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918754;
      }
      goto L_08918710;
    }
L_08918710:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918760;
      }
      goto L_08918754;
    }
L_08918754:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918764;
      }
      goto L_08918760;
    }
L_08918760:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08918764;
L_08918764:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891876C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_08918784;
L_08918784:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089187B0;
      }
      goto L_089187A4;
    }
L_089187A4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918784;
      }
      goto L_089187B0;
    }
L_089187B0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089187C8;
      }
      goto L_089187BC;
    }
L_089187BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089188C4;
      }
      goto L_089187C8;
    }
L_089187C8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12984)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089187EC;
      }
      goto L_089187E0;
    }
L_089187E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089188C4;
      }
      goto L_089187EC;
    }
L_089187EC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_089187F8;
L_089187F8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918824;
      }
      goto L_08918818;
    }
L_08918818:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089187F8;
      }
      goto L_08918824;
    }
L_08918824:
    ctx.set_gpr(2, ctx.gpr[7] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089188B4;
      }
      goto L_08918830;
    }
L_08918830:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    goto L_08918878;
L_08918878:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[2] & 127u);
    ctx.set_gpr(3, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[2] & 128u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089188C0;
      }
      goto L_089188A8;
    }
L_089188A8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918878;
      }
      goto L_089188B4;
    }
L_089188B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089188C4;
      }
      goto L_089188C0;
    }
L_089188C0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089188C4;
L_089188C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089188D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(30, ctx.gpr[7] + 0u);
    ctx.set_gpr(21, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[9]);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    ctx.set_gpr(23, ctx.gpr[11] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08918930u);
    // nop
    goto L_0891BEF0;
L_08918930:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08918954;
      }
      goto L_0891894C;
    }
L_0891894C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_08918954;
L_08918954:
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918974;
      }
      goto L_08918960;
    }
L_08918960:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08918974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08918974u) goto L_08918974;
    return;
L_08918974:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089189D4;
      }
      goto L_089189B4;
    }
L_089189B4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089189CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089189CCu) goto L_089189CC;
    return;
L_089189CC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089189D4;
L_089189D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089189B4;
      }
      goto L_089189E4;
    }
L_089189E4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08918A00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08918A00u) goto L_08918A00;
    return;
L_08918A00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918BB8;
      }
      goto L_08918A08;
    }
L_08918A08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918A48;
      }
      goto L_08918A20;
    }
L_08918A20:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08918A48;
      }
      goto L_08918A28;
    }
L_08918A28:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918A48;
      }
      goto L_08918A34;
    }
L_08918A34:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08918A48;
L_08918A48:
    ctx.set_gpr(1, ctx.gpr[4] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918B80;
      }
      goto L_08918A54;
    }
L_08918A54:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32268));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08918A70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918AAC;
      }
      goto L_08918AA4;
    }
L_08918AA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08918AAC;
L_08918AAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918B80;
      }
      goto L_08918AC4;
    }
L_08918AC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918B80;
      }
      goto L_08918AD4;
    }
L_08918AD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918B80;
      }
      goto L_08918AFC;
    }
L_08918AFC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08918B38;
      }
      goto L_08918B0C;
    }
L_08918B0C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08918B28;
      }
      goto L_08918B1C;
    }
L_08918B1C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08918B38;
      }
      goto L_08918B28;
    }
L_08918B28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08918B38;
L_08918B38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08918B80;
      }
      goto L_08918B48;
    }
L_08918B48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08918B70;
      }
      goto L_08918B64;
    }
L_08918B64:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08918B80;
      }
      goto L_08918B70;
    }
L_08918B70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08918B80;
L_08918B80:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08918B98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08918B98u) goto L_08918B98;
    return;
L_08918B98:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918BB8;
      }
      goto L_08918BAC;
    }
L_08918BAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089189E4;
      }
      goto L_08918BB8;
    }
L_08918BB8:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918C74;
      }
      goto L_08918BC4;
    }
L_08918BC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08918C70;
      }
      goto L_08918BE4;
    }
L_08918BE4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08918BFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08918BFCu) goto L_08918BFC;
    return;
L_08918BFC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08918C70;
      }
      goto L_08918C08;
    }
L_08918C08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918C70;
      }
      goto L_08918C1C;
    }
L_08918C1C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918C70;
      }
      goto L_08918C28;
    }
L_08918C28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08918C70;
      }
      goto L_08918C38;
    }
L_08918C38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08918C70;
      }
      goto L_08918C44;
    }
L_08918C44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08918C70;
      }
      goto L_08918C50;
    }
L_08918C50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08918C70;
      }
      goto L_08918C5C;
    }
L_08918C5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08918C70;
L_08918C70:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08918C74;
L_08918C74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918BC4;
      }
      goto L_08918C84;
    }
L_08918C84:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08918C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08918C94u) goto L_08918C94;
    return;
L_08918C94:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08918CC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(30, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(18, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    ctx.set_gpr(23, ctx.gpr[11] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08918D28u);
    // nop
    goto L_0891BEF0;
L_08918D28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08918D3C;
      }
      goto L_08918D34;
    }
L_08918D34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_08918D3C;
L_08918D3C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918D74;
      }
      goto L_08918D54;
    }
L_08918D54:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08918D6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08918D6Cu) goto L_08918D6C;
    return;
L_08918D6C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08918D74;
L_08918D74:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918D54;
      }
      goto L_08918D80;
    }
L_08918D80:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08918D9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08918D9Cu) goto L_08918D9C;
    return;
L_08918D9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918E6C;
      }
      goto L_08918DA4;
    }
L_08918DA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918E34;
      }
      goto L_08918DB0;
    }
L_08918DB0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918E34;
      }
      goto L_08918DBC;
    }
L_08918DBC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08918DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08918DC8u) goto L_08918DC8;
    return;
L_08918DC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918E34;
      }
      goto L_08918DD0;
    }
L_08918DD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08918E18;
      }
      goto L_08918DE0;
    }
L_08918DE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08918DF4;
      }
      goto L_08918DEC;
    }
L_08918DEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918E34;
      }
      goto L_08918DF4;
    }
L_08918DF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918E34;
      }
      goto L_08918E18;
    }
L_08918E18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08918E34;
L_08918E34:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08918E4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08918E4Cu) goto L_08918E4C;
    return;
L_08918E4C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918E6C;
      }
      goto L_08918E60;
    }
L_08918E60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08918D80;
      }
      goto L_08918E6C;
    }
L_08918E6C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08918E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08918E7Cu) goto L_08918E7C;
    return;
L_08918E7C:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08918EB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08918EE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08918EE8u) goto L_08918EE8;
    return;
L_08918EE8:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    goto L_08918EF8;
L_08918EF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08918F70;
      }
      goto L_08918F18;
    }
L_08918F18:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08918F34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08918F34u) goto L_08918F34;
    return;
L_08918F34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08918F4C;
      }
      goto L_08918F40;
    }
L_08918F40:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918F74;
      }
      goto L_08918F4C;
    }
L_08918F4C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918F60;
      }
      goto L_08918F5C;
    }
L_08918F5C:
    ctx.set_gpr(19, 0u + 0u);
    goto L_08918F60;
L_08918F60:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918EF8;
      }
      goto L_08918F70;
    }
L_08918F70:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08918F74;
L_08918F74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08918F9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918FBC;
      }
      goto L_08918FB0;
    }
L_08918FB0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08918FC8;
      }
      goto L_08918FBC;
    }
L_08918FBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891902C;
      }
      goto L_08918FC8;
    }
L_08918FC8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918FEC;
      }
      goto L_08918FE4;
    }
L_08918FE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891902C;
      }
      goto L_08918FEC;
    }
L_08918FEC:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12984)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891900C;
      }
      goto L_08919004;
    }
L_08919004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891902C;
      }
      goto L_0891900C;
    }
L_0891900C:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919028;
      }
      goto L_08919020;
    }
L_08919020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891902C;
      }
      goto L_08919028;
    }
L_08919028:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    goto L_0891902C;
L_0891902C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919034:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08919064u);
    // nop
    goto L_0891BEF0;
L_08919064:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089190F4;
      }
      goto L_08919074;
    }
L_08919074:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089190F0;
      }
      goto L_08919094;
    }
L_08919094:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089190ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089190ACu) goto L_089190AC;
    return;
L_089190AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089190F0;
      }
      goto L_089190B8;
    }
L_089190B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089190F0;
      }
      goto L_089190C8;
    }
L_089190C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089190F0;
      }
      goto L_089190D4;
    }
L_089190D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089190F0;
      }
      goto L_089190E0;
    }
L_089190E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089190F0;
      }
      goto L_089190EC;
    }
L_089190EC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089190F0;
L_089190F0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089190F4;
L_089190F4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919074;
      }
      goto L_08919100;
    }
L_08919100:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08919110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08919110u) goto L_08919110;
    return;
L_08919110:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919134:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08919168u);
    // nop
    goto L_0891BEF0;
L_08919168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919220;
      }
      goto L_08919170;
    }
L_08919170:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08919214;
      }
      goto L_08919190;
    }
L_08919190:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089191ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089191ACu) goto L_089191AC;
    return;
L_089191AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08919214;
      }
      goto L_089191B8;
    }
L_089191B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08919214;
      }
      goto L_089191C8;
    }
L_089191C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08919214;
      }
      goto L_089191D4;
    }
L_089191D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08919214;
      }
      goto L_089191E0;
    }
L_089191E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08919214;
      }
      goto L_089191EC;
    }
L_089191EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08919208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08919208u) goto L_08919208;
    return;
L_08919208:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919244;
      }
      goto L_08919214;
    }
L_08919214:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08919220;
L_08919220:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919170;
      }
      goto L_08919230;
    }
L_08919230:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08919240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08919240u) goto L_08919240;
    return;
L_08919240:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08919244;
L_08919244:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919264:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-448));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(300));
    ctx.set_gpr(31, 0x08919298u);
    // nop
    goto L_0891BEF0;
L_08919298:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089192ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089192ACu) goto L_089192AC;
    return;
L_089192AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089192CC;
      }
      goto L_089192B4;
    }
L_089192B4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(300));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x089192C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x089192C4u) goto L_089192C4;
    return;
L_089192C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919408;
      }
      goto L_089192CC;
    }
L_089192CC:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089193EC;
      }
      goto L_089192D8;
    }
L_089192D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089193E8;
      }
      goto L_089192F8;
    }
L_089192F8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(300));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08919310u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08919310u) goto L_08919310;
    return;
L_08919310:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089193E8;
      }
      goto L_0891931C;
    }
L_0891931C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089193E8;
      }
      goto L_0891932C;
    }
L_0891932C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089193D8;
      }
      goto L_08919338;
    }
L_08919338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089193E8;
      }
      goto L_08919340;
    }
L_08919340:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891936Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891936Cu) goto L_0891936C;
    return;
L_0891936C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12196));
    ctx.set_gpr(31, 0x08919380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08919380u) goto L_08919380;
    return;
L_08919380:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089193E8;
      }
      goto L_08919388;
    }
L_08919388:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08919398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x08919398u) goto L_08919398;
    return;
L_08919398:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089193CC;
      }
      goto L_089193A0;
    }
L_089193A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(300));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089193CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089193CCu) goto L_089193CC;
    return;
L_089193CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[2]);
    goto L_089193D8;
L_089193D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919340;
      }
      goto L_089193E8;
    }
L_089193E8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089193EC;
L_089193EC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089192D8;
      }
      goto L_089193F8;
    }
L_089193F8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(300));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08919408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08919408u) goto L_08919408;
    return;
L_08919408:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(448));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919428:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919448;
      }
      goto L_08919438;
    }
L_08919438:
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891944C;
      }
      goto L_08919448;
    }
L_08919448:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0891944C;
L_0891944C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919454:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    goto L_08919488;
L_08919488:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(22, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089194A4;
      }
      goto L_0891949C;
    }
L_0891949C:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(22, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_089194A4;
L_089194A4:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089195B8;
      }
      goto L_089194B0;
    }
L_089194B0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089194C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089194C8u) goto L_089194C8;
    return;
L_089194C8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_089194CC;
L_089194CC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(23, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[23]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08919518;
      }
      goto L_089194EC;
    }
L_089194EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089195B8;
      }
      goto L_089194F8;
    }
L_089194F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_089195B8;
      }
      goto L_08919500;
    }
L_08919500:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089195B8;
      }
      goto L_0891950C;
    }
L_0891950C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089195B8;
      }
      goto L_08919518;
    }
L_08919518:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08919530u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08919530u) goto L_08919530;
    return;
L_08919530:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08919574;
      }
      goto L_0891953C;
    }
L_0891953C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089195B8;
      }
      goto L_0891954C;
    }
L_0891954C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_089195B8;
      }
      goto L_08919554;
    }
L_08919554:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089195B8;
      }
      goto L_08919560;
    }
L_08919560:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089195B8;
      }
      goto L_08919574;
    }
L_08919574:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919588;
      }
      goto L_08919584;
    }
L_08919584:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08919588;
L_08919588:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089194CC;
      }
      goto L_08919598;
    }
L_08919598:
    ctx.set_gpr(5, ctx.gpr[16] << 1u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089195B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089195B0u) goto L_089195B0;
    return;
L_089195B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919488;
      }
      goto L_089195B8;
    }
L_089195B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089195E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08919618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 527u, 0x08915DC4u>(ctx, &aot_mem) && ctx.pc == 0x08919618u) goto L_08919618;
    return;
L_08919618:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891963C;
      }
      goto L_0891962C;
    }
L_0891962C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0891963Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0891963Cu) goto L_0891963C;
    return;
L_0891963C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08919674;
      }
      goto L_08919648;
    }
L_08919648:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919664;
      }
      goto L_08919658;
    }
L_08919658:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919674;
      }
      goto L_08919664;
    }
L_08919664:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08919674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08919674u) goto L_08919674;
    return;
L_08919674:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089196A4;
      }
      goto L_0891968C;
    }
L_0891968C:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12188)));
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089196A4;
L_089196A4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891968C;
      }
      goto L_089196B0;
    }
L_089196B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891971C;
      }
      goto L_089196CC;
    }
L_089196CC:
    ctx.set_gpr(21, ctx.gpr[4] - ctx.gpr[20]);
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(17, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089196F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089196F4u) goto L_089196F4;
    return;
L_089196F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919718;
      }
      goto L_089196FC;
    }
L_089196FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08919718u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08919718u) goto L_08919718;
    return;
L_08919718:
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[18]);
    goto L_0891971C;
L_0891971C:
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089196CC;
      }
      goto L_08919728;
    }
L_08919728:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919750:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1264));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08919794u);
    // nop
    goto L_0891BF20;
L_08919794:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089197A8;
      }
      goto L_0891979C;
    }
L_0891979C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089197A8;
      }
      goto L_089197A4;
    }
L_089197A4:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_089197A8;
L_089197A8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089197CC;
      }
      goto L_089197B0;
    }
L_089197B0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x089197C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x089197C0u) goto L_089197C0;
    return;
L_089197C0:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ABC8;
      }
      goto L_089197CC;
    }
L_089197CC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089197DCu);
    // nop
    goto L_0891ABF8;
L_089197DC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089197F4;
      }
      goto L_089197E8;
    }
L_089197E8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919880;
      }
      goto L_089197F4;
    }
L_089197F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919878;
      }
      goto L_08919804;
    }
L_08919804:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32396));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919820:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(17, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919848;
      }
      goto L_08919834;
    }
L_08919834:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919848;
      }
      goto L_08919840;
    }
L_08919840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919880;
      }
      goto L_08919848;
    }
L_08919848:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12952)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919880;
      }
      goto L_08919858;
    }
L_08919858:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12932)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919880;
      }
      goto L_08919868;
    }
L_08919868:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12880)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919880;
      }
      goto L_08919878;
    }
L_08919878:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12864)));
    goto L_08919880;
L_08919880:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08919898;
      }
      goto L_08919890;
    }
L_08919890:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB6C;
      }
      goto L_08919898;
    }
L_08919898:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089198B0;
      }
      goto L_089198A4;
    }
L_089198A4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB6C;
      }
      goto L_089198B0;
    }
L_089198B0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB6C;
      }
      goto L_089198BC;
    }
L_089198BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919964;
      }
      goto L_089198C4;
    }
L_089198C4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(1004));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(1000));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089198F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089198F0u) goto L_089198F0;
    return;
L_089198F0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12184));
    ctx.set_gpr(31, 0x08919904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x08919904u) goto L_08919904;
    return;
L_08919904:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919960;
      }
      goto L_0891990C;
    }
L_0891990C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12156));
    ctx.set_gpr(31, 0x08919920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x08919920u) goto L_08919920;
    return;
L_08919920:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919960;
      }
      goto L_08919928;
    }
L_08919928:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12136));
    ctx.set_gpr(31, 0x0891993Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x0891993Cu) goto L_0891993C;
    return;
L_0891993C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919960;
      }
      goto L_08919944;
    }
L_08919944:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB6C;
      }
      goto L_08919960;
    }
L_08919960:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08919964;
L_08919964:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089198C4;
      }
      goto L_08919970;
    }
L_08919970:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB6C;
      }
      goto L_08919978;
    }
L_08919978:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(872), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(744), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089199E8;
      }
      goto L_0891999C;
    }
L_0891999C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 58 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089199E8;
      }
      goto L_089199A8;
    }
L_089199A8:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089199CC;
      }
      goto L_089199B4;
    }
L_089199B4:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089199CC;
L_089199CC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089199E8;
      }
      goto L_089199DC;
    }
L_089199DC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 58 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089199B4;
      }
      goto L_089199E8;
    }
L_089199E8:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[4]))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08919C10;
      }
      goto L_089199F8;
    }
L_089199F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919BF4;
      }
      goto L_08919A00;
    }
L_08919A00:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(39));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08919AF8;
      }
      goto L_08919A0C;
    }
L_08919A0C:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919AB4;
      }
      goto L_08919A1C;
    }
L_08919A1C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08919AA4;
      }
      goto L_08919A28;
    }
L_08919A28:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(116));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08919A8C;
      }
      goto L_08919A3C;
    }
L_08919A3C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(114));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08919A74;
      }
      goto L_08919A48;
    }
L_08919A48:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(110));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08919A5C;
      }
      goto L_08919A54;
    }
L_08919A54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919AB0;
      }
      goto L_08919A5C;
    }
L_08919A5C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(872), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919AB0;
      }
      goto L_08919A74;
    }
L_08919A74:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(872), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919AB0;
      }
      goto L_08919A8C;
    }
L_08919A8C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(872), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919AB0;
      }
      goto L_08919AA4;
    }
L_08919AA4:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(872), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08919AB0;
L_08919AB0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08919AB4;
L_08919AB4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919ADC;
      }
      goto L_08919AC0;
    }
L_08919AC0:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(39));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08919ADC;
      }
      goto L_08919AD0;
    }
L_08919AD0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 127 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919A1C;
      }
      goto L_08919ADC;
    }
L_08919ADC:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(872), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(39));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08919AF8;
      }
      goto L_08919AF4;
    }
L_08919AF4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08919AF8;
L_08919AF8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(94));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08919BF4;
      }
      goto L_08919B08;
    }
L_08919B08:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919BB0;
      }
      goto L_08919B18;
    }
L_08919B18:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08919BA0;
      }
      goto L_08919B24;
    }
L_08919B24:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(116));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08919B88;
      }
      goto L_08919B38;
    }
L_08919B38:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(114));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08919B70;
      }
      goto L_08919B44;
    }
L_08919B44:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(110));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08919B58;
      }
      goto L_08919B50;
    }
L_08919B50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919BAC;
      }
      goto L_08919B58;
    }
L_08919B58:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(744), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919BAC;
      }
      goto L_08919B70;
    }
L_08919B70:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(744), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919BAC;
      }
      goto L_08919B88;
    }
L_08919B88:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(744), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919BAC;
      }
      goto L_08919BA0;
    }
L_08919BA0:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(744), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08919BAC;
L_08919BAC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08919BB0;
L_08919BB0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919BD8;
      }
      goto L_08919BBC;
    }
L_08919BBC:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(94));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08919BD8;
      }
      goto L_08919BCC;
    }
L_08919BCC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 127 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919B18;
      }
      goto L_08919BD8;
    }
L_08919BD8:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(744), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(94));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08919BF4;
      }
      goto L_08919BF0;
    }
L_08919BF0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08919BF4;
L_08919BF4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(39));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08919A00;
      }
      goto L_08919C04;
    }
L_08919C04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(94));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08919A00;
      }
      goto L_08919C10;
    }
L_08919C10:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891AB0C;
      }
      goto L_08919C20;
    }
L_08919C20:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891A9D8;
      }
      goto L_08919C2C;
    }
L_08919C2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(122));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891A998;
      }
      goto L_08919C38;
    }
L_08919C38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(121));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891A908;
      }
      goto L_08919C44;
    }
L_08919C44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(120));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891A8A8;
      }
      goto L_08919C50;
    }
L_08919C50:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(119));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0891A804;
      }
      goto L_08919C5C;
    }
L_08919C5C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(118));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891A760;
      }
      goto L_08919C68;
    }
L_08919C68:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(117));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891A700;
      }
      goto L_08919C74;
    }
L_08919C74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(116));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891A6A8;
      }
      goto L_08919C80;
    }
L_08919C80:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(115));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891A670;
      }
      goto L_08919C8C;
    }
L_08919C8C:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(114));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_0891A568;
      }
      goto L_08919C98;
    }
L_08919C98:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(113));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891A51C;
      }
      goto L_08919CA4;
    }
L_08919CA4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(112));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891A4D0;
      }
      goto L_08919CB0;
    }
L_08919CB0:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(111));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0891A484;
      }
      goto L_08919CBC;
    }
L_08919CBC:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(110));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0891A438;
      }
      goto L_08919CC8;
    }
L_08919CC8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(109));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0891A3EC;
      }
      goto L_08919CD4;
    }
L_08919CD4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(108));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891A3B4;
      }
      goto L_08919CE0;
    }
L_08919CE0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(107));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891A2A4;
      }
      goto L_08919CEC;
    }
L_08919CEC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(106));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891A1EC;
      }
      goto L_08919CF8;
    }
L_08919CF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(105));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891A1B4;
      }
      goto L_08919D04;
    }
L_08919D04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(103));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891A168;
      }
      goto L_08919D10;
    }
L_08919D10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(102));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891A08C;
      }
      goto L_08919D1C;
    }
L_08919D1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(101));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891A054;
      }
      goto L_08919D28;
    }
L_08919D28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08919E6C;
      }
      goto L_08919D34;
    }
L_08919D34:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(99));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08919D8C;
      }
      goto L_08919D40;
    }
L_08919D40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(97));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08919D54;
      }
      goto L_08919D4C;
    }
L_08919D4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB44;
      }
      goto L_08919D54;
    }
L_08919D54:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919D70;
      }
      goto L_08919D64;
    }
L_08919D64:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919D78;
      }
      goto L_08919D70;
    }
L_08919D70:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13304));
    goto L_08919D78;
L_08919D78:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x08919D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08919D84u) goto L_08919D84;
    return;
L_08919D84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_08919D8C;
    }
L_08919D8C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_08919D98;
    }
L_08919D98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919E58;
      }
      goto L_08919DA0;
    }
L_08919DA0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(744));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08919DC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08919DC0u) goto L_08919DC0;
    return;
L_08919DC0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919DD8;
      }
      goto L_08919DCC;
    }
L_08919DCC:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919DE0;
      }
      goto L_08919DD8;
    }
L_08919DD8:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12116));
    goto L_08919DE0;
L_08919DE0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.set_gpr(31, 0x08919DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08919DF0u) goto L_08919DF0;
    return;
L_08919DF0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08919E04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 530u, 0x088168E4u>(ctx, &aot_mem) && ctx.pc == 0x08919E04u) goto L_08919E04;
    return;
L_08919E04:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919E14;
      }
      goto L_08919E0C;
    }
L_08919E0C:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[19]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
    goto L_08919E14;
L_08919E14:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12196));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08919E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x08919E30u) goto L_08919E30;
    return;
L_08919E30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_08919E38;
    }
L_08919E38:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12112));
    ctx.set_gpr(31, 0x08919E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x08919E4Cu) goto L_08919E4C;
    return;
L_08919E4C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_08919E54;
    }
L_08919E54:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08919E58;
L_08919E58:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919DA0;
      }
      goto L_08919E64;
    }
L_08919E64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_08919E6C;
    }
L_08919E6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08919E84;
      }
      goto L_08919E78;
    }
L_08919E78:
    ctx.set_gpr(21, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919E98;
      }
      goto L_08919E84;
    }
L_08919E84:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08919E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 10u, 0x0891C138u>(ctx, &aot_mem) && ctx.pc == 0x08919E94u) goto L_08919E94;
    return;
L_08919E94:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    goto L_08919E98;
L_08919E98:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A040;
      }
      goto L_08919EA4;
    }
L_08919EA4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08919EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 17u, 0x0891C184u>(ctx, &aot_mem) && ctx.pc == 0x08919EB4u) goto L_08919EB4;
    return;
L_08919EB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A03C;
      }
      goto L_08919EBC;
    }
L_08919EBC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08919FA0;
      }
      goto L_08919EC8;
    }
L_08919EC8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08919F44;
      }
      goto L_08919ED4;
    }
L_08919ED4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08919EE8;
      }
      goto L_08919EE0;
    }
L_08919EE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A03C;
      }
      goto L_08919EE8;
    }
L_08919EE8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919F00;
      }
      goto L_08919EF4;
    }
L_08919EF4:
    ctx.set_gpr(22, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919F08;
      }
      goto L_08919F00;
    }
L_08919F00:
    ctx.set_gpr(22, 2228u << 16u);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(-13336));
    goto L_08919F08;
L_08919F08:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x08919F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08919F14u) goto L_08919F14;
    return;
L_08919F14:
    ctx.set_gpr(23, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08919F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 21u, 0x0891C1B4u>(ctx, &aot_mem) && ctx.pc == 0x08919F28u) goto L_08919F28;
    return;
L_08919F28:
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08919F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08919F3Cu) goto L_08919F3C;
    return;
L_08919F3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A01C;
      }
      goto L_08919F44;
    }
L_08919F44:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919F5C;
      }
      goto L_08919F50;
    }
L_08919F50:
    ctx.set_gpr(22, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919F64;
      }
      goto L_08919F5C;
    }
L_08919F5C:
    ctx.set_gpr(22, 2228u << 16u);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(-12104));
    goto L_08919F64;
L_08919F64:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x08919F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08919F70u) goto L_08919F70;
    return;
L_08919F70:
    ctx.set_gpr(23, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08919F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 28u, 0x0891C228u>(ctx, &aot_mem) && ctx.pc == 0x08919F84u) goto L_08919F84;
    return;
L_08919F84:
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08919F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08919F98u) goto L_08919F98;
    return;
L_08919F98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A01C;
      }
      goto L_08919FA0;
    }
L_08919FA0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08919FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 35u, 0x0891C29Cu>(ctx, &aot_mem) && ctx.pc == 0x08919FB0u) goto L_08919FB0;
    return;
L_08919FB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919FD0;
      }
      goto L_08919FB8;
    }
L_08919FB8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08919FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 35u, 0x0891C29Cu>(ctx, &aot_mem) && ctx.pc == 0x08919FC8u) goto L_08919FC8;
    return;
L_08919FC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919FD4;
      }
      goto L_08919FD0;
    }
L_08919FD0:
    ctx.set_gpr(2, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_08919FD4;
L_08919FD4:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919FF0;
      }
      goto L_08919FE4;
    }
L_08919FE4:
    ctx.set_gpr(22, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919FF8;
      }
      goto L_08919FF0;
    }
L_08919FF0:
    ctx.set_gpr(22, 2228u << 16u);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(-13316));
    goto L_08919FF8;
L_08919FF8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x0891A004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0891A004u) goto L_0891A004;
    return;
L_0891A004:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0891A01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A01Cu) goto L_0891A01C;
    return;
L_0891A01C:
    ctx.set_gpr(2, ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A03C;
      }
      goto L_0891A02C;
    }
L_0891A02C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32708));
    ctx.set_gpr(31, 0x0891A03Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0891A03Cu) goto L_0891A03C;
    return;
L_0891A03C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0891A040;
L_0891A040:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919EA4;
      }
      goto L_0891A04C;
    }
L_0891A04C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A054;
    }
L_0891A054:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A070;
      }
      goto L_0891A064;
    }
L_0891A064:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A078;
      }
      goto L_0891A070;
    }
L_0891A070:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13336));
    goto L_0891A078;
L_0891A078:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x0891A084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A084u) goto L_0891A084;
    return;
L_0891A084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A08C;
    }
L_0891A08C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A098;
    }
L_0891A098:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A0A4;
    }
L_0891A0A4:
    ctx.set_gpr(31, 0x0891A0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 613u, 0x08816CDCu>(ctx, &aot_mem) && ctx.pc == 0x0891A0ACu) goto L_0891A0AC;
    return;
L_0891A0AC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(47));
    ctx.set_gpr(31, 0x0891A0C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 613u, 0x08816CDCu>(ctx, &aot_mem) && ctx.pc == 0x0891A0C0u) goto L_0891A0C0;
    return;
L_0891A0C0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A0F0;
      }
      goto L_0891A0C8;
    }
L_0891A0C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A0F0;
      }
      goto L_0891A0D0;
    }
L_0891A0D0:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A0E4;
      }
      goto L_0891A0DC;
    }
L_0891A0DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A0E8;
      }
      goto L_0891A0E4;
    }
L_0891A0E4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_0891A0E8;
L_0891A0E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A104;
      }
      goto L_0891A0F0;
    }
L_0891A0F0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A100;
      }
      goto L_0891A0F8;
    }
L_0891A0F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A104;
      }
      goto L_0891A100;
    }
L_0891A100:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_0891A104;
L_0891A104:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A118;
      }
      goto L_0891A10C;
    }
L_0891A10C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A11C;
      }
      goto L_0891A118;
    }
L_0891A118:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    goto L_0891A11C;
L_0891A11C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A124;
    }
L_0891A124:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A130;
    }
L_0891A130:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A148;
      }
      goto L_0891A13C;
    }
L_0891A13C:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A150;
      }
      goto L_0891A148;
    }
L_0891A148:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    goto L_0891A150;
L_0891A150:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891A160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A160u) goto L_0891A160;
    return;
L_0891A160:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A168;
    }
L_0891A168:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A174;
    }
L_0891A174:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A180;
    }
L_0891A180:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A198;
      }
      goto L_0891A18C;
    }
L_0891A18C:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A1A0;
      }
      goto L_0891A198;
    }
L_0891A198:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    goto L_0891A1A0;
L_0891A1A0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x0891A1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A1ACu) goto L_0891A1AC;
    return;
L_0891A1AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A1B4;
    }
L_0891A1B4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A1D0;
      }
      goto L_0891A1C4;
    }
L_0891A1C4:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A1D8;
      }
      goto L_0891A1D0;
    }
L_0891A1D0:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13336));
    goto L_0891A1D8;
L_0891A1D8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x0891A1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A1E4u) goto L_0891A1E4;
    return;
L_0891A1E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A1EC;
    }
L_0891A1EC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A238;
      }
      goto L_0891A1F8;
    }
L_0891A1F8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A238;
      }
      goto L_0891A204;
    }
L_0891A204:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A21C;
      }
      goto L_0891A210;
    }
L_0891A210:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A224;
      }
      goto L_0891A21C;
    }
L_0891A21C:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    goto L_0891A224;
L_0891A224:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x0891A230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A230u) goto L_0891A230;
    return;
L_0891A230:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A238;
    }
L_0891A238:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0891A244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 10u, 0x0891C138u>(ctx, &aot_mem) && ctx.pc == 0x0891A244u) goto L_0891A244;
    return;
L_0891A244:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A250;
    }
L_0891A250:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x0891A264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 42u, 0x0891C308u>(ctx, &aot_mem) && ctx.pc == 0x0891A264u) goto L_0891A264;
    return;
L_0891A264:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A270;
    }
L_0891A270:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A288;
      }
      goto L_0891A27C;
    }
L_0891A27C:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A290;
      }
      goto L_0891A288;
    }
L_0891A288:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13336));
    goto L_0891A290;
L_0891A290:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x0891A29Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A29Cu) goto L_0891A29C;
    return;
L_0891A29C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A2A4;
    }
L_0891A2A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(1, ctx.gpr[4] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A378;
      }
      goto L_0891A2B4;
    }
L_0891A2B4:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32332));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891A2D0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(43));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A37C;
      }
      goto L_0891A2DC;
    }
L_0891A2DC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(42));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A37C;
      }
      goto L_0891A2E8;
    }
L_0891A2E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(45));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A37C;
      }
      goto L_0891A2F4;
    }
L_0891A2F4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(60));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A37C;
      }
      goto L_0891A300;
    }
L_0891A300:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(62));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A37C;
      }
      goto L_0891A30C;
    }
L_0891A30C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[9]))));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A37C;
      }
      goto L_0891A318;
    }
L_0891A318:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A37C;
      }
      goto L_0891A324;
    }
L_0891A324:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(100));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A37C;
      }
      goto L_0891A330;
    }
L_0891A330:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[10]))));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A37C;
      }
      goto L_0891A33C;
    }
L_0891A33C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A37C;
      }
      goto L_0891A348;
    }
L_0891A348:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[10]))));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A37C;
      }
      goto L_0891A354;
    }
L_0891A354:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A37C;
      }
      goto L_0891A360;
    }
L_0891A360:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[7]))));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A37C;
      }
      goto L_0891A36C;
    }
L_0891A36C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[8]))));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A37C;
      }
      goto L_0891A378;
    }
L_0891A378:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(99));
    goto L_0891A37C;
L_0891A37C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A394;
      }
      goto L_0891A388;
    }
L_0891A388:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A39C;
      }
      goto L_0891A394;
    }
L_0891A394:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13284));
    goto L_0891A39C;
L_0891A39C:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x0891A3ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A3ACu) goto L_0891A3AC;
    return;
L_0891A3AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A3B4;
    }
L_0891A3B4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A3D0;
      }
      goto L_0891A3C4;
    }
L_0891A3C4:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A3D8;
      }
      goto L_0891A3D0;
    }
L_0891A3D0:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13336));
    goto L_0891A3D8;
L_0891A3D8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x0891A3E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A3E4u) goto L_0891A3E4;
    return;
L_0891A3E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A3EC;
    }
L_0891A3EC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A3F8;
    }
L_0891A3F8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A404;
    }
L_0891A404:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A41C;
      }
      goto L_0891A410;
    }
L_0891A410:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A424;
      }
      goto L_0891A41C;
    }
L_0891A41C:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    goto L_0891A424;
L_0891A424:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x0891A430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A430u) goto L_0891A430;
    return;
L_0891A430:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A438;
    }
L_0891A438:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A444;
    }
L_0891A444:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A450;
    }
L_0891A450:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A468;
      }
      goto L_0891A45C;
    }
L_0891A45C:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A470;
      }
      goto L_0891A468;
    }
L_0891A468:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    goto L_0891A470;
L_0891A470:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x0891A47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A47Cu) goto L_0891A47C;
    return;
L_0891A47C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A484;
    }
L_0891A484:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A490;
    }
L_0891A490:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A49C;
    }
L_0891A49C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A4B4;
      }
      goto L_0891A4A8;
    }
L_0891A4A8:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A4BC;
      }
      goto L_0891A4B4;
    }
L_0891A4B4:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    goto L_0891A4BC;
L_0891A4BC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x0891A4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A4C8u) goto L_0891A4C8;
    return;
L_0891A4C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A4D0;
    }
L_0891A4D0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A4DC;
    }
L_0891A4DC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A4E8;
    }
L_0891A4E8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A500;
      }
      goto L_0891A4F4;
    }
L_0891A4F4:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A508;
      }
      goto L_0891A500;
    }
L_0891A500:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    goto L_0891A508;
L_0891A508:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x0891A514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A514u) goto L_0891A514;
    return;
L_0891A514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A51C;
    }
L_0891A51C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A528;
    }
L_0891A528:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A534;
    }
L_0891A534:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A54C;
      }
      goto L_0891A540;
    }
L_0891A540:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A554;
      }
      goto L_0891A54C;
    }
L_0891A54C:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    goto L_0891A554;
L_0891A554:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x0891A560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A560u) goto L_0891A560;
    return;
L_0891A560:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A568;
    }
L_0891A568:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A574;
    }
L_0891A574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A65C;
      }
      goto L_0891A57C;
    }
L_0891A57C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(744));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891A59Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891A59Cu) goto L_0891A59C;
    return;
L_0891A59C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A5B4;
      }
      goto L_0891A5A8;
    }
L_0891A5A8:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A5BC;
      }
      goto L_0891A5B4;
    }
L_0891A5B4:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    goto L_0891A5BC;
L_0891A5BC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.set_gpr(31, 0x0891A5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A5CCu) goto L_0891A5CC;
    return;
L_0891A5CC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A5F8;
      }
      goto L_0891A5DC;
    }
L_0891A5DC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891A5F8;
      }
      goto L_0891A5E8;
    }
L_0891A5E8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32708));
    ctx.set_gpr(31, 0x0891A5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0891A5F8u) goto L_0891A5F8;
    return;
L_0891A5F8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891A60Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 530u, 0x088168E4u>(ctx, &aot_mem) && ctx.pc == 0x0891A60Cu) goto L_0891A60C;
    return;
L_0891A60C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A61C;
      }
      goto L_0891A614;
    }
L_0891A614:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[19]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
    goto L_0891A61C;
L_0891A61C:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12196));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0891A638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x0891A638u) goto L_0891A638;
    return;
L_0891A638:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A640;
    }
L_0891A640:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12112));
    ctx.set_gpr(31, 0x0891A654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x0891A654u) goto L_0891A654;
    return;
L_0891A654:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A65C;
    }
L_0891A65C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891A57C;
      }
      goto L_0891A668;
    }
L_0891A668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A670;
    }
L_0891A670:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A68C;
      }
      goto L_0891A680;
    }
L_0891A680:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A694;
      }
      goto L_0891A68C;
    }
L_0891A68C:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12100));
    goto L_0891A694;
L_0891A694:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x0891A6A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A6A0u) goto L_0891A6A0;
    return;
L_0891A6A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A6A8;
    }
L_0891A6A8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x0891A6B8u);
    // nop
    goto L_0891AC54;
L_0891A6B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891A6C8;
      }
      goto L_0891A6C0;
    }
L_0891A6C0:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12092));
    goto L_0891A6C8;
L_0891A6C8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A6E0;
      }
      goto L_0891A6D4;
    }
L_0891A6D4:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A6E8;
      }
      goto L_0891A6E0;
    }
L_0891A6E0:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    goto L_0891A6E8;
L_0891A6E8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891A6F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A6F8u) goto L_0891A6F8;
    return;
L_0891A6F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A700;
    }
L_0891A700:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A70C;
    }
L_0891A70C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0891A718u);
    // nop
    goto L_0891ACB0;
L_0891A718:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891A728;
      }
      goto L_0891A720;
    }
L_0891A720:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12092));
    goto L_0891A728;
L_0891A728:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A740;
      }
      goto L_0891A734;
    }
L_0891A734:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A748;
      }
      goto L_0891A740;
    }
L_0891A740:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    goto L_0891A748;
L_0891A748:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891A758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A758u) goto L_0891A758;
    return;
L_0891A758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A760;
    }
L_0891A760:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A7A0;
      }
      goto L_0891A76C;
    }
L_0891A76C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A784;
      }
      goto L_0891A778;
    }
L_0891A778:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A78C;
      }
      goto L_0891A784;
    }
L_0891A784:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13336));
    goto L_0891A78C;
L_0891A78C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x0891A798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A798u) goto L_0891A798;
    return;
L_0891A798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A7A0;
    }
L_0891A7A0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0891A7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 10u, 0x0891C138u>(ctx, &aot_mem) && ctx.pc == 0x0891A7ACu) goto L_0891A7AC;
    return;
L_0891A7AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A7B8;
    }
L_0891A7B8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0891A7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 42u, 0x0891C308u>(ctx, &aot_mem) && ctx.pc == 0x0891A7CCu) goto L_0891A7CC;
    return;
L_0891A7CC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A7E4;
      }
      goto L_0891A7D8;
    }
L_0891A7D8:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A7EC;
      }
      goto L_0891A7E4;
    }
L_0891A7E4:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13336));
    goto L_0891A7EC;
L_0891A7EC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x0891A7FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A7FCu) goto L_0891A7FC;
    return;
L_0891A7FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A804;
    }
L_0891A804:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A844;
      }
      goto L_0891A810;
    }
L_0891A810:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A828;
      }
      goto L_0891A81C;
    }
L_0891A81C:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A830;
      }
      goto L_0891A828;
    }
L_0891A828:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    goto L_0891A830;
L_0891A830:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x0891A83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A83Cu) goto L_0891A83C;
    return;
L_0891A83C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A844;
    }
L_0891A844:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0891A850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 10u, 0x0891C138u>(ctx, &aot_mem) && ctx.pc == 0x0891A850u) goto L_0891A850;
    return;
L_0891A850:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A85C;
    }
L_0891A85C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x0891A870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 42u, 0x0891C308u>(ctx, &aot_mem) && ctx.pc == 0x0891A870u) goto L_0891A870;
    return;
L_0891A870:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A888;
      }
      goto L_0891A87C;
    }
L_0891A87C:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A890;
      }
      goto L_0891A888;
    }
L_0891A888:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12104));
    goto L_0891A890;
L_0891A890:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x0891A8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A8A0u) goto L_0891A8A0;
    return;
L_0891A8A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A8A8;
    }
L_0891A8A8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A8B4;
    }
L_0891A8B4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0891A8C0u);
    // nop
    goto L_0891AD0C;
L_0891A8C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891A8D0;
      }
      goto L_0891A8C8;
    }
L_0891A8C8:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12092));
    goto L_0891A8D0;
L_0891A8D0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A8E8;
      }
      goto L_0891A8DC;
    }
L_0891A8DC:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A8F0;
      }
      goto L_0891A8E8;
    }
L_0891A8E8:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    goto L_0891A8F0;
L_0891A8F0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891A900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A900u) goto L_0891A900;
    return;
L_0891A900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A908;
    }
L_0891A908:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A914;
    }
L_0891A914:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0891A920u);
    // nop
    goto L_0891AD68;
L_0891A920:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A960;
      }
      goto L_0891A928;
    }
L_0891A928:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A940;
      }
      goto L_0891A934;
    }
L_0891A934:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A948;
      }
      goto L_0891A940;
    }
L_0891A940:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    goto L_0891A948;
L_0891A948:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891A958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A958u) goto L_0891A958;
    return;
L_0891A958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A960;
    }
L_0891A960:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A97C;
      }
      goto L_0891A970;
    }
L_0891A970:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A984;
      }
      goto L_0891A97C;
    }
L_0891A97C:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13336));
    goto L_0891A984;
L_0891A984:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x0891A990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A990u) goto L_0891A990;
    return;
L_0891A990:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A998;
    }
L_0891A998:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A9A4;
    }
L_0891A9A4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(872))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A9BC;
      }
      goto L_0891A9B0;
    }
L_0891A9B0:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(872));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A9C4;
      }
      goto L_0891A9BC;
    }
L_0891A9BC:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    goto L_0891A9C4;
L_0891A9C4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x0891A9D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891A9D0u) goto L_0891A9D0;
    return;
L_0891A9D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891A9D8;
    }
L_0891A9D8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(116));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891AA40;
      }
      goto L_0891A9F0;
    }
L_0891A9F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(114));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891AA28;
      }
      goto L_0891A9FC;
    }
L_0891A9FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(110));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891AA10;
      }
      goto L_0891AA08;
    }
L_0891AA08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891AA10;
    }
L_0891AA10:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0891AA20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0891AA20u) goto L_0891AA20;
    return;
L_0891AA20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891AA28;
    }
L_0891AA28:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32716));
    ctx.set_gpr(31, 0x0891AA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0891AA38u) goto L_0891AA38;
    return;
L_0891AA38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891AA40;
    }
L_0891AA40:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32712));
    ctx.set_gpr(31, 0x0891AA50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0891AA50u) goto L_0891AA50;
    return;
L_0891AA50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891AA58;
    }
L_0891AA58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891AAE0;
      }
      goto L_0891AA64;
    }
L_0891AA64:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(116));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891AAC8;
      }
      goto L_0891AA78;
    }
L_0891AA78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(114));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891AAB0;
      }
      goto L_0891AA84;
    }
L_0891AA84:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(110));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891AA98;
      }
      goto L_0891AA90;
    }
L_0891AA90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB08;
      }
      goto L_0891AA98;
    }
L_0891AA98:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0891AAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0891AAA8u) goto L_0891AAA8;
    return;
L_0891AAA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB08;
      }
      goto L_0891AAB0;
    }
L_0891AAB0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32716));
    ctx.set_gpr(31, 0x0891AAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0891AAC0u) goto L_0891AAC0;
    return;
L_0891AAC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB08;
      }
      goto L_0891AAC8;
    }
L_0891AAC8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32712));
    ctx.set_gpr(31, 0x0891AAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0891AAD8u) goto L_0891AAD8;
    return;
L_0891AAD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB08;
      }
      goto L_0891AAE0;
    }
L_0891AAE0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x0891AAECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0891AAECu) goto L_0891AAEC;
    return;
L_0891AAEC:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13284));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891AB08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891AB08u) goto L_0891AB08;
    return;
L_0891AB08:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0891AB0C;
L_0891AB0C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB28;
      }
      goto L_0891AB18;
    }
L_0891AB18:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891AA58;
      }
      goto L_0891AB28;
    }
L_0891AB28:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891AB38;
    }
L_0891AB38:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891AB44;
    }
L_0891AB44:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13284));
    ctx.set_gpr(31, 0x0891AB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891AB58u) goto L_0891AB58;
    return;
L_0891AB58:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891AB6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 530u, 0x088168E4u>(ctx, &aot_mem) && ctx.pc == 0x0891AB6Cu) goto L_0891AB6C;
    return;
L_0891AB6C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919978;
      }
      goto L_0891AB78;
    }
L_0891AB78:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891AB8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 530u, 0x088168E4u>(ctx, &aot_mem) && ctx.pc == 0x0891AB8Cu) goto L_0891AB8C;
    return;
L_0891AB8C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891ABA4;
      }
      goto L_0891AB98;
    }
L_0891AB98:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[19]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0891ABA4;
L_0891ABA4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ABB4;
      }
      goto L_0891ABAC;
    }
L_0891ABAC:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[19]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
    goto L_0891ABB4;
L_0891ABB4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0891ABC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x0891ABC4u) goto L_0891ABC4;
    return;
L_0891ABC4:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_0891ABC8;
L_0891ABC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1264));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891ABF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891AC40;
      }
      goto L_0891AC08;
    }
L_0891AC08:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AC40;
      }
      goto L_0891AC14;
    }
L_0891AC14:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891AC40;
      }
      goto L_0891AC2C;
    }
L_0891AC2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x0891AC38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0895CACCu>(ctx, &aot_mem) && ctx.pc == 0x0891AC38u) goto L_0891AC38;
    return;
L_0891AC38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AC44;
      }
      goto L_0891AC40;
    }
L_0891AC40:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0891AC44;
L_0891AC44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891AC54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891AC9C;
      }
      goto L_0891AC64;
    }
L_0891AC64:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AC9C;
      }
      goto L_0891AC70;
    }
L_0891AC70:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891AC9C;
      }
      goto L_0891AC88;
    }
L_0891AC88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x0891AC94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0895CACCu>(ctx, &aot_mem) && ctx.pc == 0x0891AC94u) goto L_0891AC94;
    return;
L_0891AC94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ACA0;
      }
      goto L_0891AC9C;
    }
L_0891AC9C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0891ACA0;
L_0891ACA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891ACB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891ACF8;
      }
      goto L_0891ACC0;
    }
L_0891ACC0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ACF8;
      }
      goto L_0891ACCC;
    }
L_0891ACCC:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(360)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891ACF8;
      }
      goto L_0891ACE4;
    }
L_0891ACE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x0891ACF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0895CACCu>(ctx, &aot_mem) && ctx.pc == 0x0891ACF0u) goto L_0891ACF0;
    return;
L_0891ACF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ACFC;
      }
      goto L_0891ACF8;
    }
L_0891ACF8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0891ACFC;
L_0891ACFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891AD0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891AD54;
      }
      goto L_0891AD1C;
    }
L_0891AD1C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AD54;
      }
      goto L_0891AD28;
    }
L_0891AD28:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(488)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891AD54;
      }
      goto L_0891AD40;
    }
L_0891AD40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x0891AD4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0895CACCu>(ctx, &aot_mem) && ctx.pc == 0x0891AD4Cu) goto L_0891AD4C;
    return;
L_0891AD4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AD58;
      }
      goto L_0891AD54;
    }
L_0891AD54:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0891AD58;
L_0891AD58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891AD68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891ADB0;
      }
      goto L_0891AD78;
    }
L_0891AD78:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ADB0;
      }
      goto L_0891AD84;
    }
L_0891AD84:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(552)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891ADB0;
      }
      goto L_0891AD9C;
    }
L_0891AD9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x0891ADA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0895CACCu>(ctx, &aot_mem) && ctx.pc == 0x0891ADA8u) goto L_0891ADA8;
    return;
L_0891ADA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ADB4;
      }
      goto L_0891ADB0;
    }
L_0891ADB0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0891ADB4;
L_0891ADB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891ADC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(316));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891AE20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891AE20u) goto L_0891AE20;
    return;
L_0891AE20:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(10, ctx.gpr[19] + 0u);
    ctx.set_gpr(11, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891AE58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891AE58u) goto L_0891AE58;
    return;
L_0891AE58:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(576));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891AE84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(30, ctx.gpr[10] + 0u);
    ctx.set_gpr(16, ctx.gpr[11] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x0891AEDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 822u, 0x089279F8u>(ctx, &aot_mem) && ctx.pc == 0x0891AEDCu) goto L_0891AEDC;
    return;
L_0891AEDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AFD4;
      }
      goto L_0891AEE4;
    }
L_0891AEE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, ctx.gpr[30] + 0u);
    ctx.set_gpr(11, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891AF14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891AF14u) goto L_0891AF14;
    return;
L_0891AF14:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891AFB8;
      }
      goto L_0891AF24;
    }
L_0891AF24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891AF38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891AF38u) goto L_0891AF38;
    return;
L_0891AF38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AFB8;
      }
      goto L_0891AF40;
    }
L_0891AF40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, ctx.gpr[30] + 0u);
    ctx.set_gpr(11, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891AF70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891AF70u) goto L_0891AF70;
    return;
L_0891AF70:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891AF9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891AF9Cu) goto L_0891AF9C;
    return;
L_0891AF9C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30620)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30620), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B01C;
      }
      goto L_0891AFB8;
    }
L_0891AFB8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30624)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30624), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B01C;
      }
      goto L_0891AFD4;
    }
L_0891AFD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, ctx.gpr[30] + 0u);
    ctx.set_gpr(11, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891B004u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891B004u) goto L_0891B004;
    return;
L_0891B004:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30620)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30620), ctx.gpr[3]);
    goto L_0891B01C;
L_0891B01C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30616)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30616), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B068:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0891B098u);
    // nop
    goto L_0891BEF0;
L_0891B098:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891B0B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891B0B4u) goto L_0891B0B4;
    return;
L_0891B0B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B0D4;
      }
      goto L_0891B0BC;
    }
L_0891B0BC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0891B0CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x0891B0CCu) goto L_0891B0CC;
    return;
L_0891B0CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B1B0;
      }
      goto L_0891B0D4;
    }
L_0891B0D4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(808));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8195));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891B0F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891B0F4u) goto L_0891B0F4;
    return;
L_0891B0F4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B10C;
      }
      goto L_0891B100;
    }
L_0891B100:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B110;
      }
      goto L_0891B10C;
    }
L_0891B10C:
    ctx.set_gpr(4, 0u + 0u);
    goto L_0891B110;
L_0891B110:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B130;
      }
      goto L_0891B11C;
    }
L_0891B11C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891B130u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891B130u) goto L_0891B130;
    return;
L_0891B130:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(808));
    ctx.set_gpr(31, 0x0891B13Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0891B13Cu) goto L_0891B13C;
    return;
L_0891B13C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B178;
      }
      goto L_0891B14C;
    }
L_0891B14C:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[18]);
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(936));
    ctx.set_gpr(19, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(936))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(936), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(808));
    ctx.set_gpr(31, 0x0891B168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0891B168u) goto L_0891B168;
    return;
L_0891B168:
    ctx.set_gpr(31, 0x0891B170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0891B170u) goto L_0891B170;
    return;
L_0891B170:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(128));
    goto L_0891B178;
L_0891B178:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B14C;
      }
      goto L_0891B184;
    }
L_0891B184:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B1A0;
      }
      goto L_0891B190;
    }
L_0891B190:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891B1A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891B1A0u) goto L_0891B1A0;
    return;
L_0891B1A0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0891B1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x0891B1B0u) goto L_0891B1B0;
    return;
L_0891B1B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B1D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(808));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8195));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891B20Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891B20Cu) goto L_0891B20C;
    return;
L_0891B20C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B224;
      }
      goto L_0891B218;
    }
L_0891B218:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B228;
      }
      goto L_0891B224;
    }
L_0891B224:
    ctx.set_gpr(4, 0u + 0u);
    goto L_0891B228;
L_0891B228:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B248;
      }
      goto L_0891B234;
    }
L_0891B234:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891B248u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891B248u) goto L_0891B248;
    return;
L_0891B248:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(808));
    ctx.set_gpr(31, 0x0891B254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0891B254u) goto L_0891B254;
    return;
L_0891B254:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B290;
      }
      goto L_0891B264;
    }
L_0891B264:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[18]);
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(936));
    ctx.set_gpr(19, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(936))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(936), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(808));
    ctx.set_gpr(31, 0x0891B280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0891B280u) goto L_0891B280;
    return;
L_0891B280:
    ctx.set_gpr(31, 0x0891B288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0891B288u) goto L_0891B288;
    return;
L_0891B288:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(128));
    goto L_0891B290;
L_0891B290:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B264;
      }
      goto L_0891B29C;
    }
L_0891B29C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B2B8;
      }
      goto L_0891B2A8;
    }
L_0891B2A8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891B2B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891B2B8u) goto L_0891B2B8;
    return;
L_0891B2B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B2DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B330;
      }
      goto L_0891B2FC;
    }
L_0891B2FC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891B314u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891B314u) goto L_0891B314;
    return;
L_0891B314:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891B32Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891B32Cu) goto L_0891B32C;
    return;
L_0891B32C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_0891B330;
L_0891B330:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0891B2FC;
      }
      goto L_0891B33C;
    }
L_0891B33C:
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
L_0891B354:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0891B384u);
    // nop
    goto L_0891BEF0;
L_0891B384:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B428;
      }
      goto L_0891B390;
    }
L_0891B390:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891B424;
      }
      goto L_0891B3B0;
    }
L_0891B3B0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891B3CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891B3CCu) goto L_0891B3CC;
    return;
L_0891B3CC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0891B424;
      }
      goto L_0891B3D8;
    }
L_0891B3D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891B424;
      }
      goto L_0891B3E8;
    }
L_0891B3E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891B424;
      }
      goto L_0891B3F4;
    }
L_0891B3F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891B424;
      }
      goto L_0891B400;
    }
L_0891B400:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891B424;
      }
      goto L_0891B40C;
    }
L_0891B40C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891B424u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891B424u) goto L_0891B424;
    return;
L_0891B424:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0891B428;
L_0891B428:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B390;
      }
      goto L_0891B434;
    }
L_0891B434:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0891B444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x0891B444u) goto L_0891B444;
    return;
L_0891B444:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B464:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x0891B4ACu);
    // nop
    goto L_0891BEF0;
L_0891B4AC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891B4C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891B4C0u) goto L_0891B4C0;
    return;
L_0891B4C0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[18] << 2u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0891B4D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0891B4D4u) goto L_0891B4D4;
    return;
L_0891B4D4:
    ctx.set_gpr(3, ctx.gpr[18] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891B4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem) && ctx.pc == 0x0891B4F8u) goto L_0891B4F8;
    return;
L_0891B4F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2194u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16656));
    ctx.set_gpr(6, 2194u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-16180));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(148));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891B51Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 189u, 0x08804C78u>(ctx, &aot_mem) && ctx.pc == 0x0891B51Cu) goto L_0891B51C;
    return;
L_0891B51C:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[30] + 0u);
    ctx.set_gpr(19, ctx.gpr[17] << 2u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0891B538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x0891B538u) goto L_0891B538;
    return;
L_0891B538:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891B54Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x0891B54Cu) goto L_0891B54C;
    return;
L_0891B54C:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891B56Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891B56Cu) goto L_0891B56C;
    return;
L_0891B56C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891B588u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891B588u) goto L_0891B588;
    return;
L_0891B588:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891B5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0891B5A0u) goto L_0891B5A0;
    return;
L_0891B5A0:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0891B5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0891B5B4u) goto L_0891B5B4;
    return;
L_0891B5B4:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B7A4;
      }
      goto L_0891B5C0;
    }
L_0891B5C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891B7A0;
      }
      goto L_0891B5E0;
    }
L_0891B5E0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891B5F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891B5F8u) goto L_0891B5F8;
    return;
L_0891B5F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0891B7A0;
      }
      goto L_0891B604;
    }
L_0891B604:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891B7A0;
      }
      goto L_0891B614;
    }
L_0891B614:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891B7A0;
      }
      goto L_0891B620;
    }
L_0891B620:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891B7A0;
      }
      goto L_0891B62C;
    }
L_0891B62C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891B7A0;
      }
      goto L_0891B638;
    }
L_0891B638:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0891B64Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 25u, 0x0891C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0891B64Cu) goto L_0891B64C;
    return;
L_0891B64C:
    ctx.set_gpr(2, ctx.gpr[21] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[30] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    goto L_0891B718;
L_0891B718:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_0891B718;
      }
      goto L_0891B73C;
    }
L_0891B73C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[3] >> 2u);
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B790;
      }
      goto L_0891B758;
    }
L_0891B758:
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(6, ctx.gpr[22] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B778;
      }
      goto L_0891B76C;
    }
L_0891B76C:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B79C;
      }
      goto L_0891B778;
    }
L_0891B778:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B790;
      }
      goto L_0891B78C;
    }
L_0891B78C:
    ctx.set_gpr(3, 0u + 0u);
    goto L_0891B790;
L_0891B790:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B758;
      }
      goto L_0891B79C;
    }
L_0891B79C:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_0891B7A0;
L_0891B7A0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0891B7A4;
L_0891B7A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B5C0;
      }
      goto L_0891B7B4;
    }
L_0891B7B4:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B89C;
      }
      goto L_0891B7C0;
    }
L_0891B7C0:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B884;
      }
      goto L_0891B7E0;
    }
L_0891B7E0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B880;
      }
      goto L_0891B7F4;
    }
L_0891B7F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B880;
      }
      goto L_0891B804;
    }
L_0891B804:
    ctx.set_gpr(2, ctx.gpr[6] >> 2u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B874;
      }
      goto L_0891B81C;
    }
L_0891B81C:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B880;
      }
      goto L_0891B830;
    }
L_0891B830:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0891B85C;
      }
      goto L_0891B83C;
    }
L_0891B83C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0891B848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 21u, 0x0891C1B4u>(ctx, &aot_mem) && ctx.pc == 0x0891B848u) goto L_0891B848;
    return;
L_0891B848:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B880;
      }
      goto L_0891B85C;
    }
L_0891B85C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B874;
      }
      goto L_0891B870;
    }
L_0891B870:
    ctx.set_gpr(3, 0u + 0u);
    goto L_0891B874;
L_0891B874:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B81C;
      }
      goto L_0891B880;
    }
L_0891B880:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_0891B884;
L_0891B884:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[21] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B7E0;
      }
      goto L_0891B894;
    }
L_0891B894:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0891B89C;
L_0891B89C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B7C0;
      }
      goto L_0891B8A8;
    }
L_0891B8A8:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B8F4;
      }
      goto L_0891B8B4;
    }
L_0891B8B4:
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[19]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B8F0;
      }
      goto L_0891B8C4;
    }
L_0891B8C4:
    ctx.set_gpr(2, ctx.gpr[19] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(5, ctx.gpr[30] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891B8F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891B8F0u) goto L_0891B8F0;
    return;
L_0891B8F0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0891B8F4;
L_0891B8F4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B8B4;
      }
      goto L_0891B900;
    }
L_0891B900:
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(5, 2194u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16180));
    ctx.set_gpr(6, 2194u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-18044));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0891B920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 161u, 0x08804A4Cu>(ctx, &aot_mem) && ctx.pc == 0x0891B920u) goto L_0891B920;
    return;
L_0891B920:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0891B930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x0891B930u) goto L_0891B930;
    return;
L_0891B930:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0891B940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x0891B940u) goto L_0891B940;
    return;
L_0891B940:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0891B950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x0891B950u) goto L_0891B950;
    return;
L_0891B950:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B984:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0891B994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 452u, 0x0892A004u>(ctx, &aot_mem) && ctx.pc == 0x0891B994u) goto L_0891B994;
    return;
L_0891B994:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B9A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B9DC;
      }
      goto L_0891B9D0;
    }
L_0891B9D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BB14;
      }
      goto L_0891B9DC;
    }
L_0891B9DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] | 2u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BA18;
      }
      goto L_0891BA08;
    }
L_0891BA08:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891BA18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891BA18u) goto L_0891BA18;
    return;
L_0891BA18:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891BA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0891BA24u) goto L_0891BA24;
    return;
L_0891BA24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891BA30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 250u, 0x088E13E8u>(ctx, &aot_mem) && ctx.pc == 0x0891BA30u) goto L_0891BA30;
    return;
L_0891BA30:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891BA40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0891BA40u) goto L_0891BA40;
    return;
L_0891BA40:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891BA54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0891BA54u) goto L_0891BA54;
    return;
L_0891BA54:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891BA60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0891BA60u) goto L_0891BA60;
    return;
L_0891BA60:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(328));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891BA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0891BA74u) goto L_0891BA74;
    return;
L_0891BA74:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891BA80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0891BA80u) goto L_0891BA80;
    return;
L_0891BA80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(324));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891BA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0891BA94u) goto L_0891BA94;
    return;
L_0891BA94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12848)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0891BAB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 321u, 0x089114CCu>(ctx, &aot_mem) && ctx.pc == 0x0891BAB8u) goto L_0891BAB8;
    return;
L_0891BAB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891BAD0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891BAD0u) goto L_0891BAD0;
    return;
L_0891BAD0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BAE8;
      }
      goto L_0891BAE0;
    }
L_0891BAE0:
    ctx.set_gpr(31, 0x0891BAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891BAE8u) goto L_0891BAE8;
    return;
L_0891BAE8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BB00;
      }
      goto L_0891BAF0;
    }
L_0891BAF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] | 2u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BB0C;
      }
      goto L_0891BB00;
    }
L_0891BB00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    goto L_0891BB0C;
L_0891BB0C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0891BB14;
L_0891BB14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891BB30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891BB64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891BB64u) goto L_0891BB64;
    return;
L_0891BB64:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] | 2u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891BBA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891BBA4u) goto L_0891BBA4;
    return;
L_0891BBA4:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BC40;
      }
      goto L_0891BBB0;
    }
L_0891BBB0:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BC00;
      }
      goto L_0891BBBC;
    }
L_0891BBBC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(300));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891BBE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891BBE8u) goto L_0891BBE8;
    return;
L_0891BBE8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    goto L_0891BBEC;
L_0891BBEC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BBBC;
      }
      goto L_0891BBF8;
    }
L_0891BBF8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0891BC00;
L_0891BC00:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BBEC;
      }
      goto L_0891BC0C;
    }
L_0891BC0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] | 4u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BC30;
      }
      goto L_0891BC20;
    }
L_0891BC20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BC3C;
      }
      goto L_0891BC30;
    }
L_0891BC30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    goto L_0891BC3C;
L_0891BC3C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    goto L_0891BC40;
L_0891BC40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(560));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891BC64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891BC80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891BC80u) goto L_0891BC80;
    return;
L_0891BC80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891BC90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891BCACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891BCACu) goto L_0891BCAC;
    return;
L_0891BCAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891BCBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9004), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9259), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9264), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9519), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x0891BCECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0891BCECu) goto L_0891BCEC;
    return;
L_0891BCEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BD34;
      }
      goto L_0891BCF4;
    }
L_0891BCF4:
    ctx.set_gpr(31, 0x0891BCFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0891BCFCu) goto L_0891BCFC;
    return;
L_0891BCFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0891BD0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0891BD0Cu) goto L_0891BD0C;
    return;
L_0891BD0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(148)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0891BD1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0891BD1Cu) goto L_0891BD1C;
    return;
L_0891BD1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(152)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0891BD2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0891BD2Cu) goto L_0891BD2C;
    return;
L_0891BD2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_0891BD34;
L_0891BD34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(31, 0x0891BD44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 129u, 0x0895C814u>(ctx, &aot_mem) && ctx.pc == 0x0891BD44u) goto L_0891BD44;
    return;
L_0891BD44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x0891BD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 130u, 0x0895C820u>(ctx, &aot_mem) && ctx.pc == 0x0891BD54u) goto L_0891BD54;
    return;
L_0891BD54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x0891BD60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 131u, 0x0895C82Cu>(ctx, &aot_mem) && ctx.pc == 0x0891BD60u) goto L_0891BD60;
    return;
L_0891BD60:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x0891BD74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0891BD74u) goto L_0891BD74;
    return;
L_0891BD74:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x0891BD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0891BD88u) goto L_0891BD88;
    return;
L_0891BD88:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x0891BD9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0891BD9Cu) goto L_0891BD9C;
    return;
L_0891BD9C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x0891BDB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0891BDB0u) goto L_0891BDB0;
    return;
L_0891BDB0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(552));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x0891BDC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0891BDC4u) goto L_0891BDC4;
    return;
L_0891BDC4:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BDFC;
      }
      goto L_0891BDD0;
    }
L_0891BDD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12844));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0891BDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 192u, 0x0895CC08u>(ctx, &aot_mem) && ctx.pc == 0x0891BDF0u) goto L_0891BDF0;
    return;
L_0891BDF0:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(232), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0891BDFC;
L_0891BDFC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BDD0;
      }
      goto L_0891BE08;
    }
L_0891BE08:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BE40;
      }
      goto L_0891BE14;
    }
L_0891BE14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12716));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0891BE34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 192u, 0x0895CC08u>(ctx, &aot_mem) && ctx.pc == 0x0891BE34u) goto L_0891BE34;
    return;
L_0891BE34:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(360), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0891BE40;
L_0891BE40:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BE14;
      }
      goto L_0891BE4C;
    }
L_0891BE4C:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BE84;
      }
      goto L_0891BE58;
    }
L_0891BE58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12556));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0891BE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 192u, 0x0895CC08u>(ctx, &aot_mem) && ctx.pc == 0x0891BE78u) goto L_0891BE78;
    return;
L_0891BE78:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(488), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0891BE84;
L_0891BE84:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BE58;
      }
      goto L_0891BE90;
    }
L_0891BE90:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BEC8;
      }
      goto L_0891BE9C;
    }
L_0891BE9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12468));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0891BEBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 192u, 0x0895CC08u>(ctx, &aot_mem) && ctx.pc == 0x0891BEBCu) goto L_0891BEBC;
    return;
L_0891BEBC:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(552), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0891BEC8;
L_0891BEC8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BE9C;
      }
      goto L_0891BED4;
    }
L_0891BED4:
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
L_0891BEF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0891BF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 8u, 0x0891C110u>(ctx, &aot_mem) && ctx.pc == 0x0891BF08u) goto L_0891BF08;
    return;
L_0891BF08:
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
L_0891BF20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(148));
    ctx.set_gpr(31, 0x0891BF3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0891BF3Cu) goto L_0891BF3C;
    return;
L_0891BF3C:
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
L_0891BF54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(16, ctx.gpr[10] + 0u);
    ctx.set_gpr(23, ctx.gpr[11] + 0u);
    ctx.set_gpr(31, 0x0891BFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 8u, 0x0891C110u>(ctx, &aot_mem) && ctx.pc == 0x0891BFA4u) goto L_0891BFA4;
    return;
L_0891BFA4:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.pc = 0x0891C000u; return;
}

void recomp_unit_0069(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0069_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_69(Runtime &runtime) {
    runtime.register_generated_unit(69u, 0x08918000u, 16384u, &recomp_unit_0069, &recomp_unit_0069_entry);
    runtime.register_function(0x08918004u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918010u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918014u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918020u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891802Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891803Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891804Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918050u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891805Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918064u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918080u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891808Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918098u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891809Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918108u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918114u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918120u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918124u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918130u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891813Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891814Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891815Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918160u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891816Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918174u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918190u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891819Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089181A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089181ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089181B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089181C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089181D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089181E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089181E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089181F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089181FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918218u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918224u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918230u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918234u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918240u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891824Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891825Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918268u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918278u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918298u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918300u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891830Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891831Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891832Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918330u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891833Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918344u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918360u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891836Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918378u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891837Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918388u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918394u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089183A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089183BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089183C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089183CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089183D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089183F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918400u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918404u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918414u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918424u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918430u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891843Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918444u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891844Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918454u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918470u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891847Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918488u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891848Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918498u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089184A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089184B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089184C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089184D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089184D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089184F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918504u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918514u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891851Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918524u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918540u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891854Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918558u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891855Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918568u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918574u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918584u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918594u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089185A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089185B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089185C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089185D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089185D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089185F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891860Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891862Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918638u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918650u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918664u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918684u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918690u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891869Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918704u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918710u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918754u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918760u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918764u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891876Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918784u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918818u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918824u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918830u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918878u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918930u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891894Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918954u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918960u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918974u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089189B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089189CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089189D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089189E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A20u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918AA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918AACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918AC4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918AD4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918AFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B38u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B64u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918BACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918BB8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918BC4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918BE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918BFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C38u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C50u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C74u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C94u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CC8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D3Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D6Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D74u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918DA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918DB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918DBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918DC8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918DD0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918DE0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918DECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918DF4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E18u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E4Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E6Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E7Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918EB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918EE8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918EF8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F18u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F4Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F74u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FC8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919004u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891900Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919020u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919028u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891902Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919034u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919064u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919074u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919094u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919100u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919110u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919134u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919168u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919170u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919190u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919208u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919214u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919220u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919230u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919240u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919244u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919264u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919298u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919310u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891931Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891932Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919338u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919340u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891936Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919380u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919388u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919398u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919408u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919428u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919438u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919448u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891944Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919454u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919488u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891949Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919500u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891950Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919518u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919530u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891953Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891954Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919554u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919560u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919574u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919584u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919588u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919598u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919618u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891962Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891963Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919648u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919658u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919664u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919674u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891968Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919718u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891971Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919728u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919750u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919794u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891979Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089197A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089197A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089197B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089197C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089197CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089197DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089197E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089197F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919804u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919820u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919834u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919840u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919848u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919858u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919868u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919878u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919880u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919890u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919898u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089198A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089198B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089198BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089198C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089198F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919904u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891990Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919920u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919928u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891993Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919944u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919960u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919964u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919970u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919978u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891999Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089199A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089199B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089199CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089199DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089199E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089199F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A3Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A74u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A8Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AB4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AC0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AD0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919ADCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AF4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AF8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B18u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B24u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B38u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B50u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B88u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919BA0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919BACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919BB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919BBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919BCCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919BD8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919BF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919BF4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C10u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C20u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C2Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C38u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C50u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C68u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C74u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C8Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919CA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919CB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919CBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919CC8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919CD4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919CE0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919CECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919CF8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D10u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D4Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D64u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D78u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D8Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DA0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DC0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DCCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DD8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DE0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E30u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E38u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E4Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E64u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E6Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E78u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E94u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919EA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919EB4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919EBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919EC8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919ED4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919EE0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919EE8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919EF4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F3Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F50u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F64u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919FA0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919FB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919FB8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919FC8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919FD0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919FD4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919FE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919FF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919FF8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A004u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A01Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A02Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A03Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A040u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A04Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A054u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A064u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A070u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A078u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A084u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A08Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A098u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A0A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A0ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A0C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A0C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A0D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A0DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A0E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A0E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A0F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A0F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A100u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A104u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A10Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A118u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A11Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A124u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A130u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A13Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A148u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A150u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A160u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A168u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A174u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A180u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A18Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A198u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A1A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A1ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A1B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A1C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A1D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A1D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A1E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A1ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A1F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A204u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A210u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A21Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A224u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A230u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A238u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A244u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A250u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A264u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A270u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A27Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A288u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A290u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A29Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A2A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A2B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A2D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A2DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A2E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A2F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A300u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A30Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A318u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A324u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A330u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A33Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A348u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A354u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A360u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A36Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A378u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A37Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A388u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A394u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A39Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A404u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A410u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A41Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A424u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A430u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A438u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A444u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A450u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A45Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A468u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A470u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A47Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A484u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A490u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A49Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A4A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A4B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A4BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A4C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A4D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A4DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A4E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A4F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A500u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A508u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A514u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A51Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A528u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A534u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A540u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A54Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A554u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A560u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A568u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A574u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A57Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A59Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A5A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A5B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A5BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A5CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A5DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A5E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A5F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A60Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A614u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A61Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A638u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A640u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A654u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A65Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A668u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A670u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A680u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A68Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A694u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A700u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A70Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A718u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A720u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A728u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A734u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A740u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A748u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A758u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A760u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A76Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A778u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A784u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A78Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A798u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A7A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A7ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A7B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A7CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A7D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A7E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A7ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A7FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A804u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A810u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A81Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A828u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A830u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A83Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A844u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A850u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A85Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A870u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A87Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A888u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A890u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A900u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A908u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A914u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A920u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A928u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A934u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A940u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A948u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A958u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A960u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A970u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A97Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A984u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A990u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A998u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A9A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A9B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A9BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A9C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A9D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A9D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A9F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A9FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA10u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA20u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA38u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA50u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA64u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA78u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AAA8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AAB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AAC0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AAC8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AAD8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AAE0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AAECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB18u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB38u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB6Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB78u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB8Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABB4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABC4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABC8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABF8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC2Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC38u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC64u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC88u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC94u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACA0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACC0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACCCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACF8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD4Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD68u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD78u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ADA8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ADB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ADB4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ADC4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE20u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AEDCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AEE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF24u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF38u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AFB8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AFD4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B004u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B01Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B068u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B098u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B0B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B0BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B0CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B0D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B0F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B100u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B10Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B110u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B11Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B130u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B13Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B14Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B168u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B170u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B178u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B184u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B190u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B1A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B1B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B1D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B20Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B218u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B224u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B228u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B234u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B248u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B254u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B264u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B280u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B288u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B290u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B29Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B2A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B2B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B2DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B2FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B314u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B32Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B330u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B33Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B354u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B384u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B390u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B3B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B3CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B3D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B3E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B3F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B400u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B40Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B424u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B428u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B434u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B444u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B464u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B4ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B4C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B4D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B4F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B51Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B538u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B54Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B56Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B588u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B5A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B5B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B5C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B5E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B5F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B604u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B614u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B620u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B62Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B638u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B64Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B718u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B73Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B758u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B76Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B778u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B78Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B790u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B79Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B7A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B7A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B7B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B7C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B7E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B7F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B804u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B81Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B830u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B83Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B848u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B85Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B870u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B874u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B880u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B884u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B894u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B89Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B900u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B920u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B930u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B940u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B950u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B984u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B994u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA18u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA24u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA30u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA74u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA94u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BAB8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BAD0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BAE0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BAE8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BAF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB30u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB64u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BBA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BBB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BBBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BBE8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BBECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BBF8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC20u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC30u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC3Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC64u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCF4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD2Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD74u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD88u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDC4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDD0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE4Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE78u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BEBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BEC8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BED4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BEF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF20u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF3Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFA4u, &recomp_unit_0069, "recomp_unit_0069");
}
} // namespace psprecomp
