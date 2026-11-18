#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0068[4095] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 9, 0, 0,
    0, 10, 11, 0, 0, 0, 0, 0, 0, 12, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0,
    17, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 24, 0, 0, 25, 0, 26, 0, 0, 27, 0,
    0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 36, 0, 37, 0, 0,
    0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0,
    47, 0, 48, 0, 0, 0, 49, 50, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0,
    58, 0, 0, 0, 59, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 66, 0, 67, 68, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 72, 0, 0, 73, 74, 0, 75,
    0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 83, 0, 0, 0, 84,
    0, 0, 85, 0, 0, 0, 86, 87, 0, 88, 0, 0, 89, 0, 90, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 0, 95, 96, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0,
    0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 110, 0, 0, 111, 0, 112, 0, 0, 0, 113, 114, 0, 0, 0, 115, 0, 0, 116, 0, 117,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 121, 0, 0, 122, 0, 123, 0, 0,
    124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 127, 0, 0, 128, 0, 129, 0, 0, 130, 0, 0, 0, 131, 132, 0, 133, 0, 134, 0, 0, 0, 0,
    135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 145,
    146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 153, 0,
    0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 167,
    0, 0, 0, 168, 0, 0, 0, 169, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0,
    173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 181, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 190, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0,
    202, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 211,
    0, 212, 0, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0, 0, 217, 0, 218, 0, 0, 219, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 222, 0,
    223, 0, 0, 224, 0, 225, 0, 0, 226, 0, 227, 0, 0, 228, 0, 229, 0, 0, 230, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 234, 0, 0,
    0, 235, 0, 0, 236, 0, 237, 0, 0, 238, 0, 239, 0, 0, 240, 0, 241, 0, 0, 242, 0, 243, 0, 0, 244, 0, 0, 0, 245, 0, 246, 0,
    0, 0, 247, 0, 0, 248, 0, 249, 0, 0, 250, 0, 251, 0, 0, 252, 0, 253, 0, 0, 254, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 258,
    0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 266, 0, 0, 0,
    267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 272, 0, 0, 273, 0, 0, 274, 0, 275, 0, 0, 276, 0,
    277, 0, 0, 278, 0, 279, 0, 0, 280, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 285, 0, 286, 0, 0, 287, 0, 288,
    0, 0, 289, 0, 290, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 0,
    296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 300, 0, 301, 0, 0, 302, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 306,
    0, 0, 307, 0, 308, 0, 0, 309, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 313, 0, 314, 0, 0, 0, 315, 0, 0, 316, 0, 0,
    0, 0, 317, 0, 0, 318, 0, 319, 0, 0, 320, 0, 321, 0, 0, 322, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 0, 0, 326, 0,
    0, 327, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 334, 0, 0, 335, 0, 336, 0, 0,
    337, 0, 338, 0, 0, 339, 0, 0, 0, 0, 340, 0, 341, 0, 0, 342, 0, 343, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0,
    346, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0,
    354, 0, 0, 355, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 363, 364, 0, 365, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372,
    0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379,
    0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 387, 0,
    0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 391, 0, 0, 392, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 397, 0,
    0, 398, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 403, 0, 404, 0, 0, 0, 0, 0, 405, 406, 407, 0, 0, 0,
    0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 411, 0, 412, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 415,
    0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 419, 420, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 423, 0, 424, 0,
    425, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 428, 429, 0, 430, 0, 0, 431, 0, 0, 432, 0, 433, 0, 434, 0, 0, 0, 435, 436, 0,
    437, 0, 0, 0, 438, 439, 0, 440, 0, 0, 0, 441, 442, 0, 443, 444, 0, 445, 0, 0, 446, 0, 0, 447, 0, 448, 0, 449, 0, 0, 0, 0,
    0, 450, 0, 0, 0, 0, 0, 451, 452, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0,
    0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0,
    0, 461, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 468, 0, 0, 469,
    470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0,
    0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 480,
    0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 485, 0, 0, 486, 0, 0, 0,
    487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0,
    0, 493, 0, 0, 0, 494, 0, 0, 495, 0, 496, 0, 0, 497, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0,
    502, 0, 0, 503, 0, 504, 0, 0, 0, 505, 0, 506, 0, 0, 507, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0,
    512, 0, 513, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 0, 517, 0, 518, 0, 0, 519, 0, 0, 520, 0, 0, 0, 521, 0, 0, 522, 0, 0,
    0, 0, 523, 0, 0, 0, 0, 524, 0, 0, 525, 0, 526, 0, 0, 0, 0, 527, 0, 0, 528, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0,
    530, 0, 0, 531, 532, 0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 536, 0, 0, 0, 537, 0, 538, 0, 0, 0, 0, 539,
    0, 0, 0, 0, 540, 0, 541, 542, 0, 0, 543, 0, 0, 0, 544, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0,
    0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 551, 552, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0,
    0, 556, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 561, 562, 0, 0, 563, 0, 0, 0, 564, 0, 0, 565, 0,
    566, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0,
    572, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 580, 0,
    0, 581, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 588, 0, 589, 0,
    0, 0, 590, 0, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 594, 0, 0, 0, 0, 0, 0, 595, 0, 596, 0,
    0, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 601, 0, 0, 602,
    0, 0, 603, 0, 0, 604, 0, 0, 605, 0, 0, 606, 0, 0, 0, 0, 607, 0, 608, 0, 0, 609, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0,
    612, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 619,
    0, 0, 620, 621, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 625, 0, 0, 626, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0,
    0, 0, 630, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 638, 0, 0, 639, 0, 0, 0, 0, 0, 0, 640,
    0, 0, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 0, 0, 645, 0, 0, 646, 0, 0, 647,
    0, 0, 648, 649, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 653, 0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 661,
    0, 0, 662, 0, 0, 663, 664, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0, 667, 0, 0, 668, 0, 0, 669, 670, 0, 0, 0, 0, 671, 0, 0,
    672, 0, 0, 673, 0, 0, 674, 675, 0, 0, 0, 0, 676, 0, 0, 677, 0, 0, 678, 0, 0, 679, 680, 0, 0, 0, 0, 681, 0, 0, 682, 0,
    0, 683, 0, 0, 684, 685, 0, 0, 0, 0, 686, 0, 0, 687, 0, 0, 688, 0, 0, 689, 690, 0, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0,
    0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 0, 695, 696, 0, 0, 697, 698, 0, 0, 699, 700, 0, 0, 701, 702, 0, 0,
    703, 704, 0, 0, 0, 0, 705, 0, 0, 0, 706, 707, 0, 0, 0, 708, 0, 0, 709, 710, 0, 0, 0, 711, 712, 0, 0, 713, 714, 0, 0, 0,
    715, 0, 0, 716, 717, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 720, 0, 0, 721, 0, 0, 0, 0, 0, 722, 0,
    0, 723, 0, 0, 0, 0, 0, 0, 724, 0, 725, 0, 0, 0, 726, 0, 0, 0, 0, 727, 0, 728, 729, 0, 0, 0, 0, 730, 0, 0, 0, 731,
    0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 735, 0, 0, 0, 0, 0, 736, 0, 0, 737, 0,
    0, 0, 0, 0, 0, 738, 0, 0, 0, 739, 0, 0, 0, 740, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0,
    0, 744, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 746, 0, 0, 0, 747, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0,
    0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 753, 0, 754, 0, 0, 0, 755, 756, 0, 0, 757, 758, 0,
    0, 759, 0, 0, 760, 0, 0, 761, 0, 0, 762, 763, 764, 0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 767, 0, 0, 768, 0, 0, 0, 0,
    769, 0, 0, 0, 770, 0, 0, 771, 0, 0, 772, 0, 773, 0, 0, 0, 774, 0, 775, 0, 0, 0, 0, 776, 0, 0, 0, 0, 777, 0, 0, 0,
    0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 779, 780, 0, 0, 781, 0, 782, 0, 0, 783, 0, 784, 0, 0, 0, 0, 785, 0, 0, 0, 0,
    786, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 788, 0, 0, 789, 0, 0, 0, 790, 791, 0, 0, 792, 793, 0, 0, 794, 0,
    0, 795, 0, 0, 796, 0, 0, 797, 798, 799, 0, 0, 0, 0, 800, 0, 0, 0, 801, 0, 0, 802, 0, 0, 803, 0, 0, 0, 0, 804, 0, 0,
    0, 805, 0, 0, 806, 0, 0, 807, 0, 808, 0, 0, 0, 809, 0, 810, 0, 0, 0, 0, 811, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0,
    0, 813, 0, 0, 0, 0, 0, 0, 814, 815, 0, 0, 816, 0, 817, 0, 0, 818, 0, 819, 0, 0, 0, 0, 820, 0, 0, 0, 0, 821, 0, 0,
    0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 823, 0, 0, 824, 825, 0, 0, 0, 0, 826, 0, 0, 0, 827, 0, 0, 828, 0, 829, 830,
    0, 0, 0, 0, 831, 0, 0, 0, 832, 0, 0, 833, 0, 0, 834, 0, 0, 0, 835, 0, 836, 0, 0, 0, 0, 837, 0, 0, 0, 0, 838, 0,
    0, 0, 0, 0, 0, 0, 839, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 841, 0, 842, 0, 0, 843, 0, 844, 0, 0, 0, 0, 845, 0, 0,
    0, 0, 846, 0, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 848, 849, 0, 0, 850, 0, 851, 0, 0, 852, 0, 853, 0, 0, 0,
    0, 854, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 0, 0, 0, 0, 857, 858, 0, 0, 859, 0, 860, 0, 0, 861, 0,
    862, 0, 0, 0, 0, 863, 0, 0, 0, 0, 864, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 0, 866, 867, 0, 0, 868, 0, 869,
    0, 0, 870, 0, 871, 0, 0, 0, 0, 872, 0, 0, 0, 0, 873, 0, 0, 0, 0, 0, 0, 0, 874, 0, 0, 0, 0, 0, 0, 875, 876, 0,
    0, 0, 0, 877, 0, 0, 0, 878, 0, 879, 0, 0, 880, 0, 881, 0, 0, 0, 0, 882, 0, 0, 0, 0, 883, 0, 0, 0, 0, 0, 0, 0,
    884, 0, 0, 0, 0, 0, 0, 885, 886, 0, 0, 0, 887, 0, 888, 0, 0, 889, 0, 890, 0, 0, 0, 0, 0, 0, 0, 891, 0, 0, 0, 0,
    892, 0, 0, 0, 0, 0, 0, 0, 893, 0, 0, 0, 0, 0, 0, 894, 0, 895, 0, 0, 0, 0, 896, 0, 0, 0, 897, 0, 0, 898, 0, 0,
    0, 899, 0, 900, 0, 0, 901, 0, 902, 0, 0, 0, 0, 0, 0, 0, 903, 0, 0, 0, 0, 904, 0, 0, 0, 0, 0, 0, 0, 905, 0, 0,
    0, 0, 0, 0, 906, 907, 0, 0, 908, 0, 909, 0, 0, 910, 0, 911, 0, 0, 0, 0, 912, 0, 0, 0, 0, 913, 0, 0, 0, 0, 0, 0,
    0, 914, 0, 0, 0, 0, 0, 0, 915, 916, 0, 0, 0, 0, 917, 0, 0, 918, 0, 0, 0, 0, 919, 0, 0, 0, 920, 0, 0, 921, 0, 0,
    0, 922, 0, 0, 0, 923, 0, 0, 924, 0, 0, 925, 0, 926, 0, 927, 0, 0, 0, 928, 0, 929, 0, 0, 0, 930, 0, 931, 0, 0, 0, 0,
    932, 0, 0, 0, 0, 933, 0, 0, 0, 0, 0, 0, 0, 934, 0, 0, 0, 0, 0, 0, 935, 0, 0, 936, 0, 0, 0, 937, 0, 0, 0, 0,
    938, 0, 0, 0, 939, 0, 0, 940, 0, 941, 0, 0, 0, 942, 0, 943, 0, 0, 944, 0, 0, 0, 945, 0, 0, 946, 0, 947, 0, 0, 948, 0,
    949, 0, 0, 0, 0, 950, 0, 0, 0, 0, 951, 0, 0, 0, 0, 0, 0, 0, 952, 0, 0, 0, 0, 0, 0, 953, 954, 0, 0, 0, 0, 955,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 956, 0, 0, 0, 0, 957, 0, 0, 958, 0, 0, 0, 0, 0, 959, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 960, 0, 0, 0, 961, 0, 0, 0, 962, 0, 0, 0, 963, 0, 0, 964, 0, 0, 0, 965, 0, 0, 0, 966, 0, 0, 0, 967, 0,
    968, 0, 0, 0, 0, 0, 0, 0, 969, 0, 0, 0, 970, 971, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 972, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 973, 0, 0, 974, 975, 0, 0, 976, 0, 0, 0, 0, 977, 0, 978, 0, 0, 0, 0, 979, 0, 0, 980, 0, 0,
    0, 981, 0, 0, 982, 0, 0, 0, 0, 0, 983, 0, 984, 0, 0, 0, 0, 0, 0, 0, 985, 0, 0, 986, 0, 0, 0, 987, 0, 0, 988, 0,
    0, 0, 989, 0, 0, 990, 0, 0, 0, 0, 0, 991, 0, 0, 992, 0, 0, 0, 993, 0, 0, 994, 0, 0, 995, 0, 0, 0, 0, 0, 0, 0,
    996, 0, 0, 997, 0, 0, 998, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 999, 0, 0, 0, 0, 0, 0, 1000,
    0, 0, 1001, 0, 0, 1002, 1003, 0, 0, 1004, 0, 0, 1005, 0, 0, 0, 1006, 0, 0, 0, 1007, 0, 0, 0, 0, 0, 0, 1008, 0, 0, 1009, 0,
    0, 1010, 1011, 0, 0, 1012, 0, 0, 1013, 0, 0, 0, 1014, 0, 1015, 0, 0, 1016, 0, 1017, 0, 0, 0, 0, 0, 0, 0, 1018, 0, 0, 1019, 1020,
    0, 0, 1021, 0, 1022, 0, 0, 0, 0, 0, 0, 1023, 0, 0, 1024, 0, 0, 1025, 1026, 0, 0, 1027, 0, 0, 1028, 0, 0, 0, 1029, 0, 1030, 0,
    0, 1031, 0, 1032, 0, 0, 0, 0, 0, 0, 1033, 0, 0, 1034, 0, 0, 1035, 1036, 0, 0, 1037, 0, 0, 1038, 0, 0, 0, 1039, 0, 0, 0, 0,
    1040, 1041, 0, 0, 1042, 0, 1043, 0, 0, 0, 0, 0, 0, 0, 1044, 0, 0, 1045, 1046, 0, 0, 1047, 0, 1048, 0, 0, 0, 0, 0, 0, 1049, 0,
    0, 1050, 0, 0, 1051, 1052, 0, 0, 1053, 0, 0, 1054, 0, 0, 0, 1055, 0, 1056, 0, 0, 1057, 0, 1058, 0, 0, 0, 0, 0, 0, 1059, 0, 0,
    1060, 0, 0, 1061, 1062, 0, 0, 1063, 0, 0, 1064, 0, 0, 0, 1065, 0, 0, 0, 0, 1066, 1067, 0, 1068, 0, 0, 0, 0, 0, 0, 1069, 0, 0,
    1070, 0, 0, 1071, 1072, 0, 0, 1073, 0, 0, 1074, 0, 0, 0, 1075, 0, 0, 0, 0, 1076, 0, 1077, 0, 0, 0, 0, 0, 0, 1078, 0, 0, 1079,
    0, 0, 1080, 1081, 0, 0, 1082, 0, 0, 1083, 0, 0, 0, 1084, 0, 0, 0, 1085, 1086, 0, 0, 1087, 0, 1088, 0, 0, 0, 0, 0, 0, 1089,
};
void recomp_unit_0068_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08914000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0068[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08914000;
    case 2u: goto L_0891400C;
    case 3u: goto L_08914028;
    case 4u: goto L_08914038;
    case 5u: goto L_08914040;
    case 6u: goto L_08914054;
    case 7u: goto L_08914060;
    case 8u: goto L_0891406C;
    case 9u: goto L_08914074;
    case 10u: goto L_08914084;
    case 11u: goto L_08914088;
    case 12u: goto L_089140A4;
    case 13u: goto L_089140A8;
    case 14u: goto L_089140B0;
    case 15u: goto L_089140E4;
    case 16u: goto L_089140F0;
    case 17u: goto L_08914100;
    case 18u: goto L_0891410C;
    case 19u: goto L_08914118;
    case 20u: goto L_08914128;
    case 21u: goto L_08914138;
    case 22u: goto L_08914144;
    case 23u: goto L_08914150;
    case 24u: goto L_08914158;
    case 25u: goto L_08914164;
    case 26u: goto L_0891416C;
    case 27u: goto L_08914178;
    case 28u: goto L_08914188;
    case 29u: goto L_08914190;
    case 30u: goto L_089141A0;
    case 31u: goto L_089141A8;
    case 32u: goto L_089141B8;
    case 33u: goto L_089141C0;
    case 34u: goto L_089141CC;
    case 35u: goto L_089141D8;
    case 36u: goto L_089141EC;
    case 37u: goto L_089141F4;
    case 38u: goto L_08914204;
    case 39u: goto L_0891420C;
    case 40u: goto L_0891421C;
    case 41u: goto L_08914228;
    case 42u: goto L_08914230;
    case 43u: goto L_08914238;
    case 44u: goto L_0891424C;
    case 45u: goto L_08914270;
    case 46u: goto L_08914278;
    case 47u: goto L_08914280;
    case 48u: goto L_08914288;
    case 49u: goto L_08914298;
    case 50u: goto L_0891429C;
    case 51u: goto L_089142A8;
    case 52u: goto L_089142B0;
    case 53u: goto L_089142BC;
    case 54u: goto L_089142C8;
    case 55u: goto L_089142E0;
    case 56u: goto L_089142E8;
    case 57u: goto L_089142F8;
    case 58u: goto L_08914300;
    case 59u: goto L_08914310;
    case 60u: goto L_0891431C;
    case 61u: goto L_08914324;
    case 62u: goto L_08914334;
    case 63u: goto L_08914340;
    case 64u: goto L_0891434C;
    case 65u: goto L_08914354;
    case 66u: goto L_08914360;
    case 67u: goto L_08914368;
    case 68u: goto L_0891436C;
    case 69u: goto L_08914390;
    case 70u: goto L_089143C8;
    case 71u: goto L_089143DC;
    case 72u: goto L_089143E4;
    case 73u: goto L_089143F0;
    case 74u: goto L_089143F4;
    case 75u: goto L_089143FC;
    case 76u: goto L_08914414;
    case 77u: goto L_08914424;
    case 78u: goto L_08914438;
    case 79u: goto L_08914440;
    case 80u: goto L_0891444C;
    case 81u: goto L_08914458;
    case 82u: goto L_08914464;
    case 83u: goto L_0891446C;
    case 84u: goto L_0891447C;
    case 85u: goto L_08914488;
    case 86u: goto L_08914498;
    case 87u: goto L_0891449C;
    case 88u: goto L_089144A4;
    case 89u: goto L_089144B0;
    case 90u: goto L_089144B8;
    case 91u: goto L_089144C4;
    case 92u: goto L_089144D4;
    case 93u: goto L_089144DC;
    case 94u: goto L_089144EC;
    case 95u: goto L_08914508;
    case 96u: goto L_0891450C;
    case 97u: goto L_08914514;
    case 98u: goto L_08914520;
    case 99u: goto L_08914544;
    case 100u: goto L_08914548;
    case 101u: goto L_0891455C;
    case 102u: goto L_08914584;
    case 103u: goto L_089145B4;
    case 104u: goto L_089145C0;
    case 105u: goto L_089145D0;
    case 106u: goto L_089145F0;
    case 107u: goto L_089145F8;
    case 108u: goto L_08914614;
    case 109u: goto L_08914628;
    case 110u: goto L_08914630;
    case 111u: goto L_0891463C;
    case 112u: goto L_08914644;
    case 113u: goto L_08914654;
    case 114u: goto L_08914658;
    case 115u: goto L_08914668;
    case 116u: goto L_08914674;
    case 117u: goto L_0891467C;
    case 118u: goto L_089146A0;
    case 119u: goto L_089146CC;
    case 120u: goto L_089146DC;
    case 121u: goto L_089146E0;
    case 122u: goto L_089146EC;
    case 123u: goto L_089146F4;
    case 124u: goto L_08914700;
    case 125u: goto L_08914710;
    case 126u: goto L_08914720;
    case 127u: goto L_08914728;
    case 128u: goto L_08914734;
    case 129u: goto L_0891473C;
    case 130u: goto L_08914748;
    case 131u: goto L_08914758;
    case 132u: goto L_0891475C;
    case 133u: goto L_08914764;
    case 134u: goto L_0891476C;
    case 135u: goto L_08914780;
    case 136u: goto L_0891478C;
    case 137u: goto L_0891479C;
    case 138u: goto L_089147A8;
    case 139u: goto L_089147B0;
    case 140u: goto L_089147BC;
    case 141u: goto L_089147CC;
    case 142u: goto L_089147D4;
    case 143u: goto L_089147E4;
    case 144u: goto L_089147F4;
    case 145u: goto L_089147FC;
    case 146u: goto L_08914800;
    case 147u: goto L_0891481C;
    case 148u: goto L_08914834;
    case 149u: goto L_08914848;
    case 150u: goto L_08914854;
    case 151u: goto L_08914860;
    case 152u: goto L_08914870;
    case 153u: goto L_08914878;
    case 154u: goto L_0891488C;
    case 155u: goto L_089148B0;
    case 156u: goto L_089148BC;
    case 157u: goto L_089148C4;
    case 158u: goto L_089148CC;
    case 159u: goto L_089148DC;
    case 160u: goto L_089148E4;
    case 161u: goto L_08914900;
    case 162u: goto L_08914928;
    case 163u: goto L_08914940;
    case 164u: goto L_0891494C;
    case 165u: goto L_08914958;
    case 166u: goto L_08914970;
    case 167u: goto L_0891497C;
    case 168u: goto L_0891498C;
    case 169u: goto L_0891499C;
    case 170u: goto L_089149A0;
    case 171u: goto L_089149C0;
    case 172u: goto L_089149E8;
    case 173u: goto L_08914A00;
    case 174u: goto L_08914A0C;
    case 175u: goto L_08914A18;
    case 176u: goto L_08914A34;
    case 177u: goto L_08914A40;
    case 178u: goto L_08914A4C;
    case 179u: goto L_08914A5C;
    case 180u: goto L_08914A6C;
    case 181u: goto L_08914A70;
    case 182u: goto L_08914A90;
    case 183u: goto L_08914AB8;
    case 184u: goto L_08914AD0;
    case 185u: goto L_08914ADC;
    case 186u: goto L_08914AE8;
    case 187u: goto L_08914B00;
    case 188u: goto L_08914B20;
    case 189u: goto L_08914B28;
    case 190u: goto L_08914B38;
    case 191u: goto L_08914B3C;
    case 192u: goto L_08914B48;
    case 193u: goto L_08914B68;
    case 194u: goto L_08914B90;
    case 195u: goto L_08914B9C;
    case 196u: goto L_08914BAC;
    case 197u: goto L_08914BB8;
    case 198u: goto L_08914BC8;
    case 199u: goto L_08914BD4;
    case 200u: goto L_08914BE8;
    case 201u: goto L_08914BF4;
    case 202u: goto L_08914C00;
    case 203u: goto L_08914C10;
    case 204u: goto L_08914C18;
    case 205u: goto L_08914C30;
    case 206u: goto L_08914C38;
    case 207u: goto L_08914C40;
    case 208u: goto L_08914C50;
    case 209u: goto L_08914C5C;
    case 210u: goto L_08914C70;
    case 211u: goto L_08914C7C;
    case 212u: goto L_08914C84;
    case 213u: goto L_08914C90;
    case 214u: goto L_08914C98;
    case 215u: goto L_08914CA4;
    case 216u: goto L_08914CAC;
    case 217u: goto L_08914CB8;
    case 218u: goto L_08914CC0;
    case 219u: goto L_08914CCC;
    case 220u: goto L_08914CE0;
    case 221u: goto L_08914CE8;
    case 222u: goto L_08914CF8;
    case 223u: goto L_08914D00;
    case 224u: goto L_08914D0C;
    case 225u: goto L_08914D14;
    case 226u: goto L_08914D20;
    case 227u: goto L_08914D28;
    case 228u: goto L_08914D34;
    case 229u: goto L_08914D3C;
    case 230u: goto L_08914D48;
    case 231u: goto L_08914D50;
    case 232u: goto L_08914D5C;
    case 233u: goto L_08914D6C;
    case 234u: goto L_08914D74;
    case 235u: goto L_08914D84;
    case 236u: goto L_08914D90;
    case 237u: goto L_08914D98;
    case 238u: goto L_08914DA4;
    case 239u: goto L_08914DAC;
    case 240u: goto L_08914DB8;
    case 241u: goto L_08914DC0;
    case 242u: goto L_08914DCC;
    case 243u: goto L_08914DD4;
    case 244u: goto L_08914DE0;
    case 245u: goto L_08914DF0;
    case 246u: goto L_08914DF8;
    case 247u: goto L_08914E08;
    case 248u: goto L_08914E14;
    case 249u: goto L_08914E1C;
    case 250u: goto L_08914E28;
    case 251u: goto L_08914E30;
    case 252u: goto L_08914E3C;
    case 253u: goto L_08914E44;
    case 254u: goto L_08914E50;
    case 255u: goto L_08914E58;
    case 256u: goto L_08914E64;
    case 257u: goto L_08914E70;
    case 258u: goto L_08914E7C;
    case 259u: goto L_08914E88;
    case 260u: goto L_08914E98;
    case 261u: goto L_08914EB4;
    case 262u: goto L_08914EBC;
    case 263u: goto L_08914EC4;
    case 264u: goto L_08914EE0;
    case 265u: goto L_08914EE8;
    case 266u: goto L_08914EF0;
    case 267u: goto L_08914F00;
    case 268u: goto L_08914F10;
    case 269u: goto L_08914F20;
    case 270u: goto L_08914F30;
    case 271u: goto L_08914F44;
    case 272u: goto L_08914F4C;
    case 273u: goto L_08914F58;
    case 274u: goto L_08914F64;
    case 275u: goto L_08914F6C;
    case 276u: goto L_08914F78;
    case 277u: goto L_08914F80;
    case 278u: goto L_08914F8C;
    case 279u: goto L_08914F94;
    case 280u: goto L_08914FA0;
    case 281u: goto L_08914FA8;
    case 282u: goto L_08914FB4;
    case 283u: goto L_08914FCC;
    case 284u: goto L_08914FD4;
    case 285u: goto L_08914FE0;
    case 286u: goto L_08914FE8;
    case 287u: goto L_08914FF4;
    case 288u: goto L_08914FFC;
    case 289u: goto L_08915008;
    case 290u: goto L_08915010;
    case 291u: goto L_08915014;
    case 292u: goto L_0891502C;
    case 293u: goto L_08915058;
    case 294u: goto L_08915064;
    case 295u: goto L_08915074;
    case 296u: goto L_08915080;
    case 297u: goto L_08915090;
    case 298u: goto L_089150A0;
    case 299u: goto L_089150A8;
    case 300u: goto L_089150B4;
    case 301u: goto L_089150BC;
    case 302u: goto L_089150C8;
    case 303u: goto L_089150D0;
    case 304u: goto L_089150DC;
    case 305u: goto L_089150F4;
    case 306u: goto L_089150FC;
    case 307u: goto L_08915108;
    case 308u: goto L_08915110;
    case 309u: goto L_0891511C;
    case 310u: goto L_08915124;
    case 311u: goto L_08915130;
    case 312u: goto L_08915148;
    case 313u: goto L_08915150;
    case 314u: goto L_08915158;
    case 315u: goto L_08915168;
    case 316u: goto L_08915174;
    case 317u: goto L_08915188;
    case 318u: goto L_08915194;
    case 319u: goto L_0891519C;
    case 320u: goto L_089151A8;
    case 321u: goto L_089151B0;
    case 322u: goto L_089151BC;
    case 323u: goto L_089151D0;
    case 324u: goto L_089151D8;
    case 325u: goto L_089151E8;
    case 326u: goto L_089151F8;
    case 327u: goto L_08915204;
    case 328u: goto L_0891520C;
    case 329u: goto L_08915218;
    case 330u: goto L_08915224;
    case 331u: goto L_08915230;
    case 332u: goto L_08915244;
    case 333u: goto L_0891524C;
    case 334u: goto L_08915260;
    case 335u: goto L_0891526C;
    case 336u: goto L_08915274;
    case 337u: goto L_08915280;
    case 338u: goto L_08915288;
    case 339u: goto L_08915294;
    case 340u: goto L_089152A8;
    case 341u: goto L_089152B0;
    case 342u: goto L_089152BC;
    case 343u: goto L_089152C4;
    case 344u: goto L_089152C8;
    case 345u: goto L_089152E0;
    case 346u: goto L_08915300;
    case 347u: goto L_08915314;
    case 348u: goto L_08915320;
    case 349u: goto L_08915338;
    case 350u: goto L_08915340;
    case 351u: goto L_0891534C;
    case 352u: goto L_08915358;
    case 353u: goto L_08915368;
    case 354u: goto L_08915380;
    case 355u: goto L_0891538C;
    case 356u: goto L_08915398;
    case 357u: goto L_089153A4;
    case 358u: goto L_089153B0;
    case 359u: goto L_089153BC;
    case 360u: goto L_089153C4;
    case 361u: goto L_089153D0;
    case 362u: goto L_089153DC;
    case 363u: goto L_089153E8;
    case 364u: goto L_089153EC;
    case 365u: goto L_089153F4;
    case 366u: goto L_08915424;
    case 367u: goto L_08915430;
    case 368u: goto L_0891543C;
    case 369u: goto L_08915448;
    case 370u: goto L_08915450;
    case 371u: goto L_08915470;
    case 372u: goto L_0891547C;
    case 373u: goto L_08915488;
    case 374u: goto L_089154A0;
    case 375u: goto L_089154AC;
    case 376u: goto L_089154B8;
    case 377u: goto L_089154D0;
    case 378u: goto L_089154DC;
    case 379u: goto L_089154FC;
    case 380u: goto L_08915508;
    case 381u: goto L_08915514;
    case 382u: goto L_0891552C;
    case 383u: goto L_08915538;
    case 384u: goto L_08915544;
    case 385u: goto L_0891555C;
    case 386u: goto L_08915568;
    case 387u: goto L_08915578;
    case 388u: goto L_08915584;
    case 389u: goto L_08915598;
    case 390u: goto L_089155A8;
    case 391u: goto L_089155B0;
    case 392u: goto L_089155BC;
    case 393u: goto L_089155C4;
    case 394u: goto L_089155D0;
    case 395u: goto L_089155E0;
    case 396u: goto L_089155F0;
    case 397u: goto L_089155F8;
    case 398u: goto L_08915604;
    case 399u: goto L_0891560C;
    case 400u: goto L_08915618;
    case 401u: goto L_08915630;
    case 402u: goto L_08915640;
    case 403u: goto L_08915648;
    case 404u: goto L_08915650;
    case 405u: goto L_08915668;
    case 406u: goto L_0891566C;
    case 407u: goto L_08915670;
    case 408u: goto L_08915690;
    case 409u: goto L_089156B4;
    case 410u: goto L_089156C0;
    case 411u: goto L_089156C8;
    case 412u: goto L_089156D0;
    case 413u: goto L_089156E0;
    case 414u: goto L_089156F0;
    case 415u: goto L_089156FC;
    case 416u: goto L_08915710;
    case 417u: goto L_08915720;
    case 418u: goto L_08915730;
    case 419u: goto L_0891573C;
    case 420u: goto L_08915740;
    case 421u: goto L_08915758;
    case 422u: goto L_08915764;
    case 423u: goto L_08915770;
    case 424u: goto L_08915778;
    case 425u: goto L_08915780;
    case 426u: goto L_08915790;
    case 427u: goto L_089157A0;
    case 428u: goto L_089157B0;
    case 429u: goto L_089157B4;
    case 430u: goto L_089157BC;
    case 431u: goto L_089157C8;
    case 432u: goto L_089157D4;
    case 433u: goto L_089157DC;
    case 434u: goto L_089157E4;
    case 435u: goto L_089157F4;
    case 436u: goto L_089157F8;
    case 437u: goto L_08915800;
    case 438u: goto L_08915810;
    case 439u: goto L_08915814;
    case 440u: goto L_0891581C;
    case 441u: goto L_0891582C;
    case 442u: goto L_08915830;
    case 443u: goto L_08915838;
    case 444u: goto L_0891583C;
    case 445u: goto L_08915844;
    case 446u: goto L_08915850;
    case 447u: goto L_0891585C;
    case 448u: goto L_08915864;
    case 449u: goto L_0891586C;
    case 450u: goto L_08915884;
    case 451u: goto L_0891589C;
    case 452u: goto L_089158A0;
    case 453u: goto L_089158A8;
    case 454u: goto L_089158D0;
    case 455u: goto L_089158F4;
    case 456u: goto L_08915910;
    case 457u: goto L_08915924;
    case 458u: goto L_0891593C;
    case 459u: goto L_0891594C;
    case 460u: goto L_08915978;
    case 461u: goto L_08915984;
    case 462u: goto L_08915990;
    case 463u: goto L_089159AC;
    case 464u: goto L_089159B8;
    case 465u: goto L_089159C4;
    case 466u: goto L_089159D8;
    case 467u: goto L_089159E0;
    case 468u: goto L_089159F0;
    case 469u: goto L_089159FC;
    case 470u: goto L_08915A00;
    case 471u: goto L_08915A20;
    case 472u: goto L_08915A44;
    case 473u: goto L_08915A58;
    case 474u: goto L_08915A70;
    case 475u: goto L_08915A88;
    case 476u: goto L_08915A9C;
    case 477u: goto L_08915AA8;
    case 478u: goto L_08915AC0;
    case 479u: goto L_08915AD8;
    case 480u: goto L_08915AFC;
    case 481u: goto L_08915B14;
    case 482u: goto L_08915B38;
    case 483u: goto L_08915B48;
    case 484u: goto L_08915B58;
    case 485u: goto L_08915B64;
    case 486u: goto L_08915B70;
    case 487u: goto L_08915B80;
    case 488u: goto L_08915B90;
    case 489u: goto L_08915BA8;
    case 490u: goto L_08915BC4;
    case 491u: goto L_08915BCC;
    case 492u: goto L_08915BEC;
    case 493u: goto L_08915C04;
    case 494u: goto L_08915C14;
    case 495u: goto L_08915C20;
    case 496u: goto L_08915C28;
    case 497u: goto L_08915C34;
    case 498u: goto L_08915C40;
    case 499u: goto L_08915C48;
    case 500u: goto L_08915C60;
    case 501u: goto L_08915C68;
    case 502u: goto L_08915C80;
    case 503u: goto L_08915C8C;
    case 504u: goto L_08915C94;
    case 505u: goto L_08915CA4;
    case 506u: goto L_08915CAC;
    case 507u: goto L_08915CB8;
    case 508u: goto L_08915CC0;
    case 509u: goto L_08915CCC;
    case 510u: goto L_08915CE4;
    case 511u: goto L_08915CF4;
    case 512u: goto L_08915D00;
    case 513u: goto L_08915D08;
    case 514u: goto L_08915D10;
    case 515u: goto L_08915D1C;
    case 516u: goto L_08915D28;
    case 517u: goto L_08915D38;
    case 518u: goto L_08915D40;
    case 519u: goto L_08915D4C;
    case 520u: goto L_08915D58;
    case 521u: goto L_08915D68;
    case 522u: goto L_08915D74;
    case 523u: goto L_08915D88;
    case 524u: goto L_08915D9C;
    case 525u: goto L_08915DA8;
    case 526u: goto L_08915DB0;
    case 527u: goto L_08915DC4;
    case 528u: goto L_08915DD0;
    case 529u: goto L_08915DDC;
    case 530u: goto L_08915E00;
    case 531u: goto L_08915E0C;
    case 532u: goto L_08915E10;
    case 533u: goto L_08915E1C;
    case 534u: goto L_08915E30;
    case 535u: goto L_08915E44;
    case 536u: goto L_08915E50;
    case 537u: goto L_08915E60;
    case 538u: goto L_08915E68;
    case 539u: goto L_08915E7C;
    case 540u: goto L_08915E90;
    case 541u: goto L_08915E98;
    case 542u: goto L_08915E9C;
    case 543u: goto L_08915EA8;
    case 544u: goto L_08915EB8;
    case 545u: goto L_08915EC4;
    case 546u: goto L_08915ECC;
    case 547u: goto L_08915EE8;
    case 548u: goto L_08915EF8;
    case 549u: goto L_08915F10;
    case 550u: goto L_08915F34;
    case 551u: goto L_08915F40;
    case 552u: goto L_08915F44;
    case 553u: goto L_08915F50;
    case 554u: goto L_08915F64;
    case 555u: goto L_08915F78;
    case 556u: goto L_08915F84;
    case 557u: goto L_08915F94;
    case 558u: goto L_08915F9C;
    case 559u: goto L_08915FB0;
    case 560u: goto L_08915FC4;
    case 561u: goto L_08915FCC;
    case 562u: goto L_08915FD0;
    case 563u: goto L_08915FDC;
    case 564u: goto L_08915FEC;
    case 565u: goto L_08915FF8;
    case 566u: goto L_08916000;
    case 567u: goto L_0891601C;
    case 568u: goto L_0891602C;
    case 569u: goto L_08916044;
    case 570u: goto L_08916064;
    case 571u: goto L_08916074;
    case 572u: goto L_08916080;
    case 573u: goto L_08916090;
    case 574u: goto L_089160A0;
    case 575u: goto L_089160AC;
    case 576u: goto L_089160BC;
    case 577u: goto L_089160CC;
    case 578u: goto L_089160D8;
    case 579u: goto L_089160E8;
    case 580u: goto L_089160F8;
    case 581u: goto L_08916104;
    case 582u: goto L_08916114;
    case 583u: goto L_08916124;
    case 584u: goto L_08916130;
    case 585u: goto L_08916140;
    case 586u: goto L_08916150;
    case 587u: goto L_0891615C;
    case 588u: goto L_08916170;
    case 589u: goto L_08916178;
    case 590u: goto L_08916188;
    case 591u: goto L_08916198;
    case 592u: goto L_089161A4;
    case 593u: goto L_089161C8;
    case 594u: goto L_089161D4;
    case 595u: goto L_089161F0;
    case 596u: goto L_089161F8;
    case 597u: goto L_08916210;
    case 598u: goto L_08916220;
    case 599u: goto L_08916234;
    case 600u: goto L_08916258;
    case 601u: goto L_08916270;
    case 602u: goto L_0891627C;
    case 603u: goto L_08916288;
    case 604u: goto L_08916294;
    case 605u: goto L_089162A0;
    case 606u: goto L_089162AC;
    case 607u: goto L_089162C0;
    case 608u: goto L_089162C8;
    case 609u: goto L_089162D4;
    case 610u: goto L_089162E4;
    case 611u: goto L_089162F0;
    case 612u: goto L_08916300;
    case 613u: goto L_08916310;
    case 614u: goto L_08916320;
    case 615u: goto L_0891632C;
    case 616u: goto L_0891633C;
    case 617u: goto L_0891634C;
    case 618u: goto L_08916360;
    case 619u: goto L_0891637C;
    case 620u: goto L_08916388;
    case 621u: goto L_0891638C;
    case 622u: goto L_08916398;
    case 623u: goto L_089163AC;
    case 624u: goto L_089163BC;
    case 625u: goto L_089163C8;
    case 626u: goto L_089163D4;
    case 627u: goto L_089163E0;
    case 628u: goto L_089163EC;
    case 629u: goto L_089163F8;
    case 630u: goto L_08916408;
    case 631u: goto L_08916414;
    case 632u: goto L_08916424;
    case 633u: goto L_08916440;
    case 634u: goto L_0891644C;
    case 635u: goto L_0891645C;
    case 636u: goto L_08916470;
    case 637u: goto L_089164C8;
    case 638u: goto L_089164D4;
    case 639u: goto L_089164E0;
    case 640u: goto L_089164FC;
    case 641u: goto L_08916518;
    case 642u: goto L_08916524;
    case 643u: goto L_08916540;
    case 644u: goto L_0891654C;
    case 645u: goto L_08916564;
    case 646u: goto L_08916570;
    case 647u: goto L_0891657C;
    case 648u: goto L_08916588;
    case 649u: goto L_0891658C;
    case 650u: goto L_08916598;
    case 651u: goto L_089165AC;
    case 652u: goto L_089165C0;
    case 653u: goto L_089165CC;
    case 654u: goto L_089165DC;
    case 655u: goto L_089165E8;
    case 656u: goto L_0891662C;
    case 657u: goto L_08916640;
    case 658u: goto L_08916650;
    case 659u: goto L_0891665C;
    case 660u: goto L_08916670;
    case 661u: goto L_0891667C;
    case 662u: goto L_08916688;
    case 663u: goto L_08916694;
    case 664u: goto L_08916698;
    case 665u: goto L_089166AC;
    case 666u: goto L_089166B8;
    case 667u: goto L_089166C4;
    case 668u: goto L_089166D0;
    case 669u: goto L_089166DC;
    case 670u: goto L_089166E0;
    case 671u: goto L_089166F4;
    case 672u: goto L_08916700;
    case 673u: goto L_0891670C;
    case 674u: goto L_08916718;
    case 675u: goto L_0891671C;
    case 676u: goto L_08916730;
    case 677u: goto L_0891673C;
    case 678u: goto L_08916748;
    case 679u: goto L_08916754;
    case 680u: goto L_08916758;
    case 681u: goto L_0891676C;
    case 682u: goto L_08916778;
    case 683u: goto L_08916784;
    case 684u: goto L_08916790;
    case 685u: goto L_08916794;
    case 686u: goto L_089167A8;
    case 687u: goto L_089167B4;
    case 688u: goto L_089167C0;
    case 689u: goto L_089167CC;
    case 690u: goto L_089167D0;
    case 691u: goto L_089167E4;
    case 692u: goto L_089167F4;
    case 693u: goto L_08916818;
    case 694u: goto L_08916830;
    case 695u: goto L_08916840;
    case 696u: goto L_08916844;
    case 697u: goto L_08916850;
    case 698u: goto L_08916854;
    case 699u: goto L_08916860;
    case 700u: goto L_08916864;
    case 701u: goto L_08916870;
    case 702u: goto L_08916874;
    case 703u: goto L_08916880;
    case 704u: goto L_08916884;
    case 705u: goto L_08916898;
    case 706u: goto L_089168A8;
    case 707u: goto L_089168AC;
    case 708u: goto L_089168BC;
    case 709u: goto L_089168C8;
    case 710u: goto L_089168CC;
    case 711u: goto L_089168DC;
    case 712u: goto L_089168E0;
    case 713u: goto L_089168EC;
    case 714u: goto L_089168F0;
    case 715u: goto L_08916900;
    case 716u: goto L_0891690C;
    case 717u: goto L_08916910;
    case 718u: goto L_08916920;
    case 719u: goto L_0891693C;
    case 720u: goto L_08916954;
    case 721u: goto L_08916960;
    case 722u: goto L_08916978;
    case 723u: goto L_08916984;
    case 724u: goto L_089169A0;
    case 725u: goto L_089169A8;
    case 726u: goto L_089169B8;
    case 727u: goto L_089169CC;
    case 728u: goto L_089169D4;
    case 729u: goto L_089169D8;
    case 730u: goto L_089169EC;
    case 731u: goto L_089169FC;
    case 732u: goto L_08916A08;
    case 733u: goto L_08916A38;
    case 734u: goto L_08916A48;
    case 735u: goto L_08916A54;
    case 736u: goto L_08916A6C;
    case 737u: goto L_08916A78;
    case 738u: goto L_08916A94;
    case 739u: goto L_08916AA4;
    case 740u: goto L_08916AB4;
    case 741u: goto L_08916ABC;
    case 742u: goto L_08916AD0;
    case 743u: goto L_08916AE4;
    case 744u: goto L_08916B04;
    case 745u: goto L_08916B20;
    case 746u: goto L_08916B30;
    case 747u: goto L_08916B40;
    case 748u: goto L_08916B48;
    case 749u: goto L_08916B5C;
    case 750u: goto L_08916B70;
    case 751u: goto L_08916B90;
    case 752u: goto L_08916BAC;
    case 753u: goto L_08916BCC;
    case 754u: goto L_08916BD4;
    case 755u: goto L_08916BE4;
    case 756u: goto L_08916BE8;
    case 757u: goto L_08916BF4;
    case 758u: goto L_08916BF8;
    case 759u: goto L_08916C04;
    case 760u: goto L_08916C10;
    case 761u: goto L_08916C1C;
    case 762u: goto L_08916C28;
    case 763u: goto L_08916C2C;
    case 764u: goto L_08916C30;
    case 765u: goto L_08916C44;
    case 766u: goto L_08916C54;
    case 767u: goto L_08916C60;
    case 768u: goto L_08916C6C;
    case 769u: goto L_08916C80;
    case 770u: goto L_08916C90;
    case 771u: goto L_08916C9C;
    case 772u: goto L_08916CA8;
    case 773u: goto L_08916CB0;
    case 774u: goto L_08916CC0;
    case 775u: goto L_08916CC8;
    case 776u: goto L_08916CDC;
    case 777u: goto L_08916CF0;
    case 778u: goto L_08916D10;
    case 779u: goto L_08916D2C;
    case 780u: goto L_08916D30;
    case 781u: goto L_08916D3C;
    case 782u: goto L_08916D44;
    case 783u: goto L_08916D50;
    case 784u: goto L_08916D58;
    case 785u: goto L_08916D6C;
    case 786u: goto L_08916D80;
    case 787u: goto L_08916DA0;
    case 788u: goto L_08916DBC;
    case 789u: goto L_08916DC8;
    case 790u: goto L_08916DD8;
    case 791u: goto L_08916DDC;
    case 792u: goto L_08916DE8;
    case 793u: goto L_08916DEC;
    case 794u: goto L_08916DF8;
    case 795u: goto L_08916E04;
    case 796u: goto L_08916E10;
    case 797u: goto L_08916E1C;
    case 798u: goto L_08916E20;
    case 799u: goto L_08916E24;
    case 800u: goto L_08916E38;
    case 801u: goto L_08916E48;
    case 802u: goto L_08916E54;
    case 803u: goto L_08916E60;
    case 804u: goto L_08916E74;
    case 805u: goto L_08916E84;
    case 806u: goto L_08916E90;
    case 807u: goto L_08916E9C;
    case 808u: goto L_08916EA4;
    case 809u: goto L_08916EB4;
    case 810u: goto L_08916EBC;
    case 811u: goto L_08916ED0;
    case 812u: goto L_08916EE4;
    case 813u: goto L_08916F04;
    case 814u: goto L_08916F20;
    case 815u: goto L_08916F24;
    case 816u: goto L_08916F30;
    case 817u: goto L_08916F38;
    case 818u: goto L_08916F44;
    case 819u: goto L_08916F4C;
    case 820u: goto L_08916F60;
    case 821u: goto L_08916F74;
    case 822u: goto L_08916F94;
    case 823u: goto L_08916FB0;
    case 824u: goto L_08916FBC;
    case 825u: goto L_08916FC0;
    case 826u: goto L_08916FD4;
    case 827u: goto L_08916FE4;
    case 828u: goto L_08916FF0;
    case 829u: goto L_08916FF8;
    case 830u: goto L_08916FFC;
    case 831u: goto L_08917010;
    case 832u: goto L_08917020;
    case 833u: goto L_0891702C;
    case 834u: goto L_08917038;
    case 835u: goto L_08917048;
    case 836u: goto L_08917050;
    case 837u: goto L_08917064;
    case 838u: goto L_08917078;
    case 839u: goto L_08917098;
    case 840u: goto L_089170B4;
    case 841u: goto L_089170C4;
    case 842u: goto L_089170CC;
    case 843u: goto L_089170D8;
    case 844u: goto L_089170E0;
    case 845u: goto L_089170F4;
    case 846u: goto L_08917108;
    case 847u: goto L_08917128;
    case 848u: goto L_08917144;
    case 849u: goto L_08917148;
    case 850u: goto L_08917154;
    case 851u: goto L_0891715C;
    case 852u: goto L_08917168;
    case 853u: goto L_08917170;
    case 854u: goto L_08917184;
    case 855u: goto L_08917198;
    case 856u: goto L_089171B8;
    case 857u: goto L_089171D4;
    case 858u: goto L_089171D8;
    case 859u: goto L_089171E4;
    case 860u: goto L_089171EC;
    case 861u: goto L_089171F8;
    case 862u: goto L_08917200;
    case 863u: goto L_08917214;
    case 864u: goto L_08917228;
    case 865u: goto L_08917248;
    case 866u: goto L_08917264;
    case 867u: goto L_08917268;
    case 868u: goto L_08917274;
    case 869u: goto L_0891727C;
    case 870u: goto L_08917288;
    case 871u: goto L_08917290;
    case 872u: goto L_089172A4;
    case 873u: goto L_089172B8;
    case 874u: goto L_089172D8;
    case 875u: goto L_089172F4;
    case 876u: goto L_089172F8;
    case 877u: goto L_0891730C;
    case 878u: goto L_0891731C;
    case 879u: goto L_08917324;
    case 880u: goto L_08917330;
    case 881u: goto L_08917338;
    case 882u: goto L_0891734C;
    case 883u: goto L_08917360;
    case 884u: goto L_08917380;
    case 885u: goto L_0891739C;
    case 886u: goto L_089173A0;
    case 887u: goto L_089173B0;
    case 888u: goto L_089173B8;
    case 889u: goto L_089173C4;
    case 890u: goto L_089173CC;
    case 891u: goto L_089173EC;
    case 892u: goto L_08917400;
    case 893u: goto L_08917420;
    case 894u: goto L_0891743C;
    case 895u: goto L_08917444;
    case 896u: goto L_08917458;
    case 897u: goto L_08917468;
    case 898u: goto L_08917474;
    case 899u: goto L_08917484;
    case 900u: goto L_0891748C;
    case 901u: goto L_08917498;
    case 902u: goto L_089174A0;
    case 903u: goto L_089174C0;
    case 904u: goto L_089174D4;
    case 905u: goto L_089174F4;
    case 906u: goto L_08917510;
    case 907u: goto L_08917514;
    case 908u: goto L_08917520;
    case 909u: goto L_08917528;
    case 910u: goto L_08917534;
    case 911u: goto L_0891753C;
    case 912u: goto L_08917550;
    case 913u: goto L_08917564;
    case 914u: goto L_08917584;
    case 915u: goto L_089175A0;
    case 916u: goto L_089175A4;
    case 917u: goto L_089175B8;
    case 918u: goto L_089175C4;
    case 919u: goto L_089175D8;
    case 920u: goto L_089175E8;
    case 921u: goto L_089175F4;
    case 922u: goto L_08917604;
    case 923u: goto L_08917614;
    case 924u: goto L_08917620;
    case 925u: goto L_0891762C;
    case 926u: goto L_08917634;
    case 927u: goto L_0891763C;
    case 928u: goto L_0891764C;
    case 929u: goto L_08917654;
    case 930u: goto L_08917664;
    case 931u: goto L_0891766C;
    case 932u: goto L_08917680;
    case 933u: goto L_08917694;
    case 934u: goto L_089176B4;
    case 935u: goto L_089176D0;
    case 936u: goto L_089176DC;
    case 937u: goto L_089176EC;
    case 938u: goto L_08917700;
    case 939u: goto L_08917710;
    case 940u: goto L_0891771C;
    case 941u: goto L_08917724;
    case 942u: goto L_08917734;
    case 943u: goto L_0891773C;
    case 944u: goto L_08917748;
    case 945u: goto L_08917758;
    case 946u: goto L_08917764;
    case 947u: goto L_0891776C;
    case 948u: goto L_08917778;
    case 949u: goto L_08917780;
    case 950u: goto L_08917794;
    case 951u: goto L_089177A8;
    case 952u: goto L_089177C8;
    case 953u: goto L_089177E4;
    case 954u: goto L_089177E8;
    case 955u: goto L_089177FC;
    case 956u: goto L_0891782C;
    case 957u: goto L_08917840;
    case 958u: goto L_0891784C;
    case 959u: goto L_08917864;
    case 960u: goto L_0891788C;
    case 961u: goto L_0891789C;
    case 962u: goto L_089178AC;
    case 963u: goto L_089178BC;
    case 964u: goto L_089178C8;
    case 965u: goto L_089178D8;
    case 966u: goto L_089178E8;
    case 967u: goto L_089178F8;
    case 968u: goto L_08917900;
    case 969u: goto L_08917920;
    case 970u: goto L_08917930;
    case 971u: goto L_08917934;
    case 972u: goto L_08917968;
    case 973u: goto L_0891799C;
    case 974u: goto L_089179A8;
    case 975u: goto L_089179AC;
    case 976u: goto L_089179B8;
    case 977u: goto L_089179CC;
    case 978u: goto L_089179D4;
    case 979u: goto L_089179E8;
    case 980u: goto L_089179F4;
    case 981u: goto L_08917A04;
    case 982u: goto L_08917A10;
    case 983u: goto L_08917A28;
    case 984u: goto L_08917A30;
    case 985u: goto L_08917A50;
    case 986u: goto L_08917A5C;
    case 987u: goto L_08917A6C;
    case 988u: goto L_08917A78;
    case 989u: goto L_08917A88;
    case 990u: goto L_08917A94;
    case 991u: goto L_08917AAC;
    case 992u: goto L_08917AB8;
    case 993u: goto L_08917AC8;
    case 994u: goto L_08917AD4;
    case 995u: goto L_08917AE0;
    case 996u: goto L_08917B00;
    case 997u: goto L_08917B0C;
    case 998u: goto L_08917B18;
    case 999u: goto L_08917B60;
    case 1000u: goto L_08917B7C;
    case 1001u: goto L_08917B88;
    case 1002u: goto L_08917B94;
    case 1003u: goto L_08917B98;
    case 1004u: goto L_08917BA4;
    case 1005u: goto L_08917BB0;
    case 1006u: goto L_08917BC0;
    case 1007u: goto L_08917BD0;
    case 1008u: goto L_08917BEC;
    case 1009u: goto L_08917BF8;
    case 1010u: goto L_08917C04;
    case 1011u: goto L_08917C08;
    case 1012u: goto L_08917C14;
    case 1013u: goto L_08917C20;
    case 1014u: goto L_08917C30;
    case 1015u: goto L_08917C38;
    case 1016u: goto L_08917C44;
    case 1017u: goto L_08917C4C;
    case 1018u: goto L_08917C6C;
    case 1019u: goto L_08917C78;
    case 1020u: goto L_08917C7C;
    case 1021u: goto L_08917C88;
    case 1022u: goto L_08917C90;
    case 1023u: goto L_08917CAC;
    case 1024u: goto L_08917CB8;
    case 1025u: goto L_08917CC4;
    case 1026u: goto L_08917CC8;
    case 1027u: goto L_08917CD4;
    case 1028u: goto L_08917CE0;
    case 1029u: goto L_08917CF0;
    case 1030u: goto L_08917CF8;
    case 1031u: goto L_08917D04;
    case 1032u: goto L_08917D0C;
    case 1033u: goto L_08917D28;
    case 1034u: goto L_08917D34;
    case 1035u: goto L_08917D40;
    case 1036u: goto L_08917D44;
    case 1037u: goto L_08917D50;
    case 1038u: goto L_08917D5C;
    case 1039u: goto L_08917D6C;
    case 1040u: goto L_08917D80;
    case 1041u: goto L_08917D84;
    case 1042u: goto L_08917D90;
    case 1043u: goto L_08917D98;
    case 1044u: goto L_08917DB8;
    case 1045u: goto L_08917DC4;
    case 1046u: goto L_08917DC8;
    case 1047u: goto L_08917DD4;
    case 1048u: goto L_08917DDC;
    case 1049u: goto L_08917DF8;
    case 1050u: goto L_08917E04;
    case 1051u: goto L_08917E10;
    case 1052u: goto L_08917E14;
    case 1053u: goto L_08917E20;
    case 1054u: goto L_08917E2C;
    case 1055u: goto L_08917E3C;
    case 1056u: goto L_08917E44;
    case 1057u: goto L_08917E50;
    case 1058u: goto L_08917E58;
    case 1059u: goto L_08917E74;
    case 1060u: goto L_08917E80;
    case 1061u: goto L_08917E8C;
    case 1062u: goto L_08917E90;
    case 1063u: goto L_08917E9C;
    case 1064u: goto L_08917EA8;
    case 1065u: goto L_08917EB8;
    case 1066u: goto L_08917ECC;
    case 1067u: goto L_08917ED0;
    case 1068u: goto L_08917ED8;
    case 1069u: goto L_08917EF4;
    case 1070u: goto L_08917F00;
    case 1071u: goto L_08917F0C;
    case 1072u: goto L_08917F10;
    case 1073u: goto L_08917F1C;
    case 1074u: goto L_08917F28;
    case 1075u: goto L_08917F38;
    case 1076u: goto L_08917F4C;
    case 1077u: goto L_08917F54;
    case 1078u: goto L_08917F70;
    case 1079u: goto L_08917F7C;
    case 1080u: goto L_08917F88;
    case 1081u: goto L_08917F8C;
    case 1082u: goto L_08917F98;
    case 1083u: goto L_08917FA4;
    case 1084u: goto L_08917FB4;
    case 1085u: goto L_08917FC4;
    case 1086u: goto L_08917FC8;
    case 1087u: goto L_08917FD4;
    case 1088u: goto L_08917FDC;
    case 1089u: goto L_08917FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08914000:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891400C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08914054;
      }
      goto L_08914028;
    }
L_08914028:
    ctx.set_gpr(2, ctx.gpr[7] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914040;
      }
      goto L_08914038;
    }
L_08914038:
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08914040;
L_08914040:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08914054;
L_08914054:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08914074;
      }
      goto L_08914060;
    }
L_08914060:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08914074;
      }
      goto L_0891406C;
    }
L_0891406C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914028;
      }
      goto L_08914074;
    }
L_08914074:
    ctx.set_gpr(2, ctx.gpr[7] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914088;
      }
      goto L_08914084;
    }
L_08914084:
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    goto L_08914088;
L_08914088:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089140A8;
      }
      goto L_089140A4;
    }
L_089140A4:
    ctx.set_gpr(2, 0u < ctx.gpr[4] ? 1u : 0u);
    goto L_089140A8;
L_089140A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089140B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089140F0;
      }
      goto L_089140E4;
    }
L_089140E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089140F0;
L_089140F0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891410C;
      }
      goto L_08914100;
    }
L_08914100:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0891410C;
L_0891410C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08914118u);
    // nop
    goto L_0891481C;
L_08914118:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914178;
      }
      goto L_08914128;
    }
L_08914128:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914144;
      }
      goto L_08914138;
    }
L_08914138:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08914144;
L_08914144:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914158;
      }
      goto L_08914150;
    }
L_08914150:
    ctx.set_gpr(31, 0x08914158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914158u) goto L_08914158;
    return;
L_08914158:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891416C;
      }
      goto L_08914164;
    }
L_08914164:
    ctx.set_gpr(31, 0x0891416Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891416Cu) goto L_0891416C;
    return;
L_0891416C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891436C;
      }
      goto L_08914178;
    }
L_08914178:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08914188u);
    // nop
    goto L_08914900;
L_08914188:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914324;
      }
      goto L_08914190;
    }
L_08914190:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089141A8;
      }
      goto L_089141A0;
    }
L_089141A0:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_089141A8;
L_089141A8:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13104));
    ctx.set_gpr(31, 0x089141B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x089141B8u) goto L_089141B8;
    return;
L_089141B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914238;
      }
      goto L_089141C0;
    }
L_089141C0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089141CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089141CCu) goto L_089141CC;
    return;
L_089141CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089141D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 22u, 0x088F4208u>(ctx, &aot_mem) && ctx.pc == 0x089141D8u) goto L_089141D8;
    return;
L_089141D8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089141ECu);
    // nop
    goto L_08914B68;
L_089141EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891420C;
      }
      goto L_089141F4;
    }
L_089141F4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08914204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08914204u) goto L_08914204;
    return;
L_08914204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891421C;
      }
      goto L_0891420C;
    }
L_0891420C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0891421Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0891421Cu) goto L_0891421C;
    return;
L_0891421C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914324;
      }
      goto L_08914228;
    }
L_08914228:
    ctx.set_gpr(31, 0x08914230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914230u) goto L_08914230;
    return;
L_08914230:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08914324;
      }
      goto L_08914238;
    }
L_08914238:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891429C;
      }
      goto L_0891424C;
    }
L_0891424C:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32076));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914278;
      }
      goto L_08914270;
    }
L_08914270:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08914278;
L_08914278:
    ctx.set_gpr(31, 0x08914280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08914280u) goto L_08914280;
    return;
L_08914280:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914298;
      }
      goto L_08914288;
    }
L_08914288:
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089142A8;
      }
      goto L_08914298;
    }
L_08914298:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0891429C;
L_0891429C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891424C;
      }
      goto L_089142A8;
    }
L_089142A8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914324;
      }
      goto L_089142B0;
    }
L_089142B0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089142BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089142BCu) goto L_089142BC;
    return;
L_089142BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089142C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 52u, 0x088F44CCu>(ctx, &aot_mem) && ctx.pc == 0x089142C8u) goto L_089142C8;
    return;
L_089142C8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x089142E0u);
    // nop
    goto L_0891502C;
L_089142E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914300;
      }
      goto L_089142E8;
    }
L_089142E8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x089142F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089142F8u) goto L_089142F8;
    return;
L_089142F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08914310;
      }
      goto L_08914300;
    }
L_08914300:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08914310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08914310u) goto L_08914310;
    return;
L_08914310:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914324;
      }
      goto L_0891431C;
    }
L_0891431C:
    ctx.set_gpr(31, 0x08914324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914324u) goto L_08914324;
    return;
L_08914324:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914340;
      }
      goto L_08914334;
    }
L_08914334:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08914340;
L_08914340:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914354;
      }
      goto L_0891434C;
    }
L_0891434C:
    ctx.set_gpr(31, 0x08914354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914354u) goto L_08914354;
    return;
L_08914354:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914368;
      }
      goto L_08914360;
    }
L_08914360:
    ctx.set_gpr(31, 0x08914368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914368u) goto L_08914368;
    return;
L_08914368:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0891436C;
L_0891436C:
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
L_08914390:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
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
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089143F0;
      }
      goto L_089143C8;
    }
L_089143C8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29732)));
    ctx.set_gpr(31, 0x089143DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089143DCu) goto L_089143DC;
    return;
L_089143DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089143F0;
      }
      goto L_089143E4;
    }
L_089143E4:
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089143F4;
      }
      goto L_089143F0;
    }
L_089143F0:
    ctx.set_gpr(16, 0u + 0u);
    goto L_089143F4;
L_089143F4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914440;
      }
      goto L_089143FC;
    }
L_089143FC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08914414u);
    // nop
    goto L_089146A0;
L_08914414:
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0891455C;
      }
      goto L_08914424;
    }
L_08914424:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08914438u);
    // nop
    goto L_08914584;
L_08914438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891455C;
      }
      goto L_08914440;
    }
L_08914440:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914488;
      }
      goto L_0891444C;
    }
L_0891444C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914488;
      }
      goto L_08914458;
    }
L_08914458:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891446C;
      }
      goto L_08914464;
    }
L_08914464:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0891446C;
L_0891446C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0891447Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 741u, 0x08912FB0u>(ctx, &aot_mem) && ctx.pc == 0x0891447Cu) goto L_0891447C;
    return;
L_0891447C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891449C;
      }
      goto L_08914488;
    }
L_08914488:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08914498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 614u, 0x089128A0u>(ctx, &aot_mem) && ctx.pc == 0x08914498u) goto L_08914498;
    return;
L_08914498:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_0891449C;
L_0891449C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089144B8;
      }
      goto L_089144A4;
    }
L_089144A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089144B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089144B0u) goto L_089144B0;
    return;
L_089144B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089144C4;
      }
      goto L_089144B8;
    }
L_089144B8:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891450C;
      }
      goto L_089144C4;
    }
L_089144C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089144DC;
      }
      goto L_089144D4;
    }
L_089144D4:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_089144DC;
L_089144DC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x089144ECu);
    // nop
    goto L_08915380;
L_089144EC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(8, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08914508u);
    // nop
    goto L_089153F4;
L_08914508:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    goto L_0891450C;
L_0891450C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891455C;
      }
      goto L_08914514;
    }
L_08914514:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08914548;
      }
      goto L_08914520;
    }
L_08914520:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08914544u);
    // nop
    goto L_08914390;
L_08914544:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08914548;
L_08914548:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914520;
      }
      goto L_0891455C;
    }
L_0891455C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08914584:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x089145B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089145B4u) goto L_089145B4;
    return;
L_089145B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089145C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x089145C0u) goto L_089145C0;
    return;
L_089145C0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08914658;
      }
      goto L_089145D0;
    }
L_089145D0:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089145F8;
      }
      goto L_089145F0;
    }
L_089145F0:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_089145F8;
L_089145F8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08914614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 691u, 0x08953010u>(ctx, &aot_mem) && ctx.pc == 0x08914614u) goto L_08914614;
    return;
L_08914614:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914630;
      }
      goto L_08914628;
    }
L_08914628:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08914630;
L_08914630:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914644;
      }
      goto L_0891463C;
    }
L_0891463C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08914644;
L_08914644:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08914654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 38u, 0x08954280u>(ctx, &aot_mem) && ctx.pc == 0x08914654u) goto L_08914654;
    return;
L_08914654:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08914658;
L_08914658:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089145D0;
      }
      goto L_08914668;
    }
L_08914668:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891467C;
      }
      goto L_08914674;
    }
L_08914674:
    ctx.set_gpr(31, 0x0891467Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891467Cu) goto L_0891467C;
    return;
L_0891467C:
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
L_089146A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089146EC;
      }
      goto L_089146CC;
    }
L_089146CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089146E0;
      }
      goto L_089146DC;
    }
L_089146DC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    goto L_089146E0;
L_089146E0:
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08914800;
      }
      goto L_089146EC;
    }
L_089146EC:
    ctx.set_gpr(31, 0x089146F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089146F4u) goto L_089146F4;
    return;
L_089146F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08914700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x08914700u) goto L_08914700;
    return;
L_08914700:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891473C;
      }
      goto L_08914710;
    }
L_08914710:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914728;
      }
      goto L_08914720;
    }
L_08914720:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1368)));
    goto L_08914728;
L_08914728:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08914734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 547u, 0x0895A4F4u>(ctx, &aot_mem) && ctx.pc == 0x08914734u) goto L_08914734;
    return;
L_08914734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089147BC;
      }
      goto L_0891473C;
    }
L_0891473C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914758;
      }
      goto L_08914748;
    }
L_08914748:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891475C;
      }
      goto L_08914758;
    }
L_08914758:
    ctx.set_gpr(6, ctx.gpr[8] + 0u);
    goto L_0891475C;
L_0891475C:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891476C;
      }
      goto L_08914764;
    }
L_08914764:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0891476C;
L_0891476C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08914780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 691u, 0x08953010u>(ctx, &aot_mem) && ctx.pc == 0x08914780u) goto L_08914780;
    return;
L_08914780:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089147BC;
      }
      goto L_0891478C;
    }
L_0891478C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089147BC;
      }
      goto L_0891479C;
    }
L_0891479C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089147B0;
      }
      goto L_089147A8;
    }
L_089147A8:
    ctx.set_gpr(31, 0x089147B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089147B0u) goto L_089147B0;
    return;
L_089147B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08914800;
      }
      goto L_089147BC;
    }
L_089147BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089147D4;
      }
      goto L_089147CC;
    }
L_089147CC:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_089147D4;
L_089147D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089147E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x089147E4u) goto L_089147E4;
    return;
L_089147E4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089147FC;
      }
      goto L_089147F4;
    }
L_089147F4:
    ctx.set_gpr(31, 0x089147FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089147FCu) goto L_089147FC;
    return;
L_089147FC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08914800;
L_08914800:
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
L_0891481C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08914860;
      }
      goto L_08914834;
    }
L_08914834:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08914854;
      }
      goto L_08914848;
    }
L_08914848:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_08914854;
L_08914854:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_08914860;
L_08914860:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x08914870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 447u, 0x08811C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08914870u) goto L_08914870;
    return;
L_08914870:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914834;
      }
      goto L_08914878;
    }
L_08914878:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891488C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089148B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089148B0u) goto L_089148B0;
    return;
L_089148B0:
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089148C4;
      }
      goto L_089148BC;
    }
L_089148BC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_089148C4;
L_089148C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089148E4;
      }
      goto L_089148CC;
    }
L_089148CC:
    ctx.set_gpr(16, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x089148DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 447u, 0x08811C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089148DCu) goto L_089148DC;
    return;
L_089148DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089148BC;
      }
      goto L_089148E4;
    }
L_089148E4:
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
L_08914900:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-4112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(31, 0x08914928u);
    // nop
    goto L_0891481C;
L_08914928:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13092));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08914940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x08914940u) goto L_08914940;
    return;
L_08914940:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089149A0;
      }
      goto L_0891494C;
    }
L_0891494C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08914958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08914958u) goto L_08914958;
    return;
L_08914958:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08914970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08914970u) goto L_08914970;
    return;
L_08914970:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891497Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x0891497Cu) goto L_0891497C;
    return;
L_0891497C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891498Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0891498Cu) goto L_0891498C;
    return;
L_0891498C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0891499Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x0891499Cu) goto L_0891499C;
    return;
L_0891499C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_089149A0;
L_089149A0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(4112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089149C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-4112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(31, 0x089149E8u);
    // nop
    goto L_0891481C;
L_089149E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13020));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08914A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x08914A00u) goto L_08914A00;
    return;
L_08914A00:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08914A70;
      }
      goto L_08914A0C;
    }
L_08914A0C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08914A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08914A18u) goto L_08914A18;
    return;
L_08914A18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08914A34u);
    // nop
    goto L_0891488C;
L_08914A34:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08914A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08914A40u) goto L_08914A40;
    return;
L_08914A40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08914A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x08914A4Cu) goto L_08914A4C;
    return;
L_08914A4C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08914A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08914A5Cu) goto L_08914A5C;
    return;
L_08914A5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08914A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08914A6Cu) goto L_08914A6C;
    return;
L_08914A6C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08914A70;
L_08914A70:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(4112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08914A90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-4112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(31, 0x08914AB8u);
    // nop
    goto L_0891481C;
L_08914AB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13008));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08914AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x08914AD0u) goto L_08914AD0;
    return;
L_08914AD0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08914B48;
      }
      goto L_08914ADC;
    }
L_08914ADC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08914AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08914AE8u) goto L_08914AE8;
    return;
L_08914AE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08914B3C;
      }
      goto L_08914B00;
    }
L_08914B00:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32128));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08914B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08914B20u) goto L_08914B20;
    return;
L_08914B20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914B38;
      }
      goto L_08914B28;
    }
L_08914B28:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08914B48;
      }
      goto L_08914B38;
    }
L_08914B38:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08914B3C;
L_08914B3C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914B00;
      }
      goto L_08914B48;
    }
L_08914B48:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(4112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08914B68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914B9C;
      }
      goto L_08914B90;
    }
L_08914B90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08914B9C;
L_08914B9C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914BB8;
      }
      goto L_08914BAC;
    }
L_08914BAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08914BB8;
L_08914BB8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914BD4;
      }
      goto L_08914BC8;
    }
L_08914BC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08914BD4;
L_08914BD4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914BF4;
      }
      goto L_08914BE8;
    }
L_08914BE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08914BF4;
L_08914BF4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08914C00u);
    // nop
    goto L_0891481C;
L_08914C00:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08914C10u);
    // nop
    goto L_089152E0;
L_08914C10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914C50;
      }
      goto L_08914C18;
    }
L_08914C18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914C38;
      }
      goto L_08914C30;
    }
L_08914C30:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08914C38;
L_08914C38:
    ctx.set_gpr(31, 0x08914C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 547u, 0x0895A4F4u>(ctx, &aot_mem) && ctx.pc == 0x08914C40u) goto L_08914C40;
    return;
L_08914C40:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08914C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08914C50u) goto L_08914C50;
    return;
L_08914C50:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08914C5Cu);
    // nop
    goto L_0891481C;
L_08914C5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(123));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08914CCC;
      }
      goto L_08914C70;
    }
L_08914C70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914C84;
      }
      goto L_08914C7C;
    }
L_08914C7C:
    ctx.set_gpr(31, 0x08914C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914C84u) goto L_08914C84;
    return;
L_08914C84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914C98;
      }
      goto L_08914C90;
    }
L_08914C90:
    ctx.set_gpr(31, 0x08914C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914C98u) goto L_08914C98;
    return;
L_08914C98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914CAC;
      }
      goto L_08914CA4;
    }
L_08914CA4:
    ctx.set_gpr(31, 0x08914CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914CACu) goto L_08914CAC;
    return;
L_08914CAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914CC0;
      }
      goto L_08914CB8;
    }
L_08914CB8:
    ctx.set_gpr(31, 0x08914CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914CC0u) goto L_08914CC0;
    return;
L_08914CC0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915014;
      }
      goto L_08914CCC;
    }
L_08914CCC:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08914CE0u);
    // nop
    goto L_0891481C;
L_08914CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08914F30;
      }
      goto L_08914CE8;
    }
L_08914CE8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08914CF8u);
    // nop
    goto L_08914900;
L_08914CF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914D5C;
      }
      goto L_08914D00;
    }
L_08914D00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914D14;
      }
      goto L_08914D0C;
    }
L_08914D0C:
    ctx.set_gpr(31, 0x08914D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914D14u) goto L_08914D14;
    return;
L_08914D14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914D28;
      }
      goto L_08914D20;
    }
L_08914D20:
    ctx.set_gpr(31, 0x08914D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914D28u) goto L_08914D28;
    return;
L_08914D28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914D3C;
      }
      goto L_08914D34;
    }
L_08914D34:
    ctx.set_gpr(31, 0x08914D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914D3Cu) goto L_08914D3C;
    return;
L_08914D3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914D50;
      }
      goto L_08914D48;
    }
L_08914D48:
    ctx.set_gpr(31, 0x08914D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914D50u) goto L_08914D50;
    return;
L_08914D50:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915014;
      }
      goto L_08914D5C;
    }
L_08914D5C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08914D6Cu);
    // nop
    goto L_08914A90;
L_08914D6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914DE0;
      }
      goto L_08914D74;
    }
L_08914D74:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08914D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08914D84u) goto L_08914D84;
    return;
L_08914D84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914D98;
      }
      goto L_08914D90;
    }
L_08914D90:
    ctx.set_gpr(31, 0x08914D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914D98u) goto L_08914D98;
    return;
L_08914D98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914DAC;
      }
      goto L_08914DA4;
    }
L_08914DA4:
    ctx.set_gpr(31, 0x08914DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914DACu) goto L_08914DAC;
    return;
L_08914DAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914DC0;
      }
      goto L_08914DB8;
    }
L_08914DB8:
    ctx.set_gpr(31, 0x08914DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914DC0u) goto L_08914DC0;
    return;
L_08914DC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914DD4;
      }
      goto L_08914DCC;
    }
L_08914DCC:
    ctx.set_gpr(31, 0x08914DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914DD4u) goto L_08914DD4;
    return;
L_08914DD4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915014;
      }
      goto L_08914DE0;
    }
L_08914DE0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08914DF0u);
    // nop
    goto L_089149C0;
L_08914DF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914E64;
      }
      goto L_08914DF8;
    }
L_08914DF8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08914E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08914E08u) goto L_08914E08;
    return;
L_08914E08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914E1C;
      }
      goto L_08914E14;
    }
L_08914E14:
    ctx.set_gpr(31, 0x08914E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914E1Cu) goto L_08914E1C;
    return;
L_08914E1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914E30;
      }
      goto L_08914E28;
    }
L_08914E28:
    ctx.set_gpr(31, 0x08914E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914E30u) goto L_08914E30;
    return;
L_08914E30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914E44;
      }
      goto L_08914E3C;
    }
L_08914E3C:
    ctx.set_gpr(31, 0x08914E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914E44u) goto L_08914E44;
    return;
L_08914E44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914E58;
      }
      goto L_08914E50;
    }
L_08914E50:
    ctx.set_gpr(31, 0x08914E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914E58u) goto L_08914E58;
    return;
L_08914E58:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915014;
      }
      goto L_08914E64;
    }
L_08914E64:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08914E70u);
    // nop
    goto L_0891481C;
L_08914E70:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08914E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08914E7Cu) goto L_08914E7C;
    return;
L_08914E7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08914E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 690u, 0x088F3A0Cu>(ctx, &aot_mem) && ctx.pc == 0x08914E88u) goto L_08914E88;
    return;
L_08914E88:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08914E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08914E98u) goto L_08914E98;
    return;
L_08914E98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914EBC;
      }
      goto L_08914EB4;
    }
L_08914EB4:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08914EBC;
L_08914EBC:
    ctx.set_gpr(31, 0x08914EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 547u, 0x0895A4F4u>(ctx, &aot_mem) && ctx.pc == 0x08914EC4u) goto L_08914EC4;
    return;
L_08914EC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914EE8;
      }
      goto L_08914EE0;
    }
L_08914EE0:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08914EE8;
L_08914EE8:
    ctx.set_gpr(31, 0x08914EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 547u, 0x0895A4F4u>(ctx, &aot_mem) && ctx.pc == 0x08914EF0u) goto L_08914EF0;
    return;
L_08914EF0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08914F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08914F00u) goto L_08914F00;
    return;
L_08914F00:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08914F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08914F10u) goto L_08914F10;
    return;
L_08914F10:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08914F20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08914F20u) goto L_08914F20;
    return;
L_08914F20:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08914F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08914F30u) goto L_08914F30;
    return;
L_08914F30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(125));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08914F4C;
      }
      goto L_08914F44;
    }
L_08914F44:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914CE8;
      }
      goto L_08914F4C;
    }
L_08914F4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(125));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08914FB4;
      }
      goto L_08914F58;
    }
L_08914F58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914F6C;
      }
      goto L_08914F64;
    }
L_08914F64:
    ctx.set_gpr(31, 0x08914F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914F6Cu) goto L_08914F6C;
    return;
L_08914F6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914F80;
      }
      goto L_08914F78;
    }
L_08914F78:
    ctx.set_gpr(31, 0x08914F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914F80u) goto L_08914F80;
    return;
L_08914F80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914F94;
      }
      goto L_08914F8C;
    }
L_08914F8C:
    ctx.set_gpr(31, 0x08914F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914F94u) goto L_08914F94;
    return;
L_08914F94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914FA8;
      }
      goto L_08914FA0;
    }
L_08914FA0:
    ctx.set_gpr(31, 0x08914FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914FA8u) goto L_08914FA8;
    return;
L_08914FA8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915014;
      }
      goto L_08914FB4;
    }
L_08914FB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914FD4;
      }
      goto L_08914FCC;
    }
L_08914FCC:
    ctx.set_gpr(31, 0x08914FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914FD4u) goto L_08914FD4;
    return;
L_08914FD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914FE8;
      }
      goto L_08914FE0;
    }
L_08914FE0:
    ctx.set_gpr(31, 0x08914FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914FE8u) goto L_08914FE8;
    return;
L_08914FE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914FFC;
      }
      goto L_08914FF4;
    }
L_08914FF4:
    ctx.set_gpr(31, 0x08914FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08914FFCu) goto L_08914FFC;
    return;
L_08914FFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915010;
      }
      goto L_08915008;
    }
L_08915008:
    ctx.set_gpr(31, 0x08915010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08915010u) goto L_08915010;
    return;
L_08915010:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08915014;
L_08915014:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891502C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915064;
      }
      goto L_08915058;
    }
L_08915058:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08915064;
L_08915064:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915080;
      }
      goto L_08915074;
    }
L_08915074:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08915080;
L_08915080:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08915090u);
    // nop
    goto L_089152E0;
L_08915090:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089150A0u);
    // nop
    goto L_08914A90;
L_089150A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089150DC;
      }
      goto L_089150A8;
    }
L_089150A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089150BC;
      }
      goto L_089150B4;
    }
L_089150B4:
    ctx.set_gpr(31, 0x089150BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089150BCu) goto L_089150BC;
    return;
L_089150BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089150D0;
      }
      goto L_089150C8;
    }
L_089150C8:
    ctx.set_gpr(31, 0x089150D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089150D0u) goto L_089150D0;
    return;
L_089150D0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089152C8;
      }
      goto L_089150DC;
    }
L_089150DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089150F4u);
    // nop
    goto L_089149C0;
L_089150F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08915130;
      }
      goto L_089150FC;
    }
L_089150FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915110;
      }
      goto L_08915108;
    }
L_08915108:
    ctx.set_gpr(31, 0x08915110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08915110u) goto L_08915110;
    return;
L_08915110:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915124;
      }
      goto L_0891511C;
    }
L_0891511C:
    ctx.set_gpr(31, 0x08915124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08915124u) goto L_08915124;
    return;
L_08915124:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089152C8;
      }
      goto L_08915130;
    }
L_08915130:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08915150;
      }
      goto L_08915148;
    }
L_08915148:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08915150;
L_08915150:
    ctx.set_gpr(31, 0x08915158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 547u, 0x0895A4F4u>(ctx, &aot_mem) && ctx.pc == 0x08915158u) goto L_08915158;
    return;
L_08915158:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08915168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08915168u) goto L_08915168;
    return;
L_08915168:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08915174u);
    // nop
    goto L_0891481C;
L_08915174:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(123));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089151BC;
      }
      goto L_08915188;
    }
L_08915188:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891519C;
      }
      goto L_08915194;
    }
L_08915194:
    ctx.set_gpr(31, 0x0891519Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891519Cu) goto L_0891519C;
    return;
L_0891519C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089151B0;
      }
      goto L_089151A8;
    }
L_089151A8:
    ctx.set_gpr(31, 0x089151B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089151B0u) goto L_089151B0;
    return;
L_089151B0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089152C8;
      }
      goto L_089151BC;
    }
L_089151BC:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089151D0u);
    // nop
    goto L_0891481C;
L_089151D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915230;
      }
      goto L_089151D8;
    }
L_089151D8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089151E8u);
    // nop
    goto L_089140B0;
L_089151E8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x089151F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089151F8u) goto L_089151F8;
    return;
L_089151F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891520C;
      }
      goto L_08915204;
    }
L_08915204:
    ctx.set_gpr(31, 0x0891520Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891520Cu) goto L_0891520C;
    return;
L_0891520C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891524C;
      }
      goto L_08915218;
    }
L_08915218:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08915224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08915224u) goto L_08915224;
    return;
L_08915224:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08915230u);
    // nop
    goto L_0891481C;
L_08915230:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(125));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891524C;
      }
      goto L_08915244;
    }
L_08915244:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089151D8;
      }
      goto L_0891524C;
    }
L_0891524C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(125));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08915294;
      }
      goto L_08915260;
    }
L_08915260:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915274;
      }
      goto L_0891526C;
    }
L_0891526C:
    ctx.set_gpr(31, 0x08915274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08915274u) goto L_08915274;
    return;
L_08915274:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915288;
      }
      goto L_08915280;
    }
L_08915280:
    ctx.set_gpr(31, 0x08915288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08915288u) goto L_08915288;
    return;
L_08915288:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089152C8;
      }
      goto L_08915294;
    }
L_08915294:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089152B0;
      }
      goto L_089152A8;
    }
L_089152A8:
    ctx.set_gpr(31, 0x089152B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089152B0u) goto L_089152B0;
    return;
L_089152B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089152C4;
      }
      goto L_089152BC;
    }
L_089152BC:
    ctx.set_gpr(31, 0x089152C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089152C4u) goto L_089152C4;
    return;
L_089152C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089152C8;
L_089152C8:
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
L_089152E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08915300u);
    // nop
    goto L_0891481C;
L_08915300:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08915320;
      }
      goto L_08915314;
    }
L_08915314:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915368;
      }
      goto L_08915320;
    }
L_08915320:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08915338u);
    // nop
    goto L_08914900;
L_08915338:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891534C;
      }
      goto L_08915340;
    }
L_08915340:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915368;
      }
      goto L_0891534C;
    }
L_0891534C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08915358u);
    // nop
    goto L_0891481C;
L_08915358:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08915368;
L_08915368:
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
L_08915380:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089153E8;
      }
      goto L_0891538C;
    }
L_0891538C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089153DC;
      }
      goto L_08915398;
    }
L_08915398:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089153D0;
      }
      goto L_089153A4;
    }
L_089153A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089153C4;
      }
      goto L_089153B0;
    }
L_089153B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089153C4;
      }
      goto L_089153BC;
    }
L_089153BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089153E8;
      }
      goto L_089153C4;
    }
L_089153C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089153EC;
      }
      goto L_089153D0;
    }
L_089153D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089153EC;
      }
      goto L_089153DC;
    }
L_089153DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089153EC;
      }
      goto L_089153E8;
    }
L_089153E8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089153EC;
L_089153EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089153F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915650;
      }
      goto L_08915424;
    }
L_08915424:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08915568;
      }
      goto L_08915430;
    }
L_08915430:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089154DC;
      }
      goto L_0891543C;
    }
L_0891543C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08915450;
      }
      goto L_08915448;
    }
L_08915448:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915650;
      }
      goto L_08915450;
    }
L_08915450:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13000));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08915470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x08915470u) goto L_08915470;
    return;
L_08915470:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08915488;
      }
      goto L_0891547C;
    }
L_0891547C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915670;
      }
      goto L_08915488;
    }
L_08915488:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13000));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x089154A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x089154A0u) goto L_089154A0;
    return;
L_089154A0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089154B8;
      }
      goto L_089154AC;
    }
L_089154AC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915670;
      }
      goto L_089154B8;
    }
L_089154B8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x089154D0u);
    // nop
    goto L_08915758;
L_089154D0:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891566C;
      }
      goto L_089154DC;
    }
L_089154DC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12992));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x089154FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x089154FCu) goto L_089154FC;
    return;
L_089154FC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08915514;
      }
      goto L_08915508;
    }
L_08915508:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915670;
      }
      goto L_08915514;
    }
L_08915514:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12992));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0891552Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x0891552Cu) goto L_0891552C;
    return;
L_0891552C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08915544;
      }
      goto L_08915538;
    }
L_08915538:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915670;
      }
      goto L_08915544;
    }
L_08915544:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x0891555Cu);
    // nop
    goto L_089157BC;
L_0891555C:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891566C;
      }
      goto L_08915568;
    }
L_08915568:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08915578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08915578u) goto L_08915578;
    return;
L_08915578:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08915584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x08915584u) goto L_08915584;
    return;
L_08915584:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08915598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08915598u) goto L_08915598;
    return;
L_08915598:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(31, 0x089155A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 606u, 0x0895A904u>(ctx, &aot_mem) && ctx.pc == 0x089155A8u) goto L_089155A8;
    return;
L_089155A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089155D0;
      }
      goto L_089155B0;
    }
L_089155B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089155C4;
      }
      goto L_089155BC;
    }
L_089155BC:
    ctx.set_gpr(31, 0x089155C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089155C4u) goto L_089155C4;
    return;
L_089155C4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915670;
      }
      goto L_089155D0;
    }
L_089155D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089155E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x089155E0u) goto L_089155E0;
    return;
L_089155E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(62));
    ctx.set_gpr(31, 0x089155F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 606u, 0x0895A904u>(ctx, &aot_mem) && ctx.pc == 0x089155F0u) goto L_089155F0;
    return;
L_089155F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08915618;
      }
      goto L_089155F8;
    }
L_089155F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891560C;
      }
      goto L_08915604;
    }
L_08915604:
    ctx.set_gpr(31, 0x0891560Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891560Cu) goto L_0891560C;
    return;
L_0891560C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915670;
      }
      goto L_08915618;
    }
L_08915618:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(62)));
    ctx.set_gpr(31, 0x08915630u);
    // nop
    goto L_08915844;
L_08915630:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891566C;
      }
      goto L_08915640;
    }
L_08915640:
    ctx.set_gpr(31, 0x08915648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08915648u) goto L_08915648;
    return;
L_08915648:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891566C;
      }
      goto L_08915650;
    }
L_08915650:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08915668u);
    // nop
    goto L_08915690;
L_08915668:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    goto L_0891566C;
L_0891566C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08915670;
L_08915670:
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
L_08915690:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08915720;
      }
      goto L_089156B4;
    }
L_089156B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089156F0;
      }
      goto L_089156C0;
    }
L_089156C0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089156D0;
      }
      goto L_089156C8;
    }
L_089156C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891573C;
      }
      goto L_089156D0;
    }
L_089156D0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089156E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 449u, 0x08816370u>(ctx, &aot_mem) && ctx.pc == 0x089156E0u) goto L_089156E0;
    return;
L_089156E0:
    ctx.set_gpr(2, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915740;
      }
      goto L_089156F0;
    }
L_089156F0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089156FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089156FCu) goto L_089156FC;
    return;
L_089156FC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08915710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 517u, 0x088167C0u>(ctx, &aot_mem) && ctx.pc == 0x08915710u) goto L_08915710;
    return;
L_08915710:
    ctx.set_gpr(2, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915740;
      }
      goto L_08915720;
    }
L_08915720:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08915730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 449u, 0x08816370u>(ctx, &aot_mem) && ctx.pc == 0x08915730u) goto L_08915730;
    return;
L_08915730:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915740;
      }
      goto L_0891573C;
    }
L_0891573C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08915740;
L_08915740:
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
L_08915758:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089157A0;
      }
      goto L_08915764;
    }
L_08915764:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08915790;
      }
      goto L_08915770;
    }
L_08915770:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915780;
      }
      goto L_08915778;
    }
L_08915778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089157B0;
      }
      goto L_08915780;
    }
L_08915780:
    ctx.set_gpr(2, ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089157B4;
      }
      goto L_08915790;
    }
L_08915790:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089157B4;
      }
      goto L_089157A0;
    }
L_089157A0:
    ctx.set_gpr(2, ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089157B4;
      }
      goto L_089157B0;
    }
L_089157B0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089157B4;
L_089157B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089157BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891581C;
      }
      goto L_089157C8;
    }
L_089157C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08915800;
      }
      goto L_089157D4;
    }
L_089157D4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089157E4;
      }
      goto L_089157DC;
    }
L_089157DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915838;
      }
      goto L_089157E4;
    }
L_089157E4:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089157F8;
      }
      goto L_089157F4;
    }
L_089157F4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089157F8;
L_089157F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891583C;
      }
      goto L_08915800;
    }
L_08915800:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) || ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915814;
      }
      goto L_08915810;
    }
L_08915810:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08915814;
L_08915814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891583C;
      }
      goto L_0891581C;
    }
L_0891581C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915830;
      }
      goto L_0891582C;
    }
L_0891582C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08915830;
L_08915830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891583C;
      }
      goto L_08915838;
    }
L_08915838:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0891583C;
L_0891583C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08915844:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08915884;
      }
      goto L_08915850;
    }
L_08915850:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891589C;
      }
      goto L_0891585C;
    }
L_0891585C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891586C;
      }
      goto L_08915864;
    }
L_08915864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891589C;
      }
      goto L_0891586C;
    }
L_0891586C:
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    ctx.set_gpr(2, ctx.gpr[7] & 255u);
    ctx.set_gpr(2, ctx.gpr[3] ^ ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089158A0;
      }
      goto L_08915884;
    }
L_08915884:
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    ctx.set_gpr(2, ctx.gpr[7] & 255u);
    ctx.set_gpr(2, ctx.gpr[3] ^ ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089158A0;
      }
      goto L_0891589C;
    }
L_0891589C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089158A0;
L_089158A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089158A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089158D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 258u, 0x088D9508u>(ctx, &aot_mem) && ctx.pc == 0x089158D0u) goto L_089158D0;
    return;
L_089158D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089158F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089158F4u) goto L_089158F4;
    return;
L_089158F4:
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
L_08915910:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08915924:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891593Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891593Cu) goto L_0891593C;
    return;
L_0891593C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891594C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08915984;
      }
      goto L_08915978;
    }
L_08915978:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915A00;
      }
      goto L_08915984;
    }
L_08915984:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08915990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08915990u) goto L_08915990;
    return;
L_08915990:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13336));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089159ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x089159ACu) goto L_089159AC;
    return;
L_089159AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089159FC;
      }
      goto L_089159B8;
    }
L_089159B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089159C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089159C4u) goto L_089159C4;
    return;
L_089159C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x089159D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 382u, 0x08941B90u>(ctx, &aot_mem) && ctx.pc == 0x089159D8u) goto L_089159D8;
    return;
L_089159D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089159F0;
      }
      goto L_089159E0;
    }
L_089159E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089159FC;
      }
      goto L_089159F0;
    }
L_089159F0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915A00;
      }
      goto L_089159FC;
    }
L_089159FC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08915A00;
L_08915A00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08915A20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08915A44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08915A44u) goto L_08915A44;
    return;
L_08915A44:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08915A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 387u, 0x08941BFCu>(ctx, &aot_mem) && ctx.pc == 0x08915A58u) goto L_08915A58;
    return;
L_08915A58:
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
L_08915A70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08915A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 501u, 0x0894227Cu>(ctx, &aot_mem) && ctx.pc == 0x08915A88u) goto L_08915A88;
    return;
L_08915A88:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17948));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915AA8;
      }
      goto L_08915A9C;
    }
L_08915A9C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08915AA8u);
    // nop
    goto L_08915AC0;
L_08915AA8:
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
L_08915AC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08915AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x08915AD8u) goto L_08915AD8;
    return;
L_08915AD8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17948));
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
L_08915AFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08915B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 519u, 0x08942410u>(ctx, &aot_mem) && ctx.pc == 0x08915B14u) goto L_08915B14;
    return;
L_08915B14:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17948));
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
L_08915B38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08915B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 534u, 0x0894259Cu>(ctx, &aot_mem) && ctx.pc == 0x08915B48u) goto L_08915B48;
    return;
L_08915B48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08915B58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08915B64:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08915B70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08915B80u);
    // nop
    goto L_08915BEC;
L_08915B80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08915B90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30612)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915BCC;
      }
      goto L_08915BA8;
    }
L_08915BA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08915BCC;
      }
      goto L_08915BC4;
    }
L_08915BC4:
    ctx.set_gpr(31, 0x08915BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08915BCCu) goto L_08915BCC;
    return;
L_08915BCC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30612), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32201), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08915BEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30612)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08915C48;
      }
      goto L_08915C04;
    }
L_08915C04:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29612)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915C48;
      }
      goto L_08915C14;
    }
L_08915C14:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32201)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08915C48;
      }
      goto L_08915C20;
    }
L_08915C20:
    ctx.set_gpr(31, 0x08915C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08915C28u) goto L_08915C28;
    return;
L_08915C28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08915C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08915C34u) goto L_08915C34;
    return;
L_08915C34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08915C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 567u, 0x088F2F30u>(ctx, &aot_mem) && ctx.pc == 0x08915C40u) goto L_08915C40;
    return;
L_08915C40:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30612), ctx.gpr[2]);
    goto L_08915C48;
L_08915C48:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30612)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08915C60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08915C68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915D10;
      }
      goto L_08915C80;
    }
L_08915C80:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915CAC;
      }
      goto L_08915C8C;
    }
L_08915C8C:
    ctx.set_gpr(31, 0x08915C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08915C94u) goto L_08915C94;
    return;
L_08915C94:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08915CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08915CA4u) goto L_08915CA4;
    return;
L_08915CA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915DB0;
      }
      goto L_08915CAC;
    }
L_08915CAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08915DB0;
      }
      goto L_08915CB8;
    }
L_08915CB8:
    ctx.set_gpr(31, 0x08915CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08915CC0u) goto L_08915CC0;
    return;
L_08915CC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08915CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 386u, 0x088E9CF8u>(ctx, &aot_mem) && ctx.pc == 0x08915CCCu) goto L_08915CCC;
    return;
L_08915CCC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08915CE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08915CE4u) goto L_08915CE4;
    return;
L_08915CE4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08915CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08915CF4u) goto L_08915CF4;
    return;
L_08915CF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915DB0;
      }
      goto L_08915D00;
    }
L_08915D00:
    ctx.set_gpr(31, 0x08915D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08915D08u) goto L_08915D08;
    return;
L_08915D08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915DB0;
      }
      goto L_08915D10;
    }
L_08915D10:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915DB0;
      }
      goto L_08915D1C;
    }
L_08915D1C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915D40;
      }
      goto L_08915D28;
    }
L_08915D28:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08915D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08915D38u) goto L_08915D38;
    return;
L_08915D38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915DB0;
      }
      goto L_08915D40;
    }
L_08915D40:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915D58;
      }
      goto L_08915D4C;
    }
L_08915D4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08915D58;
L_08915D58:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08915D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08915D68u) goto L_08915D68;
    return;
L_08915D68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915D9C;
      }
      goto L_08915D74;
    }
L_08915D74:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08915D88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08915D88u) goto L_08915D88;
    return;
L_08915D88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08915D9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08915D9Cu) goto L_08915D9C;
    return;
L_08915D9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915DB0;
      }
      goto L_08915DA8;
    }
L_08915DA8:
    ctx.set_gpr(31, 0x08915DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08915DB0u) goto L_08915DB0;
    return;
L_08915DB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08915DC4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08915DD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08915DDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915E0C;
      }
      goto L_08915E00;
    }
L_08915E00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915E10;
      }
      goto L_08915E0C;
    }
L_08915E0C:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08915E10;
L_08915E10:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915E30;
      }
      goto L_08915E1C;
    }
L_08915E1C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08915E30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08915E30u) goto L_08915E30;
    return;
L_08915E30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915E68;
      }
      goto L_08915E44;
    }
L_08915E44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915E60;
      }
      goto L_08915E50;
    }
L_08915E50:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08915E60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08915E60u) goto L_08915E60;
    return;
L_08915E60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915EF8;
      }
      goto L_08915E68;
    }
L_08915E68:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915E98;
      }
      goto L_08915E7C;
    }
L_08915E7C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(9004));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x08915E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08915E90u) goto L_08915E90;
    return;
L_08915E90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915E9C;
      }
      goto L_08915E98;
    }
L_08915E98:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(9004), static_cast<std::uint8_t>(0u));
    goto L_08915E9C;
L_08915E9C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(9004))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915EC4;
      }
      goto L_08915EA8;
    }
L_08915EA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9004));
    ctx.set_gpr(31, 0x08915EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 192u, 0x0895CC08u>(ctx, &aot_mem) && ctx.pc == 0x08915EB8u) goto L_08915EB8;
    return;
L_08915EB8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(9260), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915ECC;
      }
      goto L_08915EC4;
    }
L_08915EC4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(9260), ctx.gpr[3]);
    goto L_08915ECC;
L_08915ECC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915EF8;
      }
      goto L_08915EE8;
    }
L_08915EE8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08915EF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08915EF8u) goto L_08915EF8;
    return;
L_08915EF8:
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
L_08915F10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915F40;
      }
      goto L_08915F34;
    }
L_08915F34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915F44;
      }
      goto L_08915F40;
    }
L_08915F40:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08915F44;
L_08915F44:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915F64;
      }
      goto L_08915F50;
    }
L_08915F50:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08915F64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08915F64u) goto L_08915F64;
    return;
L_08915F64:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915F9C;
      }
      goto L_08915F78;
    }
L_08915F78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915F94;
      }
      goto L_08915F84;
    }
L_08915F84:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08915F94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08915F94u) goto L_08915F94;
    return;
L_08915F94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891602C;
      }
      goto L_08915F9C;
    }
L_08915F9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915FCC;
      }
      goto L_08915FB0;
    }
L_08915FB0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(9264));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x08915FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08915FC4u) goto L_08915FC4;
    return;
L_08915FC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915FD0;
      }
      goto L_08915FCC;
    }
L_08915FCC:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(9264), static_cast<std::uint8_t>(0u));
    goto L_08915FD0;
L_08915FD0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(9264))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915FF8;
      }
      goto L_08915FDC;
    }
L_08915FDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9264));
    ctx.set_gpr(31, 0x08915FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 192u, 0x0895CC08u>(ctx, &aot_mem) && ctx.pc == 0x08915FECu) goto L_08915FEC;
    return;
L_08915FEC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(9520), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916000;
      }
      goto L_08915FF8;
    }
L_08915FF8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(9520), ctx.gpr[3]);
    goto L_08916000;
L_08916000:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891602C;
      }
      goto L_0891601C;
    }
L_0891601C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891602Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891602Cu) goto L_0891602C;
    return;
L_0891602C:
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
L_08916044:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x08916064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 129u, 0x0895C814u>(ctx, &aot_mem) && ctx.pc == 0x08916064u) goto L_08916064;
    return;
L_08916064:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08916074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 130u, 0x0895C820u>(ctx, &aot_mem) && ctx.pc == 0x08916074u) goto L_08916074;
    return;
L_08916074:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08916080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 131u, 0x0895C82Cu>(ctx, &aot_mem) && ctx.pc == 0x08916080u) goto L_08916080;
    return;
L_08916080:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(31, 0x08916090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 129u, 0x0895C814u>(ctx, &aot_mem) && ctx.pc == 0x08916090u) goto L_08916090;
    return;
L_08916090:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x089160A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 130u, 0x0895C820u>(ctx, &aot_mem) && ctx.pc == 0x089160A0u) goto L_089160A0;
    return;
L_089160A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x089160ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 131u, 0x0895C82Cu>(ctx, &aot_mem) && ctx.pc == 0x089160ACu) goto L_089160AC;
    return;
L_089160AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(31, 0x089160BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 129u, 0x0895C814u>(ctx, &aot_mem) && ctx.pc == 0x089160BCu) goto L_089160BC;
    return;
L_089160BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089160CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 130u, 0x0895C820u>(ctx, &aot_mem) && ctx.pc == 0x089160CCu) goto L_089160CC;
    return;
L_089160CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x089160D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 131u, 0x0895C82Cu>(ctx, &aot_mem) && ctx.pc == 0x089160D8u) goto L_089160D8;
    return;
L_089160D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(31, 0x089160E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 129u, 0x0895C814u>(ctx, &aot_mem) && ctx.pc == 0x089160E8u) goto L_089160E8;
    return;
L_089160E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(31, 0x089160F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 130u, 0x0895C820u>(ctx, &aot_mem) && ctx.pc == 0x089160F8u) goto L_089160F8;
    return;
L_089160F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08916104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 131u, 0x0895C82Cu>(ctx, &aot_mem) && ctx.pc == 0x08916104u) goto L_08916104;
    return;
L_08916104:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(31, 0x08916114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 129u, 0x0895C814u>(ctx, &aot_mem) && ctx.pc == 0x08916114u) goto L_08916114;
    return;
L_08916114:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x08916124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 130u, 0x0895C820u>(ctx, &aot_mem) && ctx.pc == 0x08916124u) goto L_08916124;
    return;
L_08916124:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08916130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 131u, 0x0895C82Cu>(ctx, &aot_mem) && ctx.pc == 0x08916130u) goto L_08916130;
    return;
L_08916130:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(31, 0x08916140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 748u, 0x0890B418u>(ctx, &aot_mem) && ctx.pc == 0x08916140u) goto L_08916140;
    return;
L_08916140:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(31, 0x08916150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 749u, 0x0890B424u>(ctx, &aot_mem) && ctx.pc == 0x08916150u) goto L_08916150;
    return;
L_08916150:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x0891615Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 750u, 0x0890B430u>(ctx, &aot_mem) && ctx.pc == 0x0891615Cu) goto L_0891615C;
    return;
L_0891615C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08916170u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08916170u) goto L_08916170;
    return;
L_08916170:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089161A4;
      }
      goto L_08916178;
    }
L_08916178:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16384));
    ctx.set_gpr(31, 0x08916188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 796u, 0x08927840u>(ctx, &aot_mem) && ctx.pc == 0x08916188u) goto L_08916188;
    return;
L_08916188:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16384));
    ctx.set_gpr(31, 0x08916198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 797u, 0x0892784Cu>(ctx, &aot_mem) && ctx.pc == 0x08916198u) goto L_08916198;
    return;
L_08916198:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x089161A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 798u, 0x08927858u>(ctx, &aot_mem) && ctx.pc == 0x089161A4u) goto L_089161A4;
    return;
L_089161A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089161D4;
      }
      goto L_089161C8;
    }
L_089161C8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089161D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089161D4u) goto L_089161D4;
    return;
L_089161D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089161F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089161F0u) goto L_089161F0;
    return;
L_089161F0:
    ctx.set_gpr(31, 0x089161F8u);
    // nop
    goto L_08915C60;
L_089161F8:
    ctx.set_gpr(3, 2193u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(23648));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916220;
      }
      goto L_08916210;
    }
L_08916210:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08916220u);
    // nop
    goto L_08915C68;
L_08916220:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08916234:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891634C;
      }
      goto L_08916258;
    }
L_08916258:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] | 2u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08916270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 135u, 0x0895C88Cu>(ctx, &aot_mem) && ctx.pc == 0x08916270u) goto L_08916270;
    return;
L_08916270:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x0891627Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 135u, 0x0895C88Cu>(ctx, &aot_mem) && ctx.pc == 0x0891627Cu) goto L_0891627C;
    return;
L_0891627C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08916288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 135u, 0x0895C88Cu>(ctx, &aot_mem) && ctx.pc == 0x08916288u) goto L_08916288;
    return;
L_08916288:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08916294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 135u, 0x0895C88Cu>(ctx, &aot_mem) && ctx.pc == 0x08916294u) goto L_08916294;
    return;
L_08916294:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x089162A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 135u, 0x0895C88Cu>(ctx, &aot_mem) && ctx.pc == 0x089162A0u) goto L_089162A0;
    return;
L_089162A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x089162ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 754u, 0x0890B490u>(ctx, &aot_mem) && ctx.pc == 0x089162ACu) goto L_089162AC;
    return;
L_089162AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089162C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089162C0u) goto L_089162C0;
    return;
L_089162C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089162D4;
      }
      goto L_089162C8;
    }
L_089162C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x089162D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 808u, 0x0892791Cu>(ctx, &aot_mem) && ctx.pc == 0x089162D4u) goto L_089162D4;
    return;
L_089162D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089162F0;
      }
      goto L_089162E4;
    }
L_089162E4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916300;
      }
      goto L_089162F0;
    }
L_089162F0:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08916300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08916300u) goto L_08916300;
    return;
L_08916300:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    // nop
      if (branch_taken) {
          goto L_08916320;
      }
      goto L_08916310;
    }
L_08916310:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08916320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08916320u) goto L_08916320;
    return;
L_08916320:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891633C;
      }
      goto L_0891632C;
    }
L_0891632C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0891633Cu);
    // nop
    goto L_08915C68;
L_0891633C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    goto L_0891634C;
L_0891634C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08916360:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916388;
      }
      goto L_0891637C;
    }
L_0891637C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891638C;
      }
      goto L_08916388;
    }
L_08916388:
    ctx.set_gpr(4, 0u + 0u);
    goto L_0891638C;
L_0891638C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089163AC;
      }
      goto L_08916398;
    }
L_08916398:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089163ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089163ACu) goto L_089163AC;
    return;
L_089163AC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x089163BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 147u, 0x0895C950u>(ctx, &aot_mem) && ctx.pc == 0x089163BCu) goto L_089163BC;
    return;
L_089163BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x089163C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 147u, 0x0895C950u>(ctx, &aot_mem) && ctx.pc == 0x089163C8u) goto L_089163C8;
    return;
L_089163C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x089163D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 147u, 0x0895C950u>(ctx, &aot_mem) && ctx.pc == 0x089163D4u) goto L_089163D4;
    return;
L_089163D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x089163E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 147u, 0x0895C950u>(ctx, &aot_mem) && ctx.pc == 0x089163E0u) goto L_089163E0;
    return;
L_089163E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x089163ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 147u, 0x0895C950u>(ctx, &aot_mem) && ctx.pc == 0x089163ECu) goto L_089163EC;
    return;
L_089163EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x089163F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 769u, 0x0890B580u>(ctx, &aot_mem) && ctx.pc == 0x089163F8u) goto L_089163F8;
    return;
L_089163F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08916414;
      }
      goto L_08916408;
    }
L_08916408:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916424;
      }
      goto L_08916414;
    }
L_08916414:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08916424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08916424u) goto L_08916424;
    return;
L_08916424:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08916440u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08916440u) goto L_08916440;
    return;
L_08916440:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891645C;
      }
      goto L_0891644C;
    }
L_0891644C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891645Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891645Cu) goto L_0891645C;
    return;
L_0891645C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08916470:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-272));
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
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[5] << (ctx.gpr[6] & 31u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089164D4;
      }
      goto L_089164C8;
    }
L_089164C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917934;
      }
      goto L_089164D4;
    }
L_089164D4:
    ctx.set_gpr(1, ctx.gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916570;
      }
      goto L_089164E0;
    }
L_089164E0:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32204));
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089164FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[5] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08916570;
      }
      goto L_08916518;
    }
L_08916518:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917934;
      }
      goto L_08916524;
    }
L_08916524:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[5] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891654C;
      }
      goto L_08916540;
    }
L_08916540:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917934;
      }
      goto L_0891654C;
    }
L_0891654C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[5] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08916570;
      }
      goto L_08916564;
    }
L_08916564:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917934;
      }
      goto L_08916570;
    }
L_08916570:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916588;
      }
      goto L_0891657C;
    }
L_0891657C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891658C;
      }
      goto L_08916588;
    }
L_08916588:
    ctx.set_gpr(4, 0u + 0u);
    goto L_0891658C;
L_0891658C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089165AC;
      }
      goto L_08916598;
    }
L_08916598:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089165ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089165ACu) goto L_089165AC;
    return;
L_089165AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089165E8;
      }
      goto L_089165C0;
    }
L_089165C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089165DC;
      }
      goto L_089165CC;
    }
L_089165CC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089165DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089165DCu) goto L_089165DC;
    return;
L_089165DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917934;
      }
      goto L_089165E8;
    }
L_089165E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] | 2u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(21, ctx.gpr[17] + 0u);
    ctx.set_gpr(30, ctx.gpr[17] + 0u);
    ctx.set_gpr(22, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.set_gpr(23, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(236));
    goto L_0891662C;
L_0891662C:
    ctx.set_gpr(2, ctx.gpr[4] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] >> 7u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916650;
      }
      goto L_08916640;
    }
L_08916640:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08916650;
L_08916650:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891662C;
      }
      goto L_0891665C;
    }
L_0891665C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916698;
      }
      goto L_08916670;
    }
L_08916670:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916698;
      }
      goto L_0891667C;
    }
L_0891667C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916698;
      }
      goto L_08916688;
    }
L_08916688:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08916694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 192u, 0x0895CC08u>(ctx, &aot_mem) && ctx.pc == 0x08916694u) goto L_08916694;
    return;
L_08916694:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08916698;
L_08916698:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] & 64u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089166E0;
      }
      goto L_089166AC;
    }
L_089166AC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089166DC;
      }
      goto L_089166B8;
    }
L_089166B8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089166DC;
      }
      goto L_089166C4;
    }
L_089166C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x089166D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 192u, 0x0895CC08u>(ctx, &aot_mem) && ctx.pc == 0x089166D0u) goto L_089166D0;
    return;
L_089166D0:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089166E0;
      }
      goto L_089166DC;
    }
L_089166DC:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(9520)));
    goto L_089166E0;
L_089166E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] & 128u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891671C;
      }
      goto L_089166F4;
    }
L_089166F4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891671C;
      }
      goto L_08916700;
    }
L_08916700:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891671C;
      }
      goto L_0891670C;
    }
L_0891670C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08916718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 192u, 0x0895CC08u>(ctx, &aot_mem) && ctx.pc == 0x08916718u) goto L_08916718;
    return;
L_08916718:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    goto L_0891671C;
L_0891671C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916758;
      }
      goto L_08916730;
    }
L_08916730:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916758;
      }
      goto L_0891673C;
    }
L_0891673C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916758;
      }
      goto L_08916748;
    }
L_08916748:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08916754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 192u, 0x0895CC08u>(ctx, &aot_mem) && ctx.pc == 0x08916754u) goto L_08916754;
    return;
L_08916754:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    goto L_08916758;
L_08916758:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916794;
      }
      goto L_0891676C;
    }
L_0891676C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916794;
      }
      goto L_08916778;
    }
L_08916778:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916794;
      }
      goto L_08916784;
    }
L_08916784:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08916790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 192u, 0x0895CC08u>(ctx, &aot_mem) && ctx.pc == 0x08916790u) goto L_08916790;
    return;
L_08916790:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    goto L_08916794;
L_08916794:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] & 16u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089167D0;
      }
      goto L_089167A8;
    }
L_089167A8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089167D0;
      }
      goto L_089167B4;
    }
L_089167B4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089167D0;
      }
      goto L_089167C0;
    }
L_089167C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x089167CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 192u, 0x0895CC08u>(ctx, &aot_mem) && ctx.pc == 0x089167CCu) goto L_089167CC;
    return;
L_089167CC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_089167D0;
L_089167D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] & 32u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916844;
      }
      goto L_089167E4;
    }
L_089167E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08916844;
      }
      goto L_089167F4;
    }
L_089167F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08916818u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08916818u) goto L_08916818;
    return;
L_08916818:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08916830u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08916830u) goto L_08916830;
    return;
L_08916830:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08916844;
      }
      goto L_08916840;
    }
L_08916840:
    ctx.set_gpr(18, ctx.gpr[18] | 32u);
    goto L_08916844;
L_08916844:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08916854;
      }
      goto L_08916850;
    }
L_08916850:
    ctx.set_gpr(18, ctx.gpr[18] | 2u);
    goto L_08916854;
L_08916854:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08916864;
      }
      goto L_08916860;
    }
L_08916860:
    ctx.set_gpr(18, ctx.gpr[18] | 64u);
    goto L_08916864;
L_08916864:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08916874;
      }
      goto L_08916870;
    }
L_08916870:
    ctx.set_gpr(18, ctx.gpr[18] | 128u);
    goto L_08916874;
L_08916874:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08916884;
      }
      goto L_08916880;
    }
L_08916880:
    ctx.set_gpr(18, ctx.gpr[18] | 4u);
    goto L_08916884;
L_08916884:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[4] & 256u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089168AC;
      }
      goto L_08916898;
    }
L_08916898:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(9260)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089168AC;
      }
      goto L_089168A8;
    }
L_089168A8:
    ctx.set_gpr(18, ctx.gpr[18] | 256u);
    goto L_089168AC;
L_089168AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089168C8;
      }
      goto L_089168BC;
    }
L_089168BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089168CC;
      }
      goto L_089168C8;
    }
L_089168C8:
    ctx.set_gpr(18, ctx.gpr[18] | 8u);
    goto L_089168CC;
L_089168CC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089168E0;
      }
      goto L_089168DC;
    }
L_089168DC:
    ctx.set_gpr(18, ctx.gpr[18] | 16u);
    goto L_089168E0;
L_089168E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089168F0;
      }
      goto L_089168EC;
    }
L_089168EC:
    ctx.set_gpr(18, ctx.gpr[18] | 32u);
    goto L_089168F0;
L_089168F0:
    ctx.set_gpr(2, ctx.gpr[4] & 32768u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916910;
      }
      goto L_08916900;
    }
L_08916900:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916910;
      }
      goto L_0891690C;
    }
L_0891690C:
    ctx.set_gpr(18, ctx.gpr[18] | 32768u);
    goto L_08916910;
L_08916910:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[4] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916FF8;
      }
      goto L_08916920;
    }
L_08916920:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32140));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891693C:
    ctx.set_gpr(18, ctx.gpr[18] | 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089169D4;
      }
      goto L_08916954;
    }
L_08916954:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089169D4;
      }
      goto L_08916960;
    }
L_08916960:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08916978u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08916978u) goto L_08916978;
    return;
L_08916978:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089169D4;
      }
      goto L_08916984;
    }
L_08916984:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089169A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089169A0u) goto L_089169A0;
    return;
L_089169A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089169D4;
      }
      goto L_089169A8;
    }
L_089169A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089169D4;
      }
      goto L_089169B8;
    }
L_089169B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12212));
    ctx.set_gpr(31, 0x089169CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 192u, 0x0895CC08u>(ctx, &aot_mem) && ctx.pc == 0x089169CCu) goto L_089169CC;
    return;
L_089169CC:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[18] | 4u);
    goto L_089169D4;
L_089169D4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089169D8;
L_089169D8:
    ctx.set_gpr(2, ctx.gpr[18] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(18, ctx.gpr[18] >> 7u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089169FC;
      }
      goto L_089169EC;
    }
L_089169EC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089169FC;
L_089169FC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089169D8;
      }
      goto L_08916A08;
    }
L_08916A08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, ctx.gpr[3] >> 8u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[3] >> 16u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[3] >> 24u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08916A94;
      }
      goto L_08916A38;
    }
L_08916A38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08916A54;
      }
      goto L_08916A48;
    }
L_08916A48:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08916A94;
      }
      goto L_08916A54;
    }
L_08916A54:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08916A6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08916A6Cu) goto L_08916A6C;
    return;
L_08916A6C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08916A94;
      }
      goto L_08916A78;
    }
L_08916A78:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08916A94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08916A94u) goto L_08916A94;
    return;
L_08916A94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08916AB4;
      }
      goto L_08916AA4;
    }
L_08916AA4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916ABC;
      }
      goto L_08916AB4;
    }
L_08916AB4:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08916ABC;
L_08916ABC:
    ctx.set_gpr(2, ctx.gpr[4] & 127u);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 7u));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08916B04;
      }
      goto L_08916AD0;
    }
L_08916AD0:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[4] & 64u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08916B20;
      }
      goto L_08916AE4;
    }
L_08916AE4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] & 127u);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916B20;
      }
      goto L_08916B04;
    }
L_08916B04:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916ABC;
      }
      goto L_08916B20;
    }
L_08916B20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08916B40;
      }
      goto L_08916B30;
    }
L_08916B30:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916B48;
      }
      goto L_08916B40;
    }
L_08916B40:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08916B48;
L_08916B48:
    ctx.set_gpr(2, ctx.gpr[4] & 127u);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 7u));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08916B90;
      }
      goto L_08916B5C;
    }
L_08916B5C:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[4] & 64u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08916BAC;
      }
      goto L_08916B70;
    }
L_08916B70:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] & 127u);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916BAC;
      }
      goto L_08916B90;
    }
L_08916B90:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916B48;
      }
      goto L_08916BAC;
    }
L_08916BAC:
    ctx.set_gpr(16, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08916BCCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08916BCCu) goto L_08916BCC;
    return;
L_08916BCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891702C;
      }
      goto L_08916BD4;
    }
L_08916BD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916BE8;
      }
      goto L_08916BE4;
    }
L_08916BE4:
    ctx.set_gpr(18, ctx.gpr[18] | 512u);
    goto L_08916BE8;
L_08916BE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916BF8;
      }
      goto L_08916BF4;
    }
L_08916BF4:
    ctx.set_gpr(18, ctx.gpr[18] | 1024u);
    goto L_08916BF8;
L_08916BF8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916C2C;
      }
      goto L_08916C04;
    }
L_08916C04:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916C2C;
      }
      goto L_08916C10;
    }
L_08916C10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08916C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 192u, 0x0895CC08u>(ctx, &aot_mem) && ctx.pc == 0x08916C1Cu) goto L_08916C1C;
    return;
L_08916C1C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08916C2C;
      }
      goto L_08916C28;
    }
L_08916C28:
    ctx.set_gpr(18, ctx.gpr[18] | 2048u);
    goto L_08916C2C;
L_08916C2C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08916C30;
L_08916C30:
    ctx.set_gpr(3, ctx.gpr[18] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(18, ctx.gpr[18] >> 7u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916C54;
      }
      goto L_08916C44;
    }
L_08916C44:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08916C54;
L_08916C54:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08916C30;
      }
      goto L_08916C60;
    }
L_08916C60:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916C9C;
      }
      goto L_08916C6C;
    }
L_08916C6C:
    ctx.set_gpr(3, ctx.gpr[5] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[5] >> 7u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916C90;
      }
      goto L_08916C80;
    }
L_08916C80:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08916C90;
L_08916C90:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08916C6C;
      }
      goto L_08916C9C;
    }
L_08916C9C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916D30;
      }
      goto L_08916CA8;
    }
L_08916CA8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08916CC0;
      }
      goto L_08916CB0;
    }
L_08916CB0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916CC8;
      }
      goto L_08916CC0;
    }
L_08916CC0:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08916CC8;
L_08916CC8:
    ctx.set_gpr(3, ctx.gpr[5] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 7u));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08916D10;
      }
      goto L_08916CDC;
    }
L_08916CDC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[5] & 64u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[6]))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08916D2C;
      }
      goto L_08916CF0;
    }
L_08916CF0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[7] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916D2C;
      }
      goto L_08916D10;
    }
L_08916D10:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916CC8;
      }
      goto L_08916D2C;
    }
L_08916D2C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08916D30;
L_08916D30:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0891702C;
      }
      goto L_08916D3C;
    }
L_08916D3C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08916D50;
      }
      goto L_08916D44;
    }
L_08916D44:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916D58;
      }
      goto L_08916D50;
    }
L_08916D50:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08916D58;
L_08916D58:
    ctx.set_gpr(3, ctx.gpr[2] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 7u));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08916DA0;
      }
      goto L_08916D6C;
    }
L_08916D6C:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[4] & 64u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08916DBC;
      }
      goto L_08916D80;
    }
L_08916D80:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916DBC;
      }
      goto L_08916DA0;
    }
L_08916DA0:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916D58;
      }
      goto L_08916DBC;
    }
L_08916DBC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891702C;
      }
      goto L_08916DC8;
    }
L_08916DC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916DDC;
      }
      goto L_08916DD8;
    }
L_08916DD8:
    ctx.set_gpr(18, ctx.gpr[18] | 4096u);
    goto L_08916DDC;
L_08916DDC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916DEC;
      }
      goto L_08916DE8;
    }
L_08916DE8:
    ctx.set_gpr(18, ctx.gpr[18] | 8192u);
    goto L_08916DEC;
L_08916DEC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916E20;
      }
      goto L_08916DF8;
    }
L_08916DF8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916E20;
      }
      goto L_08916E04;
    }
L_08916E04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08916E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 192u, 0x0895CC08u>(ctx, &aot_mem) && ctx.pc == 0x08916E10u) goto L_08916E10;
    return;
L_08916E10:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08916E20;
      }
      goto L_08916E1C;
    }
L_08916E1C:
    ctx.set_gpr(18, ctx.gpr[18] | 16384u);
    goto L_08916E20;
L_08916E20:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08916E24;
L_08916E24:
    ctx.set_gpr(3, ctx.gpr[18] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(18, ctx.gpr[18] >> 7u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916E48;
      }
      goto L_08916E38;
    }
L_08916E38:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08916E48;
L_08916E48:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08916E24;
      }
      goto L_08916E54;
    }
L_08916E54:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916E90;
      }
      goto L_08916E60;
    }
L_08916E60:
    ctx.set_gpr(3, ctx.gpr[5] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[5] >> 7u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916E84;
      }
      goto L_08916E74;
    }
L_08916E74:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08916E84;
L_08916E84:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08916E60;
      }
      goto L_08916E90;
    }
L_08916E90:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916F24;
      }
      goto L_08916E9C;
    }
L_08916E9C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08916EB4;
      }
      goto L_08916EA4;
    }
L_08916EA4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916EBC;
      }
      goto L_08916EB4;
    }
L_08916EB4:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08916EBC;
L_08916EBC:
    ctx.set_gpr(3, ctx.gpr[5] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 7u));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08916F04;
      }
      goto L_08916ED0;
    }
L_08916ED0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[5] & 64u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[6]))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08916F20;
      }
      goto L_08916EE4;
    }
L_08916EE4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[7] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916F20;
      }
      goto L_08916F04;
    }
L_08916F04:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916EBC;
      }
      goto L_08916F20;
    }
L_08916F20:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08916F24;
L_08916F24:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0891702C;
      }
      goto L_08916F30;
    }
L_08916F30:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08916F44;
      }
      goto L_08916F38;
    }
L_08916F38:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916F4C;
      }
      goto L_08916F44;
    }
L_08916F44:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08916F4C;
L_08916F4C:
    ctx.set_gpr(3, ctx.gpr[2] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 7u));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08916F94;
      }
      goto L_08916F60;
    }
L_08916F60:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[4] & 64u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08916FB0;
      }
      goto L_08916F74;
    }
L_08916F74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916FB0;
      }
      goto L_08916F94;
    }
L_08916F94:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916F4C;
      }
      goto L_08916FB0;
    }
L_08916FB0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891702C;
      }
      goto L_08916FBC;
    }
L_08916FBC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08916FC0;
L_08916FC0:
    ctx.set_gpr(2, ctx.gpr[18] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(18, ctx.gpr[18] >> 7u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916FE4;
      }
      goto L_08916FD4;
    }
L_08916FD4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08916FE4;
L_08916FE4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08916FC0;
      }
      goto L_08916FF0;
    }
L_08916FF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891702C;
      }
      goto L_08916FF8;
    }
L_08916FF8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08916FFC;
L_08916FFC:
    ctx.set_gpr(2, ctx.gpr[18] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(18, ctx.gpr[18] >> 7u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917020;
      }
      goto L_08917010;
    }
L_08917010:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08917020;
L_08917020:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08916FFC;
      }
      goto L_0891702C;
    }
L_0891702C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08917048;
      }
      goto L_08917038;
    }
L_08917038:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917050;
      }
      goto L_08917048;
    }
L_08917048:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08917050;
L_08917050:
    ctx.set_gpr(2, ctx.gpr[4] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 7u));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08917098;
      }
      goto L_08917064;
    }
L_08917064:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[4] & 64u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089170B4;
      }
      goto L_08917078;
    }
L_08917078:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089170B4;
      }
      goto L_08917098;
    }
L_08917098:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917050;
      }
      goto L_089170B4;
    }
L_089170B4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08917148;
      }
      goto L_089170C4;
    }
L_089170C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089170D8;
      }
      goto L_089170CC;
    }
L_089170CC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089170E0;
      }
      goto L_089170D8;
    }
L_089170D8:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_089170E0;
L_089170E0:
    ctx.set_gpr(2, ctx.gpr[17] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 7u));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08917128;
      }
      goto L_089170F4;
    }
L_089170F4:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[4] & 64u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08917144;
      }
      goto L_08917108;
    }
L_08917108:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917144;
      }
      goto L_08917128;
    }
L_08917128:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089170E0;
      }
      goto L_08917144;
    }
L_08917144:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08917148;
L_08917148:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089171D8;
      }
      goto L_08917154;
    }
L_08917154:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08917168;
      }
      goto L_0891715C;
    }
L_0891715C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917170;
      }
      goto L_08917168;
    }
L_08917168:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08917170;
L_08917170:
    ctx.set_gpr(2, ctx.gpr[21] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(21, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 7u));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089171B8;
      }
      goto L_08917184;
    }
L_08917184:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[4] & 64u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089171D4;
      }
      goto L_08917198;
    }
L_08917198:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089171D4;
      }
      goto L_089171B8;
    }
L_089171B8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917170;
      }
      goto L_089171D4;
    }
L_089171D4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089171D8;
L_089171D8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08917268;
      }
      goto L_089171E4;
    }
L_089171E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089171F8;
      }
      goto L_089171EC;
    }
L_089171EC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917200;
      }
      goto L_089171F8;
    }
L_089171F8:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08917200;
L_08917200:
    ctx.set_gpr(2, ctx.gpr[30] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(30, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 7u));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08917248;
      }
      goto L_08917214;
    }
L_08917214:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[4] & 64u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08917264;
      }
      goto L_08917228;
    }
L_08917228:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917264;
      }
      goto L_08917248;
    }
L_08917248:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917200;
      }
      goto L_08917264;
    }
L_08917264:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08917268;
L_08917268:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089172F8;
      }
      goto L_08917274;
    }
L_08917274:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08917288;
      }
      goto L_0891727C;
    }
L_0891727C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917290;
      }
      goto L_08917288;
    }
L_08917288:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08917290;
L_08917290:
    ctx.set_gpr(2, ctx.gpr[22] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(22, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 7u));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089172D8;
      }
      goto L_089172A4;
    }
L_089172A4:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[4] & 64u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089172F4;
      }
      goto L_089172B8;
    }
L_089172B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089172F4;
      }
      goto L_089172D8;
    }
L_089172D8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917290;
      }
      goto L_089172F4;
    }
L_089172F4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089172F8;
L_089172F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] & 256u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089173A0;
      }
      goto L_0891730C;
    }
L_0891730C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(9260)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089173A0;
      }
      goto L_0891731C;
    }
L_0891731C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08917330;
      }
      goto L_08917324;
    }
L_08917324:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917338;
      }
      goto L_08917330;
    }
L_08917330:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08917338;
L_08917338:
    ctx.set_gpr(2, ctx.gpr[4] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 7u));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08917380;
      }
      goto L_0891734C;
    }
L_0891734C:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[4] & 64u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891739C;
      }
      goto L_08917360;
    }
L_08917360:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891739C;
      }
      goto L_08917380;
    }
L_08917380:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917338;
      }
      goto L_0891739C;
    }
L_0891739C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089173A0;
L_089173A0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08917474;
      }
      goto L_089173B0;
    }
L_089173B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089173C4;
      }
      goto L_089173B8;
    }
L_089173B8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089173CC;
      }
      goto L_089173C4;
    }
L_089173C4:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_089173CC;
L_089173CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 7u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08917420;
      }
      goto L_089173EC;
    }
L_089173EC:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[4] & 64u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891743C;
      }
      goto L_08917400;
    }
L_08917400:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891743C;
      }
      goto L_08917420;
    }
L_08917420:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089173CC;
      }
      goto L_0891743C;
    }
L_0891743C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08917444;
L_08917444:
    ctx.set_gpr(2, ctx.gpr[4] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] >> 7u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917468;
      }
      goto L_08917458;
    }
L_08917458:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08917468;
L_08917468:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08917444;
      }
      goto L_08917474;
    }
L_08917474:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08917514;
      }
      goto L_08917484;
    }
L_08917484:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08917498;
      }
      goto L_0891748C;
    }
L_0891748C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089174A0;
      }
      goto L_08917498;
    }
L_08917498:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_089174A0;
L_089174A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 7u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089174F4;
      }
      goto L_089174C0;
    }
L_089174C0:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[4] & 64u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08917510;
      }
      goto L_089174D4;
    }
L_089174D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917510;
      }
      goto L_089174F4;
    }
L_089174F4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089174A0;
      }
      goto L_08917510;
    }
L_08917510:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08917514;
L_08917514:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089175A4;
      }
      goto L_08917520;
    }
L_08917520:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08917534;
      }
      goto L_08917528;
    }
L_08917528:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891753C;
      }
      goto L_08917534;
    }
L_08917534:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0891753C;
L_0891753C:
    ctx.set_gpr(2, ctx.gpr[23] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(23, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 7u));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08917584;
      }
      goto L_08917550;
    }
L_08917550:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[4] & 64u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089175A0;
      }
      goto L_08917564;
    }
L_08917564:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089175A0;
      }
      goto L_08917584;
    }
L_08917584:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891753C;
      }
      goto L_089175A0;
    }
L_089175A0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089175A4;
L_089175A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] & 32768u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089177FC;
      }
      goto L_089175B8;
    }
L_089175B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089177FC;
      }
      goto L_089175C4;
    }
L_089175C4:
    ctx.set_gpr(2, ctx.gpr[4] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] >> 7u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089175E8;
      }
      goto L_089175D8;
    }
L_089175D8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089175E8;
L_089175E8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089175C4;
      }
      goto L_089175F4;
    }
L_089175F4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08917604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 17u, 0x0891C184u>(ctx, &aot_mem) && ctx.pc == 0x08917604u) goto L_08917604;
    return;
L_08917604:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08917724;
      }
      goto L_08917614;
    }
L_08917614:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089176DC;
      }
      goto L_08917620;
    }
L_08917620:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891763C;
      }
      goto L_0891762C;
    }
L_0891762C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089177E8;
      }
      goto L_08917634;
    }
L_08917634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089177E8;
      }
      goto L_0891763C;
    }
L_0891763C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x0891764Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 21u, 0x0891C1B4u>(ctx, &aot_mem) && ctx.pc == 0x0891764Cu) goto L_0891764C;
    return;
L_0891764C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08917664;
      }
      goto L_08917654;
    }
L_08917654:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891766C;
      }
      goto L_08917664;
    }
L_08917664:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0891766C;
L_0891766C:
    ctx.set_gpr(3, ctx.gpr[2] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 7u));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089176B4;
      }
      goto L_08917680;
    }
L_08917680:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[4] & 64u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089176D0;
      }
      goto L_08917694;
    }
L_08917694:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089176D0;
      }
      goto L_089176B4;
    }
L_089176B4:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891766C;
      }
      goto L_089176D0;
    }
L_089176D0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089177E8;
      }
      goto L_089176DC;
    }
L_089176DC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x089176ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 28u, 0x0891C228u>(ctx, &aot_mem) && ctx.pc == 0x089176ECu) goto L_089176EC;
    return;
L_089176EC:
    ctx.set_gpr(3, ctx.gpr[2] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, ctx.gpr[2] >> 7u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917710;
      }
      goto L_08917700;
    }
L_08917700:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08917710;
L_08917710:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089176EC;
      }
      goto L_0891771C;
    }
L_0891771C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089177E8;
      }
      goto L_08917724;
    }
L_08917724:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08917734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 35u, 0x0891C29Cu>(ctx, &aot_mem) && ctx.pc == 0x08917734u) goto L_08917734;
    return;
L_08917734:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089177E8;
      }
      goto L_0891773C;
    }
L_0891773C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089177E8;
      }
      goto L_08917748;
    }
L_08917748:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08917758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 192u, 0x0895CC08u>(ctx, &aot_mem) && ctx.pc == 0x08917758u) goto L_08917758;
    return;
L_08917758:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089177E8;
      }
      goto L_08917764;
    }
L_08917764:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08917778;
      }
      goto L_0891776C;
    }
L_0891776C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917780;
      }
      goto L_08917778;
    }
L_08917778:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08917780;
L_08917780:
    ctx.set_gpr(3, ctx.gpr[2] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 7u));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089177C8;
      }
      goto L_08917794;
    }
L_08917794:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[4] & 64u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089177E4;
      }
      goto L_089177A8;
    }
L_089177A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] & 127u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089177E4;
      }
      goto L_089177C8;
    }
L_089177C8:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917780;
      }
      goto L_089177E4;
    }
L_089177E4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089177E8;
L_089177E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089175F4;
      }
      goto L_089177FC;
    }
L_089177FC:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(236));
    ctx.set_gpr(16, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[16]))));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(237), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891784C;
      }
      goto L_0891782C;
    }
L_0891782C:
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891784C;
      }
      goto L_08917840;
    }
L_08917840:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0891784Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0891784Cu) goto L_0891784C;
    return;
L_0891784C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(236));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08917864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 820u, 0x0890FD44u>(ctx, &aot_mem) && ctx.pc == 0x08917864u) goto L_08917864;
    return;
L_08917864:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891789C;
      }
      goto L_0891788C;
    }
L_0891788C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891789Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891789Cu) goto L_0891789C;
    return;
L_0891789C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917930;
      }
      goto L_089178AC;
    }
L_089178AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089178C8;
      }
      goto L_089178BC;
    }
L_089178BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08917930;
      }
      goto L_089178C8;
    }
L_089178C8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089178D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1007u, 0x0891BF20u>(ctx, &aot_mem) && ctx.pc == 0x089178D8u) goto L_089178D8;
    return;
L_089178D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089178F8;
      }
      goto L_089178E8;
    }
L_089178E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917900;
      }
      goto L_089178F8;
    }
L_089178F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    goto L_08917900;
L_08917900:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08917920u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08917920u) goto L_08917920;
    return;
L_08917920:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08917930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08917930u) goto L_08917930;
    return;
L_08917930:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08917934;
L_08917934:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08917968:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089179A8;
      }
      goto L_0891799C;
    }
L_0891799C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089179AC;
      }
      goto L_089179A8;
    }
L_089179A8:
    ctx.set_gpr(4, 0u + 0u);
    goto L_089179AC;
L_089179AC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089179CC;
      }
      goto L_089179B8;
    }
L_089179B8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089179CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089179CCu) goto L_089179CC;
    return;
L_089179CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089179E8;
      }
      goto L_089179D4;
    }
L_089179D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08917A10;
      }
      goto L_089179E8;
    }
L_089179E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917A04;
      }
      goto L_089179F4;
    }
L_089179F4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08917A04u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08917A04u) goto L_08917A04;
    return;
L_08917A04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 117u, 0x089185D4u>(ctx, &aot_mem); return;
      }
      goto L_08917A10;
    }
L_08917A10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08917A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 8u, 0x0891C110u>(ctx, &aot_mem) && ctx.pc == 0x08917A28u) goto L_08917A28;
    return;
L_08917A28:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08917A30;
L_08917A30:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917A5C;
      }
      goto L_08917A50;
    }
L_08917A50:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917A30;
      }
      goto L_08917A5C;
    }
L_08917A5C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08917A94;
      }
      goto L_08917A6C;
    }
L_08917A6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917A88;
      }
      goto L_08917A78;
    }
L_08917A78:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08917A88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08917A88u) goto L_08917A88;
    return;
L_08917A88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 117u, 0x089185D4u>(ctx, &aot_mem); return;
      }
      goto L_08917A94;
    }
L_08917A94:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12984)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917AD4;
      }
      goto L_08917AAC;
    }
L_08917AAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917AC8;
      }
      goto L_08917AB8;
    }
L_08917AB8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08917AC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08917AC8u) goto L_08917AC8;
    return;
L_08917AC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 117u, 0x089185D4u>(ctx, &aot_mem); return;
      }
      goto L_08917AD4;
    }
L_08917AD4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08917AE0;
L_08917AE0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(17, ctx.gpr[17] | ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917B0C;
      }
      goto L_08917B00;
    }
L_08917B00:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917AE0;
      }
      goto L_08917B0C;
    }
L_08917B0C:
    ctx.set_gpr(2, ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917C38;
      }
      goto L_08917B18;
    }
L_08917B18:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08917B60;
L_08917B60:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08917BB0;
      }
      goto L_08917B7C;
    }
L_08917B7C:
    ctx.set_gpr(2, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917BC0;
      }
      goto L_08917B88;
    }
L_08917B88:
    ctx.set_gpr(3, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917B98;
      }
      goto L_08917B94;
    }
L_08917B94:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_08917B98;
L_08917B98:
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917B94;
      }
      goto L_08917BA4;
    }
L_08917BA4:
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917BC0;
      }
      goto L_08917BB0;
    }
L_08917BB0:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917B60;
      }
      goto L_08917BC0;
    }
L_08917BC0:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08917BD0;
L_08917BD0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08917C20;
      }
      goto L_08917BEC;
    }
L_08917BEC:
    ctx.set_gpr(2, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917C30;
      }
      goto L_08917BF8;
    }
L_08917BF8:
    ctx.set_gpr(3, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917C08;
      }
      goto L_08917C04;
    }
L_08917C04:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_08917C08;
L_08917C08:
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917C04;
      }
      goto L_08917C14;
    }
L_08917C14:
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917C30;
      }
      goto L_08917C20;
    }
L_08917C20:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917BD0;
      }
      goto L_08917C30;
    }
L_08917C30:
    ctx.set_gpr(19, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    goto L_08917C38;
L_08917C38:
    ctx.set_gpr(2, ctx.gpr[17] & 512u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917C7C;
      }
      goto L_08917C44;
    }
L_08917C44:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08917C4C;
L_08917C4C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917C78;
      }
      goto L_08917C6C;
    }
L_08917C6C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917C4C;
      }
      goto L_08917C78;
    }
L_08917C78:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    goto L_08917C7C;
L_08917C7C:
    ctx.set_gpr(2, ctx.gpr[17] & 1024u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917CF8;
      }
      goto L_08917C88;
    }
L_08917C88:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08917C90;
L_08917C90:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08917CE0;
      }
      goto L_08917CAC;
    }
L_08917CAC:
    ctx.set_gpr(2, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917CF0;
      }
      goto L_08917CB8;
    }
L_08917CB8:
    ctx.set_gpr(3, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917CC8;
      }
      goto L_08917CC4;
    }
L_08917CC4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_08917CC8;
L_08917CC8:
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917CC4;
      }
      goto L_08917CD4;
    }
L_08917CD4:
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917CF0;
      }
      goto L_08917CE0;
    }
L_08917CE0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917C90;
      }
      goto L_08917CF0;
    }
L_08917CF0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    goto L_08917CF8;
L_08917CF8:
    ctx.set_gpr(2, ctx.gpr[17] & 2048u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917D84;
      }
      goto L_08917D04;
    }
L_08917D04:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08917D0C;
L_08917D0C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08917D5C;
      }
      goto L_08917D28;
    }
L_08917D28:
    ctx.set_gpr(2, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917D6C;
      }
      goto L_08917D34;
    }
L_08917D34:
    ctx.set_gpr(3, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917D44;
      }
      goto L_08917D40;
    }
L_08917D40:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_08917D44;
L_08917D44:
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917D40;
      }
      goto L_08917D50;
    }
L_08917D50:
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917D6C;
      }
      goto L_08917D5C;
    }
L_08917D5C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917D0C;
      }
      goto L_08917D6C;
    }
L_08917D6C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08917D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0895CACCu>(ctx, &aot_mem) && ctx.pc == 0x08917D80u) goto L_08917D80;
    return;
L_08917D80:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    goto L_08917D84;
L_08917D84:
    ctx.set_gpr(2, ctx.gpr[17] & 4096u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917DC8;
      }
      goto L_08917D90;
    }
L_08917D90:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08917D98;
L_08917D98:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917DC4;
      }
      goto L_08917DB8;
    }
L_08917DB8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917D98;
      }
      goto L_08917DC4;
    }
L_08917DC4:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_08917DC8;
L_08917DC8:
    ctx.set_gpr(2, ctx.gpr[17] & 8192u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917E44;
      }
      goto L_08917DD4;
    }
L_08917DD4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08917DDC;
L_08917DDC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08917E2C;
      }
      goto L_08917DF8;
    }
L_08917DF8:
    ctx.set_gpr(2, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917E3C;
      }
      goto L_08917E04;
    }
L_08917E04:
    ctx.set_gpr(3, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917E14;
      }
      goto L_08917E10;
    }
L_08917E10:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_08917E14;
L_08917E14:
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917E10;
      }
      goto L_08917E20;
    }
L_08917E20:
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917E3C;
      }
      goto L_08917E2C;
    }
L_08917E2C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917DDC;
      }
      goto L_08917E3C;
    }
L_08917E3C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    goto L_08917E44;
L_08917E44:
    ctx.set_gpr(2, ctx.gpr[17] & 16384u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917ED0;
      }
      goto L_08917E50;
    }
L_08917E50:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08917E58;
L_08917E58:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08917EA8;
      }
      goto L_08917E74;
    }
L_08917E74:
    ctx.set_gpr(2, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917EB8;
      }
      goto L_08917E80;
    }
L_08917E80:
    ctx.set_gpr(3, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917E90;
      }
      goto L_08917E8C;
    }
L_08917E8C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_08917E90;
L_08917E90:
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917E8C;
      }
      goto L_08917E9C;
    }
L_08917E9C:
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917EB8;
      }
      goto L_08917EA8;
    }
L_08917EA8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917E58;
      }
      goto L_08917EB8;
    }
L_08917EB8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08917ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0895CACCu>(ctx, &aot_mem) && ctx.pc == 0x08917ECCu) goto L_08917ECC;
    return;
L_08917ECC:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_08917ED0;
L_08917ED0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08917ED8;
L_08917ED8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08917F28;
      }
      goto L_08917EF4;
    }
L_08917EF4:
    ctx.set_gpr(2, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917F38;
      }
      goto L_08917F00;
    }
L_08917F00:
    ctx.set_gpr(3, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917F10;
      }
      goto L_08917F0C;
    }
L_08917F0C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_08917F10;
L_08917F10:
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917F0C;
      }
      goto L_08917F1C;
    }
L_08917F1C:
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917F38;
      }
      goto L_08917F28;
    }
L_08917F28:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917ED8;
      }
      goto L_08917F38;
    }
L_08917F38:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[17] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917FC8;
      }
      goto L_08917F4C;
    }
L_08917F4C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08917F54;
L_08917F54:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08917FA4;
      }
      goto L_08917F70;
    }
L_08917F70:
    ctx.set_gpr(2, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917FB4;
      }
      goto L_08917F7C;
    }
L_08917F7C:
    ctx.set_gpr(3, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917F8C;
      }
      goto L_08917F88;
    }
L_08917F88:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_08917F8C;
L_08917F8C:
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917F88;
      }
      goto L_08917F98;
    }
L_08917F98:
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917FB4;
      }
      goto L_08917FA4;
    }
L_08917FA4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917F54;
      }
      goto L_08917FB4;
    }
L_08917FB4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08917FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0895CACCu>(ctx, &aot_mem) && ctx.pc == 0x08917FC4u) goto L_08917FC4;
    return;
L_08917FC4:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_08917FC8;
L_08917FC8:
    ctx.set_gpr(2, ctx.gpr[17] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 8u, 0x08918050u>(ctx, &aot_mem); return;
      }
      goto L_08917FD4;
    }
L_08917FD4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08917FDC;
L_08917FDC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 127u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 5u, 0x0891802Cu>(ctx, &aot_mem); return;
      }
      goto L_08917FF8;
    }
L_08917FF8:
    ctx.set_gpr(2, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 6u, 0x0891803Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1u, 0x08918004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0068(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0068_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_68(Runtime &runtime) {
    runtime.register_generated_unit(68u, 0x08914000u, 16384u, &recomp_unit_0068, &recomp_unit_0068_entry);
    runtime.register_function(0x08914000u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891400Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914028u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914038u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914040u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914054u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914060u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891406Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914074u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914084u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914088u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089140A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089140A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089140B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089140E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089140F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914100u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891410Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914118u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914128u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914138u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914144u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914150u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914158u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914164u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891416Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914178u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914188u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914190u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914204u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891420Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891421Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914228u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914230u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914238u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891424Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914270u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914278u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914280u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914288u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914298u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891429Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089142A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089142B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089142BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089142C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089142E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089142E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089142F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914300u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914310u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891431Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914324u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914334u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914340u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891434Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914354u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914360u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914368u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891436Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914390u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089143C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089143DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089143E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089143F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089143F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089143FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914414u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914424u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914438u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914440u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891444Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914458u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914464u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891446Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891447Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914488u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914498u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891449Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089144A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089144B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089144B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089144C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089144D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089144DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089144ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914508u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891450Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914514u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914520u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914544u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914548u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891455Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914584u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089145B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089145C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089145D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089145F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089145F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914614u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914628u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914630u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891463Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914644u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914654u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914658u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914668u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914674u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891467Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089146A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089146CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089146DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089146E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089146ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089146F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914700u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914710u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914720u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914728u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914734u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891473Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914748u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914758u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891475Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914764u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891476Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914780u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891478Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891479Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914800u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891481Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914834u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914848u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914854u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914860u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914870u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914878u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891488Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914900u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914928u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914940u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891494Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914958u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914970u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891497Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891498Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891499Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A0Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A18u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A40u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A4Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A5Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A70u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914AB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914AD0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914ADCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914AE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B38u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B68u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B9Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914BACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914BB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914BC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914BD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914BE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914BF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C18u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C38u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C40u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C50u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C5Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C70u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C7Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C84u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CCCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CE0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D0Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D50u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D5Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D74u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D84u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DCCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DE0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DF0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E50u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E64u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E70u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E7Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914EB4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914EBCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914EC4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914EE0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914EE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914EF0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F4Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F64u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F8Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F94u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FA0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FB4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FCCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FE0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FFCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915008u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915010u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915014u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891502Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915058u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915064u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915074u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915080u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915090u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915108u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915110u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891511Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915124u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915130u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915148u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915150u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915158u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915168u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915174u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915188u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915194u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891519Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915204u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891520Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915218u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915224u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915230u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915244u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891524Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915260u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891526Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915274u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915280u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915288u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915294u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915300u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915314u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915320u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915338u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915340u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891534Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915358u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915368u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915380u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891538Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915398u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915424u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915430u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891543Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915448u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915450u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915470u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891547Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915488u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915508u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915514u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891552Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915538u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915544u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891555Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915568u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915578u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915584u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915598u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915604u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891560Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915618u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915630u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915640u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915648u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915650u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915668u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891566Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915670u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915690u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915710u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915720u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915730u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891573Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915740u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915758u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915764u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915770u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915778u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915780u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915790u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915800u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915810u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915814u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891581Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891582Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915830u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915838u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891583Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915844u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915850u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891585Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915864u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891586Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915884u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891589Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089158A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089158A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089158D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089158F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915910u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915924u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891593Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891594Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915978u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915984u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915990u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089159ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089159B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089159C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089159D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089159E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089159F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089159FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A70u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A9Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915AA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915AC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915AD8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915AFCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B38u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B64u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B70u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BC4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BCCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C40u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C60u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C68u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C8Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C94u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CCCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D38u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D40u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D4Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D68u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D74u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D9Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915DA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915DB0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915DC4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915DD0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915DDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E0Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E50u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E60u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E68u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E7Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E9Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915EA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915EB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915EC4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915ECCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915EE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915EF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F40u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F50u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F64u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F84u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F94u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F9Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FB0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FC4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FCCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FD0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916000u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891601Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891602Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916044u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916064u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916074u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916080u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916090u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089160A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089160ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089160BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089160CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089160D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089160E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089160F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916104u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916114u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916124u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916130u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916140u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916150u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891615Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916170u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916178u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916188u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916198u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089161A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089161C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089161D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089161F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089161F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916210u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916220u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916234u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916258u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916270u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891627Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916288u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916294u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089162A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089162ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089162C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089162C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089162D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089162E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089162F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916300u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916310u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916320u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891632Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891633Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891634Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916360u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891637Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916388u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891638Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916398u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089163ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089163BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089163C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089163D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089163E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089163ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089163F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916408u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916414u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916424u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916440u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891644Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891645Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916470u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089164C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089164D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089164E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089164FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916518u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916524u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916540u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891654Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916564u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916570u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891657Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916588u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891658Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916598u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089165ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089165C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089165CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089165DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089165E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891662Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916640u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916650u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891665Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916670u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891667Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916688u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916694u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916698u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089166ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089166B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089166C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089166D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089166DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089166E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089166F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916700u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891670Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916718u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891671Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916730u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891673Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916748u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916754u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916758u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891676Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916778u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916784u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916790u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916794u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089167A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089167B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089167C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089167CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089167D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089167E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089167F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916818u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916830u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916840u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916844u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916850u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916854u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916860u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916864u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916870u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916874u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916880u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916884u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916898u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916900u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891690Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916910u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916920u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891693Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916954u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916960u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916978u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916984u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089169A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089169A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089169B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089169CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089169D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089169D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089169ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089169FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A38u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A54u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A94u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916AA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916AB4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916ABCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916AD0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916AE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B40u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B5Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B70u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BCCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C2Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C54u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C60u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C9Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916CA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916CB0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916CC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916CC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916CDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916CF0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D2Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D50u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916DA0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916DBCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916DC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916DD8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916DDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916DE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916DECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916DF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E24u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E38u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E54u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E60u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E74u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E84u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E9Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916EA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916EB4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916EBCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916ED0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916EE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F24u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F38u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F4Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F60u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F74u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F94u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FB0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FBCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FF0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FFCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917010u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917020u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891702Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917038u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917048u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917050u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917064u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917078u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917098u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089170B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089170C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089170CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089170D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089170E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089170F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917108u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917128u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917144u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917148u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917154u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891715Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917168u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917170u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917184u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917198u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917200u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917214u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917228u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917248u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917264u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917268u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917274u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891727Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917288u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917290u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089172A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089172B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089172D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089172F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089172F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891730Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891731Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917324u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917330u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917338u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891734Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917360u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917380u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891739Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917400u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917420u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891743Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917444u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917458u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917468u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917474u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917484u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891748Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917498u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917510u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917514u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917520u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917528u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917534u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891753Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917550u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917564u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917584u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917604u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917614u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917620u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891762Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917634u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891763Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891764Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917654u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917664u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891766Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917680u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917694u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917700u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917710u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891771Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917724u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917734u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891773Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917748u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917758u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917764u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891776Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917778u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917780u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917794u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891782Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917840u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891784Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917864u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891788Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891789Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917900u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917920u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917930u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917934u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917968u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891799Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A50u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A5Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A94u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917AACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917AB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917AC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917AD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917AE0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B0Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B18u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B60u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B7Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B94u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917BA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917BB0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917BC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917BD0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917BECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917BF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C38u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C4Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C7Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CC4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CE0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CF0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D0Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D40u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D50u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D5Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D84u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DC4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E2Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E50u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E74u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E8Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E9Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917EA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917EB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917ECCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917ED0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917ED8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917EF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F0Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F38u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F4Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F54u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F70u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F7Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F8Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FB4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FC4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FF8u, &recomp_unit_0068, "recomp_unit_0068");
}
} // namespace psprecomp
