#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0146[4095] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 8, 0, 9, 0, 0, 0, 0, 0, 10,
    0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 17, 0, 18, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 20, 21, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 26, 0, 0, 27, 0, 0, 28, 0, 29, 0, 30, 0,
    0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 0, 35, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 40, 41, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0,
    0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 60, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64,
    0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 73, 0, 74, 0, 0, 0,
    0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83,
    0, 84, 0, 0, 85, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 89, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93,
    0, 94, 0, 0, 95, 0, 0, 96, 0, 97, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 103, 0, 104, 0, 0,
    0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 113, 0, 114, 0,
    0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 123, 0,
    124, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 128, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 139, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0,
    0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0,
    0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 158, 0, 159, 0, 0,
    0, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 164, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0,
    0, 170, 0, 0, 171, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 179,
    0, 180, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 188, 0,
    189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 194, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0,
    199, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0,
    0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 208, 209, 0, 210, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 215, 0,
    0, 0, 0, 0, 216, 217, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 222, 0, 0, 223, 0, 224, 0, 0, 225, 0, 0,
    0, 0, 226, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0,
    0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 249, 0, 0, 250, 0, 251, 0, 0,
    0, 252, 0, 0, 0, 0, 0, 253, 254, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 259, 0, 0, 260, 0, 261, 0, 0,
    262, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 268, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0,
    0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 274, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 0, 278, 0, 0, 279, 0, 280, 0, 281, 0, 0,
    0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 285, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0,
    293, 294, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0,
    0, 0, 301, 302, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 307, 0, 0, 0, 308, 0, 0, 0, 0, 309,
    0, 0, 310, 0, 311, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315,
    0, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 320, 0, 0, 321, 0, 322, 0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 326, 327, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 332, 0, 0, 333, 0, 334, 0, 0, 335, 0, 0, 336, 0,
    337, 0, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 341, 0, 0, 342, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 0, 346, 0, 0, 347, 0, 348, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 0, 352, 0, 0, 353, 0, 354, 0, 355, 0, 0, 0, 356,
    0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 359, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 364, 0, 365, 0,
    0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0,
    371, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0,
    0, 0, 380, 0, 0, 381, 0, 382, 0, 0, 383, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 388, 0, 0,
    389, 0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 394, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0,
    399, 0, 0, 400, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0, 408, 0, 0, 0, 409,
    0, 0, 0, 0, 0, 410, 411, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 415, 0, 416, 0, 0, 417, 0, 418, 0, 0, 419, 0,
    0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 424, 0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 0, 428,
    0, 0, 429, 0, 430, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0,
    0, 0, 437, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0,
    0, 0, 445, 446, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 451, 0, 0, 452, 0, 453, 0, 0, 454, 0, 0, 0, 455,
    0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 462, 0,
    0, 0, 463, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 467, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 471, 0,
    472, 0, 0, 473, 0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 478, 0, 0, 479, 0, 0, 480, 0, 481,
    0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 484, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0, 0, 488, 0, 489, 0, 0, 490, 0, 491,
    0, 0, 492, 0, 0, 0, 493, 0, 494, 0, 0, 0, 495, 0, 0, 496, 0, 0, 497, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 501,
    0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 505, 0, 506, 0, 0, 507, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0,
    0, 511, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 514, 0, 0, 515, 0, 516, 0, 0, 517, 0, 518, 0, 0, 0, 519, 0, 0, 0, 0, 0,
    520, 521, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 525, 0, 526, 0, 0, 527, 0, 528, 0, 0, 529, 0, 0, 0, 530, 0, 0,
    0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 534, 0, 535, 0, 0, 536, 0, 0, 537, 0, 0, 0, 538, 0, 0, 539, 0, 540,
    0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 544, 0, 0, 545, 0, 546, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0,
    0, 0, 550, 551, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 554, 0, 0, 555, 0, 556, 0, 0, 557, 0, 558, 559, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0,
    563, 0, 0, 0, 564, 0, 0, 565, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 569, 0, 0, 570, 0, 0,
    0, 571, 0, 0, 0, 0, 0, 572, 573, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 579, 0,
    0, 0, 580, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 584, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 587, 0, 0, 588, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 593, 0, 0, 0, 0,
    594, 0, 595, 0, 0, 596, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 600, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 603, 0,
    0, 604, 0, 0, 0, 0, 605, 0, 0, 606, 0, 0, 0, 607, 0, 0, 608, 0, 0, 609, 0, 610, 0, 0, 0, 611, 0, 0, 0, 0, 0, 612,
    613, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 616, 0, 0, 617, 0, 0, 618, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0,
    0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 623, 0, 0, 0, 624, 0, 0, 625, 0, 0, 626, 0, 627, 0, 0, 628, 0,
    629, 0, 0, 0, 630, 0, 0, 0, 0, 0, 631, 632, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 0, 636, 0, 0, 0, 0, 0, 0,
    0, 637, 0, 638, 0, 0, 0, 639, 0, 0, 640, 0, 0, 641, 0, 642, 0, 0, 643, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 647,
    0, 648, 0, 0, 0, 0, 0, 649, 0, 0, 650, 0, 0, 651, 652, 0, 0, 653, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 656,
    0, 0, 0, 657, 0, 0, 658, 0, 0, 659, 0, 660, 0, 0, 661, 0, 662, 0, 0, 0, 663, 0, 0, 0, 0, 0, 664, 665, 0, 666, 0, 0,
    0, 0, 0, 667, 0, 0, 668, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 673, 674, 0, 675, 0, 0, 676, 0, 0, 0,
    0, 677, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 680, 681, 0, 682, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0,
    684, 0, 0, 0, 685, 0, 0, 686, 0, 0, 0, 0, 687, 0, 688, 0, 689, 690, 0, 691, 0, 0, 0, 692, 0, 693, 0, 0, 0, 0, 694, 0,
    0, 0, 695, 0, 0, 0, 0, 0, 696, 697, 0, 698, 0, 0, 0, 0, 0, 699, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0, 0, 0, 702, 703,
    0, 704, 0, 0, 0, 0, 0, 705, 0, 0, 706, 707, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 710,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 715, 0, 0, 0, 716, 0, 717, 0, 0,
    0, 0, 0, 718, 0, 0, 0, 719, 0, 720, 0, 0, 0, 721, 0, 0, 0, 0, 0, 722, 0, 723, 0, 724, 0, 0, 0, 725, 0, 726, 0, 0,
    0, 0, 0, 727, 0, 0, 0, 728, 0, 729, 0, 0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 732, 0, 733, 0, 0, 0, 734, 0, 735, 0, 0,
    0, 0, 736, 0, 0, 0, 737, 0, 738, 0, 0, 0, 739, 0, 0, 0, 0, 0, 740, 741, 0, 0, 742, 0, 0, 743, 0, 0, 744, 0, 745, 0,
    0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 748, 0, 0, 0, 0,
    749, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 755, 0, 0, 756, 0, 0, 0, 757, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 762, 0, 0, 0, 763, 0, 0, 764, 0,
    0, 0, 765, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 769, 0, 0, 770, 0, 0, 0, 771, 0, 0, 0, 0, 0, 772, 773, 0, 774, 0, 0, 0, 0, 0, 775, 0, 0, 776, 0, 0, 0, 777, 0,
    0, 0, 0, 0, 778, 779, 0, 780, 0, 0, 0, 0, 0, 781, 0, 0, 782, 0, 0, 783, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 785, 0,
    0, 0, 786, 0, 0, 0, 0, 0, 787, 788, 0, 789, 0, 0, 0, 0, 0, 790, 0, 0, 791, 0, 0, 0, 792, 0, 0, 0, 0, 0, 793, 794,
    0, 795, 0, 0, 0, 0, 0, 796, 0, 0, 797, 0, 0, 798, 0, 0, 799, 0, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0, 801, 0, 0, 802,
    0, 0, 803, 0, 804, 0, 0, 0, 805, 0, 0, 0, 0, 0, 806, 807, 0, 808, 0, 0, 0, 0, 0, 809, 0, 0, 810, 0, 0, 0, 811, 0,
    0, 0, 0, 0, 812, 813, 0, 814, 0, 0, 0, 0, 0, 815, 0, 0, 816, 0, 0, 817, 0, 0, 0, 0, 818, 0, 0, 819, 0, 0, 0, 820,
    0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 823, 0, 0, 0, 0, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0,
    0, 825, 0, 0, 0, 826, 0, 0, 827, 0, 0, 0, 828, 0, 0, 829, 0, 830, 0, 0, 831, 0, 832, 0, 0, 833, 0, 0, 834, 0, 0, 0,
    0, 0, 0, 0, 0, 835, 0, 0, 836, 0, 0, 837, 0, 0, 0, 838, 0, 0, 839, 0, 0, 840, 0, 0, 0, 0, 0, 0, 841, 0, 0, 0,
    0, 0, 842, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 844, 0, 0, 0, 0, 845, 0, 846, 0, 0, 0, 0, 0, 847, 0, 0, 848, 0, 0,
    0, 0, 0, 0, 0, 849, 0, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0, 0, 851, 0, 0, 0, 852, 0, 0, 0, 0, 853, 0, 854, 0, 0,
    0, 0, 0, 855, 856, 0, 857, 0, 0, 0, 858, 0, 859, 0, 860, 0, 0, 861, 0, 0, 0, 862, 0, 0, 863, 0, 864, 0, 0, 865, 0, 866,
    0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 868, 0, 0, 0, 0, 0, 0, 869, 0, 0, 870, 0, 871, 0, 872, 0, 0, 873, 0, 0, 874,
    0, 0, 0, 875, 0, 0, 876, 0, 877, 0, 878, 0, 0, 0, 879, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 0, 881, 882, 0, 883, 0, 0,
    0, 0, 0, 884, 0, 0, 885, 0, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 887, 0, 0, 888, 0, 889, 0, 890, 0, 0, 891,
    0, 0, 892, 0, 0, 0, 893, 0, 0, 894, 0, 895, 0, 896, 0, 0, 0, 897, 0, 898, 0, 0, 0, 0, 0, 899, 0, 0, 0, 0, 0, 900,
    901, 0, 902, 0, 0, 0, 0, 0, 903, 0, 0, 904, 0, 0, 0, 905, 0, 0, 0, 0, 906, 0, 0, 0, 907, 0, 0, 908, 0, 909, 0, 0,
    910, 0, 911, 0, 0, 912, 0, 913, 0, 0, 914, 0, 0, 915, 0, 0, 0, 916, 0, 0, 0, 0, 0, 0, 0, 0, 0, 917, 0, 918, 0, 0,
    0, 0, 0, 919, 0, 0, 0, 0, 0, 920, 0, 0, 0, 0, 0, 921, 0, 0, 922, 0, 0, 923, 0, 0, 0, 924, 0, 0, 0, 0, 925, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 926, 0, 0, 0, 927, 0, 0, 928, 0, 929, 0, 0, 930, 0, 931, 0, 0, 932, 0, 933, 0, 0, 934,
    0, 935, 0, 0, 0, 936, 0, 0, 0, 0, 0, 937, 938, 0, 939, 0, 0, 0, 0, 0, 940, 0, 0, 941, 0, 0, 942, 0, 943, 0, 0, 0,
    944, 0, 0, 0, 0, 0, 945, 946, 0, 947, 0, 0, 0, 0, 0, 948, 0, 0, 949, 0, 0, 0, 950, 0, 0, 0, 0, 0, 951, 952, 0, 953,
    0, 0, 0, 0, 0, 954, 0, 0, 955, 0, 0, 956, 0, 0, 0, 957, 0, 0, 958, 0, 0, 0, 959, 0, 0, 960, 0, 0, 0, 961, 0, 0,
    962, 0, 0, 0, 0, 963, 0, 0, 964, 0, 0, 0, 0, 0, 0, 0, 0, 0, 965, 0, 0, 0, 966, 0, 0, 967, 0, 968, 0, 0, 969, 0,
    970, 0, 0, 0, 0, 971, 0, 972, 0, 973, 974, 0, 0, 0, 975, 0, 0, 0, 0, 0, 0, 0, 976, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    977, 0, 0, 0, 978, 0, 0, 979, 0, 980, 0, 0, 981, 0, 0, 982, 0, 983, 0, 0, 984, 0, 985, 0, 0, 986, 0, 987, 0, 0, 988, 0,
    989, 0, 0, 990, 0, 991, 0, 0, 992, 0, 993, 0, 0, 994, 0, 995, 0, 0, 996, 0, 997, 0, 0, 0, 998, 0, 0, 0, 0, 0, 999, 1000,
    0, 1001, 0, 0, 0, 0, 0, 1002, 0, 0, 1003, 0, 0, 1004, 0, 1005, 0, 0, 0, 1006, 0, 0, 0, 0, 0, 1007, 1008, 0, 1009, 0, 0, 0,
    0, 0, 1010, 0, 0, 1011, 0, 0, 0, 1012, 0, 0, 0, 0, 0, 1013, 1014, 0, 1015, 0, 0, 0, 0, 0, 1016, 0, 0, 1017, 0, 0, 1018, 0,
    1019, 0, 0, 0, 0, 1020, 0, 1021, 0, 1022, 1023, 0, 0, 0, 1024, 0, 0, 0, 0, 0, 0, 0, 1025, 0, 1026, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1027, 0, 0, 0, 1028, 0, 0, 1029, 0, 1030, 0, 0, 1031, 0, 0, 1032, 0, 1033, 0, 0, 1034, 0, 1035, 0, 0, 1036, 0, 1037, 0, 0,
    1038, 0, 1039, 0, 0, 1040, 0, 1041, 0, 0, 1042, 0, 1043, 0, 0, 1044, 0, 1045, 0, 0, 1046, 0, 1047, 0, 0, 0, 1048, 0, 0, 0, 0, 0,
    1049, 1050, 0, 1051, 0, 0, 0, 0, 0, 1052, 0, 0, 1053, 0, 0, 1054, 0, 1055, 0, 0, 0, 1056, 0, 0, 0, 0, 0, 1057, 1058, 0, 1059, 0,
    0, 0, 0, 0, 1060, 0, 0, 1061, 0, 0, 0, 1062, 0, 0, 0, 0, 0, 1063, 1064, 0, 1065, 0, 0, 0, 0, 0, 1066, 0, 0, 1067, 0, 0,
    1068, 0, 1069, 0, 0, 0, 0, 1070, 0, 1071, 0, 1072, 1073, 0, 0, 0, 1074, 0, 0, 0, 1075, 0, 0, 0, 0, 0, 0, 0, 1076, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1077, 0, 0, 0, 1078, 0, 0, 1079, 0, 1080, 0, 0, 1081, 0, 1082, 0, 0, 0, 0, 1083, 0, 1084, 0, 1085, 1086, 0,
    0, 0, 1087, 0, 0, 0, 0, 0, 0, 0, 1088, 0, 0, 0, 0, 1089, 0, 0, 0, 0, 1090, 0, 0, 0, 0, 1091, 0, 0, 1092, 0, 1093,
};
void recomp_unit_0146_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A4C000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0146[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A4C000;
    case 2u: goto L_08A4C00C;
    case 3u: goto L_08A4C014;
    case 4u: goto L_08A4C028;
    case 5u: goto L_08A4C030;
    case 6u: goto L_08A4C040;
    case 7u: goto L_08A4C058;
    case 8u: goto L_08A4C05C;
    case 9u: goto L_08A4C064;
    case 10u: goto L_08A4C07C;
    case 11u: goto L_08A4C088;
    case 12u: goto L_08A4C094;
    case 13u: goto L_08A4C09C;
    case 14u: goto L_08A4C0A8;
    case 15u: goto L_08A4C0C8;
    case 16u: goto L_08A4C0D4;
    case 17u: goto L_08A4C0DC;
    case 18u: goto L_08A4C0E4;
    case 19u: goto L_08A4C0F4;
    case 20u: goto L_08A4C10C;
    case 21u: goto L_08A4C110;
    case 22u: goto L_08A4C118;
    case 23u: goto L_08A4C130;
    case 24u: goto L_08A4C13C;
    case 25u: goto L_08A4C148;
    case 26u: goto L_08A4C150;
    case 27u: goto L_08A4C15C;
    case 28u: goto L_08A4C168;
    case 29u: goto L_08A4C170;
    case 30u: goto L_08A4C178;
    case 31u: goto L_08A4C184;
    case 32u: goto L_08A4C194;
    case 33u: goto L_08A4C1A0;
    case 34u: goto L_08A4C1A8;
    case 35u: goto L_08A4C1B4;
    case 36u: goto L_08A4C1BC;
    case 37u: goto L_08A4C1D0;
    case 38u: goto L_08A4C1E8;
    case 39u: goto L_08A4C1F8;
    case 40u: goto L_08A4C210;
    case 41u: goto L_08A4C214;
    case 42u: goto L_08A4C21C;
    case 43u: goto L_08A4C234;
    case 44u: goto L_08A4C240;
    case 45u: goto L_08A4C24C;
    case 46u: goto L_08A4C254;
    case 47u: goto L_08A4C264;
    case 48u: goto L_08A4C27C;
    case 49u: goto L_08A4C298;
    case 50u: goto L_08A4C2AC;
    case 51u: goto L_08A4C2B4;
    case 52u: goto L_08A4C2CC;
    case 53u: goto L_08A4C2D4;
    case 54u: goto L_08A4C2F8;
    case 55u: goto L_08A4C304;
    case 56u: goto L_08A4C310;
    case 57u: goto L_08A4C318;
    case 58u: goto L_08A4C328;
    case 59u: goto L_08A4C340;
    case 60u: goto L_08A4C344;
    case 61u: goto L_08A4C34C;
    case 62u: goto L_08A4C364;
    case 63u: goto L_08A4C370;
    case 64u: goto L_08A4C37C;
    case 65u: goto L_08A4C384;
    case 66u: goto L_08A4C390;
    case 67u: goto L_08A4C3A0;
    case 68u: goto L_08A4C3A8;
    case 69u: goto L_08A4C3B4;
    case 70u: goto L_08A4C3BC;
    case 71u: goto L_08A4C3CC;
    case 72u: goto L_08A4C3E4;
    case 73u: goto L_08A4C3E8;
    case 74u: goto L_08A4C3F0;
    case 75u: goto L_08A4C408;
    case 76u: goto L_08A4C414;
    case 77u: goto L_08A4C420;
    case 78u: goto L_08A4C428;
    case 79u: goto L_08A4C434;
    case 80u: goto L_08A4C44C;
    case 81u: goto L_08A4C468;
    case 82u: goto L_08A4C470;
    case 83u: goto L_08A4C47C;
    case 84u: goto L_08A4C484;
    case 85u: goto L_08A4C490;
    case 86u: goto L_08A4C498;
    case 87u: goto L_08A4C4A8;
    case 88u: goto L_08A4C4C0;
    case 89u: goto L_08A4C4C4;
    case 90u: goto L_08A4C4CC;
    case 91u: goto L_08A4C4E4;
    case 92u: goto L_08A4C4F0;
    case 93u: goto L_08A4C4FC;
    case 94u: goto L_08A4C504;
    case 95u: goto L_08A4C510;
    case 96u: goto L_08A4C51C;
    case 97u: goto L_08A4C524;
    case 98u: goto L_08A4C530;
    case 99u: goto L_08A4C538;
    case 100u: goto L_08A4C540;
    case 101u: goto L_08A4C550;
    case 102u: goto L_08A4C568;
    case 103u: goto L_08A4C56C;
    case 104u: goto L_08A4C574;
    case 105u: goto L_08A4C58C;
    case 106u: goto L_08A4C598;
    case 107u: goto L_08A4C5A4;
    case 108u: goto L_08A4C5AC;
    case 109u: goto L_08A4C5B8;
    case 110u: goto L_08A4C5C4;
    case 111u: goto L_08A4C5D4;
    case 112u: goto L_08A4C5EC;
    case 113u: goto L_08A4C5F0;
    case 114u: goto L_08A4C5F8;
    case 115u: goto L_08A4C610;
    case 116u: goto L_08A4C61C;
    case 117u: goto L_08A4C628;
    case 118u: goto L_08A4C630;
    case 119u: goto L_08A4C63C;
    case 120u: goto L_08A4C64C;
    case 121u: goto L_08A4C65C;
    case 122u: goto L_08A4C674;
    case 123u: goto L_08A4C678;
    case 124u: goto L_08A4C680;
    case 125u: goto L_08A4C698;
    case 126u: goto L_08A4C6A4;
    case 127u: goto L_08A4C6B0;
    case 128u: goto L_08A4C6B8;
    case 129u: goto L_08A4C6BC;
    case 130u: goto L_08A4C6F0;
    case 131u: goto L_08A4C748;
    case 132u: goto L_08A4C754;
    case 133u: goto L_08A4C760;
    case 134u: goto L_08A4C76C;
    case 135u: goto L_08A4C784;
    case 136u: goto L_08A4C798;
    case 137u: goto L_08A4C7A8;
    case 138u: goto L_08A4C7B8;
    case 139u: goto L_08A4C7C0;
    case 140u: goto L_08A4C7CC;
    case 141u: goto L_08A4C7E0;
    case 142u: goto L_08A4C7F8;
    case 143u: goto L_08A4C814;
    case 144u: goto L_08A4C828;
    case 145u: goto L_08A4C830;
    case 146u: goto L_08A4C848;
    case 147u: goto L_08A4C850;
    case 148u: goto L_08A4C86C;
    case 149u: goto L_08A4C878;
    case 150u: goto L_08A4C884;
    case 151u: goto L_08A4C890;
    case 152u: goto L_08A4C8A0;
    case 153u: goto L_08A4C8AC;
    case 154u: goto L_08A4C8B8;
    case 155u: goto L_08A4C8C0;
    case 156u: goto L_08A4C8D0;
    case 157u: goto L_08A4C8E8;
    case 158u: goto L_08A4C8EC;
    case 159u: goto L_08A4C8F4;
    case 160u: goto L_08A4C90C;
    case 161u: goto L_08A4C918;
    case 162u: goto L_08A4C924;
    case 163u: goto L_08A4C92C;
    case 164u: goto L_08A4C938;
    case 165u: goto L_08A4C940;
    case 166u: goto L_08A4C94C;
    case 167u: goto L_08A4C958;
    case 168u: goto L_08A4C968;
    case 169u: goto L_08A4C978;
    case 170u: goto L_08A4C984;
    case 171u: goto L_08A4C990;
    case 172u: goto L_08A4C998;
    case 173u: goto L_08A4C9A8;
    case 174u: goto L_08A4C9C0;
    case 175u: goto L_08A4C9C4;
    case 176u: goto L_08A4C9CC;
    case 177u: goto L_08A4C9E4;
    case 178u: goto L_08A4C9F0;
    case 179u: goto L_08A4C9FC;
    case 180u: goto L_08A4CA04;
    case 181u: goto L_08A4CA10;
    case 182u: goto L_08A4CA18;
    case 183u: goto L_08A4CA24;
    case 184u: goto L_08A4CA34;
    case 185u: goto L_08A4CA48;
    case 186u: goto L_08A4CA64;
    case 187u: goto L_08A4CA70;
    case 188u: goto L_08A4CA78;
    case 189u: goto L_08A4CA80;
    case 190u: goto L_08A4CA8C;
    case 191u: goto L_08A4CA98;
    case 192u: goto L_08A4CAA8;
    case 193u: goto L_08A4CAB4;
    case 194u: goto L_08A4CABC;
    case 195u: goto L_08A4CAC4;
    case 196u: goto L_08A4CAD4;
    case 197u: goto L_08A4CAE8;
    case 198u: goto L_08A4CAF0;
    case 199u: goto L_08A4CB00;
    case 200u: goto L_08A4CB14;
    case 201u: goto L_08A4CB1C;
    case 202u: goto L_08A4CB34;
    case 203u: goto L_08A4CB44;
    case 204u: goto L_08A4CB5C;
    case 205u: goto L_08A4CB78;
    case 206u: goto L_08A4CB8C;
    case 207u: goto L_08A4CB94;
    case 208u: goto L_08A4CBAC;
    case 209u: goto L_08A4CBB0;
    case 210u: goto L_08A4CBB8;
    case 211u: goto L_08A4CBC0;
    case 212u: goto L_08A4CBCC;
    case 213u: goto L_08A4CBDC;
    case 214u: goto L_08A4CBE8;
    case 215u: goto L_08A4CBF8;
    case 216u: goto L_08A4CC10;
    case 217u: goto L_08A4CC14;
    case 218u: goto L_08A4CC1C;
    case 219u: goto L_08A4CC34;
    case 220u: goto L_08A4CC40;
    case 221u: goto L_08A4CC4C;
    case 222u: goto L_08A4CC54;
    case 223u: goto L_08A4CC60;
    case 224u: goto L_08A4CC68;
    case 225u: goto L_08A4CC74;
    case 226u: goto L_08A4CC88;
    case 227u: goto L_08A4CC90;
    case 228u: goto L_08A4CC9C;
    case 229u: goto L_08A4CCA8;
    case 230u: goto L_08A4CCC0;
    case 231u: goto L_08A4CCC8;
    case 232u: goto L_08A4CCDC;
    case 233u: goto L_08A4CCF8;
    case 234u: goto L_08A4CD0C;
    case 235u: goto L_08A4CD20;
    case 236u: goto L_08A4CD3C;
    case 237u: goto L_08A4CD50;
    case 238u: goto L_08A4CD68;
    case 239u: goto L_08A4CD7C;
    case 240u: goto L_08A4CDB4;
    case 241u: goto L_08A4CDC8;
    case 242u: goto L_08A4CDD0;
    case 243u: goto L_08A4CDF0;
    case 244u: goto L_08A4CE20;
    case 245u: goto L_08A4CE30;
    case 246u: goto L_08A4CE40;
    case 247u: goto L_08A4CE4C;
    case 248u: goto L_08A4CE58;
    case 249u: goto L_08A4CE60;
    case 250u: goto L_08A4CE6C;
    case 251u: goto L_08A4CE74;
    case 252u: goto L_08A4CE84;
    case 253u: goto L_08A4CE9C;
    case 254u: goto L_08A4CEA0;
    case 255u: goto L_08A4CEA8;
    case 256u: goto L_08A4CEC0;
    case 257u: goto L_08A4CECC;
    case 258u: goto L_08A4CED8;
    case 259u: goto L_08A4CEE0;
    case 260u: goto L_08A4CEEC;
    case 261u: goto L_08A4CEF4;
    case 262u: goto L_08A4CF00;
    case 263u: goto L_08A4CF08;
    case 264u: goto L_08A4CF14;
    case 265u: goto L_08A4CF24;
    case 266u: goto L_08A4CF30;
    case 267u: goto L_08A4CF38;
    case 268u: goto L_08A4CF44;
    case 269u: goto L_08A4CF4C;
    case 270u: goto L_08A4CF60;
    case 271u: goto L_08A4CF78;
    case 272u: goto L_08A4CF94;
    case 273u: goto L_08A4CFA0;
    case 274u: goto L_08A4CFA8;
    case 275u: goto L_08A4CFB0;
    case 276u: goto L_08A4CFBC;
    case 277u: goto L_08A4CFC8;
    case 278u: goto L_08A4CFD8;
    case 279u: goto L_08A4CFE4;
    case 280u: goto L_08A4CFEC;
    case 281u: goto L_08A4CFF4;
    case 282u: goto L_08A4D004;
    case 283u: goto L_08A4D01C;
    case 284u: goto L_08A4D034;
    case 285u: goto L_08A4D038;
    case 286u: goto L_08A4D040;
    case 287u: goto L_08A4D058;
    case 288u: goto L_08A4D064;
    case 289u: goto L_08A4D08C;
    case 290u: goto L_08A4D0CC;
    case 291u: goto L_08A4D0D8;
    case 292u: goto L_08A4D0E8;
    case 293u: goto L_08A4D100;
    case 294u: goto L_08A4D104;
    case 295u: goto L_08A4D10C;
    case 296u: goto L_08A4D124;
    case 297u: goto L_08A4D130;
    case 298u: goto L_08A4D138;
    case 299u: goto L_08A4D160;
    case 300u: goto L_08A4D170;
    case 301u: goto L_08A4D188;
    case 302u: goto L_08A4D18C;
    case 303u: goto L_08A4D194;
    case 304u: goto L_08A4D1AC;
    case 305u: goto L_08A4D1B8;
    case 306u: goto L_08A4D1D4;
    case 307u: goto L_08A4D1D8;
    case 308u: goto L_08A4D1E8;
    case 309u: goto L_08A4D1FC;
    case 310u: goto L_08A4D208;
    case 311u: goto L_08A4D210;
    case 312u: goto L_08A4D224;
    case 313u: goto L_08A4D22C;
    case 314u: goto L_08A4D248;
    case 315u: goto L_08A4D27C;
    case 316u: goto L_08A4D288;
    case 317u: goto L_08A4D298;
    case 318u: goto L_08A4D2A4;
    case 319u: goto L_08A4D2B0;
    case 320u: goto L_08A4D2B8;
    case 321u: goto L_08A4D2C4;
    case 322u: goto L_08A4D2CC;
    case 323u: goto L_08A4D2D8;
    case 324u: goto L_08A4D2E0;
    case 325u: goto L_08A4D2F0;
    case 326u: goto L_08A4D308;
    case 327u: goto L_08A4D30C;
    case 328u: goto L_08A4D314;
    case 329u: goto L_08A4D32C;
    case 330u: goto L_08A4D338;
    case 331u: goto L_08A4D344;
    case 332u: goto L_08A4D34C;
    case 333u: goto L_08A4D358;
    case 334u: goto L_08A4D360;
    case 335u: goto L_08A4D36C;
    case 336u: goto L_08A4D378;
    case 337u: goto L_08A4D380;
    case 338u: goto L_08A4D38C;
    case 339u: goto L_08A4D39C;
    case 340u: goto L_08A4D3A8;
    case 341u: goto L_08A4D3B0;
    case 342u: goto L_08A4D3BC;
    case 343u: goto L_08A4D3C4;
    case 344u: goto L_08A4D3D8;
    case 345u: goto L_08A4D3F0;
    case 346u: goto L_08A4D40C;
    case 347u: goto L_08A4D418;
    case 348u: goto L_08A4D420;
    case 349u: goto L_08A4D428;
    case 350u: goto L_08A4D434;
    case 351u: goto L_08A4D440;
    case 352u: goto L_08A4D450;
    case 353u: goto L_08A4D45C;
    case 354u: goto L_08A4D464;
    case 355u: goto L_08A4D46C;
    case 356u: goto L_08A4D47C;
    case 357u: goto L_08A4D494;
    case 358u: goto L_08A4D4AC;
    case 359u: goto L_08A4D4B0;
    case 360u: goto L_08A4D4B8;
    case 361u: goto L_08A4D4D0;
    case 362u: goto L_08A4D4DC;
    case 363u: goto L_08A4D4E8;
    case 364u: goto L_08A4D4F0;
    case 365u: goto L_08A4D4F8;
    case 366u: goto L_08A4D504;
    case 367u: goto L_08A4D50C;
    case 368u: goto L_08A4D530;
    case 369u: goto L_08A4D544;
    case 370u: goto L_08A4D574;
    case 371u: goto L_08A4D580;
    case 372u: goto L_08A4D588;
    case 373u: goto L_08A4D5A4;
    case 374u: goto L_08A4D5AC;
    case 375u: goto L_08A4D5B8;
    case 376u: goto L_08A4D5C0;
    case 377u: goto L_08A4D5E0;
    case 378u: goto L_08A4D5EC;
    case 379u: goto L_08A4D5F8;
    case 380u: goto L_08A4D608;
    case 381u: goto L_08A4D614;
    case 382u: goto L_08A4D61C;
    case 383u: goto L_08A4D628;
    case 384u: goto L_08A4D630;
    case 385u: goto L_08A4D638;
    case 386u: goto L_08A4D658;
    case 387u: goto L_08A4D664;
    case 388u: goto L_08A4D674;
    case 389u: goto L_08A4D680;
    case 390u: goto L_08A4D68C;
    case 391u: goto L_08A4D694;
    case 392u: goto L_08A4D6A4;
    case 393u: goto L_08A4D6BC;
    case 394u: goto L_08A4D6C0;
    case 395u: goto L_08A4D6C8;
    case 396u: goto L_08A4D6E0;
    case 397u: goto L_08A4D6EC;
    case 398u: goto L_08A4D6F8;
    case 399u: goto L_08A4D700;
    case 400u: goto L_08A4D70C;
    case 401u: goto L_08A4D714;
    case 402u: goto L_08A4D720;
    case 403u: goto L_08A4D72C;
    case 404u: goto L_08A4D73C;
    case 405u: goto L_08A4D74C;
    case 406u: goto L_08A4D758;
    case 407u: goto L_08A4D764;
    case 408u: goto L_08A4D76C;
    case 409u: goto L_08A4D77C;
    case 410u: goto L_08A4D794;
    case 411u: goto L_08A4D798;
    case 412u: goto L_08A4D7A0;
    case 413u: goto L_08A4D7B8;
    case 414u: goto L_08A4D7C4;
    case 415u: goto L_08A4D7D0;
    case 416u: goto L_08A4D7D8;
    case 417u: goto L_08A4D7E4;
    case 418u: goto L_08A4D7EC;
    case 419u: goto L_08A4D7F8;
    case 420u: goto L_08A4D808;
    case 421u: goto L_08A4D81C;
    case 422u: goto L_08A4D838;
    case 423u: goto L_08A4D844;
    case 424u: goto L_08A4D84C;
    case 425u: goto L_08A4D854;
    case 426u: goto L_08A4D860;
    case 427u: goto L_08A4D86C;
    case 428u: goto L_08A4D87C;
    case 429u: goto L_08A4D888;
    case 430u: goto L_08A4D890;
    case 431u: goto L_08A4D898;
    case 432u: goto L_08A4D8A8;
    case 433u: goto L_08A4D8BC;
    case 434u: goto L_08A4D8C4;
    case 435u: goto L_08A4D8D4;
    case 436u: goto L_08A4D8EC;
    case 437u: goto L_08A4D908;
    case 438u: goto L_08A4D91C;
    case 439u: goto L_08A4D924;
    case 440u: goto L_08A4D93C;
    case 441u: goto L_08A4D944;
    case 442u: goto L_08A4D954;
    case 443u: goto L_08A4D960;
    case 444u: goto L_08A4D970;
    case 445u: goto L_08A4D988;
    case 446u: goto L_08A4D98C;
    case 447u: goto L_08A4D994;
    case 448u: goto L_08A4D9AC;
    case 449u: goto L_08A4D9B8;
    case 450u: goto L_08A4D9C4;
    case 451u: goto L_08A4D9CC;
    case 452u: goto L_08A4D9D8;
    case 453u: goto L_08A4D9E0;
    case 454u: goto L_08A4D9EC;
    case 455u: goto L_08A4D9FC;
    case 456u: goto L_08A4DA14;
    case 457u: goto L_08A4DA30;
    case 458u: goto L_08A4DA44;
    case 459u: goto L_08A4DA4C;
    case 460u: goto L_08A4DA64;
    case 461u: goto L_08A4DA6C;
    case 462u: goto L_08A4DA78;
    case 463u: goto L_08A4DA88;
    case 464u: goto L_08A4DA94;
    case 465u: goto L_08A4DAA4;
    case 466u: goto L_08A4DABC;
    case 467u: goto L_08A4DAC0;
    case 468u: goto L_08A4DAC8;
    case 469u: goto L_08A4DAE0;
    case 470u: goto L_08A4DAEC;
    case 471u: goto L_08A4DAF8;
    case 472u: goto L_08A4DB00;
    case 473u: goto L_08A4DB0C;
    case 474u: goto L_08A4DB14;
    case 475u: goto L_08A4DB20;
    case 476u: goto L_08A4DB40;
    case 477u: goto L_08A4DB4C;
    case 478u: goto L_08A4DB5C;
    case 479u: goto L_08A4DB68;
    case 480u: goto L_08A4DB74;
    case 481u: goto L_08A4DB7C;
    case 482u: goto L_08A4DB8C;
    case 483u: goto L_08A4DBA4;
    case 484u: goto L_08A4DBA8;
    case 485u: goto L_08A4DBB0;
    case 486u: goto L_08A4DBC8;
    case 487u: goto L_08A4DBD4;
    case 488u: goto L_08A4DBE0;
    case 489u: goto L_08A4DBE8;
    case 490u: goto L_08A4DBF4;
    case 491u: goto L_08A4DBFC;
    case 492u: goto L_08A4DC08;
    case 493u: goto L_08A4DC18;
    case 494u: goto L_08A4DC20;
    case 495u: goto L_08A4DC30;
    case 496u: goto L_08A4DC3C;
    case 497u: goto L_08A4DC48;
    case 498u: goto L_08A4DC50;
    case 499u: goto L_08A4DC60;
    case 500u: goto L_08A4DC78;
    case 501u: goto L_08A4DC7C;
    case 502u: goto L_08A4DC84;
    case 503u: goto L_08A4DC9C;
    case 504u: goto L_08A4DCA8;
    case 505u: goto L_08A4DCB4;
    case 506u: goto L_08A4DCBC;
    case 507u: goto L_08A4DCC8;
    case 508u: goto L_08A4DCD0;
    case 509u: goto L_08A4DCDC;
    case 510u: goto L_08A4DCF4;
    case 511u: goto L_08A4DD04;
    case 512u: goto L_08A4DD14;
    case 513u: goto L_08A4DD24;
    case 514u: goto L_08A4DD30;
    case 515u: goto L_08A4DD3C;
    case 516u: goto L_08A4DD44;
    case 517u: goto L_08A4DD50;
    case 518u: goto L_08A4DD58;
    case 519u: goto L_08A4DD68;
    case 520u: goto L_08A4DD80;
    case 521u: goto L_08A4DD84;
    case 522u: goto L_08A4DD8C;
    case 523u: goto L_08A4DDA4;
    case 524u: goto L_08A4DDB0;
    case 525u: goto L_08A4DDBC;
    case 526u: goto L_08A4DDC4;
    case 527u: goto L_08A4DDD0;
    case 528u: goto L_08A4DDD8;
    case 529u: goto L_08A4DDE4;
    case 530u: goto L_08A4DDF4;
    case 531u: goto L_08A4DE08;
    case 532u: goto L_08A4DE24;
    case 533u: goto L_08A4DE30;
    case 534u: goto L_08A4DE38;
    case 535u: goto L_08A4DE40;
    case 536u: goto L_08A4DE4C;
    case 537u: goto L_08A4DE58;
    case 538u: goto L_08A4DE68;
    case 539u: goto L_08A4DE74;
    case 540u: goto L_08A4DE7C;
    case 541u: goto L_08A4DE84;
    case 542u: goto L_08A4DE94;
    case 543u: goto L_08A4DEA8;
    case 544u: goto L_08A4DEB0;
    case 545u: goto L_08A4DEBC;
    case 546u: goto L_08A4DEC4;
    case 547u: goto L_08A4DED4;
    case 548u: goto L_08A4DEE0;
    case 549u: goto L_08A4DEF0;
    case 550u: goto L_08A4DF08;
    case 551u: goto L_08A4DF0C;
    case 552u: goto L_08A4DF14;
    case 553u: goto L_08A4DF2C;
    case 554u: goto L_08A4DF38;
    case 555u: goto L_08A4DF44;
    case 556u: goto L_08A4DF4C;
    case 557u: goto L_08A4DF58;
    case 558u: goto L_08A4DF60;
    case 559u: goto L_08A4DF64;
    case 560u: goto L_08A4DF98;
    case 561u: goto L_08A4DFA4;
    case 562u: goto L_08A4DFF0;
    case 563u: goto L_08A4E000;
    case 564u: goto L_08A4E010;
    case 565u: goto L_08A4E01C;
    case 566u: goto L_08A4E024;
    case 567u: goto L_08A4E04C;
    case 568u: goto L_08A4E058;
    case 569u: goto L_08A4E068;
    case 570u: goto L_08A4E074;
    case 571u: goto L_08A4E084;
    case 572u: goto L_08A4E09C;
    case 573u: goto L_08A4E0A0;
    case 574u: goto L_08A4E0A8;
    case 575u: goto L_08A4E0C0;
    case 576u: goto L_08A4E0CC;
    case 577u: goto L_08A4E0D8;
    case 578u: goto L_08A4E0EC;
    case 579u: goto L_08A4E0F8;
    case 580u: goto L_08A4E108;
    case 581u: goto L_08A4E114;
    case 582u: goto L_08A4E124;
    case 583u: goto L_08A4E13C;
    case 584u: goto L_08A4E140;
    case 585u: goto L_08A4E148;
    case 586u: goto L_08A4E160;
    case 587u: goto L_08A4E16C;
    case 588u: goto L_08A4E178;
    case 589u: goto L_08A4E1AC;
    case 590u: goto L_08A4E1B8;
    case 591u: goto L_08A4E1D0;
    case 592u: goto L_08A4E1E0;
    case 593u: goto L_08A4E1EC;
    case 594u: goto L_08A4E200;
    case 595u: goto L_08A4E208;
    case 596u: goto L_08A4E214;
    case 597u: goto L_08A4E220;
    case 598u: goto L_08A4E230;
    case 599u: goto L_08A4E248;
    case 600u: goto L_08A4E24C;
    case 601u: goto L_08A4E254;
    case 602u: goto L_08A4E26C;
    case 603u: goto L_08A4E278;
    case 604u: goto L_08A4E284;
    case 605u: goto L_08A4E298;
    case 606u: goto L_08A4E2A4;
    case 607u: goto L_08A4E2B4;
    case 608u: goto L_08A4E2C0;
    case 609u: goto L_08A4E2CC;
    case 610u: goto L_08A4E2D4;
    case 611u: goto L_08A4E2E4;
    case 612u: goto L_08A4E2FC;
    case 613u: goto L_08A4E300;
    case 614u: goto L_08A4E308;
    case 615u: goto L_08A4E320;
    case 616u: goto L_08A4E32C;
    case 617u: goto L_08A4E338;
    case 618u: goto L_08A4E344;
    case 619u: goto L_08A4E350;
    case 620u: goto L_08A4E374;
    case 621u: goto L_08A4E388;
    case 622u: goto L_08A4E3B4;
    case 623u: goto L_08A4E3BC;
    case 624u: goto L_08A4E3CC;
    case 625u: goto L_08A4E3D8;
    case 626u: goto L_08A4E3E4;
    case 627u: goto L_08A4E3EC;
    case 628u: goto L_08A4E3F8;
    case 629u: goto L_08A4E400;
    case 630u: goto L_08A4E410;
    case 631u: goto L_08A4E428;
    case 632u: goto L_08A4E42C;
    case 633u: goto L_08A4E434;
    case 634u: goto L_08A4E44C;
    case 635u: goto L_08A4E458;
    case 636u: goto L_08A4E464;
    case 637u: goto L_08A4E484;
    case 638u: goto L_08A4E48C;
    case 639u: goto L_08A4E49C;
    case 640u: goto L_08A4E4A8;
    case 641u: goto L_08A4E4B4;
    case 642u: goto L_08A4E4BC;
    case 643u: goto L_08A4E4C8;
    case 644u: goto L_08A4E4D0;
    case 645u: goto L_08A4E4E0;
    case 646u: goto L_08A4E4F8;
    case 647u: goto L_08A4E4FC;
    case 648u: goto L_08A4E504;
    case 649u: goto L_08A4E51C;
    case 650u: goto L_08A4E528;
    case 651u: goto L_08A4E534;
    case 652u: goto L_08A4E538;
    case 653u: goto L_08A4E544;
    case 654u: goto L_08A4E550;
    case 655u: goto L_08A4E568;
    case 656u: goto L_08A4E57C;
    case 657u: goto L_08A4E58C;
    case 658u: goto L_08A4E598;
    case 659u: goto L_08A4E5A4;
    case 660u: goto L_08A4E5AC;
    case 661u: goto L_08A4E5B8;
    case 662u: goto L_08A4E5C0;
    case 663u: goto L_08A4E5D0;
    case 664u: goto L_08A4E5E8;
    case 665u: goto L_08A4E5EC;
    case 666u: goto L_08A4E5F4;
    case 667u: goto L_08A4E60C;
    case 668u: goto L_08A4E618;
    case 669u: goto L_08A4E61C;
    case 670u: goto L_08A4E64C;
    case 671u: goto L_08A4E694;
    case 672u: goto L_08A4E6C0;
    case 673u: goto L_08A4E6D8;
    case 674u: goto L_08A4E6DC;
    case 675u: goto L_08A4E6E4;
    case 676u: goto L_08A4E6F0;
    case 677u: goto L_08A4E704;
    case 678u: goto L_08A4E710;
    case 679u: goto L_08A4E730;
    case 680u: goto L_08A4E748;
    case 681u: goto L_08A4E74C;
    case 682u: goto L_08A4E754;
    case 683u: goto L_08A4E760;
    case 684u: goto L_08A4E780;
    case 685u: goto L_08A4E790;
    case 686u: goto L_08A4E79C;
    case 687u: goto L_08A4E7B0;
    case 688u: goto L_08A4E7B8;
    case 689u: goto L_08A4E7C0;
    case 690u: goto L_08A4E7C4;
    case 691u: goto L_08A4E7CC;
    case 692u: goto L_08A4E7DC;
    case 693u: goto L_08A4E7E4;
    case 694u: goto L_08A4E7F8;
    case 695u: goto L_08A4E808;
    case 696u: goto L_08A4E820;
    case 697u: goto L_08A4E824;
    case 698u: goto L_08A4E82C;
    case 699u: goto L_08A4E844;
    case 700u: goto L_08A4E850;
    case 701u: goto L_08A4E860;
    case 702u: goto L_08A4E878;
    case 703u: goto L_08A4E87C;
    case 704u: goto L_08A4E884;
    case 705u: goto L_08A4E89C;
    case 706u: goto L_08A4E8A8;
    case 707u: goto L_08A4E8AC;
    case 708u: goto L_08A4E8BC;
    case 709u: goto L_08A4E8EC;
    case 710u: goto L_08A4E8FC;
    case 711u: goto L_08A4E924;
    case 712u: goto L_08A4E930;
    case 713u: goto L_08A4E940;
    case 714u: goto L_08A4E950;
    case 715u: goto L_08A4E95C;
    case 716u: goto L_08A4E96C;
    case 717u: goto L_08A4E974;
    case 718u: goto L_08A4E98C;
    case 719u: goto L_08A4E99C;
    case 720u: goto L_08A4E9A4;
    case 721u: goto L_08A4E9B4;
    case 722u: goto L_08A4E9CC;
    case 723u: goto L_08A4E9D4;
    case 724u: goto L_08A4E9DC;
    case 725u: goto L_08A4E9EC;
    case 726u: goto L_08A4E9F4;
    case 727u: goto L_08A4EA0C;
    case 728u: goto L_08A4EA1C;
    case 729u: goto L_08A4EA24;
    case 730u: goto L_08A4EA34;
    case 731u: goto L_08A4EA4C;
    case 732u: goto L_08A4EA54;
    case 733u: goto L_08A4EA5C;
    case 734u: goto L_08A4EA6C;
    case 735u: goto L_08A4EA74;
    case 736u: goto L_08A4EA88;
    case 737u: goto L_08A4EA98;
    case 738u: goto L_08A4EAA0;
    case 739u: goto L_08A4EAB0;
    case 740u: goto L_08A4EAC8;
    case 741u: goto L_08A4EACC;
    case 742u: goto L_08A4EAD8;
    case 743u: goto L_08A4EAE4;
    case 744u: goto L_08A4EAF0;
    case 745u: goto L_08A4EAF8;
    case 746u: goto L_08A4EB18;
    case 747u: goto L_08A4EB60;
    case 748u: goto L_08A4EB6C;
    case 749u: goto L_08A4EB80;
    case 750u: goto L_08A4EB94;
    case 751u: goto L_08A4EBAC;
    case 752u: goto L_08A4EBB8;
    case 753u: goto L_08A4EBC0;
    case 754u: goto L_08A4EBE4;
    case 755u: goto L_08A4EC14;
    case 756u: goto L_08A4EC20;
    case 757u: goto L_08A4EC30;
    case 758u: goto L_08A4EC44;
    case 759u: goto L_08A4EC60;
    case 760u: goto L_08A4ECB0;
    case 761u: goto L_08A4ECC4;
    case 762u: goto L_08A4ECDC;
    case 763u: goto L_08A4ECEC;
    case 764u: goto L_08A4ECF8;
    case 765u: goto L_08A4ED08;
    case 766u: goto L_08A4ED1C;
    case 767u: goto L_08A4ED3C;
    case 768u: goto L_08A4ED5C;
    case 769u: goto L_08A4ED84;
    case 770u: goto L_08A4ED90;
    case 771u: goto L_08A4EDA0;
    case 772u: goto L_08A4EDB8;
    case 773u: goto L_08A4EDBC;
    case 774u: goto L_08A4EDC4;
    case 775u: goto L_08A4EDDC;
    case 776u: goto L_08A4EDE8;
    case 777u: goto L_08A4EDF8;
    case 778u: goto L_08A4EE10;
    case 779u: goto L_08A4EE14;
    case 780u: goto L_08A4EE1C;
    case 781u: goto L_08A4EE34;
    case 782u: goto L_08A4EE40;
    case 783u: goto L_08A4EE4C;
    case 784u: goto L_08A4EE68;
    case 785u: goto L_08A4EE78;
    case 786u: goto L_08A4EE88;
    case 787u: goto L_08A4EEA0;
    case 788u: goto L_08A4EEA4;
    case 789u: goto L_08A4EEAC;
    case 790u: goto L_08A4EEC4;
    case 791u: goto L_08A4EED0;
    case 792u: goto L_08A4EEE0;
    case 793u: goto L_08A4EEF8;
    case 794u: goto L_08A4EEFC;
    case 795u: goto L_08A4EF04;
    case 796u: goto L_08A4EF1C;
    case 797u: goto L_08A4EF28;
    case 798u: goto L_08A4EF34;
    case 799u: goto L_08A4EF40;
    case 800u: goto L_08A4EF4C;
    case 801u: goto L_08A4EF70;
    case 802u: goto L_08A4EF7C;
    case 803u: goto L_08A4EF88;
    case 804u: goto L_08A4EF90;
    case 805u: goto L_08A4EFA0;
    case 806u: goto L_08A4EFB8;
    case 807u: goto L_08A4EFBC;
    case 808u: goto L_08A4EFC4;
    case 809u: goto L_08A4EFDC;
    case 810u: goto L_08A4EFE8;
    case 811u: goto L_08A4EFF8;
    case 812u: goto L_08A4F010;
    case 813u: goto L_08A4F014;
    case 814u: goto L_08A4F01C;
    case 815u: goto L_08A4F034;
    case 816u: goto L_08A4F040;
    case 817u: goto L_08A4F04C;
    case 818u: goto L_08A4F060;
    case 819u: goto L_08A4F06C;
    case 820u: goto L_08A4F07C;
    case 821u: goto L_08A4F088;
    case 822u: goto L_08A4F0B8;
    case 823u: goto L_08A4F0C4;
    case 824u: goto L_08A4F0E0;
    case 825u: goto L_08A4F104;
    case 826u: goto L_08A4F114;
    case 827u: goto L_08A4F120;
    case 828u: goto L_08A4F130;
    case 829u: goto L_08A4F13C;
    case 830u: goto L_08A4F144;
    case 831u: goto L_08A4F150;
    case 832u: goto L_08A4F158;
    case 833u: goto L_08A4F164;
    case 834u: goto L_08A4F170;
    case 835u: goto L_08A4F194;
    case 836u: goto L_08A4F1A0;
    case 837u: goto L_08A4F1AC;
    case 838u: goto L_08A4F1BC;
    case 839u: goto L_08A4F1C8;
    case 840u: goto L_08A4F1D4;
    case 841u: goto L_08A4F1F0;
    case 842u: goto L_08A4F208;
    case 843u: goto L_08A4F224;
    case 844u: goto L_08A4F234;
    case 845u: goto L_08A4F248;
    case 846u: goto L_08A4F250;
    case 847u: goto L_08A4F268;
    case 848u: goto L_08A4F274;
    case 849u: goto L_08A4F294;
    case 850u: goto L_08A4F2AC;
    case 851u: goto L_08A4F2C8;
    case 852u: goto L_08A4F2D8;
    case 853u: goto L_08A4F2EC;
    case 854u: goto L_08A4F2F4;
    case 855u: goto L_08A4F30C;
    case 856u: goto L_08A4F310;
    case 857u: goto L_08A4F318;
    case 858u: goto L_08A4F328;
    case 859u: goto L_08A4F330;
    case 860u: goto L_08A4F338;
    case 861u: goto L_08A4F344;
    case 862u: goto L_08A4F354;
    case 863u: goto L_08A4F360;
    case 864u: goto L_08A4F368;
    case 865u: goto L_08A4F374;
    case 866u: goto L_08A4F37C;
    case 867u: goto L_08A4F390;
    case 868u: goto L_08A4F3AC;
    case 869u: goto L_08A4F3C8;
    case 870u: goto L_08A4F3D4;
    case 871u: goto L_08A4F3DC;
    case 872u: goto L_08A4F3E4;
    case 873u: goto L_08A4F3F0;
    case 874u: goto L_08A4F3FC;
    case 875u: goto L_08A4F40C;
    case 876u: goto L_08A4F418;
    case 877u: goto L_08A4F420;
    case 878u: goto L_08A4F428;
    case 879u: goto L_08A4F438;
    case 880u: goto L_08A4F450;
    case 881u: goto L_08A4F468;
    case 882u: goto L_08A4F46C;
    case 883u: goto L_08A4F474;
    case 884u: goto L_08A4F48C;
    case 885u: goto L_08A4F498;
    case 886u: goto L_08A4F4B8;
    case 887u: goto L_08A4F4D4;
    case 888u: goto L_08A4F4E0;
    case 889u: goto L_08A4F4E8;
    case 890u: goto L_08A4F4F0;
    case 891u: goto L_08A4F4FC;
    case 892u: goto L_08A4F508;
    case 893u: goto L_08A4F518;
    case 894u: goto L_08A4F524;
    case 895u: goto L_08A4F52C;
    case 896u: goto L_08A4F534;
    case 897u: goto L_08A4F544;
    case 898u: goto L_08A4F54C;
    case 899u: goto L_08A4F564;
    case 900u: goto L_08A4F57C;
    case 901u: goto L_08A4F580;
    case 902u: goto L_08A4F588;
    case 903u: goto L_08A4F5A0;
    case 904u: goto L_08A4F5AC;
    case 905u: goto L_08A4F5BC;
    case 906u: goto L_08A4F5D0;
    case 907u: goto L_08A4F5E0;
    case 908u: goto L_08A4F5EC;
    case 909u: goto L_08A4F5F4;
    case 910u: goto L_08A4F600;
    case 911u: goto L_08A4F608;
    case 912u: goto L_08A4F614;
    case 913u: goto L_08A4F61C;
    case 914u: goto L_08A4F628;
    case 915u: goto L_08A4F634;
    case 916u: goto L_08A4F644;
    case 917u: goto L_08A4F66C;
    case 918u: goto L_08A4F674;
    case 919u: goto L_08A4F68C;
    case 920u: goto L_08A4F6A4;
    case 921u: goto L_08A4F6BC;
    case 922u: goto L_08A4F6C8;
    case 923u: goto L_08A4F6D4;
    case 924u: goto L_08A4F6E4;
    case 925u: goto L_08A4F6F8;
    case 926u: goto L_08A4F724;
    case 927u: goto L_08A4F734;
    case 928u: goto L_08A4F740;
    case 929u: goto L_08A4F748;
    case 930u: goto L_08A4F754;
    case 931u: goto L_08A4F75C;
    case 932u: goto L_08A4F768;
    case 933u: goto L_08A4F770;
    case 934u: goto L_08A4F77C;
    case 935u: goto L_08A4F784;
    case 936u: goto L_08A4F794;
    case 937u: goto L_08A4F7AC;
    case 938u: goto L_08A4F7B0;
    case 939u: goto L_08A4F7B8;
    case 940u: goto L_08A4F7D0;
    case 941u: goto L_08A4F7DC;
    case 942u: goto L_08A4F7E8;
    case 943u: goto L_08A4F7F0;
    case 944u: goto L_08A4F800;
    case 945u: goto L_08A4F818;
    case 946u: goto L_08A4F81C;
    case 947u: goto L_08A4F824;
    case 948u: goto L_08A4F83C;
    case 949u: goto L_08A4F848;
    case 950u: goto L_08A4F858;
    case 951u: goto L_08A4F870;
    case 952u: goto L_08A4F874;
    case 953u: goto L_08A4F87C;
    case 954u: goto L_08A4F894;
    case 955u: goto L_08A4F8A0;
    case 956u: goto L_08A4F8AC;
    case 957u: goto L_08A4F8BC;
    case 958u: goto L_08A4F8C8;
    case 959u: goto L_08A4F8D8;
    case 960u: goto L_08A4F8E4;
    case 961u: goto L_08A4F8F4;
    case 962u: goto L_08A4F900;
    case 963u: goto L_08A4F914;
    case 964u: goto L_08A4F920;
    case 965u: goto L_08A4F948;
    case 966u: goto L_08A4F958;
    case 967u: goto L_08A4F964;
    case 968u: goto L_08A4F96C;
    case 969u: goto L_08A4F978;
    case 970u: goto L_08A4F980;
    case 971u: goto L_08A4F994;
    case 972u: goto L_08A4F99C;
    case 973u: goto L_08A4F9A4;
    case 974u: goto L_08A4F9A8;
    case 975u: goto L_08A4F9B8;
    case 976u: goto L_08A4F9D8;
    case 977u: goto L_08A4FA00;
    case 978u: goto L_08A4FA10;
    case 979u: goto L_08A4FA1C;
    case 980u: goto L_08A4FA24;
    case 981u: goto L_08A4FA30;
    case 982u: goto L_08A4FA3C;
    case 983u: goto L_08A4FA44;
    case 984u: goto L_08A4FA50;
    case 985u: goto L_08A4FA58;
    case 986u: goto L_08A4FA64;
    case 987u: goto L_08A4FA6C;
    case 988u: goto L_08A4FA78;
    case 989u: goto L_08A4FA80;
    case 990u: goto L_08A4FA8C;
    case 991u: goto L_08A4FA94;
    case 992u: goto L_08A4FAA0;
    case 993u: goto L_08A4FAA8;
    case 994u: goto L_08A4FAB4;
    case 995u: goto L_08A4FABC;
    case 996u: goto L_08A4FAC8;
    case 997u: goto L_08A4FAD0;
    case 998u: goto L_08A4FAE0;
    case 999u: goto L_08A4FAF8;
    case 1000u: goto L_08A4FAFC;
    case 1001u: goto L_08A4FB04;
    case 1002u: goto L_08A4FB1C;
    case 1003u: goto L_08A4FB28;
    case 1004u: goto L_08A4FB34;
    case 1005u: goto L_08A4FB3C;
    case 1006u: goto L_08A4FB4C;
    case 1007u: goto L_08A4FB64;
    case 1008u: goto L_08A4FB68;
    case 1009u: goto L_08A4FB70;
    case 1010u: goto L_08A4FB88;
    case 1011u: goto L_08A4FB94;
    case 1012u: goto L_08A4FBA4;
    case 1013u: goto L_08A4FBBC;
    case 1014u: goto L_08A4FBC0;
    case 1015u: goto L_08A4FBC8;
    case 1016u: goto L_08A4FBE0;
    case 1017u: goto L_08A4FBEC;
    case 1018u: goto L_08A4FBF8;
    case 1019u: goto L_08A4FC00;
    case 1020u: goto L_08A4FC14;
    case 1021u: goto L_08A4FC1C;
    case 1022u: goto L_08A4FC24;
    case 1023u: goto L_08A4FC28;
    case 1024u: goto L_08A4FC38;
    case 1025u: goto L_08A4FC58;
    case 1026u: goto L_08A4FC60;
    case 1027u: goto L_08A4FC88;
    case 1028u: goto L_08A4FC98;
    case 1029u: goto L_08A4FCA4;
    case 1030u: goto L_08A4FCAC;
    case 1031u: goto L_08A4FCB8;
    case 1032u: goto L_08A4FCC4;
    case 1033u: goto L_08A4FCCC;
    case 1034u: goto L_08A4FCD8;
    case 1035u: goto L_08A4FCE0;
    case 1036u: goto L_08A4FCEC;
    case 1037u: goto L_08A4FCF4;
    case 1038u: goto L_08A4FD00;
    case 1039u: goto L_08A4FD08;
    case 1040u: goto L_08A4FD14;
    case 1041u: goto L_08A4FD1C;
    case 1042u: goto L_08A4FD28;
    case 1043u: goto L_08A4FD30;
    case 1044u: goto L_08A4FD3C;
    case 1045u: goto L_08A4FD44;
    case 1046u: goto L_08A4FD50;
    case 1047u: goto L_08A4FD58;
    case 1048u: goto L_08A4FD68;
    case 1049u: goto L_08A4FD80;
    case 1050u: goto L_08A4FD84;
    case 1051u: goto L_08A4FD8C;
    case 1052u: goto L_08A4FDA4;
    case 1053u: goto L_08A4FDB0;
    case 1054u: goto L_08A4FDBC;
    case 1055u: goto L_08A4FDC4;
    case 1056u: goto L_08A4FDD4;
    case 1057u: goto L_08A4FDEC;
    case 1058u: goto L_08A4FDF0;
    case 1059u: goto L_08A4FDF8;
    case 1060u: goto L_08A4FE10;
    case 1061u: goto L_08A4FE1C;
    case 1062u: goto L_08A4FE2C;
    case 1063u: goto L_08A4FE44;
    case 1064u: goto L_08A4FE48;
    case 1065u: goto L_08A4FE50;
    case 1066u: goto L_08A4FE68;
    case 1067u: goto L_08A4FE74;
    case 1068u: goto L_08A4FE80;
    case 1069u: goto L_08A4FE88;
    case 1070u: goto L_08A4FE9C;
    case 1071u: goto L_08A4FEA4;
    case 1072u: goto L_08A4FEAC;
    case 1073u: goto L_08A4FEB0;
    case 1074u: goto L_08A4FEC0;
    case 1075u: goto L_08A4FED0;
    case 1076u: goto L_08A4FEF0;
    case 1077u: goto L_08A4FF18;
    case 1078u: goto L_08A4FF28;
    case 1079u: goto L_08A4FF34;
    case 1080u: goto L_08A4FF3C;
    case 1081u: goto L_08A4FF48;
    case 1082u: goto L_08A4FF50;
    case 1083u: goto L_08A4FF64;
    case 1084u: goto L_08A4FF6C;
    case 1085u: goto L_08A4FF74;
    case 1086u: goto L_08A4FF78;
    case 1087u: goto L_08A4FF88;
    case 1088u: goto L_08A4FFA8;
    case 1089u: goto L_08A4FFBC;
    case 1090u: goto L_08A4FFD0;
    case 1091u: goto L_08A4FFE4;
    case 1092u: goto L_08A4FFF0;
    case 1093u: goto L_08A4FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A4C000:
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4C00Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x08A4C00Cu) goto L_08A4C00C;
    return;
L_08A4C00C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C254;
      }
      goto L_08A4C014;
    }
L_08A4C014:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27072)));
    ctx.set_gpr(31, 0x08A4C028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C028u) goto L_08A4C028;
    return;
L_08A4C028:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C0A8;
      }
      goto L_08A4C030;
    }
L_08A4C030:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C05C;
      }
      goto L_08A4C040;
    }
L_08A4C040:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C05C;
      }
      goto L_08A4C058;
    }
L_08A4C058:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4C05C;
L_08A4C05C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C088;
      }
      goto L_08A4C064;
    }
L_08A4C064:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C088;
      }
      goto L_08A4C07C;
    }
L_08A4C07C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4C088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C088u) goto L_08A4C088;
    return;
L_08A4C088:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C09C;
      }
      goto L_08A4C094;
    }
L_08A4C094:
    ctx.set_gpr(31, 0x08A4C09Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4C09Cu) goto L_08A4C09C;
    return;
L_08A4C09C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C6BC;
      }
      goto L_08A4C0A8;
    }
L_08A4C0A8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A4C0C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 245u, 0x08A50D80u>(ctx, &aot_mem) && ctx.pc == 0x08A4C0C8u) goto L_08A4C0C8;
    return;
L_08A4C0C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C15C;
      }
      goto L_08A4C0D4;
    }
L_08A4C0D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C0E4;
      }
      goto L_08A4C0DC;
    }
L_08A4C0DC:
    ctx.set_gpr(31, 0x08A4C0E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4C0E4u) goto L_08A4C0E4;
    return;
L_08A4C0E4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C110;
      }
      goto L_08A4C0F4;
    }
L_08A4C0F4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C110;
      }
      goto L_08A4C10C;
    }
L_08A4C10C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4C110;
L_08A4C110:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C13C;
      }
      goto L_08A4C118;
    }
L_08A4C118:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C13C;
      }
      goto L_08A4C130;
    }
L_08A4C130:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4C13Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C13Cu) goto L_08A4C13C;
    return;
L_08A4C13C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C150;
      }
      goto L_08A4C148;
    }
L_08A4C148:
    ctx.set_gpr(31, 0x08A4C150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4C150u) goto L_08A4C150;
    return;
L_08A4C150:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C6BC;
      }
      goto L_08A4C15C;
    }
L_08A4C15C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C170;
      }
      goto L_08A4C168;
    }
L_08A4C168:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4C170;
L_08A4C170:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C184;
      }
      goto L_08A4C178;
    }
L_08A4C178:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C1D0;
      }
      goto L_08A4C184;
    }
L_08A4C184:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C1BC;
      }
      goto L_08A4C194;
    }
L_08A4C194:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A4C1A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C1A0u) goto L_08A4C1A0;
    return;
L_08A4C1A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C1B4;
      }
      goto L_08A4C1A8;
    }
L_08A4C1A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4C1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4C1B4u) goto L_08A4C1B4;
    return;
L_08A4C1B4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08A4C1BC;
L_08A4C1BC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4C1D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08A4C1D0u) goto L_08A4C1D0;
    return;
L_08A4C1D0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08A4C1E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 261u, 0x08959318u>(ctx, &aot_mem) && ctx.pc == 0x08A4C1E8u) goto L_08A4C1E8;
    return;
L_08A4C1E8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C214;
      }
      goto L_08A4C1F8;
    }
L_08A4C1F8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C214;
      }
      goto L_08A4C210;
    }
L_08A4C210:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4C214;
L_08A4C214:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C240;
      }
      goto L_08A4C21C;
    }
L_08A4C21C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C240;
      }
      goto L_08A4C234;
    }
L_08A4C234:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4C240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C240u) goto L_08A4C240;
    return;
L_08A4C240:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C254;
      }
      goto L_08A4C24C;
    }
L_08A4C24C:
    ctx.set_gpr(31, 0x08A4C254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4C254u) goto L_08A4C254;
    return;
L_08A4C254:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08A4C264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4C264u) goto L_08A4C264;
    return;
L_08A4C264:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22484));
    ctx.set_gpr(31, 0x08A4C27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A4C27Cu) goto L_08A4C27C;
    return;
L_08A4C27C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22484));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4C298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 568u, 0x0895A66Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C298u) goto L_08A4C298;
    return;
L_08A4C298:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C2B4;
      }
      goto L_08A4C2AC;
    }
L_08A4C2AC:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4C2B4;
L_08A4C2B4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4C2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x08A4C2CCu) goto L_08A4C2CC;
    return;
L_08A4C2CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C538;
      }
      goto L_08A4C2D4;
    }
L_08A4C2D4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A4C2F8u);
    // nop
    goto L_08A4DFA4;
L_08A4C2F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C390;
      }
      goto L_08A4C304;
    }
L_08A4C304:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C318;
      }
      goto L_08A4C310;
    }
L_08A4C310:
    ctx.set_gpr(31, 0x08A4C318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4C318u) goto L_08A4C318;
    return;
L_08A4C318:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C344;
      }
      goto L_08A4C328;
    }
L_08A4C328:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C344;
      }
      goto L_08A4C340;
    }
L_08A4C340:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4C344;
L_08A4C344:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C370;
      }
      goto L_08A4C34C;
    }
L_08A4C34C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C370;
      }
      goto L_08A4C364;
    }
L_08A4C364:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4C370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C370u) goto L_08A4C370;
    return;
L_08A4C370:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C384;
      }
      goto L_08A4C37C;
    }
L_08A4C37C:
    ctx.set_gpr(31, 0x08A4C384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4C384u) goto L_08A4C384;
    return;
L_08A4C384:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C6BC;
      }
      goto L_08A4C390;
    }
L_08A4C390:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25816)));
    ctx.set_gpr(31, 0x08A4C3A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C3A0u) goto L_08A4C3A0;
    return;
L_08A4C3A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C434;
      }
      goto L_08A4C3A8;
    }
L_08A4C3A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C3BC;
      }
      goto L_08A4C3B4;
    }
L_08A4C3B4:
    ctx.set_gpr(31, 0x08A4C3BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4C3BCu) goto L_08A4C3BC;
    return;
L_08A4C3BC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C3E8;
      }
      goto L_08A4C3CC;
    }
L_08A4C3CC:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C3E8;
      }
      goto L_08A4C3E4;
    }
L_08A4C3E4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4C3E8;
L_08A4C3E8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C414;
      }
      goto L_08A4C3F0;
    }
L_08A4C3F0:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C414;
      }
      goto L_08A4C408;
    }
L_08A4C408:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4C414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C414u) goto L_08A4C414;
    return;
L_08A4C414:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C428;
      }
      goto L_08A4C420;
    }
L_08A4C420:
    ctx.set_gpr(31, 0x08A4C428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4C428u) goto L_08A4C428;
    return;
L_08A4C428:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C6BC;
      }
      goto L_08A4C434;
    }
L_08A4C434:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4C44Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4C44Cu) goto L_08A4C44C;
    return;
L_08A4C44C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08A4C468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 679u, 0x08A4AE1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C468u) goto L_08A4C468;
    return;
L_08A4C468:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C510;
      }
      goto L_08A4C470;
    }
L_08A4C470:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C484;
      }
      goto L_08A4C47C;
    }
L_08A4C47C:
    ctx.set_gpr(31, 0x08A4C484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4C484u) goto L_08A4C484;
    return;
L_08A4C484:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C498;
      }
      goto L_08A4C490;
    }
L_08A4C490:
    ctx.set_gpr(31, 0x08A4C498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4C498u) goto L_08A4C498;
    return;
L_08A4C498:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C4C4;
      }
      goto L_08A4C4A8;
    }
L_08A4C4A8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C4C4;
      }
      goto L_08A4C4C0;
    }
L_08A4C4C0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4C4C4;
L_08A4C4C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C4F0;
      }
      goto L_08A4C4CC;
    }
L_08A4C4CC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C4F0;
      }
      goto L_08A4C4E4;
    }
L_08A4C4E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4C4F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C4F0u) goto L_08A4C4F0;
    return;
L_08A4C4F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C504;
      }
      goto L_08A4C4FC;
    }
L_08A4C4FC:
    ctx.set_gpr(31, 0x08A4C504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4C504u) goto L_08A4C504;
    return;
L_08A4C504:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C6BC;
      }
      goto L_08A4C510;
    }
L_08A4C510:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C524;
      }
      goto L_08A4C51C;
    }
L_08A4C51C:
    ctx.set_gpr(31, 0x08A4C524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4C524u) goto L_08A4C524;
    return;
L_08A4C524:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C538;
      }
      goto L_08A4C530;
    }
L_08A4C530:
    ctx.set_gpr(31, 0x08A4C538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4C538u) goto L_08A4C538;
    return;
L_08A4C538:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C5B8;
      }
      goto L_08A4C540;
    }
L_08A4C540:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C56C;
      }
      goto L_08A4C550;
    }
L_08A4C550:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C56C;
      }
      goto L_08A4C568;
    }
L_08A4C568:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4C56C;
L_08A4C56C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C598;
      }
      goto L_08A4C574;
    }
L_08A4C574:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C598;
      }
      goto L_08A4C58C;
    }
L_08A4C58C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4C598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C598u) goto L_08A4C598;
    return;
L_08A4C598:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C5AC;
      }
      goto L_08A4C5A4;
    }
L_08A4C5A4:
    ctx.set_gpr(31, 0x08A4C5ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4C5ACu) goto L_08A4C5AC;
    return;
L_08A4C5AC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C6BC;
      }
      goto L_08A4C5B8;
    }
L_08A4C5B8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C63C;
      }
      goto L_08A4C5C4;
    }
L_08A4C5C4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C5F0;
      }
      goto L_08A4C5D4;
    }
L_08A4C5D4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C5F0;
      }
      goto L_08A4C5EC;
    }
L_08A4C5EC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4C5F0;
L_08A4C5F0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C61C;
      }
      goto L_08A4C5F8;
    }
L_08A4C5F8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C61C;
      }
      goto L_08A4C610;
    }
L_08A4C610:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4C61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C61Cu) goto L_08A4C61C;
    return;
L_08A4C61C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C630;
      }
      goto L_08A4C628;
    }
L_08A4C628:
    ctx.set_gpr(31, 0x08A4C630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4C630u) goto L_08A4C630;
    return;
L_08A4C630:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C6BC;
      }
      goto L_08A4C63C;
    }
L_08A4C63C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A4C64Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 350u, 0x08A49AC8u>(ctx, &aot_mem) && ctx.pc == 0x08A4C64Cu) goto L_08A4C64C;
    return;
L_08A4C64C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4C65C;
    }
L_08A4C65C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4C674;
    }
L_08A4C674:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4C678;
L_08A4C678:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C6A4;
      }
      goto L_08A4C680;
    }
L_08A4C680:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C6A4;
      }
      goto L_08A4C698;
    }
L_08A4C698:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4C6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C6A4u) goto L_08A4C6A4;
    return;
L_08A4C6A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C6B8;
      }
      goto L_08A4C6B0;
    }
L_08A4C6B0:
    ctx.set_gpr(31, 0x08A4C6B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4C6B8u) goto L_08A4C6B8;
    return;
L_08A4C6B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4C6BC;
L_08A4C6BC:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C6F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
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
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[8]);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), 0u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C754;
      }
      goto L_08A4C748;
    }
L_08A4C748:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4C754;
L_08A4C754:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A4C760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C760u) goto L_08A4C760;
    return;
L_08A4C760:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4C76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4C76Cu) goto L_08A4C76C;
    return;
L_08A4C76C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C7C0;
      }
      goto L_08A4C784;
    }
L_08A4C784:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(21, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A4C798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 782u, 0x08853170u>(ctx, &aot_mem) && ctx.pc == 0x08A4C798u) goto L_08A4C798;
    return;
L_08A4C798:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A4C7A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08A4C7A8u) goto L_08A4C7A8;
    return;
L_08A4C7A8:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A4C7B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x08A4C7B8u) goto L_08A4C7B8;
    return;
L_08A4C7B8:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A4C7C0;
L_08A4C7C0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C784;
      }
      goto L_08A4C7CC;
    }
L_08A4C7CC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A4C7E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4C7E0u) goto L_08A4C7E0;
    return;
L_08A4C7E0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22424));
    ctx.set_gpr(31, 0x08A4C7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A4C7F8u) goto L_08A4C7F8;
    return;
L_08A4C7F8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22424));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4C814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 568u, 0x0895A66Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C814u) goto L_08A4C814;
    return;
L_08A4C814:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C830;
      }
      goto L_08A4C828;
    }
L_08A4C828:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4C830;
L_08A4C830:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4C848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x08A4C848u) goto L_08A4C848;
    return;
L_08A4C848:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CAF0;
      }
      goto L_08A4C850;
    }
L_08A4C850:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08A4C86Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 782u, 0x0894B8E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4C86Cu) goto L_08A4C86C;
    return;
L_08A4C86C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C884;
      }
      goto L_08A4C878;
    }
L_08A4C878:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A4C884;
L_08A4C884:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C94C;
      }
      goto L_08A4C890;
    }
L_08A4C890:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C8AC;
      }
      goto L_08A4C8A0;
    }
L_08A4C8A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4C8AC;
L_08A4C8AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C8C0;
      }
      goto L_08A4C8B8;
    }
L_08A4C8B8:
    ctx.set_gpr(31, 0x08A4C8C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4C8C0u) goto L_08A4C8C0;
    return;
L_08A4C8C0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C8EC;
      }
      goto L_08A4C8D0;
    }
L_08A4C8D0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C8EC;
      }
      goto L_08A4C8E8;
    }
L_08A4C8E8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4C8EC;
L_08A4C8EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C918;
      }
      goto L_08A4C8F4;
    }
L_08A4C8F4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C918;
      }
      goto L_08A4C90C;
    }
L_08A4C90C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4C918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C918u) goto L_08A4C918;
    return;
L_08A4C918:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C92C;
      }
      goto L_08A4C924;
    }
L_08A4C924:
    ctx.set_gpr(31, 0x08A4C92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4C92Cu) goto L_08A4C92C;
    return;
L_08A4C92C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C940;
      }
      goto L_08A4C938;
    }
L_08A4C938:
    ctx.set_gpr(31, 0x08A4C940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4C940u) goto L_08A4C940;
    return;
L_08A4C940:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF64;
      }
      goto L_08A4C94C;
    }
L_08A4C94C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08A4C958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C958u) goto L_08A4C958;
    return;
L_08A4C958:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CA24;
      }
      goto L_08A4C968;
    }
L_08A4C968:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C984;
      }
      goto L_08A4C978;
    }
L_08A4C978:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4C984;
L_08A4C984:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C998;
      }
      goto L_08A4C990;
    }
L_08A4C990:
    ctx.set_gpr(31, 0x08A4C998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4C998u) goto L_08A4C998;
    return;
L_08A4C998:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C9C4;
      }
      goto L_08A4C9A8;
    }
L_08A4C9A8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C9C4;
      }
      goto L_08A4C9C0;
    }
L_08A4C9C0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4C9C4;
L_08A4C9C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C9F0;
      }
      goto L_08A4C9CC;
    }
L_08A4C9CC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C9F0;
      }
      goto L_08A4C9E4;
    }
L_08A4C9E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4C9F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C9F0u) goto L_08A4C9F0;
    return;
L_08A4C9F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CA04;
      }
      goto L_08A4C9FC;
    }
L_08A4C9FC:
    ctx.set_gpr(31, 0x08A4CA04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4CA04u) goto L_08A4CA04;
    return;
L_08A4CA04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CA18;
      }
      goto L_08A4CA10;
    }
L_08A4CA10:
    ctx.set_gpr(31, 0x08A4CA18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4CA18u) goto L_08A4CA18;
    return;
L_08A4CA18:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF64;
      }
      goto L_08A4CA24;
    }
L_08A4CA24:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(31, 0x08A4CA34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4CA34u) goto L_08A4CA34;
    return;
L_08A4CA34:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A4CA48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x08A4CA48u) goto L_08A4CA48;
    return;
L_08A4CA48:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CA78;
      }
      goto L_08A4CA64;
    }
L_08A4CA64:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x08A4CA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4CA70u) goto L_08A4CA70;
    return;
L_08A4CA70:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A4CA78;
L_08A4CA78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CA98;
      }
      goto L_08A4CA80;
    }
L_08A4CA80:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x08A4CA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4CA8Cu) goto L_08A4CA8C;
    return;
L_08A4CA8C:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A4CA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08A4CA98u) goto L_08A4CA98;
    return;
L_08A4CA98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CABC;
      }
      goto L_08A4CAA8;
    }
L_08A4CAA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4CAB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4CAB4u) goto L_08A4CAB4;
    return;
L_08A4CAB4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A4CABC;
L_08A4CABC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CAD4;
      }
      goto L_08A4CAC4;
    }
L_08A4CAC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08A4CAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08A4CAD4u) goto L_08A4CAD4;
    return;
L_08A4CAD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CAF0;
      }
      goto L_08A4CAE8;
    }
L_08A4CAE8:
    ctx.set_gpr(31, 0x08A4CAF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4CAF0u) goto L_08A4CAF0;
    return;
L_08A4CAF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A4CB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4CB00u) goto L_08A4CB00;
    return;
L_08A4CB00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CB1C;
      }
      goto L_08A4CB14;
    }
L_08A4CB14:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4CB1C;
L_08A4CB1C:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4CB34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x08A4CB34u) goto L_08A4CB34;
    return;
L_08A4CB34:
    ctx.set_gpr(21, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CBB0;
      }
      goto L_08A4CB44;
    }
L_08A4CB44:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22448));
    ctx.set_gpr(31, 0x08A4CB5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A4CB5Cu) goto L_08A4CB5C;
    return;
L_08A4CB5C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22448));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4CB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 568u, 0x0895A66Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4CB78u) goto L_08A4CB78;
    return;
L_08A4CB78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CB94;
      }
      goto L_08A4CB8C;
    }
L_08A4CB8C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4CB94;
L_08A4CB94:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4CBACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x08A4CBACu) goto L_08A4CBAC;
    return;
L_08A4CBAC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    goto L_08A4CBB0;
L_08A4CBB0:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CBC0;
      }
      goto L_08A4CBB8;
    }
L_08A4CBB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D8C4;
      }
      goto L_08A4CBC0;
    }
L_08A4CBC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CC74;
      }
      goto L_08A4CBCC;
    }
L_08A4CBCC:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CBE8;
      }
      goto L_08A4CBDC;
    }
L_08A4CBDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4CBE8;
L_08A4CBE8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CC14;
      }
      goto L_08A4CBF8;
    }
L_08A4CBF8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CC14;
      }
      goto L_08A4CC10;
    }
L_08A4CC10:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4CC14;
L_08A4CC14:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CC40;
      }
      goto L_08A4CC1C;
    }
L_08A4CC1C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CC40;
      }
      goto L_08A4CC34;
    }
L_08A4CC34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4CC40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4CC40u) goto L_08A4CC40;
    return;
L_08A4CC40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CC54;
      }
      goto L_08A4CC4C;
    }
L_08A4CC4C:
    ctx.set_gpr(31, 0x08A4CC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4CC54u) goto L_08A4CC54;
    return;
L_08A4CC54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CC68;
      }
      goto L_08A4CC60;
    }
L_08A4CC60:
    ctx.set_gpr(31, 0x08A4CC68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4CC68u) goto L_08A4CC68;
    return;
L_08A4CC68:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF64;
      }
      goto L_08A4CC74;
    }
L_08A4CC74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29924)));
    ctx.set_gpr(31, 0x08A4CC88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4CC88u) goto L_08A4CC88;
    return;
L_08A4CC88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D638;
      }
      goto L_08A4CC90;
    }
L_08A4CC90:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A4CC9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4CC9Cu) goto L_08A4CC9C;
    return;
L_08A4CC9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4CCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 710u, 0x088E7BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A4CCA8u) goto L_08A4CCA8;
    return;
L_08A4CCA8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CCC8;
      }
      goto L_08A4CCC0;
    }
L_08A4CCC0:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4CCC8;
L_08A4CCC8:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08A4CCDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 746u, 0x089533D0u>(ctx, &aot_mem) && ctx.pc == 0x08A4CCDCu) goto L_08A4CCDC;
    return;
L_08A4CCDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A4CCF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 912u, 0x08943FF8u>(ctx, &aot_mem) && ctx.pc == 0x08A4CCF8u) goto L_08A4CCF8;
    return;
L_08A4CCF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4CD0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4CD0Cu) goto L_08A4CD0C;
    return;
L_08A4CD0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6072));
    ctx.set_gpr(31, 0x08A4CD20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD20u) goto L_08A4CD20;
    return;
L_08A4CD20:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4CD3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4CD3Cu) goto L_08A4CD3C;
    return;
L_08A4CD3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22456));
    ctx.set_gpr(31, 0x08A4CD50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD50u) goto L_08A4CD50;
    return;
L_08A4CD50:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4CD68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4CD68u) goto L_08A4CD68;
    return;
L_08A4CD68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22464));
    ctx.set_gpr(31, 0x08A4CD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD7Cu) goto L_08A4CD7C;
    return;
L_08A4CD7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A4CDB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 203u, 0x08940E70u>(ctx, &aot_mem) && ctx.pc == 0x08A4CDB4u) goto L_08A4CDB4;
    return;
L_08A4CDB4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26720)));
    ctx.set_gpr(31, 0x08A4CDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4CDC8u) goto L_08A4CDC8;
    return;
L_08A4CDC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D210;
      }
      goto L_08A4CDD0;
    }
L_08A4CDD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(30, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D1FC;
      }
      goto L_08A4CDF0;
    }
L_08A4CDF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(3, ctx.gpr[30] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(22, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A4CE20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x08A4CE20u) goto L_08A4CE20;
    return;
L_08A4CE20:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A4CF00;
      }
      goto L_08A4CE30;
    }
L_08A4CE30:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CE4C;
      }
      goto L_08A4CE40;
    }
L_08A4CE40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4CE4C;
L_08A4CE4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CE60;
      }
      goto L_08A4CE58;
    }
L_08A4CE58:
    ctx.set_gpr(31, 0x08A4CE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4CE60u) goto L_08A4CE60;
    return;
L_08A4CE60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CE74;
      }
      goto L_08A4CE6C;
    }
L_08A4CE6C:
    ctx.set_gpr(31, 0x08A4CE74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4CE74u) goto L_08A4CE74;
    return;
L_08A4CE74:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CEA0;
      }
      goto L_08A4CE84;
    }
L_08A4CE84:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CEA0;
      }
      goto L_08A4CE9C;
    }
L_08A4CE9C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4CEA0;
L_08A4CEA0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CECC;
      }
      goto L_08A4CEA8;
    }
L_08A4CEA8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CECC;
      }
      goto L_08A4CEC0;
    }
L_08A4CEC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4CECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4CECCu) goto L_08A4CECC;
    return;
L_08A4CECC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CEE0;
      }
      goto L_08A4CED8;
    }
L_08A4CED8:
    ctx.set_gpr(31, 0x08A4CEE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4CEE0u) goto L_08A4CEE0;
    return;
L_08A4CEE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CEF4;
      }
      goto L_08A4CEEC;
    }
L_08A4CEEC:
    ctx.set_gpr(31, 0x08A4CEF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4CEF4u) goto L_08A4CEF4;
    return;
L_08A4CEF4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF64;
      }
      goto L_08A4CF00;
    }
L_08A4CF00:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CF14;
      }
      goto L_08A4CF08;
    }
L_08A4CF08:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CF60;
      }
      goto L_08A4CF14;
    }
L_08A4CF14:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CF4C;
      }
      goto L_08A4CF24;
    }
L_08A4CF24:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A4CF30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08A4CF30u) goto L_08A4CF30;
    return;
L_08A4CF30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CF44;
      }
      goto L_08A4CF38;
    }
L_08A4CF38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4CF44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4CF44u) goto L_08A4CF44;
    return;
L_08A4CF44:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08A4CF4C;
L_08A4CF4C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A4CF60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08A4CF60u) goto L_08A4CF60;
    return;
L_08A4CF60:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A4CF78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x08A4CF78u) goto L_08A4CF78;
    return;
L_08A4CF78:
    ctx.set_gpr(3, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(22, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CFA8;
      }
      goto L_08A4CF94;
    }
L_08A4CF94:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08A4CFA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4CFA0u) goto L_08A4CFA0;
    return;
L_08A4CFA0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A4CFA8;
L_08A4CFA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CFC8;
      }
      goto L_08A4CFB0;
    }
L_08A4CFB0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08A4CFBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4CFBCu) goto L_08A4CFBC;
    return;
L_08A4CFBC:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A4CFC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08A4CFC8u) goto L_08A4CFC8;
    return;
L_08A4CFC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CFEC;
      }
      goto L_08A4CFD8;
    }
L_08A4CFD8:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A4CFE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4CFE4u) goto L_08A4CFE4;
    return;
L_08A4CFE4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A4CFEC;
L_08A4CFEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D004;
      }
      goto L_08A4CFF4;
    }
L_08A4CFF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08A4D004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08A4D004u) goto L_08A4D004;
    return;
L_08A4D004:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D038;
      }
      goto L_08A4D01C;
    }
L_08A4D01C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D038;
      }
      goto L_08A4D034;
    }
L_08A4D034:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4D038;
L_08A4D038:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D064;
      }
      goto L_08A4D040;
    }
L_08A4D040:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D064;
      }
      goto L_08A4D058;
    }
L_08A4D058:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4D064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D064u) goto L_08A4D064;
    return;
L_08A4D064:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(23, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D1D8;
      }
      goto L_08A4D08C;
    }
L_08A4D08C:
    ctx.set_gpr(3, ctx.gpr[23] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4D0CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x08A4D0CCu) goto L_08A4D0CC;
    return;
L_08A4D0CC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D138;
      }
      goto L_08A4D0D8;
    }
L_08A4D0D8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D104;
      }
      goto L_08A4D0E8;
    }
L_08A4D0E8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D104;
      }
      goto L_08A4D100;
    }
L_08A4D100:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4D104;
L_08A4D104:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D1B8;
      }
      goto L_08A4D10C;
    }
L_08A4D10C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D1B8;
      }
      goto L_08A4D124;
    }
L_08A4D124:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4D130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D130u) goto L_08A4D130;
    return;
L_08A4D130:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D1B8;
      }
      goto L_08A4D138;
    }
L_08A4D138:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4D160u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4D160u) goto L_08A4D160;
    return;
L_08A4D160:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D18C;
      }
      goto L_08A4D170;
    }
L_08A4D170:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D18C;
      }
      goto L_08A4D188;
    }
L_08A4D188:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4D18C;
L_08A4D18C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D1B8;
      }
      goto L_08A4D194;
    }
L_08A4D194:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D1B8;
      }
      goto L_08A4D1AC;
    }
L_08A4D1AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4D1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D1B8u) goto L_08A4D1B8;
    return;
L_08A4D1B8:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A4D1D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 607u, 0x08942AACu>(ctx, &aot_mem) && ctx.pc == 0x08A4D1D4u) goto L_08A4D1D4;
    return;
L_08A4D1D4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_08A4D1D8;
L_08A4D1D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D08C;
      }
      goto L_08A4D1E8;
    }
L_08A4D1E8:
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_08A4D1FC;
L_08A4D1FC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CDF0;
      }
      goto L_08A4D208;
    }
L_08A4D208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D5F8;
      }
      goto L_08A4D210;
    }
L_08A4D210:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x08A4D224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D224u) goto L_08A4D224;
    return;
L_08A4D224:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D50C;
      }
      goto L_08A4D22C;
    }
L_08A4D22C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D4F8;
      }
      goto L_08A4D248;
    }
L_08A4D248:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(22, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A4D27Cu);
    // nop
    goto L_08A4DFA4;
L_08A4D27C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D36C;
      }
      goto L_08A4D288;
    }
L_08A4D288:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D2A4;
      }
      goto L_08A4D298;
    }
L_08A4D298:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4D2A4;
L_08A4D2A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D2B8;
      }
      goto L_08A4D2B0;
    }
L_08A4D2B0:
    ctx.set_gpr(31, 0x08A4D2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4D2B8u) goto L_08A4D2B8;
    return;
L_08A4D2B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D2CC;
      }
      goto L_08A4D2C4;
    }
L_08A4D2C4:
    ctx.set_gpr(31, 0x08A4D2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4D2CCu) goto L_08A4D2CC;
    return;
L_08A4D2CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D2E0;
      }
      goto L_08A4D2D8;
    }
L_08A4D2D8:
    ctx.set_gpr(31, 0x08A4D2E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4D2E0u) goto L_08A4D2E0;
    return;
L_08A4D2E0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D30C;
      }
      goto L_08A4D2F0;
    }
L_08A4D2F0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D30C;
      }
      goto L_08A4D308;
    }
L_08A4D308:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4D30C;
L_08A4D30C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D338;
      }
      goto L_08A4D314;
    }
L_08A4D314:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D338;
      }
      goto L_08A4D32C;
    }
L_08A4D32C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4D338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D338u) goto L_08A4D338;
    return;
L_08A4D338:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D34C;
      }
      goto L_08A4D344;
    }
L_08A4D344:
    ctx.set_gpr(31, 0x08A4D34Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4D34Cu) goto L_08A4D34C;
    return;
L_08A4D34C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D360;
      }
      goto L_08A4D358;
    }
L_08A4D358:
    ctx.set_gpr(31, 0x08A4D360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4D360u) goto L_08A4D360;
    return;
L_08A4D360:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF64;
      }
      goto L_08A4D36C;
    }
L_08A4D36C:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A4D378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4D378u) goto L_08A4D378;
    return;
L_08A4D378:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D38C;
      }
      goto L_08A4D380;
    }
L_08A4D380:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D3D8;
      }
      goto L_08A4D38C;
    }
L_08A4D38C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D3C4;
      }
      goto L_08A4D39C;
    }
L_08A4D39C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A4D3A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08A4D3A8u) goto L_08A4D3A8;
    return;
L_08A4D3A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D3BC;
      }
      goto L_08A4D3B0;
    }
L_08A4D3B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4D3BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4D3BCu) goto L_08A4D3BC;
    return;
L_08A4D3BC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08A4D3C4;
L_08A4D3C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A4D3D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08A4D3D8u) goto L_08A4D3D8;
    return;
L_08A4D3D8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A4D3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x08A4D3F0u) goto L_08A4D3F0;
    return;
L_08A4D3F0:
    ctx.set_gpr(3, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(22, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D420;
      }
      goto L_08A4D40C;
    }
L_08A4D40C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08A4D418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D418u) goto L_08A4D418;
    return;
L_08A4D418:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A4D420;
L_08A4D420:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D440;
      }
      goto L_08A4D428;
    }
L_08A4D428:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08A4D434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D434u) goto L_08A4D434;
    return;
L_08A4D434:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A4D440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08A4D440u) goto L_08A4D440;
    return;
L_08A4D440:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D464;
      }
      goto L_08A4D450;
    }
L_08A4D450:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A4D45Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D45Cu) goto L_08A4D45C;
    return;
L_08A4D45C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A4D464;
L_08A4D464:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D47C;
      }
      goto L_08A4D46C;
    }
L_08A4D46C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08A4D47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08A4D47Cu) goto L_08A4D47C;
    return;
L_08A4D47C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D4B0;
      }
      goto L_08A4D494;
    }
L_08A4D494:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D4B0;
      }
      goto L_08A4D4AC;
    }
L_08A4D4AC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4D4B0;
L_08A4D4B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D4DC;
      }
      goto L_08A4D4B8;
    }
L_08A4D4B8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D4DC;
      }
      goto L_08A4D4D0;
    }
L_08A4D4D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4D4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D4DCu) goto L_08A4D4DC;
    return;
L_08A4D4DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D4F0;
      }
      goto L_08A4D4E8;
    }
L_08A4D4E8:
    ctx.set_gpr(31, 0x08A4D4F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4D4F0u) goto L_08A4D4F0;
    return;
L_08A4D4F0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(4));
    goto L_08A4D4F8;
L_08A4D4F8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D248;
      }
      goto L_08A4D504;
    }
L_08A4D504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D5F8;
      }
      goto L_08A4D50C;
    }
L_08A4D50C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26764)));
    ctx.set_gpr(31, 0x08A4D530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D530u) goto L_08A4D530;
    return;
L_08A4D530:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(23, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D5EC;
      }
      goto L_08A4D544;
    }
L_08A4D544:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(3, ctx.gpr[23] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(30, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D5B8;
      }
      goto L_08A4D574;
    }
L_08A4D574:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A4D580u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4D580u) goto L_08A4D580;
    return;
L_08A4D580:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D5B8;
      }
      goto L_08A4D588;
    }
L_08A4D588:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08A4D5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 382u, 0x08941B90u>(ctx, &aot_mem) && ctx.pc == 0x08A4D5A4u) goto L_08A4D5A4;
    return;
L_08A4D5A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D5B8;
      }
      goto L_08A4D5AC;
    }
L_08A4D5AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4D5B8;
L_08A4D5B8:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D5E0;
      }
      goto L_08A4D5C0;
    }
L_08A4D5C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4D5E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4D5E0u) goto L_08A4D5E0;
    return;
L_08A4D5E0:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(22, ctx.gpr[22] + ctx.gpr[2]);
    goto L_08A4D5EC;
L_08A4D5EC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D544;
      }
      goto L_08A4D5F8;
    }
L_08A4D5F8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(31, 0x08A4D608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4D608u) goto L_08A4D608;
    return;
L_08A4D608:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D61C;
      }
      goto L_08A4D614;
    }
L_08A4D614:
    ctx.set_gpr(31, 0x08A4D61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4D61Cu) goto L_08A4D61C;
    return;
L_08A4D61C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D8C4;
      }
      goto L_08A4D628;
    }
L_08A4D628:
    ctx.set_gpr(31, 0x08A4D630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4D630u) goto L_08A4D630;
    return;
L_08A4D630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D8C4;
      }
      goto L_08A4D638;
    }
L_08A4D638:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A4D658u);
    // nop
    goto L_08A4DFA4;
L_08A4D658:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D720;
      }
      goto L_08A4D664;
    }
L_08A4D664:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D680;
      }
      goto L_08A4D674;
    }
L_08A4D674:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4D680;
L_08A4D680:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D694;
      }
      goto L_08A4D68C;
    }
L_08A4D68C:
    ctx.set_gpr(31, 0x08A4D694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4D694u) goto L_08A4D694;
    return;
L_08A4D694:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D6C0;
      }
      goto L_08A4D6A4;
    }
L_08A4D6A4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D6C0;
      }
      goto L_08A4D6BC;
    }
L_08A4D6BC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4D6C0;
L_08A4D6C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D6EC;
      }
      goto L_08A4D6C8;
    }
L_08A4D6C8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D6EC;
      }
      goto L_08A4D6E0;
    }
L_08A4D6E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4D6ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D6ECu) goto L_08A4D6EC;
    return;
L_08A4D6EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D700;
      }
      goto L_08A4D6F8;
    }
L_08A4D6F8:
    ctx.set_gpr(31, 0x08A4D700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4D700u) goto L_08A4D700;
    return;
L_08A4D700:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D714;
      }
      goto L_08A4D70C;
    }
L_08A4D70C:
    ctx.set_gpr(31, 0x08A4D714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4D714u) goto L_08A4D714;
    return;
L_08A4D714:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF64;
      }
      goto L_08A4D720;
    }
L_08A4D720:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08A4D72Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D72Cu) goto L_08A4D72C;
    return;
L_08A4D72C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D7F8;
      }
      goto L_08A4D73C;
    }
L_08A4D73C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D758;
      }
      goto L_08A4D74C;
    }
L_08A4D74C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4D758;
L_08A4D758:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D76C;
      }
      goto L_08A4D764;
    }
L_08A4D764:
    ctx.set_gpr(31, 0x08A4D76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4D76Cu) goto L_08A4D76C;
    return;
L_08A4D76C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D798;
      }
      goto L_08A4D77C;
    }
L_08A4D77C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D798;
      }
      goto L_08A4D794;
    }
L_08A4D794:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4D798;
L_08A4D798:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D7C4;
      }
      goto L_08A4D7A0;
    }
L_08A4D7A0:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D7C4;
      }
      goto L_08A4D7B8;
    }
L_08A4D7B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4D7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D7C4u) goto L_08A4D7C4;
    return;
L_08A4D7C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D7D8;
      }
      goto L_08A4D7D0;
    }
L_08A4D7D0:
    ctx.set_gpr(31, 0x08A4D7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4D7D8u) goto L_08A4D7D8;
    return;
L_08A4D7D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D7EC;
      }
      goto L_08A4D7E4;
    }
L_08A4D7E4:
    ctx.set_gpr(31, 0x08A4D7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4D7ECu) goto L_08A4D7EC;
    return;
L_08A4D7EC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF64;
      }
      goto L_08A4D7F8;
    }
L_08A4D7F8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08A4D808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4D808u) goto L_08A4D808;
    return;
L_08A4D808:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A4D81Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x08A4D81Cu) goto L_08A4D81C;
    return;
L_08A4D81C:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D84C;
      }
      goto L_08A4D838;
    }
L_08A4D838:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x08A4D844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D844u) goto L_08A4D844;
    return;
L_08A4D844:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A4D84C;
L_08A4D84C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D86C;
      }
      goto L_08A4D854;
    }
L_08A4D854:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x08A4D860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D860u) goto L_08A4D860;
    return;
L_08A4D860:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A4D86Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08A4D86Cu) goto L_08A4D86C;
    return;
L_08A4D86C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D890;
      }
      goto L_08A4D87C;
    }
L_08A4D87C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4D888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D888u) goto L_08A4D888;
    return;
L_08A4D888:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A4D890;
L_08A4D890:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D8A8;
      }
      goto L_08A4D898;
    }
L_08A4D898:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08A4D8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08A4D8A8u) goto L_08A4D8A8;
    return;
L_08A4D8A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D8C4;
      }
      goto L_08A4D8BC;
    }
L_08A4D8BC:
    ctx.set_gpr(31, 0x08A4D8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4D8C4u) goto L_08A4D8C4;
    return;
L_08A4D8C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A4D8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4D8D4u) goto L_08A4D8D4;
    return;
L_08A4D8D4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22476));
    ctx.set_gpr(31, 0x08A4D8ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A4D8ECu) goto L_08A4D8EC;
    return;
L_08A4D8EC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22476));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4D908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 568u, 0x0895A66Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D908u) goto L_08A4D908;
    return;
L_08A4D908:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D924;
      }
      goto L_08A4D91C;
    }
L_08A4D91C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4D924;
L_08A4D924:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4D93Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x08A4D93Cu) goto L_08A4D93C;
    return;
L_08A4D93C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D9EC;
      }
      goto L_08A4D944;
    }
L_08A4D944:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D960;
      }
      goto L_08A4D954;
    }
L_08A4D954:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4D960;
L_08A4D960:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D98C;
      }
      goto L_08A4D970;
    }
L_08A4D970:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D98C;
      }
      goto L_08A4D988;
    }
L_08A4D988:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4D98C;
L_08A4D98C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D9B8;
      }
      goto L_08A4D994;
    }
L_08A4D994:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D9B8;
      }
      goto L_08A4D9AC;
    }
L_08A4D9AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4D9B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D9B8u) goto L_08A4D9B8;
    return;
L_08A4D9B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D9CC;
      }
      goto L_08A4D9C4;
    }
L_08A4D9C4:
    ctx.set_gpr(31, 0x08A4D9CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4D9CCu) goto L_08A4D9CC;
    return;
L_08A4D9CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D9E0;
      }
      goto L_08A4D9D8;
    }
L_08A4D9D8:
    ctx.set_gpr(31, 0x08A4D9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4D9E0u) goto L_08A4D9E0;
    return;
L_08A4D9E0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF64;
      }
      goto L_08A4D9EC;
    }
L_08A4D9EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A4D9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4D9FCu) goto L_08A4D9FC;
    return;
L_08A4D9FC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22484));
    ctx.set_gpr(31, 0x08A4DA14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A4DA14u) goto L_08A4DA14;
    return;
L_08A4DA14:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22484));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4DA30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 568u, 0x0895A66Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4DA30u) goto L_08A4DA30;
    return;
L_08A4DA30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DA4C;
      }
      goto L_08A4DA44;
    }
L_08A4DA44:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4DA4C;
L_08A4DA4C:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4DA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x08A4DA64u) goto L_08A4DA64;
    return;
L_08A4DA64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DEC4;
      }
      goto L_08A4DA6C;
    }
L_08A4DA6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DB20;
      }
      goto L_08A4DA78;
    }
L_08A4DA78:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DA94;
      }
      goto L_08A4DA88;
    }
L_08A4DA88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4DA94;
L_08A4DA94:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DAC0;
      }
      goto L_08A4DAA4;
    }
L_08A4DAA4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DAC0;
      }
      goto L_08A4DABC;
    }
L_08A4DABC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4DAC0;
L_08A4DAC0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DAEC;
      }
      goto L_08A4DAC8;
    }
L_08A4DAC8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DAEC;
      }
      goto L_08A4DAE0;
    }
L_08A4DAE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4DAECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4DAECu) goto L_08A4DAEC;
    return;
L_08A4DAEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DB00;
      }
      goto L_08A4DAF8;
    }
L_08A4DAF8:
    ctx.set_gpr(31, 0x08A4DB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4DB00u) goto L_08A4DB00;
    return;
L_08A4DB00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DB14;
      }
      goto L_08A4DB0C;
    }
L_08A4DB0C:
    ctx.set_gpr(31, 0x08A4DB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4DB14u) goto L_08A4DB14;
    return;
L_08A4DB14:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF64;
      }
      goto L_08A4DB20;
    }
L_08A4DB20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A4DB40u);
    // nop
    goto L_08A4DFA4;
L_08A4DB40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DC08;
      }
      goto L_08A4DB4C;
    }
L_08A4DB4C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DB68;
      }
      goto L_08A4DB5C;
    }
L_08A4DB5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4DB68;
L_08A4DB68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DB7C;
      }
      goto L_08A4DB74;
    }
L_08A4DB74:
    ctx.set_gpr(31, 0x08A4DB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4DB7Cu) goto L_08A4DB7C;
    return;
L_08A4DB7C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DBA8;
      }
      goto L_08A4DB8C;
    }
L_08A4DB8C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DBA8;
      }
      goto L_08A4DBA4;
    }
L_08A4DBA4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4DBA8;
L_08A4DBA8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DBD4;
      }
      goto L_08A4DBB0;
    }
L_08A4DBB0:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DBD4;
      }
      goto L_08A4DBC8;
    }
L_08A4DBC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4DBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4DBD4u) goto L_08A4DBD4;
    return;
L_08A4DBD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DBE8;
      }
      goto L_08A4DBE0;
    }
L_08A4DBE0:
    ctx.set_gpr(31, 0x08A4DBE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4DBE8u) goto L_08A4DBE8;
    return;
L_08A4DBE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DBFC;
      }
      goto L_08A4DBF4;
    }
L_08A4DBF4:
    ctx.set_gpr(31, 0x08A4DBFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4DBFCu) goto L_08A4DBFC;
    return;
L_08A4DBFC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF64;
      }
      goto L_08A4DC08;
    }
L_08A4DC08:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25816)));
    ctx.set_gpr(31, 0x08A4DC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4DC18u) goto L_08A4DC18;
    return;
L_08A4DC18:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DCDC;
      }
      goto L_08A4DC20;
    }
L_08A4DC20:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DC3C;
      }
      goto L_08A4DC30;
    }
L_08A4DC30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4DC3C;
L_08A4DC3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DC50;
      }
      goto L_08A4DC48;
    }
L_08A4DC48:
    ctx.set_gpr(31, 0x08A4DC50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4DC50u) goto L_08A4DC50;
    return;
L_08A4DC50:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DC7C;
      }
      goto L_08A4DC60;
    }
L_08A4DC60:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DC7C;
      }
      goto L_08A4DC78;
    }
L_08A4DC78:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4DC7C;
L_08A4DC7C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DCA8;
      }
      goto L_08A4DC84;
    }
L_08A4DC84:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DCA8;
      }
      goto L_08A4DC9C;
    }
L_08A4DC9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4DCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4DCA8u) goto L_08A4DCA8;
    return;
L_08A4DCA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DCBC;
      }
      goto L_08A4DCB4;
    }
L_08A4DCB4:
    ctx.set_gpr(31, 0x08A4DCBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4DCBCu) goto L_08A4DCBC;
    return;
L_08A4DCBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DCD0;
      }
      goto L_08A4DCC8;
    }
L_08A4DCC8:
    ctx.set_gpr(31, 0x08A4DCD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4DCD0u) goto L_08A4DCD0;
    return;
L_08A4DCD0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF64;
      }
      goto L_08A4DCDC;
    }
L_08A4DCDC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4DCF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4DCF4u) goto L_08A4DCF4;
    return;
L_08A4DCF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08A4DD04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4DD04u) goto L_08A4DD04;
    return;
L_08A4DD04:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DDE4;
      }
      goto L_08A4DD14;
    }
L_08A4DD14:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DD30;
      }
      goto L_08A4DD24;
    }
L_08A4DD24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4DD30;
L_08A4DD30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DD44;
      }
      goto L_08A4DD3C;
    }
L_08A4DD3C:
    ctx.set_gpr(31, 0x08A4DD44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4DD44u) goto L_08A4DD44;
    return;
L_08A4DD44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DD58;
      }
      goto L_08A4DD50;
    }
L_08A4DD50:
    ctx.set_gpr(31, 0x08A4DD58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4DD58u) goto L_08A4DD58;
    return;
L_08A4DD58:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DD84;
      }
      goto L_08A4DD68;
    }
L_08A4DD68:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DD84;
      }
      goto L_08A4DD80;
    }
L_08A4DD80:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4DD84;
L_08A4DD84:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DDB0;
      }
      goto L_08A4DD8C;
    }
L_08A4DD8C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DDB0;
      }
      goto L_08A4DDA4;
    }
L_08A4DDA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4DDB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4DDB0u) goto L_08A4DDB0;
    return;
L_08A4DDB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DDC4;
      }
      goto L_08A4DDBC;
    }
L_08A4DDBC:
    ctx.set_gpr(31, 0x08A4DDC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4DDC4u) goto L_08A4DDC4;
    return;
L_08A4DDC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DDD8;
      }
      goto L_08A4DDD0;
    }
L_08A4DDD0:
    ctx.set_gpr(31, 0x08A4DDD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4DDD8u) goto L_08A4DDD8;
    return;
L_08A4DDD8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF64;
      }
      goto L_08A4DDE4;
    }
L_08A4DDE4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08A4DDF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4DDF4u) goto L_08A4DDF4;
    return;
L_08A4DDF4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A4DE08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x08A4DE08u) goto L_08A4DE08;
    return;
L_08A4DE08:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DE38;
      }
      goto L_08A4DE24;
    }
L_08A4DE24:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x08A4DE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4DE30u) goto L_08A4DE30;
    return;
L_08A4DE30:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A4DE38;
L_08A4DE38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DE58;
      }
      goto L_08A4DE40;
    }
L_08A4DE40:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x08A4DE4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4DE4Cu) goto L_08A4DE4C;
    return;
L_08A4DE4C:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A4DE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08A4DE58u) goto L_08A4DE58;
    return;
L_08A4DE58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DE7C;
      }
      goto L_08A4DE68;
    }
L_08A4DE68:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4DE74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4DE74u) goto L_08A4DE74;
    return;
L_08A4DE74:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A4DE7C;
L_08A4DE7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DE94;
      }
      goto L_08A4DE84;
    }
L_08A4DE84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08A4DE94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08A4DE94u) goto L_08A4DE94;
    return;
L_08A4DE94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DEB0;
      }
      goto L_08A4DEA8;
    }
L_08A4DEA8:
    ctx.set_gpr(31, 0x08A4DEB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4DEB0u) goto L_08A4DEB0;
    return;
L_08A4DEB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DEC4;
      }
      goto L_08A4DEBC;
    }
L_08A4DEBC:
    ctx.set_gpr(31, 0x08A4DEC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4DEC4u) goto L_08A4DEC4;
    return;
L_08A4DEC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DEE0;
      }
      goto L_08A4DED4;
    }
L_08A4DED4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4DEE0;
L_08A4DEE0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF0C;
      }
      goto L_08A4DEF0;
    }
L_08A4DEF0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF0C;
      }
      goto L_08A4DF08;
    }
L_08A4DF08:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4DF0C;
L_08A4DF0C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF38;
      }
      goto L_08A4DF14;
    }
L_08A4DF14:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF38;
      }
      goto L_08A4DF2C;
    }
L_08A4DF2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4DF38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4DF38u) goto L_08A4DF38;
    return;
L_08A4DF38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF4C;
      }
      goto L_08A4DF44;
    }
L_08A4DF44:
    ctx.set_gpr(31, 0x08A4DF4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4DF4Cu) goto L_08A4DF4C;
    return;
L_08A4DF4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF60;
      }
      goto L_08A4DF58;
    }
L_08A4DF58:
    ctx.set_gpr(31, 0x08A4DF60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4DF60u) goto L_08A4DF60;
    return;
L_08A4DF60:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A4DF64;
L_08A4DF64:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DF98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DFA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A4DFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x08A4DFF0u) goto L_08A4DFF0;
    return;
L_08A4DFF0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A4E024;
      }
      goto L_08A4E000;
    }
L_08A4E000:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E01C;
      }
      goto L_08A4E010;
    }
L_08A4E010:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A4E01C;
L_08A4E01C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E61C;
      }
      goto L_08A4E024;
    }
L_08A4E024:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22496));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4E04Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x08A4E04Cu) goto L_08A4E04C;
    return;
L_08A4E04C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E0D8;
      }
      goto L_08A4E058;
    }
L_08A4E058:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E074;
      }
      goto L_08A4E068;
    }
L_08A4E068:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4E074;
L_08A4E074:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E0A0;
      }
      goto L_08A4E084;
    }
L_08A4E084:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E0A0;
      }
      goto L_08A4E09C;
    }
L_08A4E09C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4E0A0;
L_08A4E0A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E0CC;
      }
      goto L_08A4E0A8;
    }
L_08A4E0A8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E0CC;
      }
      goto L_08A4E0C0;
    }
L_08A4E0C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4E0CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E0CCu) goto L_08A4E0CC;
    return;
L_08A4E0CC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E61C;
      }
      goto L_08A4E0D8;
    }
L_08A4E0D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A4E0ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 233u, 0x0894516Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E0ECu) goto L_08A4E0EC;
    return;
L_08A4E0EC:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E178;
      }
      goto L_08A4E0F8;
    }
L_08A4E0F8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E114;
      }
      goto L_08A4E108;
    }
L_08A4E108:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4E114;
L_08A4E114:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E140;
      }
      goto L_08A4E124;
    }
L_08A4E124:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E140;
      }
      goto L_08A4E13C;
    }
L_08A4E13C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4E140;
L_08A4E140:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E16C;
      }
      goto L_08A4E148;
    }
L_08A4E148:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E16C;
      }
      goto L_08A4E160;
    }
L_08A4E160:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4E16Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E16Cu) goto L_08A4E16C;
    return;
L_08A4E16C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E61C;
      }
      goto L_08A4E178;
    }
L_08A4E178:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(8, ctx.gpr[2] & 255u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22504));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(79));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4E1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x08A4E1ACu) goto L_08A4E1AC;
    return;
L_08A4E1AC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(79)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E284;
      }
      goto L_08A4E1B8;
    }
L_08A4E1B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A4E1D0u);
    // nop
    goto L_08A4DF98;
L_08A4E1D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A4E1E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 782u, 0x0894B8E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4E1E0u) goto L_08A4E1E0;
    return;
L_08A4E1E0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E284;
      }
      goto L_08A4E1EC;
    }
L_08A4E1EC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4E200u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4E200u) goto L_08A4E200;
    return;
L_08A4E200:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A4E284;
      }
      goto L_08A4E208;
    }
L_08A4E208:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E220;
      }
      goto L_08A4E214;
    }
L_08A4E214:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4E220;
L_08A4E220:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E24C;
      }
      goto L_08A4E230;
    }
L_08A4E230:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E24C;
      }
      goto L_08A4E248;
    }
L_08A4E248:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4E24C;
L_08A4E24C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E278;
      }
      goto L_08A4E254;
    }
L_08A4E254:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E278;
      }
      goto L_08A4E26C;
    }
L_08A4E26C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4E278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E278u) goto L_08A4E278;
    return;
L_08A4E278:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E61C;
      }
      goto L_08A4E284;
    }
L_08A4E284:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A4E298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 912u, 0x08943FF8u>(ctx, &aot_mem) && ctx.pc == 0x08A4E298u) goto L_08A4E298;
    return;
L_08A4E298:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E338;
      }
      goto L_08A4E2A4;
    }
L_08A4E2A4:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E2C0;
      }
      goto L_08A4E2B4;
    }
L_08A4E2B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4E2C0;
L_08A4E2C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E2D4;
      }
      goto L_08A4E2CC;
    }
L_08A4E2CC:
    ctx.set_gpr(31, 0x08A4E2D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4E2D4u) goto L_08A4E2D4;
    return;
L_08A4E2D4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E300;
      }
      goto L_08A4E2E4;
    }
L_08A4E2E4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E300;
      }
      goto L_08A4E2FC;
    }
L_08A4E2FC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4E300;
L_08A4E300:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E32C;
      }
      goto L_08A4E308;
    }
L_08A4E308:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E32C;
      }
      goto L_08A4E320;
    }
L_08A4E320:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4E32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E32Cu) goto L_08A4E32C;
    return;
L_08A4E32C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E61C;
      }
      goto L_08A4E338;
    }
L_08A4E338:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A4E344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E344u) goto L_08A4E344;
    return;
L_08A4E344:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4E350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 710u, 0x088E7BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A4E350u) goto L_08A4E350;
    return;
L_08A4E350:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22512));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08A4E374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 746u, 0x089533D0u>(ctx, &aot_mem) && ctx.pc == 0x08A4E374u) goto L_08A4E374;
    return;
L_08A4E374:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E538;
      }
      goto L_08A4E388;
    }
L_08A4E388:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(22, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A4E3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A4E3B4u) goto L_08A4E3B4;
    return;
L_08A4E3B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E464;
      }
      goto L_08A4E3BC;
    }
L_08A4E3BC:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E3D8;
      }
      goto L_08A4E3CC;
    }
L_08A4E3CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4E3D8;
L_08A4E3D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E3EC;
      }
      goto L_08A4E3E4;
    }
L_08A4E3E4:
    ctx.set_gpr(31, 0x08A4E3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4E3ECu) goto L_08A4E3EC;
    return;
L_08A4E3EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E400;
      }
      goto L_08A4E3F8;
    }
L_08A4E3F8:
    ctx.set_gpr(31, 0x08A4E400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4E400u) goto L_08A4E400;
    return;
L_08A4E400:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E42C;
      }
      goto L_08A4E410;
    }
L_08A4E410:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E42C;
      }
      goto L_08A4E428;
    }
L_08A4E428:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4E42C;
L_08A4E42C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E458;
      }
      goto L_08A4E434;
    }
L_08A4E434:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E458;
      }
      goto L_08A4E44C;
    }
L_08A4E44C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4E458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E458u) goto L_08A4E458;
    return;
L_08A4E458:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E61C;
      }
      goto L_08A4E464;
    }
L_08A4E464:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(31, 0x08A4E484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 733u, 0x08A4B178u>(ctx, &aot_mem) && ctx.pc == 0x08A4E484u) goto L_08A4E484;
    return;
L_08A4E484:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E534;
      }
      goto L_08A4E48C;
    }
L_08A4E48C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E4A8;
      }
      goto L_08A4E49C;
    }
L_08A4E49C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4E4A8;
L_08A4E4A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E4BC;
      }
      goto L_08A4E4B4;
    }
L_08A4E4B4:
    ctx.set_gpr(31, 0x08A4E4BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4E4BCu) goto L_08A4E4BC;
    return;
L_08A4E4BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E4D0;
      }
      goto L_08A4E4C8;
    }
L_08A4E4C8:
    ctx.set_gpr(31, 0x08A4E4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4E4D0u) goto L_08A4E4D0;
    return;
L_08A4E4D0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E4FC;
      }
      goto L_08A4E4E0;
    }
L_08A4E4E0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E4FC;
      }
      goto L_08A4E4F8;
    }
L_08A4E4F8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4E4FC;
L_08A4E4FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E528;
      }
      goto L_08A4E504;
    }
L_08A4E504:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E528;
      }
      goto L_08A4E51C;
    }
L_08A4E51C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4E528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E528u) goto L_08A4E528;
    return;
L_08A4E528:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E61C;
      }
      goto L_08A4E534;
    }
L_08A4E534:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A4E538;
L_08A4E538:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E388;
      }
      goto L_08A4E544;
    }
L_08A4E544:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(79)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E57C;
      }
      goto L_08A4E550;
    }
L_08A4E550:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A4E568u);
    // nop
    goto L_08A4DF98;
L_08A4E568:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A4E57Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 774u, 0x0894B850u>(ctx, &aot_mem) && ctx.pc == 0x08A4E57Cu) goto L_08A4E57C;
    return;
L_08A4E57C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E598;
      }
      goto L_08A4E58C;
    }
L_08A4E58C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4E598;
L_08A4E598:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E5AC;
      }
      goto L_08A4E5A4;
    }
L_08A4E5A4:
    ctx.set_gpr(31, 0x08A4E5ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4E5ACu) goto L_08A4E5AC;
    return;
L_08A4E5AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E5C0;
      }
      goto L_08A4E5B8;
    }
L_08A4E5B8:
    ctx.set_gpr(31, 0x08A4E5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4E5C0u) goto L_08A4E5C0;
    return;
L_08A4E5C0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E5EC;
      }
      goto L_08A4E5D0;
    }
L_08A4E5D0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E5EC;
      }
      goto L_08A4E5E8;
    }
L_08A4E5E8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4E5EC;
L_08A4E5EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E618;
      }
      goto L_08A4E5F4;
    }
L_08A4E5F4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E618;
      }
      goto L_08A4E60C;
    }
L_08A4E60C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4E618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E618u) goto L_08A4E618;
    return;
L_08A4E618:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A4E61C;
L_08A4E61C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E64C:
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
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(22, ctx.gpr[8] + 0u);
    ctx.set_gpr(23, ctx.gpr[9] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E8AC;
      }
      goto L_08A4E694;
    }
L_08A4E694:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E6DC;
      }
      goto L_08A4E6C0;
    }
L_08A4E6C0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E6DC;
      }
      goto L_08A4E6D8;
    }
L_08A4E6D8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4E6DC;
L_08A4E6DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E6F0;
      }
      goto L_08A4E6E4;
    }
L_08A4E6E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_08A4E6F0;
L_08A4E6F0:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A4E704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 874u, 0x08907C70u>(ctx, &aot_mem) && ctx.pc == 0x08A4E704u) goto L_08A4E704;
    return;
L_08A4E704:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A4E850;
      }
      goto L_08A4E710;
    }
L_08A4E710:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E74C;
      }
      goto L_08A4E730;
    }
L_08A4E730:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E74C;
      }
      goto L_08A4E748;
    }
L_08A4E748:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4E74C;
L_08A4E74C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E760;
      }
      goto L_08A4E754;
    }
L_08A4E754:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_08A4E760;
L_08A4E760:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4E780u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4E780u) goto L_08A4E780;
    return;
L_08A4E780:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A4E790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A4E790u) goto L_08A4E790;
    return;
L_08A4E790:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E7C0;
      }
      goto L_08A4E79C;
    }
L_08A4E79C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x08A4E7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E7B0u) goto L_08A4E7B0;
    return;
L_08A4E7B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E7C0;
      }
      goto L_08A4E7B8;
    }
L_08A4E7B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E7C4;
      }
      goto L_08A4E7C0;
    }
L_08A4E7C0:
    ctx.set_gpr(20, 0u + 0u);
    goto L_08A4E7C4;
L_08A4E7C4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E7F8;
      }
      goto L_08A4E7CC;
    }
L_08A4E7CC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A4E7DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E7DCu) goto L_08A4E7DC;
    return;
L_08A4E7DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E7F8;
      }
      goto L_08A4E7E4;
    }
L_08A4E7E4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A4E7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 615u, 0x0894ACBCu>(ctx, &aot_mem) && ctx.pc == 0x08A4E7F8u) goto L_08A4E7F8;
    return;
L_08A4E7F8:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E824;
      }
      goto L_08A4E808;
    }
L_08A4E808:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E824;
      }
      goto L_08A4E820;
    }
L_08A4E820:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4E824;
L_08A4E824:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E850;
      }
      goto L_08A4E82C;
    }
L_08A4E82C:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E850;
      }
      goto L_08A4E844;
    }
L_08A4E844:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4E850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E850u) goto L_08A4E850;
    return;
L_08A4E850:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E87C;
      }
      goto L_08A4E860;
    }
L_08A4E860:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E87C;
      }
      goto L_08A4E878;
    }
L_08A4E878:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4E87C;
L_08A4E87C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E8A8;
      }
      goto L_08A4E884;
    }
L_08A4E884:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E8A8;
      }
      goto L_08A4E89C;
    }
L_08A4E89C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4E8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E8A8u) goto L_08A4E8A8;
    return;
L_08A4E8A8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A4E8AC;
L_08A4E8AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E694;
      }
      goto L_08A4E8BC;
    }
L_08A4E8BC:
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
L_08A4E8EC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25836)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E8FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A4E924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E924u) goto L_08A4E924;
    return;
L_08A4E924:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4E930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4E930u) goto L_08A4E930;
    return;
L_08A4E930:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EACC;
      }
      goto L_08A4E940;
    }
L_08A4E940:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4E950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 806u, 0x0894BA74u>(ctx, &aot_mem) && ctx.pc == 0x08A4E950u) goto L_08A4E950;
    return;
L_08A4E950:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4E95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 667u, 0x08A73E18u>(ctx, &aot_mem) && ctx.pc == 0x08A4E95Cu) goto L_08A4E95C;
    return;
L_08A4E95C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4E96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E96Cu) goto L_08A4E96C;
    return;
L_08A4E96C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E9D4;
      }
      goto L_08A4E974;
    }
L_08A4E974:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22520));
    ctx.set_gpr(31, 0x08A4E98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 617u, 0x0895A98Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E98Cu) goto L_08A4E98C;
    return;
L_08A4E98C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E9A4;
      }
      goto L_08A4E99C;
    }
L_08A4E99C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4E9A4;
L_08A4E9A4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4E9B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 807u, 0x0894BA90u>(ctx, &aot_mem) && ctx.pc == 0x08A4E9B4u) goto L_08A4E9B4;
    return;
L_08A4E9B4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A4E9CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 617u, 0x089128D0u>(ctx, &aot_mem) && ctx.pc == 0x08A4E9CCu) goto L_08A4E9CC;
    return;
L_08A4E9CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EAC8;
      }
      goto L_08A4E9D4;
    }
L_08A4E9D4:
    ctx.set_gpr(31, 0x08A4E9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 48u, 0x08A74484u>(ctx, &aot_mem) && ctx.pc == 0x08A4E9DCu) goto L_08A4E9DC;
    return;
L_08A4E9DC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4E9ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E9ECu) goto L_08A4E9EC;
    return;
L_08A4E9EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EA54;
      }
      goto L_08A4E9F4;
    }
L_08A4E9F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22524));
    ctx.set_gpr(31, 0x08A4EA0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 619u, 0x0895A9B8u>(ctx, &aot_mem) && ctx.pc == 0x08A4EA0Cu) goto L_08A4EA0C;
    return;
L_08A4EA0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EA24;
      }
      goto L_08A4EA1C;
    }
L_08A4EA1C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4EA24;
L_08A4EA24:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4EA34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 807u, 0x0894BA90u>(ctx, &aot_mem) && ctx.pc == 0x08A4EA34u) goto L_08A4EA34;
    return;
L_08A4EA34:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A4EA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 617u, 0x089128D0u>(ctx, &aot_mem) && ctx.pc == 0x08A4EA4Cu) goto L_08A4EA4C;
    return;
L_08A4EA4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EAC8;
      }
      goto L_08A4EA54;
    }
L_08A4EA54:
    ctx.set_gpr(31, 0x08A4EA5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 634u, 0x08A77A08u>(ctx, &aot_mem) && ctx.pc == 0x08A4EA5Cu) goto L_08A4EA5C;
    return;
L_08A4EA5C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4EA6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4EA6Cu) goto L_08A4EA6C;
    return;
L_08A4EA6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EAC8;
      }
      goto L_08A4EA74;
    }
L_08A4EA74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A4EA88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 622u, 0x0895AA08u>(ctx, &aot_mem) && ctx.pc == 0x08A4EA88u) goto L_08A4EA88;
    return;
L_08A4EA88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EAA0;
      }
      goto L_08A4EA98;
    }
L_08A4EA98:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4EAA0;
L_08A4EAA0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4EAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 807u, 0x0894BA90u>(ctx, &aot_mem) && ctx.pc == 0x08A4EAB0u) goto L_08A4EAB0;
    return;
L_08A4EAB0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A4EAC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 617u, 0x089128D0u>(ctx, &aot_mem) && ctx.pc == 0x08A4EAC8u) goto L_08A4EAC8;
    return;
L_08A4EAC8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A4EACC;
L_08A4EACC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A4EAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 805u, 0x0894BA64u>(ctx, &aot_mem) && ctx.pc == 0x08A4EAD8u) goto L_08A4EAD8;
    return;
L_08A4EAD8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E940;
      }
      goto L_08A4EAE4;
    }
L_08A4EAE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EAF8;
      }
      goto L_08A4EAF0;
    }
L_08A4EAF0:
    ctx.set_gpr(31, 0x08A4EAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4EAF8u) goto L_08A4EAF8;
    return;
L_08A4EAF8:
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
L_08A4EB18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4EB60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 224u, 0x08A50C40u>(ctx, &aot_mem) && ctx.pc == 0x08A4EB60u) goto L_08A4EB60;
    return;
L_08A4EB60:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EBAC;
      }
      goto L_08A4EB6C;
    }
L_08A4EB6C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4EB80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4EB80u) goto L_08A4EB80;
    return;
L_08A4EB80:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4EB94u);
    // nop
    goto L_08A4E8FC;
L_08A4EB94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A4EBACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 946u, 0x08913B50u>(ctx, &aot_mem) && ctx.pc == 0x08A4EBACu) goto L_08A4EBAC;
    return;
L_08A4EBAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EBC0;
      }
      goto L_08A4EBB8;
    }
L_08A4EBB8:
    ctx.set_gpr(31, 0x08A4EBC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4EBC0u) goto L_08A4EBC0;
    return;
L_08A4EBC0:
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
L_08A4EBE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A4EC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 787u, 0x0894B940u>(ctx, &aot_mem) && ctx.pc == 0x08A4EC14u) goto L_08A4EC14;
    return;
L_08A4EC14:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A4EC30;
      }
      goto L_08A4EC20;
    }
L_08A4EC20:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4EC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 836u, 0x0894BC68u>(ctx, &aot_mem) && ctx.pc == 0x08A4EC30u) goto L_08A4EC30;
    return;
L_08A4EC30:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08A4EC44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 774u, 0x0894B850u>(ctx, &aot_mem) && ctx.pc == 0x08A4EC44u) goto L_08A4EC44;
    return;
L_08A4EC44:
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
L_08A4EC60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
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
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4ECB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4ECB0u) goto L_08A4ECB0;
    return;
L_08A4ECB0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4ECC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4ECC4u) goto L_08A4ECC4;
    return;
L_08A4ECC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22408));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A4ECDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x08A4ECDCu) goto L_08A4ECDC;
    return;
L_08A4ECDC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A4ECF8;
      }
      goto L_08A4ECEC;
    }
L_08A4ECEC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 38u, 0x08A501B4u>(ctx, &aot_mem); return;
      }
      goto L_08A4ECF8;
    }
L_08A4ECF8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A4ED08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 629u, 0x08A4AB18u>(ctx, &aot_mem) && ctx.pc == 0x08A4ED08u) goto L_08A4ED08;
    return;
L_08A4ED08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4ED3C;
      }
      goto L_08A4ED1C;
    }
L_08A4ED1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4ED3Cu);
    // nop
    goto L_08A4EB18;
L_08A4ED3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22528));
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A4ED5Cu);
    // nop
    goto L_08A4EBE4;
L_08A4ED5C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22548));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4ED84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x08A4ED84u) goto L_08A4ED84;
    return;
L_08A4ED84:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EE4C;
      }
      goto L_08A4ED90;
    }
L_08A4ED90:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EDBC;
      }
      goto L_08A4EDA0;
    }
L_08A4EDA0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EDBC;
      }
      goto L_08A4EDB8;
    }
L_08A4EDB8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4EDBC;
L_08A4EDBC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EDE8;
      }
      goto L_08A4EDC4;
    }
L_08A4EDC4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EDE8;
      }
      goto L_08A4EDDC;
    }
L_08A4EDDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4EDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4EDE8u) goto L_08A4EDE8;
    return;
L_08A4EDE8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EE14;
      }
      goto L_08A4EDF8;
    }
L_08A4EDF8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EE14;
      }
      goto L_08A4EE10;
    }
L_08A4EE10:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4EE14;
L_08A4EE14:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EE40;
      }
      goto L_08A4EE1C;
    }
L_08A4EE1C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EE40;
      }
      goto L_08A4EE34;
    }
L_08A4EE34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4EE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4EE40u) goto L_08A4EE40;
    return;
L_08A4EE40:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 38u, 0x08A501B4u>(ctx, &aot_mem); return;
      }
      goto L_08A4EE4C;
    }
L_08A4EE4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A4EE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x08A4EE68u) goto L_08A4EE68;
    return;
L_08A4EE68:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A4EF34;
      }
      goto L_08A4EE78;
    }
L_08A4EE78:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EEA4;
      }
      goto L_08A4EE88;
    }
L_08A4EE88:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EEA4;
      }
      goto L_08A4EEA0;
    }
L_08A4EEA0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4EEA4;
L_08A4EEA4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EED0;
      }
      goto L_08A4EEAC;
    }
L_08A4EEAC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EED0;
      }
      goto L_08A4EEC4;
    }
L_08A4EEC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4EED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4EED0u) goto L_08A4EED0;
    return;
L_08A4EED0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EEFC;
      }
      goto L_08A4EEE0;
    }
L_08A4EEE0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EEFC;
      }
      goto L_08A4EEF8;
    }
L_08A4EEF8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4EEFC;
L_08A4EEFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EF28;
      }
      goto L_08A4EF04;
    }
L_08A4EF04:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EF28;
      }
      goto L_08A4EF1C;
    }
L_08A4EF1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4EF28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4EF28u) goto L_08A4EF28;
    return;
L_08A4EF28:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 38u, 0x08A501B4u>(ctx, &aot_mem); return;
      }
      goto L_08A4EF34;
    }
L_08A4EF34:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A4EF40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4EF40u) goto L_08A4EF40;
    return;
L_08A4EF40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4EF4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 710u, 0x088E7BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A4EF4Cu) goto L_08A4EF4C;
    return;
L_08A4EF4C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22564));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08A4EF70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 746u, 0x089533D0u>(ctx, &aot_mem) && ctx.pc == 0x08A4EF70u) goto L_08A4EF70;
    return;
L_08A4EF70:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F04C;
      }
      goto L_08A4EF7C;
    }
L_08A4EF7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EF90;
      }
      goto L_08A4EF88;
    }
L_08A4EF88:
    ctx.set_gpr(31, 0x08A4EF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4EF90u) goto L_08A4EF90;
    return;
L_08A4EF90:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EFBC;
      }
      goto L_08A4EFA0;
    }
L_08A4EFA0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EFBC;
      }
      goto L_08A4EFB8;
    }
L_08A4EFB8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4EFBC;
L_08A4EFBC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EFE8;
      }
      goto L_08A4EFC4;
    }
L_08A4EFC4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EFE8;
      }
      goto L_08A4EFDC;
    }
L_08A4EFDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4EFE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4EFE8u) goto L_08A4EFE8;
    return;
L_08A4EFE8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F014;
      }
      goto L_08A4EFF8;
    }
L_08A4EFF8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F014;
      }
      goto L_08A4F010;
    }
L_08A4F010:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4F014;
L_08A4F014:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F040;
      }
      goto L_08A4F01C;
    }
L_08A4F01C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F040;
      }
      goto L_08A4F034;
    }
L_08A4F034:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4F040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F040u) goto L_08A4F040;
    return;
L_08A4F040:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 38u, 0x08A501B4u>(ctx, &aot_mem); return;
      }
      goto L_08A4F04C;
    }
L_08A4F04C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A4F060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F060u) goto L_08A4F060;
    return;
L_08A4F060:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4F06Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 710u, 0x088E7BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F06Cu) goto L_08A4F06C;
    return;
L_08A4F06C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A4F07Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F07Cu) goto L_08A4F07C;
    return;
L_08A4F07C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4F088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 710u, 0x088E7BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F088u) goto L_08A4F088;
    return;
L_08A4F088:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22572));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4F0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x08A4F0B8u) goto L_08A4F0B8;
    return;
L_08A4F0B8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F61C;
      }
      goto L_08A4F0C4;
    }
L_08A4F0C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A4F0E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F0E0u) goto L_08A4F0E0;
    return;
L_08A4F0E0:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A4F104u);
    // nop
    goto L_08A4DFA4;
L_08A4F104:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F120;
      }
      goto L_08A4F114;
    }
L_08A4F114:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4F120;
L_08A4F120:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08A4F130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F130u) goto L_08A4F130;
    return;
L_08A4F130:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F144;
      }
      goto L_08A4F13C;
    }
L_08A4F13C:
    ctx.set_gpr(31, 0x08A4F144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4F144u) goto L_08A4F144;
    return;
L_08A4F144:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F158;
      }
      goto L_08A4F150;
    }
L_08A4F150:
    ctx.set_gpr(31, 0x08A4F158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4F158u) goto L_08A4F158;
    return;
L_08A4F158:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A4F164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F164u) goto L_08A4F164;
    return;
L_08A4F164:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4F170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 710u, 0x088E7BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F170u) goto L_08A4F170;
    return;
L_08A4F170:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22512));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08A4F194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 746u, 0x089533D0u>(ctx, &aot_mem) && ctx.pc == 0x08A4F194u) goto L_08A4F194;
    return;
L_08A4F194:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A4F1A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F1A0u) goto L_08A4F1A0;
    return;
L_08A4F1A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4F1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4F1ACu) goto L_08A4F1AC;
    return;
L_08A4F1AC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A4F1BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F1BCu) goto L_08A4F1BC;
    return;
L_08A4F1BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4F1C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4F1C8u) goto L_08A4F1C8;
    return;
L_08A4F1C8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F5D0;
      }
      goto L_08A4F1D4;
    }
L_08A4F1D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08A4F1F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F1F0u) goto L_08A4F1F0;
    return;
L_08A4F1F0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22448));
    ctx.set_gpr(31, 0x08A4F208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A4F208u) goto L_08A4F208;
    return;
L_08A4F208:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22448));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4F224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 568u, 0x0895A66Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F224u) goto L_08A4F224;
    return;
L_08A4F224:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(31, 0x08A4F234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F234u) goto L_08A4F234;
    return;
L_08A4F234:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F250;
      }
      goto L_08A4F248;
    }
L_08A4F248:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4F250;
L_08A4F250:
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4F268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 691u, 0x08953010u>(ctx, &aot_mem) && ctx.pc == 0x08A4F268u) goto L_08A4F268;
    return;
L_08A4F268:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F310;
      }
      goto L_08A4F274;
    }
L_08A4F274:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08A4F294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F294u) goto L_08A4F294;
    return;
L_08A4F294:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22484));
    ctx.set_gpr(31, 0x08A4F2ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A4F2ACu) goto L_08A4F2AC;
    return;
L_08A4F2AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22484));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4F2C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 568u, 0x0895A66Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F2C8u) goto L_08A4F2C8;
    return;
L_08A4F2C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(31, 0x08A4F2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F2D8u) goto L_08A4F2D8;
    return;
L_08A4F2D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F2F4;
      }
      goto L_08A4F2EC;
    }
L_08A4F2EC:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4F2F4;
L_08A4F2F4:
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4F30Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 691u, 0x08953010u>(ctx, &aot_mem) && ctx.pc == 0x08A4F30Cu) goto L_08A4F30C;
    return;
L_08A4F30C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    goto L_08A4F310;
L_08A4F310:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F54C;
      }
      goto L_08A4F318;
    }
L_08A4F318:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F330;
      }
      goto L_08A4F328;
    }
L_08A4F328:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4F330;
L_08A4F330:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F344;
      }
      goto L_08A4F338;
    }
L_08A4F338:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F390;
      }
      goto L_08A4F344;
    }
L_08A4F344:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F37C;
      }
      goto L_08A4F354;
    }
L_08A4F354:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A4F360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08A4F360u) goto L_08A4F360;
    return;
L_08A4F360:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F374;
      }
      goto L_08A4F368;
    }
L_08A4F368:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4F374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4F374u) goto L_08A4F374;
    return;
L_08A4F374:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08A4F37C;
L_08A4F37C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4F390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08A4F390u) goto L_08A4F390;
    return;
L_08A4F390:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4F3ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x08A4F3ACu) goto L_08A4F3AC;
    return;
L_08A4F3AC:
    ctx.set_gpr(3, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F3DC;
      }
      goto L_08A4F3C8;
    }
L_08A4F3C8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08A4F3D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F3D4u) goto L_08A4F3D4;
    return;
L_08A4F3D4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A4F3DC;
L_08A4F3DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F3FC;
      }
      goto L_08A4F3E4;
    }
L_08A4F3E4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08A4F3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F3F0u) goto L_08A4F3F0;
    return;
L_08A4F3F0:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A4F3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08A4F3FCu) goto L_08A4F3FC;
    return;
L_08A4F3FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F420;
      }
      goto L_08A4F40C;
    }
L_08A4F40C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4F418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F418u) goto L_08A4F418;
    return;
L_08A4F418:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A4F420;
L_08A4F420:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F438;
      }
      goto L_08A4F428;
    }
L_08A4F428:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08A4F438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08A4F438u) goto L_08A4F438;
    return;
L_08A4F438:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F46C;
      }
      goto L_08A4F450;
    }
L_08A4F450:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F46C;
      }
      goto L_08A4F468;
    }
L_08A4F468:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4F46C;
L_08A4F46C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F498;
      }
      goto L_08A4F474;
    }
L_08A4F474:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F498;
      }
      goto L_08A4F48C;
    }
L_08A4F48C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4F498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F498u) goto L_08A4F498;
    return;
L_08A4F498:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4F4B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x08A4F4B8u) goto L_08A4F4B8;
    return;
L_08A4F4B8:
    ctx.set_gpr(3, ctx.gpr[23] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F4E8;
      }
      goto L_08A4F4D4;
    }
L_08A4F4D4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A4F4E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F4E0u) goto L_08A4F4E0;
    return;
L_08A4F4E0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A4F4E8;
L_08A4F4E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F508;
      }
      goto L_08A4F4F0;
    }
L_08A4F4F0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A4F4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F4FCu) goto L_08A4F4FC;
    return;
L_08A4F4FC:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A4F508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08A4F508u) goto L_08A4F508;
    return;
L_08A4F508:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F52C;
      }
      goto L_08A4F518;
    }
L_08A4F518:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4F524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F524u) goto L_08A4F524;
    return;
L_08A4F524:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A4F52C;
L_08A4F52C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F544;
      }
      goto L_08A4F534;
    }
L_08A4F534:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08A4F544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08A4F544u) goto L_08A4F544;
    return;
L_08A4F544:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A4F54C;
L_08A4F54C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F580;
      }
      goto L_08A4F564;
    }
L_08A4F564:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F580;
      }
      goto L_08A4F57C;
    }
L_08A4F57C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4F580;
L_08A4F580:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F5AC;
      }
      goto L_08A4F588;
    }
L_08A4F588:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F5AC;
      }
      goto L_08A4F5A0;
    }
L_08A4F5A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4F5ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F5ACu) goto L_08A4F5AC;
    return;
L_08A4F5AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A4F5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A4F5BCu) goto L_08A4F5BC;
    return;
L_08A4F5BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A4F5D0;
L_08A4F5D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F1D4;
      }
      goto L_08A4F5E0;
    }
L_08A4F5E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F5F4;
      }
      goto L_08A4F5EC;
    }
L_08A4F5EC:
    ctx.set_gpr(31, 0x08A4F5F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4F5F4u) goto L_08A4F5F4;
    return;
L_08A4F5F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F608;
      }
      goto L_08A4F600;
    }
L_08A4F600:
    ctx.set_gpr(31, 0x08A4F608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4F608u) goto L_08A4F608;
    return;
L_08A4F608:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F61C;
      }
      goto L_08A4F614;
    }
L_08A4F614:
    ctx.set_gpr(31, 0x08A4F61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4F61Cu) goto L_08A4F61C;
    return;
L_08A4F61C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F644;
      }
      goto L_08A4F628;
    }
L_08A4F628:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A4F634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 91u, 0x08A0C74Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F634u) goto L_08A4F634;
    return;
L_08A4F634:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4F644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F644u) goto L_08A4F644;
    return;
L_08A4F644:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22584));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(143));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4F66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F66Cu) goto L_08A4F66C;
    return;
L_08A4F66C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F68C;
      }
      goto L_08A4F674;
    }
L_08A4F674:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(143)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4F68Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4F68Cu) goto L_08A4F68C;
    return;
L_08A4F68C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4F6A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4F6A4u) goto L_08A4F6A4;
    return;
L_08A4F6A4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4F6BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4F6BCu) goto L_08A4F6BC;
    return;
L_08A4F6BC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A4F6C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F6C8u) goto L_08A4F6C8;
    return;
L_08A4F6C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4F6D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 710u, 0x088E7BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F6D4u) goto L_08A4F6D4;
    return;
L_08A4F6D4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 8u, 0x08A50038u>(ctx, &aot_mem); return;
      }
      goto L_08A4F6E4;
    }
L_08A4F6E4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A4F6F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 818u, 0x08A5F8B0u>(ctx, &aot_mem) && ctx.pc == 0x08A4F6F8u) goto L_08A4F6F8;
    return;
L_08A4F6F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A4F724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F724u) goto L_08A4F724;
    return;
L_08A4F724:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A4F8AC;
      }
      goto L_08A4F734;
    }
L_08A4F734:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F748;
      }
      goto L_08A4F740;
    }
L_08A4F740:
    ctx.set_gpr(31, 0x08A4F748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4F748u) goto L_08A4F748;
    return;
L_08A4F748:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F75C;
      }
      goto L_08A4F754;
    }
L_08A4F754:
    ctx.set_gpr(31, 0x08A4F75Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4F75Cu) goto L_08A4F75C;
    return;
L_08A4F75C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F770;
      }
      goto L_08A4F768;
    }
L_08A4F768:
    ctx.set_gpr(31, 0x08A4F770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4F770u) goto L_08A4F770;
    return;
L_08A4F770:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F784;
      }
      goto L_08A4F77C;
    }
L_08A4F77C:
    ctx.set_gpr(31, 0x08A4F784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4F784u) goto L_08A4F784;
    return;
L_08A4F784:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F7B0;
      }
      goto L_08A4F794;
    }
L_08A4F794:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F7B0;
      }
      goto L_08A4F7AC;
    }
L_08A4F7AC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4F7B0;
L_08A4F7B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F7DC;
      }
      goto L_08A4F7B8;
    }
L_08A4F7B8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F7DC;
      }
      goto L_08A4F7D0;
    }
L_08A4F7D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4F7DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F7DCu) goto L_08A4F7DC;
    return;
L_08A4F7DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F7F0;
      }
      goto L_08A4F7E8;
    }
L_08A4F7E8:
    ctx.set_gpr(31, 0x08A4F7F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4F7F0u) goto L_08A4F7F0;
    return;
L_08A4F7F0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F81C;
      }
      goto L_08A4F800;
    }
L_08A4F800:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F81C;
      }
      goto L_08A4F818;
    }
L_08A4F818:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4F81C;
L_08A4F81C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F848;
      }
      goto L_08A4F824;
    }
L_08A4F824:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F848;
      }
      goto L_08A4F83C;
    }
L_08A4F83C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4F848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F848u) goto L_08A4F848;
    return;
L_08A4F848:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F874;
      }
      goto L_08A4F858;
    }
L_08A4F858:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F874;
      }
      goto L_08A4F870;
    }
L_08A4F870:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4F874;
L_08A4F874:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F8A0;
      }
      goto L_08A4F87C;
    }
L_08A4F87C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F8A0;
      }
      goto L_08A4F894;
    }
L_08A4F894:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4F8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F8A0u) goto L_08A4F8A0;
    return;
L_08A4F8A0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 38u, 0x08A501B4u>(ctx, &aot_mem); return;
      }
      goto L_08A4F8AC;
    }
L_08A4F8AC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F8C8;
      }
      goto L_08A4F8BC;
    }
L_08A4F8BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4F8C8;
L_08A4F8C8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F8E4;
      }
      goto L_08A4F8D8;
    }
L_08A4F8D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4F8E4;
L_08A4F8E4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F900;
      }
      goto L_08A4F8F4;
    }
L_08A4F8F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4F900;
L_08A4F900:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F920;
      }
      goto L_08A4F914;
    }
L_08A4F914:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4F920;
L_08A4F920:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(22604));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25628)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08A4F948u);
    // nop
    goto L_08A4C6F0;
L_08A4F948:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08A4F958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F958u) goto L_08A4F958;
    return;
L_08A4F958:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F96C;
      }
      goto L_08A4F964;
    }
L_08A4F964:
    ctx.set_gpr(31, 0x08A4F96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4F96Cu) goto L_08A4F96C;
    return;
L_08A4F96C:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FC60;
      }
      goto L_08A4F978;
    }
L_08A4F978:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F9A4;
      }
      goto L_08A4F980;
    }
L_08A4F980:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25628)));
    ctx.set_gpr(31, 0x08A4F994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F994u) goto L_08A4F994;
    return;
L_08A4F994:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F9A4;
      }
      goto L_08A4F99C;
    }
L_08A4F99C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F9A8;
      }
      goto L_08A4F9A4;
    }
L_08A4F9A4:
    ctx.set_gpr(21, 0u + 0u);
    goto L_08A4F9A8;
L_08A4F9A8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A4F9B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F9B8u) goto L_08A4F9B8;
    return;
L_08A4F9B8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08A4F9D8u);
    // nop
    goto L_08A4E64C;
L_08A4F9D8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(22616));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25628)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08A4FA00u);
    // nop
    goto L_08A4C6F0;
L_08A4FA00:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08A4FA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4FA10u) goto L_08A4FA10;
    return;
L_08A4FA10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FA24;
      }
      goto L_08A4FA1C;
    }
L_08A4FA1C:
    ctx.set_gpr(31, 0x08A4FA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FA24u) goto L_08A4FA24;
    return;
L_08A4FA24:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FBF8;
      }
      goto L_08A4FA30;
    }
L_08A4FA30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FA44;
      }
      goto L_08A4FA3C;
    }
L_08A4FA3C:
    ctx.set_gpr(31, 0x08A4FA44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FA44u) goto L_08A4FA44;
    return;
L_08A4FA44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FA58;
      }
      goto L_08A4FA50;
    }
L_08A4FA50:
    ctx.set_gpr(31, 0x08A4FA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FA58u) goto L_08A4FA58;
    return;
L_08A4FA58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FA6C;
      }
      goto L_08A4FA64;
    }
L_08A4FA64:
    ctx.set_gpr(31, 0x08A4FA6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FA6Cu) goto L_08A4FA6C;
    return;
L_08A4FA6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FA80;
      }
      goto L_08A4FA78;
    }
L_08A4FA78:
    ctx.set_gpr(31, 0x08A4FA80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FA80u) goto L_08A4FA80;
    return;
L_08A4FA80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FA94;
      }
      goto L_08A4FA8C;
    }
L_08A4FA8C:
    ctx.set_gpr(31, 0x08A4FA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FA94u) goto L_08A4FA94;
    return;
L_08A4FA94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FAA8;
      }
      goto L_08A4FAA0;
    }
L_08A4FAA0:
    ctx.set_gpr(31, 0x08A4FAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FAA8u) goto L_08A4FAA8;
    return;
L_08A4FAA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FABC;
      }
      goto L_08A4FAB4;
    }
L_08A4FAB4:
    ctx.set_gpr(31, 0x08A4FABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FABCu) goto L_08A4FABC;
    return;
L_08A4FABC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FAD0;
      }
      goto L_08A4FAC8;
    }
L_08A4FAC8:
    ctx.set_gpr(31, 0x08A4FAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FAD0u) goto L_08A4FAD0;
    return;
L_08A4FAD0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FAFC;
      }
      goto L_08A4FAE0;
    }
L_08A4FAE0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FAFC;
      }
      goto L_08A4FAF8;
    }
L_08A4FAF8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4FAFC;
L_08A4FAFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FB28;
      }
      goto L_08A4FB04;
    }
L_08A4FB04:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FB28;
      }
      goto L_08A4FB1C;
    }
L_08A4FB1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4FB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4FB28u) goto L_08A4FB28;
    return;
L_08A4FB28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FB3C;
      }
      goto L_08A4FB34;
    }
L_08A4FB34:
    ctx.set_gpr(31, 0x08A4FB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FB3Cu) goto L_08A4FB3C;
    return;
L_08A4FB3C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FB68;
      }
      goto L_08A4FB4C;
    }
L_08A4FB4C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FB68;
      }
      goto L_08A4FB64;
    }
L_08A4FB64:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4FB68;
L_08A4FB68:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FB94;
      }
      goto L_08A4FB70;
    }
L_08A4FB70:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FB94;
      }
      goto L_08A4FB88;
    }
L_08A4FB88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4FB94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4FB94u) goto L_08A4FB94;
    return;
L_08A4FB94:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FBC0;
      }
      goto L_08A4FBA4;
    }
L_08A4FBA4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FBC0;
      }
      goto L_08A4FBBC;
    }
L_08A4FBBC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4FBC0;
L_08A4FBC0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FBEC;
      }
      goto L_08A4FBC8;
    }
L_08A4FBC8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FBEC;
      }
      goto L_08A4FBE0;
    }
L_08A4FBE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4FBECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4FBECu) goto L_08A4FBEC;
    return;
L_08A4FBEC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 38u, 0x08A501B4u>(ctx, &aot_mem); return;
      }
      goto L_08A4FBF8;
    }
L_08A4FBF8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FC24;
      }
      goto L_08A4FC00;
    }
L_08A4FC00:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25628)));
    ctx.set_gpr(31, 0x08A4FC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4FC14u) goto L_08A4FC14;
    return;
L_08A4FC14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FC24;
      }
      goto L_08A4FC1C;
    }
L_08A4FC1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FC28;
      }
      goto L_08A4FC24;
    }
L_08A4FC24:
    ctx.set_gpr(21, 0u + 0u);
    goto L_08A4FC28;
L_08A4FC28:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A4FC38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4FC38u) goto L_08A4FC38;
    return;
L_08A4FC38:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08A4FC58u);
    // nop
    goto L_08A4E64C;
L_08A4FC58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FEF0;
      }
      goto L_08A4FC60;
    }
L_08A4FC60:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(22324));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25628)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08A4FC88u);
    // nop
    goto L_08A4C6F0;
L_08A4FC88:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A4FC98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4FC98u) goto L_08A4FC98;
    return;
L_08A4FC98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FCAC;
      }
      goto L_08A4FCA4;
    }
L_08A4FCA4:
    ctx.set_gpr(31, 0x08A4FCACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FCACu) goto L_08A4FCAC;
    return;
L_08A4FCAC:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FE80;
      }
      goto L_08A4FCB8;
    }
L_08A4FCB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FCCC;
      }
      goto L_08A4FCC4;
    }
L_08A4FCC4:
    ctx.set_gpr(31, 0x08A4FCCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FCCCu) goto L_08A4FCCC;
    return;
L_08A4FCCC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FCE0;
      }
      goto L_08A4FCD8;
    }
L_08A4FCD8:
    ctx.set_gpr(31, 0x08A4FCE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FCE0u) goto L_08A4FCE0;
    return;
L_08A4FCE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FCF4;
      }
      goto L_08A4FCEC;
    }
L_08A4FCEC:
    ctx.set_gpr(31, 0x08A4FCF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FCF4u) goto L_08A4FCF4;
    return;
L_08A4FCF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FD08;
      }
      goto L_08A4FD00;
    }
L_08A4FD00:
    ctx.set_gpr(31, 0x08A4FD08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FD08u) goto L_08A4FD08;
    return;
L_08A4FD08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FD1C;
      }
      goto L_08A4FD14;
    }
L_08A4FD14:
    ctx.set_gpr(31, 0x08A4FD1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FD1Cu) goto L_08A4FD1C;
    return;
L_08A4FD1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FD30;
      }
      goto L_08A4FD28;
    }
L_08A4FD28:
    ctx.set_gpr(31, 0x08A4FD30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FD30u) goto L_08A4FD30;
    return;
L_08A4FD30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FD44;
      }
      goto L_08A4FD3C;
    }
L_08A4FD3C:
    ctx.set_gpr(31, 0x08A4FD44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FD44u) goto L_08A4FD44;
    return;
L_08A4FD44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FD58;
      }
      goto L_08A4FD50;
    }
L_08A4FD50:
    ctx.set_gpr(31, 0x08A4FD58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FD58u) goto L_08A4FD58;
    return;
L_08A4FD58:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FD84;
      }
      goto L_08A4FD68;
    }
L_08A4FD68:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FD84;
      }
      goto L_08A4FD80;
    }
L_08A4FD80:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4FD84;
L_08A4FD84:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FDB0;
      }
      goto L_08A4FD8C;
    }
L_08A4FD8C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FDB0;
      }
      goto L_08A4FDA4;
    }
L_08A4FDA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4FDB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4FDB0u) goto L_08A4FDB0;
    return;
L_08A4FDB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FDC4;
      }
      goto L_08A4FDBC;
    }
L_08A4FDBC:
    ctx.set_gpr(31, 0x08A4FDC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FDC4u) goto L_08A4FDC4;
    return;
L_08A4FDC4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FDF0;
      }
      goto L_08A4FDD4;
    }
L_08A4FDD4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FDF0;
      }
      goto L_08A4FDEC;
    }
L_08A4FDEC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4FDF0;
L_08A4FDF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FE1C;
      }
      goto L_08A4FDF8;
    }
L_08A4FDF8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FE1C;
      }
      goto L_08A4FE10;
    }
L_08A4FE10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4FE1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4FE1Cu) goto L_08A4FE1C;
    return;
L_08A4FE1C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FE48;
      }
      goto L_08A4FE2C;
    }
L_08A4FE2C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FE48;
      }
      goto L_08A4FE44;
    }
L_08A4FE44:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4FE48;
L_08A4FE48:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FE74;
      }
      goto L_08A4FE50;
    }
L_08A4FE50:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FE74;
      }
      goto L_08A4FE68;
    }
L_08A4FE68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4FE74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4FE74u) goto L_08A4FE74;
    return;
L_08A4FE74:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 38u, 0x08A501B4u>(ctx, &aot_mem); return;
      }
      goto L_08A4FE80;
    }
L_08A4FE80:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FEAC;
      }
      goto L_08A4FE88;
    }
L_08A4FE88:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25628)));
    ctx.set_gpr(31, 0x08A4FE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4FE9Cu) goto L_08A4FE9C;
    return;
L_08A4FE9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FEAC;
      }
      goto L_08A4FEA4;
    }
L_08A4FEA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FEB0;
      }
      goto L_08A4FEAC;
    }
L_08A4FEAC:
    ctx.set_gpr(21, 0u + 0u);
    goto L_08A4FEB0;
L_08A4FEB0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A4FEC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4FEC0u) goto L_08A4FEC0;
    return;
L_08A4FEC0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08A4FED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4FED0u) goto L_08A4FED0;
    return;
L_08A4FED0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08A4FEF0u);
    // nop
    goto L_08A4E64C;
L_08A4FEF0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(22628));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25068)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08A4FF18u);
    // nop
    goto L_08A4C6F0;
L_08A4FF18:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A4FF28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4FF28u) goto L_08A4FF28;
    return;
L_08A4FF28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF3C;
      }
      goto L_08A4FF34;
    }
L_08A4FF34:
    ctx.set_gpr(31, 0x08A4FF3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FF3Cu) goto L_08A4FF3C;
    return;
L_08A4FF3C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FFA8;
      }
      goto L_08A4FF48;
    }
L_08A4FF48:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF74;
      }
      goto L_08A4FF50;
    }
L_08A4FF50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25068)));
    ctx.set_gpr(31, 0x08A4FF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4FF64u) goto L_08A4FF64;
    return;
L_08A4FF64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF74;
      }
      goto L_08A4FF6C;
    }
L_08A4FF6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF78;
      }
      goto L_08A4FF74;
    }
L_08A4FF74:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A4FF78;
L_08A4FF78:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4FF88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4FF88u) goto L_08A4FF88;
    return;
L_08A4FF88:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08A4FFA8u);
    // nop
    goto L_08A4E64C;
L_08A4FFA8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08A4FFBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 661u, 0x08A5ECF4u>(ctx, &aot_mem) && ctx.pc == 0x08A4FFBCu) goto L_08A4FFBC;
    return;
L_08A4FFBC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08A4FFD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 667u, 0x08A5ED70u>(ctx, &aot_mem) && ctx.pc == 0x08A4FFD0u) goto L_08A4FFD0;
    return;
L_08A4FFD0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A4FFE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 673u, 0x08A5EDECu>(ctx, &aot_mem) && ctx.pc == 0x08A4FFE4u) goto L_08A4FFE4;
    return;
L_08A4FFE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FFF8;
      }
      goto L_08A4FFF0;
    }
L_08A4FFF0:
    ctx.set_gpr(31, 0x08A4FFF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4FFF8u) goto L_08A4FFF8;
    return;
L_08A4FFF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 3u, 0x08A5000Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 2u, 0x08A50004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0146(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0146_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_146(Runtime &runtime) {
    runtime.register_generated_unit(146u, 0x08A4C000u, 16384u, &recomp_unit_0146, &recomp_unit_0146_entry);
    runtime.register_function(0x08A4C000u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C00Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C014u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C028u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C030u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C040u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C058u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C05Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C064u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C07Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C088u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C094u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C09Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C0A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C0C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C0D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C0DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C0E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C0F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C10Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C110u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C118u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C130u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C13Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C148u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C150u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C15Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C168u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C170u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C178u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C184u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C194u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C1A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C1A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C1B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C1BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C1D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C1E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C1F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C210u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C214u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C21Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C234u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C240u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C24Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C254u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C264u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C27Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C298u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C304u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C310u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C318u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C328u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C340u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C344u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C34Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C364u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C370u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C37Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C384u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C390u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C408u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C414u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C420u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C428u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C434u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C44Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C468u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C470u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C47Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C484u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C490u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C498u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C4A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C4C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C4C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C4CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C4E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C4F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C4FCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C504u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C510u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C51Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C524u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C530u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C538u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C540u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C550u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C568u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C56Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C574u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C58Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C598u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C5A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C5ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C5B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C5C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C5D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C5ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C5F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C5F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C610u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C61Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C628u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C630u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C63Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C64Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C65Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C674u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C678u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C680u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C698u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C6A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C6B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C6B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C6BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C6F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C748u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C754u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C760u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C76Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C784u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C798u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C7A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C7B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C7C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C7CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C7E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C7F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C814u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C828u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C830u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C848u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C850u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C86Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C878u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C884u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C890u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C8A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C8ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C8B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C8C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C8D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C8E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C8ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C8F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C90Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C918u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C924u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C92Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C938u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C940u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C94Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C958u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C968u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C978u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C984u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C990u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C998u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C9A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C9C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C9C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C9CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C9E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C9F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C9FCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA04u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA10u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA18u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA24u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA34u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA48u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA70u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA80u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA8Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA98u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAB4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CABCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAD4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAE8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAF0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB00u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB1Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB34u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB5Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB8Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBB8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBC0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBCCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBDCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBE8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC10u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC1Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC34u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC40u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC54u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC60u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC74u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC88u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC90u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC9Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CCA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CCC0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CCC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CCDCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CCF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD0Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD20u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD3Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD50u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD7Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CDB4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CDC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CDD0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CDF0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE20u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE40u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE58u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE60u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE6Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE74u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE84u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE9Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CEA0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CEA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CEC0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CECCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CED8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CEE0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CEECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CEF4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF00u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF08u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF24u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF38u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF60u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFA0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFBCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFD8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFE4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFF4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D004u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D01Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D034u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D038u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D040u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D058u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D064u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D08Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D100u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D104u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D10Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D124u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D130u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D138u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D160u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D170u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D188u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D18Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D194u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D1ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D1B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D1D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D1D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D1E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D1FCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D208u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D210u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D224u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D22Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D248u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D27Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D288u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D298u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D2A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D2B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D2B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D2C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D2CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D2D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D2E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D2F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D308u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D30Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D314u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D32Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D338u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D344u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D34Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D358u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D360u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D36Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D378u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D380u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D38Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D39Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D40Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D418u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D420u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D428u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D434u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D440u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D450u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D45Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D464u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D46Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D47Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D494u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D504u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D50Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D530u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D544u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D574u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D580u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D588u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D5A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D5ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D5B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D5C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D5E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D5ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D5F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D608u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D614u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D61Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D628u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D630u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D638u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D658u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D664u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D674u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D680u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D68Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D694u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D700u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D70Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D714u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D720u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D72Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D73Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D74Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D758u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D764u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D76Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D77Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D794u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D798u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D808u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D81Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D838u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D844u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D84Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D854u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D860u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D86Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D87Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D888u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D890u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D898u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D8A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D8BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D8C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D8D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D8ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D908u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D91Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D924u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D93Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D944u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D954u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D960u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D970u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D988u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D98Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D994u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D9ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D9B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D9C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D9CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D9D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D9E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D9ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D9FCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA6Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA88u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DAA4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DABCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DAC0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DAC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DAE0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DAECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DAF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB00u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB0Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB20u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB40u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB5Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB74u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB7Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB8Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBA4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBD4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBE0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBE8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBF4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBFCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC08u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC18u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC20u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC3Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC48u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC50u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC60u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC7Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC84u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC9Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCB4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCBCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCD0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCDCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCF4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD04u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD24u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD3Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD50u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD58u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD80u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD84u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD8Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDA4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDBCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDD0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDD8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDE4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDF4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE08u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE24u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE38u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE40u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE58u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE74u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE7Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE84u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DEA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DEB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DEBCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DEC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DED4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DEE0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DEF0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF08u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF0Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF2Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF38u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF58u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF60u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF98u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DFA4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DFF0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E000u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E010u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E01Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E024u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E04Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E058u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E068u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E074u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E084u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E09Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E0A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E0A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E0C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E0CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E0D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E0ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E0F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E108u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E114u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E124u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E13Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E140u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E148u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E160u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E16Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E178u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E1ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E1B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E1D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E1E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E1ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E200u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E208u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E214u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E220u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E230u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E248u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E24Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E254u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E26Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E278u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E284u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E298u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E2A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E2B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E2C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E2CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E2D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E2E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E2FCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E300u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E308u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E320u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E32Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E338u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E344u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E350u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E374u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E388u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E3B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E3BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E3CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E3D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E3E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E3ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E3F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E400u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E410u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E428u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E42Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E434u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E44Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E458u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E464u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E484u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E48Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E49Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4FCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E504u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E51Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E528u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E534u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E538u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E544u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E550u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E568u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E57Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E58Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E598u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E5A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E5ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E5B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E5C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E5D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E5E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E5ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E5F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E60Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E618u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E61Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E64Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E694u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E704u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E710u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E730u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E748u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E74Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E754u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E760u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E780u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E790u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E79Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E7B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E7B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E7C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E7C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E7CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E7DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E7E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E7F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E808u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E820u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E824u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E82Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E844u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E850u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E860u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E878u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E87Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E884u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E89Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E8A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E8ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E8BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E8ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E8FCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E924u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E930u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E940u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E950u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E95Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E96Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E974u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E98Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E99Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E9A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E9B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E9CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E9D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E9DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E9ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E9F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA0Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA1Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA24u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA34u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA54u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA5Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA6Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA74u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA88u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA98u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EAA0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EAB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EAC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EACCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EAD8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EAE4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EAF0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EAF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EB18u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EB60u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EB6Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EB80u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EB94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EBACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EBB8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EBC0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EBE4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EC14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EC20u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EC30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EC44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EC60u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ECB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ECC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ECDCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ECECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ECF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ED08u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ED1Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ED3Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ED5Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ED84u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ED90u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EDA0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EDB8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EDBCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EDC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EDDCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EDE8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EDF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE10u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE1Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE34u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE40u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE88u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EEA0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EEA4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EEACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EEC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EED0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EEE0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EEF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EEFCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF04u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF1Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF28u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF34u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF40u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF70u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF7Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF88u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF90u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EFA0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EFB8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EFBCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EFC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EFDCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EFE8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EFF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F010u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F014u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F01Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F034u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F040u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F04Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F060u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F06Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F07Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F088u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F0B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F0C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F0E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F104u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F114u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F120u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F130u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F13Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F144u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F150u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F158u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F164u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F170u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F194u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F1A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F1ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F1BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F1C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F1D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F1F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F208u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F224u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F234u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F248u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F250u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F268u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F274u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F294u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F2ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F2C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F2D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F2ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F2F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F30Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F310u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F318u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F328u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F330u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F338u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F344u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F354u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F360u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F368u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F374u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F37Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F390u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F3ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F3C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F3D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F3DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F3E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F3F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F3FCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F40Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F418u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F420u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F428u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F438u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F450u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F468u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F46Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F474u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F48Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F498u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4FCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F508u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F518u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F524u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F52Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F534u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F544u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F54Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F564u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F57Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F580u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F588u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F5A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F5ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F5BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F5D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F5E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F5ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F5F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F600u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F608u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F614u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F61Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F628u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F634u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F644u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F66Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F674u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F68Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F6A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F6BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F6C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F6D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F6E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F6F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F724u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F734u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F740u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F748u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F754u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F75Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F768u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F770u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F77Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F784u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F794u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F7ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F7B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F7B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F7D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F7DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F7E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F7F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F800u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F818u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F81Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F824u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F83Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F848u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F858u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F870u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F874u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F87Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F894u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F8A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F8ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F8BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F8C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F8D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F8E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F8F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F900u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F914u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F920u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F948u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F958u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F964u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F96Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F978u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F980u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F994u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F99Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F9A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F9A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F9B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F9D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA00u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA10u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA1Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA24u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA3Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA50u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA58u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA6Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA80u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA8Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FAA0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FAA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FAB4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FABCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FAC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FAD0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FAE0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FAF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FAFCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB04u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB1Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB28u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB34u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB3Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB70u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB88u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FBA4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FBBCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FBC0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FBC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FBE0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FBECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FBF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC00u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC1Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC24u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC28u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC38u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC58u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC60u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC88u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC98u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCA4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCB8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCCCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCD8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCE0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCF4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD00u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD08u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD1Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD28u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD3Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD50u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD58u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD80u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD84u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD8Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDA4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDBCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDD4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDF0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE10u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE1Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE2Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE48u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE50u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE74u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE80u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE88u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE9Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FEA4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FEACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FEB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FEC0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FED0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FEF0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF18u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF28u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF34u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF3Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF48u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF50u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF6Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF74u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF88u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFBCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFD0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFE4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFF0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFF8u, &recomp_unit_0146, "recomp_unit_0146");
}
} // namespace psprecomp
