#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0168[4086] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 5, 0, 6, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 9, 10, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 20,
    0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 37,
    0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 46,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 53, 0, 54, 0, 55, 0, 0, 56, 0, 0, 57, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 62, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 69, 0, 0, 0, 70, 71, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0, 76, 0, 0, 77, 0, 78, 0, 79, 0,
    0, 80, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 88, 89, 0, 90,
    0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 93, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 99,
    0, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 107, 0, 108, 109, 0, 0, 0,
    0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 124, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 127,
    128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 133, 134, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 137,
    0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 143, 0, 144, 0,
    0, 145, 146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 153,
    0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159,
    0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0,
    0, 0, 168, 0, 0, 169, 0, 170, 0, 171, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 177, 178, 0, 0, 0,
    179, 0, 180, 0, 0, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 189, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 194, 0, 195, 0, 0, 196, 0,
    0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 203, 0, 0, 0, 0, 204, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 211, 0,
    212, 0, 0, 213, 0, 0, 214, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 220, 0, 0,
    0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    227, 228, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 0, 233, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0,
    0, 0, 237, 0, 0, 238, 0, 239, 240, 0, 0, 241, 0, 242, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0,
    247, 0, 0, 248, 0, 249, 250, 0, 0, 251, 0, 252, 0, 0, 253, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0,
    258, 0, 259, 260, 0, 0, 261, 0, 262, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0,
    269, 270, 0, 271, 0, 0, 0, 272, 0, 273, 0, 0, 274, 0, 275, 0, 0, 0, 276, 277, 0, 0, 278, 0, 279, 0, 0, 280, 0, 281, 0, 0,
    0, 282, 283, 0, 0, 284, 0, 285, 0, 0, 286, 0, 287, 0, 0, 0, 288, 289, 0, 0, 290, 0, 291, 0, 0, 292, 0, 293, 0, 0, 0, 294,
    295, 0, 296, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 301, 302, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0,
    305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 313,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0,
    0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 326, 0, 327, 0, 0,
    0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 331, 0, 0, 0, 332, 0, 0, 333, 0, 0, 334, 0, 335, 336, 0,
    337, 0, 0, 338, 0, 339, 0, 340, 0, 0, 0, 0, 341, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 346, 347,
    0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 355, 0,
    0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 362, 0, 0, 0,
    0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 369, 0, 370, 0, 371,
    0, 0, 372, 0, 373, 0, 374, 0, 0, 375, 0, 376, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0,
    381, 0, 382, 0, 0, 0, 0, 383, 0, 0, 384, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0,
    0, 0, 389, 0, 0, 390, 0, 391, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 395, 0, 396, 0, 0, 0, 397, 0, 0, 398, 0, 399,
    0, 400, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0,
    0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 409, 0, 410, 0, 0, 0, 0, 411, 0, 412, 0, 0, 0, 0, 413, 0, 0, 414, 0, 415,
    0, 416, 0, 0, 417, 0, 418, 0, 0, 419, 0, 420, 0, 0, 421, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 426,
    0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0,
    435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 442, 0, 0, 443,
    0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 449, 0, 0, 0, 0, 450, 0, 0, 0,
    0, 0, 451, 0, 0, 0, 0, 452, 0, 453, 0, 454, 0, 0, 455, 0, 0, 456, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0,
    0, 0, 460, 0, 0, 0, 0, 0, 461, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0,
    0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 470, 0, 471, 0, 0, 472, 0, 0, 473, 0, 474, 0, 0, 0, 475, 0, 0, 0,
    476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 483,
    0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 487, 0, 0, 0, 0, 488, 0, 0, 0, 489, 490, 0, 491, 0, 0,
    0, 0, 492, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 495, 0, 0, 496, 497, 0, 498, 0, 0, 0, 0, 0, 499, 0, 500, 0, 501, 0, 0,
    0, 0, 502, 503, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0,
    0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0,
    0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523, 524,
    0, 525, 0, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 530, 0, 531, 0, 532, 0, 0, 0, 0, 533, 0,
    534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0,
    541, 0, 0, 542, 0, 543, 0, 544, 0, 0, 545, 0, 546, 0, 547, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 550, 0, 0, 0, 0, 0, 551,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 555, 556, 0, 0, 557, 0, 0, 0, 0, 0,
    558, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 563, 0, 0, 0,
    0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 570, 0, 0, 571,
    572, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 577, 0, 578, 579, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 583, 0, 584, 0, 585, 586, 0, 0, 0, 0, 0, 0, 587,
    0, 0, 588, 0, 0, 589, 0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 594, 0, 0, 0, 0, 0, 0,
    0, 595, 596, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 600, 601, 0, 602, 0, 603, 0, 0, 0,
    0, 604, 0, 0, 0, 0, 0, 605, 0, 606, 0, 607, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 0, 0,
    612, 613, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 620, 0, 0, 0,
    0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 625, 0, 626, 0, 0, 0, 0, 627, 0, 628, 0, 629, 0, 0,
    0, 0, 630, 631, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 0, 635, 636, 0, 0, 0, 0, 637, 0, 0, 0,
    0, 638, 0, 639, 0, 640, 0, 641, 0, 0, 0, 0, 0, 0, 642, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0,
    646, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 650, 0, 0,
    0, 651, 0, 0, 0, 0, 652, 0, 0, 653, 0, 0, 654, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 0, 657, 0, 0, 658, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 659, 0, 660, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 663, 0, 0, 664, 0, 0, 665, 0, 666, 0, 667,
    0, 0, 668, 0, 0, 669, 670, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 0, 673, 0, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0,
    0, 676, 677, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 680, 0, 0, 0, 681, 682, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0,
    0, 685, 686, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 689, 0, 0, 690, 691, 0, 0, 0, 0, 0, 692, 0, 693, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 695, 0, 0, 696, 0, 0, 697, 698, 0, 699, 0, 0, 0, 700, 0, 0, 701, 0, 0, 702, 0, 0,
    0, 703, 0, 704, 0, 0, 0, 705, 0, 706, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0, 709, 710, 0, 0, 0, 0, 711, 0, 0, 712, 0, 713,
    0, 714, 0, 0, 715, 0, 0, 0, 716, 0, 717, 0, 0, 0, 718, 0, 719, 0, 720, 0, 0, 0, 721, 0, 0, 0, 0, 722, 723, 0, 0, 0,
    0, 724, 0, 0, 725, 0, 726, 0, 727, 0, 0, 728, 0, 0, 0, 729, 0, 730, 0, 0, 0, 731, 0, 732, 0, 733, 0, 0, 0, 734, 0, 0,
    0, 0, 735, 736, 0, 0, 0, 0, 737, 0, 0, 738, 739, 0, 740, 0, 0, 741, 0, 742, 0, 0, 743, 0, 0, 744, 745, 0, 746, 0, 0, 747,
    0, 0, 748, 0, 0, 0, 749, 0, 750, 751, 0, 752, 0, 753, 0, 0, 0, 754, 0, 0, 755, 0, 756, 0, 757, 0, 0, 758, 0, 0, 0, 759,
    0, 760, 761, 0, 762, 0, 763, 0, 0, 0, 764, 0, 0, 765, 0, 766, 0, 767, 0, 0, 768, 0, 0, 0, 769, 0, 770, 771, 0, 772, 0, 773,
    0, 0, 0, 774, 0, 0, 775, 776, 0, 777, 0, 0, 778, 779, 0, 780, 0, 0, 781, 0, 782, 0, 0, 0, 783, 784, 0, 785, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 788, 789, 0, 790, 0, 791, 0, 0, 0,
    792, 0, 793, 0, 0, 0, 794, 0, 0, 795, 0, 796, 797, 0, 798, 0, 799, 0, 0, 0, 800, 0, 0, 0, 0, 0, 801, 0, 0, 0, 802, 0,
    803, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 806, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 809,
    0, 810, 0, 0, 0, 0, 811, 812, 0, 813, 0, 0, 814, 0, 0, 0, 815, 0, 816, 0, 0, 0, 0, 0, 817, 0, 818, 0, 0, 819, 0, 820,
    0, 0, 821, 0, 0, 0, 822, 0, 823, 0, 0, 0, 0, 0, 824, 825, 0, 0, 0, 0, 826, 0, 0, 827, 828, 0, 829, 0, 0, 830, 0, 0,
    0, 831, 0, 832, 0, 0, 0, 0, 0, 0, 0, 833, 0, 834, 0, 0, 835, 0, 836, 0, 0, 837, 0, 0, 0, 838, 0, 839, 0, 0, 0, 0,
    0, 840, 841, 0, 0, 0, 0, 842, 0, 0, 843, 844, 0, 845, 0, 0, 846, 0, 0, 0, 847, 0, 848, 0, 0, 0, 0, 0, 849, 0, 850, 0,
    0, 851, 0, 852, 0, 0, 853, 0, 0, 0, 854, 0, 855, 0, 0, 0, 0, 0, 856, 857, 0, 0, 0, 0, 858, 0, 0, 859, 0, 0, 0, 0,
    0, 860, 0, 861, 0, 0, 0, 862, 0, 0, 863, 0, 0, 0, 864, 0, 0, 865, 0, 0, 0, 866, 0, 867, 0, 0, 0, 0, 0, 868, 0, 869,
    0, 0, 870, 0, 871, 0, 0, 872, 0, 0, 0, 873, 0, 874, 0, 0, 0, 0, 0, 875, 876, 0, 0, 0, 0, 877, 0, 0, 878, 879, 0, 880,
    0, 0, 881, 0, 0, 0, 882, 0, 883, 0, 0, 0, 0, 0, 0, 0, 884, 0, 885, 0, 0, 886, 0, 887, 0, 0, 888, 0, 0, 0, 889, 0,
    890, 0, 0, 0, 0, 0, 891, 892, 0, 0, 0, 0, 893, 0, 0, 894, 895, 0, 896, 0, 0, 897, 0, 0, 0, 898, 0, 899, 0, 0, 0, 0,
    900, 0, 901, 0, 0, 902, 0, 903, 0, 0, 904, 0, 0, 0, 905, 0, 906, 0, 0, 0, 0, 0, 907, 908, 0, 0, 0, 0, 909, 0, 0, 910,
    911, 0, 912, 0, 0, 913, 914, 0, 0, 0, 0, 0, 0, 0, 0, 0, 915, 0, 0, 0, 0, 916, 0, 0, 0, 0, 0, 0, 0, 0, 917, 0,
    918, 0, 0, 0, 0, 919, 0, 0, 0, 0, 0, 920, 0, 0, 0, 0, 921, 0, 0, 0, 922, 0, 0, 923, 0, 924, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 925, 0, 926, 0, 0, 0, 927, 0, 0, 928, 0, 929, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    930, 0, 931, 0, 0, 0, 932, 0, 0, 933, 0, 934, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 935, 0, 936, 0, 0, 0, 0,
    0, 0, 0, 937, 0, 938, 0, 0, 0, 0, 0, 0, 0, 939, 0, 940, 0, 0, 0, 0, 0, 0, 0, 941, 0, 942, 0, 0, 0, 0, 943, 0,
    944, 0, 0, 0, 0, 945, 0, 946, 0, 0, 0, 0, 947, 0, 948, 0, 0, 0, 0, 0, 0, 0, 0, 0, 949, 0, 950, 0, 0, 0, 0, 951,
    0, 952, 0, 953, 0, 0, 0, 0, 0, 954, 0, 955, 0, 0, 0, 0, 0, 956, 0, 957, 0, 0, 0, 0, 958, 0, 959, 0, 960, 0, 961, 0,
    0, 0, 0, 0, 962, 0, 963, 0, 0, 0, 0, 0, 0, 0, 0, 964, 0, 965, 0, 0, 0, 0, 0, 0, 0, 0, 966, 0, 967, 0, 0, 0,
    0, 0, 0, 0, 0, 968, 0, 969, 0, 970, 0, 0, 0, 0, 0, 971, 0, 972, 0, 0, 0, 0, 0, 0, 0, 0, 973, 0, 974, 0, 0, 0,
    0, 0, 0, 0, 0, 975, 0, 976, 0, 0, 0, 0, 0, 0, 0, 0, 977, 978, 0, 0, 979, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    980, 0, 981, 0, 0, 0, 982, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 983, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 984, 0,
    985, 0, 0, 986, 0, 0, 987, 0, 0, 988, 989, 0, 0, 990, 0, 0, 991, 0, 0, 0, 0, 0, 992, 0, 993, 0, 994, 0, 0, 995, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 996, 0, 997, 998, 0, 0, 0, 0, 999, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000, 0, 0, 1001, 0, 0, 1002,
    0, 0, 1003, 0, 1004, 0, 1005, 0, 1006, 0, 0, 0, 0, 0, 0, 0, 0, 1007, 0, 1008, 0, 0, 0, 0, 0, 0, 0, 0, 1009, 0, 1010, 0,
    0, 0, 0, 0, 0, 0, 0, 1011, 1012, 1013, 0, 0, 0, 1014, 0, 0, 0, 0, 1015, 0, 0, 1016, 0, 0, 0, 0, 1017, 0, 0, 1018, 0, 0,
    1019, 0, 0, 1020, 0, 0, 0, 1021, 0, 1022, 0, 1023, 0, 0, 0, 1024, 0, 1025, 0, 0, 1026, 1027, 0, 0, 1028, 0, 0, 1029, 0, 0, 1030, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1031, 0, 0, 0, 0, 0, 0, 0, 1032, 0, 0, 0, 0, 0, 0, 0, 0, 1033, 0, 0, 0, 0, 0, 1034,
    0, 0, 0, 1035, 0, 0, 0, 0, 0, 0, 1036, 0, 1037, 0, 0, 0, 0, 1038, 0, 1039, 0, 1040, 0, 0, 1041, 0, 1042, 0, 1043, 0, 0, 0,
    0, 1044, 0, 1045, 0, 1046, 0, 1047, 0, 0, 0, 0, 1048, 0, 1049, 0, 1050, 0, 0, 0, 0, 1051, 0, 1052, 0, 0, 1053, 0, 0, 1054, 0, 1055,
    0, 0, 1056, 0, 0, 0, 1057, 0, 0, 0, 0, 1058, 0, 0, 0, 1059, 0, 0, 0, 1060, 0, 0, 1061, 0, 1062, 0, 1063, 0, 0, 1064, 0, 1065,
    0, 1066, 0, 0, 1067, 0, 1068, 0, 0, 1069, 0, 1070, 0, 1071, 0, 0, 1072, 0, 0, 1073, 0, 1074, 0, 0, 0, 0, 1075, 0, 0, 1076, 0, 1077,
    0, 0, 0, 0, 1078, 0, 1079, 0, 1080, 0, 1081, 0, 0, 0, 0, 1082, 0, 1083, 0, 1084, 0, 0, 0, 0, 1085, 0, 0, 1086, 0, 1087, 0, 1088,
    0, 0, 0, 0, 1089, 0, 1090, 0, 1091, 0, 0, 0, 0, 1092, 0, 0, 1093, 0, 1094, 0, 1095, 0, 0, 0, 0, 1096, 0, 1097, 0, 1098, 0, 1099,
    0, 1100, 0, 1101, 1102, 1103, 0, 0, 0, 0, 1104, 0, 1105, 0, 0, 0, 0, 0, 0, 1106, 0, 1107,
};
void recomp_unit_0168_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AA4004u;
        entry_id = (entry_delta < 16344u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0168[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AA4004;
    case 2u: goto L_08AA4018;
    case 3u: goto L_08AA4020;
    case 4u: goto L_08AA4030;
    case 5u: goto L_08AA4034;
    case 6u: goto L_08AA403C;
    case 7u: goto L_08AA4054;
    case 8u: goto L_08AA405C;
    case 9u: goto L_08AA4074;
    case 10u: goto L_08AA4078;
    case 11u: goto L_08AA4088;
    case 12u: goto L_08AA40A0;
    case 13u: goto L_08AA40A8;
    case 14u: goto L_08AA40B0;
    case 15u: goto L_08AA40C0;
    case 16u: goto L_08AA40C8;
    case 17u: goto L_08AA40D0;
    case 18u: goto L_08AA40E4;
    case 19u: goto L_08AA40EC;
    case 20u: goto L_08AA4100;
    case 21u: goto L_08AA4108;
    case 22u: goto L_08AA411C;
    case 23u: goto L_08AA4124;
    case 24u: goto L_08AA4138;
    case 25u: goto L_08AA4140;
    case 26u: goto L_08AA414C;
    case 27u: goto L_08AA4158;
    case 28u: goto L_08AA4164;
    case 29u: goto L_08AA4174;
    case 30u: goto L_08AA4184;
    case 31u: goto L_08AA419C;
    case 32u: goto L_08AA41B4;
    case 33u: goto L_08AA41B8;
    case 34u: goto L_08AA41CC;
    case 35u: goto L_08AA41E4;
    case 36u: goto L_08AA41F8;
    case 37u: goto L_08AA4200;
    case 38u: goto L_08AA4208;
    case 39u: goto L_08AA4214;
    case 40u: goto L_08AA4220;
    case 41u: goto L_08AA422C;
    case 42u: goto L_08AA423C;
    case 43u: goto L_08AA424C;
    case 44u: goto L_08AA4264;
    case 45u: goto L_08AA427C;
    case 46u: goto L_08AA4280;
    case 47u: goto L_08AA4294;
    case 48u: goto L_08AA42AC;
    case 49u: goto L_08AA42C0;
    case 50u: goto L_08AA42C8;
    case 51u: goto L_08AA42E4;
    case 52u: goto L_08AA42FC;
    case 53u: goto L_08AA430C;
    case 54u: goto L_08AA4314;
    case 55u: goto L_08AA431C;
    case 56u: goto L_08AA4328;
    case 57u: goto L_08AA4334;
    case 58u: goto L_08AA433C;
    case 59u: goto L_08AA434C;
    case 60u: goto L_08AA435C;
    case 61u: goto L_08AA4374;
    case 62u: goto L_08AA438C;
    case 63u: goto L_08AA4390;
    case 64u: goto L_08AA43A4;
    case 65u: goto L_08AA43BC;
    case 66u: goto L_08AA43D0;
    case 67u: goto L_08AA43D8;
    case 68u: goto L_08AA43F4;
    case 69u: goto L_08AA440C;
    case 70u: goto L_08AA441C;
    case 71u: goto L_08AA4420;
    case 72u: goto L_08AA4434;
    case 73u: goto L_08AA4444;
    case 74u: goto L_08AA4450;
    case 75u: goto L_08AA4458;
    case 76u: goto L_08AA4460;
    case 77u: goto L_08AA446C;
    case 78u: goto L_08AA4474;
    case 79u: goto L_08AA447C;
    case 80u: goto L_08AA4488;
    case 81u: goto L_08AA4490;
    case 82u: goto L_08AA4498;
    case 83u: goto L_08AA44AC;
    case 84u: goto L_08AA44B4;
    case 85u: goto L_08AA44C8;
    case 86u: goto L_08AA44DC;
    case 87u: goto L_08AA44E4;
    case 88u: goto L_08AA44F4;
    case 89u: goto L_08AA44F8;
    case 90u: goto L_08AA4500;
    case 91u: goto L_08AA4518;
    case 92u: goto L_08AA4520;
    case 93u: goto L_08AA4538;
    case 94u: goto L_08AA453C;
    case 95u: goto L_08AA454C;
    case 96u: goto L_08AA4568;
    case 97u: goto L_08AA4570;
    case 98u: goto L_08AA4578;
    case 99u: goto L_08AA4580;
    case 100u: goto L_08AA458C;
    case 101u: goto L_08AA4594;
    case 102u: goto L_08AA459C;
    case 103u: goto L_08AA45B0;
    case 104u: goto L_08AA45B8;
    case 105u: goto L_08AA45CC;
    case 106u: goto L_08AA45D4;
    case 107u: goto L_08AA45E8;
    case 108u: goto L_08AA45F0;
    case 109u: goto L_08AA45F4;
    case 110u: goto L_08AA4610;
    case 111u: goto L_08AA4634;
    case 112u: goto L_08AA463C;
    case 113u: goto L_08AA464C;
    case 114u: goto L_08AA4658;
    case 115u: goto L_08AA4660;
    case 116u: goto L_08AA4668;
    case 117u: goto L_08AA4684;
    case 118u: goto L_08AA4690;
    case 119u: goto L_08AA4698;
    case 120u: goto L_08AA46A0;
    case 121u: goto L_08AA46B0;
    case 122u: goto L_08AA46BC;
    case 123u: goto L_08AA46C8;
    case 124u: goto L_08AA46D0;
    case 125u: goto L_08AA46E4;
    case 126u: goto L_08AA46EC;
    case 127u: goto L_08AA4700;
    case 128u: goto L_08AA4704;
    case 129u: goto L_08AA470C;
    case 130u: goto L_08AA4720;
    case 131u: goto L_08AA4730;
    case 132u: goto L_08AA473C;
    case 133u: goto L_08AA4750;
    case 134u: goto L_08AA4754;
    case 135u: goto L_08AA4760;
    case 136u: goto L_08AA4778;
    case 137u: goto L_08AA4780;
    case 138u: goto L_08AA4794;
    case 139u: goto L_08AA47A4;
    case 140u: goto L_08AA47B0;
    case 141u: goto L_08AA47E0;
    case 142u: goto L_08AA47EC;
    case 143u: goto L_08AA47F4;
    case 144u: goto L_08AA47FC;
    case 145u: goto L_08AA4808;
    case 146u: goto L_08AA480C;
    case 147u: goto L_08AA4818;
    case 148u: goto L_08AA4824;
    case 149u: goto L_08AA483C;
    case 150u: goto L_08AA4844;
    case 151u: goto L_08AA485C;
    case 152u: goto L_08AA4874;
    case 153u: goto L_08AA4880;
    case 154u: goto L_08AA4888;
    case 155u: goto L_08AA48A8;
    case 156u: goto L_08AA48AC;
    case 157u: goto L_08AA48E4;
    case 158u: goto L_08AA48F8;
    case 159u: goto L_08AA4900;
    case 160u: goto L_08AA4918;
    case 161u: goto L_08AA4920;
    case 162u: goto L_08AA4978;
    case 163u: goto L_08AA4984;
    case 164u: goto L_08AA498C;
    case 165u: goto L_08AA49AC;
    case 166u: goto L_08AA49E8;
    case 167u: goto L_08AA49F8;
    case 168u: goto L_08AA4A0C;
    case 169u: goto L_08AA4A18;
    case 170u: goto L_08AA4A20;
    case 171u: goto L_08AA4A28;
    case 172u: goto L_08AA4A2C;
    case 173u: goto L_08AA4A34;
    case 174u: goto L_08AA4A4C;
    case 175u: goto L_08AA4A54;
    case 176u: goto L_08AA4A5C;
    case 177u: goto L_08AA4A70;
    case 178u: goto L_08AA4A74;
    case 179u: goto L_08AA4A84;
    case 180u: goto L_08AA4A8C;
    case 181u: goto L_08AA4AA0;
    case 182u: goto L_08AA4AA8;
    case 183u: goto L_08AA4AB4;
    case 184u: goto L_08AA4AC0;
    case 185u: goto L_08AA4ACC;
    case 186u: goto L_08AA4ADC;
    case 187u: goto L_08AA4AEC;
    case 188u: goto L_08AA4B04;
    case 189u: goto L_08AA4B1C;
    case 190u: goto L_08AA4B20;
    case 191u: goto L_08AA4B34;
    case 192u: goto L_08AA4B4C;
    case 193u: goto L_08AA4B60;
    case 194u: goto L_08AA4B68;
    case 195u: goto L_08AA4B70;
    case 196u: goto L_08AA4B7C;
    case 197u: goto L_08AA4B88;
    case 198u: goto L_08AA4B94;
    case 199u: goto L_08AA4BA4;
    case 200u: goto L_08AA4BB4;
    case 201u: goto L_08AA4BCC;
    case 202u: goto L_08AA4BE4;
    case 203u: goto L_08AA4BE8;
    case 204u: goto L_08AA4BFC;
    case 205u: goto L_08AA4C14;
    case 206u: goto L_08AA4C28;
    case 207u: goto L_08AA4C30;
    case 208u: goto L_08AA4C4C;
    case 209u: goto L_08AA4C64;
    case 210u: goto L_08AA4C74;
    case 211u: goto L_08AA4C7C;
    case 212u: goto L_08AA4C84;
    case 213u: goto L_08AA4C90;
    case 214u: goto L_08AA4C9C;
    case 215u: goto L_08AA4CA4;
    case 216u: goto L_08AA4CB4;
    case 217u: goto L_08AA4CC4;
    case 218u: goto L_08AA4CDC;
    case 219u: goto L_08AA4CF4;
    case 220u: goto L_08AA4CF8;
    case 221u: goto L_08AA4D0C;
    case 222u: goto L_08AA4D24;
    case 223u: goto L_08AA4D38;
    case 224u: goto L_08AA4D40;
    case 225u: goto L_08AA4D5C;
    case 226u: goto L_08AA4D74;
    case 227u: goto L_08AA4D84;
    case 228u: goto L_08AA4D88;
    case 229u: goto L_08AA4D9C;
    case 230u: goto L_08AA4DAC;
    case 231u: goto L_08AA4DBC;
    case 232u: goto L_08AA4DC4;
    case 233u: goto L_08AA4DD0;
    case 234u: goto L_08AA4DD8;
    case 235u: goto L_08AA4DEC;
    case 236u: goto L_08AA4DFC;
    case 237u: goto L_08AA4E0C;
    case 238u: goto L_08AA4E18;
    case 239u: goto L_08AA4E20;
    case 240u: goto L_08AA4E24;
    case 241u: goto L_08AA4E30;
    case 242u: goto L_08AA4E38;
    case 243u: goto L_08AA4E44;
    case 244u: goto L_08AA4E4C;
    case 245u: goto L_08AA4E64;
    case 246u: goto L_08AA4E74;
    case 247u: goto L_08AA4E84;
    case 248u: goto L_08AA4E90;
    case 249u: goto L_08AA4E98;
    case 250u: goto L_08AA4E9C;
    case 251u: goto L_08AA4EA8;
    case 252u: goto L_08AA4EB0;
    case 253u: goto L_08AA4EBC;
    case 254u: goto L_08AA4EC4;
    case 255u: goto L_08AA4ED8;
    case 256u: goto L_08AA4EE8;
    case 257u: goto L_08AA4EF8;
    case 258u: goto L_08AA4F04;
    case 259u: goto L_08AA4F0C;
    case 260u: goto L_08AA4F10;
    case 261u: goto L_08AA4F1C;
    case 262u: goto L_08AA4F24;
    case 263u: goto L_08AA4F30;
    case 264u: goto L_08AA4F38;
    case 265u: goto L_08AA4F50;
    case 266u: goto L_08AA4F60;
    case 267u: goto L_08AA4F70;
    case 268u: goto L_08AA4F7C;
    case 269u: goto L_08AA4F84;
    case 270u: goto L_08AA4F88;
    case 271u: goto L_08AA4F90;
    case 272u: goto L_08AA4FA0;
    case 273u: goto L_08AA4FA8;
    case 274u: goto L_08AA4FB4;
    case 275u: goto L_08AA4FBC;
    case 276u: goto L_08AA4FCC;
    case 277u: goto L_08AA4FD0;
    case 278u: goto L_08AA4FDC;
    case 279u: goto L_08AA4FE4;
    case 280u: goto L_08AA4FF0;
    case 281u: goto L_08AA4FF8;
    case 282u: goto L_08AA5008;
    case 283u: goto L_08AA500C;
    case 284u: goto L_08AA5018;
    case 285u: goto L_08AA5020;
    case 286u: goto L_08AA502C;
    case 287u: goto L_08AA5034;
    case 288u: goto L_08AA5044;
    case 289u: goto L_08AA5048;
    case 290u: goto L_08AA5054;
    case 291u: goto L_08AA505C;
    case 292u: goto L_08AA5068;
    case 293u: goto L_08AA5070;
    case 294u: goto L_08AA5080;
    case 295u: goto L_08AA5084;
    case 296u: goto L_08AA508C;
    case 297u: goto L_08AA5094;
    case 298u: goto L_08AA509C;
    case 299u: goto L_08AA50BC;
    case 300u: goto L_08AA50C8;
    case 301u: goto L_08AA50D4;
    case 302u: goto L_08AA50D8;
    case 303u: goto L_08AA50E0;
    case 304u: goto L_08AA50EC;
    case 305u: goto L_08AA5104;
    case 306u: goto L_08AA510C;
    case 307u: goto L_08AA5124;
    case 308u: goto L_08AA513C;
    case 309u: goto L_08AA5148;
    case 310u: goto L_08AA5150;
    case 311u: goto L_08AA5170;
    case 312u: goto L_08AA5178;
    case 313u: goto L_08AA5180;
    case 314u: goto L_08AA51A4;
    case 315u: goto L_08AA51B0;
    case 316u: goto L_08AA51C8;
    case 317u: goto L_08AA51D0;
    case 318u: goto L_08AA51F0;
    case 319u: goto L_08AA51F8;
    case 320u: goto L_08AA520C;
    case 321u: goto L_08AA5214;
    case 322u: goto L_08AA522C;
    case 323u: goto L_08AA5234;
    case 324u: goto L_08AA5254;
    case 325u: goto L_08AA525C;
    case 326u: goto L_08AA5270;
    case 327u: goto L_08AA5278;
    case 328u: goto L_08AA5298;
    case 329u: goto L_08AA52A0;
    case 330u: goto L_08AA52C4;
    case 331u: goto L_08AA52C8;
    case 332u: goto L_08AA52D8;
    case 333u: goto L_08AA52E4;
    case 334u: goto L_08AA52F0;
    case 335u: goto L_08AA52F8;
    case 336u: goto L_08AA52FC;
    case 337u: goto L_08AA5304;
    case 338u: goto L_08AA5310;
    case 339u: goto L_08AA5318;
    case 340u: goto L_08AA5320;
    case 341u: goto L_08AA5334;
    case 342u: goto L_08AA533C;
    case 343u: goto L_08AA5344;
    case 344u: goto L_08AA5364;
    case 345u: goto L_08AA5370;
    case 346u: goto L_08AA537C;
    case 347u: goto L_08AA5380;
    case 348u: goto L_08AA538C;
    case 349u: goto L_08AA5398;
    case 350u: goto L_08AA53B0;
    case 351u: goto L_08AA53B8;
    case 352u: goto L_08AA53D0;
    case 353u: goto L_08AA53E8;
    case 354u: goto L_08AA53F4;
    case 355u: goto L_08AA53FC;
    case 356u: goto L_08AA541C;
    case 357u: goto L_08AA5424;
    case 358u: goto L_08AA542C;
    case 359u: goto L_08AA5444;
    case 360u: goto L_08AA5460;
    case 361u: goto L_08AA546C;
    case 362u: goto L_08AA5474;
    case 363u: goto L_08AA5494;
    case 364u: goto L_08AA54B0;
    case 365u: goto L_08AA54B4;
    case 366u: goto L_08AA54C4;
    case 367u: goto L_08AA54DC;
    case 368u: goto L_08AA54E8;
    case 369u: goto L_08AA54F0;
    case 370u: goto L_08AA54F8;
    case 371u: goto L_08AA5500;
    case 372u: goto L_08AA550C;
    case 373u: goto L_08AA5514;
    case 374u: goto L_08AA551C;
    case 375u: goto L_08AA5528;
    case 376u: goto L_08AA5530;
    case 377u: goto L_08AA5538;
    case 378u: goto L_08AA554C;
    case 379u: goto L_08AA5568;
    case 380u: goto L_08AA5570;
    case 381u: goto L_08AA5584;
    case 382u: goto L_08AA558C;
    case 383u: goto L_08AA55A0;
    case 384u: goto L_08AA55AC;
    case 385u: goto L_08AA55B0;
    case 386u: goto L_08AA55C8;
    case 387u: goto L_08AA55F4;
    case 388u: goto L_08AA55FC;
    case 389u: goto L_08AA560C;
    case 390u: goto L_08AA5618;
    case 391u: goto L_08AA5620;
    case 392u: goto L_08AA5628;
    case 393u: goto L_08AA5640;
    case 394u: goto L_08AA564C;
    case 395u: goto L_08AA5654;
    case 396u: goto L_08AA565C;
    case 397u: goto L_08AA566C;
    case 398u: goto L_08AA5678;
    case 399u: goto L_08AA5680;
    case 400u: goto L_08AA5688;
    case 401u: goto L_08AA569C;
    case 402u: goto L_08AA56A4;
    case 403u: goto L_08AA56D0;
    case 404u: goto L_08AA56D8;
    case 405u: goto L_08AA56F0;
    case 406u: goto L_08AA56F8;
    case 407u: goto L_08AA5714;
    case 408u: goto L_08AA5728;
    case 409u: goto L_08AA5734;
    case 410u: goto L_08AA573C;
    case 411u: goto L_08AA5750;
    case 412u: goto L_08AA5758;
    case 413u: goto L_08AA576C;
    case 414u: goto L_08AA5778;
    case 415u: goto L_08AA5780;
    case 416u: goto L_08AA5788;
    case 417u: goto L_08AA5794;
    case 418u: goto L_08AA579C;
    case 419u: goto L_08AA57A8;
    case 420u: goto L_08AA57B0;
    case 421u: goto L_08AA57BC;
    case 422u: goto L_08AA57C4;
    case 423u: goto L_08AA57D4;
    case 424u: goto L_08AA57F0;
    case 425u: goto L_08AA57F8;
    case 426u: goto L_08AA5800;
    case 427u: goto L_08AA5808;
    case 428u: goto L_08AA5814;
    case 429u: goto L_08AA5820;
    case 430u: goto L_08AA5830;
    case 431u: goto L_08AA583C;
    case 432u: goto L_08AA5850;
    case 433u: goto L_08AA5868;
    case 434u: goto L_08AA5870;
    case 435u: goto L_08AA5884;
    case 436u: goto L_08AA5894;
    case 437u: goto L_08AA58A4;
    case 438u: goto L_08AA58B4;
    case 439u: goto L_08AA58BC;
    case 440u: goto L_08AA58E0;
    case 441u: goto L_08AA58E8;
    case 442u: goto L_08AA58F4;
    case 443u: goto L_08AA5900;
    case 444u: goto L_08AA590C;
    case 445u: goto L_08AA591C;
    case 446u: goto L_08AA592C;
    case 447u: goto L_08AA5944;
    case 448u: goto L_08AA595C;
    case 449u: goto L_08AA5960;
    case 450u: goto L_08AA5974;
    case 451u: goto L_08AA598C;
    case 452u: goto L_08AA59A0;
    case 453u: goto L_08AA59A8;
    case 454u: goto L_08AA59B0;
    case 455u: goto L_08AA59BC;
    case 456u: goto L_08AA59C8;
    case 457u: goto L_08AA59D4;
    case 458u: goto L_08AA59E4;
    case 459u: goto L_08AA59F4;
    case 460u: goto L_08AA5A0C;
    case 461u: goto L_08AA5A24;
    case 462u: goto L_08AA5A28;
    case 463u: goto L_08AA5A3C;
    case 464u: goto L_08AA5A54;
    case 465u: goto L_08AA5A68;
    case 466u: goto L_08AA5A70;
    case 467u: goto L_08AA5A8C;
    case 468u: goto L_08AA5AA4;
    case 469u: goto L_08AA5AB4;
    case 470u: goto L_08AA5ABC;
    case 471u: goto L_08AA5AC4;
    case 472u: goto L_08AA5AD0;
    case 473u: goto L_08AA5ADC;
    case 474u: goto L_08AA5AE4;
    case 475u: goto L_08AA5AF4;
    case 476u: goto L_08AA5B04;
    case 477u: goto L_08AA5B1C;
    case 478u: goto L_08AA5B34;
    case 479u: goto L_08AA5B38;
    case 480u: goto L_08AA5B4C;
    case 481u: goto L_08AA5B64;
    case 482u: goto L_08AA5B78;
    case 483u: goto L_08AA5B80;
    case 484u: goto L_08AA5B9C;
    case 485u: goto L_08AA5BB4;
    case 486u: goto L_08AA5BC4;
    case 487u: goto L_08AA5BC8;
    case 488u: goto L_08AA5BDC;
    case 489u: goto L_08AA5BEC;
    case 490u: goto L_08AA5BF0;
    case 491u: goto L_08AA5BF8;
    case 492u: goto L_08AA5C0C;
    case 493u: goto L_08AA5C1C;
    case 494u: goto L_08AA5C24;
    case 495u: goto L_08AA5C38;
    case 496u: goto L_08AA5C44;
    case 497u: goto L_08AA5C48;
    case 498u: goto L_08AA5C50;
    case 499u: goto L_08AA5C68;
    case 500u: goto L_08AA5C70;
    case 501u: goto L_08AA5C78;
    case 502u: goto L_08AA5C8C;
    case 503u: goto L_08AA5C90;
    case 504u: goto L_08AA5CA0;
    case 505u: goto L_08AA5CBC;
    case 506u: goto L_08AA5CC4;
    case 507u: goto L_08AA5CF4;
    case 508u: goto L_08AA5CFC;
    case 509u: goto L_08AA5D20;
    case 510u: goto L_08AA5D2C;
    case 511u: goto L_08AA5D5C;
    case 512u: goto L_08AA5D74;
    case 513u: goto L_08AA5D98;
    case 514u: goto L_08AA5DB0;
    case 515u: goto L_08AA5DB8;
    case 516u: goto L_08AA5DCC;
    case 517u: goto L_08AA5DD4;
    case 518u: goto L_08AA5DF4;
    case 519u: goto L_08AA5DFC;
    case 520u: goto L_08AA5E28;
    case 521u: goto L_08AA5E40;
    case 522u: goto L_08AA5E64;
    case 523u: goto L_08AA5E7C;
    case 524u: goto L_08AA5E80;
    case 525u: goto L_08AA5E88;
    case 526u: goto L_08AA5E9C;
    case 527u: goto L_08AA5EA4;
    case 528u: goto L_08AA5EC4;
    case 529u: goto L_08AA5ECC;
    case 530u: goto L_08AA5ED8;
    case 531u: goto L_08AA5EE0;
    case 532u: goto L_08AA5EE8;
    case 533u: goto L_08AA5EFC;
    case 534u: goto L_08AA5F04;
    case 535u: goto L_08AA5F24;
    case 536u: goto L_08AA5F2C;
    case 537u: goto L_08AA5F40;
    case 538u: goto L_08AA5F4C;
    case 539u: goto L_08AA5F74;
    case 540u: goto L_08AA5F7C;
    case 541u: goto L_08AA5F84;
    case 542u: goto L_08AA5F90;
    case 543u: goto L_08AA5F98;
    case 544u: goto L_08AA5FA0;
    case 545u: goto L_08AA5FAC;
    case 546u: goto L_08AA5FB4;
    case 547u: goto L_08AA5FBC;
    case 548u: goto L_08AA5FD0;
    case 549u: goto L_08AA5FDC;
    case 550u: goto L_08AA5FE8;
    case 551u: goto L_08AA6000;
    case 552u: goto L_08AA6030;
    case 553u: goto L_08AA6038;
    case 554u: goto L_08AA604C;
    case 555u: goto L_08AA605C;
    case 556u: goto L_08AA6060;
    case 557u: goto L_08AA606C;
    case 558u: goto L_08AA6084;
    case 559u: goto L_08AA608C;
    case 560u: goto L_08AA60C8;
    case 561u: goto L_08AA60D8;
    case 562u: goto L_08AA60EC;
    case 563u: goto L_08AA60F4;
    case 564u: goto L_08AA6108;
    case 565u: goto L_08AA6120;
    case 566u: goto L_08AA613C;
    case 567u: goto L_08AA6144;
    case 568u: goto L_08AA6158;
    case 569u: goto L_08AA6160;
    case 570u: goto L_08AA6174;
    case 571u: goto L_08AA6180;
    case 572u: goto L_08AA6184;
    case 573u: goto L_08AA61A4;
    case 574u: goto L_08AA61D8;
    case 575u: goto L_08AA620C;
    case 576u: goto L_08AA6248;
    case 577u: goto L_08AA6288;
    case 578u: goto L_08AA6290;
    case 579u: goto L_08AA6294;
    case 580u: goto L_08AA629C;
    case 581u: goto L_08AA62C0;
    case 582u: goto L_08AA62C8;
    case 583u: goto L_08AA62D0;
    case 584u: goto L_08AA62D8;
    case 585u: goto L_08AA62E0;
    case 586u: goto L_08AA62E4;
    case 587u: goto L_08AA6300;
    case 588u: goto L_08AA630C;
    case 589u: goto L_08AA6318;
    case 590u: goto L_08AA6330;
    case 591u: goto L_08AA6338;
    case 592u: goto L_08AA6354;
    case 593u: goto L_08AA6360;
    case 594u: goto L_08AA6368;
    case 595u: goto L_08AA6388;
    case 596u: goto L_08AA638C;
    case 597u: goto L_08AA6398;
    case 598u: goto L_08AA63B0;
    case 599u: goto L_08AA63D4;
    case 600u: goto L_08AA63E0;
    case 601u: goto L_08AA63E4;
    case 602u: goto L_08AA63EC;
    case 603u: goto L_08AA63F4;
    case 604u: goto L_08AA6408;
    case 605u: goto L_08AA6420;
    case 606u: goto L_08AA6428;
    case 607u: goto L_08AA6430;
    case 608u: goto L_08AA6444;
    case 609u: goto L_08AA644C;
    case 610u: goto L_08AA6464;
    case 611u: goto L_08AA646C;
    case 612u: goto L_08AA6484;
    case 613u: goto L_08AA6488;
    case 614u: goto L_08AA6494;
    case 615u: goto L_08AA64AC;
    case 616u: goto L_08AA64C0;
    case 617u: goto L_08AA64C8;
    case 618u: goto L_08AA64D0;
    case 619u: goto L_08AA64EC;
    case 620u: goto L_08AA64F4;
    case 621u: goto L_08AA6508;
    case 622u: goto L_08AA651C;
    case 623u: goto L_08AA6530;
    case 624u: goto L_08AA6544;
    case 625u: goto L_08AA654C;
    case 626u: goto L_08AA6554;
    case 627u: goto L_08AA6568;
    case 628u: goto L_08AA6570;
    case 629u: goto L_08AA6578;
    case 630u: goto L_08AA658C;
    case 631u: goto L_08AA6590;
    case 632u: goto L_08AA65A4;
    case 633u: goto L_08AA65B4;
    case 634u: goto L_08AA65CC;
    case 635u: goto L_08AA65DC;
    case 636u: goto L_08AA65E0;
    case 637u: goto L_08AA65F4;
    case 638u: goto L_08AA6608;
    case 639u: goto L_08AA6610;
    case 640u: goto L_08AA6618;
    case 641u: goto L_08AA6620;
    case 642u: goto L_08AA663C;
    case 643u: goto L_08AA6644;
    case 644u: goto L_08AA6658;
    case 645u: goto L_08AA666C;
    case 646u: goto L_08AA6684;
    case 647u: goto L_08AA6690;
    case 648u: goto L_08AA66A8;
    case 649u: goto L_08AA66EC;
    case 650u: goto L_08AA66F8;
    case 651u: goto L_08AA6708;
    case 652u: goto L_08AA671C;
    case 653u: goto L_08AA6728;
    case 654u: goto L_08AA6734;
    case 655u: goto L_08AA6740;
    case 656u: goto L_08AA6750;
    case 657u: goto L_08AA6764;
    case 658u: goto L_08AA6770;
    case 659u: goto L_08AA6798;
    case 660u: goto L_08AA67A0;
    case 661u: goto L_08AA67A8;
    case 662u: goto L_08AA67D0;
    case 663u: goto L_08AA67D8;
    case 664u: goto L_08AA67E4;
    case 665u: goto L_08AA67F0;
    case 666u: goto L_08AA67F8;
    case 667u: goto L_08AA6800;
    case 668u: goto L_08AA680C;
    case 669u: goto L_08AA6818;
    case 670u: goto L_08AA681C;
    case 671u: goto L_08AA682C;
    case 672u: goto L_08AA6848;
    case 673u: goto L_08AA6854;
    case 674u: goto L_08AA6868;
    case 675u: goto L_08AA6878;
    case 676u: goto L_08AA6888;
    case 677u: goto L_08AA688C;
    case 678u: goto L_08AA689C;
    case 679u: goto L_08AA68AC;
    case 680u: goto L_08AA68B8;
    case 681u: goto L_08AA68C8;
    case 682u: goto L_08AA68CC;
    case 683u: goto L_08AA68DC;
    case 684u: goto L_08AA68EC;
    case 685u: goto L_08AA6908;
    case 686u: goto L_08AA690C;
    case 687u: goto L_08AA691C;
    case 688u: goto L_08AA692C;
    case 689u: goto L_08AA6938;
    case 690u: goto L_08AA6944;
    case 691u: goto L_08AA6948;
    case 692u: goto L_08AA6960;
    case 693u: goto L_08AA6968;
    case 694u: goto L_08AA69A4;
    case 695u: goto L_08AA69AC;
    case 696u: goto L_08AA69B8;
    case 697u: goto L_08AA69C4;
    case 698u: goto L_08AA69C8;
    case 699u: goto L_08AA69D0;
    case 700u: goto L_08AA69E0;
    case 701u: goto L_08AA69EC;
    case 702u: goto L_08AA69F8;
    case 703u: goto L_08AA6A08;
    case 704u: goto L_08AA6A10;
    case 705u: goto L_08AA6A20;
    case 706u: goto L_08AA6A28;
    case 707u: goto L_08AA6A30;
    case 708u: goto L_08AA6A40;
    case 709u: goto L_08AA6A54;
    case 710u: goto L_08AA6A58;
    case 711u: goto L_08AA6A6C;
    case 712u: goto L_08AA6A78;
    case 713u: goto L_08AA6A80;
    case 714u: goto L_08AA6A88;
    case 715u: goto L_08AA6A94;
    case 716u: goto L_08AA6AA4;
    case 717u: goto L_08AA6AAC;
    case 718u: goto L_08AA6ABC;
    case 719u: goto L_08AA6AC4;
    case 720u: goto L_08AA6ACC;
    case 721u: goto L_08AA6ADC;
    case 722u: goto L_08AA6AF0;
    case 723u: goto L_08AA6AF4;
    case 724u: goto L_08AA6B08;
    case 725u: goto L_08AA6B14;
    case 726u: goto L_08AA6B1C;
    case 727u: goto L_08AA6B24;
    case 728u: goto L_08AA6B30;
    case 729u: goto L_08AA6B40;
    case 730u: goto L_08AA6B48;
    case 731u: goto L_08AA6B58;
    case 732u: goto L_08AA6B60;
    case 733u: goto L_08AA6B68;
    case 734u: goto L_08AA6B78;
    case 735u: goto L_08AA6B8C;
    case 736u: goto L_08AA6B90;
    case 737u: goto L_08AA6BA4;
    case 738u: goto L_08AA6BB0;
    case 739u: goto L_08AA6BB4;
    case 740u: goto L_08AA6BBC;
    case 741u: goto L_08AA6BC8;
    case 742u: goto L_08AA6BD0;
    case 743u: goto L_08AA6BDC;
    case 744u: goto L_08AA6BE8;
    case 745u: goto L_08AA6BEC;
    case 746u: goto L_08AA6BF4;
    case 747u: goto L_08AA6C00;
    case 748u: goto L_08AA6C0C;
    case 749u: goto L_08AA6C1C;
    case 750u: goto L_08AA6C24;
    case 751u: goto L_08AA6C28;
    case 752u: goto L_08AA6C30;
    case 753u: goto L_08AA6C38;
    case 754u: goto L_08AA6C48;
    case 755u: goto L_08AA6C54;
    case 756u: goto L_08AA6C5C;
    case 757u: goto L_08AA6C64;
    case 758u: goto L_08AA6C70;
    case 759u: goto L_08AA6C80;
    case 760u: goto L_08AA6C88;
    case 761u: goto L_08AA6C8C;
    case 762u: goto L_08AA6C94;
    case 763u: goto L_08AA6C9C;
    case 764u: goto L_08AA6CAC;
    case 765u: goto L_08AA6CB8;
    case 766u: goto L_08AA6CC0;
    case 767u: goto L_08AA6CC8;
    case 768u: goto L_08AA6CD4;
    case 769u: goto L_08AA6CE4;
    case 770u: goto L_08AA6CEC;
    case 771u: goto L_08AA6CF0;
    case 772u: goto L_08AA6CF8;
    case 773u: goto L_08AA6D00;
    case 774u: goto L_08AA6D10;
    case 775u: goto L_08AA6D1C;
    case 776u: goto L_08AA6D20;
    case 777u: goto L_08AA6D28;
    case 778u: goto L_08AA6D34;
    case 779u: goto L_08AA6D38;
    case 780u: goto L_08AA6D40;
    case 781u: goto L_08AA6D4C;
    case 782u: goto L_08AA6D54;
    case 783u: goto L_08AA6D64;
    case 784u: goto L_08AA6D68;
    case 785u: goto L_08AA6D70;
    case 786u: goto L_08AA6D98;
    case 787u: goto L_08AA6DD4;
    case 788u: goto L_08AA6DE0;
    case 789u: goto L_08AA6DE4;
    case 790u: goto L_08AA6DEC;
    case 791u: goto L_08AA6DF4;
    case 792u: goto L_08AA6E04;
    case 793u: goto L_08AA6E0C;
    case 794u: goto L_08AA6E1C;
    case 795u: goto L_08AA6E28;
    case 796u: goto L_08AA6E30;
    case 797u: goto L_08AA6E34;
    case 798u: goto L_08AA6E3C;
    case 799u: goto L_08AA6E44;
    case 800u: goto L_08AA6E54;
    case 801u: goto L_08AA6E6C;
    case 802u: goto L_08AA6E7C;
    case 803u: goto L_08AA6E84;
    case 804u: goto L_08AA6E94;
    case 805u: goto L_08AA6EC0;
    case 806u: goto L_08AA6EC8;
    case 807u: goto L_08AA6ED0;
    case 808u: goto L_08AA6EF8;
    case 809u: goto L_08AA6F00;
    case 810u: goto L_08AA6F08;
    case 811u: goto L_08AA6F1C;
    case 812u: goto L_08AA6F20;
    case 813u: goto L_08AA6F28;
    case 814u: goto L_08AA6F34;
    case 815u: goto L_08AA6F44;
    case 816u: goto L_08AA6F4C;
    case 817u: goto L_08AA6F64;
    case 818u: goto L_08AA6F6C;
    case 819u: goto L_08AA6F78;
    case 820u: goto L_08AA6F80;
    case 821u: goto L_08AA6F8C;
    case 822u: goto L_08AA6F9C;
    case 823u: goto L_08AA6FA4;
    case 824u: goto L_08AA6FBC;
    case 825u: goto L_08AA6FC0;
    case 826u: goto L_08AA6FD4;
    case 827u: goto L_08AA6FE0;
    case 828u: goto L_08AA6FE4;
    case 829u: goto L_08AA6FEC;
    case 830u: goto L_08AA6FF8;
    case 831u: goto L_08AA7008;
    case 832u: goto L_08AA7010;
    case 833u: goto L_08AA7030;
    case 834u: goto L_08AA7038;
    case 835u: goto L_08AA7044;
    case 836u: goto L_08AA704C;
    case 837u: goto L_08AA7058;
    case 838u: goto L_08AA7068;
    case 839u: goto L_08AA7070;
    case 840u: goto L_08AA7088;
    case 841u: goto L_08AA708C;
    case 842u: goto L_08AA70A0;
    case 843u: goto L_08AA70AC;
    case 844u: goto L_08AA70B0;
    case 845u: goto L_08AA70B8;
    case 846u: goto L_08AA70C4;
    case 847u: goto L_08AA70D4;
    case 848u: goto L_08AA70DC;
    case 849u: goto L_08AA70F4;
    case 850u: goto L_08AA70FC;
    case 851u: goto L_08AA7108;
    case 852u: goto L_08AA7110;
    case 853u: goto L_08AA711C;
    case 854u: goto L_08AA712C;
    case 855u: goto L_08AA7134;
    case 856u: goto L_08AA714C;
    case 857u: goto L_08AA7150;
    case 858u: goto L_08AA7164;
    case 859u: goto L_08AA7170;
    case 860u: goto L_08AA7188;
    case 861u: goto L_08AA7190;
    case 862u: goto L_08AA71A0;
    case 863u: goto L_08AA71AC;
    case 864u: goto L_08AA71BC;
    case 865u: goto L_08AA71C8;
    case 866u: goto L_08AA71D8;
    case 867u: goto L_08AA71E0;
    case 868u: goto L_08AA71F8;
    case 869u: goto L_08AA7200;
    case 870u: goto L_08AA720C;
    case 871u: goto L_08AA7214;
    case 872u: goto L_08AA7220;
    case 873u: goto L_08AA7230;
    case 874u: goto L_08AA7238;
    case 875u: goto L_08AA7250;
    case 876u: goto L_08AA7254;
    case 877u: goto L_08AA7268;
    case 878u: goto L_08AA7274;
    case 879u: goto L_08AA7278;
    case 880u: goto L_08AA7280;
    case 881u: goto L_08AA728C;
    case 882u: goto L_08AA729C;
    case 883u: goto L_08AA72A4;
    case 884u: goto L_08AA72C4;
    case 885u: goto L_08AA72CC;
    case 886u: goto L_08AA72D8;
    case 887u: goto L_08AA72E0;
    case 888u: goto L_08AA72EC;
    case 889u: goto L_08AA72FC;
    case 890u: goto L_08AA7304;
    case 891u: goto L_08AA731C;
    case 892u: goto L_08AA7320;
    case 893u: goto L_08AA7334;
    case 894u: goto L_08AA7340;
    case 895u: goto L_08AA7344;
    case 896u: goto L_08AA734C;
    case 897u: goto L_08AA7358;
    case 898u: goto L_08AA7368;
    case 899u: goto L_08AA7370;
    case 900u: goto L_08AA7384;
    case 901u: goto L_08AA738C;
    case 902u: goto L_08AA7398;
    case 903u: goto L_08AA73A0;
    case 904u: goto L_08AA73AC;
    case 905u: goto L_08AA73BC;
    case 906u: goto L_08AA73C4;
    case 907u: goto L_08AA73DC;
    case 908u: goto L_08AA73E0;
    case 909u: goto L_08AA73F4;
    case 910u: goto L_08AA7400;
    case 911u: goto L_08AA7404;
    case 912u: goto L_08AA740C;
    case 913u: goto L_08AA7418;
    case 914u: goto L_08AA741C;
    case 915u: goto L_08AA7444;
    case 916u: goto L_08AA7458;
    case 917u: goto L_08AA747C;
    case 918u: goto L_08AA7484;
    case 919u: goto L_08AA7498;
    case 920u: goto L_08AA74B0;
    case 921u: goto L_08AA74C4;
    case 922u: goto L_08AA74D4;
    case 923u: goto L_08AA74E0;
    case 924u: goto L_08AA74E8;
    case 925u: goto L_08AA7520;
    case 926u: goto L_08AA7528;
    case 927u: goto L_08AA7538;
    case 928u: goto L_08AA7544;
    case 929u: goto L_08AA754C;
    case 930u: goto L_08AA7584;
    case 931u: goto L_08AA758C;
    case 932u: goto L_08AA759C;
    case 933u: goto L_08AA75A8;
    case 934u: goto L_08AA75B0;
    case 935u: goto L_08AA75E8;
    case 936u: goto L_08AA75F0;
    case 937u: goto L_08AA7610;
    case 938u: goto L_08AA7618;
    case 939u: goto L_08AA7638;
    case 940u: goto L_08AA7640;
    case 941u: goto L_08AA7660;
    case 942u: goto L_08AA7668;
    case 943u: goto L_08AA767C;
    case 944u: goto L_08AA7684;
    case 945u: goto L_08AA7698;
    case 946u: goto L_08AA76A0;
    case 947u: goto L_08AA76B4;
    case 948u: goto L_08AA76BC;
    case 949u: goto L_08AA76E4;
    case 950u: goto L_08AA76EC;
    case 951u: goto L_08AA7700;
    case 952u: goto L_08AA7708;
    case 953u: goto L_08AA7710;
    case 954u: goto L_08AA7728;
    case 955u: goto L_08AA7730;
    case 956u: goto L_08AA7748;
    case 957u: goto L_08AA7750;
    case 958u: goto L_08AA7764;
    case 959u: goto L_08AA776C;
    case 960u: goto L_08AA7774;
    case 961u: goto L_08AA777C;
    case 962u: goto L_08AA7794;
    case 963u: goto L_08AA779C;
    case 964u: goto L_08AA77C0;
    case 965u: goto L_08AA77C8;
    case 966u: goto L_08AA77EC;
    case 967u: goto L_08AA77F4;
    case 968u: goto L_08AA7818;
    case 969u: goto L_08AA7820;
    case 970u: goto L_08AA7828;
    case 971u: goto L_08AA7840;
    case 972u: goto L_08AA7848;
    case 973u: goto L_08AA786C;
    case 974u: goto L_08AA7874;
    case 975u: goto L_08AA7898;
    case 976u: goto L_08AA78A0;
    case 977u: goto L_08AA78C4;
    case 978u: goto L_08AA78C8;
    case 979u: goto L_08AA78D4;
    case 980u: goto L_08AA7904;
    case 981u: goto L_08AA790C;
    case 982u: goto L_08AA791C;
    case 983u: goto L_08AA794C;
    case 984u: goto L_08AA797C;
    case 985u: goto L_08AA7984;
    case 986u: goto L_08AA7990;
    case 987u: goto L_08AA799C;
    case 988u: goto L_08AA79A8;
    case 989u: goto L_08AA79AC;
    case 990u: goto L_08AA79B8;
    case 991u: goto L_08AA79C4;
    case 992u: goto L_08AA79DC;
    case 993u: goto L_08AA79E4;
    case 994u: goto L_08AA79EC;
    case 995u: goto L_08AA79F8;
    case 996u: goto L_08AA7A20;
    case 997u: goto L_08AA7A28;
    case 998u: goto L_08AA7A2C;
    case 999u: goto L_08AA7A40;
    case 1000u: goto L_08AA7A68;
    case 1001u: goto L_08AA7A74;
    case 1002u: goto L_08AA7A80;
    case 1003u: goto L_08AA7A8C;
    case 1004u: goto L_08AA7A94;
    case 1005u: goto L_08AA7A9C;
    case 1006u: goto L_08AA7AA4;
    case 1007u: goto L_08AA7AC8;
    case 1008u: goto L_08AA7AD0;
    case 1009u: goto L_08AA7AF4;
    case 1010u: goto L_08AA7AFC;
    case 1011u: goto L_08AA7B20;
    case 1012u: goto L_08AA7B24;
    case 1013u: goto L_08AA7B28;
    case 1014u: goto L_08AA7B38;
    case 1015u: goto L_08AA7B4C;
    case 1016u: goto L_08AA7B58;
    case 1017u: goto L_08AA7B6C;
    case 1018u: goto L_08AA7B78;
    case 1019u: goto L_08AA7B84;
    case 1020u: goto L_08AA7B90;
    case 1021u: goto L_08AA7BA0;
    case 1022u: goto L_08AA7BA8;
    case 1023u: goto L_08AA7BB0;
    case 1024u: goto L_08AA7BC0;
    case 1025u: goto L_08AA7BC8;
    case 1026u: goto L_08AA7BD4;
    case 1027u: goto L_08AA7BD8;
    case 1028u: goto L_08AA7BE4;
    case 1029u: goto L_08AA7BF0;
    case 1030u: goto L_08AA7BFC;
    case 1031u: goto L_08AA7C24;
    case 1032u: goto L_08AA7C44;
    case 1033u: goto L_08AA7C68;
    case 1034u: goto L_08AA7C80;
    case 1035u: goto L_08AA7C90;
    case 1036u: goto L_08AA7CAC;
    case 1037u: goto L_08AA7CB4;
    case 1038u: goto L_08AA7CC8;
    case 1039u: goto L_08AA7CD0;
    case 1040u: goto L_08AA7CD8;
    case 1041u: goto L_08AA7CE4;
    case 1042u: goto L_08AA7CEC;
    case 1043u: goto L_08AA7CF4;
    case 1044u: goto L_08AA7D08;
    case 1045u: goto L_08AA7D10;
    case 1046u: goto L_08AA7D18;
    case 1047u: goto L_08AA7D20;
    case 1048u: goto L_08AA7D34;
    case 1049u: goto L_08AA7D3C;
    case 1050u: goto L_08AA7D44;
    case 1051u: goto L_08AA7D58;
    case 1052u: goto L_08AA7D60;
    case 1053u: goto L_08AA7D6C;
    case 1054u: goto L_08AA7D78;
    case 1055u: goto L_08AA7D80;
    case 1056u: goto L_08AA7D8C;
    case 1057u: goto L_08AA7D9C;
    case 1058u: goto L_08AA7DB0;
    case 1059u: goto L_08AA7DC0;
    case 1060u: goto L_08AA7DD0;
    case 1061u: goto L_08AA7DDC;
    case 1062u: goto L_08AA7DE4;
    case 1063u: goto L_08AA7DEC;
    case 1064u: goto L_08AA7DF8;
    case 1065u: goto L_08AA7E00;
    case 1066u: goto L_08AA7E08;
    case 1067u: goto L_08AA7E14;
    case 1068u: goto L_08AA7E1C;
    case 1069u: goto L_08AA7E28;
    case 1070u: goto L_08AA7E30;
    case 1071u: goto L_08AA7E38;
    case 1072u: goto L_08AA7E44;
    case 1073u: goto L_08AA7E50;
    case 1074u: goto L_08AA7E58;
    case 1075u: goto L_08AA7E6C;
    case 1076u: goto L_08AA7E78;
    case 1077u: goto L_08AA7E80;
    case 1078u: goto L_08AA7E94;
    case 1079u: goto L_08AA7E9C;
    case 1080u: goto L_08AA7EA4;
    case 1081u: goto L_08AA7EAC;
    case 1082u: goto L_08AA7EC0;
    case 1083u: goto L_08AA7EC8;
    case 1084u: goto L_08AA7ED0;
    case 1085u: goto L_08AA7EE4;
    case 1086u: goto L_08AA7EF0;
    case 1087u: goto L_08AA7EF8;
    case 1088u: goto L_08AA7F00;
    case 1089u: goto L_08AA7F14;
    case 1090u: goto L_08AA7F1C;
    case 1091u: goto L_08AA7F24;
    case 1092u: goto L_08AA7F38;
    case 1093u: goto L_08AA7F44;
    case 1094u: goto L_08AA7F4C;
    case 1095u: goto L_08AA7F54;
    case 1096u: goto L_08AA7F68;
    case 1097u: goto L_08AA7F70;
    case 1098u: goto L_08AA7F78;
    case 1099u: goto L_08AA7F80;
    case 1100u: goto L_08AA7F88;
    case 1101u: goto L_08AA7F90;
    case 1102u: goto L_08AA7F94;
    case 1103u: goto L_08AA7F98;
    case 1104u: goto L_08AA7FAC;
    case 1105u: goto L_08AA7FB4;
    case 1106u: goto L_08AA7FD0;
    case 1107u: goto L_08AA7FD8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AA4004:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15308), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.set_gpr(31, 0x08AA4018u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA4018u) goto L_08AA4018;
    return;
L_08AA4018:
    ctx.set_gpr(31, 0x08AA4020u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4020u) goto L_08AA4020;
    return;
L_08AA4020:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15364), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AA4088;
      }
      goto L_08AA4030;
    }
L_08AA4030:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AA4034;
L_08AA4034:
    ctx.set_gpr(31, 0x08AA403Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA403Cu) goto L_08AA403C;
    return;
L_08AA403C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08AA4054u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA4054u) goto L_08AA4054;
    return;
L_08AA4054:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
        goto L_08AA4078;
    }
    goto L_08AA405C;
L_08AA405C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08AA4074u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA4074u) goto L_08AA4074;
    return;
L_08AA4074:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    goto L_08AA4078;
L_08AA4078:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA4034;
    }
    goto L_08AA4088;
L_08AA4088:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15391), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15376), 0u);
      if (branch_taken) {
          goto L_08AA45F4;
      }
      goto L_08AA40A0;
    }
L_08AA40A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA40C8;
      }
      goto L_08AA40A8;
    }
L_08AA40A8:
    ctx.set_gpr(31, 0x08AA40B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AA40B0u) goto L_08AA40B0;
    return;
L_08AA40B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08AA40C0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32624)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AA40C0u) goto L_08AA40C0;
    return;
L_08AA40C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AA40C8;
L_08AA40C8:
    ctx.set_gpr(31, 0x08AA40D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA40D0u) goto L_08AA40D0;
    return;
L_08AA40D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08AA40E4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA40E4u) goto L_08AA40E4;
    return;
L_08AA40E4:
    ctx.set_gpr(31, 0x08AA40ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA40ECu) goto L_08AA40EC;
    return;
L_08AA40EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AA4100u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4100u) goto L_08AA4100;
    return;
L_08AA4100:
    ctx.set_gpr(31, 0x08AA4108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA4108u) goto L_08AA4108;
    return;
L_08AA4108:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08AA411Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA411Cu) goto L_08AA411C;
    return;
L_08AA411C:
    ctx.set_gpr(31, 0x08AA4124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA4124u) goto L_08AA4124;
    return;
L_08AA4124:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08AA4138u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4138u) goto L_08AA4138;
    return;
L_08AA4138:
    ctx.set_gpr(31, 0x08AA4140u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4140u) goto L_08AA4140;
    return;
L_08AA4140:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA414Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA414Cu) goto L_08AA414C;
    return;
L_08AA414C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA4200;
    }
    goto L_08AA4158;
L_08AA4158:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(34));
    goto L_08AA4164;
L_08AA4164:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA4174u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA4174u) goto L_08AA4174;
    return;
L_08AA4174:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AA41B8;
    }
    goto L_08AA4184;
L_08AA4184:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA419Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA419Cu) goto L_08AA419C;
    return;
L_08AA419C:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(213));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA41B4u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA41B4u) goto L_08AA41B4;
    return;
L_08AA41B4:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AA41B8;
L_08AA41B8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA41CCu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA41CCu) goto L_08AA41CC;
    return;
L_08AA41CC:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA41E4u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA41E4u) goto L_08AA41E4;
    return;
L_08AA41E4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA4164;
      }
      goto L_08AA41F8;
    }
L_08AA41F8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16256u << 16u);
      if (branch_taken) {
          goto L_08AA4420;
      }
      goto L_08AA4200;
    }
L_08AA4200:
    ctx.set_gpr(31, 0x08AA4208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4208u) goto L_08AA4208;
    return;
L_08AA4208:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA4214u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA4214u) goto L_08AA4214;
    return;
L_08AA4214:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA4314;
    }
    goto L_08AA4220;
L_08AA4220:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(34));
    goto L_08AA422C;
L_08AA422C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA423Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA423Cu) goto L_08AA423C;
    return;
L_08AA423C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AA4280;
    }
    goto L_08AA424C;
L_08AA424C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA4264u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA4264u) goto L_08AA4264;
    return;
L_08AA4264:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(213));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA427Cu);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA427Cu) goto L_08AA427C;
    return;
L_08AA427C:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AA4280;
L_08AA4280:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA4294u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA4294u) goto L_08AA4294;
    return;
L_08AA4294:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA42ACu);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA42ACu) goto L_08AA42AC;
    return;
L_08AA42AC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA422C;
      }
      goto L_08AA42C0;
    }
L_08AA42C0:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(256));
    goto L_08AA42C8;
L_08AA42C8:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA42E4u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA42E4u) goto L_08AA42E4;
    return;
L_08AA42E4:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA42FCu);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA42FCu) goto L_08AA42FC;
    return;
L_08AA42FC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA42C8;
      }
      goto L_08AA430C;
    }
L_08AA430C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA441C;
      }
      goto L_08AA4314;
    }
L_08AA4314:
    ctx.set_gpr(31, 0x08AA431Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA431Cu) goto L_08AA431C;
    return;
L_08AA431C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA4328u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA4328u) goto L_08AA4328;
    return;
L_08AA4328:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AA441C;
      }
      goto L_08AA4334;
    }
L_08AA4334:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(34));
    goto L_08AA433C;
L_08AA433C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA434Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA434Cu) goto L_08AA434C;
    return;
L_08AA434C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AA4390;
    }
    goto L_08AA435C;
L_08AA435C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA4374u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA4374u) goto L_08AA4374;
    return;
L_08AA4374:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(213));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA438Cu);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA438Cu) goto L_08AA438C;
    return;
L_08AA438C:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AA4390;
L_08AA4390:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA43A4u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA43A4u) goto L_08AA43A4;
    return;
L_08AA43A4:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA43BCu);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA43BCu) goto L_08AA43BC;
    return;
L_08AA43BC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA433C;
      }
      goto L_08AA43D0;
    }
L_08AA43D0:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(182));
    goto L_08AA43D8;
L_08AA43D8:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA43F4u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA43F4u) goto L_08AA43F4;
    return;
L_08AA43F4:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA440Cu);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA440Cu) goto L_08AA440C;
    return;
L_08AA440C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA43D8;
      }
      goto L_08AA441C;
    }
L_08AA441C:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AA4420;
L_08AA4420:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA4434u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA4434u) goto L_08AA4434;
    return;
L_08AA4434:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA4444u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA4444u) goto L_08AA4444;
    return;
L_08AA4444:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    ctx.set_gpr(31, 0x08AA4450u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AA629C;
L_08AA4450:
    ctx.set_gpr(31, 0x08AA4458u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AA63B0;
L_08AA4458:
    ctx.set_gpr(31, 0x08AA4460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA4460u) goto L_08AA4460;
    return;
L_08AA4460:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA446Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA446Cu) goto L_08AA446C;
    return;
L_08AA446C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4490;
      }
      goto L_08AA4474;
    }
L_08AA4474:
    ctx.set_gpr(31, 0x08AA447Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA447Cu) goto L_08AA447C;
    return;
L_08AA447C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA4488u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA4488u) goto L_08AA4488;
    return;
L_08AA4488:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4578;
      }
      goto L_08AA4490;
    }
L_08AA4490:
    ctx.set_gpr(31, 0x08AA4498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4498u) goto L_08AA4498;
    return;
L_08AA4498:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA44ACu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA44ACu) goto L_08AA44AC;
    return;
L_08AA44AC:
    ctx.set_gpr(31, 0x08AA44B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA44B4u) goto L_08AA44B4;
    return;
L_08AA44B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08AA44C8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA44C8u) goto L_08AA44C8;
    return;
L_08AA44C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15308), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.set_gpr(31, 0x08AA44DCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA44DCu) goto L_08AA44DC;
    return;
L_08AA44DC:
    ctx.set_gpr(31, 0x08AA44E4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA44E4u) goto L_08AA44E4;
    return;
L_08AA44E4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15364), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AA454C;
      }
      goto L_08AA44F4;
    }
L_08AA44F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AA44F8;
L_08AA44F8:
    ctx.set_gpr(31, 0x08AA4500u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA4500u) goto L_08AA4500;
    return;
L_08AA4500:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08AA4518u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA4518u) goto L_08AA4518;
    return;
L_08AA4518:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
        goto L_08AA453C;
    }
    goto L_08AA4520;
L_08AA4520:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08AA4538u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA4538u) goto L_08AA4538;
    return;
L_08AA4538:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    goto L_08AA453C;
L_08AA453C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA44F8;
    }
    goto L_08AA454C;
L_08AA454C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15391), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15376), 0u);
    ctx.set_gpr(31, 0x08AA4568u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15332), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4568u) goto L_08AA4568;
    return;
L_08AA4568:
    ctx.set_gpr(31, 0x08AA4570u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA4570u) goto L_08AA4570;
    return;
L_08AA4570:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA45F4;
      }
      goto L_08AA4578;
    }
L_08AA4578:
    ctx.set_gpr(31, 0x08AA4580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA4580u) goto L_08AA4580;
    return;
L_08AA4580:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA458Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA458Cu) goto L_08AA458C;
    return;
L_08AA458C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA45F0;
      }
      goto L_08AA4594;
    }
L_08AA4594:
    ctx.set_gpr(31, 0x08AA459Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA459Cu) goto L_08AA459C;
    return;
L_08AA459C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA45B0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA45B0u) goto L_08AA45B0;
    return;
L_08AA45B0:
    ctx.set_gpr(31, 0x08AA45B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA45B8u) goto L_08AA45B8;
    return;
L_08AA45B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AA45CCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA45CCu) goto L_08AA45CC;
    return;
L_08AA45CC:
    ctx.set_gpr(31, 0x08AA45D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA45D4u) goto L_08AA45D4;
    return;
L_08AA45D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08AA45E8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA45E8u) goto L_08AA45E8;
    return;
L_08AA45E8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15332), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
    goto L_08AA45F0;
L_08AA45F0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AA45F4;
L_08AA45F4:
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
L_08AA4610:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AA4634u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08AA4634u) goto L_08AA4634;
    return;
L_08AA4634:
    ctx.set_gpr(31, 0x08AA463Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08AA463Cu) goto L_08AA463C;
    return;
L_08AA463C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA464Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA464Cu) goto L_08AA464C;
    return;
L_08AA464C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15389)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15390)));
        goto L_08AA4690;
    }
    goto L_08AA4658;
L_08AA4658:
    ctx.set_gpr(31, 0x08AA4660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA4660u) goto L_08AA4660;
    return;
L_08AA4660:
    ctx.set_gpr(31, 0x08AA4668u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA4668u) goto L_08AA4668;
    return;
L_08AA4668:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AA4684u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AA4684u) goto L_08AA4684;
    return;
L_08AA4684:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15390)));
    goto L_08AA4690;
L_08AA4690:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AA46BC;
    }
    goto L_08AA4698;
L_08AA4698:
    ctx.set_gpr(31, 0x08AA46A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AA46A0u) goto L_08AA46A0;
    return;
L_08AA46A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08AA46B0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32616)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AA46B0u) goto L_08AA46B0;
    return;
L_08AA46B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AA46BC;
L_08AA46BC:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA46C8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15756), 0u);
    goto L_08AA74B0;
L_08AA46C8:
    ctx.set_gpr(31, 0x08AA46D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA46D0u) goto L_08AA46D0;
    return;
L_08AA46D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AA46E4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA46E4u) goto L_08AA46E4;
    return;
L_08AA46E4:
    ctx.set_gpr(31, 0x08AA46ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA46ECu) goto L_08AA46EC;
    return;
L_08AA46EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08AA4700u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4700u) goto L_08AA4700;
    return;
L_08AA4700:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AA4704;
L_08AA4704:
    ctx.set_gpr(31, 0x08AA470Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA470Cu) goto L_08AA470C;
    return;
L_08AA470C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(69));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA4720u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4720u) goto L_08AA4720;
    return;
L_08AA4720:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4704;
      }
      goto L_08AA4730;
    }
L_08AA4730:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15288)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
        goto L_08AA4A20;
    }
    goto L_08AA473C;
L_08AA473C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15288), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15292), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_08AA47A4;
      }
      goto L_08AA4750;
    }
L_08AA4750:
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08AA4754;
L_08AA4754:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA4760u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA4760u) goto L_08AA4760;
    return;
L_08AA4760:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.set_gpr(31, 0x08AA4778u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(264));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA4778u) goto L_08AA4778;
    return;
L_08AA4778:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
        goto L_08AA4794;
    }
    goto L_08AA4780;
L_08AA4780:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15684), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15716), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    goto L_08AA4794;
L_08AA4794:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA4754;
      }
      goto L_08AA47A4;
    }
L_08AA47A4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15308)));
    ctx.set_gpr(31, 0x08AA47B0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA47B0u) goto L_08AA47B0;
    return;
L_08AA47B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(240));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15312), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(120));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15316), ctx.gpr[2]);
    ctx.set_gpr(2, 49736u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x08AA47E0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA47E0u) goto L_08AA47E0;
    return;
L_08AA47E0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(31, 0x08AA47ECu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AA47ECu) goto L_08AA47EC;
    return;
L_08AA47EC:
    ctx.set_gpr(31, 0x08AA47F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA47F4u) goto L_08AA47F4;
    return;
L_08AA47F4:
    ctx.set_gpr(31, 0x08AA47FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x08AA47FCu) goto L_08AA47FC;
    return;
L_08AA47FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_08AA4A0C;
      }
      goto L_08AA4808;
    }
L_08AA4808:
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08AA480C;
L_08AA480C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15308)));
    if (ctx.gpr[2] == ctx.gpr[18]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA48F8;
    }
    goto L_08AA4818;
L_08AA4818:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA4824u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA4824u) goto L_08AA4824;
    return;
L_08AA4824:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(252));
    ctx.set_gpr(31, 0x08AA483Cu);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(248));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA483Cu) goto L_08AA483C;
    return;
L_08AA483C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1000));
        goto L_08AA48E4;
    }
    goto L_08AA4844;
L_08AA4844:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) && ctx.fpr[0] == ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
        goto L_08AA48AC;
    }
    goto L_08AA485C;
L_08AA485C:
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08AA4874u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA4874u) goto L_08AA4874;
    return;
L_08AA4874:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(31, 0x08AA4880u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AA4880u) goto L_08AA4880;
    return;
L_08AA4880:
    ctx.set_gpr(31, 0x08AA4888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA4888u) goto L_08AA4888;
    return;
L_08AA4888:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15280)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15284)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(31, 0x08AA48A8u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 312u, 0x088595D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA48A8u) goto L_08AA48A8;
    return;
L_08AA48A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_08AA48AC;
L_08AA48AC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15556), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15588), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15620), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15652), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA49F8;
      }
      goto L_08AA48E4;
    }
L_08AA48E4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15556), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15588), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15620), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15652), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA49F8;
      }
      goto L_08AA48F8;
    }
L_08AA48F8:
    ctx.set_gpr(31, 0x08AA4900u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA4900u) goto L_08AA4900;
    return;
L_08AA4900:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(236));
    ctx.set_gpr(31, 0x08AA4918u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA4918u) goto L_08AA4918;
    return;
L_08AA4918:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1000));
        goto L_08AA49E8;
    }
    goto L_08AA4920;
L_08AA4920:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, 16800u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15312), ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15316), ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15320), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(31, 0x08AA4978u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA4978u) goto L_08AA4978;
    return;
L_08AA4978:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(31, 0x08AA4984u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AA4984u) goto L_08AA4984;
    return;
L_08AA4984:
    ctx.set_gpr(31, 0x08AA498Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA498Cu) goto L_08AA498C;
    return;
L_08AA498C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15280)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15284)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(31, 0x08AA49ACu);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 312u, 0x088595D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA49ACu) goto L_08AA49AC;
    return;
L_08AA49AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15556), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15588), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15620), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15652), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA49F8;
      }
      goto L_08AA49E8;
    }
L_08AA49E8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15556), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15588), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15620), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15652), ctx.gpr[2]);
    goto L_08AA49F8;
L_08AA49F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA480C;
      }
      goto L_08AA4A0C;
    }
L_08AA4A0C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15308)));
    ctx.set_gpr(31, 0x08AA4A18u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA4A18u) goto L_08AA4A18;
    return;
L_08AA4A18:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15289), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    goto L_08AA4A20;
L_08AA4A20:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AA4A84;
      }
      goto L_08AA4A28;
    }
L_08AA4A28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AA4A2C;
L_08AA4A2C:
    ctx.set_gpr(31, 0x08AA4A34u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA4A34u) goto L_08AA4A34;
    return;
L_08AA4A34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x08AA4A4Cu);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA4A4Cu) goto L_08AA4A4C;
    return;
L_08AA4A4C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
        goto L_08AA4A74;
    }
    goto L_08AA4A54;
L_08AA4A54:
    ctx.set_gpr(31, 0x08AA4A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA4A5Cu) goto L_08AA4A5C;
    return;
L_08AA4A5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA4A70u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4A70u) goto L_08AA4A70;
    return;
L_08AA4A70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    goto L_08AA4A74;
L_08AA4A74:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA4A2C;
    }
    goto L_08AA4A84;
L_08AA4A84:
    ctx.set_gpr(31, 0x08AA4A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA4A8Cu) goto L_08AA4A8C;
    return;
L_08AA4A8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08AA4AA0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4AA0u) goto L_08AA4AA0;
    return;
L_08AA4AA0:
    ctx.set_gpr(31, 0x08AA4AA8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4AA8u) goto L_08AA4AA8;
    return;
L_08AA4AA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA4AB4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA4AB4u) goto L_08AA4AB4;
    return;
L_08AA4AB4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA4B68;
    }
    goto L_08AA4AC0;
L_08AA4AC0:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(34));
    goto L_08AA4ACC;
L_08AA4ACC:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA4ADCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA4ADCu) goto L_08AA4ADC;
    return;
L_08AA4ADC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AA4B20;
    }
    goto L_08AA4AEC;
L_08AA4AEC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA4B04u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA4B04u) goto L_08AA4B04;
    return;
L_08AA4B04:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(213));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA4B1Cu);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA4B1Cu) goto L_08AA4B1C;
    return;
L_08AA4B1C:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AA4B20;
L_08AA4B20:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA4B34u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA4B34u) goto L_08AA4B34;
    return;
L_08AA4B34:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA4B4Cu);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA4B4Cu) goto L_08AA4B4C;
    return;
L_08AA4B4C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA4ACC;
      }
      goto L_08AA4B60;
    }
L_08AA4B60:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16256u << 16u);
      if (branch_taken) {
          goto L_08AA4D88;
      }
      goto L_08AA4B68;
    }
L_08AA4B68:
    ctx.set_gpr(31, 0x08AA4B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4B70u) goto L_08AA4B70;
    return;
L_08AA4B70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA4B7Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA4B7Cu) goto L_08AA4B7C;
    return;
L_08AA4B7C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA4C7C;
    }
    goto L_08AA4B88;
L_08AA4B88:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(34));
    goto L_08AA4B94;
L_08AA4B94:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA4BA4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA4BA4u) goto L_08AA4BA4;
    return;
L_08AA4BA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AA4BE8;
    }
    goto L_08AA4BB4;
L_08AA4BB4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA4BCCu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA4BCCu) goto L_08AA4BCC;
    return;
L_08AA4BCC:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(213));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA4BE4u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA4BE4u) goto L_08AA4BE4;
    return;
L_08AA4BE4:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AA4BE8;
L_08AA4BE8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA4BFCu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA4BFCu) goto L_08AA4BFC;
    return;
L_08AA4BFC:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA4C14u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA4C14u) goto L_08AA4C14;
    return;
L_08AA4C14:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA4B94;
      }
      goto L_08AA4C28;
    }
L_08AA4C28:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(256));
    goto L_08AA4C30;
L_08AA4C30:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA4C4Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA4C4Cu) goto L_08AA4C4C;
    return;
L_08AA4C4C:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA4C64u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA4C64u) goto L_08AA4C64;
    return;
L_08AA4C64:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA4C30;
      }
      goto L_08AA4C74;
    }
L_08AA4C74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4D84;
      }
      goto L_08AA4C7C;
    }
L_08AA4C7C:
    ctx.set_gpr(31, 0x08AA4C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4C84u) goto L_08AA4C84;
    return;
L_08AA4C84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA4C90u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA4C90u) goto L_08AA4C90;
    return;
L_08AA4C90:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AA4D84;
      }
      goto L_08AA4C9C;
    }
L_08AA4C9C:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(34));
    goto L_08AA4CA4;
L_08AA4CA4:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA4CB4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA4CB4u) goto L_08AA4CB4;
    return;
L_08AA4CB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AA4CF8;
    }
    goto L_08AA4CC4;
L_08AA4CC4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA4CDCu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA4CDCu) goto L_08AA4CDC;
    return;
L_08AA4CDC:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(213));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA4CF4u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA4CF4u) goto L_08AA4CF4;
    return;
L_08AA4CF4:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AA4CF8;
L_08AA4CF8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA4D0Cu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA4D0Cu) goto L_08AA4D0C;
    return;
L_08AA4D0C:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA4D24u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA4D24u) goto L_08AA4D24;
    return;
L_08AA4D24:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA4CA4;
      }
      goto L_08AA4D38;
    }
L_08AA4D38:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(182));
    goto L_08AA4D40;
L_08AA4D40:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA4D5Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA4D5Cu) goto L_08AA4D5C;
    return;
L_08AA4D5C:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA4D74u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA4D74u) goto L_08AA4D74;
    return;
L_08AA4D74:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA4D40;
      }
      goto L_08AA4D84;
    }
L_08AA4D84:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AA4D88;
L_08AA4D88:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA4D9Cu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA4D9Cu) goto L_08AA4D9C;
    return;
L_08AA4D9C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA4DACu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA4DACu) goto L_08AA4DAC;
    return;
L_08AA4DAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15312)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(456));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15312)));
        goto L_08AA4E24;
    }
    goto L_08AA4DBC;
L_08AA4DBC:
    ctx.set_gpr(31, 0x08AA4DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA4DC4u) goto L_08AA4DC4;
    return;
L_08AA4DC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA4DD0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AA4DD0u) goto L_08AA4DD0;
    return;
L_08AA4DD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4E20;
      }
      goto L_08AA4DD8;
    }
L_08AA4DD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15312)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15312), ctx.gpr[4]);
    goto L_08AA4DEC;
L_08AA4DEC:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.hi);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_08AA4E0C;
    }
    goto L_08AA4DFC;
L_08AA4DFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15312)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15312), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA4E18;
      }
      goto L_08AA4E0C;
    }
L_08AA4E0C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA4DEC;
      }
      goto L_08AA4E18;
    }
L_08AA4E18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15289), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AA4E20;
L_08AA4E20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15312)));
    goto L_08AA4E24;
L_08AA4E24:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(24));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15316)));
        goto L_08AA4E9C;
    }
    goto L_08AA4E30;
L_08AA4E30:
    ctx.set_gpr(31, 0x08AA4E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA4E38u) goto L_08AA4E38;
    return;
L_08AA4E38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA4E44u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AA4E44u) goto L_08AA4E44;
    return;
L_08AA4E44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4E98;
      }
      goto L_08AA4E4C;
    }
L_08AA4E4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15312)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15312), ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[5]);
    goto L_08AA4E64;
L_08AA4E64:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.hi);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_08AA4E84;
    }
    goto L_08AA4E74;
L_08AA4E74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15312)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15312), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA4E90;
      }
      goto L_08AA4E84;
    }
L_08AA4E84:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 12 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[5]);
        goto L_08AA4E64;
    }
    goto L_08AA4E90;
L_08AA4E90:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15289), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AA4E98;
L_08AA4E98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15316)));
    goto L_08AA4E9C;
L_08AA4E9C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(204));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15316)));
        goto L_08AA4F10;
    }
    goto L_08AA4EA8;
L_08AA4EA8:
    ctx.set_gpr(31, 0x08AA4EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA4EB0u) goto L_08AA4EB0;
    return;
L_08AA4EB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA4EBCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AA4EBCu) goto L_08AA4EBC;
    return;
L_08AA4EBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4F0C;
      }
      goto L_08AA4EC4;
    }
L_08AA4EC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15316)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15316), ctx.gpr[4]);
    goto L_08AA4ED8;
L_08AA4ED8:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.hi);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_08AA4EF8;
    }
    goto L_08AA4EE8;
L_08AA4EE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15316)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15316), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA4F04;
      }
      goto L_08AA4EF8;
    }
L_08AA4EF8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA4ED8;
      }
      goto L_08AA4F04;
    }
L_08AA4F04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15289), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AA4F0C;
L_08AA4F0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15316)));
    goto L_08AA4F10;
L_08AA4F10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(36));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15289)));
        goto L_08AA4F88;
    }
    goto L_08AA4F1C;
L_08AA4F1C:
    ctx.set_gpr(31, 0x08AA4F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA4F24u) goto L_08AA4F24;
    return;
L_08AA4F24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA4F30u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AA4F30u) goto L_08AA4F30;
    return;
L_08AA4F30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4F84;
      }
      goto L_08AA4F38;
    }
L_08AA4F38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15316)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15316), ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[5]);
    goto L_08AA4F50;
L_08AA4F50:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.hi);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_08AA4F70;
    }
    goto L_08AA4F60;
L_08AA4F60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15316)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15316), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA4F7C;
      }
      goto L_08AA4F70;
    }
L_08AA4F70:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 12 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[5]);
        goto L_08AA4F50;
    }
    goto L_08AA4F7C;
L_08AA4F7C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15289), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AA4F84;
L_08AA4F84:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15289)));
    goto L_08AA4F88;
L_08AA4F88:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15289)));
        goto L_08AA5084;
    }
    goto L_08AA4F90;
L_08AA4F90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15316)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(36));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15316)));
        goto L_08AA4FD0;
    }
    goto L_08AA4FA0;
L_08AA4FA0:
    ctx.set_gpr(31, 0x08AA4FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA4FA8u) goto L_08AA4FA8;
    return;
L_08AA4FA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA4FB4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AA4FB4u) goto L_08AA4FB4;
    return;
L_08AA4FB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4FCC;
      }
      goto L_08AA4FBC;
    }
L_08AA4FBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(204));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15316), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15289), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AA4FCC;
L_08AA4FCC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15316)));
    goto L_08AA4FD0;
L_08AA4FD0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(204));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15312)));
        goto L_08AA500C;
    }
    goto L_08AA4FDC;
L_08AA4FDC:
    ctx.set_gpr(31, 0x08AA4FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA4FE4u) goto L_08AA4FE4;
    return;
L_08AA4FE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA4FF0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AA4FF0u) goto L_08AA4FF0;
    return;
L_08AA4FF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5008;
      }
      goto L_08AA4FF8;
    }
L_08AA4FF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(36));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15316), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15289), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AA5008;
L_08AA5008:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15312)));
    goto L_08AA500C;
L_08AA500C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(24));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15312)));
        goto L_08AA5048;
    }
    goto L_08AA5018;
L_08AA5018:
    ctx.set_gpr(31, 0x08AA5020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA5020u) goto L_08AA5020;
    return;
L_08AA5020:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA502Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AA502Cu) goto L_08AA502C;
    return;
L_08AA502C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5044;
      }
      goto L_08AA5034;
    }
L_08AA5034:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(456));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15312), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15289), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AA5044;
L_08AA5044:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15312)));
    goto L_08AA5048;
L_08AA5048:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(456));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA5080;
      }
      goto L_08AA5054;
    }
L_08AA5054:
    ctx.set_gpr(31, 0x08AA505Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA505Cu) goto L_08AA505C;
    return;
L_08AA505C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA5068u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5068u) goto L_08AA5068;
    return;
L_08AA5068:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5080;
      }
      goto L_08AA5070;
    }
L_08AA5070:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(24));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15312), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15289), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AA5080;
L_08AA5080:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15289)));
    goto L_08AA5084;
L_08AA5084:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA52FC;
      }
      goto L_08AA508C;
    }
L_08AA508C:
    ctx.set_gpr(31, 0x08AA5094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA5094u) goto L_08AA5094;
    return;
L_08AA5094:
    ctx.set_gpr(31, 0x08AA509Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x08AA509Cu) goto L_08AA509C;
    return;
L_08AA509C:
    ctx.set_gpr(2, 49736u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AA50BCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA50BCu) goto L_08AA50BC;
    return;
L_08AA50BC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(31, 0x08AA50C8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AA50C8u) goto L_08AA50C8;
    return;
L_08AA50C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AA52D8;
      }
      goto L_08AA50D4;
    }
L_08AA50D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15308)));
    goto L_08AA50D8;
L_08AA50D8:
    if (ctx.gpr[2] == ctx.gpr[17]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA5178;
    }
    goto L_08AA50E0;
L_08AA50E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA50ECu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA50ECu) goto L_08AA50EC;
    return;
L_08AA50EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x08AA5104u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA5104u) goto L_08AA5104;
    return;
L_08AA5104:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
        goto L_08AA52C8;
    }
    goto L_08AA510C;
L_08AA510C:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) && ctx.fpr[0] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA52C4;
      }
      goto L_08AA5124;
    }
L_08AA5124:
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08AA513Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA513Cu) goto L_08AA513C;
    return;
L_08AA513C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(31, 0x08AA5148u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AA5148u) goto L_08AA5148;
    return;
L_08AA5148:
    ctx.set_gpr(31, 0x08AA5150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA5150u) goto L_08AA5150;
    return;
L_08AA5150:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15280)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15284)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(31, 0x08AA5170u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 312u, 0x088595D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA5170u) goto L_08AA5170;
    return;
L_08AA5170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA52C4;
      }
      goto L_08AA5178;
    }
L_08AA5178:
    ctx.set_gpr(31, 0x08AA5180u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA5180u) goto L_08AA5180;
    return;
L_08AA5180:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15312)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15316)));
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08AA51A4u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA51A4u) goto L_08AA51A4;
    return;
L_08AA51A4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(31, 0x08AA51B0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AA51B0u) goto L_08AA51B0;
    return;
L_08AA51B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(31, 0x08AA51C8u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA51C8u) goto L_08AA51C8;
    return;
L_08AA51C8:
    ctx.set_gpr(31, 0x08AA51D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA51D0u) goto L_08AA51D0;
    return;
L_08AA51D0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15280)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15284)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(31, 0x08AA51F0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 312u, 0x088595D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA51F0u) goto L_08AA51F0;
    return;
L_08AA51F0:
    ctx.set_gpr(31, 0x08AA51F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA51F8u) goto L_08AA51F8;
    return;
L_08AA51F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08AA520Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA520Cu) goto L_08AA520C;
    return;
L_08AA520C:
    ctx.set_gpr(31, 0x08AA5214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5214u) goto L_08AA5214;
    return;
L_08AA5214:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AA522Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA522Cu) goto L_08AA522C;
    return;
L_08AA522C:
    ctx.set_gpr(31, 0x08AA5234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5234u) goto L_08AA5234;
    return;
L_08AA5234:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15312)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15316)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08AA5254u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA5254u) goto L_08AA5254;
    return;
L_08AA5254:
    ctx.set_gpr(31, 0x08AA525Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA525Cu) goto L_08AA525C;
    return;
L_08AA525C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA5270u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5270u) goto L_08AA5270;
    return;
L_08AA5270:
    ctx.set_gpr(31, 0x08AA5278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5278u) goto L_08AA5278;
    return;
L_08AA5278:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15312)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15316)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA5298u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA5298u) goto L_08AA5298;
    return;
L_08AA5298:
    ctx.set_gpr(31, 0x08AA52A0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08AA52A0u) goto L_08AA52A0;
    return;
L_08AA52A0:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15312)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15316)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15320)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(31, 0x08AA52C4u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA52C4u) goto L_08AA52C4;
    return;
L_08AA52C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    goto L_08AA52C8;
L_08AA52C8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15308)));
        goto L_08AA50D8;
    }
    goto L_08AA52D8;
L_08AA52D8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.set_gpr(31, 0x08AA52E4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA52E4u) goto L_08AA52E4;
    return;
L_08AA52E4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    ctx.set_gpr(31, 0x08AA52F0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AA629C;
L_08AA52F0:
    ctx.set_gpr(31, 0x08AA52F8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AA63B0;
L_08AA52F8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15289), static_cast<std::uint8_t>(0u));
    goto L_08AA52FC;
L_08AA52FC:
    ctx.set_gpr(31, 0x08AA5304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA5304u) goto L_08AA5304;
    return;
L_08AA5304:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA5310u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA5310u) goto L_08AA5310;
    return;
L_08AA5310:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA54F8;
      }
      goto L_08AA5318;
    }
L_08AA5318:
    ctx.set_gpr(31, 0x08AA5320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5320u) goto L_08AA5320;
    return;
L_08AA5320:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA5334u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5334u) goto L_08AA5334;
    return;
L_08AA5334:
    ctx.set_gpr(31, 0x08AA533Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA533Cu) goto L_08AA533C;
    return;
L_08AA533C:
    ctx.set_gpr(31, 0x08AA5344u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x08AA5344u) goto L_08AA5344;
    return;
L_08AA5344:
    ctx.set_gpr(2, 49736u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08AA5364u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5364u) goto L_08AA5364;
    return;
L_08AA5364:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(31, 0x08AA5370u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AA5370u) goto L_08AA5370;
    return;
L_08AA5370:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_08AA54C4;
      }
      goto L_08AA537C;
    }
L_08AA537C:
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08AA5380;
L_08AA5380:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    if (ctx.gpr[2] == ctx.gpr[18]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA5424;
    }
    goto L_08AA538C;
L_08AA538C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA5398u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA5398u) goto L_08AA5398;
    return;
L_08AA5398:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x08AA53B0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA53B0u) goto L_08AA53B0;
    return;
L_08AA53B0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
        goto L_08AA54B4;
    }
    goto L_08AA53B8;
L_08AA53B8:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) && ctx.fpr[0] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA54B0;
      }
      goto L_08AA53D0;
    }
L_08AA53D0:
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08AA53E8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA53E8u) goto L_08AA53E8;
    return;
L_08AA53E8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(31, 0x08AA53F4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AA53F4u) goto L_08AA53F4;
    return;
L_08AA53F4:
    ctx.set_gpr(31, 0x08AA53FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA53FCu) goto L_08AA53FC;
    return;
L_08AA53FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15280)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15284)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(31, 0x08AA541Cu);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 312u, 0x088595D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA541Cu) goto L_08AA541C;
    return;
L_08AA541C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA54B0;
      }
      goto L_08AA5424;
    }
L_08AA5424:
    ctx.set_gpr(31, 0x08AA542Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA542Cu) goto L_08AA542C;
    return;
L_08AA542C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(31, 0x08AA5444u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA5444u) goto L_08AA5444;
    return;
L_08AA5444:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15684)));
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15716)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08AA5460u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5460u) goto L_08AA5460;
    return;
L_08AA5460:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(31, 0x08AA546Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AA546Cu) goto L_08AA546C;
    return;
L_08AA546C:
    ctx.set_gpr(31, 0x08AA5474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA5474u) goto L_08AA5474;
    return;
L_08AA5474:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15280)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15284)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(31, 0x08AA5494u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 312u, 0x088595D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA5494u) goto L_08AA5494;
    return;
L_08AA5494:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15684)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15716)));
    ctx.set_gpr(31, 0x08AA54B0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA54B0u) goto L_08AA54B0;
    return;
L_08AA54B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    goto L_08AA54B4;
L_08AA54B4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA5380;
      }
      goto L_08AA54C4;
    }
L_08AA54C4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15288), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA54DCu);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
    goto L_08AA6690;
L_08AA54DC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    ctx.set_gpr(31, 0x08AA54E8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AA629C;
L_08AA54E8:
    ctx.set_gpr(31, 0x08AA54F0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AA63B0;
L_08AA54F0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AA55B0;
      }
      goto L_08AA54F8;
    }
L_08AA54F8:
    ctx.set_gpr(31, 0x08AA5500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA5500u) goto L_08AA5500;
    return;
L_08AA5500:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA550Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA550Cu) goto L_08AA550C;
    return;
L_08AA550C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5530;
      }
      goto L_08AA5514;
    }
L_08AA5514:
    ctx.set_gpr(31, 0x08AA551Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA551Cu) goto L_08AA551C;
    return;
L_08AA551C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA5528u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA5528u) goto L_08AA5528;
    return;
L_08AA5528:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA55AC;
      }
      goto L_08AA5530;
    }
L_08AA5530:
    ctx.set_gpr(31, 0x08AA5538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5538u) goto L_08AA5538;
    return;
L_08AA5538:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA554Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA554Cu) goto L_08AA554C;
    return;
L_08AA554C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15400), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA5568u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15756), 0u);
    goto L_08AA74B0;
L_08AA5568:
    ctx.set_gpr(31, 0x08AA5570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5570u) goto L_08AA5570;
    return;
L_08AA5570:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AA5584u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5584u) goto L_08AA5584;
    return;
L_08AA5584:
    ctx.set_gpr(31, 0x08AA558Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA558Cu) goto L_08AA558C;
    return;
L_08AA558C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08AA55A0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA55A0u) goto L_08AA55A0;
    return;
L_08AA55A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA55ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    goto L_08AA6690;
L_08AA55AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AA55B0;
L_08AA55B0:
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
L_08AA55C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08AA55F4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08AA55F4u) goto L_08AA55F4;
    return;
L_08AA55F4:
    ctx.set_gpr(31, 0x08AA55FCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08AA55FCu) goto L_08AA55FC;
    return;
L_08AA55FC:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA560Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA560Cu) goto L_08AA560C;
    return;
L_08AA560C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15389)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15390)));
        goto L_08AA564C;
    }
    goto L_08AA5618;
L_08AA5618:
    ctx.set_gpr(31, 0x08AA5620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA5620u) goto L_08AA5620;
    return;
L_08AA5620:
    ctx.set_gpr(31, 0x08AA5628u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA5628u) goto L_08AA5628;
    return;
L_08AA5628:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AA5640u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(31));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AA5640u) goto L_08AA5640;
    return;
L_08AA5640:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15390)));
    goto L_08AA564C;
L_08AA564C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15288)));
        goto L_08AA5678;
    }
    goto L_08AA5654;
L_08AA5654:
    ctx.set_gpr(31, 0x08AA565Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AA565Cu) goto L_08AA565C;
    return;
L_08AA565C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08AA566Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32620)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AA566Cu) goto L_08AA566C;
    return;
L_08AA566C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15288)));
    goto L_08AA5678;
L_08AA5678:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AA5728;
    }
    goto L_08AA5680;
L_08AA5680:
    ctx.set_gpr(31, 0x08AA5688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5688u) goto L_08AA5688;
    return;
L_08AA5688:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AA569Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA569Cu) goto L_08AA569C;
    return;
L_08AA569C:
    ctx.set_gpr(31, 0x08AA56A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA56A4u) goto L_08AA56A4;
    return;
L_08AA56A4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15312)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15316)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, 17174u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA56D0u);
    ctx.fpr[13] = ctx.fpr[1] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA56D0u) goto L_08AA56D0;
    return;
L_08AA56D0:
    ctx.set_gpr(31, 0x08AA56D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA56D8u) goto L_08AA56D8;
    return;
L_08AA56D8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15320)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08AA56F0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    goto L_08AA6248;
L_08AA56F0:
    ctx.set_gpr(31, 0x08AA56F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA56F8u) goto L_08AA56F8;
    return;
L_08AA56F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AA5714u);
    ctx.set_gpr(9, 0u + 0u);
    goto L_08AA620C;
L_08AA5714:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15289), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15288), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15328), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AA5728;
L_08AA5728:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA5734u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15756), 0u);
    goto L_08AA74B0;
L_08AA5734:
    ctx.set_gpr(31, 0x08AA573Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA573Cu) goto L_08AA573C;
    return;
L_08AA573C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AA5750u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5750u) goto L_08AA5750;
    return;
L_08AA5750:
    ctx.set_gpr(31, 0x08AA5758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5758u) goto L_08AA5758;
    return;
L_08AA5758:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08AA576Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA576Cu) goto L_08AA576C;
    return;
L_08AA576C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    ctx.set_gpr(31, 0x08AA5778u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AA629C;
L_08AA5778:
    ctx.set_gpr(31, 0x08AA5780u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AA63B0;
L_08AA5780:
    ctx.set_gpr(31, 0x08AA5788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA5788u) goto L_08AA5788;
    return;
L_08AA5788:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA5794u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5794u) goto L_08AA5794;
    return;
L_08AA5794:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA57A8;
      }
      goto L_08AA579C;
    }
L_08AA579C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15320)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15320), ctx.gpr[2]);
    goto L_08AA57A8;
L_08AA57A8:
    ctx.set_gpr(31, 0x08AA57B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA57B0u) goto L_08AA57B0;
    return;
L_08AA57B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA57BCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AA57BCu) goto L_08AA57BC;
    return;
L_08AA57BC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15320)));
        goto L_08AA57D4;
    }
    goto L_08AA57C4;
L_08AA57C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15320)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15320), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15320)));
    goto L_08AA57D4;
L_08AA57D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(360));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(360));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15320), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(31, 0x08AA57F0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15320), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA57F0u) goto L_08AA57F0;
    return;
L_08AA57F0:
    ctx.set_gpr(31, 0x08AA57F8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 884u, 0x0884B53Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA57F8u) goto L_08AA57F8;
    return;
L_08AA57F8:
    ctx.set_gpr(31, 0x08AA5800u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA5800u) goto L_08AA5800;
    return;
L_08AA5800:
    ctx.set_gpr(31, 0x08AA5808u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 895u, 0x0884B5B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA5808u) goto L_08AA5808;
    return;
L_08AA5808:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x08AA5814u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5814u) goto L_08AA5814;
    return;
L_08AA5814:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA5820u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5820u) goto L_08AA5820;
    return;
L_08AA5820:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AA5830u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5830u) goto L_08AA5830;
    return;
L_08AA5830:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA583Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA583Cu) goto L_08AA583C;
    return;
L_08AA583C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA5850u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5850u) goto L_08AA5850;
    return;
L_08AA5850:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, 16361u << 16u);
    ctx.set_gpr(6, 40960u << 16u);
    ctx.set_gpr(7, ctx.gpr[3] | 39321u);
    ctx.set_gpr(31, 0x08AA5868u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 106u, 0x0883CC54u>(ctx, &aot_mem) && ctx.pc == 0x08AA5868u) goto L_08AA5868;
    return;
L_08AA5868:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA58E0;
    }
    goto L_08AA5870;
L_08AA5870:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[21])) && ctx.fpr[0] == ctx.fpr[21]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(0u);
        goto L_08AA5894;
    }
    goto L_08AA5884;
L_08AA5884:
    ctx.set_gpr(2, 14119u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 50604u);
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_08AA5894;
L_08AA5894:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[20])) && ctx.fpr[0] == ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
        goto L_08AA58B4;
    }
    goto L_08AA58A4;
L_08AA58A4:
    ctx.set_gpr(2, 14119u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 50604u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    goto L_08AA58B4;
L_08AA58B4:
    ctx.set_gpr(31, 0x08AA58BCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    goto L_08AA67A8;
L_08AA58BC:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19608), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15320), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AA58E0;
L_08AA58E0:
    ctx.set_gpr(31, 0x08AA58E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA58E8u) goto L_08AA58E8;
    return;
L_08AA58E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA58F4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA58F4u) goto L_08AA58F4;
    return;
L_08AA58F4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA59A8;
    }
    goto L_08AA5900;
L_08AA5900:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(34));
    goto L_08AA590C;
L_08AA590C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA591Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA591Cu) goto L_08AA591C;
    return;
L_08AA591C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AA5960;
    }
    goto L_08AA592C;
L_08AA592C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA5944u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA5944u) goto L_08AA5944;
    return;
L_08AA5944:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(213));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA595Cu);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA595Cu) goto L_08AA595C;
    return;
L_08AA595C:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AA5960;
L_08AA5960:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA5974u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA5974u) goto L_08AA5974;
    return;
L_08AA5974:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA598Cu);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA598Cu) goto L_08AA598C;
    return;
L_08AA598C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA590C;
      }
      goto L_08AA59A0;
    }
L_08AA59A0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16256u << 16u);
      if (branch_taken) {
          goto L_08AA5BC8;
      }
      goto L_08AA59A8;
    }
L_08AA59A8:
    ctx.set_gpr(31, 0x08AA59B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA59B0u) goto L_08AA59B0;
    return;
L_08AA59B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA59BCu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA59BCu) goto L_08AA59BC;
    return;
L_08AA59BC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA5ABC;
    }
    goto L_08AA59C8;
L_08AA59C8:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(34));
    goto L_08AA59D4;
L_08AA59D4:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA59E4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA59E4u) goto L_08AA59E4;
    return;
L_08AA59E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AA5A28;
    }
    goto L_08AA59F4;
L_08AA59F4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA5A0Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA5A0Cu) goto L_08AA5A0C;
    return;
L_08AA5A0C:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(213));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA5A24u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA5A24u) goto L_08AA5A24;
    return;
L_08AA5A24:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AA5A28;
L_08AA5A28:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA5A3Cu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA5A3Cu) goto L_08AA5A3C;
    return;
L_08AA5A3C:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA5A54u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA5A54u) goto L_08AA5A54;
    return;
L_08AA5A54:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA59D4;
      }
      goto L_08AA5A68;
    }
L_08AA5A68:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(256));
    goto L_08AA5A70;
L_08AA5A70:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA5A8Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA5A8Cu) goto L_08AA5A8C;
    return;
L_08AA5A8C:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA5AA4u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA5AA4u) goto L_08AA5AA4;
    return;
L_08AA5AA4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA5A70;
      }
      goto L_08AA5AB4;
    }
L_08AA5AB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5BC4;
      }
      goto L_08AA5ABC;
    }
L_08AA5ABC:
    ctx.set_gpr(31, 0x08AA5AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5AC4u) goto L_08AA5AC4;
    return;
L_08AA5AC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA5AD0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA5AD0u) goto L_08AA5AD0;
    return;
L_08AA5AD0:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AA5BC4;
      }
      goto L_08AA5ADC;
    }
L_08AA5ADC:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(34));
    goto L_08AA5AE4;
L_08AA5AE4:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA5AF4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA5AF4u) goto L_08AA5AF4;
    return;
L_08AA5AF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AA5B38;
    }
    goto L_08AA5B04;
L_08AA5B04:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA5B1Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA5B1Cu) goto L_08AA5B1C;
    return;
L_08AA5B1C:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(213));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA5B34u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA5B34u) goto L_08AA5B34;
    return;
L_08AA5B34:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AA5B38;
L_08AA5B38:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA5B4Cu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA5B4Cu) goto L_08AA5B4C;
    return;
L_08AA5B4C:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA5B64u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA5B64u) goto L_08AA5B64;
    return;
L_08AA5B64:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA5AE4;
      }
      goto L_08AA5B78;
    }
L_08AA5B78:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(182));
    goto L_08AA5B80;
L_08AA5B80:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA5B9Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA5B9Cu) goto L_08AA5B9C;
    return;
L_08AA5B9C:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA5BB4u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA5BB4u) goto L_08AA5BB4;
    return;
L_08AA5BB4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA5B80;
      }
      goto L_08AA5BC4;
    }
L_08AA5BC4:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AA5BC8;
L_08AA5BC8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA5BDCu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA5BDCu) goto L_08AA5BDC;
    return;
L_08AA5BDC:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA5BECu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA5BECu) goto L_08AA5BEC;
    return;
L_08AA5BEC:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AA5BF0;
L_08AA5BF0:
    ctx.set_gpr(31, 0x08AA5BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5BF8u) goto L_08AA5BF8;
    return;
L_08AA5BF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(69));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA5C0Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5C0Cu) goto L_08AA5C0C;
    return;
L_08AA5C0C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5BF0;
      }
      goto L_08AA5C1C;
    }
L_08AA5C1C:
    ctx.set_gpr(31, 0x08AA5C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5C24u) goto L_08AA5C24;
    return;
L_08AA5C24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08AA5C38u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5C38u) goto L_08AA5C38;
    return;
L_08AA5C38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AA5CA0;
      }
      goto L_08AA5C44;
    }
L_08AA5C44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AA5C48;
L_08AA5C48:
    ctx.set_gpr(31, 0x08AA5C50u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA5C50u) goto L_08AA5C50;
    return;
L_08AA5C50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08AA5C68u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA5C68u) goto L_08AA5C68;
    return;
L_08AA5C68:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
        goto L_08AA5C90;
    }
    goto L_08AA5C70;
L_08AA5C70:
    ctx.set_gpr(31, 0x08AA5C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5C78u) goto L_08AA5C78;
    return;
L_08AA5C78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA5C8Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5C8Cu) goto L_08AA5C8C;
    return;
L_08AA5C8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    goto L_08AA5C90;
L_08AA5C90:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA5C48;
    }
    goto L_08AA5CA0;
L_08AA5CA0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15320)));
    ctx.set_gpr(2, 17174u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08AA5CBCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_08AA66A8;
L_08AA5CBC:
    ctx.set_gpr(31, 0x08AA5CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5CC4u) goto L_08AA5CC4;
    return;
L_08AA5CC4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15312)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15316)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[3] + ctx.fpr[2];
    ctx.set_gpr(31, 0x08AA5CF4u);
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA5CF4u) goto L_08AA5CF4;
    return;
L_08AA5CF4:
    ctx.set_gpr(31, 0x08AA5CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5CFCu) goto L_08AA5CFC;
    return;
L_08AA5CFC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15320)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17204u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA5D20u);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    goto L_08AA6248;
L_08AA5D20:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15328)));
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15312)));
        goto L_08AA5DFC;
    }
    goto L_08AA5D2C;
L_08AA5D2C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15312)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[2] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[2])) || ctx.fpr[1] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA5EC4;
      }
      goto L_08AA5D5C;
    }
L_08AA5D5C:
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA5EC4;
      }
      goto L_08AA5D74;
    }
L_08AA5D74:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15316)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[2])) || ctx.fpr[1] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA5EC4;
      }
      goto L_08AA5D98;
    }
L_08AA5D98:
    ctx.set_gpr(2, 17288u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA5EC4;
      }
      goto L_08AA5DB0;
    }
L_08AA5DB0:
    ctx.set_gpr(31, 0x08AA5DB8u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15328), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5DB8u) goto L_08AA5DB8;
    return;
L_08AA5DB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AA5DCCu);
    ctx.set_gpr(7, 0u + 0u);
    goto L_08AA61D8;
L_08AA5DCC:
    ctx.set_gpr(31, 0x08AA5DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5DD4u) goto L_08AA5DD4;
    return;
L_08AA5DD4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(50));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AA5DF4u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5DF4u) goto L_08AA5DF4;
    return;
L_08AA5DF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5EC4;
      }
      goto L_08AA5DFC;
    }
L_08AA5DFC:
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[2] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[2])) || ctx.fpr[1] < ctx.fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AA5E80;
    }
    goto L_08AA5E28;
L_08AA5E28:
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA5E7C;
      }
      goto L_08AA5E40;
    }
L_08AA5E40:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15316)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[2])) || ctx.fpr[1] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA5E7C;
      }
      goto L_08AA5E64;
    }
L_08AA5E64:
    ctx.set_gpr(2, 17288u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA5EC4;
      }
      goto L_08AA5E7C;
    }
L_08AA5E7C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AA5E80;
L_08AA5E80:
    ctx.set_gpr(31, 0x08AA5E88u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15328), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5E88u) goto L_08AA5E88;
    return;
L_08AA5E88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AA5E9Cu);
    ctx.set_gpr(7, 0u + 0u);
    goto L_08AA61A4;
L_08AA5E9C:
    ctx.set_gpr(31, 0x08AA5EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5EA4u) goto L_08AA5EA4;
    return;
L_08AA5EA4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AA5EC4u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5EC4u) goto L_08AA5EC4;
    return;
L_08AA5EC4:
    ctx.set_gpr(31, 0x08AA5ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA5ECCu) goto L_08AA5ECC;
    return;
L_08AA5ECC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA5ED8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA5ED8u) goto L_08AA5ED8;
    return;
L_08AA5ED8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15328)));
        goto L_08AA5F74;
    }
    goto L_08AA5EE0;
L_08AA5EE0:
    ctx.set_gpr(31, 0x08AA5EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5EE8u) goto L_08AA5EE8;
    return;
L_08AA5EE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AA5EFCu);
    ctx.set_gpr(7, 0u + 0u);
    goto L_08AA61D8;
L_08AA5EFC:
    ctx.set_gpr(31, 0x08AA5F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5F04u) goto L_08AA5F04;
    return;
L_08AA5F04:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AA5F24u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5F24u) goto L_08AA5F24;
    return;
L_08AA5F24:
    ctx.set_gpr(31, 0x08AA5F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5F2Cu) goto L_08AA5F2C;
    return;
L_08AA5F2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AA5F40u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5F40u) goto L_08AA5F40;
    return;
L_08AA5F40:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA5F4Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    goto L_08AA6690;
L_08AA5F4C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15320)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15320), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15288), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15328)));
    goto L_08AA5F74;
L_08AA5F74:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08AA6184;
    }
    goto L_08AA5F7C;
L_08AA5F7C:
    ctx.set_gpr(31, 0x08AA5F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA5F84u) goto L_08AA5F84;
    return;
L_08AA5F84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA5F90u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA5F90u) goto L_08AA5F90;
    return;
L_08AA5F90:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5FB4;
      }
      goto L_08AA5F98;
    }
L_08AA5F98:
    ctx.set_gpr(31, 0x08AA5FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA5FA0u) goto L_08AA5FA0;
    return;
L_08AA5FA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA5FACu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA5FACu) goto L_08AA5FAC;
    return;
L_08AA5FAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA6180;
      }
      goto L_08AA5FB4;
    }
L_08AA5FB4:
    ctx.set_gpr(31, 0x08AA5FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5FBCu) goto L_08AA5FBC;
    return;
L_08AA5FBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA5FD0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5FD0u) goto L_08AA5FD0;
    return;
L_08AA5FD0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15304)));
    ctx.set_gpr(31, 0x08AA5FDCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AA5FDCu) goto L_08AA5FDC;
    return;
L_08AA5FDC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15308)));
    ctx.set_gpr(31, 0x08AA5FE8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA5FE8u) goto L_08AA5FE8;
    return;
L_08AA5FE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08AA6000u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA6000u) goto L_08AA6000;
    return;
L_08AA6000:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15316)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15312)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15320)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, 17076u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.set_gpr(31, 0x08AA6030u);
    ctx.fpr[14] = ctx.fpr[0] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6030u) goto L_08AA6030;
    return;
L_08AA6030:
    ctx.set_gpr(31, 0x08AA6038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA6038u) goto L_08AA6038;
    return;
L_08AA6038:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AA604Cu);
    ctx.set_gpr(7, 0u + 0u);
    goto L_08AA61D8;
L_08AA604C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15320), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_08AA60EC;
      }
      goto L_08AA605C;
    }
L_08AA605C:
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08AA6060;
L_08AA6060:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA606Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA606Cu) goto L_08AA606C;
    return;
L_08AA606C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08AA6084u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA6084u) goto L_08AA6084;
    return;
L_08AA6084:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1000));
        goto L_08AA60C8;
    }
    goto L_08AA608C;
L_08AA608C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15556), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15588), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15620), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15652), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA60D8;
      }
      goto L_08AA60C8;
    }
L_08AA60C8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15556), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15588), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15620), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15652), ctx.gpr[2]);
    goto L_08AA60D8;
L_08AA60D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA6060;
      }
      goto L_08AA60EC;
    }
L_08AA60EC:
    ctx.set_gpr(31, 0x08AA60F4u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15288), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA60F4u) goto L_08AA60F4;
    return;
L_08AA60F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AA6108u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA6108u) goto L_08AA6108;
    return;
L_08AA6108:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA6120u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA6120u) goto L_08AA6120;
    return;
L_08AA6120:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15400), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA613Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15756), 0u);
    goto L_08AA74B0;
L_08AA613C:
    ctx.set_gpr(31, 0x08AA6144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA6144u) goto L_08AA6144;
    return;
L_08AA6144:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AA6158u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA6158u) goto L_08AA6158;
    return;
L_08AA6158:
    ctx.set_gpr(31, 0x08AA6160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA6160u) goto L_08AA6160;
    return;
L_08AA6160:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08AA6174u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA6174u) goto L_08AA6174;
    return;
L_08AA6174:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA6180u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AA6690;
L_08AA6180:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08AA6184;
L_08AA6184:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA61A4:
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-13100)));
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 489u, 0x08847080u>(ctx, &aot_mem); return;
L_08AA61D8:
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-13100)));
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 488u, 0x0884705Cu>(ctx, &aot_mem); return;
L_08AA620C:
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-13100)));
    ctx.set_gpr(8, ctx.gpr[9] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 442u, 0x08846C04u>(ctx, &aot_mem); return;
L_08AA6248:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, ctx.gpr[5] << 4u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] << 3u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, 5u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-13100)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AA6294;
    }
    goto L_08AA6288;
L_08AA6288:
    ctx.set_gpr(31, 0x08AA6290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 413u, 0x088465E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA6290u) goto L_08AA6290;
    return;
L_08AA6290:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AA6294;
L_08AA6294:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA629C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08AA62C0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08AA62C0u) goto L_08AA62C0;
    return;
L_08AA62C0:
    ctx.set_gpr(31, 0x08AA62C8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08AA62C8u) goto L_08AA62C8;
    return;
L_08AA62C8:
    ctx.set_gpr(31, 0x08AA62D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA62D0u) goto L_08AA62D0;
    return;
L_08AA62D0:
    ctx.set_gpr(31, 0x08AA62D8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x08AA62D8u) goto L_08AA62D8;
    return;
L_08AA62D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AA6398;
      }
      goto L_08AA62E0;
    }
L_08AA62E0:
    ctx.set_gpr(2, 49736u << 16u);
    goto L_08AA62E4;
L_08AA62E4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08AA6300u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA6300u) goto L_08AA6300;
    return;
L_08AA6300:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08AA630Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AA630Cu) goto L_08AA630C;
    return;
L_08AA630C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA6318u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA6318u) goto L_08AA6318;
    return;
L_08AA6318:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08AA6330u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA6330u) goto L_08AA6330;
    return;
L_08AA6330:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08AA638C;
    }
    goto L_08AA6338;
L_08AA6338:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AA6354u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA6354u) goto L_08AA6354;
    return;
L_08AA6354:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08AA6360u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AA6360u) goto L_08AA6360;
    return;
L_08AA6360:
    ctx.set_gpr(31, 0x08AA6368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA6368u) goto L_08AA6368;
    return;
L_08AA6368:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15280)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15284)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08AA6388u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 312u, 0x088595D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA6388u) goto L_08AA6388;
    return;
L_08AA6388:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08AA638C;
L_08AA638C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, 49736u << 16u);
        goto L_08AA62E4;
    }
    goto L_08AA6398;
L_08AA6398:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA63B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(31, 0x08AA63D4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA63D4u) goto L_08AA63D4;
    return;
L_08AA63D4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AA6494;
      }
      goto L_08AA63E0;
    }
L_08AA63E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AA63E4;
L_08AA63E4:
    ctx.set_gpr(31, 0x08AA63ECu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA63ECu) goto L_08AA63EC;
    return;
L_08AA63EC:
    ctx.set_gpr(31, 0x08AA63F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA63F4u) goto L_08AA63F4;
    return;
L_08AA63F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA6408u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA6408u) goto L_08AA6408;
    return;
L_08AA6408:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08AA6420u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA6420u) goto L_08AA6420;
    return;
L_08AA6420:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08AA6488;
    }
    goto L_08AA6428;
L_08AA6428:
    ctx.set_gpr(31, 0x08AA6430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA6430u) goto L_08AA6430;
    return;
L_08AA6430:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA6444u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA6444u) goto L_08AA6444;
    return;
L_08AA6444:
    ctx.set_gpr(31, 0x08AA644Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA644Cu) goto L_08AA644C;
    return;
L_08AA644C:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(31, 0x08AA6464u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA6464u) goto L_08AA6464;
    return;
L_08AA6464:
    ctx.set_gpr(31, 0x08AA646Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA646Cu) goto L_08AA646C;
    return;
L_08AA646C:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(8, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA6484u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA6484u) goto L_08AA6484;
    return;
L_08AA6484:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AA6488;
L_08AA6488:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA63E4;
    }
    goto L_08AA6494;
L_08AA6494:
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
L_08AA64AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AA64C0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA64C0u) goto L_08AA64C0;
    return;
L_08AA64C0:
    ctx.set_gpr(31, 0x08AA64C8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA64C8u) goto L_08AA64C8;
    return;
L_08AA64C8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AA64F4;
    }
    goto L_08AA64D0;
L_08AA64D0:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA64ECu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA64ECu) goto L_08AA64EC;
    return;
L_08AA64EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA6508;
      }
      goto L_08AA64F4;
    }
L_08AA64F4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA6508u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA6508u) goto L_08AA6508;
    return;
L_08AA6508:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(327));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x08AA651Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20044));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA651Cu) goto L_08AA651C;
    return;
L_08AA651C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < 10 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < 100 ? 1u : 0u);
        goto L_08AA654C;
    }
    goto L_08AA6530;
L_08AA6530:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(345));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x08AA6544u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA6544u) goto L_08AA6544;
    return;
L_08AA6544:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16256u << 16u);
      if (branch_taken) {
          goto L_08AA6590;
      }
      goto L_08AA654C;
    }
L_08AA654C:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < 201 ? 1u : 0u);
        goto L_08AA6570;
    }
    goto L_08AA6554;
L_08AA6554:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(341));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x08AA6568u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA6568u) goto L_08AA6568;
    return;
L_08AA6568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA658C;
      }
      goto L_08AA6570;
    }
L_08AA6570:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA658C;
      }
      goto L_08AA6578;
    }
L_08AA6578:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(337));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x08AA658Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA658Cu) goto L_08AA658C;
    return;
L_08AA658C:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AA6590;
L_08AA6590:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA65A4u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA65A4u) goto L_08AA65A4;
    return;
L_08AA65A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA65B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15356)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_08AA65E0;
    }
    goto L_08AA65CC;
L_08AA65CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15332)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA6608;
      }
      goto L_08AA65DC;
    }
L_08AA65DC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08AA65E0;
L_08AA65E0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA65F4u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA65F4u) goto L_08AA65F4;
    return;
L_08AA65F4:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(411));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x08AA6608u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19852));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA6608u) goto L_08AA6608;
    return;
L_08AA6608:
    ctx.set_gpr(31, 0x08AA6610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA6610u) goto L_08AA6610;
    return;
L_08AA6610:
    ctx.set_gpr(31, 0x08AA6618u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA6618u) goto L_08AA6618;
    return;
L_08AA6618:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AA6644;
    }
    goto L_08AA6620;
L_08AA6620:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA663Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA663Cu) goto L_08AA663C;
    return;
L_08AA663C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA6658;
      }
      goto L_08AA6644;
    }
L_08AA6644:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA6658u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA6658u) goto L_08AA6658;
    return;
L_08AA6658:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(410));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(211));
    ctx.set_gpr(31, 0x08AA666Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19852));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA666Cu) goto L_08AA666C;
    return;
L_08AA666C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA6684u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA6684u) goto L_08AA6684;
    return;
L_08AA6684:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA6690:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15292), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15296), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15288), static_cast<std::uint8_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15324), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA66A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(2, 15502u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 64053u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(13));
    ctx.set_gpr(31, 0x08AA66ECu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA66ECu) goto L_08AA66EC;
    return;
L_08AA66EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA66F8u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    goto L_08AA67A0;
L_08AA66F8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AA6708u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA6708u) goto L_08AA6708;
    return;
L_08AA6708:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA671Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA671Cu) goto L_08AA671C;
    return;
L_08AA671C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA6728u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AA6728u) goto L_08AA6728;
    return;
L_08AA6728:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AA6734u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA6734u) goto L_08AA6734;
    return;
L_08AA6734:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA6740u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    goto L_08AA6798;
L_08AA6740:
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA6750u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA6750u) goto L_08AA6750;
    return;
L_08AA6750:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA6764u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA6764u) goto L_08AA6764;
    return;
L_08AA6764:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AA6770u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AA6770u) goto L_08AA6770;
    return;
L_08AA6770:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA6798:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 302u, 0x0880D900u>(ctx, &aot_mem); return;
L_08AA67A0:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 200u, 0x0880D0E4u>(ctx, &aot_mem); return;
L_08AA67A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_fpr_bits(22, ctx.fpr_bits(12));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[22])) && ctx.fpr[0] == ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_fpr_bits(21, ctx.fpr_bits(13));
      if (branch_taken) {
          goto L_08AA67F8;
      }
      goto L_08AA67D0;
    }
L_08AA67D0:
    ctx.set_gpr(31, 0x08AA67D8u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA67D8u) goto L_08AA67D8;
    return;
L_08AA67D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA67E4u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    goto L_08AA6960;
L_08AA67E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA67F0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AA67F0u) goto L_08AA67F0;
    return;
L_08AA67F0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 17204u << 16u);
      if (branch_taken) {
          goto L_08AA681C;
      }
      goto L_08AA67F8;
    }
L_08AA67F8:
    ctx.set_gpr(31, 0x08AA6800u);
    ctx.fpr[12] = ctx.fpr[21] / ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA6800u) goto L_08AA6800;
    return;
L_08AA6800:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA680Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    goto L_08AA6960;
L_08AA680C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA6818u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AA6818u) goto L_08AA6818;
    return;
L_08AA6818:
    ctx.set_gpr(2, 17204u << 16u);
    goto L_08AA681C;
L_08AA681C:
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08AA682Cu);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA682Cu) goto L_08AA682C;
    return;
L_08AA682C:
    ctx.set_gpr(4, 21572u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] | 11544u);
    ctx.set_gpr(4, 16393u << 16u);
    ctx.set_gpr(7, ctx.gpr[4] | 8699u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA6848u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA6848u) goto L_08AA6848;
    return;
L_08AA6848:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA6854u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AA6854u) goto L_08AA6854;
    return;
L_08AA6854:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[1])) || ctx.fpr[22] < ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(0u);
        goto L_08AA688C;
    }
    goto L_08AA6868;
L_08AA6868:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[21]) || std::isnan(ctx.fpr[1])) || ctx.fpr[21] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA6888;
      }
      goto L_08AA6878;
    }
L_08AA6878:
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[1] - ctx.fpr[0];
      if (branch_taken) {
          goto L_08AA6944;
      }
      goto L_08AA6888;
    }
L_08AA6888:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    goto L_08AA688C;
L_08AA688C:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[1])) || ctx.fpr[22] < ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(0u);
        goto L_08AA68CC;
    }
    goto L_08AA689C;
L_08AA689C:
    ctx.set_fpu_condition((ctx.fpr[21] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA68C8;
      }
      goto L_08AA68AC;
    }
L_08AA68AC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AA68B8u);
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 671u, 0x0880F1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AA68B8u) goto L_08AA68B8;
    return;
L_08AA68B8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(90));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
      if (branch_taken) {
          goto L_08AA6944;
      }
      goto L_08AA68C8;
    }
L_08AA68C8:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    goto L_08AA68CC;
L_08AA68CC:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[1]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(0u);
        goto L_08AA690C;
    }
    goto L_08AA68DC;
L_08AA68DC:
    ctx.set_fpu_condition((ctx.fpr[21] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA6908;
      }
      goto L_08AA68EC;
    }
L_08AA68EC:
    ctx.set_gpr(2, 17204u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[2] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08AA6944;
      }
      goto L_08AA6908;
    }
L_08AA6908:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    goto L_08AA690C;
L_08AA690C:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[1]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_fpr_bits(0, ctx.fpr_bits(20));
        goto L_08AA6948;
    }
    goto L_08AA691C;
L_08AA691C:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[21]) || std::isnan(ctx.fpr[1])) || ctx.fpr[21] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA6944;
      }
      goto L_08AA692C;
    }
L_08AA692C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AA6938u);
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 671u, 0x0880F1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AA6938u) goto L_08AA6938;
    return;
L_08AA6938:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(270));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    goto L_08AA6944;
L_08AA6944:
    ctx.set_fpr_bits(0, ctx.fpr_bits(20));
    goto L_08AA6948;
L_08AA6948:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA6960:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 95u, 0x0880C838u>(ctx, &aot_mem); return;
L_08AA6968:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AA69A4u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 862u, 0x08A8AE94u>(ctx, &aot_mem) && ctx.pc == 0x08AA69A4u) goto L_08AA69A4;
    return;
L_08AA69A4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AA6BD0;
      }
      goto L_08AA69AC;
    }
L_08AA69AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA69B8u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 820u, 0x08866940u>(ctx, &aot_mem) && ctx.pc == 0x08AA69B8u) goto L_08AA69B8;
    return;
L_08AA69B8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA6D38;
    }
    goto L_08AA69C4;
L_08AA69C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AA69C8;
L_08AA69C8:
    ctx.set_gpr(31, 0x08AA69D0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AA69D0u) goto L_08AA69D0;
    return;
L_08AA69D0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA69E0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA69E0u) goto L_08AA69E0;
    return;
L_08AA69E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA69ECu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA69ECu) goto L_08AA69EC;
    return;
L_08AA69EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA6A80;
    }
    goto L_08AA69F8;
L_08AA69F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA6A08u);
    ctx.set_gpr(21, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6A08u) goto L_08AA6A08;
    return;
L_08AA6A08:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA6BB4;
    }
    goto L_08AA6A10;
L_08AA6A10:
    ctx.set_gpr(20, 2226u << 16u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-26036));
    ctx.set_gpr(19, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AA6A20;
L_08AA6A20:
    ctx.set_gpr(31, 0x08AA6A28u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA6A28u) goto L_08AA6A28;
    return;
L_08AA6A28:
    ctx.set_gpr(31, 0x08AA6A30u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08AA6A30u) goto L_08AA6A30;
    return;
L_08AA6A30:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[5]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA6A58;
    }
    goto L_08AA6A40;
L_08AA6A40:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AA6A54u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6A54u) goto L_08AA6A54;
    return;
L_08AA6A54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AA6A58;
L_08AA6A58:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AA6A6Cu);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6A6Cu) goto L_08AA6A6C;
    return;
L_08AA6A6C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA6A20;
    }
    goto L_08AA6A78;
L_08AA6A78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA6BB0;
      }
      goto L_08AA6A80;
    }
L_08AA6A80:
    ctx.set_gpr(31, 0x08AA6A88u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA6A88u) goto L_08AA6A88;
    return;
L_08AA6A88:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA6B1C;
    }
    goto L_08AA6A94;
L_08AA6A94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA6AA4u);
    ctx.set_gpr(21, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6AA4u) goto L_08AA6AA4;
    return;
L_08AA6AA4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AA6BB0;
      }
      goto L_08AA6AAC;
    }
L_08AA6AAC:
    ctx.set_gpr(20, 2226u << 16u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-26044));
    ctx.set_gpr(19, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AA6ABC;
L_08AA6ABC:
    ctx.set_gpr(31, 0x08AA6AC4u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA6AC4u) goto L_08AA6AC4;
    return;
L_08AA6AC4:
    ctx.set_gpr(31, 0x08AA6ACCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08AA6ACCu) goto L_08AA6ACC;
    return;
L_08AA6ACC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[5]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA6AF4;
    }
    goto L_08AA6ADC;
L_08AA6ADC:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AA6AF0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6AF0u) goto L_08AA6AF0;
    return;
L_08AA6AF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AA6AF4;
L_08AA6AF4:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AA6B08u);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6B08u) goto L_08AA6B08;
    return;
L_08AA6B08:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA6ABC;
    }
    goto L_08AA6B14;
L_08AA6B14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA6BB0;
      }
      goto L_08AA6B1C;
    }
L_08AA6B1C:
    ctx.set_gpr(31, 0x08AA6B24u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA6B24u) goto L_08AA6B24;
    return;
L_08AA6B24:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AA6BB0;
      }
      goto L_08AA6B30;
    }
L_08AA6B30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA6B40u);
    ctx.set_gpr(21, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6B40u) goto L_08AA6B40;
    return;
L_08AA6B40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AA6BB0;
      }
      goto L_08AA6B48;
    }
L_08AA6B48:
    ctx.set_gpr(20, 2226u << 16u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-26052));
    ctx.set_gpr(19, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AA6B58;
L_08AA6B58:
    ctx.set_gpr(31, 0x08AA6B60u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA6B60u) goto L_08AA6B60;
    return;
L_08AA6B60:
    ctx.set_gpr(31, 0x08AA6B68u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08AA6B68u) goto L_08AA6B68;
    return;
L_08AA6B68:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[5]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA6B90;
    }
    goto L_08AA6B78;
L_08AA6B78:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AA6B8Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6B8Cu) goto L_08AA6B8C;
    return;
L_08AA6B8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AA6B90;
L_08AA6B90:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AA6BA4u);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6BA4u) goto L_08AA6BA4;
    return;
L_08AA6BA4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA6B58;
    }
    goto L_08AA6BB0;
L_08AA6BB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AA6BB4;
L_08AA6BB4:
    ctx.set_gpr(31, 0x08AA6BBCu);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 820u, 0x08866940u>(ctx, &aot_mem) && ctx.pc == 0x08AA6BBCu) goto L_08AA6BBC;
    return;
L_08AA6BBC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA69C8;
    }
    goto L_08AA6BC8;
L_08AA6BC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA6D34;
      }
      goto L_08AA6BD0;
    }
L_08AA6BD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA6BDCu);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 820u, 0x08866940u>(ctx, &aot_mem) && ctx.pc == 0x08AA6BDCu) goto L_08AA6BDC;
    return;
L_08AA6BDC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA6D34;
      }
      goto L_08AA6BE8;
    }
L_08AA6BE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AA6BEC;
L_08AA6BEC:
    ctx.set_gpr(31, 0x08AA6BF4u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AA6BF4u) goto L_08AA6BF4;
    return;
L_08AA6BF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA6C00u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA6C00u) goto L_08AA6C00;
    return;
L_08AA6C00:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA6C5C;
    }
    goto L_08AA6C0C;
L_08AA6C0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA6C1Cu);
    ctx.set_gpr(17, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6C1Cu) goto L_08AA6C1C;
    return;
L_08AA6C1C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA6D20;
    }
    goto L_08AA6C24;
L_08AA6C24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AA6C28;
L_08AA6C28:
    ctx.set_gpr(31, 0x08AA6C30u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA6C30u) goto L_08AA6C30;
    return;
L_08AA6C30:
    ctx.set_gpr(31, 0x08AA6C38u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08AA6C38u) goto L_08AA6C38;
    return;
L_08AA6C38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA6C48u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6C48u) goto L_08AA6C48;
    return;
L_08AA6C48:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA6C28;
    }
    goto L_08AA6C54;
L_08AA6C54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA6D1C;
      }
      goto L_08AA6C5C;
    }
L_08AA6C5C:
    ctx.set_gpr(31, 0x08AA6C64u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA6C64u) goto L_08AA6C64;
    return;
L_08AA6C64:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA6CC0;
    }
    goto L_08AA6C70;
L_08AA6C70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA6C80u);
    ctx.set_gpr(17, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6C80u) goto L_08AA6C80;
    return;
L_08AA6C80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AA6D1C;
      }
      goto L_08AA6C88;
    }
L_08AA6C88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AA6C8C;
L_08AA6C8C:
    ctx.set_gpr(31, 0x08AA6C94u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA6C94u) goto L_08AA6C94;
    return;
L_08AA6C94:
    ctx.set_gpr(31, 0x08AA6C9Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08AA6C9Cu) goto L_08AA6C9C;
    return;
L_08AA6C9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA6CACu);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6CACu) goto L_08AA6CAC;
    return;
L_08AA6CAC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA6C8C;
    }
    goto L_08AA6CB8;
L_08AA6CB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA6D1C;
      }
      goto L_08AA6CC0;
    }
L_08AA6CC0:
    ctx.set_gpr(31, 0x08AA6CC8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA6CC8u) goto L_08AA6CC8;
    return;
L_08AA6CC8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AA6D1C;
      }
      goto L_08AA6CD4;
    }
L_08AA6CD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA6CE4u);
    ctx.set_gpr(17, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6CE4u) goto L_08AA6CE4;
    return;
L_08AA6CE4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AA6D1C;
      }
      goto L_08AA6CEC;
    }
L_08AA6CEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AA6CF0;
L_08AA6CF0:
    ctx.set_gpr(31, 0x08AA6CF8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA6CF8u) goto L_08AA6CF8;
    return;
L_08AA6CF8:
    ctx.set_gpr(31, 0x08AA6D00u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08AA6D00u) goto L_08AA6D00;
    return;
L_08AA6D00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA6D10u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6D10u) goto L_08AA6D10;
    return;
L_08AA6D10:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA6CF0;
    }
    goto L_08AA6D1C;
L_08AA6D1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AA6D20;
L_08AA6D20:
    ctx.set_gpr(31, 0x08AA6D28u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 820u, 0x08866940u>(ctx, &aot_mem) && ctx.pc == 0x08AA6D28u) goto L_08AA6D28;
    return;
L_08AA6D28:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA6BEC;
    }
    goto L_08AA6D34;
L_08AA6D34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AA6D38;
L_08AA6D38:
    ctx.set_gpr(31, 0x08AA6D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 820u, 0x08866940u>(ctx, &aot_mem) && ctx.pc == 0x08AA6D40u) goto L_08AA6D40;
    return;
L_08AA6D40:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(199));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA6D68;
    }
    goto L_08AA6D4C;
L_08AA6D4C:
    ctx.set_gpr(31, 0x08AA6D54u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 820u, 0x08866940u>(ctx, &aot_mem) && ctx.pc == 0x08AA6D54u) goto L_08AA6D54;
    return;
L_08AA6D54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA6D64u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 165u, 0x08A99780u>(ctx, &aot_mem) && ctx.pc == 0x08AA6D64u) goto L_08AA6D64;
    return;
L_08AA6D64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AA6D68;
L_08AA6D68:
    ctx.set_gpr(31, 0x08AA6D70u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AA6D70u) goto L_08AA6D70;
    return;
L_08AA6D70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08AA6D98:
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
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(31, 0x08AA6DD4u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 820u, 0x08866940u>(ctx, &aot_mem) && ctx.pc == 0x08AA6DD4u) goto L_08AA6DD4;
    return;
L_08AA6DD4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08AA741C;
    }
    goto L_08AA6DE0;
L_08AA6DE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA6DE4;
L_08AA6DE4:
    ctx.set_gpr(31, 0x08AA6DECu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AA6DECu) goto L_08AA6DEC;
    return;
L_08AA6DEC:
    ctx.set_gpr(31, 0x08AA6DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08AA6DF4u) goto L_08AA6DF4;
    return;
L_08AA6DF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA6E04u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    goto L_08AA7458;
L_08AA6E04:
    ctx.set_gpr(31, 0x08AA6E0Cu);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08AA6E0Cu) goto L_08AA6E0C;
    return;
L_08AA6E0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA6E1Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    goto L_08AA7458;
L_08AA6E1C:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.set_gpr(2, ctx.gpr[18] & 1u);
      if (branch_taken) {
          goto L_08AA6E34;
      }
      goto L_08AA6E28;
    }
L_08AA6E28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA6E34;
      }
      goto L_08AA6E30;
    }
L_08AA6E30:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    goto L_08AA6E34;
L_08AA6E34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7188;
      }
      goto L_08AA6E3C;
    }
L_08AA6E3C:
    ctx.set_gpr(31, 0x08AA6E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08AA6E44u) goto L_08AA6E44;
    return;
L_08AA6E44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA6E54u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    goto L_08AA7458;
L_08AA6E54:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19600)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA6E6Cu);
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AA6E6Cu) goto L_08AA6E6C;
    return;
L_08AA6E6C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19600)));
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
        goto L_08AA6EC8;
    }
    goto L_08AA6E7C;
L_08AA6E7C:
    ctx.set_gpr(31, 0x08AA6E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08AA6E84u) goto L_08AA6E84;
    return;
L_08AA6E84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA6E94u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    goto L_08AA7458;
L_08AA6E94:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-19604), ctx.gpr[2]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-19600), 0u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25852));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA6EC0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08AA7444;
L_08AA6EC0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AA6F1C;
      }
      goto L_08AA6EC8;
    }
L_08AA6EC8:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
        goto L_08AA6F00;
    }
    goto L_08AA6ED0;
L_08AA6ED0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19604)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25852));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA6EF8u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    goto L_08AA7444;
L_08AA6EF8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AA6F1C;
      }
      goto L_08AA6F00;
    }
L_08AA6F00:
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA6F20;
    }
    goto L_08AA6F08;
L_08AA6F08:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19600), 0u);
      if (branch_taken) {
          goto L_08AA7400;
      }
      goto L_08AA6F1C;
    }
L_08AA6F1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA6F20;
L_08AA6F20:
    ctx.set_gpr(31, 0x08AA6F28u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA6F28u) goto L_08AA6F28;
    return;
L_08AA6F28:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA6FE4;
    }
    goto L_08AA6F34;
L_08AA6F34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA6F44u);
    ctx.set_gpr(21, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6F44u) goto L_08AA6F44;
    return;
L_08AA6F44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AA6FE0;
      }
      goto L_08AA6F4C;
    }
L_08AA6F4C:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[18] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26032));
    ctx.set_gpr(20, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[22] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA6F64;
L_08AA6F64:
    ctx.set_gpr(31, 0x08AA6F6Cu);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA6F6Cu) goto L_08AA6F6C;
    return;
L_08AA6F6C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA6FC0;
    }
    goto L_08AA6F78;
L_08AA6F78:
    ctx.set_gpr(31, 0x08AA6F80u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08AA6F80u) goto L_08AA6F80;
    return;
L_08AA6F80:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA6FBC;
      }
      goto L_08AA6F8C;
    }
L_08AA6F8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA6F9Cu);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 451u, 0x08A96144u>(ctx, &aot_mem) && ctx.pc == 0x08AA6F9Cu) goto L_08AA6F9C;
    return;
L_08AA6F9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA6FBC;
      }
      goto L_08AA6FA4;
    }
L_08AA6FA4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AA6FBCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6FBCu) goto L_08AA6FBC;
    return;
L_08AA6FBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA6FC0;
L_08AA6FC0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AA6FD4u);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6FD4u) goto L_08AA6FD4;
    return;
L_08AA6FD4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA6F64;
    }
    goto L_08AA6FE0;
L_08AA6FE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA6FE4;
L_08AA6FE4:
    ctx.set_gpr(31, 0x08AA6FECu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA6FECu) goto L_08AA6FEC;
    return;
L_08AA6FEC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA70B0;
    }
    goto L_08AA6FF8;
L_08AA6FF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA7008u);
    ctx.set_gpr(21, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA7008u) goto L_08AA7008;
    return;
L_08AA7008:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AA70AC;
      }
      goto L_08AA7010;
    }
L_08AA7010:
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25952));
    ctx.set_gpr(20, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[22] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA7030;
L_08AA7030:
    ctx.set_gpr(31, 0x08AA7038u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA7038u) goto L_08AA7038;
    return;
L_08AA7038:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA708C;
    }
    goto L_08AA7044;
L_08AA7044:
    ctx.set_gpr(31, 0x08AA704Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08AA704Cu) goto L_08AA704C;
    return;
L_08AA704C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7088;
      }
      goto L_08AA7058;
    }
L_08AA7058:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA7068u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 451u, 0x08A96144u>(ctx, &aot_mem) && ctx.pc == 0x08AA7068u) goto L_08AA7068;
    return;
L_08AA7068:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7088;
      }
      goto L_08AA7070;
    }
L_08AA7070:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AA7088u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA7088u) goto L_08AA7088;
    return;
L_08AA7088:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA708C;
L_08AA708C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AA70A0u);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA70A0u) goto L_08AA70A0;
    return;
L_08AA70A0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA7030;
    }
    goto L_08AA70AC;
L_08AA70AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA70B0;
L_08AA70B0:
    ctx.set_gpr(31, 0x08AA70B8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA70B8u) goto L_08AA70B8;
    return;
L_08AA70B8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AA7170;
      }
      goto L_08AA70C4;
    }
L_08AA70C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA70D4u);
    ctx.set_gpr(19, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA70D4u) goto L_08AA70D4;
    return;
L_08AA70D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AA7170;
      }
      goto L_08AA70DC;
    }
L_08AA70DC:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25892));
    ctx.set_gpr(20, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[22] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA70F4;
L_08AA70F4:
    ctx.set_gpr(31, 0x08AA70FCu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA70FCu) goto L_08AA70FC;
    return;
L_08AA70FC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA7150;
    }
    goto L_08AA7108;
L_08AA7108:
    ctx.set_gpr(31, 0x08AA7110u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08AA7110u) goto L_08AA7110;
    return;
L_08AA7110:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA714C;
      }
      goto L_08AA711C;
    }
L_08AA711C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA712Cu);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 451u, 0x08A96144u>(ctx, &aot_mem) && ctx.pc == 0x08AA712Cu) goto L_08AA712C;
    return;
L_08AA712C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA714C;
      }
      goto L_08AA7134;
    }
L_08AA7134:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AA714Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA714Cu) goto L_08AA714C;
    return;
L_08AA714C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA7150;
L_08AA7150:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AA7164u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA7164u) goto L_08AA7164;
    return;
L_08AA7164:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA70F4;
    }
    goto L_08AA7170;
L_08AA7170:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19600)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19600), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AA6E3C;
      }
      goto L_08AA7188;
    }
L_08AA7188:
    ctx.set_gpr(31, 0x08AA7190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08AA7190u) goto L_08AA7190;
    return;
L_08AA7190:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA71A0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(31));
    goto L_08AA7458;
L_08AA71A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA71ACu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 862u, 0x08A8AE94u>(ctx, &aot_mem) && ctx.pc == 0x08AA71ACu) goto L_08AA71AC;
    return;
L_08AA71AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA71BCu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA71BCu) goto L_08AA71BC;
    return;
L_08AA71BC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA7278;
    }
    goto L_08AA71C8;
L_08AA71C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA71D8u);
    ctx.set_gpr(19, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA71D8u) goto L_08AA71D8;
    return;
L_08AA71D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AA7274;
      }
      goto L_08AA71E0;
    }
L_08AA71E0:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[23] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26032));
    ctx.set_gpr(21, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA71F8;
L_08AA71F8:
    ctx.set_gpr(31, 0x08AA7200u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA7200u) goto L_08AA7200;
    return;
L_08AA7200:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA7254;
    }
    goto L_08AA720C;
L_08AA720C:
    ctx.set_gpr(31, 0x08AA7214u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08AA7214u) goto L_08AA7214;
    return;
L_08AA7214:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7250;
      }
      goto L_08AA7220;
    }
L_08AA7220:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA7230u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 451u, 0x08A96144u>(ctx, &aot_mem) && ctx.pc == 0x08AA7230u) goto L_08AA7230;
    return;
L_08AA7230:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7250;
      }
      goto L_08AA7238;
    }
L_08AA7238:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AA7250u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA7250u) goto L_08AA7250;
    return;
L_08AA7250:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA7254;
L_08AA7254:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AA7268u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA7268u) goto L_08AA7268;
    return;
L_08AA7268:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA71F8;
    }
    goto L_08AA7274;
L_08AA7274:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA7278;
L_08AA7278:
    ctx.set_gpr(31, 0x08AA7280u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA7280u) goto L_08AA7280;
    return;
L_08AA7280:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA7344;
    }
    goto L_08AA728C;
L_08AA728C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA729Cu);
    ctx.set_gpr(19, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA729Cu) goto L_08AA729C;
    return;
L_08AA729C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AA7340;
      }
      goto L_08AA72A4;
    }
L_08AA72A4:
    ctx.set_gpr(2, ctx.gpr[23] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[23]);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25952));
    ctx.set_gpr(21, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA72C4;
L_08AA72C4:
    ctx.set_gpr(31, 0x08AA72CCu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA72CCu) goto L_08AA72CC;
    return;
L_08AA72CC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA7320;
    }
    goto L_08AA72D8;
L_08AA72D8:
    ctx.set_gpr(31, 0x08AA72E0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08AA72E0u) goto L_08AA72E0;
    return;
L_08AA72E0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA731C;
      }
      goto L_08AA72EC;
    }
L_08AA72EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA72FCu);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 451u, 0x08A96144u>(ctx, &aot_mem) && ctx.pc == 0x08AA72FCu) goto L_08AA72FC;
    return;
L_08AA72FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA731C;
      }
      goto L_08AA7304;
    }
L_08AA7304:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AA731Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA731Cu) goto L_08AA731C;
    return;
L_08AA731C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA7320;
L_08AA7320:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AA7334u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA7334u) goto L_08AA7334;
    return;
L_08AA7334:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA72C4;
    }
    goto L_08AA7340;
L_08AA7340:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA7344;
L_08AA7344:
    ctx.set_gpr(31, 0x08AA734Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA734Cu) goto L_08AA734C;
    return;
L_08AA734C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA7404;
    }
    goto L_08AA7358;
L_08AA7358:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA7368u);
    ctx.set_gpr(18, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA7368u) goto L_08AA7368;
    return;
L_08AA7368:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AA7400;
      }
      goto L_08AA7370;
    }
L_08AA7370:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[23] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25892));
    ctx.set_gpr(19, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA7384;
L_08AA7384:
    ctx.set_gpr(31, 0x08AA738Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA738Cu) goto L_08AA738C;
    return;
L_08AA738C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA73E0;
    }
    goto L_08AA7398;
L_08AA7398:
    ctx.set_gpr(31, 0x08AA73A0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08AA73A0u) goto L_08AA73A0;
    return;
L_08AA73A0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA73DC;
      }
      goto L_08AA73AC;
    }
L_08AA73AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA73BCu);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 451u, 0x08A96144u>(ctx, &aot_mem) && ctx.pc == 0x08AA73BCu) goto L_08AA73BC;
    return;
L_08AA73BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA73DC;
      }
      goto L_08AA73C4;
    }
L_08AA73C4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AA73DCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA73DCu) goto L_08AA73DC;
    return;
L_08AA73DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA73E0;
L_08AA73E0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AA73F4u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA73F4u) goto L_08AA73F4;
    return;
L_08AA73F4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA7384;
    }
    goto L_08AA7400;
L_08AA7400:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA7404;
L_08AA7404:
    ctx.set_gpr(31, 0x08AA740Cu);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 820u, 0x08866940u>(ctx, &aot_mem) && ctx.pc == 0x08AA740Cu) goto L_08AA740C;
    return;
L_08AA740C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA6DE4;
    }
    goto L_08AA7418;
L_08AA7418:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08AA741C;
L_08AA741C:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08AA7444:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] << 7u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(5664));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA7458:
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
          goto L_08AA7498;
      }
      goto L_08AA747C;
    }
L_08AA747C:
    ctx.set_gpr(31, 0x08AA7484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 157u, 0x0885C91Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7484u) goto L_08AA7484;
    return;
L_08AA7484:
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    goto L_08AA7498;
L_08AA7498:
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
L_08AA74B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AA74C4u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA74C4u) goto L_08AA74C4;
    return;
L_08AA74C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA74D4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AA74D4u) goto L_08AA74D4;
    return;
L_08AA74D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AA7520;
      }
      goto L_08AA74E0;
    }
L_08AA74E0:
    ctx.set_gpr(31, 0x08AA74E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA74E8u) goto L_08AA74E8;
    return;
L_08AA74E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17324u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17242u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(31, 0x08AA7520u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AA7520u) goto L_08AA7520;
    return;
L_08AA7520:
    ctx.set_gpr(31, 0x08AA7528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7528u) goto L_08AA7528;
    return;
L_08AA7528:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA7538u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AA7538u) goto L_08AA7538;
    return;
L_08AA7538:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AA7584;
      }
      goto L_08AA7544;
    }
L_08AA7544:
    ctx.set_gpr(31, 0x08AA754Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA754Cu) goto L_08AA754C;
    return;
L_08AA754C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17363u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17242u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08AA7584u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AA7584u) goto L_08AA7584;
    return;
L_08AA7584:
    ctx.set_gpr(31, 0x08AA758Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA758Cu) goto L_08AA758C;
    return;
L_08AA758C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA759Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AA759Cu) goto L_08AA759C;
    return;
L_08AA759C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AA75E8;
      }
      goto L_08AA75A8;
    }
L_08AA75A8:
    ctx.set_gpr(31, 0x08AA75B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA75B0u) goto L_08AA75B0;
    return;
L_08AA75B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17363u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17242u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(61));
    ctx.set_gpr(31, 0x08AA75E8u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AA75E8u) goto L_08AA75E8;
    return;
L_08AA75E8:
    ctx.set_gpr(31, 0x08AA75F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA75F0u) goto L_08AA75F0;
    return;
L_08AA75F0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AA7610u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7610u) goto L_08AA7610;
    return;
L_08AA7610:
    ctx.set_gpr(31, 0x08AA7618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7618u) goto L_08AA7618;
    return;
L_08AA7618:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AA7638u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7638u) goto L_08AA7638;
    return;
L_08AA7638:
    ctx.set_gpr(31, 0x08AA7640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7640u) goto L_08AA7640;
    return;
L_08AA7640:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AA7660u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7660u) goto L_08AA7660;
    return;
L_08AA7660:
    ctx.set_gpr(31, 0x08AA7668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7668u) goto L_08AA7668;
    return;
L_08AA7668:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AA767Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA767Cu) goto L_08AA767C;
    return;
L_08AA767C:
    ctx.set_gpr(31, 0x08AA7684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7684u) goto L_08AA7684;
    return;
L_08AA7684:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08AA7698u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7698u) goto L_08AA7698;
    return;
L_08AA7698:
    ctx.set_gpr(31, 0x08AA76A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA76A0u) goto L_08AA76A0;
    return;
L_08AA76A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08AA76B4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA76B4u) goto L_08AA76B4;
    return;
L_08AA76B4:
    ctx.set_gpr(31, 0x08AA76BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA76BCu) goto L_08AA76BC;
    return;
L_08AA76BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AA76E4u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA76E4u) goto L_08AA76E4;
    return;
L_08AA76E4:
    ctx.set_gpr(31, 0x08AA76ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA76ECu) goto L_08AA76EC;
    return;
L_08AA76EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08AA7700u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA7700u) goto L_08AA7700;
    return;
L_08AA7700:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AA776C;
    }
    goto L_08AA7708;
L_08AA7708:
    ctx.set_gpr(31, 0x08AA7710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7710u) goto L_08AA7710;
    return;
L_08AA7710:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AA7728u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7728u) goto L_08AA7728;
    return;
L_08AA7728:
    ctx.set_gpr(31, 0x08AA7730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7730u) goto L_08AA7730;
    return;
L_08AA7730:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AA7748u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7748u) goto L_08AA7748;
    return;
L_08AA7748:
    ctx.set_gpr(31, 0x08AA7750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7750u) goto L_08AA7750;
    return;
L_08AA7750:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08AA7764u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7764u) goto L_08AA7764;
    return;
L_08AA7764:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA78C8;
      }
      goto L_08AA776C;
    }
L_08AA776C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA7820;
      }
      goto L_08AA7774;
    }
L_08AA7774:
    ctx.set_gpr(31, 0x08AA777Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA777Cu) goto L_08AA777C;
    return;
L_08AA777C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AA7794u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7794u) goto L_08AA7794;
    return;
L_08AA7794:
    ctx.set_gpr(31, 0x08AA779Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA779Cu) goto L_08AA779C;
    return;
L_08AA779C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17324u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17242u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA77C0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA77C0u) goto L_08AA77C0;
    return;
L_08AA77C0:
    ctx.set_gpr(31, 0x08AA77C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA77C8u) goto L_08AA77C8;
    return;
L_08AA77C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17363u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17242u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA77ECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA77ECu) goto L_08AA77EC;
    return;
L_08AA77EC:
    ctx.set_gpr(31, 0x08AA77F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA77F4u) goto L_08AA77F4;
    return;
L_08AA77F4:
    ctx.set_gpr(3, 17363u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17242u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA7818u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA7818u) goto L_08AA7818;
    return;
L_08AA7818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA78C4;
      }
      goto L_08AA7820;
    }
L_08AA7820:
    ctx.set_gpr(31, 0x08AA7828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7828u) goto L_08AA7828;
    return;
L_08AA7828:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AA7840u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7840u) goto L_08AA7840;
    return;
L_08AA7840:
    ctx.set_gpr(31, 0x08AA7848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7848u) goto L_08AA7848;
    return;
L_08AA7848:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17363u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17242u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA786Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA786Cu) goto L_08AA786C;
    return;
L_08AA786C:
    ctx.set_gpr(31, 0x08AA7874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7874u) goto L_08AA7874;
    return;
L_08AA7874:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17324u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17242u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA7898u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA7898u) goto L_08AA7898;
    return;
L_08AA7898:
    ctx.set_gpr(31, 0x08AA78A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA78A0u) goto L_08AA78A0;
    return;
L_08AA78A0:
    ctx.set_gpr(3, 17324u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17242u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA78C4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA78C4u) goto L_08AA78C4;
    return;
L_08AA78C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AA78C8;
L_08AA78C8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA78D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    goto L_08AA7904;
L_08AA7904:
    ctx.set_gpr(31, 0x08AA790Cu);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AA790Cu) goto L_08AA790C;
    return;
L_08AA790C:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08AA791C;
L_08AA791C:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AA791C;
      }
      goto L_08AA794C;
    }
L_08AA794C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    goto L_08AA797C;
L_08AA797C:
    ctx.set_gpr(31, 0x08AA7984u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7984u) goto L_08AA7984;
    return;
L_08AA7984:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA7990u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA7990u) goto L_08AA7990;
    return;
L_08AA7990:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(6));
        goto L_08AA79AC;
    }
    goto L_08AA799C;
L_08AA799C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(4));
        goto L_08AA79AC;
    }
    goto L_08AA79A8;
L_08AA79A8:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(8));
    goto L_08AA79AC;
L_08AA79AC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
        goto L_08AA79E4;
    }
    goto L_08AA79B8;
L_08AA79B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA79C4u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA79C4u) goto L_08AA79C4;
    return;
L_08AA79C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08AA79DCu);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA79DCu) goto L_08AA79DC;
    return;
L_08AA79DC:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    goto L_08AA79E4;
L_08AA79E4:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
        goto L_08AA7A28;
    }
    goto L_08AA79EC;
L_08AA79EC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
        goto L_08AA7A20;
    }
    goto L_08AA79F8;
L_08AA79F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AA7A2C;
      }
      goto L_08AA7A20;
    }
L_08AA7A20:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA7A2C;
      }
      goto L_08AA7A28;
    }
L_08AA7A28:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AA7A2C;
L_08AA7A2C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AA797C;
      }
      goto L_08AA7A40;
    }
L_08AA7A40:
    ctx.set_gpr(5, 17530u << 16u);
    ctx.set_gpr(9, 2230u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-2016));
    goto L_08AA7A68;
L_08AA7A68:
    ctx.set_gpr(13, 0u + 0u);
    ctx.set_gpr(12, ctx.gpr[10] + 0u);
    ctx.set_gpr(11, ctx.gpr[9] + ctx.gpr[2]);
    goto L_08AA7A74;
L_08AA7A74:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
        goto L_08AA7B28;
    }
    goto L_08AA7A80;
L_08AA7A80:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] != ctx.gpr[8]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
        goto L_08AA7A94;
    }
    goto L_08AA7A8C;
L_08AA7A8C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08AA7B24;
      }
      goto L_08AA7A94;
    }
L_08AA7A94:
    if (ctx.gpr[6] == ctx.gpr[5]) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
        goto L_08AA7AA4;
    }
    goto L_08AA7A9C;
L_08AA7A9C:
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    goto L_08AA7AA4;
L_08AA7AA4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (ctx.gpr[6] == ctx.gpr[5]) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
        goto L_08AA7AD0;
    }
    goto L_08AA7AC8;
L_08AA7AC8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AA7B24;
      }
      goto L_08AA7AD0;
    }
L_08AA7AD0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (ctx.gpr[6] == ctx.gpr[5]) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
        goto L_08AA7AFC;
    }
    goto L_08AA7AF4;
L_08AA7AF4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AA7B24;
      }
      goto L_08AA7AFC;
    }
L_08AA7AFC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA7B24;
      }
      goto L_08AA7B20;
    }
L_08AA7B20:
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08AA7B24;
L_08AA7B24:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_08AA7B28;
L_08AA7B28:
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[13]) < 32 ? 1u : 0u);
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08AA7A74;
      }
      goto L_08AA7B38;
    }
L_08AA7B38:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AA7A68;
      }
      goto L_08AA7B4C;
    }
L_08AA7B4C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    goto L_08AA7B58;
L_08AA7B58:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AA7B78;
    }
    goto L_08AA7B6C;
L_08AA7B6C:
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA7B84;
      }
      goto L_08AA7B78;
    }
L_08AA7B78:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA7B58;
      }
      goto L_08AA7B84;
    }
L_08AA7B84:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA7BA8;
      }
      goto L_08AA7B90;
    }
L_08AA7B90:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AA7BA0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA7BA0u) goto L_08AA7BA0;
    return;
L_08AA7BA0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA7BD8;
      }
      goto L_08AA7BA8;
    }
L_08AA7BA8:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08AA7BC8;
    }
    goto L_08AA7BB0;
L_08AA7BB0:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AA7BC0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA7BC0u) goto L_08AA7BC0;
    return;
L_08AA7BC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7BD4;
      }
      goto L_08AA7BC8;
    }
L_08AA7BC8:
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08AA7BD4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA7BD4u) goto L_08AA7BD4;
    return;
L_08AA7BD4:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08AA7BD8;
L_08AA7BD8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < 200 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
        goto L_08AA7904;
    }
    goto L_08AA7BE4;
L_08AA7BE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA7BF0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AA7BF0u) goto L_08AA7BF0;
    return;
L_08AA7BF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA7BFCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA7BFCu) goto L_08AA7BFC;
    return;
L_08AA7BFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA7C24:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA7C44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AA7C68u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA7C68u) goto L_08AA7C68;
    return;
L_08AA7C68:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA7C80u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA7C80u) goto L_08AA7C80;
    return;
L_08AA7C80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AA7F98;
    }
    goto L_08AA7C90;
L_08AA7C90:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-25840));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA7CAC:
    ctx.set_gpr(31, 0x08AA7CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7CB4u) goto L_08AA7CB4;
    return;
L_08AA7CB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AA7CC8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7CC8u) goto L_08AA7CC8;
    return;
L_08AA7CC8:
    ctx.set_gpr(31, 0x08AA7CD0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AA7FB4;
L_08AA7CD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7F94;
      }
      goto L_08AA7CD8;
    }
L_08AA7CD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AA7F94;
      }
      goto L_08AA7CE4;
    }
L_08AA7CE4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA7F98;
      }
      goto L_08AA7CEC;
    }
L_08AA7CEC:
    ctx.set_gpr(31, 0x08AA7CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7CF4u) goto L_08AA7CF4;
    return;
L_08AA7CF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AA7D08u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7D08u) goto L_08AA7D08;
    return;
L_08AA7D08:
    ctx.set_gpr(31, 0x08AA7D10u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 136u, 0x08AA876Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7D10u) goto L_08AA7D10;
    return;
L_08AA7D10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7F94;
      }
      goto L_08AA7D18;
    }
L_08AA7D18:
    ctx.set_gpr(31, 0x08AA7D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7D20u) goto L_08AA7D20;
    return;
L_08AA7D20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AA7D34u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7D34u) goto L_08AA7D34;
    return;
L_08AA7D34:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_08AA7F94;
      }
      goto L_08AA7D3C;
    }
L_08AA7D3C:
    ctx.set_gpr(31, 0x08AA7D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7D44u) goto L_08AA7D44;
    return;
L_08AA7D44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AA7D58u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7D58u) goto L_08AA7D58;
    return;
L_08AA7D58:
    ctx.set_gpr(31, 0x08AA7D60u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 137u, 0x08AA8774u>(ctx, &aot_mem) && ctx.pc == 0x08AA7D60u) goto L_08AA7D60;
    return;
L_08AA7D60:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AA7E50;
      }
      goto L_08AA7D6C;
    }
L_08AA7D6C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA7D80;
    }
    goto L_08AA7D78;
L_08AA7D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7F94;
      }
      goto L_08AA7D80;
    }
L_08AA7D80:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AA7D8Cu);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(19000));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 999u, 0x08A93650u>(ctx, &aot_mem) && ctx.pc == 0x08AA7D8Cu) goto L_08AA7D8C;
    return;
L_08AA7D8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AA7D9Cu);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[3]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7D9Cu) goto L_08AA7D9C;
    return;
L_08AA7D9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AA7DB0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7DB0u) goto L_08AA7DB0;
    return;
L_08AA7DB0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(31, 0x08AA7DC0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 159u, 0x08A806D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7DC0u) goto L_08AA7DC0;
    return;
L_08AA7DC0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.set_gpr(31, 0x08AA7DD0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 24u, 0x088641F8u>(ctx, &aot_mem) && ctx.pc == 0x08AA7DD0u) goto L_08AA7DD0;
    return;
L_08AA7DD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AA7DDCu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 455u, 0x08A898D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7DDCu) goto L_08AA7DDC;
    return;
L_08AA7DDC:
    ctx.set_gpr(31, 0x08AA7DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA7DE4u) goto L_08AA7DE4;
    return;
L_08AA7DE4:
    ctx.set_gpr(31, 0x08AA7DECu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 655u, 0x088628A8u>(ctx, &aot_mem) && ctx.pc == 0x08AA7DECu) goto L_08AA7DEC;
    return;
L_08AA7DEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AA7DF8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 167u, 0x08A94C70u>(ctx, &aot_mem) && ctx.pc == 0x08AA7DF8u) goto L_08AA7DF8;
    return;
L_08AA7DF8:
    ctx.set_gpr(31, 0x08AA7E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA7E00u) goto L_08AA7E00;
    return;
L_08AA7E00:
    ctx.set_gpr(31, 0x08AA7E08u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA7E08u) goto L_08AA7E08;
    return;
L_08AA7E08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA7E14u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AA7FAC;
L_08AA7E14:
    ctx.set_gpr(31, 0x08AA7E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AA7E1Cu) goto L_08AA7E1C;
    return;
L_08AA7E1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA7E28u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08AA7E28u) goto L_08AA7E28;
    return;
L_08AA7E28:
    ctx.set_gpr(31, 0x08AA7E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA7E30u) goto L_08AA7E30;
    return;
L_08AA7E30:
    ctx.set_gpr(31, 0x08AA7E38u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA7E38u) goto L_08AA7E38;
    return;
L_08AA7E38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA7E44u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 159u, 0x08A806D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7E44u) goto L_08AA7E44;
    return;
L_08AA7E44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA7F94;
      }
      goto L_08AA7E50;
    }
L_08AA7E50:
    ctx.set_gpr(31, 0x08AA7E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7E58u) goto L_08AA7E58;
    return;
L_08AA7E58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AA7E6Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7E6Cu) goto L_08AA7E6C;
    return;
L_08AA7E6C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_08AA7F94;
      }
      goto L_08AA7E78;
    }
L_08AA7E78:
    ctx.set_gpr(31, 0x08AA7E80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7E80u) goto L_08AA7E80;
    return;
L_08AA7E80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AA7E94u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7E94u) goto L_08AA7E94;
    return;
L_08AA7E94:
    ctx.set_gpr(31, 0x08AA7E9Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 138u, 0x08AA877Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7E9Cu) goto L_08AA7E9C;
    return;
L_08AA7E9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7F94;
      }
      goto L_08AA7EA4;
    }
L_08AA7EA4:
    ctx.set_gpr(31, 0x08AA7EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7EACu) goto L_08AA7EAC;
    return;
L_08AA7EAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AA7EC0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7EC0u) goto L_08AA7EC0;
    return;
L_08AA7EC0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_08AA7F94;
      }
      goto L_08AA7EC8;
    }
L_08AA7EC8:
    ctx.set_gpr(31, 0x08AA7ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7ED0u) goto L_08AA7ED0;
    return;
L_08AA7ED0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AA7EE4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7EE4u) goto L_08AA7EE4;
    return;
L_08AA7EE4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA7EF0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 139u, 0x08AA8784u>(ctx, &aot_mem) && ctx.pc == 0x08AA7EF0u) goto L_08AA7EF0;
    return;
L_08AA7EF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7F94;
      }
      goto L_08AA7EF8;
    }
L_08AA7EF8:
    ctx.set_gpr(31, 0x08AA7F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7F00u) goto L_08AA7F00;
    return;
L_08AA7F00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AA7F14u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7F14u) goto L_08AA7F14;
    return;
L_08AA7F14:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_08AA7F94;
      }
      goto L_08AA7F1C;
    }
L_08AA7F1C:
    ctx.set_gpr(31, 0x08AA7F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7F24u) goto L_08AA7F24;
    return;
L_08AA7F24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AA7F38u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7F38u) goto L_08AA7F38;
    return;
L_08AA7F38:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA7F44u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 139u, 0x08AA8784u>(ctx, &aot_mem) && ctx.pc == 0x08AA7F44u) goto L_08AA7F44;
    return;
L_08AA7F44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7F94;
      }
      goto L_08AA7F4C;
    }
L_08AA7F4C:
    ctx.set_gpr(31, 0x08AA7F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7F54u) goto L_08AA7F54;
    return;
L_08AA7F54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AA7F68u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA7F68u) goto L_08AA7F68;
    return;
L_08AA7F68:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_08AA7F94;
      }
      goto L_08AA7F70;
    }
L_08AA7F70:
    ctx.set_gpr(31, 0x08AA7F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA7F78u) goto L_08AA7F78;
    return;
L_08AA7F78:
    ctx.set_gpr(31, 0x08AA7F80u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA7F80u) goto L_08AA7F80;
    return;
L_08AA7F80:
    ctx.set_gpr(31, 0x08AA7F88u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 165u, 0x08A80734u>(ctx, &aot_mem) && ctx.pc == 0x08AA7F88u) goto L_08AA7F88;
    return;
L_08AA7F88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7F94;
      }
      goto L_08AA7F90;
    }
L_08AA7F90:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    goto L_08AA7F94;
L_08AA7F94:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AA7F98;
L_08AA7F98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA7FAC:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18248), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA7FB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AA7FD0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA7FD0u) goto L_08AA7FD0;
    return;
L_08AA7FD0:
    ctx.set_gpr(31, 0x08AA7FD8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 131u, 0x08B00A28u>(ctx, &aot_mem) && ctx.pc == 0x08AA7FD8u) goto L_08AA7FD8;
    return;
L_08AA7FD8:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20184)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20188)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20192)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.pc = 0x08AA8000u; return;
}

void recomp_unit_0168(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0168_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_168(Runtime &runtime) {
    runtime.register_generated_unit(168u, 0x08AA4000u, 16384u, &recomp_unit_0168, &recomp_unit_0168_entry);
    runtime.register_function(0x08AA4004u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4018u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4020u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4030u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4034u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA403Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4054u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA405Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4074u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4078u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4088u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA40A0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA40A8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA40B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA40C0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA40C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA40D0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA40E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA40ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4100u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4108u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA411Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4124u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4138u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4140u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA414Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4158u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4164u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4174u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4184u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA419Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA41B4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA41B8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA41CCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA41E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA41F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4200u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4208u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4214u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4220u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA422Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA423Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA424Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4264u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA427Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4280u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4294u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA42ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA42C0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA42C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA42E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA42FCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA430Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4314u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA431Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4328u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4334u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA433Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA434Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA435Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4374u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA438Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4390u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA43A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA43BCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA43D0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA43D8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA43F4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA440Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA441Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4420u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4434u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4444u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4450u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4458u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4460u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA446Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4474u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA447Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4488u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4490u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4498u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA44ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA44B4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA44C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA44DCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA44E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA44F4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA44F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4500u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4518u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4520u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4538u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA453Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA454Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4568u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4570u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4578u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4580u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA458Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4594u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA459Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA45B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA45B8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA45CCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA45D4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA45E8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA45F0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA45F4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4610u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4634u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA463Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA464Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4658u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4660u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4668u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4684u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4690u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4698u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA46A0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA46B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA46BCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA46C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA46D0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA46E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA46ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4700u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4704u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA470Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4720u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4730u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA473Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4750u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4754u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4760u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4778u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4780u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4794u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA47A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA47B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA47E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA47ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA47F4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA47FCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4808u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA480Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4818u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4824u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA483Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4844u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA485Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4874u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4880u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4888u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA48A8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA48ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA48E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA48F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4900u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4918u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4920u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4978u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4984u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA498Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA49ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA49E8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA49F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A0Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A18u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A20u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A28u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A2Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A34u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A4Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A54u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A5Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A70u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A74u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A84u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A8Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4AA0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4AA8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4AB4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4AC0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4ACCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4ADCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4AECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4B04u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4B1Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4B20u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4B34u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4B4Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4B60u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4B68u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4B70u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4B7Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4B88u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4B94u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4BA4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4BB4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4BCCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4BE4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4BE8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4BFCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4C14u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4C28u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4C30u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4C4Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4C64u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4C74u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4C7Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4C84u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4C90u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4C9Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4CA4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4CB4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4CC4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4CDCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4CF4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4CF8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D0Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D24u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D38u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D40u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D5Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D74u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D84u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D88u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D9Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4DACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4DBCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4DC4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4DD0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4DD8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4DECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4DFCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E0Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E18u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E20u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E24u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E30u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E38u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E44u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E4Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E64u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E74u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E84u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E90u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E98u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E9Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4EA8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4EB0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4EBCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4EC4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4ED8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4EE8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4EF8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F04u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F0Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F10u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F1Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F24u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F30u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F38u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F50u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F60u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F70u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F7Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F84u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F88u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F90u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4FA0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4FA8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4FB4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4FBCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4FCCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4FD0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4FDCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4FE4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4FF0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4FF8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5008u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA500Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5018u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5020u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA502Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5034u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5044u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5048u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5054u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA505Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5068u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5070u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5080u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5084u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA508Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5094u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA509Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA50BCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA50C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA50D4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA50D8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA50E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA50ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5104u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA510Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5124u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA513Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5148u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5150u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5170u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5178u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5180u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA51A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA51B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA51C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA51D0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA51F0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA51F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA520Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5214u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA522Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5234u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5254u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA525Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5270u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5278u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5298u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA52A0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA52C4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA52C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA52D8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA52E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA52F0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA52F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA52FCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5304u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5310u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5318u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5320u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5334u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA533Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5344u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5364u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5370u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA537Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5380u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA538Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5398u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA53B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA53B8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA53D0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA53E8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA53F4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA53FCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA541Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5424u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA542Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5444u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5460u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA546Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5474u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5494u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA54B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA54B4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA54C4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA54DCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA54E8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA54F0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA54F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5500u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA550Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5514u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA551Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5528u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5530u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5538u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA554Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5568u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5570u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5584u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA558Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA55A0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA55ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA55B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA55C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA55F4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA55FCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA560Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5618u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5620u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5628u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5640u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA564Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5654u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA565Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA566Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5678u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5680u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5688u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA569Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA56A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA56D0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA56D8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA56F0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA56F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5714u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5728u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5734u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA573Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5750u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5758u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA576Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5778u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5780u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5788u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5794u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA579Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA57A8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA57B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA57BCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA57C4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA57D4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA57F0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA57F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5800u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5808u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5814u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5820u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5830u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA583Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5850u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5868u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5870u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5884u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5894u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA58A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA58B4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA58BCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA58E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA58E8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA58F4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5900u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA590Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA591Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA592Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5944u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA595Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5960u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5974u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA598Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA59A0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA59A8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA59B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA59BCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA59C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA59D4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA59E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA59F4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5A0Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5A24u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5A28u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5A3Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5A54u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5A68u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5A70u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5A8Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5AA4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5AB4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5ABCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5AC4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5AD0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5ADCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5AE4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5AF4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5B04u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5B1Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5B34u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5B38u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5B4Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5B64u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5B78u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5B80u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5B9Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5BB4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5BC4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5BC8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5BDCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5BECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5BF0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5BF8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5C0Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5C1Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5C24u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5C38u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5C44u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5C48u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5C50u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5C68u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5C70u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5C78u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5C8Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5C90u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5CA0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5CBCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5CC4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5CF4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5CFCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5D20u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5D2Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5D5Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5D74u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5D98u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5DB0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5DB8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5DCCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5DD4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5DF4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5DFCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5E28u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5E40u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5E64u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5E7Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5E80u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5E88u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5E9Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5EA4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5EC4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5ECCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5ED8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5EE0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5EE8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5EFCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5F04u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5F24u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5F2Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5F40u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5F4Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5F74u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5F7Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5F84u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5F90u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5F98u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5FA0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5FACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5FB4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5FBCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5FD0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5FDCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5FE8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6000u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6030u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6038u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA604Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA605Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6060u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA606Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6084u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA608Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA60C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA60D8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA60ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA60F4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6108u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6120u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA613Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6144u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6158u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6160u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6174u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6180u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6184u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA61A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA61D8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA620Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6248u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6288u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6290u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6294u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA629Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA62C0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA62C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA62D0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA62D8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA62E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA62E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6300u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA630Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6318u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6330u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6338u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6354u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6360u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6368u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6388u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA638Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6398u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA63B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA63D4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA63E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA63E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA63ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA63F4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6408u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6420u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6428u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6430u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6444u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA644Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6464u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA646Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6484u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6488u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6494u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA64ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA64C0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA64C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA64D0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA64ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA64F4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6508u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA651Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6530u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6544u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA654Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6554u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6568u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6570u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6578u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA658Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6590u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA65A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA65B4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA65CCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA65DCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA65E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA65F4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6608u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6610u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6618u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6620u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA663Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6644u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6658u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA666Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6684u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6690u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA66A8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA66ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA66F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6708u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA671Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6728u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6734u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6740u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6750u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6764u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6770u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6798u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA67A0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA67A8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA67D0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA67D8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA67E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA67F0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA67F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6800u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA680Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6818u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA681Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA682Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6848u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6854u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6868u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6878u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6888u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA688Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA689Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA68ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA68B8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA68C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA68CCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA68DCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA68ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6908u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA690Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA691Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA692Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6938u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6944u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6948u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6960u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6968u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA69A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA69ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA69B8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA69C4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA69C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA69D0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA69E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA69ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA69F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A08u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A10u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A20u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A28u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A30u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A40u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A54u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A58u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A6Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A78u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A80u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A88u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A94u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6AA4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6AACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6ABCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6AC4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6ACCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6ADCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6AF0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6AF4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6B08u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6B14u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6B1Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6B24u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6B30u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6B40u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6B48u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6B58u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6B60u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6B68u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6B78u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6B8Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6B90u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6BA4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6BB0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6BB4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6BBCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6BC8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6BD0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6BDCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6BE8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6BECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6BF4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C00u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C0Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C1Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C24u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C28u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C30u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C38u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C48u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C54u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C5Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C64u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C70u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C80u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C88u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C8Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C94u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C9Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6CACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6CB8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6CC0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6CC8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6CD4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6CE4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6CECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6CF0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6CF8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6D00u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6D10u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6D1Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6D20u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6D28u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6D34u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6D38u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6D40u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6D4Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6D54u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6D64u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6D68u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6D70u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6D98u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6DD4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6DE0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6DE4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6DECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6DF4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6E04u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6E0Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6E1Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6E28u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6E30u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6E34u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6E3Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6E44u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6E54u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6E6Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6E7Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6E84u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6E94u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6EC0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6EC8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6ED0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6EF8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6F00u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6F08u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6F1Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6F20u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6F28u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6F34u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6F44u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6F4Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6F64u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6F6Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6F78u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6F80u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6F8Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6F9Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6FA4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6FBCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6FC0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6FD4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6FE0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6FE4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6FECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6FF8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7008u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7010u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7030u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7038u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7044u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA704Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7058u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7068u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7070u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7088u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA708Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA70A0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA70ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA70B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA70B8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA70C4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA70D4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA70DCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA70F4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA70FCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7108u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7110u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA711Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA712Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7134u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA714Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7150u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7164u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7170u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7188u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7190u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA71A0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA71ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA71BCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA71C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA71D8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA71E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA71F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7200u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA720Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7214u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7220u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7230u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7238u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7250u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7254u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7268u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7274u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7278u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7280u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA728Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA729Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA72A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA72C4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA72CCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA72D8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA72E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA72ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA72FCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7304u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA731Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7320u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7334u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7340u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7344u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA734Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7358u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7368u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7370u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7384u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA738Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7398u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA73A0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA73ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA73BCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA73C4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA73DCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA73E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA73F4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7400u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7404u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA740Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7418u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA741Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7444u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7458u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA747Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7484u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7498u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA74B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA74C4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA74D4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA74E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA74E8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7520u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7528u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7538u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7544u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA754Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7584u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA758Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA759Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA75A8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA75B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA75E8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA75F0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7610u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7618u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7638u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7640u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7660u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7668u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA767Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7684u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7698u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA76A0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA76B4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA76BCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA76E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA76ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7700u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7708u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7710u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7728u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7730u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7748u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7750u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7764u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA776Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7774u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA777Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7794u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA779Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA77C0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA77C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA77ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA77F4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7818u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7820u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7828u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7840u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7848u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA786Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7874u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7898u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA78A0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA78C4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA78C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA78D4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7904u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA790Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA791Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA794Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA797Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7984u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7990u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA799Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA79A8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA79ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA79B8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA79C4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA79DCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA79E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA79ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA79F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7A20u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7A28u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7A2Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7A40u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7A68u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7A74u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7A80u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7A8Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7A94u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7A9Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7AA4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7AC8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7AD0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7AF4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7AFCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7B20u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7B24u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7B28u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7B38u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7B4Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7B58u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7B6Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7B78u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7B84u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7B90u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7BA0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7BA8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7BB0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7BC0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7BC8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7BD4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7BD8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7BE4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7BF0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7BFCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7C24u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7C44u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7C68u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7C80u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7C90u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7CACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7CB4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7CC8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7CD0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7CD8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7CE4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7CECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7CF4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7D08u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7D10u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7D18u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7D20u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7D34u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7D3Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7D44u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7D58u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7D60u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7D6Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7D78u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7D80u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7D8Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7D9Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7DB0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7DC0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7DD0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7DDCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7DE4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7DECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7DF8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E00u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E08u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E14u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E1Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E28u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E30u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E38u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E44u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E50u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E58u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E6Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E78u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E80u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E94u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E9Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7EA4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7EACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7EC0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7EC8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7ED0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7EE4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7EF0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7EF8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7F00u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7F14u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7F1Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7F24u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7F38u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7F44u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7F4Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7F54u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7F68u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7F70u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7F78u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7F80u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7F88u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7F90u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7F94u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7F98u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7FACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7FB4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7FD0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7FD8u, &recomp_unit_0168, "recomp_unit_0168");
}
} // namespace psprecomp
