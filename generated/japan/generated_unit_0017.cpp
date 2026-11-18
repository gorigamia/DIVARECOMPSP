#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0017[4092] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 10, 0, 11, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 32, 0, 33,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 46,
    0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 54,
    0, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 59, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0,
    0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0,
    0, 69, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80,
    0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0,
    0, 0, 0, 90, 91, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99,
    0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 111, 0, 0, 112, 0, 113,
    0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 120,
    0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 136, 0, 137, 138, 0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 142, 0, 0, 0, 143, 0,
    144, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 180,
    0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0,
    191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 199, 200, 0, 0, 0, 201,
    0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 206, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0,
    0, 211, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0,
    0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226,
    0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0,
    0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0,
    0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 251, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0,
    0, 256, 0, 257, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 262, 0, 263, 264, 0, 0, 0, 0, 265, 0, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 269, 0, 270, 271, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 0, 0,
    293, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0,
    0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0,
    0, 306, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 313, 0, 0, 314, 0, 315, 0, 316, 0, 317, 0, 318, 0, 319, 0, 0, 0, 320, 0, 321, 0, 322, 323, 0, 324, 0, 325, 0, 0, 0,
    326, 0, 0, 0, 327, 0, 328, 0, 329, 0, 0, 0, 330, 0, 331, 0, 332, 0, 333, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 336,
    0, 337, 0, 0, 338, 0, 339, 0, 340, 0, 0, 341, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 346, 0,
    347, 0, 348, 349, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 356, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 359, 0, 360, 361, 0, 362, 0, 363, 364,
    365, 0, 366, 0, 367, 0, 368, 0, 0, 369, 0, 370, 371, 0, 372, 0, 0, 373, 374, 0, 375, 0, 0, 376, 0, 377, 0, 0, 378, 0, 379, 0,
    380, 0, 0, 381, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 385, 0, 0, 386, 0, 387, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 390, 0, 391, 392, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 396, 0, 0, 0, 397, 398, 0, 399, 0, 0, 400, 0, 0, 0, 401, 0,
    0, 0, 402, 0, 0, 403, 0, 404, 0, 0, 405, 0, 0, 406, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0,
    0, 0, 409, 0, 410, 0, 0, 411, 0, 412, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 417, 0, 418, 0, 419, 420,
    0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 425, 0, 426, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 433, 0, 434,
    0, 435, 0, 0, 0, 0, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 0, 441, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0,
    0, 0, 0, 0, 445, 0, 446, 0, 0, 447, 0, 448, 0, 449, 450, 0, 0, 0, 451, 0, 0, 452, 0, 453, 0, 454, 0, 455, 0, 0, 0, 0,
    0, 0, 456, 0, 0, 0, 0, 457, 0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 462, 0, 463, 0, 0, 0,
    0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 470, 0, 0, 471, 0, 0,
    0, 0, 472, 473, 474, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 479, 0, 0, 0, 0, 480, 0,
    0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0,
    0, 488, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 0, 493, 0, 0, 0, 0, 0, 494, 0, 0, 0,
    495, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 502,
    0, 0, 503, 0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 507, 0, 508, 0, 509, 0, 510, 0, 511,
    0, 512, 0, 0, 0, 0, 513, 514, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0,
    518, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 523, 0, 0, 524, 0, 525, 0, 526, 0, 527,
    0, 528, 0, 0, 529, 0, 0, 530, 0, 0, 531, 0, 0, 532, 533, 0, 534, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 537, 0,
    538, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0,
    544, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 549, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 552,
    0, 0, 553, 0, 554, 0, 555, 0, 556, 0, 557, 0, 0, 0, 558, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0,
    563, 0, 0, 0, 0, 0, 0, 564, 0, 565, 0, 0, 566, 0, 567, 568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 571,
    0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 574, 0, 575, 576, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0,
    580, 0, 581, 0, 582, 0, 0, 583, 0, 0, 0, 584, 585, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 588, 0, 589, 0, 0, 590, 0, 0, 0,
    591, 592, 0, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 0, 595, 0, 0, 596, 597, 598, 0, 0, 0, 599, 0, 600, 601, 0, 0, 0, 602, 0,
    0, 0, 0, 0, 0, 603, 0, 0, 604, 0, 0, 605, 606, 607, 0, 0, 0, 608, 0, 609, 610, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 612,
    0, 0, 613, 0, 0, 614, 615, 616, 0, 0, 0, 617, 0, 618, 619, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0,
    0, 622, 0, 0, 623, 624, 625, 0, 626, 0, 627, 0, 0, 0, 628, 629, 0, 0, 0, 0, 630, 0, 631, 0, 0, 632, 0, 633, 0, 0, 0, 634,
    635, 636, 0, 637, 0, 638, 0, 639, 0, 640, 641, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 644, 0, 645, 0, 0, 0, 0,
    0, 646, 647, 0, 648, 0, 0, 0, 0, 0, 649, 650, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0,
    0, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 0, 656, 0, 657, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0,
    0, 0, 660, 0, 0, 661, 0, 0, 662, 663, 664, 0, 0, 0, 665, 0, 666, 667, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 669, 0, 0, 0, 670, 0, 0, 671, 0, 0, 672, 0, 0, 0, 0, 673, 0, 0, 0, 674, 675, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0,
    677, 0, 678, 679, 0, 680, 0, 681, 0, 0, 0, 682, 0, 683, 0, 0, 684, 0, 685, 0, 686, 0, 687, 688, 0, 0, 0, 689, 0, 0, 0, 0,
    0, 0, 0, 690, 0, 0, 691, 0, 692, 693, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 695, 0, 0, 696, 697, 698, 0, 0, 0, 699, 0,
    0, 0, 0, 0, 0, 700, 0, 0, 701, 702, 703, 0, 0, 704, 0, 705, 0, 0, 706, 0, 707, 0, 708, 0, 709, 710, 0, 0, 0, 711, 0, 0,
    0, 0, 0, 0, 712, 0, 0, 713, 714, 715, 0, 0, 716, 0, 717, 0, 0, 718, 0, 719, 0, 720, 0, 721, 722, 0, 0, 0, 723, 0, 0, 0,
    0, 0, 0, 724, 0, 0, 725, 726, 0, 727, 0, 0, 728, 0, 729, 0, 730, 0, 731, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0,
    734, 0, 735, 0, 736, 0, 737, 0, 0, 738, 0, 739, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 742, 0, 743,
    0, 744, 0, 745, 0, 746, 0, 747, 0, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 753,
    0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 756, 0, 757, 0, 758, 0, 0, 0, 759, 0, 0, 760, 0, 0, 761, 0,
    0, 0, 762, 0, 763, 0, 0, 0, 0, 764, 0, 765, 0, 0, 766, 0, 767, 0, 0, 0, 0, 768, 0, 769, 0, 770, 0, 771, 0, 772, 0, 0,
    0, 773, 0, 0, 774, 775, 0, 0, 0, 776, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 779, 0, 0,
    0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 782, 0, 0, 783, 0, 0, 784, 0, 0, 0, 0, 785, 0, 0, 0, 0, 786, 0, 0,
    0, 0, 787, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 789, 0, 0, 790, 0, 0, 0, 791, 0, 0, 0, 792, 0, 793, 0, 0, 0,
    794, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 797, 0, 798, 0, 0, 0, 0, 0, 799, 0, 0, 800, 0, 801, 802, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0,
    804, 0, 0, 0, 0, 0, 0, 805, 0, 0, 806, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 808, 809, 0, 0, 0, 0, 0, 0, 810,
    0, 0, 0, 0, 0, 811, 812, 0, 0, 813, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 815, 0, 0, 816, 0, 0, 0, 0, 0,
    817, 0, 0, 0, 0, 0, 0, 818, 819, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 821, 822, 0, 0, 823, 0, 0, 824, 0, 0, 0,
    0, 0, 0, 825, 0, 0, 0, 826, 0, 0, 0, 827, 0, 0, 0, 828, 0, 0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 831, 0, 0, 0, 832,
    0, 0, 0, 833, 0, 0, 0, 834, 0, 0, 0, 835, 0, 0, 0, 836, 0, 0, 837, 0, 838, 0, 0, 839, 0, 0, 0, 0, 0, 0, 840, 0,
    0, 0, 0, 841, 0, 0, 0, 0, 842, 0, 0, 0, 0, 843, 0, 0, 0, 0, 844, 0, 0, 0, 0, 845, 0, 0, 0, 0, 846, 0, 0, 0,
    0, 847, 0, 0, 0, 0, 848, 0, 0, 0, 0, 849, 0, 0, 0, 0, 850, 0, 0, 0, 0, 851, 0, 0, 0, 852, 0, 853, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 854, 0, 0, 0, 0, 855, 0, 0, 856, 0, 857, 0, 858, 0, 859,
    0, 0, 0, 0, 0, 0, 0, 860, 0, 0, 0, 0, 861, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 862, 0, 0, 0, 0, 863, 0, 0,
    0, 0, 0, 0, 0, 864, 865, 0, 0, 866, 867, 0, 0, 0, 0, 868, 0, 869, 0, 0, 0, 0, 0, 0, 0, 0, 0, 870, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 871, 0, 872, 0, 873, 0, 0, 874, 0, 875, 0, 876, 0, 877, 0, 878, 0, 879, 0, 0,
    880, 0, 881, 882, 883, 0, 0, 0, 0, 0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 885, 0, 886, 0, 887, 0, 888, 0, 889, 0, 890, 0, 891,
    892, 0, 0, 0, 893, 0, 894, 0, 0, 0, 0, 0, 895, 0, 0, 0, 0, 896, 0, 897, 0, 898, 0, 899, 0, 900, 0, 901, 0, 902, 903, 0,
    0, 0, 904, 0, 0, 0, 0, 0, 0, 905, 0, 906, 0, 907, 0, 908, 0, 909, 0, 910, 0, 911, 912, 0, 0, 0, 913, 0, 0, 0, 0, 914,
    0, 0, 0, 0, 0, 0, 915, 0, 916, 0, 917, 0, 918, 0, 919, 0, 920, 0, 921, 922, 0, 0, 0, 923, 0, 0, 0, 0, 924, 0, 0, 0,
    0, 925, 0, 926, 0, 927, 0, 928, 0, 929, 0, 930, 0, 931, 932, 0, 0, 0, 933, 0, 0, 0, 0, 0, 0, 934, 0, 935, 0, 936, 0, 937,
    0, 938, 0, 939, 0, 940, 941, 0, 0, 0, 942, 0, 0, 0, 0, 943, 0, 0, 0, 0, 0, 0, 944, 0, 945, 0, 946, 0, 947, 0, 948, 0,
    949, 0, 950, 951, 0, 0, 0, 952, 0, 0, 0, 0, 953, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 954, 0, 0, 955, 0, 0, 0, 956, 0, 957, 0, 958, 0, 959, 0, 960, 0, 961, 0, 962, 0, 0, 0, 0, 0, 0, 0, 963, 0, 0,
    0, 0, 964, 0, 965, 0, 0, 0, 0, 0, 966, 0, 0, 0, 967, 0, 968, 0, 969, 0, 970, 0, 971, 0, 972, 0, 0, 0, 973, 0, 974, 0,
    975, 0, 0, 976, 0, 977, 0, 0, 0, 978, 0, 0, 979, 0, 980, 0, 0, 0, 0, 981, 0, 982, 0, 983, 0, 984, 0, 985, 0, 986, 0, 0,
    0, 0, 987, 0, 988, 0, 989, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 990, 0, 991, 0, 0, 0, 0, 992, 0, 993, 0, 0, 994,
    0, 995, 0, 0, 996, 0, 997, 0, 0, 998, 0, 0, 999, 1000, 0, 0, 1001, 0, 1002, 0, 0, 0, 1003, 0, 0, 0, 1004, 0, 0, 0, 0, 0,
    0, 1005, 0, 1006, 0, 0, 0, 0, 0, 0, 0, 1007, 0, 1008, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1009, 0, 1010, 0, 0, 0, 0, 1011, 0,
    0, 0, 1012, 0, 1013, 0, 0, 0, 1014, 0, 0, 1015, 0, 0, 0, 1016, 0, 0, 0, 0, 0, 0, 1017, 0, 0, 0, 0, 0, 0, 0, 0, 1018,
    0, 0, 1019, 0, 0, 1020, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1021, 0, 1022, 0, 0, 0, 0, 0, 0, 0, 1023, 0, 1024, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1025, 0, 0, 0, 1026, 0, 1027, 0, 0, 1028, 0, 1029, 0, 1030, 0, 0, 0, 0, 1031, 0, 1032, 0, 1033, 0, 0, 0, 1034,
    0, 1035, 0, 0, 0, 1036, 0, 0, 1037, 0, 0, 1038, 0, 1039, 0, 0, 0, 0, 0, 0, 0, 1040, 0, 1041, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1042, 0, 1043, 0, 0, 0, 0, 1044, 0, 0, 0, 1045, 0, 1046, 0, 0, 0, 1047, 0, 0, 1048, 0, 0, 0, 0, 0, 0, 1049, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1050, 0, 1051, 0, 0, 0, 0, 0, 0, 0, 1052, 0, 1053, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1054, 0, 0, 0,
    1055, 0, 1056, 0, 0, 1057, 0, 1058, 0, 1059, 0, 0, 0, 0, 1060, 0, 0, 0, 1061, 0, 1062, 0, 0, 0, 1063, 0, 0, 1064, 0, 0, 1065, 0,
    1066, 0, 0, 0, 0, 0, 0, 0, 1067, 0, 1068, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1069, 0, 1070, 0, 0, 0, 0, 1071, 0, 0, 0, 1072,
    0, 1073, 0, 0, 0, 1074, 0, 0, 1075, 0, 0, 0, 0, 0, 0, 1076, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1077, 0, 1078,
};
void recomp_unit_0017_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08848004u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0017[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08848004;
    case 2u: goto L_0884800C;
    case 3u: goto L_08848024;
    case 4u: goto L_0884802C;
    case 5u: goto L_08848044;
    case 6u: goto L_08848050;
    case 7u: goto L_08848058;
    case 8u: goto L_08848060;
    case 9u: goto L_08848068;
    case 10u: goto L_08848074;
    case 11u: goto L_0884807C;
    case 12u: goto L_08848084;
    case 13u: goto L_088480A8;
    case 14u: goto L_088480B0;
    case 15u: goto L_088480C0;
    case 16u: goto L_088480CC;
    case 17u: goto L_088480D8;
    case 18u: goto L_088480E4;
    case 19u: goto L_088480EC;
    case 20u: goto L_088480F4;
    case 21u: goto L_08848104;
    case 22u: goto L_0884812C;
    case 23u: goto L_0884813C;
    case 24u: goto L_08848144;
    case 25u: goto L_08848154;
    case 26u: goto L_08848184;
    case 27u: goto L_0884819C;
    case 28u: goto L_088481A4;
    case 29u: goto L_088481AC;
    case 30u: goto L_088481D8;
    case 31u: goto L_088481F0;
    case 32u: goto L_088481F8;
    case 33u: goto L_08848200;
    case 34u: goto L_08848214;
    case 35u: goto L_08848230;
    case 36u: goto L_0884823C;
    case 37u: goto L_08848254;
    case 38u: goto L_08848260;
    case 39u: goto L_08848284;
    case 40u: goto L_0884828C;
    case 41u: goto L_088482A0;
    case 42u: goto L_088482B0;
    case 43u: goto L_088482C8;
    case 44u: goto L_088482E0;
    case 45u: goto L_088482F4;
    case 46u: goto L_08848300;
    case 47u: goto L_08848318;
    case 48u: goto L_08848328;
    case 49u: goto L_08848338;
    case 50u: goto L_08848348;
    case 51u: goto L_08848358;
    case 52u: goto L_08848368;
    case 53u: goto L_08848378;
    case 54u: goto L_08848380;
    case 55u: goto L_0884838C;
    case 56u: goto L_0884839C;
    case 57u: goto L_088483A8;
    case 58u: goto L_088483B4;
    case 59u: goto L_088483BC;
    case 60u: goto L_088483C0;
    case 61u: goto L_088483D8;
    case 62u: goto L_088483F4;
    case 63u: goto L_088483FC;
    case 64u: goto L_08848414;
    case 65u: goto L_08848420;
    case 66u: goto L_08848430;
    case 67u: goto L_08848460;
    case 68u: goto L_08848470;
    case 69u: goto L_08848488;
    case 70u: goto L_08848490;
    case 71u: goto L_088484A0;
    case 72u: goto L_088484B8;
    case 73u: goto L_088484D0;
    case 74u: goto L_088484E8;
    case 75u: goto L_08848500;
    case 76u: goto L_0884851C;
    case 77u: goto L_08848538;
    case 78u: goto L_08848554;
    case 79u: goto L_08848568;
    case 80u: goto L_08848580;
    case 81u: goto L_0884858C;
    case 82u: goto L_088485A0;
    case 83u: goto L_088485AC;
    case 84u: goto L_088485B4;
    case 85u: goto L_088485C4;
    case 86u: goto L_088485D0;
    case 87u: goto L_088485D8;
    case 88u: goto L_088485F0;
    case 89u: goto L_088485F8;
    case 90u: goto L_08848610;
    case 91u: goto L_08848614;
    case 92u: goto L_0884861C;
    case 93u: goto L_0884862C;
    case 94u: goto L_08848644;
    case 95u: goto L_0884864C;
    case 96u: goto L_08848654;
    case 97u: goto L_08848660;
    case 98u: goto L_08848670;
    case 99u: goto L_08848680;
    case 100u: goto L_08848688;
    case 101u: goto L_088486B0;
    case 102u: goto L_088486BC;
    case 103u: goto L_088486C4;
    case 104u: goto L_08848700;
    case 105u: goto L_08848714;
    case 106u: goto L_0884871C;
    case 107u: goto L_08848724;
    case 108u: goto L_08848738;
    case 109u: goto L_08848750;
    case 110u: goto L_08848764;
    case 111u: goto L_0884876C;
    case 112u: goto L_08848778;
    case 113u: goto L_08848780;
    case 114u: goto L_08848788;
    case 115u: goto L_088487A4;
    case 116u: goto L_088487C4;
    case 117u: goto L_088487CC;
    case 118u: goto L_088487EC;
    case 119u: goto L_088487F8;
    case 120u: goto L_08848800;
    case 121u: goto L_0884881C;
    case 122u: goto L_08848834;
    case 123u: goto L_0884883C;
    case 124u: goto L_08848844;
    case 125u: goto L_0884884C;
    case 126u: goto L_08848860;
    case 127u: goto L_08848874;
    case 128u: goto L_08848888;
    case 129u: goto L_088488A0;
    case 130u: goto L_088488C4;
    case 131u: goto L_088488E0;
    case 132u: goto L_088488EC;
    case 133u: goto L_08848904;
    case 134u: goto L_08848920;
    case 135u: goto L_08848928;
    case 136u: goto L_08848934;
    case 137u: goto L_0884893C;
    case 138u: goto L_08848940;
    case 139u: goto L_08848954;
    case 140u: goto L_0884895C;
    case 141u: goto L_08848964;
    case 142u: goto L_0884896C;
    case 143u: goto L_0884897C;
    case 144u: goto L_08848984;
    case 145u: goto L_08848990;
    case 146u: goto L_08848998;
    case 147u: goto L_088489A0;
    case 148u: goto L_088489B8;
    case 149u: goto L_088489C4;
    case 150u: goto L_088489D4;
    case 151u: goto L_088489DC;
    case 152u: goto L_088489E4;
    case 153u: goto L_088489EC;
    case 154u: goto L_088489F4;
    case 155u: goto L_08848A14;
    case 156u: goto L_08848A34;
    case 157u: goto L_08848A48;
    case 158u: goto L_08848A60;
    case 159u: goto L_08848A68;
    case 160u: goto L_08848A74;
    case 161u: goto L_08848A94;
    case 162u: goto L_08848AAC;
    case 163u: goto L_08848AB8;
    case 164u: goto L_08848AD0;
    case 165u: goto L_08848AE4;
    case 166u: goto L_08848AEC;
    case 167u: goto L_08848AFC;
    case 168u: goto L_08848B1C;
    case 169u: goto L_08848B34;
    case 170u: goto L_08848B40;
    case 171u: goto L_08848B58;
    case 172u: goto L_08848B68;
    case 173u: goto L_08848BA8;
    case 174u: goto L_08848BB8;
    case 175u: goto L_08848BC4;
    case 176u: goto L_08848BD0;
    case 177u: goto L_08848BDC;
    case 178u: goto L_08848BE8;
    case 179u: goto L_08848BF4;
    case 180u: goto L_08848C00;
    case 181u: goto L_08848C0C;
    case 182u: goto L_08848C18;
    case 183u: goto L_08848C24;
    case 184u: goto L_08848C30;
    case 185u: goto L_08848C3C;
    case 186u: goto L_08848C48;
    case 187u: goto L_08848C54;
    case 188u: goto L_08848C60;
    case 189u: goto L_08848C6C;
    case 190u: goto L_08848C78;
    case 191u: goto L_08848C84;
    case 192u: goto L_08848C90;
    case 193u: goto L_08848C9C;
    case 194u: goto L_08848CA8;
    case 195u: goto L_08848CB4;
    case 196u: goto L_08848CC0;
    case 197u: goto L_08848CD8;
    case 198u: goto L_08848CE4;
    case 199u: goto L_08848CEC;
    case 200u: goto L_08848CF0;
    case 201u: goto L_08848D00;
    case 202u: goto L_08848D08;
    case 203u: goto L_08848D24;
    case 204u: goto L_08848D2C;
    case 205u: goto L_08848D38;
    case 206u: goto L_08848D40;
    case 207u: goto L_08848D44;
    case 208u: goto L_08848D58;
    case 209u: goto L_08848D70;
    case 210u: goto L_08848D7C;
    case 211u: goto L_08848D88;
    case 212u: goto L_08848D90;
    case 213u: goto L_08848DA4;
    case 214u: goto L_08848DDC;
    case 215u: goto L_08848E1C;
    case 216u: goto L_08848E2C;
    case 217u: goto L_08848E7C;
    case 218u: goto L_08848E8C;
    case 219u: goto L_08848EB4;
    case 220u: goto L_08848ED0;
    case 221u: goto L_08848EDC;
    case 222u: goto L_08848F0C;
    case 223u: goto L_08848F30;
    case 224u: goto L_08848F44;
    case 225u: goto L_08848F4C;
    case 226u: goto L_08848F80;
    case 227u: goto L_08848F98;
    case 228u: goto L_08848FA0;
    case 229u: goto L_08848FB8;
    case 230u: goto L_08848FC0;
    case 231u: goto L_08848FD8;
    case 232u: goto L_08848FF0;
    case 233u: goto L_08848FF8;
    case 234u: goto L_0884900C;
    case 235u: goto L_08849014;
    case 236u: goto L_0884902C;
    case 237u: goto L_08849044;
    case 238u: goto L_0884904C;
    case 239u: goto L_0884905C;
    case 240u: goto L_08849070;
    case 241u: goto L_0884908C;
    case 242u: goto L_0884909C;
    case 243u: goto L_088490AC;
    case 244u: goto L_088490C4;
    case 245u: goto L_088490D8;
    case 246u: goto L_088490EC;
    case 247u: goto L_08849108;
    case 248u: goto L_08849114;
    case 249u: goto L_0884912C;
    case 250u: goto L_08849138;
    case 251u: goto L_08849140;
    case 252u: goto L_08849144;
    case 253u: goto L_08849158;
    case 254u: goto L_08849174;
    case 255u: goto L_0884917C;
    case 256u: goto L_08849188;
    case 257u: goto L_08849190;
    case 258u: goto L_08849194;
    case 259u: goto L_088491A8;
    case 260u: goto L_088491C4;
    case 261u: goto L_088491CC;
    case 262u: goto L_088491D8;
    case 263u: goto L_088491E0;
    case 264u: goto L_088491E4;
    case 265u: goto L_088491F8;
    case 266u: goto L_08849214;
    case 267u: goto L_08849224;
    case 268u: goto L_08849234;
    case 269u: goto L_08849240;
    case 270u: goto L_08849248;
    case 271u: goto L_0884924C;
    case 272u: goto L_08849260;
    case 273u: goto L_08849268;
    case 274u: goto L_08849284;
    case 275u: goto L_08849290;
    case 276u: goto L_0884929C;
    case 277u: goto L_088492A8;
    case 278u: goto L_088492B4;
    case 279u: goto L_088492C0;
    case 280u: goto L_088492CC;
    case 281u: goto L_088492D8;
    case 282u: goto L_088492E4;
    case 283u: goto L_088492F8;
    case 284u: goto L_08849304;
    case 285u: goto L_0884933C;
    case 286u: goto L_08849344;
    case 287u: goto L_0884934C;
    case 288u: goto L_08849354;
    case 289u: goto L_0884935C;
    case 290u: goto L_08849364;
    case 291u: goto L_0884936C;
    case 292u: goto L_08849374;
    case 293u: goto L_08849384;
    case 294u: goto L_08849394;
    case 295u: goto L_088493A0;
    case 296u: goto L_088493C0;
    case 297u: goto L_088493CC;
    case 298u: goto L_088493EC;
    case 299u: goto L_088493FC;
    case 300u: goto L_08849410;
    case 301u: goto L_08849424;
    case 302u: goto L_08849438;
    case 303u: goto L_0884944C;
    case 304u: goto L_08849458;
    case 305u: goto L_08849464;
    case 306u: goto L_08849488;
    case 307u: goto L_0884949C;
    case 308u: goto L_088494A4;
    case 309u: goto L_088494B4;
    case 310u: goto L_088494C4;
    case 311u: goto L_088494D4;
    case 312u: goto L_088494DC;
    case 313u: goto L_0884950C;
    case 314u: goto L_08849518;
    case 315u: goto L_08849520;
    case 316u: goto L_08849528;
    case 317u: goto L_08849530;
    case 318u: goto L_08849538;
    case 319u: goto L_08849540;
    case 320u: goto L_08849550;
    case 321u: goto L_08849558;
    case 322u: goto L_08849560;
    case 323u: goto L_08849564;
    case 324u: goto L_0884956C;
    case 325u: goto L_08849574;
    case 326u: goto L_08849584;
    case 327u: goto L_08849594;
    case 328u: goto L_0884959C;
    case 329u: goto L_088495A4;
    case 330u: goto L_088495B4;
    case 331u: goto L_088495BC;
    case 332u: goto L_088495C4;
    case 333u: goto L_088495CC;
    case 334u: goto L_088495E4;
    case 335u: goto L_088495EC;
    case 336u: goto L_08849600;
    case 337u: goto L_08849608;
    case 338u: goto L_08849614;
    case 339u: goto L_0884961C;
    case 340u: goto L_08849624;
    case 341u: goto L_08849630;
    case 342u: goto L_08849634;
    case 343u: goto L_08849650;
    case 344u: goto L_08849668;
    case 345u: goto L_08849670;
    case 346u: goto L_0884967C;
    case 347u: goto L_08849684;
    case 348u: goto L_0884968C;
    case 349u: goto L_08849690;
    case 350u: goto L_088496A0;
    case 351u: goto L_088496AC;
    case 352u: goto L_088496C4;
    case 353u: goto L_088496D0;
    case 354u: goto L_088496E0;
    case 355u: goto L_088496F4;
    case 356u: goto L_088496FC;
    case 357u: goto L_08849750;
    case 358u: goto L_08849758;
    case 359u: goto L_08849760;
    case 360u: goto L_08849768;
    case 361u: goto L_0884976C;
    case 362u: goto L_08849774;
    case 363u: goto L_0884977C;
    case 364u: goto L_08849780;
    case 365u: goto L_08849784;
    case 366u: goto L_0884978C;
    case 367u: goto L_08849794;
    case 368u: goto L_0884979C;
    case 369u: goto L_088497A8;
    case 370u: goto L_088497B0;
    case 371u: goto L_088497B4;
    case 372u: goto L_088497BC;
    case 373u: goto L_088497C8;
    case 374u: goto L_088497CC;
    case 375u: goto L_088497D4;
    case 376u: goto L_088497E0;
    case 377u: goto L_088497E8;
    case 378u: goto L_088497F4;
    case 379u: goto L_088497FC;
    case 380u: goto L_08849804;
    case 381u: goto L_08849810;
    case 382u: goto L_08849818;
    case 383u: goto L_08849824;
    case 384u: goto L_08849834;
    case 385u: goto L_0884983C;
    case 386u: goto L_08849848;
    case 387u: goto L_08849850;
    case 388u: goto L_0884985C;
    case 389u: goto L_08849864;
    case 390u: goto L_0884988C;
    case 391u: goto L_08849894;
    case 392u: goto L_08849898;
    case 393u: goto L_088498A0;
    case 394u: goto L_088498AC;
    case 395u: goto L_088498BC;
    case 396u: goto L_088498C4;
    case 397u: goto L_088498D4;
    case 398u: goto L_088498D8;
    case 399u: goto L_088498E0;
    case 400u: goto L_088498EC;
    case 401u: goto L_088498FC;
    case 402u: goto L_0884990C;
    case 403u: goto L_08849918;
    case 404u: goto L_08849920;
    case 405u: goto L_0884992C;
    case 406u: goto L_08849938;
    case 407u: goto L_0884993C;
    case 408u: goto L_08849970;
    case 409u: goto L_0884998C;
    case 410u: goto L_08849994;
    case 411u: goto L_088499A0;
    case 412u: goto L_088499A8;
    case 413u: goto L_088499AC;
    case 414u: goto L_088499C0;
    case 415u: goto L_088499D8;
    case 416u: goto L_088499E0;
    case 417u: goto L_088499EC;
    case 418u: goto L_088499F4;
    case 419u: goto L_088499FC;
    case 420u: goto L_08849A00;
    case 421u: goto L_08849A10;
    case 422u: goto L_08849A1C;
    case 423u: goto L_08849A34;
    case 424u: goto L_08849A40;
    case 425u: goto L_08849A50;
    case 426u: goto L_08849A58;
    case 427u: goto L_08849A60;
    case 428u: goto L_08849A94;
    case 429u: goto L_08849AA0;
    case 430u: goto L_08849ABC;
    case 431u: goto L_08849ADC;
    case 432u: goto L_08849AF0;
    case 433u: goto L_08849AF8;
    case 434u: goto L_08849B00;
    case 435u: goto L_08849B08;
    case 436u: goto L_08849B20;
    case 437u: goto L_08849B28;
    case 438u: goto L_08849B30;
    case 439u: goto L_08849B38;
    case 440u: goto L_08849B40;
    case 441u: goto L_08849B4C;
    case 442u: goto L_08849B54;
    case 443u: goto L_08849B68;
    case 444u: goto L_08849B7C;
    case 445u: goto L_08849B94;
    case 446u: goto L_08849B9C;
    case 447u: goto L_08849BA8;
    case 448u: goto L_08849BB0;
    case 449u: goto L_08849BB8;
    case 450u: goto L_08849BBC;
    case 451u: goto L_08849BCC;
    case 452u: goto L_08849BD8;
    case 453u: goto L_08849BE0;
    case 454u: goto L_08849BE8;
    case 455u: goto L_08849BF0;
    case 456u: goto L_08849C0C;
    case 457u: goto L_08849C20;
    case 458u: goto L_08849C28;
    case 459u: goto L_08849C34;
    case 460u: goto L_08849C5C;
    case 461u: goto L_08849C64;
    case 462u: goto L_08849C6C;
    case 463u: goto L_08849C74;
    case 464u: goto L_08849C98;
    case 465u: goto L_08849CAC;
    case 466u: goto L_08849CB8;
    case 467u: goto L_08849CCC;
    case 468u: goto L_08849CD8;
    case 469u: goto L_08849CE4;
    case 470u: goto L_08849CEC;
    case 471u: goto L_08849CF8;
    case 472u: goto L_08849D0C;
    case 473u: goto L_08849D10;
    case 474u: goto L_08849D14;
    case 475u: goto L_08849D2C;
    case 476u: goto L_08849D34;
    case 477u: goto L_08849D54;
    case 478u: goto L_08849D5C;
    case 479u: goto L_08849D68;
    case 480u: goto L_08849D7C;
    case 481u: goto L_08849D8C;
    case 482u: goto L_08849D98;
    case 483u: goto L_08849DAC;
    case 484u: goto L_08849DCC;
    case 485u: goto L_08849DD4;
    case 486u: goto L_08849DE0;
    case 487u: goto L_08849DF8;
    case 488u: goto L_08849E08;
    case 489u: goto L_08849E14;
    case 490u: goto L_08849E28;
    case 491u: goto L_08849E48;
    case 492u: goto L_08849E50;
    case 493u: goto L_08849E5C;
    case 494u: goto L_08849E74;
    case 495u: goto L_08849E84;
    case 496u: goto L_08849E90;
    case 497u: goto L_08849EA4;
    case 498u: goto L_08849EC4;
    case 499u: goto L_08849ECC;
    case 500u: goto L_08849ED8;
    case 501u: goto L_08849EF0;
    case 502u: goto L_08849F00;
    case 503u: goto L_08849F0C;
    case 504u: goto L_08849F20;
    case 505u: goto L_08849F28;
    case 506u: goto L_08849F54;
    case 507u: goto L_08849F60;
    case 508u: goto L_08849F68;
    case 509u: goto L_08849F70;
    case 510u: goto L_08849F78;
    case 511u: goto L_08849F80;
    case 512u: goto L_08849F88;
    case 513u: goto L_08849F9C;
    case 514u: goto L_08849FA0;
    case 515u: goto L_08849FBC;
    case 516u: goto L_08849FC4;
    case 517u: goto L_08849FFC;
    case 518u: goto L_0884A004;
    case 519u: goto L_0884A014;
    case 520u: goto L_0884A01C;
    case 521u: goto L_0884A044;
    case 522u: goto L_0884A04C;
    case 523u: goto L_0884A05C;
    case 524u: goto L_0884A068;
    case 525u: goto L_0884A070;
    case 526u: goto L_0884A078;
    case 527u: goto L_0884A080;
    case 528u: goto L_0884A088;
    case 529u: goto L_0884A094;
    case 530u: goto L_0884A0A0;
    case 531u: goto L_0884A0AC;
    case 532u: goto L_0884A0B8;
    case 533u: goto L_0884A0BC;
    case 534u: goto L_0884A0C4;
    case 535u: goto L_0884A0DC;
    case 536u: goto L_0884A0EC;
    case 537u: goto L_0884A0FC;
    case 538u: goto L_0884A104;
    case 539u: goto L_0884A110;
    case 540u: goto L_0884A118;
    case 541u: goto L_0884A154;
    case 542u: goto L_0884A16C;
    case 543u: goto L_0884A178;
    case 544u: goto L_0884A184;
    case 545u: goto L_0884A194;
    case 546u: goto L_0884A1A0;
    case 547u: goto L_0884A1B4;
    case 548u: goto L_0884A1CC;
    case 549u: goto L_0884A1D4;
    case 550u: goto L_0884A1DC;
    case 551u: goto L_0884A1F4;
    case 552u: goto L_0884A200;
    case 553u: goto L_0884A20C;
    case 554u: goto L_0884A214;
    case 555u: goto L_0884A21C;
    case 556u: goto L_0884A224;
    case 557u: goto L_0884A22C;
    case 558u: goto L_0884A23C;
    case 559u: goto L_0884A240;
    case 560u: goto L_0884A250;
    case 561u: goto L_0884A268;
    case 562u: goto L_0884A27C;
    case 563u: goto L_0884A284;
    case 564u: goto L_0884A2A0;
    case 565u: goto L_0884A2A8;
    case 566u: goto L_0884A2B4;
    case 567u: goto L_0884A2BC;
    case 568u: goto L_0884A2C0;
    case 569u: goto L_0884A2D4;
    case 570u: goto L_0884A2EC;
    case 571u: goto L_0884A300;
    case 572u: goto L_0884A318;
    case 573u: goto L_0884A320;
    case 574u: goto L_0884A32C;
    case 575u: goto L_0884A334;
    case 576u: goto L_0884A338;
    case 577u: goto L_0884A344;
    case 578u: goto L_0884A358;
    case 579u: goto L_0884A36C;
    case 580u: goto L_0884A384;
    case 581u: goto L_0884A38C;
    case 582u: goto L_0884A394;
    case 583u: goto L_0884A3A0;
    case 584u: goto L_0884A3B0;
    case 585u: goto L_0884A3B4;
    case 586u: goto L_0884A3C0;
    case 587u: goto L_0884A3D8;
    case 588u: goto L_0884A3E0;
    case 589u: goto L_0884A3E8;
    case 590u: goto L_0884A3F4;
    case 591u: goto L_0884A404;
    case 592u: goto L_0884A408;
    case 593u: goto L_0884A414;
    case 594u: goto L_0884A430;
    case 595u: goto L_0884A43C;
    case 596u: goto L_0884A448;
    case 597u: goto L_0884A44C;
    case 598u: goto L_0884A450;
    case 599u: goto L_0884A460;
    case 600u: goto L_0884A468;
    case 601u: goto L_0884A46C;
    case 602u: goto L_0884A47C;
    case 603u: goto L_0884A498;
    case 604u: goto L_0884A4A4;
    case 605u: goto L_0884A4B0;
    case 606u: goto L_0884A4B4;
    case 607u: goto L_0884A4B8;
    case 608u: goto L_0884A4C8;
    case 609u: goto L_0884A4D0;
    case 610u: goto L_0884A4D4;
    case 611u: goto L_0884A4E4;
    case 612u: goto L_0884A500;
    case 613u: goto L_0884A50C;
    case 614u: goto L_0884A518;
    case 615u: goto L_0884A51C;
    case 616u: goto L_0884A520;
    case 617u: goto L_0884A530;
    case 618u: goto L_0884A538;
    case 619u: goto L_0884A53C;
    case 620u: goto L_0884A54C;
    case 621u: goto L_0884A578;
    case 622u: goto L_0884A588;
    case 623u: goto L_0884A594;
    case 624u: goto L_0884A598;
    case 625u: goto L_0884A59C;
    case 626u: goto L_0884A5A4;
    case 627u: goto L_0884A5AC;
    case 628u: goto L_0884A5BC;
    case 629u: goto L_0884A5C0;
    case 630u: goto L_0884A5D4;
    case 631u: goto L_0884A5DC;
    case 632u: goto L_0884A5E8;
    case 633u: goto L_0884A5F0;
    case 634u: goto L_0884A600;
    case 635u: goto L_0884A604;
    case 636u: goto L_0884A608;
    case 637u: goto L_0884A610;
    case 638u: goto L_0884A618;
    case 639u: goto L_0884A620;
    case 640u: goto L_0884A628;
    case 641u: goto L_0884A62C;
    case 642u: goto L_0884A64C;
    case 643u: goto L_0884A664;
    case 644u: goto L_0884A668;
    case 645u: goto L_0884A670;
    case 646u: goto L_0884A688;
    case 647u: goto L_0884A68C;
    case 648u: goto L_0884A694;
    case 649u: goto L_0884A6AC;
    case 650u: goto L_0884A6B0;
    case 651u: goto L_0884A6B8;
    case 652u: goto L_0884A6E0;
    case 653u: goto L_0884A6F8;
    case 654u: goto L_0884A710;
    case 655u: goto L_0884A728;
    case 656u: goto L_0884A738;
    case 657u: goto L_0884A740;
    case 658u: goto L_0884A74C;
    case 659u: goto L_0884A770;
    case 660u: goto L_0884A78C;
    case 661u: goto L_0884A798;
    case 662u: goto L_0884A7A4;
    case 663u: goto L_0884A7A8;
    case 664u: goto L_0884A7AC;
    case 665u: goto L_0884A7BC;
    case 666u: goto L_0884A7C4;
    case 667u: goto L_0884A7C8;
    case 668u: goto L_0884A7D8;
    case 669u: goto L_0884A808;
    case 670u: goto L_0884A818;
    case 671u: goto L_0884A824;
    case 672u: goto L_0884A830;
    case 673u: goto L_0884A844;
    case 674u: goto L_0884A854;
    case 675u: goto L_0884A858;
    case 676u: goto L_0884A878;
    case 677u: goto L_0884A884;
    case 678u: goto L_0884A88C;
    case 679u: goto L_0884A890;
    case 680u: goto L_0884A898;
    case 681u: goto L_0884A8A0;
    case 682u: goto L_0884A8B0;
    case 683u: goto L_0884A8B8;
    case 684u: goto L_0884A8C4;
    case 685u: goto L_0884A8CC;
    case 686u: goto L_0884A8D4;
    case 687u: goto L_0884A8DC;
    case 688u: goto L_0884A8E0;
    case 689u: goto L_0884A8F0;
    case 690u: goto L_0884A910;
    case 691u: goto L_0884A91C;
    case 692u: goto L_0884A924;
    case 693u: goto L_0884A928;
    case 694u: goto L_0884A93C;
    case 695u: goto L_0884A958;
    case 696u: goto L_0884A964;
    case 697u: goto L_0884A968;
    case 698u: goto L_0884A96C;
    case 699u: goto L_0884A97C;
    case 700u: goto L_0884A998;
    case 701u: goto L_0884A9A4;
    case 702u: goto L_0884A9A8;
    case 703u: goto L_0884A9AC;
    case 704u: goto L_0884A9B8;
    case 705u: goto L_0884A9C0;
    case 706u: goto L_0884A9CC;
    case 707u: goto L_0884A9D4;
    case 708u: goto L_0884A9DC;
    case 709u: goto L_0884A9E4;
    case 710u: goto L_0884A9E8;
    case 711u: goto L_0884A9F8;
    case 712u: goto L_0884AA14;
    case 713u: goto L_0884AA20;
    case 714u: goto L_0884AA24;
    case 715u: goto L_0884AA28;
    case 716u: goto L_0884AA34;
    case 717u: goto L_0884AA3C;
    case 718u: goto L_0884AA48;
    case 719u: goto L_0884AA50;
    case 720u: goto L_0884AA58;
    case 721u: goto L_0884AA60;
    case 722u: goto L_0884AA64;
    case 723u: goto L_0884AA74;
    case 724u: goto L_0884AA90;
    case 725u: goto L_0884AA9C;
    case 726u: goto L_0884AAA0;
    case 727u: goto L_0884AAA8;
    case 728u: goto L_0884AAB4;
    case 729u: goto L_0884AABC;
    case 730u: goto L_0884AAC4;
    case 731u: goto L_0884AACC;
    case 732u: goto L_0884AAD4;
    case 733u: goto L_0884AAF8;
    case 734u: goto L_0884AB04;
    case 735u: goto L_0884AB0C;
    case 736u: goto L_0884AB14;
    case 737u: goto L_0884AB1C;
    case 738u: goto L_0884AB28;
    case 739u: goto L_0884AB30;
    case 740u: goto L_0884AB34;
    case 741u: goto L_0884AB5C;
    case 742u: goto L_0884AB78;
    case 743u: goto L_0884AB80;
    case 744u: goto L_0884AB88;
    case 745u: goto L_0884AB90;
    case 746u: goto L_0884AB98;
    case 747u: goto L_0884ABA0;
    case 748u: goto L_0884ABB4;
    case 749u: goto L_0884ABC8;
    case 750u: goto L_0884ABD4;
    case 751u: goto L_0884ABE8;
    case 752u: goto L_0884ABF4;
    case 753u: goto L_0884AC00;
    case 754u: goto L_0884AC14;
    case 755u: goto L_0884AC34;
    case 756u: goto L_0884AC44;
    case 757u: goto L_0884AC4C;
    case 758u: goto L_0884AC54;
    case 759u: goto L_0884AC64;
    case 760u: goto L_0884AC70;
    case 761u: goto L_0884AC7C;
    case 762u: goto L_0884AC8C;
    case 763u: goto L_0884AC94;
    case 764u: goto L_0884ACA8;
    case 765u: goto L_0884ACB0;
    case 766u: goto L_0884ACBC;
    case 767u: goto L_0884ACC4;
    case 768u: goto L_0884ACD8;
    case 769u: goto L_0884ACE0;
    case 770u: goto L_0884ACE8;
    case 771u: goto L_0884ACF0;
    case 772u: goto L_0884ACF8;
    case 773u: goto L_0884AD08;
    case 774u: goto L_0884AD14;
    case 775u: goto L_0884AD18;
    case 776u: goto L_0884AD28;
    case 777u: goto L_0884AD38;
    case 778u: goto L_0884AD6C;
    case 779u: goto L_0884AD78;
    case 780u: goto L_0884AD88;
    case 781u: goto L_0884ADAC;
    case 782u: goto L_0884ADB8;
    case 783u: goto L_0884ADC4;
    case 784u: goto L_0884ADD0;
    case 785u: goto L_0884ADE4;
    case 786u: goto L_0884ADF8;
    case 787u: goto L_0884AE0C;
    case 788u: goto L_0884AE28;
    case 789u: goto L_0884AE40;
    case 790u: goto L_0884AE4C;
    case 791u: goto L_0884AE5C;
    case 792u: goto L_0884AE6C;
    case 793u: goto L_0884AE74;
    case 794u: goto L_0884AE84;
    case 795u: goto L_0884AE8C;
    case 796u: goto L_0884AEDC;
    case 797u: goto L_0884AF20;
    case 798u: goto L_0884AF28;
    case 799u: goto L_0884AF40;
    case 800u: goto L_0884AF4C;
    case 801u: goto L_0884AF54;
    case 802u: goto L_0884AF58;
    case 803u: goto L_0884AF68;
    case 804u: goto L_0884AF84;
    case 805u: goto L_0884AFA0;
    case 806u: goto L_0884AFAC;
    case 807u: goto L_0884AFC4;
    case 808u: goto L_0884AFE0;
    case 809u: goto L_0884AFE4;
    case 810u: goto L_0884B000;
    case 811u: goto L_0884B018;
    case 812u: goto L_0884B01C;
    case 813u: goto L_0884B028;
    case 814u: goto L_0884B044;
    case 815u: goto L_0884B060;
    case 816u: goto L_0884B06C;
    case 817u: goto L_0884B084;
    case 818u: goto L_0884B0A0;
    case 819u: goto L_0884B0A4;
    case 820u: goto L_0884B0C0;
    case 821u: goto L_0884B0D8;
    case 822u: goto L_0884B0DC;
    case 823u: goto L_0884B0E8;
    case 824u: goto L_0884B0F4;
    case 825u: goto L_0884B110;
    case 826u: goto L_0884B120;
    case 827u: goto L_0884B130;
    case 828u: goto L_0884B140;
    case 829u: goto L_0884B150;
    case 830u: goto L_0884B160;
    case 831u: goto L_0884B170;
    case 832u: goto L_0884B180;
    case 833u: goto L_0884B190;
    case 834u: goto L_0884B1A0;
    case 835u: goto L_0884B1B0;
    case 836u: goto L_0884B1C0;
    case 837u: goto L_0884B1CC;
    case 838u: goto L_0884B1D4;
    case 839u: goto L_0884B1E0;
    case 840u: goto L_0884B1FC;
    case 841u: goto L_0884B210;
    case 842u: goto L_0884B224;
    case 843u: goto L_0884B238;
    case 844u: goto L_0884B24C;
    case 845u: goto L_0884B260;
    case 846u: goto L_0884B274;
    case 847u: goto L_0884B288;
    case 848u: goto L_0884B29C;
    case 849u: goto L_0884B2B0;
    case 850u: goto L_0884B2C4;
    case 851u: goto L_0884B2D8;
    case 852u: goto L_0884B2E8;
    case 853u: goto L_0884B2F0;
    case 854u: goto L_0884B348;
    case 855u: goto L_0884B35C;
    case 856u: goto L_0884B368;
    case 857u: goto L_0884B370;
    case 858u: goto L_0884B378;
    case 859u: goto L_0884B380;
    case 860u: goto L_0884B3A0;
    case 861u: goto L_0884B3B4;
    case 862u: goto L_0884B3E4;
    case 863u: goto L_0884B3F8;
    case 864u: goto L_0884B418;
    case 865u: goto L_0884B41C;
    case 866u: goto L_0884B428;
    case 867u: goto L_0884B42C;
    case 868u: goto L_0884B440;
    case 869u: goto L_0884B448;
    case 870u: goto L_0884B470;
    case 871u: goto L_0884B4B4;
    case 872u: goto L_0884B4BC;
    case 873u: goto L_0884B4C4;
    case 874u: goto L_0884B4D0;
    case 875u: goto L_0884B4D8;
    case 876u: goto L_0884B4E0;
    case 877u: goto L_0884B4E8;
    case 878u: goto L_0884B4F0;
    case 879u: goto L_0884B4F8;
    case 880u: goto L_0884B504;
    case 881u: goto L_0884B50C;
    case 882u: goto L_0884B510;
    case 883u: goto L_0884B514;
    case 884u: goto L_0884B53C;
    case 885u: goto L_0884B550;
    case 886u: goto L_0884B558;
    case 887u: goto L_0884B560;
    case 888u: goto L_0884B568;
    case 889u: goto L_0884B570;
    case 890u: goto L_0884B578;
    case 891u: goto L_0884B580;
    case 892u: goto L_0884B584;
    case 893u: goto L_0884B594;
    case 894u: goto L_0884B59C;
    case 895u: goto L_0884B5B4;
    case 896u: goto L_0884B5C8;
    case 897u: goto L_0884B5D0;
    case 898u: goto L_0884B5D8;
    case 899u: goto L_0884B5E0;
    case 900u: goto L_0884B5E8;
    case 901u: goto L_0884B5F0;
    case 902u: goto L_0884B5F8;
    case 903u: goto L_0884B5FC;
    case 904u: goto L_0884B60C;
    case 905u: goto L_0884B628;
    case 906u: goto L_0884B630;
    case 907u: goto L_0884B638;
    case 908u: goto L_0884B640;
    case 909u: goto L_0884B648;
    case 910u: goto L_0884B650;
    case 911u: goto L_0884B658;
    case 912u: goto L_0884B65C;
    case 913u: goto L_0884B66C;
    case 914u: goto L_0884B680;
    case 915u: goto L_0884B69C;
    case 916u: goto L_0884B6A4;
    case 917u: goto L_0884B6AC;
    case 918u: goto L_0884B6B4;
    case 919u: goto L_0884B6BC;
    case 920u: goto L_0884B6C4;
    case 921u: goto L_0884B6CC;
    case 922u: goto L_0884B6D0;
    case 923u: goto L_0884B6E0;
    case 924u: goto L_0884B6F4;
    case 925u: goto L_0884B708;
    case 926u: goto L_0884B710;
    case 927u: goto L_0884B718;
    case 928u: goto L_0884B720;
    case 929u: goto L_0884B728;
    case 930u: goto L_0884B730;
    case 931u: goto L_0884B738;
    case 932u: goto L_0884B73C;
    case 933u: goto L_0884B74C;
    case 934u: goto L_0884B768;
    case 935u: goto L_0884B770;
    case 936u: goto L_0884B778;
    case 937u: goto L_0884B780;
    case 938u: goto L_0884B788;
    case 939u: goto L_0884B790;
    case 940u: goto L_0884B798;
    case 941u: goto L_0884B79C;
    case 942u: goto L_0884B7AC;
    case 943u: goto L_0884B7C0;
    case 944u: goto L_0884B7DC;
    case 945u: goto L_0884B7E4;
    case 946u: goto L_0884B7EC;
    case 947u: goto L_0884B7F4;
    case 948u: goto L_0884B7FC;
    case 949u: goto L_0884B804;
    case 950u: goto L_0884B80C;
    case 951u: goto L_0884B810;
    case 952u: goto L_0884B820;
    case 953u: goto L_0884B834;
    case 954u: goto L_0884B88C;
    case 955u: goto L_0884B898;
    case 956u: goto L_0884B8A8;
    case 957u: goto L_0884B8B0;
    case 958u: goto L_0884B8B8;
    case 959u: goto L_0884B8C0;
    case 960u: goto L_0884B8C8;
    case 961u: goto L_0884B8D0;
    case 962u: goto L_0884B8D8;
    case 963u: goto L_0884B8F8;
    case 964u: goto L_0884B90C;
    case 965u: goto L_0884B914;
    case 966u: goto L_0884B92C;
    case 967u: goto L_0884B93C;
    case 968u: goto L_0884B944;
    case 969u: goto L_0884B94C;
    case 970u: goto L_0884B954;
    case 971u: goto L_0884B95C;
    case 972u: goto L_0884B964;
    case 973u: goto L_0884B974;
    case 974u: goto L_0884B97C;
    case 975u: goto L_0884B984;
    case 976u: goto L_0884B990;
    case 977u: goto L_0884B998;
    case 978u: goto L_0884B9A8;
    case 979u: goto L_0884B9B4;
    case 980u: goto L_0884B9BC;
    case 981u: goto L_0884B9D0;
    case 982u: goto L_0884B9D8;
    case 983u: goto L_0884B9E0;
    case 984u: goto L_0884B9E8;
    case 985u: goto L_0884B9F0;
    case 986u: goto L_0884B9F8;
    case 987u: goto L_0884BA0C;
    case 988u: goto L_0884BA14;
    case 989u: goto L_0884BA1C;
    case 990u: goto L_0884BA50;
    case 991u: goto L_0884BA58;
    case 992u: goto L_0884BA6C;
    case 993u: goto L_0884BA74;
    case 994u: goto L_0884BA80;
    case 995u: goto L_0884BA88;
    case 996u: goto L_0884BA94;
    case 997u: goto L_0884BA9C;
    case 998u: goto L_0884BAA8;
    case 999u: goto L_0884BAB4;
    case 1000u: goto L_0884BAB8;
    case 1001u: goto L_0884BAC4;
    case 1002u: goto L_0884BACC;
    case 1003u: goto L_0884BADC;
    case 1004u: goto L_0884BAEC;
    case 1005u: goto L_0884BB08;
    case 1006u: goto L_0884BB10;
    case 1007u: goto L_0884BB30;
    case 1008u: goto L_0884BB38;
    case 1009u: goto L_0884BB60;
    case 1010u: goto L_0884BB68;
    case 1011u: goto L_0884BB7C;
    case 1012u: goto L_0884BB8C;
    case 1013u: goto L_0884BB94;
    case 1014u: goto L_0884BBA4;
    case 1015u: goto L_0884BBB0;
    case 1016u: goto L_0884BBC0;
    case 1017u: goto L_0884BBDC;
    case 1018u: goto L_0884BC00;
    case 1019u: goto L_0884BC0C;
    case 1020u: goto L_0884BC18;
    case 1021u: goto L_0884BC40;
    case 1022u: goto L_0884BC48;
    case 1023u: goto L_0884BC68;
    case 1024u: goto L_0884BC70;
    case 1025u: goto L_0884BC98;
    case 1026u: goto L_0884BCA8;
    case 1027u: goto L_0884BCB0;
    case 1028u: goto L_0884BCBC;
    case 1029u: goto L_0884BCC4;
    case 1030u: goto L_0884BCCC;
    case 1031u: goto L_0884BCE0;
    case 1032u: goto L_0884BCE8;
    case 1033u: goto L_0884BCF0;
    case 1034u: goto L_0884BD00;
    case 1035u: goto L_0884BD08;
    case 1036u: goto L_0884BD18;
    case 1037u: goto L_0884BD24;
    case 1038u: goto L_0884BD30;
    case 1039u: goto L_0884BD38;
    case 1040u: goto L_0884BD58;
    case 1041u: goto L_0884BD60;
    case 1042u: goto L_0884BD88;
    case 1043u: goto L_0884BD90;
    case 1044u: goto L_0884BDA4;
    case 1045u: goto L_0884BDB4;
    case 1046u: goto L_0884BDBC;
    case 1047u: goto L_0884BDCC;
    case 1048u: goto L_0884BDD8;
    case 1049u: goto L_0884BDF4;
    case 1050u: goto L_0884BE1C;
    case 1051u: goto L_0884BE24;
    case 1052u: goto L_0884BE44;
    case 1053u: goto L_0884BE4C;
    case 1054u: goto L_0884BE74;
    case 1055u: goto L_0884BE84;
    case 1056u: goto L_0884BE8C;
    case 1057u: goto L_0884BE98;
    case 1058u: goto L_0884BEA0;
    case 1059u: goto L_0884BEA8;
    case 1060u: goto L_0884BEBC;
    case 1061u: goto L_0884BECC;
    case 1062u: goto L_0884BED4;
    case 1063u: goto L_0884BEE4;
    case 1064u: goto L_0884BEF0;
    case 1065u: goto L_0884BEFC;
    case 1066u: goto L_0884BF04;
    case 1067u: goto L_0884BF24;
    case 1068u: goto L_0884BF2C;
    case 1069u: goto L_0884BF54;
    case 1070u: goto L_0884BF5C;
    case 1071u: goto L_0884BF70;
    case 1072u: goto L_0884BF80;
    case 1073u: goto L_0884BF88;
    case 1074u: goto L_0884BF98;
    case 1075u: goto L_0884BFA4;
    case 1076u: goto L_0884BFC0;
    case 1077u: goto L_0884BFE8;
    case 1078u: goto L_0884BFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08848004:
    ctx.set_gpr(31, 0x0884800Cu);
    // nop
    goto L_0884819C;
L_0884800C:
    ctx.set_gpr(3, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(9068), ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848024u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848024u) goto L_08848024;
    return;
L_08848024:
    ctx.set_gpr(31, 0x0884802Cu);
    // nop
    goto L_0884819C;
L_0884802C:
    ctx.set_gpr(3, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(9072), ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848044u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848044u) goto L_08848044;
    return;
L_08848044:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08848050u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21780));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 1u, 0x08AB4000u>(ctx, &aot_mem) && ctx.pc == 0x08848050u) goto L_08848050;
    return;
L_08848050:
    ctx.set_gpr(31, 0x08848058u);
    // nop
    goto L_08848BDC;
L_08848058:
    ctx.set_gpr(31, 0x08848060u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 178u, 0x0883CF58u>(ctx, &aot_mem) && ctx.pc == 0x08848060u) goto L_08848060;
    return;
L_08848060:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, 2181u << 16u);
        goto L_0884807C;
    }
    goto L_08848068;
L_08848068:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08848074u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10260));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 977u, 0x08AAFC50u>(ctx, &aot_mem) && ctx.pc == 0x08848074u) goto L_08848074;
    return;
L_08848074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08848050;
      }
      goto L_0884807C;
    }
L_0884807C:
    ctx.set_gpr(31, 0x08848084u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9716));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 523u, 0x08851B54u>(ctx, &aot_mem) && ctx.pc == 0x08848084u) goto L_08848084;
    return;
L_08848084:
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17288u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9060)));
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_gpr(31, 0x088480A8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15468));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 344u, 0x088511E0u>(ctx, &aot_mem) && ctx.pc == 0x088480A8u) goto L_088480A8;
    return;
L_088480A8:
    ctx.set_gpr(31, 0x088480B0u);
    // nop
    goto L_08848BC4;
L_088480B0:
    ctx.set_gpr(4, 2238u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088480C0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15048));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 527u, 0x08841E7Cu>(ctx, &aot_mem) && ctx.pc == 0x088480C0u) goto L_088480C0;
    return;
L_088480C0:
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_gpr(31, 0x088480CCu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15688));
    goto L_08849464;
L_088480CC:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x088480D8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12920));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 714u, 0x08AF2E88u>(ctx, &aot_mem) && ctx.pc == 0x088480D8u) goto L_088480D8;
    return;
L_088480D8:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x088480E4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14364));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 415u, 0x08B020C4u>(ctx, &aot_mem) && ctx.pc == 0x088480E4u) goto L_088480E4;
    return;
L_088480E4:
    ctx.set_gpr(31, 0x088480ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 593u, 0x08847900u>(ctx, &aot_mem) && ctx.pc == 0x088480ECu) goto L_088480EC;
    return;
L_088480EC:
    ctx.set_gpr(31, 0x088480F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 668u, 0x08847CDCu>(ctx, &aot_mem) && ctx.pc == 0x088480F4u) goto L_088480F4;
    return;
L_088480F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848104:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08848144;
      }
      goto L_0884812C;
    }
L_0884812C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0884813Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884813Cu) goto L_0884813C;
    return;
L_0884813C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    goto L_08848144;
L_08848144:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848154:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848184u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848184u) goto L_08848184;
    return;
L_08848184:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884819C:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 14u, 0x088F0130u>(ctx, &aot_mem); return;
L_088481A4:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 410u, 0x0899A5D4u>(ctx, &aot_mem); return;
L_088481AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9064)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088481D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088481D8u) goto L_088481D8;
    return;
L_088481D8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9056)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088481F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088481F0u) goto L_088481F0;
    return;
L_088481F0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 2233u << 16u);
        goto L_08848200;
    }
    goto L_088481F8;
L_088481F8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_088483C0;
      }
      goto L_08848200;
    }
L_08848200:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9068)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848214u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848214u) goto L_08848214;
    return;
L_08848214:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9072)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848230u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848230u) goto L_08848230;
    return;
L_08848230:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 2233u << 16u);
        goto L_0884828C;
    }
    goto L_0884823C;
L_0884823C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9072)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848254u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848254u) goto L_08848254;
    return;
L_08848254:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08848260u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08848260u) goto L_08848260;
    return;
L_08848260:
    ctx.set_gpr(2, 20078u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 27432u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9072)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848284u);
    ctx.fpr[20] = ctx.fpr[0] / ctx.fpr[1];
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848284u) goto L_08848284;
    return;
L_08848284:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088482A0;
      }
      goto L_0884828C;
    }
L_0884828C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9072)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088482A0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088482A0u) goto L_088482A0;
    return;
L_088482A0:
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15820));
    ctx.set_gpr(31, 0x088482B0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_0884B2F0;
L_088482B0:
    ctx.set_gpr(4, 2243u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15688));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088482C8u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    goto L_08849C34;
L_088482C8:
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15896));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088482E0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 691u, 0x08847DFCu>(ctx, &aot_mem) && ctx.pc == 0x088482E0u) goto L_088482E0;
    return;
L_088482E0:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19888));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088482F4u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 678u, 0x0885295Cu>(ctx, &aot_mem) && ctx.pc == 0x088482F4u) goto L_088482F4;
    return;
L_088482F4:
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_gpr(31, 0x08848300u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15688));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 510u, 0x08847284u>(ctx, &aot_mem) && ctx.pc == 0x08848300u) goto L_08848300;
    return;
L_08848300:
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08848318u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15468));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 420u, 0x08851594u>(ctx, &aot_mem) && ctx.pc == 0x08848318u) goto L_08848318;
    return;
L_08848318:
    ctx.set_gpr(4, 2238u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15048));
    ctx.set_gpr(31, 0x08848328u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 616u, 0x08842528u>(ctx, &aot_mem) && ctx.pc == 0x08848328u) goto L_08848328;
    return;
L_08848328:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12720));
    ctx.set_gpr(31, 0x08848338u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 146u, 0x08AF09D4u>(ctx, &aot_mem) && ctx.pc == 0x08848338u) goto L_08848338;
    return;
L_08848338:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12920));
    ctx.set_gpr(31, 0x08848348u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 759u, 0x08AF30F8u>(ctx, &aot_mem) && ctx.pc == 0x08848348u) goto L_08848348;
    return;
L_08848348:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12844));
    ctx.set_gpr(31, 0x08848358u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 378u, 0x08AF175Cu>(ctx, &aot_mem) && ctx.pc == 0x08848358u) goto L_08848358;
    return;
L_08848358:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12888));
    ctx.set_gpr(31, 0x08848368u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 458u, 0x08AF1C54u>(ctx, &aot_mem) && ctx.pc == 0x08848368u) goto L_08848368;
    return;
L_08848368:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14364));
    ctx.set_gpr(31, 0x08848378u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 512u, 0x08B02738u>(ctx, &aot_mem) && ctx.pc == 0x08848378u) goto L_08848378;
    return;
L_08848378:
    ctx.set_gpr(31, 0x08848380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 895u, 0x08AAF7C8u>(ctx, &aot_mem) && ctx.pc == 0x08848380u) goto L_08848380;
    return;
L_08848380:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x0884838Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10260));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 977u, 0x08AAFC50u>(ctx, &aot_mem) && ctx.pc == 0x0884838Cu) goto L_0884838C;
    return;
L_0884838C:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x0884839Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8360));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 188u, 0x08AB0AE8u>(ctx, &aot_mem) && ctx.pc == 0x0884839Cu) goto L_0884839C;
    return;
L_0884839C:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x088483A8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14628));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 190u, 0x08AD4AA4u>(ctx, &aot_mem) && ctx.pc == 0x088483A8u) goto L_088483A8;
    return;
L_088483A8:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x088483B4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14576));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 779u, 0x08ACEA20u>(ctx, &aot_mem) && ctx.pc == 0x088483B4u) goto L_088483B4;
    return;
L_088483B4:
    ctx.set_gpr(31, 0x088483BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 668u, 0x08847CDCu>(ctx, &aot_mem) && ctx.pc == 0x088483BCu) goto L_088483BC;
    return;
L_088483BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_088483C0;
L_088483C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088483D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088483F4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088483FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08848420;
      }
      goto L_08848414;
    }
L_08848414:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08848460;
      }
      goto L_08848420;
    }
L_08848420:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848430u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848430u) goto L_08848430;
    return;
L_08848430:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[8] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    goto L_08848460;
L_08848460:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848470:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(4, 2244u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14628));
    ctx.set_gpr(31, 0x08848488u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    goto L_08848680;
L_08848488:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884864C;
      }
      goto L_08848490;
    }
L_08848490:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9080)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, 2233u << 16u);
        goto L_08848554;
    }
    goto L_088484A0;
L_088484A0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9060)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(736)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088484B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088484B8u) goto L_088484B8;
    return;
L_088484B8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9060)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(716)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088484D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088484D0u) goto L_088484D0;
    return;
L_088484D0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9060)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(728)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088484E8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088484E8u) goto L_088484E8;
    return;
L_088484E8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9060)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(720)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848500u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848500u) goto L_08848500;
    return;
L_08848500:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0884851Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x0884851Cu) goto L_0884851C;
    return;
L_0884851C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9060)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848538u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848538u) goto L_08848538;
    return;
L_08848538:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9080)));
    ctx.set_gpr(3, 2233u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(9080), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08848670;
      }
      goto L_08848554;
    }
L_08848554:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9060)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(716)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848568u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848568u) goto L_08848568;
    return;
L_08848568:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9060)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(728)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848580u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848580u) goto L_08848580;
    return;
L_08848580:
    ctx.set_gpr(4, 2238u << 16u);
    ctx.set_gpr(31, 0x0884858Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15048));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 709u, 0x0884312Cu>(ctx, &aot_mem) && ctx.pc == 0x0884858Cu) goto L_0884858C;
    return;
L_0884858C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9060)));
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_gpr(31, 0x088485A0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15468));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 444u, 0x08851734u>(ctx, &aot_mem) && ctx.pc == 0x088485A0u) goto L_088485A0;
    return;
L_088485A0:
    ctx.set_gpr(4, 2238u << 16u);
    ctx.set_gpr(31, 0x088485ACu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15048));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 766u, 0x088434ACu>(ctx, &aot_mem) && ctx.pc == 0x088485ACu) goto L_088485AC;
    return;
L_088485AC:
    ctx.set_gpr(31, 0x088485B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 533u, 0x08851DD4u>(ctx, &aot_mem) && ctx.pc == 0x088485B4u) goto L_088485B4;
    return;
L_088485B4:
    ctx.set_gpr(4, 2238u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15048));
    ctx.set_gpr(31, 0x088485C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 816u, 0x08843794u>(ctx, &aot_mem) && ctx.pc == 0x088485C4u) goto L_088485C4;
    return;
L_088485C4:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x088485D0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10244));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 830u, 0x08AAF4B8u>(ctx, &aot_mem) && ctx.pc == 0x088485D0u) goto L_088485D0;
    return;
L_088485D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884862C;
      }
      goto L_088485D8;
    }
L_088485D8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9060)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(724)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088485F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088485F0u) goto L_088485F0;
    return;
L_088485F0:
    ctx.set_gpr(31, 0x088485F8u);
    // nop
    ctx.pc = 0x08B0DF3Cu;
    return;
L_088485F8:
    ctx.set_gpr(3, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(9076)));
    ctx.set_gpr(3, 2233u << 16u);
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(9076), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08848614;
      }
      goto L_08848610;
    }
L_08848610:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08848614;
L_08848614:
    ctx.set_gpr(31, 0x0884861Cu);
    ctx.set_gpr(4, 0u + 0u);
    ctx.pc = 0x08B0DF0Cu;
    return;
L_0884861C:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884862Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10244));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 831u, 0x08AAF4C4u>(ctx, &aot_mem) && ctx.pc == 0x0884862Cu) goto L_0884862C;
    return;
L_0884862C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9060)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(720)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848644u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848644u) goto L_08848644;
    return;
L_08848644:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08848670;
      }
      goto L_0884864C;
    }
L_0884864C:
    ctx.set_gpr(31, 0x08848654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 555u, 0x08851F80u>(ctx, &aot_mem) && ctx.pc == 0x08848654u) goto L_08848654;
    return;
L_08848654:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08848660u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14628));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 208u, 0x08AD4B48u>(ctx, &aot_mem) && ctx.pc == 0x08848660u) goto L_08848660;
    return;
L_08848660:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(9080), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08848670;
L_08848670:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848680:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848688:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088486B0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_08848A68;
L_088486B0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x088486BCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_08848A34;
L_088486BC:
    ctx.set_gpr(31, 0x088486C4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    goto L_08848A14;
L_088486C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(24));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    ctx.set_gpr(31, 0x08848700u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 245u, 0x0883D3CCu>(ctx, &aot_mem) && ctx.pc == 0x08848700u) goto L_08848700;
    return;
L_08848700:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848714u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848714u) goto L_08848714;
    return;
L_08848714:
    ctx.set_gpr(31, 0x0884871Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_088489F4;
L_0884871C:
    ctx.set_gpr(31, 0x08848724u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 245u, 0x0883D3CCu>(ctx, &aot_mem) && ctx.pc == 0x08848724u) goto L_08848724;
    return;
L_08848724:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1024)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848738u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848738u) goto L_08848738;
    return;
L_08848738:
    ctx.set_gpr(2, 16880u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08848750u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 245u, 0x0883D3CCu>(ctx, &aot_mem) && ctx.pc == 0x08848750u) goto L_08848750;
    return;
L_08848750:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1020)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848764u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848764u) goto L_08848764;
    return;
L_08848764:
    ctx.set_gpr(31, 0x0884876Cu);
    // nop
    goto L_088489EC;
L_0884876C:
    ctx.set_gpr(3, 2233u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(9056), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08848780;
      }
      goto L_08848778;
    }
L_08848778:
    ctx.set_gpr(31, 0x08848780u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 215u, 0x08810BD8u>(ctx, &aot_mem) && ctx.pc == 0x08848780u) goto L_08848780;
    return;
L_08848780:
    ctx.set_gpr(31, 0x08848788u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 610u, 0x0883EB24u>(ctx, &aot_mem) && ctx.pc == 0x08848788u) goto L_08848788;
    return;
L_08848788:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9056)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088487A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088487A4u) goto L_088487A4;
    return;
L_088487A4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9056)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088487C4u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088487C4u) goto L_088487C4;
    return;
L_088487C4:
    ctx.set_gpr(31, 0x088487CCu);
    // nop
    goto L_088489E4;
L_088487CC:
    ctx.set_gpr(3, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(9064), ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088487ECu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9056)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088487ECu) goto L_088487EC;
    return;
L_088487EC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(31, 0x088487F8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9056)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 256u, 0x0883D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088487F8u) goto L_088487F8;
    return;
L_088487F8:
    ctx.set_gpr(31, 0x08848800u);
    // nop
    goto L_08848998;
L_08848800:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9056)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0884881Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884881Cu) goto L_0884881C;
    return;
L_0884881C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9064)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848834u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848834u) goto L_08848834;
    return;
L_08848834:
    ctx.set_gpr(31, 0x0884883Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 256u, 0x0883D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0884883Cu) goto L_0884883C;
    return;
L_0884883C:
    ctx.set_gpr(31, 0x08848844u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0884896C;
L_08848844:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08848888;
      }
      goto L_0884884C;
    }
L_0884884C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9064)));
    ctx.set_gpr(5, 2180u << 16u);
    ctx.set_gpr(31, 0x08848860u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32596));
    goto L_08848964;
L_08848860:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9064)));
    ctx.set_gpr(5, 2180u << 16u);
    ctx.set_gpr(31, 0x08848874u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32656));
    goto L_0884895C;
L_08848874:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9064)));
    ctx.set_gpr(5, 2180u << 16u);
    ctx.set_gpr(31, 0x08848888u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32672));
    goto L_08848954;
L_08848888:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9056)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088488A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088488A0u) goto L_088488A0;
    return;
L_088488A0:
    ctx.set_gpr(3, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(9060), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088488C4u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x088488C4u) goto L_088488C4;
    return;
L_088488C4:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9060)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088488E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088488E0u) goto L_088488E0;
    return;
L_088488E0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x088488ECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08848904;
L_088488EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848904:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884893C;
      }
      goto L_08848920;
    }
L_08848920:
    ctx.set_gpr(31, 0x08848928u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08848928u) goto L_08848928;
    return;
L_08848928:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08848940;
    }
    goto L_08848934;
L_08848934:
    ctx.set_gpr(31, 0x0884893Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884893Cu) goto L_0884893C;
    return;
L_0884893C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08848940;
L_08848940:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848954:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884895C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848964:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884896C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0884897Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08848990;
L_0884897C:
    ctx.set_gpr(31, 0x08848984u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 73u, 0x08844420u>(ctx, &aot_mem) && ctx.pc == 0x08848984u) goto L_08848984;
    return;
L_08848984:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848990:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848998:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 116u, 0x08988A40u>(ctx, &aot_mem); return;
L_088489A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088489B8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_088489DC;
L_088489B8:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088489C4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088489D4;
L_088489C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088489D4:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem); return;
L_088489DC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088489E4:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 95u, 0x0898881Cu>(ctx, &aot_mem); return;
L_088489EC:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 989u, 0x08987F98u>(ctx, &aot_mem); return;
L_088489F4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848A14:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848A34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08848A48u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08848A60;
L_08848A48:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848A60:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 51u, 0x0898C4BCu>(ctx, &aot_mem); return;
L_08848A68:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848A74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9068)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848A94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848A94u) goto L_08848A94;
    return;
L_08848A94:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9072)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848AACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848AACu) goto L_08848AAC;
    return;
L_08848AAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848AB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08848AEC;
      }
      goto L_08848AD0;
    }
L_08848AD0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848AE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848AE4u) goto L_08848AE4;
    return;
L_08848AE4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    goto L_08848AEC;
L_08848AEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848AFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9068)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848B1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848B1Cu) goto L_08848B1C;
    return;
L_08848B1C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9072)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848B34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848B34u) goto L_08848B34;
    return;
L_08848B34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848B40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08848BA8;
      }
      goto L_08848B58;
    }
L_08848B58:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08848B68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848B68u) goto L_08848B68;
    return;
L_08848B68:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[8]);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08848BA8;
L_08848BA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848BB8:
    ctx.set_gpr(2, 2233u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9056)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848BC4:
    ctx.set_gpr(2, 2233u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9060)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848BD0:
    ctx.set_gpr(2, 2238u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15048));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848BDC:
    ctx.set_gpr(2, 2233u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9096));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848BE8:
    ctx.set_gpr(2, 2243u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15896));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848BF4:
    ctx.set_gpr(2, 2243u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15820));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848C00:
    ctx.set_gpr(2, 2243u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15688));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848C0C:
    ctx.set_gpr(2, 2243u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15468));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848C18:
    ctx.set_gpr(2, 2243u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848C24:
    ctx.set_gpr(2, 2244u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19888));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848C30:
    ctx.set_gpr(2, 2244u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848C3C:
    ctx.set_gpr(2, 2244u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8360));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848C48:
    ctx.set_gpr(2, 2244u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10244));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848C54:
    ctx.set_gpr(2, 2244u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10260));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848C60:
    ctx.set_gpr(2, 2244u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12720));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848C6C:
    ctx.set_gpr(2, 2244u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12844));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848C78:
    ctx.set_gpr(2, 2244u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12888));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848C84:
    ctx.set_gpr(2, 2244u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12920));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848C90:
    ctx.set_gpr(2, 2244u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14364));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848C9C:
    ctx.set_gpr(2, 2244u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14576));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848CA8:
    ctx.set_gpr(2, 2244u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14628));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848CB4:
    ctx.set_gpr(2, 2244u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14712));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848CC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08848CF0;
    }
    goto L_08848CD8;
L_08848CD8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08848CEC;
      }
      goto L_08848CE4;
    }
L_08848CE4:
    ctx.set_gpr(31, 0x08848CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08848CECu) goto L_08848CEC;
    return;
L_08848CEC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08848CF0;
L_08848CF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848D00:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848D08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08848D40;
      }
      goto L_08848D24;
    }
L_08848D24:
    ctx.set_gpr(31, 0x08848D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 481u, 0x08861D1Cu>(ctx, &aot_mem) && ctx.pc == 0x08848D2Cu) goto L_08848D2C;
    return;
L_08848D2C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08848D44;
    }
    goto L_08848D38;
L_08848D38:
    ctx.set_gpr(31, 0x08848D40u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08848D40u) goto L_08848D40;
    return;
L_08848D40:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08848D44;
L_08848D44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848D58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08848D70u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    goto L_08848F80;
L_08848D70:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(27976));
    ctx.set_gpr(31, 0x08848D7Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 456u, 0x088419DCu>(ctx, &aot_mem) && ctx.pc == 0x08848D7Cu) goto L_08848D7C;
    return;
L_08848D7C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28004));
    ctx.set_gpr(31, 0x08848D88u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_08848F30;
L_08848D88:
    ctx.set_gpr(31, 0x08848D90u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08848DA4;
L_08848D90:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848DA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(31, 0x08848DDCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 268u, 0x08860F00u>(ctx, &aot_mem) && ctx.pc == 0x08848DDCu) goto L_08848DDC;
    return;
L_08848DDC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-4816), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-4808), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-4804), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08848E1Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x08848E1Cu) goto L_08848E1C;
    return;
L_08848E1C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(27976));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08848E2Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_08848F0C;
L_08848E2C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-4784), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-4783), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-4782), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-4781), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-4780), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-4776), 0u);
    ctx.set_gpr(31, 0x08848E7Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_08848F30;
L_08848E7C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28004));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08848E8Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08848EB4;
L_08848E8C:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-4684), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-4683), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848EB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08848ED0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 862u, 0x088439F4u>(ctx, &aot_mem) && ctx.pc == 0x08848ED0u) goto L_08848ED0;
    return;
L_08848ED0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08848EDCu);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08848EDCu) goto L_08848EDC;
    return;
L_08848EDC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848F0C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848F30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08848F44u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08848F44u) goto L_08848F44;
    return;
L_08848F44:
    ctx.set_gpr(31, 0x08848F4Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08848F4Cu) goto L_08848F4C;
    return;
L_08848F4C:
    ctx.set_gpr(2, 16985u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 47186u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(2, 17402u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848F80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(48));
    goto L_08848F98;
L_08848F98:
    ctx.set_gpr(31, 0x08848FA0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08848FD8;
L_08848FA0:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(27768));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1680));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08848F98;
      }
      goto L_08848FB8;
    }
L_08848FB8:
    ctx.set_gpr(31, 0x08848FC0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 268u, 0x08860F00u>(ctx, &aot_mem) && ctx.pc == 0x08848FC0u) goto L_08848FC0;
    return;
L_08848FC0:
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
L_08848FD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    goto L_08848FF0;
L_08848FF0:
    ctx.set_gpr(31, 0x08848FF8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088490C4;
L_08848FF8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(560));
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(1680));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08848FF0;
      }
      goto L_0884900C;
    }
L_0884900C:
    ctx.set_gpr(31, 0x08849014u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0884902C;
L_08849014:
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
L_0884902C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08849044;
L_08849044:
    ctx.set_gpr(31, 0x0884904Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08849070;
L_0884904C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(560));
      if (branch_taken) {
          goto L_08849044;
      }
      goto L_0884905C;
    }
L_0884905C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849070:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0884908Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0884908Cu) goto L_0884908C;
    return;
L_0884908C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0884909Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(530));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0884909Cu) goto L_0884909C;
    return;
L_0884909C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(540));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088490ACu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088490ACu) goto L_088490AC;
    return;
L_088490AC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(552), 0u);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(556), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088490C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x088490D8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08849070;
L_088490D8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088490EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08849140;
      }
      goto L_08849108;
    }
L_08849108:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x08849114u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_088491A8;
L_08849114:
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28328));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0884912Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 174u, 0x08804B28u>(ctx, &aot_mem) && ctx.pc == 0x0884912Cu) goto L_0884912C;
    return;
L_0884912C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08849144;
    }
    goto L_08849138;
L_08849138:
    ctx.set_gpr(31, 0x08849140u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08849140u) goto L_08849140;
    return;
L_08849140:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08849144;
L_08849144:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849158:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08849190;
      }
      goto L_08849174;
    }
L_08849174:
    ctx.set_gpr(31, 0x0884917Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0884917Cu) goto L_0884917C;
    return;
L_0884917C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08849194;
    }
    goto L_08849188;
L_08849188:
    ctx.set_gpr(31, 0x08849190u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08849190u) goto L_08849190;
    return;
L_08849190:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08849194;
L_08849194:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088491A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_088491E0;
      }
      goto L_088491C4;
    }
L_088491C4:
    ctx.set_gpr(31, 0x088491CCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088491CCu) goto L_088491CC;
    return;
L_088491CC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_088491E4;
    }
    goto L_088491D8;
L_088491D8:
    ctx.set_gpr(31, 0x088491E0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088491E0u) goto L_088491E0;
    return;
L_088491E0:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_088491E4;
L_088491E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088491F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08849248;
      }
      goto L_08849214;
    }
L_08849214:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8292));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08849224u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 123u, 0x08840740u>(ctx, &aot_mem) && ctx.pc == 0x08849224u) goto L_08849224;
    return;
L_08849224:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08849234u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08848904;
L_08849234:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0884924C;
    }
    goto L_08849240;
L_08849240:
    ctx.set_gpr(31, 0x08849248u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08849260;
L_08849248:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0884924C;
L_0884924C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849260:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08849268:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x08849284u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_088492F8;
L_08849284:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8292));
    ctx.set_gpr(31, 0x08849290u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 166u, 0x088409A4u>(ctx, &aot_mem) && ctx.pc == 0x08849290u) goto L_08849290;
    return;
L_08849290:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8296));
    ctx.set_gpr(31, 0x0884929Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0884929Cu) goto L_0884929C;
    return;
L_0884929C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8360));
    ctx.set_gpr(31, 0x088492A8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x088492A8u) goto L_088492A8;
    return;
L_088492A8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8424));
    ctx.set_gpr(31, 0x088492B4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x088492B4u) goto L_088492B4;
    return;
L_088492B4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8488));
    ctx.set_gpr(31, 0x088492C0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x088492C0u) goto L_088492C0;
    return;
L_088492C0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8568));
    ctx.set_gpr(31, 0x088492CCu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 730u, 0x0883F334u>(ctx, &aot_mem) && ctx.pc == 0x088492CCu) goto L_088492CC;
    return;
L_088492CC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8576));
    ctx.set_gpr(31, 0x088492D8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 730u, 0x0883F334u>(ctx, &aot_mem) && ctx.pc == 0x088492D8u) goto L_088492D8;
    return;
L_088492D8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8584));
    ctx.set_gpr(31, 0x088492E4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 456u, 0x088419DCu>(ctx, &aot_mem) && ctx.pc == 0x088492E4u) goto L_088492E4;
    return;
L_088492E4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088492F8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849304:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 2181u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27560));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-28328));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0884933Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 179u, 0x08804B94u>(ctx, &aot_mem) && ctx.pc == 0x0884933Cu) goto L_0884933C;
    return;
L_0884933C:
    ctx.set_gpr(31, 0x08849344u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08849344u) goto L_08849344;
    return;
L_08849344:
    ctx.set_gpr(31, 0x0884934Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x0884934Cu) goto L_0884934C;
    return;
L_0884934C:
    ctx.set_gpr(31, 0x08849354u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08849354u) goto L_08849354;
    return;
L_08849354:
    ctx.set_gpr(31, 0x0884935Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0884935Cu) goto L_0884935C;
    return;
L_0884935C:
    ctx.set_gpr(31, 0x08849364u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(112));
    goto L_0884944C;
L_08849364:
    ctx.set_gpr(31, 0x0884936Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0884936Cu) goto L_0884936C;
    return;
L_0884936C:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08849374;
L_08849374:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08849384u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08849424;
L_08849384:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08849374;
      }
      goto L_08849394;
    }
L_08849394:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x088493A0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_088493FC;
L_088493A0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(0u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088493C0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x088493C0u) goto L_088493C0;
    return;
L_088493C0:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x088493CCu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    goto L_088493EC;
L_088493CC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(140), 0u);
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_088493EC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088493FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08849410u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08849410u) goto L_08849410;
    return;
L_08849410:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849424:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08849438u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08849438u) goto L_08849438;
    return;
L_08849438:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884944C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849458:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849464:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16752u << 16u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08849488u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_088494C4;
L_08849488:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0884949Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    goto L_088494B4;
L_0884949C:
    ctx.set_gpr(31, 0x088494A4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088494D4;
L_088494A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088494B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24));
    (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem); return;
L_088494C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem); return;
L_088494D4:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088494DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08849594;
      }
      goto L_0884950C;
    }
L_0884950C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884956C;
      }
      goto L_08849518;
    }
L_08849518:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08849528;
      }
      goto L_08849520;
    }
L_08849520:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08849634;
      }
      goto L_08849528;
    }
L_08849528:
    ctx.set_gpr(31, 0x08849530u);
    // nop
    goto L_08848C54;
L_08849530:
    ctx.set_gpr(31, 0x08849538u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1038u, 0x08AAFF54u>(ctx, &aot_mem) && ctx.pc == 0x08849538u) goto L_08849538;
    return;
L_08849538:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08849630;
      }
      goto L_08849540;
    }
L_08849540:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08849550u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_088496F4;
L_08849550:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08849564;
    }
    goto L_08849558;
L_08849558:
    ctx.set_gpr(31, 0x08849560u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088496AC;
L_08849560:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08849564;
L_08849564:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0884956C;
L_0884956C:
    ctx.set_gpr(31, 0x08849574u);
    // nop
    goto L_08848C54;
L_08849574:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08849584u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 27u, 0x08AB0148u>(ctx, &aot_mem) && ctx.pc == 0x08849584u) goto L_08849584;
    return;
L_08849584:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08849630;
      }
      goto L_08849594;
    }
L_08849594:
    ctx.set_gpr(31, 0x0884959Cu);
    // nop
    goto L_08848C54;
L_0884959C:
    ctx.set_gpr(31, 0x088495A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 61u, 0x08AB0304u>(ctx, &aot_mem) && ctx.pc == 0x088495A4u) goto L_088495A4;
    return;
L_088495A4:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08849630;
      }
      goto L_088495B4;
    }
L_088495B4:
    ctx.set_gpr(31, 0x088495BCu);
    // nop
    goto L_08848C54;
L_088495BC:
    ctx.set_gpr(31, 0x088495C4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 114u, 0x08AB0628u>(ctx, &aot_mem) && ctx.pc == 0x088495C4u) goto L_088495C4;
    return;
L_088495C4:
    ctx.set_gpr(31, 0x088495CCu);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x088495CCu) goto L_088495CC;
    return;
L_088495CC:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16184));
    ctx.set_gpr(31, 0x088495E4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 824u, 0x089575C4u>(ctx, &aot_mem) && ctx.pc == 0x088495E4u) goto L_088495E4;
    return;
L_088495E4:
    ctx.set_gpr(31, 0x088495ECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08849650;
L_088495EC:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08849600u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08849424;
L_08849600:
    ctx.set_gpr(31, 0x08849608u);
    // nop
    goto L_08848C54;
L_08849608:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08849614u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 97u, 0x08AB0554u>(ctx, &aot_mem) && ctx.pc == 0x08849614u) goto L_08849614;
    return;
L_08849614:
    ctx.set_gpr(31, 0x0884961Cu);
    // nop
    goto L_08848C54;
L_0884961C:
    ctx.set_gpr(31, 0x08849624u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x08849624u) goto L_08849624;
    return;
L_08849624:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08849634;
      }
      goto L_08849630;
    }
L_08849630:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08849634;
L_08849634:
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
L_08849650:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08849690;
    }
    goto L_08849668;
L_08849668:
    ctx.set_gpr(31, 0x08849670u);
    // nop
    goto L_088496A0;
L_08849670:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884967Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0884967Cu) goto L_0884967C;
    return;
L_0884967C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884968C;
      }
      goto L_08849684;
    }
L_08849684:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08849690;
      }
      goto L_0884968C;
    }
L_0884968C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08849690;
L_08849690:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088496A0:
    ctx.set_gpr(2, 2246u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25500)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088496AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_088496C4;
L_088496C4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088496D0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08849424;
L_088496D0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088496C4;
      }
      goto L_088496E0;
    }
L_088496E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088496F4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088496FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(23, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[10] + 0u);
    ctx.set_gpr(16, ctx.gpr[11] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08849750u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08849C28;
L_08849750:
    ctx.set_gpr(31, 0x08849758u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(112));
    goto L_08849C20;
L_08849758:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_0884976C;
    }
    goto L_08849760;
L_08849760:
    ctx.set_gpr(31, 0x08849768u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08849BF0;
L_08849768:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884976C;
L_0884976C:
    if (ctx.gpr[16] != ctx.gpr[2]) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
        goto L_08849780;
    }
    goto L_08849774;
L_08849774:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08849784;
      }
      goto L_0884977C;
    }
L_0884977C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    goto L_08849780;
L_08849780:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    goto L_08849784;
L_08849784:
    if (ctx.gpr[19] == 0u) {
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
        goto L_0884979C;
    }
    goto L_0884978C;
L_0884978C:
    ctx.set_gpr(31, 0x08849794u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(28));
    goto L_08849BE8;
L_08849794:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088497B4;
      }
      goto L_0884979C;
    }
L_0884979C:
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x088497A8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_08849BE0;
L_088497A8:
    ctx.set_gpr(31, 0x088497B0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28));
    goto L_08849BE8;
L_088497B0:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    goto L_088497B4;
L_088497B4:
    ctx.set_gpr(31, 0x088497BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 73u, 0x08844420u>(ctx, &aot_mem) && ctx.pc == 0x088497BCu) goto L_088497BC;
    return;
L_088497BC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_0884992C;
      }
      goto L_088497C8;
    }
L_088497C8:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    goto L_088497CC;
L_088497CC:
    ctx.set_gpr(31, 0x088497D4u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08849BD8;
L_088497D4:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088497E0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 157u, 0x08A48CC4u>(ctx, &aot_mem) && ctx.pc == 0x088497E0u) goto L_088497E0;
    return;
L_088497E0:
    ctx.set_gpr(31, 0x088497E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08849B7C;
L_088497E8:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088497F4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_08849B54;
L_088497F4:
    ctx.set_gpr(31, 0x088497FCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_08849B4C;
L_088497FC:
    ctx.set_gpr(31, 0x08849804u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08849B08;
L_08849804:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08849810u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 61u, 0x08844370u>(ctx, &aot_mem) && ctx.pc == 0x08849810u) goto L_08849810;
    return;
L_08849810:
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08849920;
    }
    goto L_08849818;
L_08849818:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08849824u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(112));
    goto L_088493FC;
L_08849824:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08849834u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_08849B4C;
L_08849834:
    ctx.set_gpr(31, 0x0884983Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08849B00;
L_0884983C:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x08849848u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_08849B4C;
L_08849848:
    ctx.set_gpr(31, 0x08849850u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08849AF8;
L_08849850:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x0884985Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_08849B4C;
L_0884985C:
    ctx.set_gpr(31, 0x08849864u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08849AF0;
L_08849864:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16353u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 57826u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_fpr_bits(15, ctx.fpr_bits(20));
    ctx.set_fpr_bits(16, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x0884988Cu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_08849A60;
L_0884988C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_0884990C;
      }
      goto L_08849894;
    }
L_08849894:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    goto L_08849898;
L_08849898:
    ctx.set_gpr(31, 0x088498A0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_08849BD8;
L_088498A0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088498ACu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 158u, 0x08A48CE8u>(ctx, &aot_mem) && ctx.pc == 0x088498ACu) goto L_088498AC;
    return;
L_088498AC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088498BCu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08849A1C;
L_088498BC:
    ctx.set_gpr(31, 0x088498C4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088499C0;
L_088498C4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088498FC;
      }
      goto L_088498D4;
    }
L_088498D4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088498D8;
L_088498D8:
    ctx.set_gpr(31, 0x088498E0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08849A1C;
L_088498E0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088498ECu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x088498ECu) goto L_088498EC;
    return;
L_088498EC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_088498D8;
    }
    goto L_088498FC;
L_088498FC:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
        goto L_08849898;
    }
    goto L_0884990C;
L_0884990C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08849918u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08849970;
L_08849918:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884993C;
      }
      goto L_08849920;
    }
L_08849920:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
        goto L_088497CC;
    }
    goto L_0884992C;
L_0884992C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08849938u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08849970;
L_08849938:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0884993C;
L_0884993C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849970:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_088499A8;
      }
      goto L_0884998C;
    }
L_0884998C:
    ctx.set_gpr(31, 0x08849994u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08849994u) goto L_08849994;
    return;
L_08849994:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_088499AC;
    }
    goto L_088499A0;
L_088499A0:
    ctx.set_gpr(31, 0x088499A8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088499A8u) goto L_088499A8;
    return;
L_088499A8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_088499AC;
L_088499AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088499C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08849A00;
    }
    goto L_088499D8;
L_088499D8:
    ctx.set_gpr(31, 0x088499E0u);
    // nop
    goto L_08849A10;
L_088499E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088499ECu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x088499ECu) goto L_088499EC;
    return;
L_088499EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088499FC;
      }
      goto L_088499F4;
    }
L_088499F4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08849A00;
      }
      goto L_088499FC;
    }
L_088499FC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08849A00;
L_08849A00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849A10:
    ctx.set_gpr(2, 2246u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24288)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849A1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08849A34u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08849A58;
L_08849A34:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08849A40u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08849A50;
L_08849A40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849A50:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem); return;
L_08849A58:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849A60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(13));
    ctx.set_fpr_bits(23, ctx.fpr_bits(14));
    ctx.set_fpr_bits(22, ctx.fpr_bits(15));
    ctx.set_gpr(31, 0x08849A94u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(16));
    goto L_08849ADC;
L_08849A94:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08849AA0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    goto L_08849ADC;
L_08849AA0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(0));
    ctx.set_fpr_bits(14, ctx.fpr_bits(23));
    ctx.set_fpr_bits(15, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x08849ABCu);
    ctx.set_fpr_bits(16, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 71u, 0x08A00E24u>(ctx, &aot_mem) && ctx.pc == 0x08849ABCu) goto L_08849ABC;
    return;
L_08849ABC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849ADC:
    ctx.set_gpr(2, 15502u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 64053u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849AF0:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849AF8:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849B00:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849B08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08849B20u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 61u, 0x08844370u>(ctx, &aot_mem) && ctx.pc == 0x08849B20u) goto L_08849B20;
    return;
L_08849B20:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2225u << 16u);
        goto L_08849B38;
    }
    goto L_08849B28;
L_08849B28:
    ctx.set_gpr(31, 0x08849B30u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 61u, 0x08844370u>(ctx, &aot_mem) && ctx.pc == 0x08849B30u) goto L_08849B30;
    return;
L_08849B30:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08849B40;
      }
      goto L_08849B38;
    }
L_08849B38:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8240));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08849B40;
L_08849B40:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849B4C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849B54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08849B68u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08849B68u) goto L_08849B68;
    return;
L_08849B68:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849B7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08849BBC;
    }
    goto L_08849B94;
L_08849B94:
    ctx.set_gpr(31, 0x08849B9Cu);
    // nop
    goto L_08849BCC;
L_08849B9C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08849BA8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08849BA8u) goto L_08849BA8;
    return;
L_08849BA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08849BB8;
      }
      goto L_08849BB0;
    }
L_08849BB0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08849BBC;
      }
      goto L_08849BB8;
    }
L_08849BB8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08849BBC;
L_08849BBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849BCC:
    ctx.set_gpr(2, 2246u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23420)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849BD8:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem); return;
L_08849BE0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849BE8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849BF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x08849C0Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_088493FC;
L_08849C0C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849C20:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849C28:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849C34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08849CEC;
      }
      goto L_08849C5C;
    }
L_08849C5C:
    ctx.set_gpr(31, 0x08849C64u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08849C64u) goto L_08849C64;
    return;
L_08849C64:
    ctx.set_gpr(31, 0x08849C6Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08849C6Cu) goto L_08849C6C;
    return;
L_08849C6C:
    ctx.set_gpr(31, 0x08849C74u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(112));
    goto L_08849D2C;
L_08849C74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[17] - ctx.gpr[6]);
    ctx.set_gpr(31, 0x08849C98u);
    ctx.set_gpr(7, ctx.gpr[2] - ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 177u, 0x08A48E6Cu>(ctx, &aot_mem) && ctx.pc == 0x08849C98u) goto L_08849C98;
    return;
L_08849C98:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08849CACu);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 44u, 0x08A00774u>(ctx, &aot_mem) && ctx.pc == 0x08849CACu) goto L_08849CAC;
    return;
L_08849CAC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08849CB8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08849CB8u) goto L_08849CB8;
    return;
L_08849CB8:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08849CCCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 23u, 0x08A00434u>(ctx, &aot_mem) && ctx.pc == 0x08849CCCu) goto L_08849CCC;
    return;
L_08849CCC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08849CD8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08849CD8u) goto L_08849CD8;
    return;
L_08849CD8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08849CE4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 123u, 0x08A0189Cu>(ctx, &aot_mem) && ctx.pc == 0x08849CE4u) goto L_08849CE4;
    return;
L_08849CE4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08849D10;
      }
      goto L_08849CEC;
    }
L_08849CEC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(48));
        goto L_08849D14;
    }
    goto L_08849CF8;
L_08849CF8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08849D0Cu);
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 82u, 0x08A00F60u>(ctx, &aot_mem) && ctx.pc == 0x08849D0Cu) goto L_08849D0C;
    return;
L_08849D0C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(0u));
    goto L_08849D10;
L_08849D10:
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(48));
    goto L_08849D14;
L_08849D14:
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
L_08849D2C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849D34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08849D54u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08849D54u) goto L_08849D54;
    return;
L_08849D54:
    ctx.set_gpr(31, 0x08849D5Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08849D5Cu) goto L_08849D5C;
    return;
L_08849D5C:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08849D68u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08849D68u) goto L_08849D68;
    return;
L_08849D68:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08849D7Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08849D7Cu) goto L_08849D7C;
    return;
L_08849D7C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08849D8Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08849D8Cu) goto L_08849D8C;
    return;
L_08849D8C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08849D98u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 537u, 0x0884743Cu>(ctx, &aot_mem) && ctx.pc == 0x08849D98u) goto L_08849D98;
    return;
L_08849D98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849DAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08849DCCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08849DCCu) goto L_08849DCC;
    return;
L_08849DCC:
    ctx.set_gpr(31, 0x08849DD4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08849DD4u) goto L_08849DD4;
    return;
L_08849DD4:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08849DE0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08849DE0u) goto L_08849DE0;
    return;
L_08849DE0:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08849DF8u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(13));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08849DF8u) goto L_08849DF8;
    return;
L_08849DF8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08849E08u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08849E08u) goto L_08849E08;
    return;
L_08849E08:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08849E14u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 537u, 0x0884743Cu>(ctx, &aot_mem) && ctx.pc == 0x08849E14u) goto L_08849E14;
    return;
L_08849E14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849E28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08849E48u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08849E48u) goto L_08849E48;
    return;
L_08849E48:
    ctx.set_gpr(31, 0x08849E50u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08849E50u) goto L_08849E50;
    return;
L_08849E50:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08849E5Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08849E5Cu) goto L_08849E5C;
    return;
L_08849E5C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08849E74u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08849E74u) goto L_08849E74;
    return;
L_08849E74:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08849E84u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08849E84u) goto L_08849E84;
    return;
L_08849E84:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08849E90u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 537u, 0x0884743Cu>(ctx, &aot_mem) && ctx.pc == 0x08849E90u) goto L_08849E90;
    return;
L_08849E90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849EA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08849EC4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08849EC4u) goto L_08849EC4;
    return;
L_08849EC4:
    ctx.set_gpr(31, 0x08849ECCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08849ECCu) goto L_08849ECC;
    return;
L_08849ECC:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08849ED8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08849ED8u) goto L_08849ED8;
    return;
L_08849ED8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08849EF0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08849EF0u) goto L_08849EF0;
    return;
L_08849EF0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08849F00u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08849F00u) goto L_08849F00;
    return;
L_08849F00:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08849F0Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 537u, 0x0884743Cu>(ctx, &aot_mem) && ctx.pc == 0x08849F0Cu) goto L_08849F0C;
    return;
L_08849F0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849F20:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24));
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 537u, 0x0884743Cu>(ctx, &aot_mem); return;
L_08849F28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08849F54u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    goto L_0884A7D8;
L_08849F54:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08849F68;
    }
    goto L_08849F60;
L_08849F60:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08849FA0;
      }
      goto L_08849F68;
    }
L_08849F68:
    ctx.set_gpr(31, 0x08849F70u);
    // nop
    goto L_0884AB5C;
L_08849F70:
    ctx.set_gpr(31, 0x08849F78u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(128));
    goto L_08849FBC;
L_08849F78:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08849FA0;
    }
    goto L_08849F80;
L_08849F80:
    ctx.set_gpr(31, 0x08849F88u);
    // nop
    goto L_08848C00;
L_08849F88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08849F9Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08849C34;
L_08849F9C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08849FA0;
L_08849FA0:
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
L_08849FBC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849FC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08849FFCu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(48));
    goto L_0884A0EC;
L_08849FFC:
    ctx.set_gpr(31, 0x0884A004u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08848C00;
L_0884A004:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0884A014u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    goto L_0884A0DC;
L_0884A014:
    ctx.set_gpr(31, 0x0884A01Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0884A01Cu) goto L_0884A01C;
    return;
L_0884A01C:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16353u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 57826u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[16] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0884A044u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_08849A60;
L_0884A044:
    ctx.set_gpr(31, 0x0884A04Cu);
    // nop
    goto L_08848C0C;
L_0884A04C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0884A05Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 870u, 0x08843A60u>(ctx, &aot_mem) && ctx.pc == 0x0884A05Cu) goto L_0884A05C;
    return;
L_0884A05C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0884A068u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 521u, 0x08851B24u>(ctx, &aot_mem) && ctx.pc == 0x0884A068u) goto L_0884A068;
    return;
L_0884A068:
    if (ctx.gpr[16] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
        goto L_0884A080;
    }
    goto L_0884A070;
L_0884A070:
    ctx.set_gpr(31, 0x0884A078u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0884A154;
L_0884A078:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0884A0BC;
      }
      goto L_0884A080;
    }
L_0884A080:
    ctx.set_gpr(31, 0x0884A088u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0884A414;
L_0884A088:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(31, 0x0884A094u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0884A47C;
L_0884A094:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(31, 0x0884A0A0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0884A4E4;
L_0884A0A0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0884A0ACu);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(228));
    goto L_0884A54C;
L_0884A0AC:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(31, 0x0884A0B8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0884A770;
L_0884A0B8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0884A0BC;
L_0884A0BC:
    ctx.set_gpr(31, 0x0884A0C4u);
    // nop
    goto L_0884AB5C;
L_0884A0C4:
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
L_0884A0DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24));
    (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem); return;
L_0884A0EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0884A0FCu);
    // nop
    goto L_0884A118;
L_0884A0FC:
    ctx.set_gpr(31, 0x0884A104u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    goto L_0884A110;
L_0884A104:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A110:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::sqrt(ctx.fpr[12]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A118:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[4] = ctx.fpr[2] - ctx.fpr[0];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[3] = ctx.fpr[3] - ctx.fpr[2];
    ctx.fpr[2] = ctx.fpr[1] - ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A154:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0884A16Cu);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_0884A414;
L_0884A16C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x0884A178u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0884A47C;
L_0884A178:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x0884A184u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0884A4E4;
L_0884A184:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884A194u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27776));
    goto L_0884A54C;
L_0884A194:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x0884A1A0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0884A770;
L_0884A1A0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(248), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A1B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0884A1CCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    goto L_08849FBC;
L_0884A1CC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
        goto L_0884A1DC;
    }
    goto L_0884A1D4;
L_0884A1D4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A240;
      }
      goto L_0884A1DC;
    }
L_0884A1DC:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(899));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x0884A1F4u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 813u, 0x0884EC54u>(ctx, &aot_mem) && ctx.pc == 0x0884A1F4u) goto L_0884A1F4;
    return;
L_0884A1F4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x0884A200u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_0884A2D4;
L_0884A200:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0884A20Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884A284;
L_0884A20C:
    ctx.set_gpr(31, 0x0884A214u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    goto L_08849FBC;
L_0884A214:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_0884A240;
    }
    goto L_0884A21C;
L_0884A21C:
    ctx.set_gpr(31, 0x0884A224u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    goto L_0884A27C;
L_0884A224:
    ctx.set_gpr(31, 0x0884A22Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884A250;
L_0884A22C:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884A23Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27776));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 748u, 0x089FFCD4u>(ctx, &aot_mem) && ctx.pc == 0x0884A23Cu) goto L_0884A23C;
    return;
L_0884A23C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0884A240;
L_0884A240:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A250:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0884A268u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 363u, 0x08841404u>(ctx, &aot_mem) && ctx.pc == 0x0884A268u) goto L_0884A268;
    return;
L_0884A268:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A27C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A284:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884A2BC;
      }
      goto L_0884A2A0;
    }
L_0884A2A0:
    ctx.set_gpr(31, 0x0884A2A8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0884A2A8u) goto L_0884A2A8;
    return;
L_0884A2A8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0884A2C0;
    }
    goto L_0884A2B4;
L_0884A2B4:
    ctx.set_gpr(31, 0x0884A2BCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884A2BCu) goto L_0884A2BC;
    return;
L_0884A2BC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0884A2C0;
L_0884A2C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A2D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0884A2ECu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0884A2ECu) goto L_0884A2EC;
    return;
L_0884A2EC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A300:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0884A318u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    goto L_08849FBC;
L_0884A318:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0884A338;
    }
    goto L_0884A320;
L_0884A320:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x0884A32Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884A344;
L_0884A32C:
    ctx.set_gpr(31, 0x0884A334u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 45u, 0x08850228u>(ctx, &aot_mem) && ctx.pc == 0x0884A334u) goto L_0884A334;
    return;
L_0884A334:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0884A338;
L_0884A338:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A344:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884A358u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0884A358u) goto L_0884A358;
    return;
L_0884A358:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A36C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0884A384u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    goto L_08849FBC;
L_0884A384:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0884A3B4;
    }
    goto L_0884A38C;
L_0884A38C:
    ctx.set_gpr(31, 0x0884A394u);
    // nop
    goto L_08848C0C;
L_0884A394:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x0884A3A0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08849FBC;
L_0884A3A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884A3B0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 462u, 0x0885186Cu>(ctx, &aot_mem) && ctx.pc == 0x0884A3B0u) goto L_0884A3B0;
    return;
L_0884A3B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0884A3B4;
L_0884A3B4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A3C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0884A3D8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    goto L_08849FBC;
L_0884A3D8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0884A408;
    }
    goto L_0884A3E0;
L_0884A3E0:
    ctx.set_gpr(31, 0x0884A3E8u);
    // nop
    goto L_08848C0C;
L_0884A3E8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x0884A3F4u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08849FBC;
L_0884A3F4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884A404u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x0884A404u) goto L_0884A404;
    return;
L_0884A404:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0884A408;
L_0884A408:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A414:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0884A44C;
      }
      goto L_0884A430;
    }
L_0884A430:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
        goto L_0884A450;
    }
    goto L_0884A43C;
L_0884A43C:
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0884A448u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    goto L_0884AE28;
L_0884A448:
    ctx.set_fpr_bits(13, ctx.fpr_bits(0));
    goto L_0884A44C;
L_0884A44C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    goto L_0884A450;
L_0884A450:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[13])) && ctx.fpr[0] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0884A468;
    }
    goto L_0884A460;
L_0884A460:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0884A46C;
      }
      goto L_0884A468;
    }
L_0884A468:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0884A46C;
L_0884A46C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A47C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0884A4B4;
      }
      goto L_0884A498;
    }
L_0884A498:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
        goto L_0884A4B8;
    }
    goto L_0884A4A4;
L_0884A4A4:
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x0884A4B0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    goto L_0884AE28;
L_0884A4B0:
    ctx.set_fpr_bits(13, ctx.fpr_bits(0));
    goto L_0884A4B4;
L_0884A4B4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
    goto L_0884A4B8;
L_0884A4B8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[13])) && ctx.fpr[0] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0884A4D0;
    }
    goto L_0884A4C8;
L_0884A4C8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0884A4D4;
      }
      goto L_0884A4D0;
    }
L_0884A4D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0884A4D4;
L_0884A4D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A4E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0884A51C;
      }
      goto L_0884A500;
    }
L_0884A500:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
        goto L_0884A520;
    }
    goto L_0884A50C;
L_0884A50C:
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x0884A518u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    goto L_0884AE28;
L_0884A518:
    ctx.set_fpr_bits(13, ctx.fpr_bits(0));
    goto L_0884A51C;
L_0884A51C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    goto L_0884A520;
L_0884A520:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[13])) && ctx.fpr[0] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0884A538;
    }
    goto L_0884A530;
L_0884A530:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0884A53C;
      }
      goto L_0884A538;
    }
L_0884A538:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0884A53C;
L_0884A53C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A54C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0884A578u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0884A728;
L_0884A578:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_0884A598;
      }
      goto L_0884A588;
    }
L_0884A588:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
        goto L_0884A59C;
    }
    goto L_0884A594;
L_0884A594:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_0884A598;
L_0884A598:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_0884A59C;
L_0884A59C:
    ctx.set_gpr(31, 0x0884A5A4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 537u, 0x0884743Cu>(ctx, &aot_mem) && ctx.pc == 0x0884A5A4u) goto L_0884A5A4;
    return;
L_0884A5A4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_fpr_bits(20, ctx.fpr_bits(21));
      if (branch_taken) {
          goto L_0884A5C0;
      }
      goto L_0884A5AC;
    }
L_0884A5AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x0884A5BCu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    goto L_0884AE74;
L_0884A5BC:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    goto L_0884A5C0;
L_0884A5C0:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[21])) && ctx.fpr[0] == ctx.fpr[21]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(228));
        goto L_0884A608;
    }
    goto L_0884A5D4;
L_0884A5D4:
    ctx.set_gpr(31, 0x0884A5DCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_0884A6E0;
L_0884A5DC:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x0884A5E8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_0884A6B8;
L_0884A5E8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A604;
      }
      goto L_0884A5F0;
    }
L_0884A5F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x0884A600u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_0884AE5C;
L_0884A600:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0884A604;
L_0884A604:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(228));
    goto L_0884A608;
L_0884A608:
    ctx.set_gpr(31, 0x0884A610u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_0884A64C;
L_0884A610:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(228));
        goto L_0884A620;
    }
    goto L_0884A618;
L_0884A618:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0884A62C;
      }
      goto L_0884A620;
    }
L_0884A620:
    ctx.set_gpr(31, 0x0884A628u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 511u, 0x0884728Cu>(ctx, &aot_mem) && ctx.pc == 0x0884A628u) goto L_0884A628;
    return;
L_0884A628:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0884A62C;
L_0884A62C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A64C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A668;
      }
      goto L_0884A664;
    }
L_0884A664:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0884A668;
L_0884A668:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A68C;
      }
      goto L_0884A670;
    }
L_0884A670:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A68C;
      }
      goto L_0884A688;
    }
L_0884A688:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0884A68C;
L_0884A68C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A6B0;
      }
      goto L_0884A694;
    }
L_0884A694:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A6B0;
      }
      goto L_0884A6AC;
    }
L_0884A6AC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0884A6B0;
L_0884A6B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A6B8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A6E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0884A6F8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0884A728;
L_0884A6F8:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[20];
    ctx.set_gpr(31, 0x0884A710u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0884A6B8;
L_0884A710:
    ctx.set_fpr_bits(0, ctx.fpr_bits(20));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A728:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0884A738u);
    // nop
    goto L_0884A74C;
L_0884A738:
    ctx.set_gpr(31, 0x0884A740u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    goto L_0884A110;
L_0884A740:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A74C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A770:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0884A7A8;
      }
      goto L_0884A78C;
    }
L_0884A78C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
        goto L_0884A7AC;
    }
    goto L_0884A798;
L_0884A798:
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x0884A7A4u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(52)));
    goto L_0884AE28;
L_0884A7A4:
    ctx.set_fpr_bits(13, ctx.fpr_bits(0));
    goto L_0884A7A8;
L_0884A7A8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    goto L_0884A7AC;
L_0884A7AC:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[13])) && ctx.fpr[0] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0884A7C4;
    }
    goto L_0884A7BC;
L_0884A7BC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0884A7C8;
      }
      goto L_0884A7C4;
    }
L_0884A7C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0884A7C8;
L_0884A7C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A7D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0884A808u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08848BF4;
L_0884A808:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0884A818u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_0884B53C;
L_0884A818:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x0884A824u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0884B5B4;
L_0884A824:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_fpr_bits(23, ctx.fpr_bits(0));
      if (branch_taken) {
          goto L_0884A88C;
      }
      goto L_0884A830;
    }
L_0884A830:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[1])) && ctx.fpr[20] == ctx.fpr[1]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
        goto L_0884A858;
    }
    goto L_0884A844;
L_0884A844:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) && ctx.fpr[0] == ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_0884A890;
    }
    goto L_0884A854;
L_0884A854:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    goto L_0884A858;
L_0884A858:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[23]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(31, 0x0884A878u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x0884A878u) goto L_0884A878;
    return;
L_0884A878:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0884A884u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_0884AD88;
L_0884A884:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0884AB34;
      }
      goto L_0884A88C;
    }
L_0884A88C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0884A890;
L_0884A890:
    ctx.set_gpr(31, 0x0884A898u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    goto L_0884B60C;
L_0884A898:
    if (ctx.gpr[2] == 0u) {
    ctx.set_fpr_bits(2, ctx.fpr_bits(23) ^ 0x80000000u);
        goto L_0884A928;
    }
    goto L_0884A8A0;
L_0884A8A0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0884A8B0u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    goto L_0884B60C;
L_0884A8B0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_0884A8C4;
    }
    goto L_0884A8B8;
L_0884A8B8:
    ctx.set_gpr(2, 49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884A8DC;
      }
      goto L_0884A8C4;
    }
L_0884A8C4:
    ctx.set_gpr(31, 0x0884A8CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    goto L_0884B60C;
L_0884A8CC:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_0884A8E0;
    }
    goto L_0884A8D4;
L_0884A8D4:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_0884A8DC;
L_0884A8DC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_0884A8E0;
L_0884A8E0:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[12])) && ctx.fpr[22] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884A924;
      }
      goto L_0884A8F0;
    }
L_0884A8F0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(31, 0x0884A910u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x0884A910u) goto L_0884A910;
    return;
L_0884A910:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0884A91Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_0884AD88;
L_0884A91C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0884AB34;
      }
      goto L_0884A924;
    }
L_0884A924:
    ctx.set_fpr_bits(2, ctx.fpr_bits(23) ^ 0x80000000u);
    goto L_0884A928;
L_0884A928:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) && ctx.fpr[2] == ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(0u);
        goto L_0884A96C;
    }
    goto L_0884A93C;
L_0884A93C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(200)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(31, 0x0884A958u);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    goto L_0884A414;
L_0884A958:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A968;
      }
      goto L_0884A964;
    }
L_0884A964:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_0884A968;
L_0884A968:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_0884A96C;
L_0884A96C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) && ctx.fpr[20] == ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_0884A9AC;
    }
    goto L_0884A97C;
L_0884A97C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(200)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(31, 0x0884A998u);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    goto L_0884A47C;
L_0884A998:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A9A8;
      }
      goto L_0884A9A4;
    }
L_0884A9A4:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_0884A9A8;
L_0884A9A8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0884A9AC;
L_0884A9AC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0884A9B8u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    goto L_0884B60C;
L_0884A9B8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_0884A9CC;
    }
    goto L_0884A9C0;
L_0884A9C0:
    ctx.set_gpr(2, 49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884A9E4;
      }
      goto L_0884A9CC;
    }
L_0884A9CC:
    ctx.set_gpr(31, 0x0884A9D4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    goto L_0884B60C;
L_0884A9D4:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(0u);
        goto L_0884A9E8;
    }
    goto L_0884A9DC;
L_0884A9DC:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_0884A9E4;
L_0884A9E4:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_0884A9E8;
L_0884A9E8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) && ctx.fpr[20] == ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_0884AA28;
    }
    goto L_0884A9F8;
L_0884A9F8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(31, 0x0884AA14u);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    goto L_0884A4E4;
L_0884AA14:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884AA24;
      }
      goto L_0884AA20;
    }
L_0884AA20:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_0884AA24;
L_0884AA24:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0884AA28;
L_0884AA28:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0884AA34u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    goto L_0884B60C;
L_0884AA34:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_0884AA48;
    }
    goto L_0884AA3C;
L_0884AA3C:
    ctx.set_gpr(2, 49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884AA60;
      }
      goto L_0884AA48;
    }
L_0884AA48:
    ctx.set_gpr(31, 0x0884AA50u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    goto L_0884B60C;
L_0884AA50:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(0u);
        goto L_0884AA64;
    }
    goto L_0884AA58;
L_0884AA58:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_0884AA60;
L_0884AA60:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_0884AA64;
L_0884AA64:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) && ctx.fpr[20] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884AAA0;
      }
      goto L_0884AA74;
    }
L_0884AA74:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(200)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(31, 0x0884AA90u);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    goto L_0884A770;
L_0884AA90:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884AAA0;
      }
      goto L_0884AA9C;
    }
L_0884AA9C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_0884AAA0;
L_0884AAA0:
    ctx.set_gpr(31, 0x0884AAA8u);
    // nop
    goto L_08848BF4;
L_0884AAA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884AAB4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0884B680;
L_0884AAB4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(248))))));
        goto L_0884AACC;
    }
    goto L_0884AABC;
L_0884AABC:
    ctx.set_gpr(31, 0x0884AAC4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0884A154;
L_0884AAC4:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(248))))));
    goto L_0884AACC;
L_0884AACC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_0884AB34;
    }
    goto L_0884AAD4;
L_0884AAD4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(31, 0x0884AAF8u);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    goto L_0884A47C;
L_0884AAF8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(248))))));
        goto L_0884AB1C;
    }
    goto L_0884AB04;
L_0884AB04:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884AB30;
      }
      goto L_0884AB0C;
    }
L_0884AB0C:
    ctx.set_gpr(31, 0x0884AB14u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0884AB5C;
L_0884AB14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884AB30;
      }
      goto L_0884AB1C;
    }
L_0884AB1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(248), static_cast<std::uint8_t>(ctx.gpr[2]));
        goto L_0884AB30;
    }
    goto L_0884AB28;
L_0884AB28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(248), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0884AB30;
L_0884AB30:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0884AB34;
L_0884AB34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884AB5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-480));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(31, 0x0884AB78u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0884AB78u) goto L_0884AB78;
    return;
L_0884AB78:
    ctx.set_gpr(31, 0x0884AB80u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(352));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0884AB80u) goto L_0884AB80;
    return;
L_0884AB80:
    ctx.set_gpr(31, 0x0884AB88u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0884AB88u) goto L_0884AB88;
    return;
L_0884AB88:
    ctx.set_gpr(31, 0x0884AB90u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0884AB90u) goto L_0884AB90;
    return;
L_0884AB90:
    ctx.set_gpr(31, 0x0884AB98u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0884AB98u) goto L_0884AB98;
    return;
L_0884AB98:
    ctx.set_gpr(31, 0x0884ABA0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0884ABA0u) goto L_0884ABA0;
    return;
L_0884ABA0:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(31, 0x0884ABB4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27740));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 21u, 0x08A003B4u>(ctx, &aot_mem) && ctx.pc == 0x0884ABB4u) goto L_0884ABB4;
    return;
L_0884ABB4:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.set_gpr(31, 0x0884ABC8u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27752));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 21u, 0x08A003B4u>(ctx, &aot_mem) && ctx.pc == 0x0884ABC8u) goto L_0884ABC8;
    return;
L_0884ABC8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0884ABD4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 872u, 0x08843A88u>(ctx, &aot_mem) && ctx.pc == 0x0884ABD4u) goto L_0884ABD4;
    return;
L_0884ABD4:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0884ABE8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27776));
    goto L_0884AD78;
L_0884ABE8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(31, 0x0884ABF4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    goto L_0884AD6C;
L_0884ABF4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(31, 0x0884AC00u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(352));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 737u, 0x089FFB18u>(ctx, &aot_mem) && ctx.pc == 0x0884AC00u) goto L_0884AC00;
    return;
L_0884AC00:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x0884AC14u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27728));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 21u, 0x08A003B4u>(ctx, &aot_mem) && ctx.pc == 0x0884AC14u) goto L_0884AC14;
    return;
L_0884AC14:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(31, 0x0884AC34u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x0884AC34u) goto L_0884AC34;
    return;
L_0884AC34:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x0884AC44u);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x0884AC44u) goto L_0884AC44;
    return;
L_0884AC44:
    ctx.set_gpr(31, 0x0884AC4Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x0884AC4Cu) goto L_0884AC4C;
    return;
L_0884AC4C:
    ctx.set_gpr(31, 0x0884AC54u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0884AC54u) goto L_0884AC54;
    return;
L_0884AC54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0884AC64u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 511u, 0x0884728Cu>(ctx, &aot_mem) && ctx.pc == 0x0884AC64u) goto L_0884AC64;
    return;
L_0884AC64:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0884AC70u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(228));
    goto L_0884AD38;
L_0884AC70:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0884AC7Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 748u, 0x089FFCD4u>(ctx, &aot_mem) && ctx.pc == 0x0884AC7Cu) goto L_0884AC7C;
    return;
L_0884AC7C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x0884AC8Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x0884AC8Cu) goto L_0884AC8C;
    return;
L_0884AC8C:
    ctx.set_gpr(31, 0x0884AC94u);
    // nop
    goto L_08848C00;
L_0884AC94:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(31, 0x0884ACA8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088494C4;
L_0884ACA8:
    ctx.set_gpr(31, 0x0884ACB0u);
    // nop
    goto L_08848C00;
L_0884ACB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884ACBCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    goto L_0884A0DC;
L_0884ACBC:
    ctx.set_gpr(31, 0x0884ACC4u);
    // nop
    goto L_08848C00;
L_0884ACC4:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(156)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(31, 0x0884ACD8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884AD28;
L_0884ACD8:
    ctx.set_gpr(31, 0x0884ACE0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(128));
    goto L_08849FBC;
L_0884ACE0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0884AD18;
    }
    goto L_0884ACE8;
L_0884ACE8:
    ctx.set_gpr(31, 0x0884ACF0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(128));
    goto L_0884A27C;
L_0884ACF0:
    ctx.set_gpr(31, 0x0884ACF8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884A250;
L_0884ACF8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x0884AD08u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 872u, 0x08843A88u>(ctx, &aot_mem) && ctx.pc == 0x0884AD08u) goto L_0884AD08;
    return;
L_0884AD08:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884AD14u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0884AD14u) goto L_0884AD14;
    return;
L_0884AD14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0884AD18;
L_0884AD18:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884AD28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(36));
    (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem); return;
L_0884AD38:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884AD6C:
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem); return;
L_0884AD78:
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem); return;
L_0884AD88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884ADACu);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 383u, 0x08A03E84u>(ctx, &aot_mem) && ctx.pc == 0x0884ADACu) goto L_0884ADAC;
    return;
L_0884ADAC:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884ADB8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_0884ADE4;
L_0884ADB8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0884ADC4u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(228));
    goto L_0884AD38;
L_0884ADC4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0884ADD0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_0884A54C;
L_0884ADD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884ADE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884ADF8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0884AE0C;
L_0884ADF8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884AE0C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884AE28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0884AE40u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(14));
    goto L_0884AE74;
L_0884AE40:
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x0884AE4Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    goto L_0884AE5C;
L_0884AE4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884AE5C:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) || ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_fpr_bits(12, ctx.fpr_bits(13));
        goto L_0884AE6C;
    }
    goto L_0884AE6C;
L_0884AE6C:
    jump_target = ctx.gpr[31];
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884AE74:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_fpr_bits(12, ctx.fpr_bits(13));
        goto L_0884AE84;
    }
    goto L_0884AE84;
L_0884AE84:
    jump_target = ctx.gpr[31];
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884AE8C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(2, 15692u << 16u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    goto L_0884AEDC;
L_0884AEDC:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(94), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(98), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(100), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < 12 ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0884AEDC;
      }
      goto L_0884AF20;
    }
L_0884AF20:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884AF28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_0884AF58;
    }
    goto L_0884AF40;
L_0884AF40:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884AF54;
      }
      goto L_0884AF4C;
    }
L_0884AF4C:
    ctx.set_gpr(31, 0x0884AF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884AF54u) goto L_0884AF54;
    return;
L_0884AF54:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0884AF58;
L_0884AF58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884AF68:
    ctx.set_gpr(3, 16140u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[0])) || ctx.fpr[12] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0884B01C;
    }
    goto L_0884AF84;
L_0884AF84:
    ctx.set_gpr(3, 48908u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(3, 15897u << 16u);
        goto L_0884AFAC;
    }
    goto L_0884AFA0;
L_0884AFA0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B01C;
      }
      goto L_0884AFAC;
    }
L_0884AFAC:
    ctx.set_gpr(3, ctx.gpr[3] | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[0])) || ctx.fpr[12] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_0884AFE4;
    }
    goto L_0884AFC4;
L_0884AFC4:
    ctx.set_gpr(3, 48665u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
        goto L_0884B01C;
    }
    goto L_0884AFE0;
L_0884AFE0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_0884AFE4;
L_0884AFE4:
    ctx.set_gpr(3, 16000u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[12];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0884B01C;
    }
    goto L_0884B000;
L_0884B000:
    ctx.set_gpr(3, 48768u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
        goto L_0884B01C;
    }
    goto L_0884B018;
L_0884B018:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884B01C;
L_0884B01C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B028:
    ctx.set_gpr(3, 16140u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[0])) || ctx.fpr[12] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0884B0DC;
    }
    goto L_0884B044;
L_0884B044:
    ctx.set_gpr(3, 48908u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(3, 15897u << 16u);
        goto L_0884B06C;
    }
    goto L_0884B060;
L_0884B060:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B0DC;
      }
      goto L_0884B06C;
    }
L_0884B06C:
    ctx.set_gpr(3, ctx.gpr[3] | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[0])) || ctx.fpr[12] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
        goto L_0884B0A4;
    }
    goto L_0884B084;
L_0884B084:
    ctx.set_gpr(3, 48665u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
        goto L_0884B0DC;
    }
    goto L_0884B0A0;
L_0884B0A0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_0884B0A4;
L_0884B0A4:
    ctx.set_gpr(3, 16000u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[12];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0884B0DC;
    }
    goto L_0884B0C0;
L_0884B0C0:
    ctx.set_gpr(3, 48768u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
        goto L_0884B0DC;
    }
    goto L_0884B0D8;
L_0884B0D8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884B0DC;
L_0884B0DC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B0E8:
    ctx.set_gpr(1, ctx.gpr[5] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B1CC;
      }
      goto L_0884B0F4;
    }
L_0884B0F4:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8244));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B110:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B1CC;
      }
      goto L_0884B120;
    }
L_0884B120:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, ctx.gpr[3] | 1u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B1CC;
      }
      goto L_0884B130;
    }
L_0884B130:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, ctx.gpr[3] | 4u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B1CC;
      }
      goto L_0884B140;
    }
L_0884B140:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, ctx.gpr[3] | 8u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B1CC;
      }
      goto L_0884B150;
    }
L_0884B150:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, ctx.gpr[3] | 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B1CC;
      }
      goto L_0884B160;
    }
L_0884B160:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, ctx.gpr[3] | 32u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B1CC;
      }
      goto L_0884B170;
    }
L_0884B170:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B1CC;
      }
      goto L_0884B180;
    }
L_0884B180:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, ctx.gpr[3] | 2048u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B1CC;
      }
      goto L_0884B190;
    }
L_0884B190:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, ctx.gpr[3] | 64u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B1CC;
      }
      goto L_0884B1A0;
    }
L_0884B1A0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, ctx.gpr[3] | 128u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B1CC;
      }
      goto L_0884B1B0;
    }
L_0884B1B0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, ctx.gpr[3] | 256u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B1CC;
      }
      goto L_0884B1C0;
    }
L_0884B1C0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
    goto L_0884B1CC;
L_0884B1CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B1D4:
    ctx.set_gpr(1, ctx.gpr[5] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B2E8;
      }
      goto L_0884B1E0;
    }
L_0884B1E0:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8308));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B1FC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B2E8;
      }
      goto L_0884B210;
    }
L_0884B210:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B2E8;
      }
      goto L_0884B224;
    }
L_0884B224:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-5));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B2E8;
      }
      goto L_0884B238;
    }
L_0884B238:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-9));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B2E8;
      }
      goto L_0884B24C;
    }
L_0884B24C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-17));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B2E8;
      }
      goto L_0884B260;
    }
L_0884B260:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B2E8;
      }
      goto L_0884B274;
    }
L_0884B274:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1025));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B2E8;
      }
      goto L_0884B288;
    }
L_0884B288:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2049));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B2E8;
      }
      goto L_0884B29C;
    }
L_0884B29C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B2E8;
      }
      goto L_0884B2B0;
    }
L_0884B2B0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B2E8;
      }
      goto L_0884B2C4;
    }
L_0884B2C4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-257));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884B2E8;
      }
      goto L_0884B2D8;
    }
L_0884B2D8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-513));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
    goto L_0884B2E8;
L_0884B2E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B2F0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(26))))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(8, ~(ctx.gpr[8] | 0u));
    ctx.set_gpr(3, ctx.gpr[8] & ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(26))))));
    ctx.set_gpr(3, ~(ctx.gpr[3] | 0u));
    ctx.set_gpr(3, ctx.gpr[8] & ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_0884B348;
L_0884B348:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(26))))));
    ctx.set_gpr(9, ctx.gpr[3] << (ctx.gpr[7] & 31u));
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[9]);
    if (ctx.gpr[8] == 0u) {
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), 0u);
        goto L_0884B428;
    }
    goto L_0884B35C;
L_0884B35C:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(92))))));
    if (ctx.gpr[8] == ctx.gpr[10]) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
        goto L_0884B3E4;
    }
    goto L_0884B368;
L_0884B368:
    if (ctx.gpr[8] == ctx.gpr[3]) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
        goto L_0884B3A0;
    }
    goto L_0884B370;
L_0884B370:
    if (ctx.gpr[8] == 0u) {
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(32))))));
        goto L_0884B380;
    }
    goto L_0884B378;
L_0884B378:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_0884B41C;
      }
      goto L_0884B380;
    }
L_0884B380:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[9]))));
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(92))))));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_0884B418;
      }
      goto L_0884B3A0;
    }
L_0884B3A0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884B418;
      }
      goto L_0884B3B4;
    }
L_0884B3B4:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(32))))));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[9]))));
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(92))))));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_0884B418;
      }
      goto L_0884B3E4;
    }
L_0884B3E4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884B418;
      }
      goto L_0884B3F8;
    }
L_0884B3F8:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(32))))));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[9]))));
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0884B418;
L_0884B418:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    goto L_0884B41C;
L_0884B41C:
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0884B42C;
      }
      goto L_0884B428;
    }
L_0884B428:
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(0u));
    goto L_0884B42C;
L_0884B42C:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[7]) < 12 ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884B348;
      }
      goto L_0884B440;
    }
L_0884B440:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B448:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(100), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(98), static_cast<std::uint16_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B470:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(22, ctx.gpr[9] + 0u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0884B4B4u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_0884B7C0;
L_0884B4B4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_0884B4E0;
    }
    goto L_0884B4BC;
L_0884B4BC:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0884B510;
      }
      goto L_0884B4C4;
    }
L_0884B4C4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0884B4D0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_0884B680;
L_0884B4D0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_0884B514;
    }
    goto L_0884B4D8;
L_0884B4D8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0884B510;
      }
      goto L_0884B4E0;
    }
L_0884B4E0:
    ctx.set_gpr(31, 0x0884B4E8u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_0884B7C0;
L_0884B4E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B510;
      }
      goto L_0884B4F0;
    }
L_0884B4F0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[22];
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884B510;
      }
      goto L_0884B4F8;
    }
L_0884B4F8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0884B504u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_0884B680;
L_0884B504:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884B510;
      }
      goto L_0884B50C;
    }
L_0884B50C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0884B510;
L_0884B510:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0884B514;
L_0884B514:
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
L_0884B53C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884B550u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08848BD0;
L_0884B550:
    ctx.set_gpr(31, 0x0884B558u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884B59C;
L_0884B558:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0884B584;
    }
    goto L_0884B560;
L_0884B560:
    ctx.set_gpr(31, 0x0884B568u);
    // nop
    goto L_08848CA8;
L_0884B568:
    ctx.set_gpr(31, 0x0884B570u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884B594;
L_0884B570:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884B580;
      }
      goto L_0884B578;
    }
L_0884B578:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0884B584;
      }
      goto L_0884B580;
    }
L_0884B580:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0884B584;
L_0884B584:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B594:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B59C:
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-16640)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B5B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884B5C8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08848BD0;
L_0884B5C8:
    ctx.set_gpr(31, 0x0884B5D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884B59C;
L_0884B5D0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_0884B5FC;
    }
    goto L_0884B5D8;
L_0884B5D8:
    ctx.set_gpr(31, 0x0884B5E0u);
    // nop
    goto L_08848CA8;
L_0884B5E0:
    ctx.set_gpr(31, 0x0884B5E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884B594;
L_0884B5E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884B5F8;
      }
      goto L_0884B5F0;
    }
L_0884B5F0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0884B5FC;
      }
      goto L_0884B5F8;
    }
L_0884B5F8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0884B5FC;
L_0884B5FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B60C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0884B628u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_08848BD0;
L_0884B628:
    ctx.set_gpr(31, 0x0884B630u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884B59C;
L_0884B630:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(26))))));
        goto L_0884B65C;
    }
    goto L_0884B638;
L_0884B638:
    ctx.set_gpr(31, 0x0884B640u);
    // nop
    goto L_08848CA8;
L_0884B640:
    ctx.set_gpr(31, 0x0884B648u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884B594;
L_0884B648:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884B658;
      }
      goto L_0884B650;
    }
L_0884B650:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0884B66C;
      }
      goto L_0884B658;
    }
L_0884B658:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(26))))));
    goto L_0884B65C;
L_0884B65C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[16] & 31u));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    goto L_0884B66C;
L_0884B66C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B680:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0884B69Cu);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_08848BD0;
L_0884B69C:
    ctx.set_gpr(31, 0x0884B6A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884B59C;
L_0884B6A4:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(28))))));
        goto L_0884B6D0;
    }
    goto L_0884B6AC;
L_0884B6AC:
    ctx.set_gpr(31, 0x0884B6B4u);
    // nop
    goto L_08848CA8;
L_0884B6B4:
    ctx.set_gpr(31, 0x0884B6BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884B594;
L_0884B6BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884B6CC;
      }
      goto L_0884B6C4;
    }
L_0884B6C4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0884B6E0;
      }
      goto L_0884B6CC;
    }
L_0884B6CC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(28))))));
    goto L_0884B6D0;
L_0884B6D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[16] & 31u));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    goto L_0884B6E0;
L_0884B6E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B6F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884B708u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08848BD0;
L_0884B708:
    ctx.set_gpr(31, 0x0884B710u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884B59C;
L_0884B710:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
        goto L_0884B73C;
    }
    goto L_0884B718;
L_0884B718:
    ctx.set_gpr(31, 0x0884B720u);
    // nop
    goto L_08848CA8;
L_0884B720:
    ctx.set_gpr(31, 0x0884B728u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884B594;
L_0884B728:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884B738;
      }
      goto L_0884B730;
    }
L_0884B730:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0884B73C;
      }
      goto L_0884B738;
    }
L_0884B738:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    goto L_0884B73C;
L_0884B73C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B74C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0884B768u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_08848BD0;
L_0884B768:
    ctx.set_gpr(31, 0x0884B770u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884B59C;
L_0884B770:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(30))))));
        goto L_0884B79C;
    }
    goto L_0884B778;
L_0884B778:
    ctx.set_gpr(31, 0x0884B780u);
    // nop
    goto L_08848CA8;
L_0884B780:
    ctx.set_gpr(31, 0x0884B788u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884B594;
L_0884B788:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884B798;
      }
      goto L_0884B790;
    }
L_0884B790:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0884B7AC;
      }
      goto L_0884B798;
    }
L_0884B798:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(30))))));
    goto L_0884B79C;
L_0884B79C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[16] & 31u));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    goto L_0884B7AC;
L_0884B7AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B7C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0884B7DCu);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_08848BD0;
L_0884B7DC:
    ctx.set_gpr(31, 0x0884B7E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884B59C;
L_0884B7E4:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(32))))));
        goto L_0884B810;
    }
    goto L_0884B7EC;
L_0884B7EC:
    ctx.set_gpr(31, 0x0884B7F4u);
    // nop
    goto L_08848CA8;
L_0884B7F4:
    ctx.set_gpr(31, 0x0884B7FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884B594;
L_0884B7FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884B80C;
      }
      goto L_0884B804;
    }
L_0884B804:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0884B820;
      }
      goto L_0884B80C;
    }
L_0884B80C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(32))))));
    goto L_0884B810;
L_0884B810:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[16] & 31u));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    goto L_0884B820;
L_0884B820:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B834:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16196)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16200)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16204)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16208)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0884BADC;
      }
      goto L_0884B88C;
    }
L_0884B88C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 43u, 0x0884C29Cu>(ctx, &aot_mem); return;
      }
      goto L_0884B898;
    }
L_0884B898:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(17, 0u + 0u);
        goto L_0884BA74;
    }
    goto L_0884B8A8;
L_0884B8A8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884B974;
      }
      goto L_0884B8B0;
    }
L_0884B8B0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0884B93C;
      }
      goto L_0884B8B8;
    }
L_0884B8B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B8C8;
      }
      goto L_0884B8C0;
    }
L_0884B8C0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0884BAB8;
      }
      goto L_0884B8C8;
    }
L_0884B8C8:
    ctx.set_gpr(31, 0x0884B8D0u);
    // nop
    goto L_08848AFC;
L_0884B8D0:
    ctx.set_gpr(31, 0x0884B8D8u);
    // nop
    goto L_08848BC4;
L_0884B8D8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0884B8F8u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x0884B8F8u) goto L_0884B8F8;
    return;
L_0884B8F8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0884B90Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B90Cu) goto L_0884B90C;
    return;
L_0884B90C:
    ctx.set_gpr(31, 0x0884B914u);
    // nop
    goto L_08848BD0;
L_0884B914:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0884B92Cu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x0884B92Cu) goto L_0884B92C;
    return;
L_0884B92C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0884BAB4;
      }
      goto L_0884B93C;
    }
L_0884B93C:
    ctx.set_gpr(31, 0x0884B944u);
    // nop
    goto L_08848C9C;
L_0884B944:
    ctx.set_gpr(31, 0x0884B94Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 755u, 0x08ACE8B4u>(ctx, &aot_mem) && ctx.pc == 0x0884B94Cu) goto L_0884B94C;
    return;
L_0884B94C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BAB4;
      }
      goto L_0884B954;
    }
L_0884B954:
    ctx.set_gpr(31, 0x0884B95Cu);
    // nop
    goto L_08848C24;
L_0884B95C:
    ctx.set_gpr(31, 0x0884B964u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 668u, 0x08852878u>(ctx, &aot_mem) && ctx.pc == 0x0884B964u) goto L_0884B964;
    return;
L_0884B964:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0884BAB4;
      }
      goto L_0884B974;
    }
L_0884B974:
    ctx.set_gpr(31, 0x0884B97Cu);
    // nop
    goto L_08848C24;
L_0884B97C:
    ctx.set_gpr(31, 0x0884B984u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08848C0C;
L_0884B984:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884B990u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 669u, 0x08852880u>(ctx, &aot_mem) && ctx.pc == 0x0884B990u) goto L_0884B990;
    return;
L_0884B990:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BAB4;
      }
      goto L_0884B998;
    }
L_0884B998:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0884BAB4;
      }
      goto L_0884B9A8;
    }
L_0884B9A8:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BA74;
      }
      goto L_0884B9B4;
    }
L_0884B9B4:
    ctx.set_gpr(31, 0x0884B9BCu);
    // nop
    goto L_08848BD0;
L_0884B9BC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0884B9D0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x0884B9D0u) goto L_0884B9D0;
    return;
L_0884B9D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884BA14;
      }
      goto L_0884B9D8;
    }
L_0884B9D8:
    ctx.set_gpr(31, 0x0884B9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 895u, 0x08AAF7C8u>(ctx, &aot_mem) && ctx.pc == 0x0884B9E0u) goto L_0884B9E0;
    return;
L_0884B9E0:
    ctx.set_gpr(31, 0x0884B9E8u);
    // nop
    goto L_08848C54;
L_0884B9E8:
    ctx.set_gpr(31, 0x0884B9F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 977u, 0x08AAFC50u>(ctx, &aot_mem) && ctx.pc == 0x0884B9F0u) goto L_0884B9F0;
    return;
L_0884B9F0:
    ctx.set_gpr(31, 0x0884B9F8u);
    // nop
    goto L_08848BD0;
L_0884B9F8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0884BA0Cu);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x0884BA0Cu) goto L_0884BA0C;
    return;
L_0884BA0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B9D8;
      }
      goto L_0884BA14;
    }
L_0884BA14:
    ctx.set_gpr(31, 0x0884BA1Cu);
    // nop
    goto L_08848BD0;
L_0884BA1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x0884BA50u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x0884BA50u) goto L_0884BA50;
    return;
L_0884BA50:
    ctx.set_gpr(31, 0x0884BA58u);
    // nop
    goto L_08848BD0;
L_0884BA58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0884BA6Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x0884BA6Cu) goto L_0884BA6C;
    return;
L_0884BA6C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0884BA74;
L_0884BA74:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884B9B4;
      }
      goto L_0884BA80;
    }
L_0884BA80:
    ctx.set_gpr(31, 0x0884BA88u);
    // nop
    goto L_08848C3C;
L_0884BA88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884BA94u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(34));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 847u, 0x08AB31BCu>(ctx, &aot_mem) && ctx.pc == 0x0884BA94u) goto L_0884BA94;
    return;
L_0884BA94:
    ctx.set_gpr(31, 0x0884BA9Cu);
    // nop
    goto L_08848C3C;
L_0884BA9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884BAA8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(35));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 847u, 0x08AB31BCu>(ctx, &aot_mem) && ctx.pc == 0x0884BAA8u) goto L_0884BAA8;
    return;
L_0884BAA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_0884BAB4;
L_0884BAB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_0884BAB8;
L_0884BAB8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 4 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 62u, 0x0884C398u>(ctx, &aot_mem); return;
    }
    goto L_0884BAC4;
L_0884BAC4:
    ctx.set_gpr(31, 0x0884BACCu);
    // nop
    goto L_08848A74;
L_0884BACC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 61u, 0x0884C394u>(ctx, &aot_mem); return;
      }
      goto L_0884BADC;
    }
L_0884BADC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 61u, 0x0884C394u>(ctx, &aot_mem); return;
      }
      goto L_0884BAEC;
    }
L_0884BAEC:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8372));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BB08:
    ctx.set_gpr(31, 0x0884BB10u);
    // nop
    goto L_08848BD0;
L_0884BB10:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0884BB30u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x0884BB30u) goto L_0884BB30;
    return;
L_0884BB30:
    ctx.set_gpr(31, 0x0884BB38u);
    // nop
    goto L_08848BD0;
L_0884BB38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0884BB60u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x0884BB60u) goto L_0884BB60;
    return;
L_0884BB60:
    ctx.set_gpr(31, 0x0884BB68u);
    // nop
    goto L_08848BD0;
L_0884BB68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0884BB7Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x0884BB7Cu) goto L_0884BB7C;
    return;
L_0884BB7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 42u, 0x0884C294u>(ctx, &aot_mem); return;
      }
      goto L_0884BB8C;
    }
L_0884BB8C:
    ctx.set_gpr(31, 0x0884BB94u);
    // nop
    goto L_08848BD0;
L_0884BB94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0884BBA4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 63u, 0x0884C3ACu>(ctx, &aot_mem) && ctx.pc == 0x0884BBA4u) goto L_0884BBA4;
    return;
L_0884BBA4:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 61u, 0x0884C394u>(ctx, &aot_mem); return;
      }
      goto L_0884BBB0;
    }
L_0884BBB0:
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(2, 2244u << 16u);
    ctx.set_gpr(31, 0x0884BBC0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24280), ctx.gpr[3]);
    goto L_08848C3C;
L_0884BBC0:
    ctx.set_gpr(3, 2244u << 16u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(24284))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(34));
    ctx.set_gpr(31, 0x0884BBDCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x0884BBDCu) goto L_0884BBDC;
    return;
L_0884BBDC:
    ctx.set_gpr(3, 2244u << 16u);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(24284))))));
    ctx.set_gpr(3, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(24284), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[4]))));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_0884BC0C;
    }
    goto L_0884BC00;
L_0884BC00:
    ctx.set_gpr(3, 2244u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(24284), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_0884BC0C;
L_0884BC0C:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 42u, 0x0884C294u>(ctx, &aot_mem); return;
      }
      goto L_0884BC18;
    }
L_0884BC18:
    ctx.set_gpr(2, 2244u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24280)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 2244u << 16u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24280), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_0884BCA8;
      }
      goto L_0884BC40;
    }
L_0884BC40:
    ctx.set_gpr(31, 0x0884BC48u);
    // nop
    goto L_08848BD0;
L_0884BC48:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0884BC68u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x0884BC68u) goto L_0884BC68;
    return;
L_0884BC68:
    ctx.set_gpr(31, 0x0884BC70u);
    // nop
    goto L_08848BD0;
L_0884BC70:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0884BC98u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x0884BC98u) goto L_0884BC98;
    return;
L_0884BC98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 42u, 0x0884C294u>(ctx, &aot_mem); return;
      }
      goto L_0884BCA8;
    }
L_0884BCA8:
    ctx.set_gpr(31, 0x0884BCB0u);
    // nop
    goto L_08848BF4;
L_0884BCB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884BCBCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    goto L_0884B680;
L_0884BCBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 61u, 0x0884C394u>(ctx, &aot_mem); return;
      }
      goto L_0884BCC4;
    }
L_0884BCC4:
    ctx.set_gpr(31, 0x0884BCCCu);
    // nop
    goto L_08848BD0;
L_0884BCCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0884BCE0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x0884BCE0u) goto L_0884BCE0;
    return;
L_0884BCE0:
    ctx.set_gpr(31, 0x0884BCE8u);
    // nop
    goto L_08848C3C;
L_0884BCE8:
    ctx.set_gpr(31, 0x0884BCF0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 422u, 0x08AB1920u>(ctx, &aot_mem) && ctx.pc == 0x0884BCF0u) goto L_0884BCF0;
    return;
L_0884BCF0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 42u, 0x0884C294u>(ctx, &aot_mem); return;
      }
      goto L_0884BD00;
    }
L_0884BD00:
    ctx.set_gpr(31, 0x0884BD08u);
    // nop
    goto L_08848BD0;
L_0884BD08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0884BD18u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 63u, 0x0884C3ACu>(ctx, &aot_mem) && ctx.pc == 0x0884BD18u) goto L_0884BD18;
    return;
L_0884BD18:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 61u, 0x0884C394u>(ctx, &aot_mem); return;
      }
      goto L_0884BD24;
    }
L_0884BD24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_0884BD30;
L_0884BD30:
    ctx.set_gpr(31, 0x0884BD38u);
    // nop
    goto L_08848BD0;
L_0884BD38:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0884BD58u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x0884BD58u) goto L_0884BD58;
    return;
L_0884BD58:
    ctx.set_gpr(31, 0x0884BD60u);
    // nop
    goto L_08848BD0;
L_0884BD60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0884BD88u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x0884BD88u) goto L_0884BD88;
    return;
L_0884BD88:
    ctx.set_gpr(31, 0x0884BD90u);
    // nop
    goto L_08848BD0;
L_0884BD90:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0884BDA4u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x0884BDA4u) goto L_0884BDA4;
    return;
L_0884BDA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 42u, 0x0884C294u>(ctx, &aot_mem); return;
      }
      goto L_0884BDB4;
    }
L_0884BDB4:
    ctx.set_gpr(31, 0x0884BDBCu);
    // nop
    goto L_08848BD0;
L_0884BDBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0884BDCCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 63u, 0x0884C3ACu>(ctx, &aot_mem) && ctx.pc == 0x0884BDCCu) goto L_0884BDCC;
    return;
L_0884BDCC:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 61u, 0x0884C394u>(ctx, &aot_mem); return;
      }
      goto L_0884BDD8;
    }
L_0884BDD8:
    ctx.set_gpr(4, 16384u << 16u);
    ctx.set_gpr(3, 2244u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24280), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 42u, 0x0884C294u>(ctx, &aot_mem); return;
      }
      goto L_0884BDF4;
    }
L_0884BDF4:
    ctx.set_gpr(2, 2244u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24280)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 2244u << 16u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24280), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_0884BE84;
      }
      goto L_0884BE1C;
    }
L_0884BE1C:
    ctx.set_gpr(31, 0x0884BE24u);
    // nop
    goto L_08848BD0;
L_0884BE24:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0884BE44u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x0884BE44u) goto L_0884BE44;
    return;
L_0884BE44:
    ctx.set_gpr(31, 0x0884BE4Cu);
    // nop
    goto L_08848BD0;
L_0884BE4C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0884BE74u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x0884BE74u) goto L_0884BE74;
    return;
L_0884BE74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 42u, 0x0884C294u>(ctx, &aot_mem); return;
      }
      goto L_0884BE84;
    }
L_0884BE84:
    ctx.set_gpr(31, 0x0884BE8Cu);
    // nop
    goto L_08848BF4;
L_0884BE8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884BE98u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    goto L_0884B680;
L_0884BE98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 61u, 0x0884C394u>(ctx, &aot_mem); return;
      }
      goto L_0884BEA0;
    }
L_0884BEA0:
    ctx.set_gpr(31, 0x0884BEA8u);
    // nop
    goto L_08848BD0;
L_0884BEA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0884BEBCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x0884BEBCu) goto L_0884BEBC;
    return;
L_0884BEBC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 42u, 0x0884C294u>(ctx, &aot_mem); return;
      }
      goto L_0884BECC;
    }
L_0884BECC:
    ctx.set_gpr(31, 0x0884BED4u);
    // nop
    goto L_08848BD0;
L_0884BED4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0884BEE4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 63u, 0x0884C3ACu>(ctx, &aot_mem) && ctx.pc == 0x0884BEE4u) goto L_0884BEE4;
    return;
L_0884BEE4:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 61u, 0x0884C394u>(ctx, &aot_mem); return;
      }
      goto L_0884BEF0;
    }
L_0884BEF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_0884BEFC;
L_0884BEFC:
    ctx.set_gpr(31, 0x0884BF04u);
    // nop
    goto L_08848BD0;
L_0884BF04:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0884BF24u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x0884BF24u) goto L_0884BF24;
    return;
L_0884BF24:
    ctx.set_gpr(31, 0x0884BF2Cu);
    // nop
    goto L_08848BD0;
L_0884BF2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0884BF54u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x0884BF54u) goto L_0884BF54;
    return;
L_0884BF54:
    ctx.set_gpr(31, 0x0884BF5Cu);
    // nop
    goto L_08848BD0;
L_0884BF5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0884BF70u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x0884BF70u) goto L_0884BF70;
    return;
L_0884BF70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 42u, 0x0884C294u>(ctx, &aot_mem); return;
      }
      goto L_0884BF80;
    }
L_0884BF80:
    ctx.set_gpr(31, 0x0884BF88u);
    // nop
    goto L_08848BD0;
L_0884BF88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0884BF98u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 63u, 0x0884C3ACu>(ctx, &aot_mem) && ctx.pc == 0x0884BF98u) goto L_0884BF98;
    return;
L_0884BF98:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 61u, 0x0884C394u>(ctx, &aot_mem); return;
      }
      goto L_0884BFA4;
    }
L_0884BFA4:
    ctx.set_gpr(4, 16384u << 16u);
    ctx.set_gpr(3, 2244u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24280), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 42u, 0x0884C294u>(ctx, &aot_mem); return;
      }
      goto L_0884BFC0;
    }
L_0884BFC0:
    ctx.set_gpr(2, 2244u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24280)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 2244u << 16u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24280), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 5u, 0x0884C050u>(ctx, &aot_mem); return;
      }
      goto L_0884BFE8;
    }
L_0884BFE8:
    ctx.set_gpr(31, 0x0884BFF0u);
    // nop
    goto L_08848BD0;
L_0884BFF0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.pc = 0x0884C000u; return;
}

void recomp_unit_0017(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0017_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_17(Runtime &runtime) {
    runtime.register_generated_unit(17u, 0x08848000u, 16384u, &recomp_unit_0017, &recomp_unit_0017_entry);
    runtime.register_function(0x08848004u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884800Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848024u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884802Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848044u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848050u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848058u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848060u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848068u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848074u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884807Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848084u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088480A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088480B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088480C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088480CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088480D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088480E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088480ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088480F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848104u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884812Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884813Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848144u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848154u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848184u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884819Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088481A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088481ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088481D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088481F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088481F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848200u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848214u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848230u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884823Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848254u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848260u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848284u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884828Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088482A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088482B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088482C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088482E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088482F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848300u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848318u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848328u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848338u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848348u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848358u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848368u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848378u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848380u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884838Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884839Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088483A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088483B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088483BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088483C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088483D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088483F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088483FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848414u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848420u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848430u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848460u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848470u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848488u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848490u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088484A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088484B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088484D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088484E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848500u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884851Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848538u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848554u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848568u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848580u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884858Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088485A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088485ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088485B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088485C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088485D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088485D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088485F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088485F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848610u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848614u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884861Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884862Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848644u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884864Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848654u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848660u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848670u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848680u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848688u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088486B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088486BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088486C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848700u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848714u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884871Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848724u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848738u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848750u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848764u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884876Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848778u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848780u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848788u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088487A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088487C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088487CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088487ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088487F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848800u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884881Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848834u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884883Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848844u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884884Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848860u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848874u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848888u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088488A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088488C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088488E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088488ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848904u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848920u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848928u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848934u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884893Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848940u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848954u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884895Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848964u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884896Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884897Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848984u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848990u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848998u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088489A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088489B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088489C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088489D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088489DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088489E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088489ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088489F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A14u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A34u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A48u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A60u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A68u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A74u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A94u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848AACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848AB8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848AD0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848AE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848AECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848AFCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B1Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B34u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B40u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B58u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B68u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848BA8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848BB8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848BC4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848BD0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848BDCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848BE8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848BF4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C00u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C0Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C18u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C24u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C30u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C3Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C48u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C54u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C60u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C6Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C78u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C84u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C90u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C9Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848CA8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848CB4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848CC0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848CD8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848CE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848CECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848CF0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D00u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D08u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D24u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D2Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D38u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D40u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D44u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D58u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D70u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D7Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D88u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D90u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848DA4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848DDCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848E1Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848E2Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848E7Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848E8Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848EB4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848ED0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848EDCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848F0Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848F30u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848F44u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848F4Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848F80u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848F98u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848FA0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848FB8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848FC0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848FD8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848FF0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848FF8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884900Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849014u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884902Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849044u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884904Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884905Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849070u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884908Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884909Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088490ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088490C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088490D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088490ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849108u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849114u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884912Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849138u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849140u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849144u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849158u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849174u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884917Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849188u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849190u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849194u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088491A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088491C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088491CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088491D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088491E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088491E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088491F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849214u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849224u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849234u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849240u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849248u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884924Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849260u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849268u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849284u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849290u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884929Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088492A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088492B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088492C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088492CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088492D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088492E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088492F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849304u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884933Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849344u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884934Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849354u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884935Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849364u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884936Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849374u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849384u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849394u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088493A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088493C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088493CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088493ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088493FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849410u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849424u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849438u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884944Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849458u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849464u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849488u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884949Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088494A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088494B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088494C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088494D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088494DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884950Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849518u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849520u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849528u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849530u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849538u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849540u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849550u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849558u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849560u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849564u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884956Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849574u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849584u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849594u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884959Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088495A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088495B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088495BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088495C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088495CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088495E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088495ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849600u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849608u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849614u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884961Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849624u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849630u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849634u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849650u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849668u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849670u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884967Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849684u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884968Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849690u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088496A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088496ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088496C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088496D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088496E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088496F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088496FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849750u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849758u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849760u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849768u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884976Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849774u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884977Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849780u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849784u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884978Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849794u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884979Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088497A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088497B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088497B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088497BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088497C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088497CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088497D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088497E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088497E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088497F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088497FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849804u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849810u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849818u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849824u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849834u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884983Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849848u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849850u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884985Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849864u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884988Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849894u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849898u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088498A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088498ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088498BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088498C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088498D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088498D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088498E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088498ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088498FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884990Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849918u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849920u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884992Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849938u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884993Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849970u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884998Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849994u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088499A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088499A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088499ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088499C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088499D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088499E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088499ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088499F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088499FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849A00u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849A10u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849A1Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849A34u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849A40u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849A50u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849A58u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849A60u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849A94u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849AA0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849ABCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849ADCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849AF0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849AF8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B00u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B08u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B20u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B28u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B30u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B38u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B40u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B4Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B54u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B68u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B7Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B94u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B9Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849BA8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849BB0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849BB8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849BBCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849BCCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849BD8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849BE0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849BE8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849BF0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849C0Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849C20u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849C28u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849C34u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849C5Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849C64u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849C6Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849C74u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849C98u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849CACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849CB8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849CCCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849CD8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849CE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849CECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849CF8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D0Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D10u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D14u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D2Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D34u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D54u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D5Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D68u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D7Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D8Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D98u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849DACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849DCCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849DD4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849DE0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849DF8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E08u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E14u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E28u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E48u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E50u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E5Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E74u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E84u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E90u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849EA4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849EC4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849ECCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849ED8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849EF0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F00u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F0Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F20u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F28u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F54u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F60u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F68u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F70u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F78u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F80u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F88u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F9Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849FA0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849FBCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849FC4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849FFCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A004u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A014u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A01Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A044u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A04Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A05Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A068u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A070u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A078u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A080u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A088u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A094u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A104u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A110u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A118u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A154u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A16Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A178u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A184u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A194u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A1A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A1B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A1CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A1D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A1DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A1F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A200u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A20Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A214u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A21Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A224u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A22Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A23Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A240u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A250u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A268u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A27Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A284u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A2A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A2A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A2B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A2BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A2C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A2D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A2ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A300u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A318u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A320u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A32Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A334u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A338u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A344u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A358u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A36Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A384u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A38Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A394u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A3A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A3B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A3B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A3C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A3D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A3E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A3E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A3F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A404u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A408u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A414u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A430u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A43Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A448u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A44Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A450u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A460u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A468u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A46Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A47Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A498u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A4A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A4B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A4B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A4B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A4C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A4D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A4D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A4E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A500u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A50Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A518u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A51Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A520u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A530u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A538u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A53Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A54Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A578u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A588u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A594u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A598u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A59Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A5A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A5ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A5BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A5C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A5D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A5DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A5E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A5F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A600u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A604u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A608u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A610u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A618u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A620u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A628u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A62Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A64Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A664u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A668u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A670u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A688u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A68Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A694u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A6ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A6B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A6B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A6E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A6F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A710u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A728u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A738u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A740u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A74Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A770u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A78Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A798u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A7A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A7A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A7ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A7BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A7C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A7C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A7D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A808u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A818u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A824u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A830u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A844u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A854u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A858u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A878u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A884u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A88Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A890u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A898u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A8A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A8B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A8B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A8C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A8CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A8D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A8DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A8E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A8F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A910u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A91Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A924u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A928u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A93Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A958u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A964u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A968u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A96Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A97Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A998u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A9A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A9A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A9ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A9B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A9C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A9CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A9D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A9DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A9E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A9E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A9F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA14u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA20u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA24u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA28u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA34u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA3Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA48u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA50u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA58u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA60u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA64u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA74u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA90u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA9Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AAA0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AAA8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AAB4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AABCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AAC4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AACCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AAD4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AAF8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB04u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB0Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB14u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB1Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB28u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB30u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB34u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB5Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB78u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB80u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB88u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB90u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB98u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ABA0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ABB4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ABC8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ABD4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ABE8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ABF4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AC00u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AC14u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AC34u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AC44u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AC4Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AC54u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AC64u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AC70u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AC7Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AC8Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AC94u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ACA8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ACB0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ACBCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ACC4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ACD8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ACE0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ACE8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ACF0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ACF8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AD08u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AD14u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AD18u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AD28u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AD38u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AD6Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AD78u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AD88u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ADACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ADB8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ADC4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ADD0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ADE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ADF8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE0Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE28u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE40u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE4Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE5Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE6Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE74u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE84u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE8Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AEDCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF20u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF28u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF40u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF4Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF54u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF58u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF68u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF84u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AFA0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AFACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AFC4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AFE0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AFE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B000u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B018u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B01Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B028u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B044u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B060u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B06Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B084u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B0A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B0A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B0C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B0D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B0DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B0E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B0F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B110u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B120u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B130u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B140u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B150u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B160u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B170u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B180u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B190u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B1A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B1B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B1C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B1CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B1D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B1E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B1FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B210u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B224u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B238u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B24Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B260u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B274u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B288u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B29Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B2B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B2C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B2D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B2E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B2F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B348u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B35Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B368u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B370u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B378u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B380u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B3A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B3B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B3E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B3F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B418u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B41Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B428u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B42Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B440u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B448u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B470u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B4B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B4BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B4C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B4D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B4D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B4E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B4E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B4F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B4F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B504u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B50Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B510u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B514u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B53Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B550u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B558u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B560u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B568u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B570u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B578u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B580u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B584u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B594u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B59Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B5B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B5C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B5D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B5D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B5E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B5E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B5F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B5F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B5FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B60Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B628u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B630u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B638u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B640u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B648u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B650u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B658u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B65Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B66Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B680u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B69Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B6A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B6ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B6B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B6BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B6C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B6CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B6D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B6E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B6F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B708u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B710u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B718u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B720u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B728u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B730u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B738u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B73Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B74Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B768u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B770u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B778u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B780u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B788u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B790u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B798u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B79Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B7ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B7C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B7DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B7E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B7ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B7F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B7FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B804u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B80Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B810u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B820u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B834u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B88Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B898u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B8A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B8B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B8B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B8C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B8C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B8D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B8D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B8F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B90Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B914u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B92Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B93Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B944u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B94Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B954u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B95Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B964u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B974u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B97Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B984u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B990u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B998u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA0Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA14u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA1Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA50u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA58u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA6Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA74u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA80u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA88u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA94u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA9Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BAA8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BAB4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BAB8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BAC4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BACCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BADCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BAECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB08u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB10u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB30u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB38u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB60u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB68u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB7Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB8Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB94u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BBA4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BBB0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BBC0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BBDCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC00u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC0Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC18u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC40u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC48u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC68u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC70u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC98u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BCA8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BCB0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BCBCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BCC4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BCCCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BCE0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BCE8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BCF0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD00u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD08u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD18u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD24u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD30u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD38u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD58u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD60u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD88u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD90u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BDA4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BDB4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BDBCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BDCCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BDD8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BDF4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE1Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE24u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE44u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE4Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE74u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE84u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE8Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE98u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BEA0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BEA8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BEBCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BECCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BED4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BEE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BEF0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BEFCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF04u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF24u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF2Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF54u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF5Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF70u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF80u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF88u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF98u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BFA4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BFC0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BFE8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BFF0u, &recomp_unit_0017, "recomp_unit_0017");
}
} // namespace psprecomp
