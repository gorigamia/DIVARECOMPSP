#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0095[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0,
    7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17,
    0, 0, 18, 0, 0, 0, 19, 0, 0, 20, 0, 21, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 26, 0, 0, 27, 0, 28, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 36,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 39, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0,
    45, 0, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 50, 0, 51, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0,
    54, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 61,
    0, 62, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 84, 0,
    0, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 97, 0, 0, 98, 99, 0, 0, 0, 0, 0, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 104, 105, 0, 0, 106, 0, 0, 107, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 110, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 0, 0, 115, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 128, 0, 129, 0,
    0, 130, 0, 0, 131, 0, 0, 0, 132, 133, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0,
    138, 0, 139, 0, 0, 140, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 145, 0, 146, 0, 147, 0,
    0, 148, 0, 149, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 157, 158,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 164, 165, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0,
    0, 0, 0, 174, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181,
    0, 0, 0, 0, 182, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 186, 0, 0, 187, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    0, 190, 0, 191, 0, 0, 192, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 197, 198, 0, 0, 0, 199, 0, 0, 0, 0,
    0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 206, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0,
    215, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224,
    0, 0, 225, 0, 226, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 232, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0,
    0, 235, 0, 0, 0, 0, 0, 236, 237, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0,
    244, 0, 0, 245, 0, 246, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 252, 0, 253, 0, 0, 254, 0,
    0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 258, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 263, 0, 264,
    0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 0, 278, 0, 0, 279, 0, 280, 0, 0, 281,
    0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 286, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 0, 290, 0, 0, 291, 0,
    292, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0,
    301, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 305, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0,
    0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 317, 0,
    0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324,
    0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 327, 0, 328, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0,
    333, 0, 334, 0, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0,
    0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 347, 0,
    0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 352, 0, 0, 353, 0, 354, 0, 0, 355, 0, 356, 0, 0,
    0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 359, 0, 360, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 0, 364, 0, 0, 365, 0, 366, 0, 367,
    0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 371, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0,
    0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 0, 384, 0, 385, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 388,
    0, 0, 0, 389, 0, 0, 390, 0, 391, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 397, 0, 398, 0, 0, 0, 399,
    0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 402, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0,
    0, 407, 0, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 411, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 416,
    0, 417, 0, 418, 0, 0, 419, 0, 0, 420, 0, 0, 0, 421, 0, 0, 422, 0, 423, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0,
    0, 0, 0, 0, 427, 428, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0,
    440, 0, 0, 0, 441, 0, 0, 442, 0, 443, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 446, 447, 0, 0, 0, 448, 0, 0, 449, 0, 450, 0,
    451, 0, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 0, 455, 0, 456, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0,
    0, 460, 461, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 465, 0, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0,
    469, 0, 470, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 473, 0, 0, 474, 0, 475, 0, 0, 476, 0, 477, 0, 0, 0, 0, 0, 478, 479, 0,
    0, 0, 480, 0, 0, 481, 0, 482, 0, 483, 0, 0, 484, 0, 0, 485, 0, 0, 0, 486, 0, 0, 487, 0, 488, 0, 489, 0, 0, 0, 490, 0,
    0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 493, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 496, 0, 497, 0, 0, 0, 498, 0, 0, 499,
    0, 0, 0, 500, 0, 0, 501, 0, 502, 0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 505, 506, 0, 0, 0, 507, 0, 0, 508, 0, 509, 0, 510,
    0, 0, 511, 0, 0, 512, 0, 0, 0, 513, 0, 0, 514, 0, 515, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0,
    519, 520, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0, 524, 0, 0, 0, 525, 0, 0, 526, 0, 0, 0, 527, 0, 0, 528, 0, 529, 0,
    0, 530, 0, 531, 0, 0, 0, 0, 0, 532, 533, 0, 0, 0, 534, 0, 0, 535, 0, 536, 0, 537, 0, 0, 538, 0, 0, 539, 0, 0, 0, 540,
    0, 0, 541, 0, 542, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 547, 0, 548, 0, 0, 0, 0, 0, 549,
    0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 554, 0, 555, 0, 0, 556, 0, 0, 0, 0,
    0, 0, 557, 0, 558, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 563,
    0, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 0, 566, 0, 0, 567, 0, 568, 0, 0, 569, 0, 570, 0, 0, 0, 0, 0, 571, 572, 0, 0,
    0, 573, 0, 0, 574, 0, 575, 0, 576, 0, 0, 577, 0, 0, 578, 0, 0, 0, 579, 0, 0, 580, 0, 581, 0, 582, 0, 0, 0, 583, 0, 0,
    0, 0, 0, 584, 0, 0, 0, 0, 0, 585, 586, 0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 589, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0,
    592, 0, 0, 0, 593, 0, 0, 594, 0, 595, 0, 0, 596, 0, 597, 0, 0, 0, 0, 0, 598, 599, 0, 0, 0, 600, 0, 0, 601, 0, 602, 0,
    603, 0, 0, 604, 0, 0, 605, 0, 0, 0, 606, 0, 0, 607, 0, 608, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0,
    0, 612, 613, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 619, 0, 0, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 0, 622, 0, 623, 0, 0, 0, 0,
    0, 624, 0, 0, 625, 0, 626, 0, 0, 0, 627, 0, 0, 628, 0, 0, 0, 629, 0, 0, 630, 0, 631, 0, 0, 632, 0, 633, 0, 0, 0, 0,
    0, 634, 0, 0, 0, 635, 0, 0, 636, 0, 637, 0, 638, 0, 0, 639, 0, 0, 640, 0, 0, 0, 641, 0, 0, 642, 0, 643, 0, 644, 0, 0,
    0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 648, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 652, 0, 0, 0, 653,
    0, 0, 654, 0, 0, 0, 655, 0, 0, 656, 0, 657, 0, 0, 658, 0, 659, 0, 0, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 662, 0, 663,
    0, 664, 0, 0, 665, 0, 0, 666, 0, 0, 0, 667, 0, 0, 668, 0, 669, 0, 670, 0, 0, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0,
    0, 0, 673, 674, 0, 675, 0, 0, 0, 0, 0, 676, 0, 0, 677, 0, 678, 0, 0, 0, 679, 0, 0, 680, 0, 0, 0, 681, 0, 0, 682, 0,
    683, 0, 0, 684, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 0, 687, 0, 0, 688, 0, 689, 0, 690, 0, 0, 691, 0, 0, 692, 0, 0, 0,
    693, 0, 0, 694, 0, 695, 0, 696, 0, 0, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 699, 700, 0, 701, 0, 0, 0, 0, 0,
    702, 0, 0, 703, 0, 704, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0, 707, 0, 0, 0, 708, 0, 0, 709, 0, 710, 0, 0,
    711, 0, 712, 0, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 715, 0, 716, 0, 717, 0, 0, 718, 0, 0, 719, 0, 0, 0, 720, 0, 0,
    721, 0, 722, 0, 723, 0, 0, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 726, 727, 0, 728, 0, 0, 0, 0, 0, 729, 0, 0,
    730, 0, 731, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 0, 734, 0, 0, 735, 0, 736, 0, 0, 737, 0, 738, 0, 0, 0, 0, 0, 739,
    0, 0, 0, 740, 0, 0, 741, 0, 742, 0, 743, 0, 0, 744, 0, 0, 745, 0, 0, 0, 746, 0, 0, 747, 0, 748, 0, 749, 0, 0, 0, 750,
    0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 752, 753, 0, 754, 0, 0, 0, 0, 0, 755, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 757, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 760, 0, 0,
    0, 761, 0, 0, 762, 0, 0, 763, 0, 0, 764, 765, 0, 0, 766, 0, 767, 0, 0, 0, 768, 0, 769, 0, 0, 770, 0, 0, 0, 771, 0, 0,
    0, 772, 0, 773, 0, 0, 0, 774, 0, 0, 775, 0, 0, 0, 776, 0, 0, 0, 777, 0, 0, 0, 778, 0, 779, 0, 0, 0, 780, 0, 0, 0,
    0, 781, 0, 0, 0, 0, 0, 782, 0, 783, 0, 0, 0, 784, 0, 0, 785, 0, 786, 0, 0, 787, 0, 788, 0, 0, 0, 0, 789, 0, 0, 0,
    0, 790, 0, 0, 0, 0, 0, 791, 792, 0, 793, 0, 0, 0, 0, 0, 794, 0, 0, 795, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0,
    0, 797, 0, 0, 798, 0, 799, 0, 800, 0, 0, 801, 0, 0, 802, 0, 0, 0, 803, 0, 0, 804, 0, 805, 0, 806, 0, 0, 0, 807, 0, 0,
    0, 808, 0, 0, 0, 809, 0, 0, 810, 0, 811, 0, 0, 812, 0, 813, 0, 0, 0, 0, 814, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 816,
    817, 0, 818, 0, 0, 0, 0, 0, 819, 0, 0, 820, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 822, 0, 0, 823, 0, 824, 0,
    825, 0, 0, 826, 0, 0, 827, 0, 0, 0, 828, 0, 0, 829, 0, 830, 0, 831, 0, 0, 0, 832, 0, 833, 0, 0, 0, 834, 0, 0, 0, 0,
    0, 835, 836, 0, 837, 0, 0, 0, 0, 0, 838, 0, 0, 839, 0, 840, 0, 841, 0, 0, 842, 0, 0, 0, 843, 0, 844, 0, 0, 0, 0, 845,
    0, 846, 0, 847, 0, 0, 0, 848, 0, 0, 0, 849, 0, 0, 0, 850, 0, 851, 0, 0, 0, 852, 0, 0, 0, 0, 0, 0, 0, 853, 0, 0,
    0, 854, 0, 0, 855, 0, 856, 0, 0, 0, 857, 0, 858, 0, 0, 859, 0, 860, 0, 0, 0, 861, 0, 0, 0, 862, 0, 0, 863, 0, 0, 864,
    0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 868, 0, 869, 0, 870,
    0, 0, 871, 0, 0, 0, 0, 0, 872, 0, 0, 0, 0, 0, 0, 0, 873, 0, 0, 0, 0, 0, 0, 874, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 875, 0, 0, 0, 0, 0, 0, 0, 876, 0, 0, 0, 0, 0, 877, 0, 0, 0, 0, 0, 0, 878, 0, 879, 0, 0, 0, 880, 0, 881,
    0, 0, 0, 0, 0, 882, 0, 883, 0, 0, 0, 884, 0, 0, 885, 0, 886, 0, 0, 887, 0, 888, 0, 0, 889, 890, 891, 0, 892, 0, 0, 0,
    0, 0, 893, 0, 0, 0, 0, 0, 894, 0, 0, 0, 895, 0, 0, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    897, 0, 0, 0, 0, 0, 0, 0, 898, 0, 0, 0, 0, 0, 899, 0, 0, 900, 0, 0, 901, 0, 0, 0, 0, 0, 0, 902, 0, 0, 0, 0,
    0, 903, 0, 0, 0, 0, 0, 0, 0, 904, 0, 0, 0, 905, 0, 0, 0, 906, 0, 0, 0, 0, 0, 0, 0, 0, 907, 0, 908, 0, 0, 909,
    0, 0, 910, 0, 0, 0, 911, 0, 0, 912, 0, 0, 0, 0, 0, 0, 0, 913, 0, 0, 0, 0, 0, 914, 0, 0, 0, 0, 915, 0, 0, 0,
    0, 0, 0, 0, 916, 0, 0, 0, 0, 917, 0, 918, 0, 0, 0, 0, 0, 0, 919, 0, 0, 0, 0, 0, 0, 920, 0, 921, 0, 922, 0, 0,
    0, 0, 0, 923, 0, 924, 0, 0, 925, 0, 0, 926, 0, 0, 0, 0, 0, 0, 0, 0, 927, 0, 0, 0, 0, 928, 0, 0, 0, 0, 0, 0,
    0, 929, 0, 0, 0, 0, 930, 0, 931, 0, 0, 932, 933, 0, 0, 0, 0, 934, 0, 0, 0, 0, 935, 0, 0, 936, 0, 0, 937, 0, 938, 0,
    0, 939, 0, 0, 940, 0, 0, 0, 941, 0, 0, 0, 0, 0, 942, 0, 0, 943, 0, 0, 0, 0, 0, 0, 944, 0, 945, 0, 0, 946, 947, 0,
    0, 0, 948, 0, 0, 0, 0, 949, 0, 0, 950, 0, 0, 0, 951, 0, 952, 0, 0, 953, 954, 0, 0, 0, 955, 0, 0, 956, 0, 0, 0, 957,
    0, 0, 0, 958, 0, 0, 0, 0, 0, 0, 959, 0, 0, 960, 961, 0, 0, 962, 0, 0, 963, 0, 0, 0, 0, 964, 0, 965, 0, 0, 966, 967,
    968, 0, 0, 0, 0, 0, 969, 0, 0, 0, 0, 0, 970, 0, 0, 0, 0, 0, 971, 0, 0, 0, 0, 0, 972, 0, 0, 0, 0, 0, 973, 0,
    0, 974, 0, 975, 0, 0, 976, 977, 0, 0, 0, 978, 0, 0, 0, 0, 0, 0, 0, 0, 979, 0, 0, 980, 0, 0, 0, 0, 981, 0, 0, 0,
    0, 982, 0, 983, 0, 0, 0, 984, 0, 0, 0, 0, 985, 0, 0, 0, 0, 986, 0, 0, 0, 0, 987, 0, 0, 988, 0, 0, 989, 0, 0, 990,
    0, 0, 0, 0, 991, 0, 992, 993, 0, 0, 0, 994, 0, 0, 0, 0, 995, 0, 996, 0, 0, 997, 998, 0, 0, 0, 999, 0, 0, 0, 0, 1000,
    0, 1001, 0, 0, 1002, 1003, 0, 0, 0, 1004, 0, 0, 0, 0, 1005, 0, 1006, 0, 0, 1007, 1008, 0, 0, 0, 1009, 0, 0, 0, 0, 0, 1010, 0,
    1011, 0, 0, 1012, 0, 0, 0, 1013, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1014, 0, 1015, 0, 0, 1016, 1017, 0, 1018, 1019, 0, 0, 0, 0,
    1020, 0, 0, 0, 0, 1021, 0, 0, 1022, 0, 0, 1023, 0, 0, 1024, 0, 0, 0, 0, 1025, 0, 0, 0, 1026, 0, 0, 1027, 0, 1028, 0, 1029, 0,
    0, 1030, 1031, 0, 0, 0, 1032, 0, 0, 0, 0, 0, 1033, 0, 0, 0, 1034, 0, 0, 0, 0, 0, 1035, 0, 0, 0, 1036, 0, 0, 0, 0, 0,
    1037, 0, 0, 0, 1038, 0, 0, 0, 0, 0, 1039, 0, 0, 0, 1040, 0, 0, 0, 0, 0, 0, 0, 0, 1041, 0, 0, 0, 0, 1042, 0, 0, 0,
    0, 0, 0, 1043, 0, 0, 0, 0, 0, 0, 0, 1044, 0, 1045, 0, 0, 1046, 0, 0, 0, 0, 0, 0, 1047, 0, 0, 1048, 0, 0, 1049, 1050, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1051, 0, 1052, 0, 1053, 0, 0, 0, 0, 0, 1054, 0, 0, 1055, 0, 0, 0, 0, 1056, 0,
    0, 0, 0, 0, 1057, 0, 1058, 0, 0, 0, 0, 0, 0, 1059, 0, 0, 1060, 1061, 0, 0, 0, 0, 1062, 0, 0, 0, 0, 1063, 0, 0, 0, 0,
    0, 0, 1064, 0, 0, 0, 1065, 0, 1066, 0, 0, 1067, 0, 0, 1068, 1069, 0, 0, 0, 0, 1070, 0, 0, 0, 0, 1071, 0, 0, 1072, 0, 0, 0,
    0, 0, 1073, 1074, 0, 1075, 0, 0, 0, 0, 1076, 0, 1077, 0, 0, 0, 1078, 0, 0, 0, 0, 1079, 0, 1080, 0, 1081, 0, 1082, 0, 0, 0, 1083,
};
void recomp_unit_0095_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08980000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0095[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08980000;
    case 2u: goto L_08980004;
    case 3u: goto L_08980038;
    case 4u: goto L_08980044;
    case 5u: goto L_08980068;
    case 6u: goto L_08980074;
    case 7u: goto L_08980080;
    case 8u: goto L_08980090;
    case 9u: goto L_0898009C;
    case 10u: goto L_089800A8;
    case 11u: goto L_089800B0;
    case 12u: goto L_089800BC;
    case 13u: goto L_089800C8;
    case 14u: goto L_089800D4;
    case 15u: goto L_089800E0;
    case 16u: goto L_089800F0;
    case 17u: goto L_089800FC;
    case 18u: goto L_08980108;
    case 19u: goto L_08980118;
    case 20u: goto L_08980124;
    case 21u: goto L_0898012C;
    case 22u: goto L_08980138;
    case 23u: goto L_08980140;
    case 24u: goto L_08980154;
    case 25u: goto L_08980170;
    case 26u: goto L_0898018C;
    case 27u: goto L_08980198;
    case 28u: goto L_089801A0;
    case 29u: goto L_089801A8;
    case 30u: goto L_089801B4;
    case 31u: goto L_089801C0;
    case 32u: goto L_089801D0;
    case 33u: goto L_089801DC;
    case 34u: goto L_089801E4;
    case 35u: goto L_089801EC;
    case 36u: goto L_089801FC;
    case 37u: goto L_08980214;
    case 38u: goto L_0898022C;
    case 39u: goto L_08980230;
    case 40u: goto L_08980238;
    case 41u: goto L_08980250;
    case 42u: goto L_0898025C;
    case 43u: goto L_0898026C;
    case 44u: goto L_08980274;
    case 45u: goto L_08980280;
    case 46u: goto L_08980290;
    case 47u: goto L_0898029C;
    case 48u: goto L_089802A8;
    case 49u: goto L_089802B0;
    case 50u: goto L_089802BC;
    case 51u: goto L_089802C4;
    case 52u: goto L_089802C8;
    case 53u: goto L_089802EC;
    case 54u: goto L_08980300;
    case 55u: goto L_08980310;
    case 56u: goto L_08980324;
    case 57u: goto L_08980334;
    case 58u: goto L_08980348;
    case 59u: goto L_08980358;
    case 60u: goto L_08980374;
    case 61u: goto L_0898037C;
    case 62u: goto L_08980384;
    case 63u: goto L_08980398;
    case 64u: goto L_089803A0;
    case 65u: goto L_089803B0;
    case 66u: goto L_089803C0;
    case 67u: goto L_089803D8;
    case 68u: goto L_089803E8;
    case 69u: goto L_089803F8;
    case 70u: goto L_08980428;
    case 71u: goto L_0898043C;
    case 72u: goto L_08980448;
    case 73u: goto L_08980454;
    case 74u: goto L_08980474;
    case 75u: goto L_08980494;
    case 76u: goto L_089804B0;
    case 77u: goto L_089804C8;
    case 78u: goto L_089804E0;
    case 79u: goto L_08980500;
    case 80u: goto L_0898052C;
    case 81u: goto L_0898053C;
    case 82u: goto L_08980558;
    case 83u: goto L_08980570;
    case 84u: goto L_08980578;
    case 85u: goto L_08980588;
    case 86u: goto L_08980594;
    case 87u: goto L_089805A4;
    case 88u: goto L_089805B0;
    case 89u: goto L_089805BC;
    case 90u: goto L_089805D8;
    case 91u: goto L_0898060C;
    case 92u: goto L_08980630;
    case 93u: goto L_0898064C;
    case 94u: goto L_08980658;
    case 95u: goto L_08980694;
    case 96u: goto L_089806D0;
    case 97u: goto L_089806D4;
    case 98u: goto L_089806E0;
    case 99u: goto L_089806E4;
    case 100u: goto L_08980708;
    case 101u: goto L_08980728;
    case 102u: goto L_0898073C;
    case 103u: goto L_08980748;
    case 104u: goto L_08980758;
    case 105u: goto L_0898075C;
    case 106u: goto L_08980768;
    case 107u: goto L_08980774;
    case 108u: goto L_08980798;
    case 109u: goto L_089807B4;
    case 110u: goto L_089807B8;
    case 111u: goto L_089807C0;
    case 112u: goto L_089807CC;
    case 113u: goto L_089807E0;
    case 114u: goto L_08980804;
    case 115u: goto L_08980820;
    case 116u: goto L_08980824;
    case 117u: goto L_08980830;
    case 118u: goto L_0898084C;
    case 119u: goto L_08980864;
    case 120u: goto L_08980888;
    case 121u: goto L_089808A4;
    case 122u: goto L_089808A8;
    case 123u: goto L_089808B0;
    case 124u: goto L_089808B8;
    case 125u: goto L_089808D0;
    case 126u: goto L_089808DC;
    case 127u: goto L_089808EC;
    case 128u: goto L_089808F0;
    case 129u: goto L_089808F8;
    case 130u: goto L_08980904;
    case 131u: goto L_08980910;
    case 132u: goto L_08980920;
    case 133u: goto L_08980924;
    case 134u: goto L_0898092C;
    case 135u: goto L_08980938;
    case 136u: goto L_0898095C;
    case 137u: goto L_08980970;
    case 138u: goto L_08980980;
    case 139u: goto L_08980988;
    case 140u: goto L_08980994;
    case 141u: goto L_08980998;
    case 142u: goto L_089809AC;
    case 143u: goto L_089809C8;
    case 144u: goto L_089809D4;
    case 145u: goto L_089809E8;
    case 146u: goto L_089809F0;
    case 147u: goto L_089809F8;
    case 148u: goto L_08980A04;
    case 149u: goto L_08980A0C;
    case 150u: goto L_08980A20;
    case 151u: goto L_08980A28;
    case 152u: goto L_08980A30;
    case 153u: goto L_08980A38;
    case 154u: goto L_08980A40;
    case 155u: goto L_08980A58;
    case 156u: goto L_08980A60;
    case 157u: goto L_08980A78;
    case 158u: goto L_08980A7C;
    case 159u: goto L_08980A90;
    case 160u: goto L_08980AAC;
    case 161u: goto L_08980AB8;
    case 162u: goto L_08980AC8;
    case 163u: goto L_08980AD0;
    case 164u: goto L_08980AE4;
    case 165u: goto L_08980AE8;
    case 166u: goto L_08980AFC;
    case 167u: goto L_08980B10;
    case 168u: goto L_08980B1C;
    case 169u: goto L_08980B2C;
    case 170u: goto L_08980B30;
    case 171u: goto L_08980B40;
    case 172u: goto L_08980B58;
    case 173u: goto L_08980B68;
    case 174u: goto L_08980B8C;
    case 175u: goto L_08980B98;
    case 176u: goto L_08980BA0;
    case 177u: goto L_08980BB8;
    case 178u: goto L_08980BC8;
    case 179u: goto L_08980BDC;
    case 180u: goto L_08980BEC;
    case 181u: goto L_08980BFC;
    case 182u: goto L_08980C10;
    case 183u: goto L_08980C18;
    case 184u: goto L_08980C24;
    case 185u: goto L_08980C34;
    case 186u: goto L_08980C3C;
    case 187u: goto L_08980C48;
    case 188u: goto L_08980C4C;
    case 189u: goto L_08980C68;
    case 190u: goto L_08980C84;
    case 191u: goto L_08980C8C;
    case 192u: goto L_08980C98;
    case 193u: goto L_08980C9C;
    case 194u: goto L_08980CAC;
    case 195u: goto L_08980CC4;
    case 196u: goto L_08980CCC;
    case 197u: goto L_08980CD8;
    case 198u: goto L_08980CDC;
    case 199u: goto L_08980CEC;
    case 200u: goto L_08980D0C;
    case 201u: goto L_08980D14;
    case 202u: goto L_08980D28;
    case 203u: goto L_08980D34;
    case 204u: goto L_08980D48;
    case 205u: goto L_08980D54;
    case 206u: goto L_08980D88;
    case 207u: goto L_08980D90;
    case 208u: goto L_08980DA0;
    case 209u: goto L_08980DB0;
    case 210u: goto L_08980DBC;
    case 211u: goto L_08980DC8;
    case 212u: goto L_08980DD4;
    case 213u: goto L_08980DDC;
    case 214u: goto L_08980DF0;
    case 215u: goto L_08980E00;
    case 216u: goto L_08980E10;
    case 217u: goto L_08980E1C;
    case 218u: goto L_08980E2C;
    case 219u: goto L_08980E38;
    case 220u: goto L_08980E40;
    case 221u: goto L_08980E4C;
    case 222u: goto L_08980E54;
    case 223u: goto L_08980E6C;
    case 224u: goto L_08980E7C;
    case 225u: goto L_08980E88;
    case 226u: goto L_08980E90;
    case 227u: goto L_08980E98;
    case 228u: goto L_08980EA4;
    case 229u: goto L_08980EB0;
    case 230u: goto L_08980EC0;
    case 231u: goto L_08980ECC;
    case 232u: goto L_08980ED4;
    case 233u: goto L_08980EDC;
    case 234u: goto L_08980EEC;
    case 235u: goto L_08980F04;
    case 236u: goto L_08980F1C;
    case 237u: goto L_08980F20;
    case 238u: goto L_08980F28;
    case 239u: goto L_08980F40;
    case 240u: goto L_08980F4C;
    case 241u: goto L_08980F54;
    case 242u: goto L_08980F64;
    case 243u: goto L_08980F70;
    case 244u: goto L_08980F80;
    case 245u: goto L_08980F8C;
    case 246u: goto L_08980F94;
    case 247u: goto L_08980FA0;
    case 248u: goto L_08980FA8;
    case 249u: goto L_08980FC0;
    case 250u: goto L_08980FD0;
    case 251u: goto L_08980FDC;
    case 252u: goto L_08980FE4;
    case 253u: goto L_08980FEC;
    case 254u: goto L_08980FF8;
    case 255u: goto L_08981004;
    case 256u: goto L_08981014;
    case 257u: goto L_08981020;
    case 258u: goto L_08981028;
    case 259u: goto L_08981030;
    case 260u: goto L_08981040;
    case 261u: goto L_08981058;
    case 262u: goto L_08981070;
    case 263u: goto L_08981074;
    case 264u: goto L_0898107C;
    case 265u: goto L_08981094;
    case 266u: goto L_089810A0;
    case 267u: goto L_089810A8;
    case 268u: goto L_089810B8;
    case 269u: goto L_089810CC;
    case 270u: goto L_089810D4;
    case 271u: goto L_089810E8;
    case 272u: goto L_08981100;
    case 273u: goto L_08981114;
    case 274u: goto L_0898111C;
    case 275u: goto L_08981134;
    case 276u: goto L_08981140;
    case 277u: goto L_0898114C;
    case 278u: goto L_0898115C;
    case 279u: goto L_08981168;
    case 280u: goto L_08981170;
    case 281u: goto L_0898117C;
    case 282u: goto L_08981184;
    case 283u: goto L_08981198;
    case 284u: goto L_089811A8;
    case 285u: goto L_089811B4;
    case 286u: goto L_089811BC;
    case 287u: goto L_089811C4;
    case 288u: goto L_089811D0;
    case 289u: goto L_089811DC;
    case 290u: goto L_089811EC;
    case 291u: goto L_089811F8;
    case 292u: goto L_08981200;
    case 293u: goto L_08981208;
    case 294u: goto L_08981218;
    case 295u: goto L_08981230;
    case 296u: goto L_08981248;
    case 297u: goto L_0898124C;
    case 298u: goto L_08981254;
    case 299u: goto L_0898126C;
    case 300u: goto L_08981278;
    case 301u: goto L_08981280;
    case 302u: goto L_0898128C;
    case 303u: goto L_089812A0;
    case 304u: goto L_089812B0;
    case 305u: goto L_089812B8;
    case 306u: goto L_089812C4;
    case 307u: goto L_089812CC;
    case 308u: goto L_089812EC;
    case 309u: goto L_089812F4;
    case 310u: goto L_08981304;
    case 311u: goto L_08981314;
    case 312u: goto L_08981328;
    case 313u: goto L_08981344;
    case 314u: goto L_0898134C;
    case 315u: goto L_0898135C;
    case 316u: goto L_08981368;
    case 317u: goto L_08981378;
    case 318u: goto L_08981398;
    case 319u: goto L_089813A0;
    case 320u: goto L_089813B0;
    case 321u: goto L_089813C0;
    case 322u: goto L_089813D4;
    case 323u: goto L_089813DC;
    case 324u: goto L_089813FC;
    case 325u: goto L_08981414;
    case 326u: goto L_0898141C;
    case 327u: goto L_08981428;
    case 328u: goto L_08981430;
    case 329u: goto L_08981434;
    case 330u: goto L_08981448;
    case 331u: goto L_0898146C;
    case 332u: goto L_08981478;
    case 333u: goto L_08981480;
    case 334u: goto L_08981488;
    case 335u: goto L_08981498;
    case 336u: goto L_089814A4;
    case 337u: goto L_089814B0;
    case 338u: goto L_089814B8;
    case 339u: goto L_089814D4;
    case 340u: goto L_089814E8;
    case 341u: goto L_08981504;
    case 342u: goto L_0898150C;
    case 343u: goto L_08981528;
    case 344u: goto L_08981538;
    case 345u: goto L_08981564;
    case 346u: goto L_0898156C;
    case 347u: goto L_08981578;
    case 348u: goto L_08981588;
    case 349u: goto L_08981598;
    case 350u: goto L_089815B0;
    case 351u: goto L_089815BC;
    case 352u: goto L_089815CC;
    case 353u: goto L_089815D8;
    case 354u: goto L_089815E0;
    case 355u: goto L_089815EC;
    case 356u: goto L_089815F4;
    case 357u: goto L_0898160C;
    case 358u: goto L_0898161C;
    case 359u: goto L_08981628;
    case 360u: goto L_08981630;
    case 361u: goto L_08981638;
    case 362u: goto L_08981644;
    case 363u: goto L_08981650;
    case 364u: goto L_08981660;
    case 365u: goto L_0898166C;
    case 366u: goto L_08981674;
    case 367u: goto L_0898167C;
    case 368u: goto L_0898168C;
    case 369u: goto L_089816A4;
    case 370u: goto L_089816BC;
    case 371u: goto L_089816C0;
    case 372u: goto L_089816C8;
    case 373u: goto L_089816E0;
    case 374u: goto L_089816EC;
    case 375u: goto L_08981708;
    case 376u: goto L_0898173C;
    case 377u: goto L_08981744;
    case 378u: goto L_0898175C;
    case 379u: goto L_08981764;
    case 380u: goto L_08981780;
    case 381u: goto L_089817A0;
    case 382u: goto L_089817AC;
    case 383u: goto L_089817BC;
    case 384u: goto L_089817C8;
    case 385u: goto L_089817D0;
    case 386u: goto L_089817DC;
    case 387u: goto L_089817E4;
    case 388u: goto L_089817FC;
    case 389u: goto L_0898180C;
    case 390u: goto L_08981818;
    case 391u: goto L_08981820;
    case 392u: goto L_08981828;
    case 393u: goto L_08981834;
    case 394u: goto L_08981840;
    case 395u: goto L_08981850;
    case 396u: goto L_0898185C;
    case 397u: goto L_08981864;
    case 398u: goto L_0898186C;
    case 399u: goto L_0898187C;
    case 400u: goto L_08981894;
    case 401u: goto L_089818AC;
    case 402u: goto L_089818B0;
    case 403u: goto L_089818B8;
    case 404u: goto L_089818D0;
    case 405u: goto L_089818DC;
    case 406u: goto L_089818E4;
    case 407u: goto L_08981904;
    case 408u: goto L_08981910;
    case 409u: goto L_08981920;
    case 410u: goto L_0898192C;
    case 411u: goto L_08981934;
    case 412u: goto L_08981940;
    case 413u: goto L_08981948;
    case 414u: goto L_08981960;
    case 415u: goto L_08981970;
    case 416u: goto L_0898197C;
    case 417u: goto L_08981984;
    case 418u: goto L_0898198C;
    case 419u: goto L_08981998;
    case 420u: goto L_089819A4;
    case 421u: goto L_089819B4;
    case 422u: goto L_089819C0;
    case 423u: goto L_089819C8;
    case 424u: goto L_089819D0;
    case 425u: goto L_089819E0;
    case 426u: goto L_089819F8;
    case 427u: goto L_08981A10;
    case 428u: goto L_08981A14;
    case 429u: goto L_08981A1C;
    case 430u: goto L_08981A34;
    case 431u: goto L_08981A40;
    case 432u: goto L_08981A60;
    case 433u: goto L_08981AA0;
    case 434u: goto L_08981AA8;
    case 435u: goto L_08981ABC;
    case 436u: goto L_08981AC4;
    case 437u: goto L_08981AD4;
    case 438u: goto L_08981ADC;
    case 439u: goto L_08981AF4;
    case 440u: goto L_08981B00;
    case 441u: goto L_08981B10;
    case 442u: goto L_08981B1C;
    case 443u: goto L_08981B24;
    case 444u: goto L_08981B30;
    case 445u: goto L_08981B38;
    case 446u: goto L_08981B50;
    case 447u: goto L_08981B54;
    case 448u: goto L_08981B64;
    case 449u: goto L_08981B70;
    case 450u: goto L_08981B78;
    case 451u: goto L_08981B80;
    case 452u: goto L_08981B8C;
    case 453u: goto L_08981B98;
    case 454u: goto L_08981BA8;
    case 455u: goto L_08981BB4;
    case 456u: goto L_08981BBC;
    case 457u: goto L_08981BC4;
    case 458u: goto L_08981BD4;
    case 459u: goto L_08981BEC;
    case 460u: goto L_08981C04;
    case 461u: goto L_08981C08;
    case 462u: goto L_08981C10;
    case 463u: goto L_08981C28;
    case 464u: goto L_08981C34;
    case 465u: goto L_08981C3C;
    case 466u: goto L_08981C50;
    case 467u: goto L_08981C5C;
    case 468u: goto L_08981C74;
    case 469u: goto L_08981C80;
    case 470u: goto L_08981C88;
    case 471u: goto L_08981C98;
    case 472u: goto L_08981CA4;
    case 473u: goto L_08981CB4;
    case 474u: goto L_08981CC0;
    case 475u: goto L_08981CC8;
    case 476u: goto L_08981CD4;
    case 477u: goto L_08981CDC;
    case 478u: goto L_08981CF4;
    case 479u: goto L_08981CF8;
    case 480u: goto L_08981D08;
    case 481u: goto L_08981D14;
    case 482u: goto L_08981D1C;
    case 483u: goto L_08981D24;
    case 484u: goto L_08981D30;
    case 485u: goto L_08981D3C;
    case 486u: goto L_08981D4C;
    case 487u: goto L_08981D58;
    case 488u: goto L_08981D60;
    case 489u: goto L_08981D68;
    case 490u: goto L_08981D78;
    case 491u: goto L_08981D90;
    case 492u: goto L_08981DA8;
    case 493u: goto L_08981DAC;
    case 494u: goto L_08981DB4;
    case 495u: goto L_08981DCC;
    case 496u: goto L_08981DD8;
    case 497u: goto L_08981DE0;
    case 498u: goto L_08981DF0;
    case 499u: goto L_08981DFC;
    case 500u: goto L_08981E0C;
    case 501u: goto L_08981E18;
    case 502u: goto L_08981E20;
    case 503u: goto L_08981E2C;
    case 504u: goto L_08981E34;
    case 505u: goto L_08981E4C;
    case 506u: goto L_08981E50;
    case 507u: goto L_08981E60;
    case 508u: goto L_08981E6C;
    case 509u: goto L_08981E74;
    case 510u: goto L_08981E7C;
    case 511u: goto L_08981E88;
    case 512u: goto L_08981E94;
    case 513u: goto L_08981EA4;
    case 514u: goto L_08981EB0;
    case 515u: goto L_08981EB8;
    case 516u: goto L_08981EC0;
    case 517u: goto L_08981ED0;
    case 518u: goto L_08981EE8;
    case 519u: goto L_08981F00;
    case 520u: goto L_08981F04;
    case 521u: goto L_08981F0C;
    case 522u: goto L_08981F24;
    case 523u: goto L_08981F30;
    case 524u: goto L_08981F38;
    case 525u: goto L_08981F48;
    case 526u: goto L_08981F54;
    case 527u: goto L_08981F64;
    case 528u: goto L_08981F70;
    case 529u: goto L_08981F78;
    case 530u: goto L_08981F84;
    case 531u: goto L_08981F8C;
    case 532u: goto L_08981FA4;
    case 533u: goto L_08981FA8;
    case 534u: goto L_08981FB8;
    case 535u: goto L_08981FC4;
    case 536u: goto L_08981FCC;
    case 537u: goto L_08981FD4;
    case 538u: goto L_08981FE0;
    case 539u: goto L_08981FEC;
    case 540u: goto L_08981FFC;
    case 541u: goto L_08982008;
    case 542u: goto L_08982010;
    case 543u: goto L_08982018;
    case 544u: goto L_08982028;
    case 545u: goto L_08982040;
    case 546u: goto L_08982058;
    case 547u: goto L_0898205C;
    case 548u: goto L_08982064;
    case 549u: goto L_0898207C;
    case 550u: goto L_08982088;
    case 551u: goto L_08982090;
    case 552u: goto L_089820C0;
    case 553u: goto L_089820CC;
    case 554u: goto L_089820D8;
    case 555u: goto L_089820E0;
    case 556u: goto L_089820EC;
    case 557u: goto L_08982108;
    case 558u: goto L_08982110;
    case 559u: goto L_08982118;
    case 560u: goto L_08982150;
    case 561u: goto L_08982158;
    case 562u: goto L_0898216C;
    case 563u: goto L_0898217C;
    case 564u: goto L_08982194;
    case 565u: goto L_089821A0;
    case 566u: goto L_089821B0;
    case 567u: goto L_089821BC;
    case 568u: goto L_089821C4;
    case 569u: goto L_089821D0;
    case 570u: goto L_089821D8;
    case 571u: goto L_089821F0;
    case 572u: goto L_089821F4;
    case 573u: goto L_08982204;
    case 574u: goto L_08982210;
    case 575u: goto L_08982218;
    case 576u: goto L_08982220;
    case 577u: goto L_0898222C;
    case 578u: goto L_08982238;
    case 579u: goto L_08982248;
    case 580u: goto L_08982254;
    case 581u: goto L_0898225C;
    case 582u: goto L_08982264;
    case 583u: goto L_08982274;
    case 584u: goto L_0898228C;
    case 585u: goto L_089822A4;
    case 586u: goto L_089822A8;
    case 587u: goto L_089822B0;
    case 588u: goto L_089822C8;
    case 589u: goto L_089822D4;
    case 590u: goto L_089822DC;
    case 591u: goto L_089822F4;
    case 592u: goto L_08982300;
    case 593u: goto L_08982310;
    case 594u: goto L_0898231C;
    case 595u: goto L_08982324;
    case 596u: goto L_08982330;
    case 597u: goto L_08982338;
    case 598u: goto L_08982350;
    case 599u: goto L_08982354;
    case 600u: goto L_08982364;
    case 601u: goto L_08982370;
    case 602u: goto L_08982378;
    case 603u: goto L_08982380;
    case 604u: goto L_0898238C;
    case 605u: goto L_08982398;
    case 606u: goto L_089823A8;
    case 607u: goto L_089823B4;
    case 608u: goto L_089823BC;
    case 609u: goto L_089823C4;
    case 610u: goto L_089823D4;
    case 611u: goto L_089823EC;
    case 612u: goto L_08982404;
    case 613u: goto L_08982408;
    case 614u: goto L_08982410;
    case 615u: goto L_08982428;
    case 616u: goto L_08982434;
    case 617u: goto L_08982454;
    case 618u: goto L_089824A4;
    case 619u: goto L_089824AC;
    case 620u: goto L_089824C8;
    case 621u: goto L_089824D0;
    case 622u: goto L_089824E4;
    case 623u: goto L_089824EC;
    case 624u: goto L_08982504;
    case 625u: goto L_08982510;
    case 626u: goto L_08982518;
    case 627u: goto L_08982528;
    case 628u: goto L_08982534;
    case 629u: goto L_08982544;
    case 630u: goto L_08982550;
    case 631u: goto L_08982558;
    case 632u: goto L_08982564;
    case 633u: goto L_0898256C;
    case 634u: goto L_08982584;
    case 635u: goto L_08982594;
    case 636u: goto L_089825A0;
    case 637u: goto L_089825A8;
    case 638u: goto L_089825B0;
    case 639u: goto L_089825BC;
    case 640u: goto L_089825C8;
    case 641u: goto L_089825D8;
    case 642u: goto L_089825E4;
    case 643u: goto L_089825EC;
    case 644u: goto L_089825F4;
    case 645u: goto L_08982604;
    case 646u: goto L_0898261C;
    case 647u: goto L_08982634;
    case 648u: goto L_08982638;
    case 649u: goto L_08982640;
    case 650u: goto L_08982658;
    case 651u: goto L_08982664;
    case 652u: goto L_0898266C;
    case 653u: goto L_0898267C;
    case 654u: goto L_08982688;
    case 655u: goto L_08982698;
    case 656u: goto L_089826A4;
    case 657u: goto L_089826AC;
    case 658u: goto L_089826B8;
    case 659u: goto L_089826C0;
    case 660u: goto L_089826D8;
    case 661u: goto L_089826E8;
    case 662u: goto L_089826F4;
    case 663u: goto L_089826FC;
    case 664u: goto L_08982704;
    case 665u: goto L_08982710;
    case 666u: goto L_0898271C;
    case 667u: goto L_0898272C;
    case 668u: goto L_08982738;
    case 669u: goto L_08982740;
    case 670u: goto L_08982748;
    case 671u: goto L_08982758;
    case 672u: goto L_08982770;
    case 673u: goto L_08982788;
    case 674u: goto L_0898278C;
    case 675u: goto L_08982794;
    case 676u: goto L_089827AC;
    case 677u: goto L_089827B8;
    case 678u: goto L_089827C0;
    case 679u: goto L_089827D0;
    case 680u: goto L_089827DC;
    case 681u: goto L_089827EC;
    case 682u: goto L_089827F8;
    case 683u: goto L_08982800;
    case 684u: goto L_0898280C;
    case 685u: goto L_08982814;
    case 686u: goto L_0898282C;
    case 687u: goto L_0898283C;
    case 688u: goto L_08982848;
    case 689u: goto L_08982850;
    case 690u: goto L_08982858;
    case 691u: goto L_08982864;
    case 692u: goto L_08982870;
    case 693u: goto L_08982880;
    case 694u: goto L_0898288C;
    case 695u: goto L_08982894;
    case 696u: goto L_0898289C;
    case 697u: goto L_089828AC;
    case 698u: goto L_089828C4;
    case 699u: goto L_089828DC;
    case 700u: goto L_089828E0;
    case 701u: goto L_089828E8;
    case 702u: goto L_08982900;
    case 703u: goto L_0898290C;
    case 704u: goto L_08982914;
    case 705u: goto L_0898292C;
    case 706u: goto L_08982944;
    case 707u: goto L_08982950;
    case 708u: goto L_08982960;
    case 709u: goto L_0898296C;
    case 710u: goto L_08982974;
    case 711u: goto L_08982980;
    case 712u: goto L_08982988;
    case 713u: goto L_089829A0;
    case 714u: goto L_089829B0;
    case 715u: goto L_089829BC;
    case 716u: goto L_089829C4;
    case 717u: goto L_089829CC;
    case 718u: goto L_089829D8;
    case 719u: goto L_089829E4;
    case 720u: goto L_089829F4;
    case 721u: goto L_08982A00;
    case 722u: goto L_08982A08;
    case 723u: goto L_08982A10;
    case 724u: goto L_08982A20;
    case 725u: goto L_08982A38;
    case 726u: goto L_08982A50;
    case 727u: goto L_08982A54;
    case 728u: goto L_08982A5C;
    case 729u: goto L_08982A74;
    case 730u: goto L_08982A80;
    case 731u: goto L_08982A88;
    case 732u: goto L_08982AA0;
    case 733u: goto L_08982AAC;
    case 734u: goto L_08982ABC;
    case 735u: goto L_08982AC8;
    case 736u: goto L_08982AD0;
    case 737u: goto L_08982ADC;
    case 738u: goto L_08982AE4;
    case 739u: goto L_08982AFC;
    case 740u: goto L_08982B0C;
    case 741u: goto L_08982B18;
    case 742u: goto L_08982B20;
    case 743u: goto L_08982B28;
    case 744u: goto L_08982B34;
    case 745u: goto L_08982B40;
    case 746u: goto L_08982B50;
    case 747u: goto L_08982B5C;
    case 748u: goto L_08982B64;
    case 749u: goto L_08982B6C;
    case 750u: goto L_08982B7C;
    case 751u: goto L_08982B94;
    case 752u: goto L_08982BAC;
    case 753u: goto L_08982BB0;
    case 754u: goto L_08982BB8;
    case 755u: goto L_08982BD0;
    case 756u: goto L_08982BDC;
    case 757u: goto L_08982C0C;
    case 758u: goto L_08982C1C;
    case 759u: goto L_08982C68;
    case 760u: goto L_08982C74;
    case 761u: goto L_08982C84;
    case 762u: goto L_08982C90;
    case 763u: goto L_08982C9C;
    case 764u: goto L_08982CA8;
    case 765u: goto L_08982CAC;
    case 766u: goto L_08982CB8;
    case 767u: goto L_08982CC0;
    case 768u: goto L_08982CD0;
    case 769u: goto L_08982CD8;
    case 770u: goto L_08982CE4;
    case 771u: goto L_08982CF4;
    case 772u: goto L_08982D04;
    case 773u: goto L_08982D0C;
    case 774u: goto L_08982D1C;
    case 775u: goto L_08982D28;
    case 776u: goto L_08982D38;
    case 777u: goto L_08982D48;
    case 778u: goto L_08982D58;
    case 779u: goto L_08982D60;
    case 780u: goto L_08982D70;
    case 781u: goto L_08982D84;
    case 782u: goto L_08982D9C;
    case 783u: goto L_08982DA4;
    case 784u: goto L_08982DB4;
    case 785u: goto L_08982DC0;
    case 786u: goto L_08982DC8;
    case 787u: goto L_08982DD4;
    case 788u: goto L_08982DDC;
    case 789u: goto L_08982DF0;
    case 790u: goto L_08982E04;
    case 791u: goto L_08982E1C;
    case 792u: goto L_08982E20;
    case 793u: goto L_08982E28;
    case 794u: goto L_08982E40;
    case 795u: goto L_08982E4C;
    case 796u: goto L_08982E68;
    case 797u: goto L_08982E84;
    case 798u: goto L_08982E90;
    case 799u: goto L_08982E98;
    case 800u: goto L_08982EA0;
    case 801u: goto L_08982EAC;
    case 802u: goto L_08982EB8;
    case 803u: goto L_08982EC8;
    case 804u: goto L_08982ED4;
    case 805u: goto L_08982EDC;
    case 806u: goto L_08982EE4;
    case 807u: goto L_08982EF4;
    case 808u: goto L_08982F04;
    case 809u: goto L_08982F14;
    case 810u: goto L_08982F20;
    case 811u: goto L_08982F28;
    case 812u: goto L_08982F34;
    case 813u: goto L_08982F3C;
    case 814u: goto L_08982F50;
    case 815u: goto L_08982F64;
    case 816u: goto L_08982F7C;
    case 817u: goto L_08982F80;
    case 818u: goto L_08982F88;
    case 819u: goto L_08982FA0;
    case 820u: goto L_08982FAC;
    case 821u: goto L_08982FC8;
    case 822u: goto L_08982FE4;
    case 823u: goto L_08982FF0;
    case 824u: goto L_08982FF8;
    case 825u: goto L_08983000;
    case 826u: goto L_0898300C;
    case 827u: goto L_08983018;
    case 828u: goto L_08983028;
    case 829u: goto L_08983034;
    case 830u: goto L_0898303C;
    case 831u: goto L_08983044;
    case 832u: goto L_08983054;
    case 833u: goto L_0898305C;
    case 834u: goto L_0898306C;
    case 835u: goto L_08983084;
    case 836u: goto L_08983088;
    case 837u: goto L_08983090;
    case 838u: goto L_089830A8;
    case 839u: goto L_089830B4;
    case 840u: goto L_089830BC;
    case 841u: goto L_089830C4;
    case 842u: goto L_089830D0;
    case 843u: goto L_089830E0;
    case 844u: goto L_089830E8;
    case 845u: goto L_089830FC;
    case 846u: goto L_08983104;
    case 847u: goto L_0898310C;
    case 848u: goto L_0898311C;
    case 849u: goto L_0898312C;
    case 850u: goto L_0898313C;
    case 851u: goto L_08983144;
    case 852u: goto L_08983154;
    case 853u: goto L_08983174;
    case 854u: goto L_08983184;
    case 855u: goto L_08983190;
    case 856u: goto L_08983198;
    case 857u: goto L_089831A8;
    case 858u: goto L_089831B0;
    case 859u: goto L_089831BC;
    case 860u: goto L_089831C4;
    case 861u: goto L_089831D4;
    case 862u: goto L_089831E4;
    case 863u: goto L_089831F0;
    case 864u: goto L_089831FC;
    case 865u: goto L_08983204;
    case 866u: goto L_08983238;
    case 867u: goto L_08983260;
    case 868u: goto L_0898326C;
    case 869u: goto L_08983274;
    case 870u: goto L_0898327C;
    case 871u: goto L_08983288;
    case 872u: goto L_089832A0;
    case 873u: goto L_089832C0;
    case 874u: goto L_089832DC;
    case 875u: goto L_08983308;
    case 876u: goto L_08983328;
    case 877u: goto L_08983340;
    case 878u: goto L_0898335C;
    case 879u: goto L_08983364;
    case 880u: goto L_08983374;
    case 881u: goto L_0898337C;
    case 882u: goto L_08983394;
    case 883u: goto L_0898339C;
    case 884u: goto L_089833AC;
    case 885u: goto L_089833B8;
    case 886u: goto L_089833C0;
    case 887u: goto L_089833CC;
    case 888u: goto L_089833D4;
    case 889u: goto L_089833E0;
    case 890u: goto L_089833E4;
    case 891u: goto L_089833E8;
    case 892u: goto L_089833F0;
    case 893u: goto L_08983408;
    case 894u: goto L_08983420;
    case 895u: goto L_08983430;
    case 896u: goto L_08983448;
    case 897u: goto L_08983480;
    case 898u: goto L_089834A0;
    case 899u: goto L_089834B8;
    case 900u: goto L_089834C4;
    case 901u: goto L_089834D0;
    case 902u: goto L_089834EC;
    case 903u: goto L_08983504;
    case 904u: goto L_08983524;
    case 905u: goto L_08983534;
    case 906u: goto L_08983544;
    case 907u: goto L_08983568;
    case 908u: goto L_08983570;
    case 909u: goto L_0898357C;
    case 910u: goto L_08983588;
    case 911u: goto L_08983598;
    case 912u: goto L_089835A4;
    case 913u: goto L_089835C4;
    case 914u: goto L_089835DC;
    case 915u: goto L_089835F0;
    case 916u: goto L_08983610;
    case 917u: goto L_08983624;
    case 918u: goto L_0898362C;
    case 919u: goto L_08983648;
    case 920u: goto L_08983664;
    case 921u: goto L_0898366C;
    case 922u: goto L_08983674;
    case 923u: goto L_0898368C;
    case 924u: goto L_08983694;
    case 925u: goto L_089836A0;
    case 926u: goto L_089836AC;
    case 927u: goto L_089836D0;
    case 928u: goto L_089836E4;
    case 929u: goto L_08983704;
    case 930u: goto L_08983718;
    case 931u: goto L_08983720;
    case 932u: goto L_0898372C;
    case 933u: goto L_08983730;
    case 934u: goto L_08983744;
    case 935u: goto L_08983758;
    case 936u: goto L_08983764;
    case 937u: goto L_08983770;
    case 938u: goto L_08983778;
    case 939u: goto L_08983784;
    case 940u: goto L_08983790;
    case 941u: goto L_089837A0;
    case 942u: goto L_089837B8;
    case 943u: goto L_089837C4;
    case 944u: goto L_089837E0;
    case 945u: goto L_089837E8;
    case 946u: goto L_089837F4;
    case 947u: goto L_089837F8;
    case 948u: goto L_08983808;
    case 949u: goto L_0898381C;
    case 950u: goto L_08983828;
    case 951u: goto L_08983838;
    case 952u: goto L_08983840;
    case 953u: goto L_0898384C;
    case 954u: goto L_08983850;
    case 955u: goto L_08983860;
    case 956u: goto L_0898386C;
    case 957u: goto L_0898387C;
    case 958u: goto L_0898388C;
    case 959u: goto L_089838A8;
    case 960u: goto L_089838B4;
    case 961u: goto L_089838B8;
    case 962u: goto L_089838C4;
    case 963u: goto L_089838D0;
    case 964u: goto L_089838E4;
    case 965u: goto L_089838EC;
    case 966u: goto L_089838F8;
    case 967u: goto L_089838FC;
    case 968u: goto L_08983900;
    case 969u: goto L_08983918;
    case 970u: goto L_08983930;
    case 971u: goto L_08983948;
    case 972u: goto L_08983960;
    case 973u: goto L_08983978;
    case 974u: goto L_08983984;
    case 975u: goto L_0898398C;
    case 976u: goto L_08983998;
    case 977u: goto L_0898399C;
    case 978u: goto L_089839AC;
    case 979u: goto L_089839D0;
    case 980u: goto L_089839DC;
    case 981u: goto L_089839F0;
    case 982u: goto L_08983A04;
    case 983u: goto L_08983A0C;
    case 984u: goto L_08983A1C;
    case 985u: goto L_08983A30;
    case 986u: goto L_08983A44;
    case 987u: goto L_08983A58;
    case 988u: goto L_08983A64;
    case 989u: goto L_08983A70;
    case 990u: goto L_08983A7C;
    case 991u: goto L_08983A90;
    case 992u: goto L_08983A98;
    case 993u: goto L_08983A9C;
    case 994u: goto L_08983AAC;
    case 995u: goto L_08983AC0;
    case 996u: goto L_08983AC8;
    case 997u: goto L_08983AD4;
    case 998u: goto L_08983AD8;
    case 999u: goto L_08983AE8;
    case 1000u: goto L_08983AFC;
    case 1001u: goto L_08983B04;
    case 1002u: goto L_08983B10;
    case 1003u: goto L_08983B14;
    case 1004u: goto L_08983B24;
    case 1005u: goto L_08983B38;
    case 1006u: goto L_08983B40;
    case 1007u: goto L_08983B4C;
    case 1008u: goto L_08983B50;
    case 1009u: goto L_08983B60;
    case 1010u: goto L_08983B78;
    case 1011u: goto L_08983B80;
    case 1012u: goto L_08983B8C;
    case 1013u: goto L_08983B9C;
    case 1014u: goto L_08983BC8;
    case 1015u: goto L_08983BD0;
    case 1016u: goto L_08983BDC;
    case 1017u: goto L_08983BE0;
    case 1018u: goto L_08983BE8;
    case 1019u: goto L_08983BEC;
    case 1020u: goto L_08983C00;
    case 1021u: goto L_08983C14;
    case 1022u: goto L_08983C20;
    case 1023u: goto L_08983C2C;
    case 1024u: goto L_08983C38;
    case 1025u: goto L_08983C4C;
    case 1026u: goto L_08983C5C;
    case 1027u: goto L_08983C68;
    case 1028u: goto L_08983C70;
    case 1029u: goto L_08983C78;
    case 1030u: goto L_08983C84;
    case 1031u: goto L_08983C88;
    case 1032u: goto L_08983C98;
    case 1033u: goto L_08983CB0;
    case 1034u: goto L_08983CC0;
    case 1035u: goto L_08983CD8;
    case 1036u: goto L_08983CE8;
    case 1037u: goto L_08983D00;
    case 1038u: goto L_08983D10;
    case 1039u: goto L_08983D28;
    case 1040u: goto L_08983D38;
    case 1041u: goto L_08983D5C;
    case 1042u: goto L_08983D70;
    case 1043u: goto L_08983D8C;
    case 1044u: goto L_08983DAC;
    case 1045u: goto L_08983DB4;
    case 1046u: goto L_08983DC0;
    case 1047u: goto L_08983DDC;
    case 1048u: goto L_08983DE8;
    case 1049u: goto L_08983DF4;
    case 1050u: goto L_08983DF8;
    case 1051u: goto L_08983E30;
    case 1052u: goto L_08983E38;
    case 1053u: goto L_08983E40;
    case 1054u: goto L_08983E58;
    case 1055u: goto L_08983E64;
    case 1056u: goto L_08983E78;
    case 1057u: goto L_08983E90;
    case 1058u: goto L_08983E98;
    case 1059u: goto L_08983EB4;
    case 1060u: goto L_08983EC0;
    case 1061u: goto L_08983EC4;
    case 1062u: goto L_08983ED8;
    case 1063u: goto L_08983EEC;
    case 1064u: goto L_08983F08;
    case 1065u: goto L_08983F18;
    case 1066u: goto L_08983F20;
    case 1067u: goto L_08983F2C;
    case 1068u: goto L_08983F38;
    case 1069u: goto L_08983F3C;
    case 1070u: goto L_08983F50;
    case 1071u: goto L_08983F64;
    case 1072u: goto L_08983F70;
    case 1073u: goto L_08983F88;
    case 1074u: goto L_08983F8C;
    case 1075u: goto L_08983F94;
    case 1076u: goto L_08983FA8;
    case 1077u: goto L_08983FB0;
    case 1078u: goto L_08983FC0;
    case 1079u: goto L_08983FD4;
    case 1080u: goto L_08983FDC;
    case 1081u: goto L_08983FE4;
    case 1082u: goto L_08983FEC;
    case 1083u: goto L_08983FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08980000:
    // nop
    goto L_08980004;
L_08980004:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-400));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08980038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08980038u) goto L_08980038;
    return;
L_08980038:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08980044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 295u, 0x088F1924u>(ctx, &aot_mem) && ctx.pc == 0x08980044u) goto L_08980044;
    return;
L_08980044:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08980068u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980068u) goto L_08980068;
    return;
L_08980068:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08980074u);
    // nop
    ctx.pc = 0x08B0DC54u;
    return;
L_08980074:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089800BC;
      }
      goto L_08980080;
    }
L_08980080:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898009C;
      }
      goto L_08980090;
    }
L_08980090:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0898009C;
L_0898009C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089800B0;
      }
      goto L_089800A8;
    }
L_089800A8:
    ctx.set_gpr(31, 0x089800B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089800B0u) goto L_089800B0;
    return;
L_089800B0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089802C8;
      }
      goto L_089800BC;
    }
L_089800BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089800C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089800C8u) goto L_089800C8;
    return;
L_089800C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089800D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 710u, 0x088E7BD4u>(ctx, &aot_mem) && ctx.pc == 0x089800D4u) goto L_089800D4;
    return;
L_089800D4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898025C;
      }
      goto L_089800E0;
    }
L_089800E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898025C;
      }
      goto L_089800F0;
    }
L_089800F0:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980108;
      }
      goto L_089800FC;
    }
L_089800FC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980154;
      }
      goto L_08980108;
    }
L_08980108:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980140;
      }
      goto L_08980118;
    }
L_08980118:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08980124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08980124u) goto L_08980124;
    return;
L_08980124:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980138;
      }
      goto L_0898012C;
    }
L_0898012C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08980138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08980138u) goto L_08980138;
    return;
L_08980138:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08980140;
L_08980140:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08980154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08980154u) goto L_08980154;
    return;
L_08980154:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[2]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08980170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x08980170u) goto L_08980170;
    return;
L_08980170:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089801A0;
      }
      goto L_0898018C;
    }
L_0898018C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.set_gpr(31, 0x08980198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08980198u) goto L_08980198;
    return;
L_08980198:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089801A0;
L_089801A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089801C0;
      }
      goto L_089801A8;
    }
L_089801A8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.set_gpr(31, 0x089801B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x089801B4u) goto L_089801B4;
    return;
L_089801B4:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089801C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x089801C0u) goto L_089801C0;
    return;
L_089801C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089801E4;
      }
      goto L_089801D0;
    }
L_089801D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089801DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089801DCu) goto L_089801DC;
    return;
L_089801DC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089801E4;
L_089801E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089801FC;
      }
      goto L_089801EC;
    }
L_089801EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089801FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089801FCu) goto L_089801FC;
    return;
L_089801FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980230;
      }
      goto L_08980214;
    }
L_08980214:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980230;
      }
      goto L_0898022C;
    }
L_0898022C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08980230;
L_08980230:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898025C;
      }
      goto L_08980238;
    }
L_08980238:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898025C;
      }
      goto L_08980250;
    }
L_08980250:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0898025Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898025Cu) goto L_0898025C;
    return;
L_0898025C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x0898026Cu);
    // nop
    ctx.pc = 0x08B0DC64u;
    return;
L_0898026C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_089800E0;
      }
      goto L_08980274;
    }
L_08980274:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08980280u);
    // nop
    ctx.pc = 0x08B0DC6Cu;
    return;
L_08980280:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898029C;
      }
      goto L_08980290;
    }
L_08980290:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0898029C;
L_0898029C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089802B0;
      }
      goto L_089802A8;
    }
L_089802A8:
    ctx.set_gpr(31, 0x089802B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089802B0u) goto L_089802B0;
    return;
L_089802B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089802C4;
      }
      goto L_089802BC;
    }
L_089802BC:
    ctx.set_gpr(31, 0x089802C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089802C4u) goto L_089802C4;
    return;
L_089802C4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089802C8;
L_089802C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(400));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089802EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(31, 0x08980300u);
    // nop
    goto L_08980004;
L_08980300:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980310:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(31, 0x08980324u);
    // nop
    goto L_08980004;
L_08980324:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980334:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12288));
    ctx.set_gpr(31, 0x08980348u);
    // nop
    goto L_08980004;
L_08980348:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980358:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(11568)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089803A0;
      }
      goto L_08980374;
    }
L_08980374:
    ctx.set_gpr(31, 0x0898037Cu);
    // nop
    ctx.pc = 0x08B0DF6Cu;
    return;
L_0898037C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980398;
      }
      goto L_08980384;
    }
L_08980384:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2228u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(11568), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089803A0;
      }
      goto L_08980398;
    }
L_08980398:
    ctx.set_gpr(3, 2228u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(11568), 0u);
    goto L_089803A0;
L_089803A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089803B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089803C0u);
    // nop
    ctx.pc = 0x08B0DE4Cu;
    return;
L_089803C0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1000));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x089803D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 110u, 0x0881C82Cu>(ctx, &aot_mem) && ctx.pc == 0x089803D8u) goto L_089803D8;
    return;
L_089803D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089803E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1000));
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089803F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(31736));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08980428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08980428u) goto L_08980428;
    return;
L_08980428:
    ctx.set_gpr(2, 2228u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11572), ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32185), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x0898043Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x0898043Cu) goto L_0898043C;
    return;
L_0898043C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08980448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08980448u) goto L_08980448;
    return;
L_08980448:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08980454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 563u, 0x088E6EC8u>(ctx, &aot_mem) && ctx.pc == 0x08980454u) goto L_08980454;
    return;
L_08980454:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31928), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08980474u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980474u) goto L_08980474;
    return;
L_08980474:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31928)));
    ctx.set_gpr(5, 2200u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1280));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08980494u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980494u) goto L_08980494;
    return;
L_08980494:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31928)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089804B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089804B0u) goto L_089804B0;
    return;
L_089804B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31928)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16600));
    ctx.set_gpr(31, 0x089804C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x089804C8u) goto L_089804C8;
    return;
L_089804C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31928)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089804E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089804E0u) goto L_089804E0;
    return;
L_089804E0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31932), 0u);
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
L_08980500:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11576));
    ctx.set_gpr(5, 2200u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2124));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0898052Cu);
    // nop
    ctx.pc = 0x08B0DD54u;
    return;
L_0898052C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0898053Cu);
    // nop
    ctx.pc = 0x08B0DCBCu;
    return;
L_0898053C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11588));
    ctx.set_gpr(5, 2200u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1800));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08980558u);
    // nop
    ctx.pc = 0x08B0DD54u;
    return;
L_08980558:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11572)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08980570u);
    // nop
    ctx.pc = 0x08B0DF54u;
    return;
L_08980570:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980588;
      }
      goto L_08980578;
    }
L_08980578:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x08980588u);
    // nop
    ctx.pc = 0x08B0DE14u;
    return;
L_08980588:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32185)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980578;
      }
      goto L_08980594;
    }
L_08980594:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11572)));
    ctx.set_gpr(31, 0x089805A4u);
    // nop
    ctx.pc = 0x08B0DF5Cu;
    return;
L_089805A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089805B0u);
    // nop
    ctx.pc = 0x08B0DD6Cu;
    return;
L_089805B0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089805BCu);
    // nop
    ctx.pc = 0x08B0DD6Cu;
    return;
L_089805BC:
    ctx.set_gpr(2, 0u + 0u);
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
L_089805D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089806D4;
      }
      goto L_0898060C;
    }
L_0898060C:
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31740));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898064C;
      }
      goto L_08980630;
    }
L_08980630:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31736));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089806D0;
      }
      goto L_0898064C;
    }
L_0898064C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08980694;
      }
      goto L_08980658;
    }
L_08980658:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31736));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(31, 0x08980694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08980694u) goto L_08980694;
    return;
L_08980694:
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31744));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31736));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089806E4;
      }
      goto L_089806D0;
    }
L_089806D0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089806D4;
L_089806D4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898060C;
      }
      goto L_089806E0;
    }
L_089806E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089806E4;
L_089806E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980708:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 13u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980830;
      }
      goto L_08980728;
    }
L_08980728:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 8u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980748;
      }
      goto L_0898073C;
    }
L_0898073C:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898075C;
      }
      goto L_08980748;
    }
L_08980748:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898075C;
      }
      goto L_08980758;
    }
L_08980758:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_0898075C;
L_0898075C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089807CC;
      }
      goto L_08980768;
    }
L_08980768:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089807B8;
      }
      goto L_08980774;
    }
L_08980774:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31740));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089807B4;
      }
      goto L_08980798;
    }
L_08980798:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31744));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x089807B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089807B4u) goto L_089807B4;
    return;
L_089807B4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_089807B8;
L_089807B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08980774;
      }
      goto L_089807C0;
    }
L_089807C0:
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32620), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980830;
      }
      goto L_089807CC;
    }
L_089807CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32620), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980824;
      }
      goto L_089807E0;
    }
L_089807E0:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31740));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980820;
      }
      goto L_08980804;
    }
L_08980804:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31744));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08980820u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980820u) goto L_08980820;
    return;
L_08980820:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08980824;
L_08980824:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089807E0;
      }
      goto L_08980830;
    }
L_08980830:
    ctx.set_gpr(2, 0u + 0u);
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
L_0898084C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089808A8;
      }
      goto L_08980864;
    }
L_08980864:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31740));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089808A4;
      }
      goto L_08980888;
    }
L_08980888:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31744));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x089808A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089808A4u) goto L_089808A4;
    return;
L_089808A4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_089808A8;
L_089808A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08980864;
      }
      goto L_089808B0;
    }
L_089808B0:
    ctx.set_gpr(31, 0x089808B8u);
    // nop
    ctx.pc = 0x08B0DCB4u;
    return;
L_089808B8:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089808D0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089808EC;
      }
      goto L_089808DC;
    }
L_089808DC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089808F0;
      }
      goto L_089808EC;
    }
L_089808EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089808F0;
L_089808F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089808F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980904:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980920;
      }
      goto L_08980910;
    }
L_08980910:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980924;
      }
      goto L_08980920;
    }
L_08980920:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08980924;
L_08980924:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898092C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980938:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0898095Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0898095Cu) goto L_0898095C;
    return;
L_0898095C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(56));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980994;
      }
      goto L_08980970;
    }
L_08980970:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08980980u);
    // nop
    ctx.pc = 0x08B0DEA4u;
    return;
L_08980980:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980994;
      }
      goto L_08980988;
    }
L_08980988:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980998;
      }
      goto L_08980994;
    }
L_08980994:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08980998;
L_08980998:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089809AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089809D4;
      }
      goto L_089809C8;
    }
L_089809C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980A7C;
      }
      goto L_089809D4;
    }
L_089809D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089809F0;
      }
      goto L_089809E8;
    }
L_089809E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089809F8;
      }
      goto L_089809F0;
    }
L_089809F0:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8240));
    goto L_089809F8;
L_089809F8:
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    ctx.set_gpr(31, 0x08980A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08980A04u) goto L_08980A04;
    return;
L_08980A04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980A38;
      }
      goto L_08980A0C;
    }
L_08980A0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980A28;
      }
      goto L_08980A20;
    }
L_08980A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980A30;
      }
      goto L_08980A28;
    }
L_08980A28:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8240));
    goto L_08980A30;
L_08980A30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980A40;
      }
      goto L_08980A38;
    }
L_08980A38:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-29404));
    goto L_08980A40;
L_08980A40:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08980A58u);
    // nop
    ctx.pc = 0x08B0DD44u;
    return;
L_08980A58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08980A78;
      }
      goto L_08980A60;
    }
L_08980A60:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980A7C;
      }
      goto L_08980A78;
    }
L_08980A78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08980A7C;
L_08980A7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980A90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980AB8;
      }
      goto L_08980AAC;
    }
L_08980AAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980AE8;
      }
      goto L_08980AB8;
    }
L_08980AB8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08980AE4;
      }
      goto L_08980AC8;
    }
L_08980AC8:
    ctx.set_gpr(31, 0x08980AD0u);
    // nop
    ctx.pc = 0x08B0DD94u;
    return;
L_08980AD0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980AE8;
      }
      goto L_08980AE4;
    }
L_08980AE4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08980AE8;
L_08980AE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980AFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980B1C;
      }
      goto L_08980B10;
    }
L_08980B10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980B30;
      }
      goto L_08980B1C;
    }
L_08980B1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08980B2Cu);
    // nop
    ctx.pc = 0x08B0DDD4u;
    return;
L_08980B2C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08980B30;
L_08980B30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980B40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08980B58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980B58u) goto L_08980B58;
    return;
L_08980B58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980B68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980B98;
      }
      goto L_08980B8C;
    }
L_08980B8C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980C4C;
      }
      goto L_08980B98;
    }
L_08980B98:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980C24;
      }
      goto L_08980BA0;
    }
L_08980BA0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08980BB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980BB8u) goto L_08980BB8;
    return;
L_08980BB8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08980BC8u);
    // nop
    goto L_08983FC0;
L_08980BC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08980BDCu);
    // nop
    ctx.pc = 0x08B0DDECu;
    return;
L_08980BDC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08980BECu);
    // nop
    goto L_08983FFC;
L_08980BEC:
    ctx.set_gpr(2, 32770u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 423u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08980C18;
      }
      goto L_08980BFC;
    }
L_08980BFC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08980C10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980C10u) goto L_08980C10;
    return;
L_08980C10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980C4C;
      }
      goto L_08980C18;
    }
L_08980C18:
    ctx.set_gpr(2, 0u < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980C4C;
      }
      goto L_08980C24;
    }
L_08980C24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08980C34u);
    // nop
    ctx.pc = 0x08B0DDFCu;
    return;
L_08980C34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980C48;
      }
      goto L_08980C3C;
    }
L_08980C3C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980C4C;
      }
      goto L_08980C48;
    }
L_08980C48:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08980C4C;
L_08980C4C:
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
L_08980C68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08980C84u);
    // nop
    ctx.pc = 0x08B0DDECu;
    return;
L_08980C84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980C98;
      }
      goto L_08980C8C;
    }
L_08980C8C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980C9C;
      }
      goto L_08980C98;
    }
L_08980C98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08980C9C;
L_08980C9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980CAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08980CC4u);
    // nop
    ctx.pc = 0x08B0DDFCu;
    return;
L_08980CC4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980CD8;
      }
      goto L_08980CCC;
    }
L_08980CCC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980CDC;
      }
      goto L_08980CD8;
    }
L_08980CD8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08980CDC;
L_08980CDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980CEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08980D0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980D0Cu) goto L_08980D0C;
    return;
L_08980D0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980D28;
      }
      goto L_08980D14;
    }
L_08980D14:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08980D28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980D28u) goto L_08980D28;
    return;
L_08980D28:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08980D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x08980D34u) goto L_08980D34;
    return;
L_08980D34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980D48:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980D54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(64));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2048 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980D90;
      }
      goto L_08980D88;
    }
L_08980D88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2048));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08980D90;
L_08980D90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[3] & 2047u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980DB0;
      }
      goto L_08980DA0;
    }
L_08980DA0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2047));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2048));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08980DB0;
L_08980DB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980DC8;
      }
      goto L_08980DBC;
    }
L_08980DBC:
    ctx.set_gpr(2, 21u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31744u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    goto L_08980DC8;
L_08980DC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980DDC;
      }
      goto L_08980DD4;
    }
L_08980DD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(125));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    goto L_08980DDC;
L_08980DDC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089810A8;
      }
      goto L_08980DF0;
    }
L_08980DF0:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11568)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980F54;
      }
      goto L_08980E00;
    }
L_08980E00:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11532));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980E1C;
      }
      goto L_08980E10;
    }
L_08980E10:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980E6C;
      }
      goto L_08980E1C;
    }
L_08980E1C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980E54;
      }
      goto L_08980E2C;
    }
L_08980E2C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08980E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08980E38u) goto L_08980E38;
    return;
L_08980E38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980E4C;
      }
      goto L_08980E40;
    }
L_08980E40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08980E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08980E4Cu) goto L_08980E4C;
    return;
L_08980E4C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08980E54;
L_08980E54:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11532));
    ctx.set_gpr(31, 0x08980E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08980E6Cu) goto L_08980E6C;
    return;
L_08980E6C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980E90;
      }
      goto L_08980E7C;
    }
L_08980E7C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08980E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08980E88u) goto L_08980E88;
    return;
L_08980E88:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08980E90;
L_08980E90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980EB0;
      }
      goto L_08980E98;
    }
L_08980E98:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08980EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08980EA4u) goto L_08980EA4;
    return;
L_08980EA4:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08980EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08980EB0u) goto L_08980EB0;
    return;
L_08980EB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980ED4;
      }
      goto L_08980EC0;
    }
L_08980EC0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08980ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08980ECCu) goto L_08980ECC;
    return;
L_08980ECC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08980ED4;
L_08980ED4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980EEC;
      }
      goto L_08980EDC;
    }
L_08980EDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08980EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08980EECu) goto L_08980EEC;
    return;
L_08980EEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980F20;
      }
      goto L_08980F04;
    }
L_08980F04:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980F20;
      }
      goto L_08980F1C;
    }
L_08980F1C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08980F20;
L_08980F20:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981278;
      }
      goto L_08980F28;
    }
L_08980F28:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981278;
      }
      goto L_08980F40;
    }
L_08980F40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08980F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08980F4Cu) goto L_08980F4C;
    return;
L_08980F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981278;
      }
      goto L_08980F54;
    }
L_08980F54:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11604));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980F70;
      }
      goto L_08980F64;
    }
L_08980F64:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980FC0;
      }
      goto L_08980F70;
    }
L_08980F70:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980FA8;
      }
      goto L_08980F80;
    }
L_08980F80:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08980F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08980F8Cu) goto L_08980F8C;
    return;
L_08980F8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980FA0;
      }
      goto L_08980F94;
    }
L_08980F94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08980FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08980FA0u) goto L_08980FA0;
    return;
L_08980FA0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08980FA8;
L_08980FA8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11604));
    ctx.set_gpr(31, 0x08980FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08980FC0u) goto L_08980FC0;
    return;
L_08980FC0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980FE4;
      }
      goto L_08980FD0;
    }
L_08980FD0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08980FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08980FDCu) goto L_08980FDC;
    return;
L_08980FDC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08980FE4;
L_08980FE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981004;
      }
      goto L_08980FEC;
    }
L_08980FEC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08980FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08980FF8u) goto L_08980FF8;
    return;
L_08980FF8:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08981004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08981004u) goto L_08981004;
    return;
L_08981004:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981028;
      }
      goto L_08981014;
    }
L_08981014:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08981020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08981020u) goto L_08981020;
    return;
L_08981020:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08981028;
L_08981028:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981040;
      }
      goto L_08981030;
    }
L_08981030:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08981040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08981040u) goto L_08981040;
    return;
L_08981040:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981074;
      }
      goto L_08981058;
    }
L_08981058:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981074;
      }
      goto L_08981070;
    }
L_08981070:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08981074;
L_08981074:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981278;
      }
      goto L_0898107C;
    }
L_0898107C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981278;
      }
      goto L_08981094;
    }
L_08981094:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089810A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089810A0u) goto L_089810A0;
    return;
L_089810A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981278;
      }
      goto L_089810A8;
    }
L_089810A8:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11568)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089810D4;
      }
      goto L_089810B8;
    }
L_089810B8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11532));
    ctx.set_gpr(31, 0x089810CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x089810CCu) goto L_089810CC;
    return;
L_089810CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089810E8;
      }
      goto L_089810D4;
    }
L_089810D4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11604));
    ctx.set_gpr(31, 0x089810E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x089810E8u) goto L_089810E8;
    return;
L_089810E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(18, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08981100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08981100u) goto L_08981100;
    return;
L_08981100:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08981114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x08981114u) goto L_08981114;
    return;
L_08981114:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981278;
      }
      goto L_0898111C;
    }
L_0898111C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08981134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08981134u) goto L_08981134;
    return;
L_08981134:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898114C;
      }
      goto L_08981140;
    }
L_08981140:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981198;
      }
      goto L_0898114C;
    }
L_0898114C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981184;
      }
      goto L_0898115C;
    }
L_0898115C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08981168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08981168u) goto L_08981168;
    return;
L_08981168:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898117C;
      }
      goto L_08981170;
    }
L_08981170:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898117Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0898117Cu) goto L_0898117C;
    return;
L_0898117C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08981184;
L_08981184:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08981198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08981198u) goto L_08981198;
    return;
L_08981198:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089811BC;
      }
      goto L_089811A8;
    }
L_089811A8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089811B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089811B4u) goto L_089811B4;
    return;
L_089811B4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089811BC;
L_089811BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089811DC;
      }
      goto L_089811C4;
    }
L_089811C4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089811D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x089811D0u) goto L_089811D0;
    return;
L_089811D0:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089811DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x089811DCu) goto L_089811DC;
    return;
L_089811DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981200;
      }
      goto L_089811EC;
    }
L_089811EC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x089811F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089811F8u) goto L_089811F8;
    return;
L_089811F8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08981200;
L_08981200:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981218;
      }
      goto L_08981208;
    }
L_08981208:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08981218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08981218u) goto L_08981218;
    return;
L_08981218:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898124C;
      }
      goto L_08981230;
    }
L_08981230:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898124C;
      }
      goto L_08981248;
    }
L_08981248:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0898124C;
L_0898124C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981278;
      }
      goto L_08981254;
    }
L_08981254:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981278;
      }
      goto L_0898126C;
    }
L_0898126C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08981278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08981278u) goto L_08981278;
    return;
L_08981278:
    ctx.set_gpr(31, 0x08981280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x08981280u) goto L_08981280;
    return;
L_08981280:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898128Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 481u, 0x0891E354u>(ctx, &aot_mem) && ctx.pc == 0x0898128Cu) goto L_0898128C;
    return;
L_0898128C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11568)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08981378;
      }
      goto L_089812A0;
    }
L_089812A0:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11500));
    ctx.set_gpr(31, 0x089812B0u);
    // nop
    ctx.pc = 0x08B0DF9Cu;
    return;
L_089812B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089813DC;
      }
      goto L_089812B8;
    }
L_089812B8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089812C4u);
    // nop
    ctx.pc = 0x08B0DF8Cu;
    return;
L_089812C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089813DC;
      }
      goto L_089812CC;
    }
L_089812CC:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11604));
    ctx.set_gpr(31, 0x089812ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x089812ECu) goto L_089812EC;
    return;
L_089812EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981314;
      }
      goto L_089812F4;
    }
L_089812F4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11508));
    ctx.set_gpr(31, 0x08981304u);
    // nop
    ctx.pc = 0x08B0DC14u;
    return;
L_08981304:
    ctx.set_gpr(16, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(16, ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089813DC;
      }
      goto L_08981314;
    }
L_08981314:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11508));
    ctx.set_gpr(31, 0x08981328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08981328u) goto L_08981328;
    return;
L_08981328:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11604));
    ctx.set_gpr(31, 0x08981344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x08981344u) goto L_08981344;
    return;
L_08981344:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089813DC;
      }
      goto L_0898134C;
    }
L_0898134C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x0898135Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0898135Cu) goto L_0898135C;
    return;
L_0898135C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08981368u);
    // nop
    ctx.pc = 0x08B0DC14u;
    return;
L_08981368:
    ctx.set_gpr(16, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(16, ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089813DC;
      }
      goto L_08981378;
    }
L_08981378:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11532));
    ctx.set_gpr(31, 0x08981398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08981398u) goto L_08981398;
    return;
L_08981398:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089813C0;
      }
      goto L_089813A0;
    }
L_089813A0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11612));
    ctx.set_gpr(31, 0x089813B0u);
    // nop
    ctx.pc = 0x08B0DC14u;
    return;
L_089813B0:
    ctx.set_gpr(16, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(16, ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089813DC;
      }
      goto L_089813C0;
    }
L_089813C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x089813D4u);
    // nop
    ctx.pc = 0x08B0DC14u;
    return;
L_089813D4:
    ctx.set_gpr(16, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(16, ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089813DC;
L_089813DC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089813FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08981414u);
    // nop
    goto L_08980D54;
L_08981414:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981430;
      }
      goto L_0898141C;
    }
L_0898141C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08981428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 201u, 0x08904D7Cu>(ctx, &aot_mem) && ctx.pc == 0x08981428u) goto L_08981428;
    return;
L_08981428:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981434;
      }
      goto L_08981430;
    }
L_08981430:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08981434;
L_08981434:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981448:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0898146Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 103u, 0x089046A4u>(ctx, &aot_mem) && ctx.pc == 0x0898146Cu) goto L_0898146C;
    return;
L_0898146C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981488;
      }
      goto L_08981478;
    }
L_08981478:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981488;
      }
      goto L_08981480;
    }
L_08981480:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08981488;
L_08981488:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089814A4;
      }
      goto L_08981498;
    }
L_08981498:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089814A4;
L_089814A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089814B8;
      }
      goto L_089814B0;
    }
L_089814B0:
    ctx.set_gpr(31, 0x089814B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089814B8u) goto L_089814B8;
    return;
L_089814B8:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089814D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898150C;
      }
      goto L_089814E8;
    }
L_089814E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(493));
    ctx.set_gpr(31, 0x08981504u);
    // nop
    ctx.pc = 0x08B0DC74u;
    return;
L_08981504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981528;
      }
      goto L_0898150C;
    }
L_0898150C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(514));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(420));
    ctx.set_gpr(31, 0x08981528u);
    // nop
    ctx.pc = 0x08B0DC74u;
    return;
L_08981528:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981538:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08981564u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981564u) goto L_08981564;
    return;
L_08981564:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981598;
      }
      goto L_0898156C;
    }
L_0898156C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08981578u);
    // nop
    ctx.pc = 0x08B0DC34u;
    return;
L_08981578:
    ctx.set_gpr(16, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(16, ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089816EC;
      }
      goto L_08981588;
    }
L_08981588:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089816EC;
      }
      goto L_08981598;
    }
L_08981598:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11096));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089815BC;
      }
      goto L_089815B0;
    }
L_089815B0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898160C;
      }
      goto L_089815BC;
    }
L_089815BC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089815F4;
      }
      goto L_089815CC;
    }
L_089815CC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089815D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089815D8u) goto L_089815D8;
    return;
L_089815D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089815EC;
      }
      goto L_089815E0;
    }
L_089815E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089815ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089815ECu) goto L_089815EC;
    return;
L_089815EC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089815F4;
L_089815F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11096));
    ctx.set_gpr(31, 0x0898160Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0898160Cu) goto L_0898160C;
    return;
L_0898160C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981630;
      }
      goto L_0898161C;
    }
L_0898161C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08981628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08981628u) goto L_08981628;
    return;
L_08981628:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08981630;
L_08981630:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981650;
      }
      goto L_08981638;
    }
L_08981638:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08981644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08981644u) goto L_08981644;
    return;
L_08981644:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08981650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08981650u) goto L_08981650;
    return;
L_08981650:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981674;
      }
      goto L_08981660;
    }
L_08981660:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0898166Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0898166Cu) goto L_0898166C;
    return;
L_0898166C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08981674;
L_08981674:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898168C;
      }
      goto L_0898167C;
    }
L_0898167C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0898168Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0898168Cu) goto L_0898168C;
    return;
L_0898168C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089816C0;
      }
      goto L_089816A4;
    }
L_089816A4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089816C0;
      }
      goto L_089816BC;
    }
L_089816BC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089816C0;
L_089816C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089816EC;
      }
      goto L_089816C8;
    }
L_089816C8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089816EC;
      }
      goto L_089816E0;
    }
L_089816E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089816ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089816ECu) goto L_089816EC;
    return;
L_089816EC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981708:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0898173Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898173Cu) goto L_0898173C;
    return;
L_0898173C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089818E4;
      }
      goto L_08981744;
    }
L_08981744:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0898175Cu);
    // nop
    ctx.pc = 0x08B0DC44u;
    return;
L_0898175C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981780;
      }
      goto L_08981764;
    }
L_08981764:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981A40;
      }
      goto L_08981780;
    }
L_08981780:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11620));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089817AC;
      }
      goto L_089817A0;
    }
L_089817A0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089817FC;
      }
      goto L_089817AC;
    }
L_089817AC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089817E4;
      }
      goto L_089817BC;
    }
L_089817BC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089817C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089817C8u) goto L_089817C8;
    return;
L_089817C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089817DC;
      }
      goto L_089817D0;
    }
L_089817D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089817DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089817DCu) goto L_089817DC;
    return;
L_089817DC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089817E4;
L_089817E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11620));
    ctx.set_gpr(31, 0x089817FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089817FCu) goto L_089817FC;
    return;
L_089817FC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981820;
      }
      goto L_0898180C;
    }
L_0898180C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08981818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08981818u) goto L_08981818;
    return;
L_08981818:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08981820;
L_08981820:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981840;
      }
      goto L_08981828;
    }
L_08981828:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08981834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08981834u) goto L_08981834;
    return;
L_08981834:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08981840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08981840u) goto L_08981840;
    return;
L_08981840:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981864;
      }
      goto L_08981850;
    }
L_08981850:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0898185Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0898185Cu) goto L_0898185C;
    return;
L_0898185C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08981864;
L_08981864:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898187C;
      }
      goto L_0898186C;
    }
L_0898186C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0898187Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0898187Cu) goto L_0898187C;
    return;
L_0898187C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089818B0;
      }
      goto L_08981894;
    }
L_08981894:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089818B0;
      }
      goto L_089818AC;
    }
L_089818AC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089818B0;
L_089818B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981A40;
      }
      goto L_089818B8;
    }
L_089818B8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981A40;
      }
      goto L_089818D0;
    }
L_089818D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089818DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089818DCu) goto L_089818DC;
    return;
L_089818DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981A40;
      }
      goto L_089818E4;
    }
L_089818E4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11164));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981910;
      }
      goto L_08981904;
    }
L_08981904:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981960;
      }
      goto L_08981910;
    }
L_08981910:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981948;
      }
      goto L_08981920;
    }
L_08981920:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0898192Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0898192Cu) goto L_0898192C;
    return;
L_0898192C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981940;
      }
      goto L_08981934;
    }
L_08981934:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08981940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08981940u) goto L_08981940;
    return;
L_08981940:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08981948;
L_08981948:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11164));
    ctx.set_gpr(31, 0x08981960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08981960u) goto L_08981960;
    return;
L_08981960:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981984;
      }
      goto L_08981970;
    }
L_08981970:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x0898197Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0898197Cu) goto L_0898197C;
    return;
L_0898197C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08981984;
L_08981984:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089819A4;
      }
      goto L_0898198C;
    }
L_0898198C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08981998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08981998u) goto L_08981998;
    return;
L_08981998:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089819A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x089819A4u) goto L_089819A4;
    return;
L_089819A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089819C8;
      }
      goto L_089819B4;
    }
L_089819B4:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x089819C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089819C0u) goto L_089819C0;
    return;
L_089819C0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089819C8;
L_089819C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089819E0;
      }
      goto L_089819D0;
    }
L_089819D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089819E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089819E0u) goto L_089819E0;
    return;
L_089819E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981A14;
      }
      goto L_089819F8;
    }
L_089819F8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981A14;
      }
      goto L_08981A10;
    }
L_08981A10:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08981A14;
L_08981A14:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981A40;
      }
      goto L_08981A1C;
    }
L_08981A1C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981A40;
      }
      goto L_08981A34;
    }
L_08981A34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08981A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08981A40u) goto L_08981A40;
    return;
L_08981A40:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981A60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08981AA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981AA0u) goto L_08981AA0;
    return;
L_08981AA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089822DC;
      }
      goto L_08981AA8;
    }
L_08981AA8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981AC4;
      }
      goto L_08981ABC;
    }
L_08981ABC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C3C;
      }
      goto L_08981AC4;
    }
L_08981AC4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08981AD4u);
    // nop
    ctx.pc = 0x08B0DC7Cu;
    return;
L_08981AD4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08981C3C;
      }
      goto L_08981ADC;
    }
L_08981ADC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(11656));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981B00;
      }
      goto L_08981AF4;
    }
L_08981AF4:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981B54;
      }
      goto L_08981B00;
    }
L_08981B00:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981B38;
      }
      goto L_08981B10;
    }
L_08981B10:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08981B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08981B1Cu) goto L_08981B1C;
    return;
L_08981B1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981B30;
      }
      goto L_08981B24;
    }
L_08981B24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08981B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08981B30u) goto L_08981B30;
    return;
L_08981B30:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08981B38;
L_08981B38:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11656));
    ctx.set_gpr(31, 0x08981B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08981B50u) goto L_08981B50;
    return;
L_08981B50:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_08981B54;
L_08981B54:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981B78;
      }
      goto L_08981B64;
    }
L_08981B64:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08981B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08981B70u) goto L_08981B70;
    return;
L_08981B70:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_08981B78;
L_08981B78:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981B98;
      }
      goto L_08981B80;
    }
L_08981B80:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08981B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08981B8Cu) goto L_08981B8C;
    return;
L_08981B8C:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08981B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08981B98u) goto L_08981B98;
    return;
L_08981B98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981BBC;
      }
      goto L_08981BA8;
    }
L_08981BA8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08981BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08981BB4u) goto L_08981BB4;
    return;
L_08981BB4:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_08981BBC;
L_08981BBC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981BD4;
      }
      goto L_08981BC4;
    }
L_08981BC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08981BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08981BD4u) goto L_08981BD4;
    return;
L_08981BD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C08;
      }
      goto L_08981BEC;
    }
L_08981BEC:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C08;
      }
      goto L_08981C04;
    }
L_08981C04:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08981C08;
L_08981C08:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C34;
      }
      goto L_08981C10;
    }
L_08981C10:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981C34;
      }
      goto L_08981C28;
    }
L_08981C28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08981C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08981C34u) goto L_08981C34;
    return;
L_08981C34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982434;
      }
      goto L_08981C3C;
    }
L_08981C3C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08981C50u);
    // nop
    ctx.pc = 0x08B0DC1Cu;
    return;
L_08981C50:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08982090;
      }
      goto L_08981C5C;
    }
L_08981C5C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(3, 32770u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] | 809u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08981DE0;
      }
      goto L_08981C74;
    }
L_08981C74:
    ctx.set_gpr(3, ctx.gpr[3] | 803u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08981C88;
      }
      goto L_08981C80;
    }
L_08981C80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981F38;
      }
      goto L_08981C88;
    }
L_08981C88:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(11328));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981CA4;
      }
      goto L_08981C98;
    }
L_08981C98:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981CF8;
      }
      goto L_08981CA4;
    }
L_08981CA4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981CDC;
      }
      goto L_08981CB4;
    }
L_08981CB4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08981CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08981CC0u) goto L_08981CC0;
    return;
L_08981CC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981CD4;
      }
      goto L_08981CC8;
    }
L_08981CC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08981CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08981CD4u) goto L_08981CD4;
    return;
L_08981CD4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08981CDC;
L_08981CDC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11328));
    ctx.set_gpr(31, 0x08981CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08981CF4u) goto L_08981CF4;
    return;
L_08981CF4:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_08981CF8;
L_08981CF8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981D1C;
      }
      goto L_08981D08;
    }
L_08981D08:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08981D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08981D14u) goto L_08981D14;
    return;
L_08981D14:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_08981D1C;
L_08981D1C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981D3C;
      }
      goto L_08981D24;
    }
L_08981D24:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08981D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08981D30u) goto L_08981D30;
    return;
L_08981D30:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08981D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08981D3Cu) goto L_08981D3C;
    return;
L_08981D3C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981D60;
      }
      goto L_08981D4C;
    }
L_08981D4C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08981D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08981D58u) goto L_08981D58;
    return;
L_08981D58:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_08981D60;
L_08981D60:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981D78;
      }
      goto L_08981D68;
    }
L_08981D68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08981D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08981D78u) goto L_08981D78;
    return;
L_08981D78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981DAC;
      }
      goto L_08981D90;
    }
L_08981D90:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981DAC;
      }
      goto L_08981DA8;
    }
L_08981DA8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08981DAC;
L_08981DAC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982434;
      }
      goto L_08981DB4;
    }
L_08981DB4:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982434;
      }
      goto L_08981DCC;
    }
L_08981DCC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08981DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08981DD8u) goto L_08981DD8;
    return;
L_08981DD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982434;
      }
      goto L_08981DE0;
    }
L_08981DE0:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(11356));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981DFC;
      }
      goto L_08981DF0;
    }
L_08981DF0:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981E50;
      }
      goto L_08981DFC;
    }
L_08981DFC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981E34;
      }
      goto L_08981E0C;
    }
L_08981E0C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08981E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08981E18u) goto L_08981E18;
    return;
L_08981E18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981E2C;
      }
      goto L_08981E20;
    }
L_08981E20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08981E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08981E2Cu) goto L_08981E2C;
    return;
L_08981E2C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08981E34;
L_08981E34:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11356));
    ctx.set_gpr(31, 0x08981E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08981E4Cu) goto L_08981E4C;
    return;
L_08981E4C:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_08981E50;
L_08981E50:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981E74;
      }
      goto L_08981E60;
    }
L_08981E60:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08981E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08981E6Cu) goto L_08981E6C;
    return;
L_08981E6C:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_08981E74;
L_08981E74:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981E94;
      }
      goto L_08981E7C;
    }
L_08981E7C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08981E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08981E88u) goto L_08981E88;
    return;
L_08981E88:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08981E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08981E94u) goto L_08981E94;
    return;
L_08981E94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981EB8;
      }
      goto L_08981EA4;
    }
L_08981EA4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08981EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08981EB0u) goto L_08981EB0;
    return;
L_08981EB0:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_08981EB8;
L_08981EB8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981ED0;
      }
      goto L_08981EC0;
    }
L_08981EC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08981ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08981ED0u) goto L_08981ED0;
    return;
L_08981ED0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981F04;
      }
      goto L_08981EE8;
    }
L_08981EE8:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981F04;
      }
      goto L_08981F00;
    }
L_08981F00:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08981F04;
L_08981F04:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982434;
      }
      goto L_08981F0C;
    }
L_08981F0C:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982434;
      }
      goto L_08981F24;
    }
L_08981F24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08981F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08981F30u) goto L_08981F30;
    return;
L_08981F30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982434;
      }
      goto L_08981F38;
    }
L_08981F38:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(11688));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981F54;
      }
      goto L_08981F48;
    }
L_08981F48:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981FA8;
      }
      goto L_08981F54;
    }
L_08981F54:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981F8C;
      }
      goto L_08981F64;
    }
L_08981F64:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08981F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08981F70u) goto L_08981F70;
    return;
L_08981F70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981F84;
      }
      goto L_08981F78;
    }
L_08981F78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08981F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08981F84u) goto L_08981F84;
    return;
L_08981F84:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08981F8C;
L_08981F8C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11688));
    ctx.set_gpr(31, 0x08981FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08981FA4u) goto L_08981FA4;
    return;
L_08981FA4:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_08981FA8;
L_08981FA8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981FCC;
      }
      goto L_08981FB8;
    }
L_08981FB8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08981FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08981FC4u) goto L_08981FC4;
    return;
L_08981FC4:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_08981FCC;
L_08981FCC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981FEC;
      }
      goto L_08981FD4;
    }
L_08981FD4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08981FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08981FE0u) goto L_08981FE0;
    return;
L_08981FE0:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08981FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08981FECu) goto L_08981FEC;
    return;
L_08981FEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982010;
      }
      goto L_08981FFC;
    }
L_08981FFC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08982008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08982008u) goto L_08982008;
    return;
L_08982008:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_08982010;
L_08982010:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982028;
      }
      goto L_08982018;
    }
L_08982018:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08982028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08982028u) goto L_08982028;
    return;
L_08982028:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898205C;
      }
      goto L_08982040;
    }
L_08982040:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898205C;
      }
      goto L_08982058;
    }
L_08982058:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0898205C;
L_0898205C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982434;
      }
      goto L_08982064;
    }
L_08982064:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982434;
      }
      goto L_0898207C;
    }
L_0898207C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08982088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08982088u) goto L_08982088;
    return;
L_08982088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982434;
      }
      goto L_08982090;
    }
L_08982090:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089820E0;
      }
      goto L_089820C0;
    }
L_089820C0:
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089820D8;
      }
      goto L_089820CC;
    }
L_089820CC:
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089820E0;
      }
      goto L_089820D8;
    }
L_089820D8:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0898217C;
      }
      goto L_089820E0;
    }
L_089820E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982110;
      }
      goto L_089820EC;
    }
L_089820EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08982108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08982108u) goto L_08982108;
    return;
L_08982108:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982118;
      }
      goto L_08982110;
    }
L_08982110:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08982118;
L_08982118:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0898216C;
      }
      goto L_08982150;
    }
L_08982150:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898216C;
      }
      goto L_08982158;
    }
L_08982158:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982434;
      }
      goto L_0898216C;
    }
L_0898216C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982434;
      }
      goto L_0898217C;
    }
L_0898217C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(11736));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089821A0;
      }
      goto L_08982194;
    }
L_08982194:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089821F4;
      }
      goto L_089821A0;
    }
L_089821A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089821D8;
      }
      goto L_089821B0;
    }
L_089821B0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089821BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089821BCu) goto L_089821BC;
    return;
L_089821BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089821D0;
      }
      goto L_089821C4;
    }
L_089821C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089821D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089821D0u) goto L_089821D0;
    return;
L_089821D0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089821D8;
L_089821D8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11736));
    ctx.set_gpr(31, 0x089821F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089821F0u) goto L_089821F0;
    return;
L_089821F0:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_089821F4;
L_089821F4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982218;
      }
      goto L_08982204;
    }
L_08982204:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08982210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08982210u) goto L_08982210;
    return;
L_08982210:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_08982218;
L_08982218:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982238;
      }
      goto L_08982220;
    }
L_08982220:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0898222Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0898222Cu) goto L_0898222C;
    return;
L_0898222C:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08982238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08982238u) goto L_08982238;
    return;
L_08982238:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898225C;
      }
      goto L_08982248;
    }
L_08982248:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08982254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08982254u) goto L_08982254;
    return;
L_08982254:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_0898225C;
L_0898225C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982274;
      }
      goto L_08982264;
    }
L_08982264:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08982274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08982274u) goto L_08982274;
    return;
L_08982274:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089822A8;
      }
      goto L_0898228C;
    }
L_0898228C:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089822A8;
      }
      goto L_089822A4;
    }
L_089822A4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_089822A8;
L_089822A8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982434;
      }
      goto L_089822B0;
    }
L_089822B0:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982434;
      }
      goto L_089822C8;
    }
L_089822C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089822D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089822D4u) goto L_089822D4;
    return;
L_089822D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982434;
      }
      goto L_089822DC;
    }
L_089822DC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(11268));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982300;
      }
      goto L_089822F4;
    }
L_089822F4:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982354;
      }
      goto L_08982300;
    }
L_08982300:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982338;
      }
      goto L_08982310;
    }
L_08982310:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0898231Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0898231Cu) goto L_0898231C;
    return;
L_0898231C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982330;
      }
      goto L_08982324;
    }
L_08982324:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08982330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08982330u) goto L_08982330;
    return;
L_08982330:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08982338;
L_08982338:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11268));
    ctx.set_gpr(31, 0x08982350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08982350u) goto L_08982350;
    return;
L_08982350:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_08982354;
L_08982354:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982378;
      }
      goto L_08982364;
    }
L_08982364:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08982370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08982370u) goto L_08982370;
    return;
L_08982370:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_08982378;
L_08982378:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982398;
      }
      goto L_08982380;
    }
L_08982380:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0898238Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0898238Cu) goto L_0898238C;
    return;
L_0898238C:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08982398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08982398u) goto L_08982398;
    return;
L_08982398:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089823BC;
      }
      goto L_089823A8;
    }
L_089823A8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x089823B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089823B4u) goto L_089823B4;
    return;
L_089823B4:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_089823BC;
L_089823BC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089823D4;
      }
      goto L_089823C4;
    }
L_089823C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089823D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089823D4u) goto L_089823D4;
    return;
L_089823D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982408;
      }
      goto L_089823EC;
    }
L_089823EC:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982408;
      }
      goto L_08982404;
    }
L_08982404:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08982408;
L_08982408:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982434;
      }
      goto L_08982410;
    }
L_08982410:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982434;
      }
      goto L_08982428;
    }
L_08982428:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08982434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08982434u) goto L_08982434;
    return;
L_08982434:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08982454:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(22, ctx.gpr[9] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089824A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089824A4u) goto L_089824A4;
    return;
L_089824A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982A88;
      }
      goto L_089824AC;
    }
L_089824AC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x089824C8u);
    // nop
    ctx.pc = 0x08B0DC7Cu;
    return;
L_089824C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0898292C;
      }
      goto L_089824D0;
    }
L_089824D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089824E4u);
    // nop
    ctx.pc = 0x08B0DC04u;
    return;
L_089824E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08982914;
      }
      goto L_089824EC;
    }
L_089824EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(3, 32770u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] | 809u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898266C;
      }
      goto L_08982504;
    }
L_08982504:
    ctx.set_gpr(3, ctx.gpr[3] | 803u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08982518;
      }
      goto L_08982510;
    }
L_08982510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089827C0;
      }
      goto L_08982518;
    }
L_08982518:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11328));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982534;
      }
      goto L_08982528;
    }
L_08982528:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982584;
      }
      goto L_08982534;
    }
L_08982534:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898256C;
      }
      goto L_08982544;
    }
L_08982544:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08982550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08982550u) goto L_08982550;
    return;
L_08982550:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982564;
      }
      goto L_08982558;
    }
L_08982558:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08982564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08982564u) goto L_08982564;
    return;
L_08982564:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0898256C;
L_0898256C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11328));
    ctx.set_gpr(31, 0x08982584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08982584u) goto L_08982584;
    return;
L_08982584:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089825A8;
      }
      goto L_08982594;
    }
L_08982594:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x089825A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089825A0u) goto L_089825A0;
    return;
L_089825A0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089825A8;
L_089825A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089825C8;
      }
      goto L_089825B0;
    }
L_089825B0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x089825BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x089825BCu) goto L_089825BC;
    return;
L_089825BC:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089825C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x089825C8u) goto L_089825C8;
    return;
L_089825C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089825EC;
      }
      goto L_089825D8;
    }
L_089825D8:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x089825E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089825E4u) goto L_089825E4;
    return;
L_089825E4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089825EC;
L_089825EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982604;
      }
      goto L_089825F4;
    }
L_089825F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08982604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08982604u) goto L_08982604;
    return;
L_08982604:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982638;
      }
      goto L_0898261C;
    }
L_0898261C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982638;
      }
      goto L_08982634;
    }
L_08982634:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08982638;
L_08982638:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982BDC;
      }
      goto L_08982640;
    }
L_08982640:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982BDC;
      }
      goto L_08982658;
    }
L_08982658:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08982664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08982664u) goto L_08982664;
    return;
L_08982664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982BDC;
      }
      goto L_0898266C;
    }
L_0898266C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11356));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982688;
      }
      goto L_0898267C;
    }
L_0898267C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089826D8;
      }
      goto L_08982688;
    }
L_08982688:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089826C0;
      }
      goto L_08982698;
    }
L_08982698:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089826A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089826A4u) goto L_089826A4;
    return;
L_089826A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089826B8;
      }
      goto L_089826AC;
    }
L_089826AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089826B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089826B8u) goto L_089826B8;
    return;
L_089826B8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089826C0;
L_089826C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11356));
    ctx.set_gpr(31, 0x089826D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089826D8u) goto L_089826D8;
    return;
L_089826D8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089826FC;
      }
      goto L_089826E8;
    }
L_089826E8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x089826F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089826F4u) goto L_089826F4;
    return;
L_089826F4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089826FC;
L_089826FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898271C;
      }
      goto L_08982704;
    }
L_08982704:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08982710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08982710u) goto L_08982710;
    return;
L_08982710:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0898271Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0898271Cu) goto L_0898271C;
    return;
L_0898271C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982740;
      }
      goto L_0898272C;
    }
L_0898272C:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08982738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08982738u) goto L_08982738;
    return;
L_08982738:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08982740;
L_08982740:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982758;
      }
      goto L_08982748;
    }
L_08982748:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08982758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08982758u) goto L_08982758;
    return;
L_08982758:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898278C;
      }
      goto L_08982770;
    }
L_08982770:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898278C;
      }
      goto L_08982788;
    }
L_08982788:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0898278C;
L_0898278C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982BDC;
      }
      goto L_08982794;
    }
L_08982794:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982BDC;
      }
      goto L_089827AC;
    }
L_089827AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089827B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089827B8u) goto L_089827B8;
    return;
L_089827B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982BDC;
      }
      goto L_089827C0;
    }
L_089827C0:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11400));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089827DC;
      }
      goto L_089827D0;
    }
L_089827D0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898282C;
      }
      goto L_089827DC;
    }
L_089827DC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982814;
      }
      goto L_089827EC;
    }
L_089827EC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089827F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089827F8u) goto L_089827F8;
    return;
L_089827F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898280C;
      }
      goto L_08982800;
    }
L_08982800:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898280Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0898280Cu) goto L_0898280C;
    return;
L_0898280C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08982814;
L_08982814:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11400));
    ctx.set_gpr(31, 0x0898282Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0898282Cu) goto L_0898282C;
    return;
L_0898282C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982850;
      }
      goto L_0898283C;
    }
L_0898283C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08982848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08982848u) goto L_08982848;
    return;
L_08982848:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08982850;
L_08982850:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982870;
      }
      goto L_08982858;
    }
L_08982858:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08982864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08982864u) goto L_08982864;
    return;
L_08982864:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08982870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08982870u) goto L_08982870;
    return;
L_08982870:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982894;
      }
      goto L_08982880;
    }
L_08982880:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0898288Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0898288Cu) goto L_0898288C;
    return;
L_0898288C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08982894;
L_08982894:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089828AC;
      }
      goto L_0898289C;
    }
L_0898289C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089828ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089828ACu) goto L_089828AC;
    return;
L_089828AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089828E0;
      }
      goto L_089828C4;
    }
L_089828C4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089828E0;
      }
      goto L_089828DC;
    }
L_089828DC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089828E0;
L_089828E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982BDC;
      }
      goto L_089828E8;
    }
L_089828E8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982BDC;
      }
      goto L_08982900;
    }
L_08982900:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0898290Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898290Cu) goto L_0898290C;
    return;
L_0898290C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982BDC;
      }
      goto L_08982914;
    }
L_08982914:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982BDC;
      }
      goto L_0898292C;
    }
L_0898292C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11440));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982950;
      }
      goto L_08982944;
    }
L_08982944:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089829A0;
      }
      goto L_08982950;
    }
L_08982950:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982988;
      }
      goto L_08982960;
    }
L_08982960:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0898296Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0898296Cu) goto L_0898296C;
    return;
L_0898296C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982980;
      }
      goto L_08982974;
    }
L_08982974:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08982980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08982980u) goto L_08982980;
    return;
L_08982980:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08982988;
L_08982988:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11440));
    ctx.set_gpr(31, 0x089829A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089829A0u) goto L_089829A0;
    return;
L_089829A0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089829C4;
      }
      goto L_089829B0;
    }
L_089829B0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x089829BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089829BCu) goto L_089829BC;
    return;
L_089829BC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089829C4;
L_089829C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089829E4;
      }
      goto L_089829CC;
    }
L_089829CC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x089829D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x089829D8u) goto L_089829D8;
    return;
L_089829D8:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089829E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x089829E4u) goto L_089829E4;
    return;
L_089829E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982A08;
      }
      goto L_089829F4;
    }
L_089829F4:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08982A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08982A00u) goto L_08982A00;
    return;
L_08982A00:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08982A08;
L_08982A08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982A20;
      }
      goto L_08982A10;
    }
L_08982A10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08982A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08982A20u) goto L_08982A20;
    return;
L_08982A20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982A54;
      }
      goto L_08982A38;
    }
L_08982A38:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982A54;
      }
      goto L_08982A50;
    }
L_08982A50:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08982A54;
L_08982A54:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982BDC;
      }
      goto L_08982A5C;
    }
L_08982A5C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982BDC;
      }
      goto L_08982A74;
    }
L_08982A74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08982A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08982A80u) goto L_08982A80;
    return;
L_08982A80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982BDC;
      }
      goto L_08982A88;
    }
L_08982A88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11472));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982AAC;
      }
      goto L_08982AA0;
    }
L_08982AA0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982AFC;
      }
      goto L_08982AAC;
    }
L_08982AAC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982AE4;
      }
      goto L_08982ABC;
    }
L_08982ABC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08982AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08982AC8u) goto L_08982AC8;
    return;
L_08982AC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982ADC;
      }
      goto L_08982AD0;
    }
L_08982AD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08982ADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08982ADCu) goto L_08982ADC;
    return;
L_08982ADC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08982AE4;
L_08982AE4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11472));
    ctx.set_gpr(31, 0x08982AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08982AFCu) goto L_08982AFC;
    return;
L_08982AFC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982B20;
      }
      goto L_08982B0C;
    }
L_08982B0C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08982B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08982B18u) goto L_08982B18;
    return;
L_08982B18:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08982B20;
L_08982B20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982B40;
      }
      goto L_08982B28;
    }
L_08982B28:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08982B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08982B34u) goto L_08982B34;
    return;
L_08982B34:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08982B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08982B40u) goto L_08982B40;
    return;
L_08982B40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982B64;
      }
      goto L_08982B50;
    }
L_08982B50:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08982B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08982B5Cu) goto L_08982B5C;
    return;
L_08982B5C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08982B64;
L_08982B64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982B7C;
      }
      goto L_08982B6C;
    }
L_08982B6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08982B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08982B7Cu) goto L_08982B7C;
    return;
L_08982B7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982BB0;
      }
      goto L_08982B94;
    }
L_08982B94:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982BB0;
      }
      goto L_08982BAC;
    }
L_08982BAC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08982BB0;
L_08982BB0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982BDC;
      }
      goto L_08982BB8;
    }
L_08982BB8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982BDC;
      }
      goto L_08982BD0;
    }
L_08982BD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08982BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08982BDCu) goto L_08982BDC;
    return;
L_08982BDC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982C0C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982C1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-672));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(23, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(21, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(22, ctx.gpr[9] + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982C9C;
      }
      goto L_08982C68;
    }
L_08982C68:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(31, 0x08982C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08982C74u) goto L_08982C74;
    return;
L_08982C74:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08982C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08982C84u) goto L_08982C84;
    return;
L_08982C84:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(31, 0x08982C90u);
    // nop
    ctx.pc = 0x08B0DC54u;
    return;
L_08982C90:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982CAC;
      }
      goto L_08982C9C;
    }
L_08982C9C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08982CA8u);
    // nop
    ctx.pc = 0x08B0DC54u;
    return;
L_08982CA8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08982CAC;
L_08982CAC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089831C4;
      }
      goto L_08982CB8;
    }
L_08982CB8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982CD8;
      }
      goto L_08982CC0;
    }
L_08982CC0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(412));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08982CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08982CD0u) goto L_08982CD0;
    return;
L_08982CD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982CF4;
      }
      goto L_08982CD8;
    }
L_08982CD8:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08982CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 710u, 0x088E7BD4u>(ctx, &aot_mem) && ctx.pc == 0x08982CE4u) goto L_08982CE4;
    return;
L_08982CE4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(412));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08982CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08982CF4u) goto L_08982CF4;
    return;
L_08982CF4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08982D04u);
    // nop
    ctx.pc = 0x08B0DC64u;
    return;
L_08982D04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089831A8;
      }
      goto L_08982D0C;
    }
L_08982D0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] & 8192u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089830BC;
      }
      goto L_08982D1C;
    }
L_08982D1C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982D60;
      }
      goto L_08982D28;
    }
L_08982D28:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08982D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08982D38u) goto L_08982D38;
    return;
L_08982D38:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32692));
    ctx.set_gpr(31, 0x08982D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08982D48u) goto L_08982D48;
    return;
L_08982D48:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x08982D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08982D58u) goto L_08982D58;
    return;
L_08982D58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982D70;
      }
      goto L_08982D60;
    }
L_08982D60:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x08982D70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08982D70u) goto L_08982D70;
    return;
L_08982D70:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11568)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08982F04;
      }
      goto L_08982D84;
    }
L_08982D84:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11780));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08982D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x08982D9Cu) goto L_08982D9C;
    return;
L_08982D9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898305C;
      }
      goto L_08982DA4;
    }
L_08982DA4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982DDC;
      }
      goto L_08982DB4;
    }
L_08982DB4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08982DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08982DC0u) goto L_08982DC0;
    return;
L_08982DC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982DD4;
      }
      goto L_08982DC8;
    }
L_08982DC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08982DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08982DD4u) goto L_08982DD4;
    return;
L_08982DD4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08982DDC;
L_08982DDC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.set_gpr(31, 0x08982DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08982DF0u) goto L_08982DF0;
    return;
L_08982DF0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982E20;
      }
      goto L_08982E04;
    }
L_08982E04:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982E20;
      }
      goto L_08982E1C;
    }
L_08982E1C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08982E20;
L_08982E20:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982E4C;
      }
      goto L_08982E28;
    }
L_08982E28:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982E4C;
      }
      goto L_08982E40;
    }
L_08982E40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08982E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08982E4Cu) goto L_08982E4C;
    return;
L_08982E4C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[19]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08982E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x08982E68u) goto L_08982E68;
    return;
L_08982E68:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982E98;
      }
      goto L_08982E84;
    }
L_08982E84:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(408));
    ctx.set_gpr(31, 0x08982E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08982E90u) goto L_08982E90;
    return;
L_08982E90:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08982E98;
L_08982E98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982EB8;
      }
      goto L_08982EA0;
    }
L_08982EA0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(408));
    ctx.set_gpr(31, 0x08982EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08982EACu) goto L_08982EAC;
    return;
L_08982EAC:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08982EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08982EB8u) goto L_08982EB8;
    return;
L_08982EB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982EDC;
      }
      goto L_08982EC8;
    }
L_08982EC8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08982ED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08982ED4u) goto L_08982ED4;
    return;
L_08982ED4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08982EDC;
L_08982EDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982EF4;
      }
      goto L_08982EE4;
    }
L_08982EE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08982EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08982EF4u) goto L_08982EF4;
    return;
L_08982EF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898305C;
      }
      goto L_08982F04;
    }
L_08982F04:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982F3C;
      }
      goto L_08982F14;
    }
L_08982F14:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08982F20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08982F20u) goto L_08982F20;
    return;
L_08982F20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982F34;
      }
      goto L_08982F28;
    }
L_08982F28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08982F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08982F34u) goto L_08982F34;
    return;
L_08982F34:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08982F3C;
L_08982F3C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(31, 0x08982F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08982F50u) goto L_08982F50;
    return;
L_08982F50:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982F80;
      }
      goto L_08982F64;
    }
L_08982F64:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982F80;
      }
      goto L_08982F7C;
    }
L_08982F7C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08982F80;
L_08982F80:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982FAC;
      }
      goto L_08982F88;
    }
L_08982F88:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982FAC;
      }
      goto L_08982FA0;
    }
L_08982FA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08982FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08982FACu) goto L_08982FAC;
    return;
L_08982FAC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[19]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08982FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x08982FC8u) goto L_08982FC8;
    return;
L_08982FC8:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982FF8;
      }
      goto L_08982FE4;
    }
L_08982FE4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(408));
    ctx.set_gpr(31, 0x08982FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08982FF0u) goto L_08982FF0;
    return;
L_08982FF0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08982FF8;
L_08982FF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983018;
      }
      goto L_08983000;
    }
L_08983000:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(408));
    ctx.set_gpr(31, 0x0898300Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0898300Cu) goto L_0898300C;
    return;
L_0898300C:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08983018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08983018u) goto L_08983018;
    return;
L_08983018:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898303C;
      }
      goto L_08983028;
    }
L_08983028:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08983034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08983034u) goto L_08983034;
    return;
L_08983034:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0898303C;
L_0898303C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983054;
      }
      goto L_08983044;
    }
L_08983044:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08983054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08983054u) goto L_08983054;
    return;
L_08983054:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0898305C;
L_0898305C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983088;
      }
      goto L_0898306C;
    }
L_0898306C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983088;
      }
      goto L_08983084;
    }
L_08983084:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08983088;
L_08983088:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983198;
      }
      goto L_08983090;
    }
L_08983090:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08983198;
      }
      goto L_089830A8;
    }
L_089830A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089830B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089830B4u) goto L_089830B4;
    return;
L_089830B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983198;
      }
      goto L_089830BC;
    }
L_089830BC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983198;
      }
      goto L_089830C4;
    }
L_089830C4:
    ctx.set_gpr(2, ctx.gpr[3] & 4096u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983198;
      }
      goto L_089830D0;
    }
L_089830D0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32736));
    ctx.set_gpr(31, 0x089830E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x089830E0u) goto L_089830E0;
    return;
L_089830E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983198;
      }
      goto L_089830E8;
    }
L_089830E8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11800));
    ctx.set_gpr(31, 0x089830FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x089830FCu) goto L_089830FC;
    return;
L_089830FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983198;
      }
      goto L_08983104;
    }
L_08983104:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983144;
      }
      goto L_0898310C;
    }
L_0898310C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0898311Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0898311Cu) goto L_0898311C;
    return;
L_0898311C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32692));
    ctx.set_gpr(31, 0x0898312Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0898312Cu) goto L_0898312C;
    return;
L_0898312C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x0898313Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0898313Cu) goto L_0898313C;
    return;
L_0898313C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983154;
      }
      goto L_08983144;
    }
L_08983144:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x08983154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08983154u) goto L_08983154;
    return;
L_08983154:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.set_gpr(9, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08983174u);
    // nop
    goto L_08982C1C;
L_08983174:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(412));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(31, 0x08983184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08983184u) goto L_08983184;
    return;
L_08983184:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983198;
      }
      goto L_08983190;
    }
L_08983190:
    ctx.set_gpr(31, 0x08983198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08983198u) goto L_08983198;
    return;
L_08983198:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x089831A8u);
    // nop
    ctx.pc = 0x08B0DC64u;
    return;
L_089831A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08982D0C;
      }
      goto L_089831B0;
    }
L_089831B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089831BCu);
    // nop
    ctx.pc = 0x08B0DC6Cu;
    return;
L_089831BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089831D4;
      }
      goto L_089831C4;
    }
L_089831C4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(412));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089831D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089831D4u) goto L_089831D4;
    return;
L_089831D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089831F0;
      }
      goto L_089831E4;
    }
L_089831E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089831F0;
L_089831F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983204;
      }
      goto L_089831FC;
    }
L_089831FC:
    ctx.set_gpr(31, 0x08983204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08983204u) goto L_08983204;
    return;
L_08983204:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(672));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983238:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983274;
      }
      goto L_08983260;
    }
L_08983260:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0898326Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 584u, 0x08902EC8u>(ctx, &aot_mem) && ctx.pc == 0x0898326Cu) goto L_0898326C;
    return;
L_0898326C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983288;
      }
      goto L_08983274;
    }
L_08983274:
    ctx.set_gpr(31, 0x0898327Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0898327Cu) goto L_0898327C;
    return;
L_0898327C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08983288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 481u, 0x0891E354u>(ctx, &aot_mem) && ctx.pc == 0x08983288u) goto L_08983288;
    return;
L_08983288:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089832A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089832A0u) goto L_089832A0;
    return;
L_089832A0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089832C0u);
    // nop
    goto L_08982C1C;
L_089832C0:
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
L_089832DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08983308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08983308u) goto L_08983308;
    return;
L_08983308:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08983328u);
    // nop
    goto L_08982C1C;
L_08983328:
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
L_08983340:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08983364;
      }
      goto L_0898335C;
    }
L_0898335C:
    ctx.set_gpr(31, 0x08983364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08983364u) goto L_08983364;
    return;
L_08983364:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08983374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 464u, 0x088164FCu>(ctx, &aot_mem) && ctx.pc == 0x08983374u) goto L_08983374;
    return;
L_08983374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983394;
      }
      goto L_0898337C;
    }
L_0898337C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(47));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08983394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 464u, 0x088164FCu>(ctx, &aot_mem) && ctx.pc == 0x08983394u) goto L_08983394;
    return;
L_08983394:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898337C;
      }
      goto L_0898339C;
    }
L_0898339C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(31, 0x089833ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 464u, 0x088164FCu>(ctx, &aot_mem) && ctx.pc == 0x089833ACu) goto L_089833AC;
    return;
L_089833AC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089833F0;
      }
      goto L_089833B8;
    }
L_089833B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089833E8;
      }
      goto L_089833C0;
    }
L_089833C0:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x089833CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 448u, 0x08811CB4u>(ctx, &aot_mem) && ctx.pc == 0x089833CCu) goto L_089833CC;
    return;
L_089833CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089833E4;
      }
      goto L_089833D4;
    }
L_089833D4:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x089833E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 201u, 0x08818AE8u>(ctx, &aot_mem) && ctx.pc == 0x089833E0u) goto L_089833E0;
    return;
L_089833E0:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089833E4;
L_089833E4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089833E8;
L_089833E8:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089833C0;
      }
      goto L_089833F0;
    }
L_089833F0:
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
L_08983408:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08983420u);
    // nop
    goto L_08983340;
L_08983420:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983430:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08983448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 533u, 0x0897A854u>(ctx, &aot_mem) && ctx.pc == 0x08983448u) goto L_08983448;
    return;
L_08983448:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14836));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
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
L_08983480:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089834D0;
      }
      goto L_089834A0;
    }
L_089834A0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14836));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089834B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 534u, 0x0897A86Cu>(ctx, &aot_mem) && ctx.pc == 0x089834B8u) goto L_089834B8;
    return;
L_089834B8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089834D0;
      }
      goto L_089834C4;
    }
L_089834C4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089834D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x089834D0u) goto L_089834D0;
    return;
L_089834D0:
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
L_089834EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31440)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08983534;
      }
      goto L_08983504;
    }
L_08983504:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(31948));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31440), ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31456)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983534;
      }
      goto L_08983524;
    }
L_08983524:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08983534u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983534u) goto L_08983534;
    return;
L_08983534:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983544:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898362C;
      }
      goto L_08983568;
    }
L_08983568:
    ctx.set_gpr(31, 0x08983570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x08983570u) goto L_08983570;
    return;
L_08983570:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0898357Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0898357Cu) goto L_0898357C;
    return;
L_0898357C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08983588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 290u, 0x088FD9CCu>(ctx, &aot_mem) && ctx.pc == 0x08983588u) goto L_08983588;
    return;
L_08983588:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08983598u);
    // nop
    ctx.pc = 0x08B0DF14u;
    return;
L_08983598:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089835A4u);
    // nop
    ctx.pc = 0x08B0DEF4u;
    return;
L_089835A4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089835C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089835C4u) goto L_089835C4;
    return;
L_089835C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(296)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089835DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089835DCu) goto L_089835DC;
    return;
L_089835DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089835F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089835F0u) goto L_089835F0;
    return;
L_089835F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30876)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08983610u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983610u) goto L_08983610;
    return;
L_08983610:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898362C;
      }
      goto L_08983624;
    }
L_08983624:
    ctx.set_gpr(31, 0x0898362Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0898362Cu) goto L_0898362C;
    return;
L_0898362C:
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
L_08983648:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898372C;
      }
      goto L_08983664;
    }
L_08983664:
    ctx.set_gpr(31, 0x0898366Cu);
    // nop
    goto L_089837A0;
L_0898366C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898372C;
      }
      goto L_08983674;
    }
L_08983674:
    ctx.set_gpr(4, 2200u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14148));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0898368Cu);
    // nop
    goto L_089805D8;
L_0898368C:
    ctx.set_gpr(31, 0x08983694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x08983694u) goto L_08983694;
    return;
L_08983694:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089836A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089836A0u) goto L_089836A0;
    return;
L_089836A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089836ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 290u, 0x088FD9CCu>(ctx, &aot_mem) && ctx.pc == 0x089836ACu) goto L_089836AC;
    return;
L_089836AC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089836D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089836D0u) goto L_089836D0;
    return;
L_089836D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089836E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089836E4u) goto L_089836E4;
    return;
L_089836E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30876)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08983704u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983704u) goto L_08983704;
    return;
L_08983704:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983720;
      }
      goto L_08983718;
    }
L_08983718:
    ctx.set_gpr(31, 0x08983720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08983720u) goto L_08983720;
    return;
L_08983720:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983730;
      }
      goto L_0898372C;
    }
L_0898372C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08983730;
L_08983730:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983744:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983790;
      }
      goto L_08983758;
    }
L_08983758:
    ctx.set_gpr(1, ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983778;
      }
      goto L_08983764;
    }
L_08983764:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08983770u);
    // nop
    goto L_08983808;
L_08983770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983790;
      }
      goto L_08983778;
    }
L_08983778:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08983790;
      }
      goto L_08983784;
    }
L_08983784:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08983790u);
    // nop
    goto L_089837A0;
L_08983790:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089837A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089837C4;
      }
      goto L_089837B8;
    }
L_089837B8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089837F8;
      }
      goto L_089837C4;
    }
L_089837C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089837E0u);
    // nop
    ctx.pc = 0x08B0DEDCu;
    return;
L_089837E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089837F4;
      }
      goto L_089837E8;
    }
L_089837E8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089837F8;
      }
      goto L_089837F4;
    }
L_089837F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089837F8;
L_089837F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983808:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08983828;
      }
      goto L_0898381C;
    }
L_0898381C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983850;
      }
      goto L_08983828;
    }
L_08983828:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08983838u);
    // nop
    ctx.pc = 0x08B0DEE4u;
    return;
L_08983838:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0898384C;
      }
      goto L_08983840;
    }
L_08983840:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983850;
      }
      goto L_0898384C;
    }
L_0898384C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08983850;
L_08983850:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983860:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898386C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898387Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 711u, 0x0897B5A4u>(ctx, &aot_mem) && ctx.pc == 0x0898387Cu) goto L_0898387C;
    return;
L_0898387C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898388C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089838A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 93u, 0x08804664u>(ctx, &aot_mem) && ctx.pc == 0x089838A8u) goto L_089838A8;
    return;
L_089838A8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089838B8;
      }
      goto L_089838B4;
    }
L_089838B4:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    goto L_089838B8;
L_089838B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089838FC;
      }
      goto L_089838C4;
    }
L_089838C4:
    ctx.set_gpr(3, ctx.gpr[17] & 4095u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089838FC;
      }
      goto L_089838D0;
    }
L_089838D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089838E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 93u, 0x08804664u>(ctx, &aot_mem) && ctx.pc == 0x089838E4u) goto L_089838E4;
    return;
L_089838E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089838F8;
      }
      goto L_089838EC;
    }
L_089838EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983900;
      }
      goto L_089838F8;
    }
L_089838F8:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[16]);
    goto L_089838FC;
L_089838FC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08983900;
L_08983900:
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
L_08983918:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, ctx.gpr[3] ^ ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983930:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08983948u);
    // nop
    ctx.pc = 0x08B0DD9Cu;
    return;
L_08983948:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983960:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0898398C;
      }
      goto L_08983978;
    }
L_08983978:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08983984u);
    // nop
    ctx.pc = 0x08B0DD8Cu;
    return;
L_08983984:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08983998;
      }
      goto L_0898398C;
    }
L_0898398C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898399C;
      }
      goto L_08983998;
    }
L_08983998:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0898399C;
L_0898399C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089839AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1000));
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x089839D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 417u, 0x0881DCD0u>(ctx, &aot_mem) && ctx.pc == 0x089839D0u) goto L_089839D0;
    return;
L_089839D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089839DCu);
    // nop
    ctx.pc = 0x08B0DD34u;
    return;
L_089839DC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089839F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08983A0C;
      }
      goto L_08983A04;
    }
L_08983A04:
    ctx.set_gpr(31, 0x08983A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 4u, 0x08984034u>(ctx, &aot_mem) && ctx.pc == 0x08983A0Cu) goto L_08983A0C;
    return;
L_08983A0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983A1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08983A30u);
    // nop
    ctx.pc = 0x08B0DD34u;
    return;
L_08983A30:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983A44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983A64;
      }
      goto L_08983A58;
    }
L_08983A58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983A9C;
      }
      goto L_08983A64;
    }
L_08983A64:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(89)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983A90;
      }
      goto L_08983A70;
    }
L_08983A70:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(91)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08983A90;
      }
      goto L_08983A7C;
    }
L_08983A7C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983A9C;
      }
      goto L_08983A90;
    }
L_08983A90:
    ctx.set_gpr(31, 0x08983A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 2u, 0x08984008u>(ctx, &aot_mem) && ctx.pc == 0x08983A98u) goto L_08983A98;
    return;
L_08983A98:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08983A9C;
L_08983A9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983AAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08983AC0u);
    // nop
    ctx.pc = 0x08B0DD3Cu;
    return;
L_08983AC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983AD4;
      }
      goto L_08983AC8;
    }
L_08983AC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983AD8;
      }
      goto L_08983AD4;
    }
L_08983AD4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08983AD8;
L_08983AD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983AE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08983AFCu);
    // nop
    ctx.pc = 0x08B0DE6Cu;
    return;
L_08983AFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983B10;
      }
      goto L_08983B04;
    }
L_08983B04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983B14;
      }
      goto L_08983B10;
    }
L_08983B10:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08983B14;
L_08983B14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983B24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08983B38u);
    // nop
    ctx.pc = 0x08B0DE2Cu;
    return;
L_08983B38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983B4C;
      }
      goto L_08983B40;
    }
L_08983B40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983B50;
      }
      goto L_08983B4C;
    }
L_08983B4C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08983B50;
L_08983B50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983B60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08983B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 518u, 0x0895E1D8u>(ctx, &aot_mem) && ctx.pc == 0x08983B78u) goto L_08983B78;
    return;
L_08983B78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983B8C;
      }
      goto L_08983B80;
    }
L_08983B80:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983BEC;
      }
      goto L_08983B8C;
    }
L_08983B8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08983BE8;
      }
      goto L_08983B9C;
    }
L_08983B9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 5u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(111));
    ctx.set_gpr(31, 0x08983BC8u);
    // nop
    ctx.pc = 0x08B0DE24u;
    return;
L_08983BC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983BDC;
      }
      goto L_08983BD0;
    }
L_08983BD0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983BE0;
      }
      goto L_08983BDC;
    }
L_08983BDC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08983BE0;
L_08983BE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983BEC;
      }
      goto L_08983BE8;
    }
L_08983BE8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08983BEC;
L_08983BEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983C00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983C20;
      }
      goto L_08983C14;
    }
L_08983C14:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983C88;
      }
      goto L_08983C20;
    }
L_08983C20:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(89)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983C4C;
      }
      goto L_08983C2C;
    }
L_08983C2C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(91)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08983C4C;
      }
      goto L_08983C38;
    }
L_08983C38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983C88;
      }
      goto L_08983C4C;
    }
L_08983C4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08983C68;
      }
      goto L_08983C5C;
    }
L_08983C5C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983C70;
      }
      goto L_08983C68;
    }
L_08983C68:
    ctx.set_gpr(31, 0x08983C70u);
    // nop
    ctx.pc = 0x08B0DE0Cu;
    return;
L_08983C70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983C84;
      }
      goto L_08983C78;
    }
L_08983C78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983C88;
      }
      goto L_08983C84;
    }
L_08983C84:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08983C88;
L_08983C88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983C98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08983CB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983CB0u) goto L_08983CB0;
    return;
L_08983CB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983CC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08983CD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983CD8u) goto L_08983CD8;
    return;
L_08983CD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983CE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08983D00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983D00u) goto L_08983D00;
    return;
L_08983D00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983D10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08983D28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983D28u) goto L_08983D28;
    return;
L_08983D28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983D38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08983D5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983D5Cu) goto L_08983D5C;
    return;
L_08983D5C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08983D70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 2u, 0x08984008u>(ctx, &aot_mem) && ctx.pc == 0x08983D70u) goto L_08983D70;
    return;
L_08983D70:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_08983D8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08983DACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983DACu) goto L_08983DAC;
    return;
L_08983DAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983DC0;
      }
      goto L_08983DB4;
    }
L_08983DB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983EC4;
      }
      goto L_08983DC0;
    }
L_08983DC0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08983DDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983DDCu) goto L_08983DDC;
    return;
L_08983DDC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983DF4;
      }
      goto L_08983DE8;
    }
L_08983DE8:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16384));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983DF8;
      }
      goto L_08983DF4;
    }
L_08983DF4:
    ctx.set_gpr(8, 0u + 0u);
    goto L_08983DF8;
L_08983DF8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 5u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(111));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983E38;
      }
      goto L_08983E30;
    }
L_08983E30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983E40;
      }
      goto L_08983E38;
    }
L_08983E38:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8240));
    goto L_08983E40;
L_08983E40:
    ctx.set_gpr(5, 2200u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15672));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08983E58u);
    // nop
    ctx.pc = 0x08B0DDE4u;
    return;
L_08983E58:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08983E78;
      }
      goto L_08983E64;
    }
L_08983E64:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983EC4;
      }
      goto L_08983E78;
    }
L_08983E78:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08983E90u);
    // nop
    ctx.pc = 0x08B0DD7Cu;
    return;
L_08983E90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983EC0;
      }
      goto L_08983E98;
    }
L_08983E98:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08983EB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983EB4u) goto L_08983EB4;
    return;
L_08983EB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983EC4;
      }
      goto L_08983EC0;
    }
L_08983EC0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08983EC4;
L_08983EC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983ED8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983EEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08983F38;
      }
      goto L_08983F08;
    }
L_08983F08:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08983F18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983F18u) goto L_08983F18;
    return;
L_08983F18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983F38;
      }
      goto L_08983F20;
    }
L_08983F20:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08983F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 2u, 0x08984008u>(ctx, &aot_mem) && ctx.pc == 0x08983F2Cu) goto L_08983F2C;
    return;
L_08983F2C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983F3C;
      }
      goto L_08983F38;
    }
L_08983F38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08983F3C;
L_08983F3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983F50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983F64:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08983F88;
      }
      goto L_08983F70;
    }
L_08983F70:
    ctx.set_gpr(2, ctx.gpr[5] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983F8C;
      }
      goto L_08983F88;
    }
L_08983F88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08983F8C;
L_08983F8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983F94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(90)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983FB0;
      }
      goto L_08983FA8;
    }
L_08983FA8:
    ctx.set_gpr(31, 0x08983FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 2u, 0x08984008u>(ctx, &aot_mem) && ctx.pc == 0x08983FB0u) goto L_08983FB0;
    return;
L_08983FB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983FC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(90)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983FE4;
      }
      goto L_08983FD4;
    }
L_08983FD4:
    ctx.set_gpr(31, 0x08983FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 2u, 0x08984008u>(ctx, &aot_mem) && ctx.pc == 0x08983FDCu) goto L_08983FDC;
    return;
L_08983FDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983FEC;
      }
      goto L_08983FE4;
    }
L_08983FE4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08983FEC;
L_08983FEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983FFC:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(0u));
    ctx.pc = 0x08984000u; return;
}

void recomp_unit_0095(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0095_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_95(Runtime &runtime) {
    runtime.register_generated_unit(95u, 0x08980000u, 16384u, &recomp_unit_0095, &recomp_unit_0095_entry);
    runtime.register_function(0x08980000u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980004u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980038u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980044u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980068u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980074u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980080u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980090u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898009Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980108u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980118u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980124u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898012Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980138u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980140u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980154u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980170u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898018Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980198u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980214u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898022Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980230u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980238u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980250u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898025Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898026Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980274u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980280u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980290u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898029Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980300u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980310u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980324u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980334u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980348u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980358u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980374u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898037Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980384u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980398u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089803A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089803B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089803C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089803D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089803E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089803F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980428u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898043Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980448u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980454u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980474u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980494u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980500u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898052Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898053Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980558u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980570u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980578u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980588u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980594u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898060Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980630u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898064Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980658u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980694u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980708u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980728u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898073Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980748u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980758u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898075Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980768u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980774u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980798u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980804u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980820u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980824u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980830u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898084Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980864u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980888u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980904u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980910u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980920u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980924u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898092Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980938u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898095Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980970u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980980u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980988u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980994u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980998u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A0Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A30u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A7Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AD0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B30u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C34u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C48u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CC4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D0Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D34u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D48u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980DA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980DB0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980DBCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980DC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980DD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980DDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980DF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E00u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E6Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E7Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980EA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980EB0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980EC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980ECCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980ED4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980EDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980EECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F94u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980FA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980FA8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980FC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980FD0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980FDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980FE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980FECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980FF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981004u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981014u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981020u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981028u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981030u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981040u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981058u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981070u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981074u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898107Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981094u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981100u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981114u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898111Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981134u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981140u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898114Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898115Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981168u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981170u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898117Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981184u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981198u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981200u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981208u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981218u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981230u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981248u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898124Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981254u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898126Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981278u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981280u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898128Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981304u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981314u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981328u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981344u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898134Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898135Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981368u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981378u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981398u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089813A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089813B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089813C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089813D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089813DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089813FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981414u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898141Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981428u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981430u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981434u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981448u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898146Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981478u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981480u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981488u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981498u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089814A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089814B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089814B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089814D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089814E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981504u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898150Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981528u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981538u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981564u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898156Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981578u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981588u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981598u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089815B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089815BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089815CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089815D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089815E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089815ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089815F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898160Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898161Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981628u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981630u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981638u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981644u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981650u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981660u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898166Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981674u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898167Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898168Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981708u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898173Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981744u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898175Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981764u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981780u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898180Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981818u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981820u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981828u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981834u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981840u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981850u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898185Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981864u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898186Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898187Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981894u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981904u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981910u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981920u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898192Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981934u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981940u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981948u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981960u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981970u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898197Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981984u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898198Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981998u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A34u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AA8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981ABCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AC4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981ADCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B00u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B30u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BA8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BB4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BBCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BC4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C34u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CB4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D30u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981DA8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981DACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981DB4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981DCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981DD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981DE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981DF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981DFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E0Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E34u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E6Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E7Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E94u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981EA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981EB0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981EB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981EC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981ED0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981EE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F00u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F0Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F30u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F48u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FA8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FC4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982008u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982010u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982018u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982028u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982040u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982058u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898205Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982064u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898207Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982088u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982090u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982108u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982110u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982118u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982150u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982158u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898216Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898217Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982194u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982204u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982210u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982218u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982220u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898222Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982238u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982248u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982254u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898225Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982264u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982274u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898228Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089822A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089822A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089822B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089822C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089822D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089822DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089822F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982300u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982310u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898231Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982324u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982330u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982338u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982350u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982354u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982364u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982370u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982378u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982380u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898238Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982398u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089823A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089823B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089823BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089823C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089823D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089823ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982404u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982408u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982410u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982428u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982434u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982454u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982504u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982510u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982518u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982528u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982534u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982544u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982550u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982558u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982564u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898256Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982584u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982594u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982604u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898261Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982634u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982638u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982640u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982658u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982664u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898266Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898267Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982688u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982698u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982704u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982710u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898271Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898272Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982738u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982740u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982748u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982758u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982770u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982788u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898278Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982794u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982800u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898280Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982814u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898282Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898283Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982848u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982850u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982858u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982864u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982870u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982880u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898288Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982894u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898289Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089828ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089828C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089828DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089828E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089828E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982900u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898290Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982914u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898292Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982944u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982950u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982960u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898296Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982974u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982980u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982988u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A00u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982ABCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AD0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982ADCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B0Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B34u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B6Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B7Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B94u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BB0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BD0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C0Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982CA8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982CACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982CB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982CC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982CD0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982CD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982CE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982CF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D0Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D48u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DB4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982ED4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F34u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F7Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983000u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898300Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983018u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983028u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983034u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898303Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983044u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983054u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898305Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898306Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983084u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983088u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983090u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983104u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898310Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898311Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898312Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898313Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983144u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983154u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983174u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983184u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983190u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983198u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983204u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983238u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983260u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898326Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983274u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898327Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983288u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089832A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089832C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089832DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983308u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983328u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983340u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898335Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983364u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983374u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898337Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983394u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898339Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089833ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089833B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089833C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089833CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089833D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089833E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089833E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089833E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089833F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983408u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983420u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983430u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983448u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983480u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089834A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089834B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089834C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089834D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089834ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983504u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983524u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983534u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983544u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983568u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983570u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898357Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983588u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983598u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089835A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089835C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089835DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089835F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983610u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983624u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898362Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983648u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983664u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898366Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983674u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898368Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983694u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089836A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089836ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089836D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089836E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983704u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983718u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983720u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898372Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983730u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983744u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983758u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983764u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983770u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983778u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983784u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983790u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089837A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089837B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089837C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089837E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089837E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089837F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089837F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983808u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898381Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983828u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983838u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983840u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898384Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983850u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983860u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898386Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898387Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898388Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089838A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089838B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089838B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089838C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089838D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089838E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089838ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089838F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089838FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983900u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983918u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983930u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983948u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983960u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983978u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983984u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898398Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983998u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898399Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089839ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089839D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089839DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089839F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A0Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A30u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A44u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A7Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983BC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983BD0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983BDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983BE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983BE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983BECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C00u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CB0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D00u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DB4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E30u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EB4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EC4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983ED8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F94u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FA8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FB0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FFCu, &recomp_unit_0095, "recomp_unit_0095");
}
} // namespace psprecomp
