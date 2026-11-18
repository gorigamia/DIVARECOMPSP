#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0041[4094] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 9, 0, 0, 10, 0,
    11, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 20, 0, 21, 0,
    22, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 29, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0,
    33, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0,
    41, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 48, 0, 0, 0,
    49, 0, 50, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0, 60,
    0, 61, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 71, 0, 0,
    0, 0, 72, 73, 0, 0, 74, 0, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0,
    82, 83, 84, 0, 0, 85, 0, 86, 0, 0, 0, 87, 0, 0, 88, 0, 89, 0, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 93, 0, 94,
    0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 98, 99, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 103, 0, 104, 0, 0, 0, 0, 0,
    105, 0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0,
    0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 117, 118, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 122, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 129,
    0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 136, 0, 137,
    0, 0, 138, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0, 146, 0, 0,
    147, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0,
    163, 0, 0, 164, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0, 172, 0, 0, 0, 173, 174,
    0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 178, 179, 0, 180, 0, 181, 0, 0, 182, 0, 0, 183, 184, 0, 185, 0, 0, 0, 0, 186,
    0, 0, 0, 187, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 191, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 201,
    0, 202, 0, 203, 0, 0, 204, 0, 0, 205, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0,
    208, 209, 0, 0, 0, 0, 210, 211, 0, 212, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0, 0, 0, 217, 0, 218, 0, 0, 219,
    0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 224, 0, 0, 225, 0, 226, 0, 0, 0, 227, 0, 228, 0, 0, 229, 0, 0, 0, 230,
    0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0,
    0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0,
    0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    0, 251, 0, 252, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258,
    0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0,
    263, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270,
    0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 276, 277, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 281, 0, 282, 0, 283, 0, 0, 284, 285, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 293,
    0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 304,
    0, 305, 0, 306, 0, 0, 307, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 0,
    312, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 319, 0, 320, 0, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0,
    0, 328, 0, 329, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 343, 0, 0, 0, 344, 0, 345, 0, 0,
    0, 346, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 0, 350, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0,
    0, 0, 0, 356, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0,
    0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0,
    369, 0, 370, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0,
    0, 377, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0,
    0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0,
    390, 0, 391, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 396, 0, 397, 0, 398, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0,
    0, 404, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 0, 409, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412,
    0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0,
    0, 419, 0, 420, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 426,
    0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 431, 0, 432, 0, 0, 0, 433, 0, 434, 0, 0,
    0, 435, 0, 436, 0, 0, 0, 437, 0, 438, 0, 0, 0, 439, 0, 440, 0, 0, 0, 441, 0, 442, 0, 0, 0, 443, 0, 444, 0, 0, 0, 445,
    0, 446, 0, 0, 0, 447, 448, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 451, 452, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0,
    0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 458, 459, 0, 460, 0, 0, 0,
    461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 464, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0,
    469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 473, 0, 474, 0, 475, 0, 476, 0,
    0, 0, 477, 0, 478, 0, 0, 0, 479, 0, 480, 0, 0, 0, 481, 0, 482, 0, 0, 0, 483, 0, 484, 0, 0, 0, 485, 0, 486, 0, 0, 487,
    0, 488, 0, 0, 489, 0, 490, 0, 0, 491, 0, 492, 0, 0, 493, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 498,
    0, 0, 0, 0, 0, 499, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0,
    505, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0,
    512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 514, 0, 515, 0, 516,
    0, 0, 0, 0, 517, 0, 518, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 524, 0,
    0, 0, 525, 0, 0, 526, 0, 527, 0, 528, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 0, 532, 0, 0, 0, 0, 0,
    533, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 537, 0, 0, 538, 0, 539, 0, 0, 0, 540, 541, 0, 542, 0, 543, 0, 0,
    0, 0, 544, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 551,
    0, 0, 0, 552, 0, 0, 553, 0, 554, 0, 0, 0, 555, 556, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 559, 0, 0, 0, 0, 0, 560, 0,
    561, 0, 0, 0, 0, 0, 562, 0, 563, 0, 564, 0, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0,
    569, 570, 0, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 574, 0, 575, 0, 0, 0, 0, 0, 0, 0, 576,
    0, 577, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 0, 0, 582, 0, 583, 0, 0, 0,
    0, 0, 584, 0, 585, 0, 586, 0, 0, 0, 0, 0, 587, 0, 588, 0, 0, 0, 0, 0, 589, 0, 590, 0, 0, 0, 0, 0, 591, 592, 0, 0,
    593, 0, 594, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599,
    0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 604, 0, 0, 605, 0, 606, 0,
    607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 609, 0, 0, 610, 0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 614, 0,
    615, 0, 616, 0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 619, 0, 620, 0, 0, 0, 621, 0, 622, 0, 0, 0, 623, 0, 624, 0, 0,
    0, 625, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 629, 630, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 634, 0, 635, 0, 0, 636, 0, 637, 0, 0, 638, 0, 639, 0, 0, 640, 0, 641, 0, 0, 0, 642,
    0, 643, 0, 0, 0, 644, 0, 645, 0, 0, 0, 646, 0, 647, 0, 0, 0, 648, 0, 649, 0, 0, 0, 650, 0, 651, 0, 0, 0, 652, 0, 653,
    0, 0, 0, 654, 0, 655, 0, 0, 0, 656, 0, 657, 0, 0, 0, 658, 659, 0, 660, 0, 0, 0, 0, 661, 0, 0, 0, 662, 0, 663, 0, 0,
    0, 0, 664, 665, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 669, 0, 0, 0, 670, 0, 671, 0, 0, 0, 672, 0, 673, 0, 0, 0,
    674, 0, 675, 0, 0, 0, 676, 0, 677, 0, 0, 0, 678, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 683, 0, 684, 0, 0, 0, 0, 685, 0, 686, 0, 687, 0, 0, 688, 0, 0, 0,
    0, 689, 0, 0, 690, 0, 691, 0, 0, 0, 0, 692, 0, 693, 0, 0, 0, 0, 694, 0, 0, 0, 695, 696, 0, 0, 0, 0, 0, 697, 0, 0,
    0, 698, 0, 699, 0, 0, 0, 700, 0, 0, 701, 0, 702, 0, 0, 0, 703, 704, 0, 0, 705, 706, 0, 707, 0, 0, 0, 708, 0, 0, 0, 709,
    0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 712, 0, 713, 0, 0, 0, 714, 0, 0, 715, 0,
    716, 0, 0, 0, 717, 718, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 724, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 727, 0, 728, 0, 0, 729, 0, 730, 0, 731, 0, 0, 732,
    0, 733, 734, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 738, 0, 739, 0, 0, 0, 0, 740, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 743, 0, 0, 0, 0,
    0, 0, 0, 744, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 747, 0, 0, 0, 0, 748, 0, 749, 0, 0, 0, 0, 750, 0, 751,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 754, 0, 755, 0, 0, 0, 0, 0, 0, 0, 756, 0, 757, 0, 0, 0, 0, 758, 0, 759, 0, 0, 0, 0, 760, 0, 0, 0, 761, 762, 0,
    763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 765, 0, 0, 0, 0, 766, 0, 767, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 0, 0, 0, 0, 0, 0, 770, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 773,
    0, 0, 0, 0, 774, 0, 775, 0, 0, 0, 0, 776, 0, 777, 0, 778, 0, 0, 779, 0, 780, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 782,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 784, 0, 0, 0, 0, 0, 0, 785, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 787, 0, 0, 788, 0, 789, 0, 0, 0, 790, 0, 791, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 793, 0, 0, 794, 795, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 799, 0, 800, 0, 801, 802, 0, 0, 803, 0, 0,
    0, 0, 0, 0, 0, 0, 804, 805, 0, 0, 0, 0, 0, 0, 806, 0, 0, 807, 0, 0, 808, 0, 0, 809, 810, 0, 811, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 812, 0, 813, 0, 0, 0, 0, 814, 0, 815, 0, 816, 0,
    0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 818, 0, 819, 0, 0, 820, 0, 0, 0, 821, 0, 822, 0, 0, 823, 0, 824, 0, 0, 0, 0,
    825, 826, 0, 827, 0, 0, 828, 0, 0, 0, 0, 829, 830, 0, 0, 831, 832, 0, 0, 0, 0, 0, 833, 834, 0, 0, 0, 0, 835, 0, 0, 0,
    0, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 0, 838, 0, 839, 0, 840, 0, 0, 841, 0, 0, 0, 842, 0, 843, 844, 0, 0, 0, 0, 845,
    846, 0, 0, 0, 0, 0, 847, 848, 0, 849, 0, 850, 851, 0, 852, 0, 0, 0, 0, 0, 0, 853, 0, 854, 0, 0, 855, 0, 856, 0, 857, 0,
    0, 858, 0, 859, 860, 0, 861, 0, 862, 0, 863, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 866, 0, 0, 867, 0, 0, 868, 0, 0, 869, 0, 870, 0, 871, 0, 872, 0, 0, 873, 0, 874, 0, 875, 0, 876,
    0, 0, 0, 0, 0, 0, 0, 877, 0, 878, 0, 0, 0, 0, 0, 0, 0, 0, 0, 879, 0, 880, 0, 0, 0, 0, 0, 0, 0, 0, 0, 881,
    0, 0, 0, 882, 0, 883, 0, 0, 0, 0, 884, 0, 885, 0, 886, 0, 0, 0, 0, 887, 888, 0, 889, 0, 0, 0, 0, 0, 890, 0, 891, 0,
    0, 0, 0, 0, 0, 0, 892, 0, 893, 0, 0, 0, 0, 0, 0, 0, 0, 0, 894, 0, 895, 0, 0, 0, 0, 896, 0, 897, 0, 0, 0, 0,
    898, 0, 899, 0, 0, 0, 0, 900, 0, 901, 0, 0, 0, 0, 902, 0, 0, 903, 0, 904, 0, 0, 905, 0, 906, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 907, 0, 908, 0, 0, 0, 0, 909, 0, 910, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 911,
    0, 912, 0, 0, 0, 0, 913, 0, 0, 914, 0, 915, 0, 0, 916, 0, 917, 0, 0, 918, 919, 0, 0, 920, 0, 0, 0, 0, 921, 0, 922, 0,
    0, 923, 0, 924, 0, 0, 0, 925, 926, 0, 0, 927, 0, 0, 0, 0, 928, 0, 929, 0, 930, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 931, 0, 932, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 933, 0, 934, 0, 935, 0, 0, 936, 0, 937, 0, 938,
    0, 0, 0, 0, 939, 940, 941, 942, 0, 0, 943, 0, 0, 944, 0, 945, 0, 0, 0, 0, 0, 946, 0, 0, 0, 0, 0, 0, 0, 947, 0, 948,
    0, 949, 0, 950, 0, 0, 0, 0, 0, 0, 0, 951, 0, 952, 0, 0, 0, 0, 953, 954, 0, 0, 0, 0, 955, 0, 0, 0, 0, 956, 0, 0,
    957, 0, 0, 0, 0, 0, 958, 0, 0, 0, 0, 0, 959, 0, 960, 0, 961, 0, 962, 0, 0, 0, 0, 0, 0, 0, 963, 0, 964, 0, 0, 0,
    0, 965, 966, 0, 0, 0, 0, 967, 0, 968, 0, 0, 0, 0, 969, 0, 0, 0, 0, 970, 0, 971, 0, 972, 0, 973, 0, 0, 0, 0, 0, 0,
    0, 974, 0, 975, 0, 0, 0, 0, 976, 0, 0, 0, 0, 977, 978, 0, 0, 0, 0, 979, 0, 0, 0, 0, 0, 0, 0, 0, 0, 980, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 981, 0, 982, 0, 0, 0, 0, 0, 0, 983, 0, 984, 0, 0, 0, 0, 0,
    0, 0, 985, 0, 986, 0, 0, 0, 987, 0, 0, 0, 988, 0, 989, 0, 990, 0, 0, 0, 0, 0, 0, 991, 0, 992, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 993, 0, 994, 0, 0, 0, 995, 0, 0, 0, 996, 0, 0, 997, 0, 998, 0, 0, 0, 0, 0, 0, 999, 0, 1000, 0, 0, 0,
    0, 0, 0, 0, 1001, 0, 1002, 0, 0, 0, 1003, 0, 1004, 0, 1005, 0, 0, 1006, 0, 1007, 0, 0, 0, 0, 0, 0, 1008, 0, 1009, 0, 0, 0,
    1010, 0, 1011, 0, 1012, 0, 0, 1013, 0, 1014, 0, 1015, 0, 0, 1016, 0, 1017, 0, 1018, 0, 1019, 0, 1020, 0, 0, 0, 0, 1021, 0, 1022,
};
void recomp_unit_0041_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088A8004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0041[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A8004;
    case 2u: goto L_088A800C;
    case 3u: goto L_088A8020;
    case 4u: goto L_088A8028;
    case 5u: goto L_088A803C;
    case 6u: goto L_088A8044;
    case 7u: goto L_088A8054;
    case 8u: goto L_088A805C;
    case 9u: goto L_088A8070;
    case 10u: goto L_088A807C;
    case 11u: goto L_088A8084;
    case 12u: goto L_088A8098;
    case 13u: goto L_088A80A0;
    case 14u: goto L_088A80B0;
    case 15u: goto L_088A80B8;
    case 16u: goto L_088A80C0;
    case 17u: goto L_088A80C8;
    case 18u: goto L_088A80DC;
    case 19u: goto L_088A80E4;
    case 20u: goto L_088A80F4;
    case 21u: goto L_088A80FC;
    case 22u: goto L_088A8104;
    case 23u: goto L_088A810C;
    case 24u: goto L_088A8120;
    case 25u: goto L_088A8128;
    case 26u: goto L_088A8138;
    case 27u: goto L_088A8140;
    case 28u: goto L_088A8148;
    case 29u: goto L_088A8158;
    case 30u: goto L_088A8160;
    case 31u: goto L_088A8168;
    case 32u: goto L_088A8178;
    case 33u: goto L_088A8184;
    case 34u: goto L_088A818C;
    case 35u: goto L_088A81A8;
    case 36u: goto L_088A81B0;
    case 37u: goto L_088A81D4;
    case 38u: goto L_088A81DC;
    case 39u: goto L_088A81EC;
    case 40u: goto L_088A81F4;
    case 41u: goto L_088A8204;
    case 42u: goto L_088A820C;
    case 43u: goto L_088A8228;
    case 44u: goto L_088A8230;
    case 45u: goto L_088A8254;
    case 46u: goto L_088A825C;
    case 47u: goto L_088A826C;
    case 48u: goto L_088A8274;
    case 49u: goto L_088A8284;
    case 50u: goto L_088A828C;
    case 51u: goto L_088A82A0;
    case 52u: goto L_088A82A8;
    case 53u: goto L_088A82B0;
    case 54u: goto L_088A82BC;
    case 55u: goto L_088A82C4;
    case 56u: goto L_088A82D4;
    case 57u: goto L_088A82DC;
    case 58u: goto L_088A82E8;
    case 59u: goto L_088A82F0;
    case 60u: goto L_088A8300;
    case 61u: goto L_088A8308;
    case 62u: goto L_088A8314;
    case 63u: goto L_088A831C;
    case 64u: goto L_088A832C;
    case 65u: goto L_088A8334;
    case 66u: goto L_088A8340;
    case 67u: goto L_088A8348;
    case 68u: goto L_088A8358;
    case 69u: goto L_088A8360;
    case 70u: goto L_088A8370;
    case 71u: goto L_088A8378;
    case 72u: goto L_088A838C;
    case 73u: goto L_088A8390;
    case 74u: goto L_088A839C;
    case 75u: goto L_088A83A8;
    case 76u: goto L_088A83B0;
    case 77u: goto L_088A83C4;
    case 78u: goto L_088A83CC;
    case 79u: goto L_088A83D4;
    case 80u: goto L_088A83E4;
    case 81u: goto L_088A83EC;
    case 82u: goto L_088A8404;
    case 83u: goto L_088A8408;
    case 84u: goto L_088A840C;
    case 85u: goto L_088A8418;
    case 86u: goto L_088A8420;
    case 87u: goto L_088A8430;
    case 88u: goto L_088A843C;
    case 89u: goto L_088A8444;
    case 90u: goto L_088A8454;
    case 91u: goto L_088A845C;
    case 92u: goto L_088A846C;
    case 93u: goto L_088A8478;
    case 94u: goto L_088A8480;
    case 95u: goto L_088A8494;
    case 96u: goto L_088A849C;
    case 97u: goto L_088A84A4;
    case 98u: goto L_088A84B4;
    case 99u: goto L_088A84B8;
    case 100u: goto L_088A84C4;
    case 101u: goto L_088A84D0;
    case 102u: goto L_088A84DC;
    case 103u: goto L_088A84E4;
    case 104u: goto L_088A84EC;
    case 105u: goto L_088A8504;
    case 106u: goto L_088A850C;
    case 107u: goto L_088A8524;
    case 108u: goto L_088A852C;
    case 109u: goto L_088A853C;
    case 110u: goto L_088A8554;
    case 111u: goto L_088A856C;
    case 112u: goto L_088A8574;
    case 113u: goto L_088A8588;
    case 114u: goto L_088A859C;
    case 115u: goto L_088A85B4;
    case 116u: goto L_088A85BC;
    case 117u: goto L_088A85CC;
    case 118u: goto L_088A85D0;
    case 119u: goto L_088A85D4;
    case 120u: goto L_088A85E8;
    case 121u: goto L_088A860C;
    case 122u: goto L_088A8614;
    case 123u: goto L_088A8620;
    case 124u: goto L_088A8630;
    case 125u: goto L_088A864C;
    case 126u: goto L_088A8654;
    case 127u: goto L_088A8660;
    case 128u: goto L_088A866C;
    case 129u: goto L_088A8680;
    case 130u: goto L_088A869C;
    case 131u: goto L_088A86A4;
    case 132u: goto L_088A86C8;
    case 133u: goto L_088A86D8;
    case 134u: goto L_088A86E0;
    case 135u: goto L_088A86EC;
    case 136u: goto L_088A86F8;
    case 137u: goto L_088A8700;
    case 138u: goto L_088A870C;
    case 139u: goto L_088A8718;
    case 140u: goto L_088A8720;
    case 141u: goto L_088A8744;
    case 142u: goto L_088A874C;
    case 143u: goto L_088A875C;
    case 144u: goto L_088A8764;
    case 145u: goto L_088A876C;
    case 146u: goto L_088A8778;
    case 147u: goto L_088A8784;
    case 148u: goto L_088A878C;
    case 149u: goto L_088A879C;
    case 150u: goto L_088A87AC;
    case 151u: goto L_088A87B4;
    case 152u: goto L_088A87C0;
    case 153u: goto L_088A87CC;
    case 154u: goto L_088A87E0;
    case 155u: goto L_088A87FC;
    case 156u: goto L_088A8804;
    case 157u: goto L_088A8828;
    case 158u: goto L_088A882C;
    case 159u: goto L_088A8834;
    case 160u: goto L_088A885C;
    case 161u: goto L_088A886C;
    case 162u: goto L_088A887C;
    case 163u: goto L_088A8884;
    case 164u: goto L_088A8890;
    case 165u: goto L_088A889C;
    case 166u: goto L_088A88A4;
    case 167u: goto L_088A88B4;
    case 168u: goto L_088A88BC;
    case 169u: goto L_088A88CC;
    case 170u: goto L_088A88D4;
    case 171u: goto L_088A88E4;
    case 172u: goto L_088A88EC;
    case 173u: goto L_088A88FC;
    case 174u: goto L_088A8900;
    case 175u: goto L_088A8908;
    case 176u: goto L_088A891C;
    case 177u: goto L_088A892C;
    case 178u: goto L_088A8934;
    case 179u: goto L_088A8938;
    case 180u: goto L_088A8940;
    case 181u: goto L_088A8948;
    case 182u: goto L_088A8954;
    case 183u: goto L_088A8960;
    case 184u: goto L_088A8964;
    case 185u: goto L_088A896C;
    case 186u: goto L_088A8980;
    case 187u: goto L_088A8990;
    case 188u: goto L_088A8994;
    case 189u: goto L_088A89A8;
    case 190u: goto L_088A89C8;
    case 191u: goto L_088A89CC;
    case 192u: goto L_088A89D4;
    case 193u: goto L_088A89E4;
    case 194u: goto L_088A89FC;
    case 195u: goto L_088A8A0C;
    case 196u: goto L_088A8A24;
    case 197u: goto L_088A8A3C;
    case 198u: goto L_088A8A50;
    case 199u: goto L_088A8A5C;
    case 200u: goto L_088A8A74;
    case 201u: goto L_088A8A80;
    case 202u: goto L_088A8A88;
    case 203u: goto L_088A8A90;
    case 204u: goto L_088A8A9C;
    case 205u: goto L_088A8AA8;
    case 206u: goto L_088A8AAC;
    case 207u: goto L_088A8AF8;
    case 208u: goto L_088A8B04;
    case 209u: goto L_088A8B08;
    case 210u: goto L_088A8B1C;
    case 211u: goto L_088A8B20;
    case 212u: goto L_088A8B28;
    case 213u: goto L_088A8B40;
    case 214u: goto L_088A8B48;
    case 215u: goto L_088A8B54;
    case 216u: goto L_088A8B5C;
    case 217u: goto L_088A8B6C;
    case 218u: goto L_088A8B74;
    case 219u: goto L_088A8B80;
    case 220u: goto L_088A8B88;
    case 221u: goto L_088A8B98;
    case 222u: goto L_088A8BA0;
    case 223u: goto L_088A8BB0;
    case 224u: goto L_088A8BB8;
    case 225u: goto L_088A8BC4;
    case 226u: goto L_088A8BCC;
    case 227u: goto L_088A8BDC;
    case 228u: goto L_088A8BE4;
    case 229u: goto L_088A8BF0;
    case 230u: goto L_088A8C00;
    case 231u: goto L_088A8C24;
    case 232u: goto L_088A8C3C;
    case 233u: goto L_088A8C50;
    case 234u: goto L_088A8C58;
    case 235u: goto L_088A8C68;
    case 236u: goto L_088A8C70;
    case 237u: goto L_088A8C8C;
    case 238u: goto L_088A8C94;
    case 239u: goto L_088A8CB8;
    case 240u: goto L_088A8CC0;
    case 241u: goto L_088A8CD0;
    case 242u: goto L_088A8CD8;
    case 243u: goto L_088A8CF4;
    case 244u: goto L_088A8CFC;
    case 245u: goto L_088A8D20;
    case 246u: goto L_088A8D28;
    case 247u: goto L_088A8D38;
    case 248u: goto L_088A8D40;
    case 249u: goto L_088A8D5C;
    case 250u: goto L_088A8D64;
    case 251u: goto L_088A8D88;
    case 252u: goto L_088A8D90;
    case 253u: goto L_088A8DA0;
    case 254u: goto L_088A8DA8;
    case 255u: goto L_088A8DC8;
    case 256u: goto L_088A8DD0;
    case 257u: goto L_088A8DF8;
    case 258u: goto L_088A8E00;
    case 259u: goto L_088A8E1C;
    case 260u: goto L_088A8E2C;
    case 261u: goto L_088A8E60;
    case 262u: goto L_088A8E74;
    case 263u: goto L_088A8E84;
    case 264u: goto L_088A8E98;
    case 265u: goto L_088A8EA0;
    case 266u: goto L_088A8EB0;
    case 267u: goto L_088A8EB8;
    case 268u: goto L_088A8ED4;
    case 269u: goto L_088A8EDC;
    case 270u: goto L_088A8F00;
    case 271u: goto L_088A8F08;
    case 272u: goto L_088A8F2C;
    case 273u: goto L_088A8F34;
    case 274u: goto L_088A8F58;
    case 275u: goto L_088A8F60;
    case 276u: goto L_088A8F88;
    case 277u: goto L_088A8F8C;
    case 278u: goto L_088A8F94;
    case 279u: goto L_088A8FA8;
    case 280u: goto L_088A8FB8;
    case 281u: goto L_088A8FC0;
    case 282u: goto L_088A8FC8;
    case 283u: goto L_088A8FD0;
    case 284u: goto L_088A8FDC;
    case 285u: goto L_088A8FE0;
    case 286u: goto L_088A9014;
    case 287u: goto L_088A9020;
    case 288u: goto L_088A9030;
    case 289u: goto L_088A9044;
    case 290u: goto L_088A904C;
    case 291u: goto L_088A905C;
    case 292u: goto L_088A9064;
    case 293u: goto L_088A9080;
    case 294u: goto L_088A9088;
    case 295u: goto L_088A90AC;
    case 296u: goto L_088A90B4;
    case 297u: goto L_088A90CC;
    case 298u: goto L_088A90E4;
    case 299u: goto L_088A910C;
    case 300u: goto L_088A914C;
    case 301u: goto L_088A9154;
    case 302u: goto L_088A9168;
    case 303u: goto L_088A9178;
    case 304u: goto L_088A9180;
    case 305u: goto L_088A9188;
    case 306u: goto L_088A9190;
    case 307u: goto L_088A919C;
    case 308u: goto L_088A91A0;
    case 309u: goto L_088A91DC;
    case 310u: goto L_088A91E8;
    case 311u: goto L_088A91F4;
    case 312u: goto L_088A9204;
    case 313u: goto L_088A9218;
    case 314u: goto L_088A9220;
    case 315u: goto L_088A9230;
    case 316u: goto L_088A9238;
    case 317u: goto L_088A9254;
    case 318u: goto L_088A925C;
    case 319u: goto L_088A9270;
    case 320u: goto L_088A9278;
    case 321u: goto L_088A9294;
    case 322u: goto L_088A92AC;
    case 323u: goto L_088A92B8;
    case 324u: goto L_088A92CC;
    case 325u: goto L_088A92D4;
    case 326u: goto L_088A92E4;
    case 327u: goto L_088A92EC;
    case 328u: goto L_088A9308;
    case 329u: goto L_088A9310;
    case 330u: goto L_088A9324;
    case 331u: goto L_088A932C;
    case 332u: goto L_088A9350;
    case 333u: goto L_088A9380;
    case 334u: goto L_088A93B0;
    case 335u: goto L_088A93CC;
    case 336u: goto L_088A93D4;
    case 337u: goto L_088A93E4;
    case 338u: goto L_088A940C;
    case 339u: goto L_088A9424;
    case 340u: goto L_088A942C;
    case 341u: goto L_088A9448;
    case 342u: goto L_088A9458;
    case 343u: goto L_088A9460;
    case 344u: goto L_088A9470;
    case 345u: goto L_088A9478;
    case 346u: goto L_088A9488;
    case 347u: goto L_088A9490;
    case 348u: goto L_088A94A0;
    case 349u: goto L_088A94A8;
    case 350u: goto L_088A94B8;
    case 351u: goto L_088A94C0;
    case 352u: goto L_088A94D0;
    case 353u: goto L_088A94D8;
    case 354u: goto L_088A94F0;
    case 355u: goto L_088A94F8;
    case 356u: goto L_088A9510;
    case 357u: goto L_088A9518;
    case 358u: goto L_088A9520;
    case 359u: goto L_088A953C;
    case 360u: goto L_088A9544;
    case 361u: goto L_088A9564;
    case 362u: goto L_088A956C;
    case 363u: goto L_088A958C;
    case 364u: goto L_088A9594;
    case 365u: goto L_088A95B4;
    case 366u: goto L_088A95BC;
    case 367u: goto L_088A95DC;
    case 368u: goto L_088A95E4;
    case 369u: goto L_088A9604;
    case 370u: goto L_088A960C;
    case 371u: goto L_088A9624;
    case 372u: goto L_088A962C;
    case 373u: goto L_088A9644;
    case 374u: goto L_088A964C;
    case 375u: goto L_088A9664;
    case 376u: goto L_088A966C;
    case 377u: goto L_088A9688;
    case 378u: goto L_088A9690;
    case 379u: goto L_088A9698;
    case 380u: goto L_088A96B8;
    case 381u: goto L_088A96C0;
    case 382u: goto L_088A96E0;
    case 383u: goto L_088A96E8;
    case 384u: goto L_088A9708;
    case 385u: goto L_088A9710;
    case 386u: goto L_088A9730;
    case 387u: goto L_088A9738;
    case 388u: goto L_088A9758;
    case 389u: goto L_088A9760;
    case 390u: goto L_088A9784;
    case 391u: goto L_088A978C;
    case 392u: goto L_088A97A4;
    case 393u: goto L_088A97AC;
    case 394u: goto L_088A97C8;
    case 395u: goto L_088A97D8;
    case 396u: goto L_088A97E0;
    case 397u: goto L_088A97E8;
    case 398u: goto L_088A97F0;
    case 399u: goto L_088A9830;
    case 400u: goto L_088A9840;
    case 401u: goto L_088A9848;
    case 402u: goto L_088A9864;
    case 403u: goto L_088A986C;
    case 404u: goto L_088A9888;
    case 405u: goto L_088A9890;
    case 406u: goto L_088A9898;
    case 407u: goto L_088A98B8;
    case 408u: goto L_088A98C0;
    case 409u: goto L_088A98CC;
    case 410u: goto L_088A98D4;
    case 411u: goto L_088A98DC;
    case 412u: goto L_088A9900;
    case 413u: goto L_088A9908;
    case 414u: goto L_088A9910;
    case 415u: goto L_088A9930;
    case 416u: goto L_088A9938;
    case 417u: goto L_088A995C;
    case 418u: goto L_088A9964;
    case 419u: goto L_088A9988;
    case 420u: goto L_088A9990;
    case 421u: goto L_088A99A0;
    case 422u: goto L_088A99A8;
    case 423u: goto L_088A99CC;
    case 424u: goto L_088A99D4;
    case 425u: goto L_088A99F8;
    case 426u: goto L_088A9A00;
    case 427u: goto L_088A9A1C;
    case 428u: goto L_088A9A24;
    case 429u: goto L_088A9A40;
    case 430u: goto L_088A9A48;
    case 431u: goto L_088A9A58;
    case 432u: goto L_088A9A60;
    case 433u: goto L_088A9A70;
    case 434u: goto L_088A9A78;
    case 435u: goto L_088A9A88;
    case 436u: goto L_088A9A90;
    case 437u: goto L_088A9AA0;
    case 438u: goto L_088A9AA8;
    case 439u: goto L_088A9AB8;
    case 440u: goto L_088A9AC0;
    case 441u: goto L_088A9AD0;
    case 442u: goto L_088A9AD8;
    case 443u: goto L_088A9AE8;
    case 444u: goto L_088A9AF0;
    case 445u: goto L_088A9B00;
    case 446u: goto L_088A9B08;
    case 447u: goto L_088A9B18;
    case 448u: goto L_088A9B1C;
    case 449u: goto L_088A9B24;
    case 450u: goto L_088A9B38;
    case 451u: goto L_088A9B48;
    case 452u: goto L_088A9B4C;
    case 453u: goto L_088A9B6C;
    case 454u: goto L_088A9B8C;
    case 455u: goto L_088A9BA0;
    case 456u: goto L_088A9BD8;
    case 457u: goto L_088A9BE0;
    case 458u: goto L_088A9BE8;
    case 459u: goto L_088A9BEC;
    case 460u: goto L_088A9BF4;
    case 461u: goto L_088A9C04;
    case 462u: goto L_088A9C1C;
    case 463u: goto L_088A9C2C;
    case 464u: goto L_088A9C30;
    case 465u: goto L_088A9C38;
    case 466u: goto L_088A9C4C;
    case 467u: goto L_088A9C5C;
    case 468u: goto L_088A9C74;
    case 469u: goto L_088A9C84;
    case 470u: goto L_088A9C9C;
    case 471u: goto L_088A9CCC;
    case 472u: goto L_088A9CD8;
    case 473u: goto L_088A9CE4;
    case 474u: goto L_088A9CEC;
    case 475u: goto L_088A9CF4;
    case 476u: goto L_088A9CFC;
    case 477u: goto L_088A9D0C;
    case 478u: goto L_088A9D14;
    case 479u: goto L_088A9D24;
    case 480u: goto L_088A9D2C;
    case 481u: goto L_088A9D3C;
    case 482u: goto L_088A9D44;
    case 483u: goto L_088A9D54;
    case 484u: goto L_088A9D5C;
    case 485u: goto L_088A9D6C;
    case 486u: goto L_088A9D74;
    case 487u: goto L_088A9D80;
    case 488u: goto L_088A9D88;
    case 489u: goto L_088A9D94;
    case 490u: goto L_088A9D9C;
    case 491u: goto L_088A9DA8;
    case 492u: goto L_088A9DB0;
    case 493u: goto L_088A9DBC;
    case 494u: goto L_088A9DC4;
    case 495u: goto L_088A9DD0;
    case 496u: goto L_088A9DE8;
    case 497u: goto L_088A9DFC;
    case 498u: goto L_088A9E00;
    case 499u: goto L_088A9E18;
    case 500u: goto L_088A9E24;
    case 501u: goto L_088A9E2C;
    case 502u: goto L_088A9E58;
    case 503u: goto L_088A9E60;
    case 504u: goto L_088A9E7C;
    case 505u: goto L_088A9E84;
    case 506u: goto L_088A9E94;
    case 507u: goto L_088A9E9C;
    case 508u: goto L_088A9EC8;
    case 509u: goto L_088A9ED0;
    case 510u: goto L_088A9EEC;
    case 511u: goto L_088A9EF4;
    case 512u: goto L_088A9F04;
    case 513u: goto L_088A9F64;
    case 514u: goto L_088A9F70;
    case 515u: goto L_088A9F78;
    case 516u: goto L_088A9F80;
    case 517u: goto L_088A9F94;
    case 518u: goto L_088A9F9C;
    case 519u: goto L_088A9FB0;
    case 520u: goto L_088A9FB8;
    case 521u: goto L_088A9FD0;
    case 522u: goto L_088A9FD8;
    case 523u: goto L_088A9FF4;
    case 524u: goto L_088A9FFC;
    case 525u: goto L_088AA00C;
    case 526u: goto L_088AA018;
    case 527u: goto L_088AA020;
    case 528u: goto L_088AA028;
    case 529u: goto L_088AA03C;
    case 530u: goto L_088AA044;
    case 531u: goto L_088AA064;
    case 532u: goto L_088AA06C;
    case 533u: goto L_088AA084;
    case 534u: goto L_088AA08C;
    case 535u: goto L_088AA0A8;
    case 536u: goto L_088AA0B0;
    case 537u: goto L_088AA0C0;
    case 538u: goto L_088AA0CC;
    case 539u: goto L_088AA0D4;
    case 540u: goto L_088AA0E4;
    case 541u: goto L_088AA0E8;
    case 542u: goto L_088AA0F0;
    case 543u: goto L_088AA0F8;
    case 544u: goto L_088AA10C;
    case 545u: goto L_088AA114;
    case 546u: goto L_088AA134;
    case 547u: goto L_088AA13C;
    case 548u: goto L_088AA154;
    case 549u: goto L_088AA15C;
    case 550u: goto L_088AA178;
    case 551u: goto L_088AA180;
    case 552u: goto L_088AA190;
    case 553u: goto L_088AA19C;
    case 554u: goto L_088AA1A4;
    case 555u: goto L_088AA1B4;
    case 556u: goto L_088AA1B8;
    case 557u: goto L_088AA1C8;
    case 558u: goto L_088AA1DC;
    case 559u: goto L_088AA1E4;
    case 560u: goto L_088AA1FC;
    case 561u: goto L_088AA204;
    case 562u: goto L_088AA21C;
    case 563u: goto L_088AA224;
    case 564u: goto L_088AA22C;
    case 565u: goto L_088AA244;
    case 566u: goto L_088AA24C;
    case 567u: goto L_088AA264;
    case 568u: goto L_088AA26C;
    case 569u: goto L_088AA284;
    case 570u: goto L_088AA288;
    case 571u: goto L_088AA294;
    case 572u: goto L_088AA2B0;
    case 573u: goto L_088AA2B8;
    case 574u: goto L_088AA2D8;
    case 575u: goto L_088AA2E0;
    case 576u: goto L_088AA300;
    case 577u: goto L_088AA308;
    case 578u: goto L_088AA328;
    case 579u: goto L_088AA338;
    case 580u: goto L_088AA34C;
    case 581u: goto L_088AA354;
    case 582u: goto L_088AA36C;
    case 583u: goto L_088AA374;
    case 584u: goto L_088AA38C;
    case 585u: goto L_088AA394;
    case 586u: goto L_088AA39C;
    case 587u: goto L_088AA3B4;
    case 588u: goto L_088AA3BC;
    case 589u: goto L_088AA3D4;
    case 590u: goto L_088AA3DC;
    case 591u: goto L_088AA3F4;
    case 592u: goto L_088AA3F8;
    case 593u: goto L_088AA404;
    case 594u: goto L_088AA40C;
    case 595u: goto L_088AA428;
    case 596u: goto L_088AA444;
    case 597u: goto L_088AA450;
    case 598u: goto L_088AA458;
    case 599u: goto L_088AA480;
    case 600u: goto L_088AA488;
    case 601u: goto L_088AA4B0;
    case 602u: goto L_088AA4B8;
    case 603u: goto L_088AA4E0;
    case 604u: goto L_088AA4E8;
    case 605u: goto L_088AA4F4;
    case 606u: goto L_088AA4FC;
    case 607u: goto L_088AA504;
    case 608u: goto L_088AA52C;
    case 609u: goto L_088AA534;
    case 610u: goto L_088AA540;
    case 611u: goto L_088AA548;
    case 612u: goto L_088AA550;
    case 613u: goto L_088AA578;
    case 614u: goto L_088AA57C;
    case 615u: goto L_088AA584;
    case 616u: goto L_088AA58C;
    case 617u: goto L_088AA5A8;
    case 618u: goto L_088AA5B0;
    case 619u: goto L_088AA5C0;
    case 620u: goto L_088AA5C8;
    case 621u: goto L_088AA5D8;
    case 622u: goto L_088AA5E0;
    case 623u: goto L_088AA5F0;
    case 624u: goto L_088AA5F8;
    case 625u: goto L_088AA608;
    case 626u: goto L_088AA610;
    case 627u: goto L_088AA620;
    case 628u: goto L_088AA630;
    case 629u: goto L_088AA634;
    case 630u: goto L_088AA638;
    case 631u: goto L_088AA654;
    case 632u: goto L_088AA670;
    case 633u: goto L_088AA6A0;
    case 634u: goto L_088AA6AC;
    case 635u: goto L_088AA6B4;
    case 636u: goto L_088AA6C0;
    case 637u: goto L_088AA6C8;
    case 638u: goto L_088AA6D4;
    case 639u: goto L_088AA6DC;
    case 640u: goto L_088AA6E8;
    case 641u: goto L_088AA6F0;
    case 642u: goto L_088AA700;
    case 643u: goto L_088AA708;
    case 644u: goto L_088AA718;
    case 645u: goto L_088AA720;
    case 646u: goto L_088AA730;
    case 647u: goto L_088AA738;
    case 648u: goto L_088AA748;
    case 649u: goto L_088AA750;
    case 650u: goto L_088AA760;
    case 651u: goto L_088AA768;
    case 652u: goto L_088AA778;
    case 653u: goto L_088AA780;
    case 654u: goto L_088AA790;
    case 655u: goto L_088AA798;
    case 656u: goto L_088AA7A8;
    case 657u: goto L_088AA7B0;
    case 658u: goto L_088AA7C0;
    case 659u: goto L_088AA7C4;
    case 660u: goto L_088AA7CC;
    case 661u: goto L_088AA7E0;
    case 662u: goto L_088AA7F0;
    case 663u: goto L_088AA7F8;
    case 664u: goto L_088AA80C;
    case 665u: goto L_088AA810;
    case 666u: goto L_088AA818;
    case 667u: goto L_088AA82C;
    case 668u: goto L_088AA83C;
    case 669u: goto L_088AA844;
    case 670u: goto L_088AA854;
    case 671u: goto L_088AA85C;
    case 672u: goto L_088AA86C;
    case 673u: goto L_088AA874;
    case 674u: goto L_088AA884;
    case 675u: goto L_088AA88C;
    case 676u: goto L_088AA89C;
    case 677u: goto L_088AA8A4;
    case 678u: goto L_088AA8B4;
    case 679u: goto L_088AA8BC;
    case 680u: goto L_088AA8CC;
    case 681u: goto L_088AA8E0;
    case 682u: goto L_088AA934;
    case 683u: goto L_088AA93C;
    case 684u: goto L_088AA944;
    case 685u: goto L_088AA958;
    case 686u: goto L_088AA960;
    case 687u: goto L_088AA968;
    case 688u: goto L_088AA974;
    case 689u: goto L_088AA988;
    case 690u: goto L_088AA994;
    case 691u: goto L_088AA99C;
    case 692u: goto L_088AA9B0;
    case 693u: goto L_088AA9B8;
    case 694u: goto L_088AA9CC;
    case 695u: goto L_088AA9DC;
    case 696u: goto L_088AA9E0;
    case 697u: goto L_088AA9F8;
    case 698u: goto L_088AAA08;
    case 699u: goto L_088AAA10;
    case 700u: goto L_088AAA20;
    case 701u: goto L_088AAA2C;
    case 702u: goto L_088AAA34;
    case 703u: goto L_088AAA44;
    case 704u: goto L_088AAA48;
    case 705u: goto L_088AAA54;
    case 706u: goto L_088AAA58;
    case 707u: goto L_088AAA60;
    case 708u: goto L_088AAA70;
    case 709u: goto L_088AAA80;
    case 710u: goto L_088AAA90;
    case 711u: goto L_088AAAC0;
    case 712u: goto L_088AAAD8;
    case 713u: goto L_088AAAE0;
    case 714u: goto L_088AAAF0;
    case 715u: goto L_088AAAFC;
    case 716u: goto L_088AAB04;
    case 717u: goto L_088AAB14;
    case 718u: goto L_088AAB18;
    case 719u: goto L_088AAB24;
    case 720u: goto L_088AAB54;
    case 721u: goto L_088AABA8;
    case 722u: goto L_088AABD4;
    case 723u: goto L_088AABDC;
    case 724u: goto L_088AAC0C;
    case 725u: goto L_088AAC14;
    case 726u: goto L_088AAC48;
    case 727u: goto L_088AAC50;
    case 728u: goto L_088AAC58;
    case 729u: goto L_088AAC64;
    case 730u: goto L_088AAC6C;
    case 731u: goto L_088AAC74;
    case 732u: goto L_088AAC80;
    case 733u: goto L_088AAC88;
    case 734u: goto L_088AAC8C;
    case 735u: goto L_088AAC94;
    case 736u: goto L_088AACCC;
    case 737u: goto L_088AACD4;
    case 738u: goto L_088AAD0C;
    case 739u: goto L_088AAD14;
    case 740u: goto L_088AAD28;
    case 741u: goto L_088AAD30;
    case 742u: goto L_088AAD68;
    case 743u: goto L_088AAD70;
    case 744u: goto L_088AAD90;
    case 745u: goto L_088AAD98;
    case 746u: goto L_088AADC0;
    case 747u: goto L_088AADC8;
    case 748u: goto L_088AADDC;
    case 749u: goto L_088AADE4;
    case 750u: goto L_088AADF8;
    case 751u: goto L_088AAE00;
    case 752u: goto L_088AAE40;
    case 753u: goto L_088AAE48;
    case 754u: goto L_088AAE88;
    case 755u: goto L_088AAE90;
    case 756u: goto L_088AAEB0;
    case 757u: goto L_088AAEB8;
    case 758u: goto L_088AAECC;
    case 759u: goto L_088AAED4;
    case 760u: goto L_088AAEE8;
    case 761u: goto L_088AAEF8;
    case 762u: goto L_088AAEFC;
    case 763u: goto L_088AAF04;
    case 764u: goto L_088AAF40;
    case 765u: goto L_088AAF48;
    case 766u: goto L_088AAF5C;
    case 767u: goto L_088AAF64;
    case 768u: goto L_088AAFA0;
    case 769u: goto L_088AAFA8;
    case 770u: goto L_088AAFC8;
    case 771u: goto L_088AAFD0;
    case 772u: goto L_088AAFF8;
    case 773u: goto L_088AB000;
    case 774u: goto L_088AB014;
    case 775u: goto L_088AB01C;
    case 776u: goto L_088AB030;
    case 777u: goto L_088AB038;
    case 778u: goto L_088AB040;
    case 779u: goto L_088AB04C;
    case 780u: goto L_088AB054;
    case 781u: goto L_088AB060;
    case 782u: goto L_088AB080;
    case 783u: goto L_088AB0D4;
    case 784u: goto L_088AB0DC;
    case 785u: goto L_088AB0F8;
    case 786u: goto L_088AB14C;
    case 787u: goto L_088AB150;
    case 788u: goto L_088AB15C;
    case 789u: goto L_088AB164;
    case 790u: goto L_088AB174;
    case 791u: goto L_088AB17C;
    case 792u: goto L_088AB1BC;
    case 793u: goto L_088AB1C0;
    case 794u: goto L_088AB1CC;
    case 795u: goto L_088AB1D0;
    case 796u: goto L_088AB1EC;
    case 797u: goto L_088AB220;
    case 798u: goto L_088AB24C;
    case 799u: goto L_088AB258;
    case 800u: goto L_088AB260;
    case 801u: goto L_088AB268;
    case 802u: goto L_088AB26C;
    case 803u: goto L_088AB278;
    case 804u: goto L_088AB29C;
    case 805u: goto L_088AB2A0;
    case 806u: goto L_088AB2BC;
    case 807u: goto L_088AB2C8;
    case 808u: goto L_088AB2D4;
    case 809u: goto L_088AB2E0;
    case 810u: goto L_088AB2E4;
    case 811u: goto L_088AB2EC;
    case 812u: goto L_088AB350;
    case 813u: goto L_088AB358;
    case 814u: goto L_088AB36C;
    case 815u: goto L_088AB374;
    case 816u: goto L_088AB37C;
    case 817u: goto L_088AB390;
    case 818u: goto L_088AB3B0;
    case 819u: goto L_088AB3B8;
    case 820u: goto L_088AB3C4;
    case 821u: goto L_088AB3D4;
    case 822u: goto L_088AB3DC;
    case 823u: goto L_088AB3E8;
    case 824u: goto L_088AB3F0;
    case 825u: goto L_088AB404;
    case 826u: goto L_088AB408;
    case 827u: goto L_088AB410;
    case 828u: goto L_088AB41C;
    case 829u: goto L_088AB430;
    case 830u: goto L_088AB434;
    case 831u: goto L_088AB440;
    case 832u: goto L_088AB444;
    case 833u: goto L_088AB45C;
    case 834u: goto L_088AB460;
    case 835u: goto L_088AB474;
    case 836u: goto L_088AB494;
    case 837u: goto L_088AB4A4;
    case 838u: goto L_088AB4B4;
    case 839u: goto L_088AB4BC;
    case 840u: goto L_088AB4C4;
    case 841u: goto L_088AB4D0;
    case 842u: goto L_088AB4E0;
    case 843u: goto L_088AB4E8;
    case 844u: goto L_088AB4EC;
    case 845u: goto L_088AB500;
    case 846u: goto L_088AB504;
    case 847u: goto L_088AB51C;
    case 848u: goto L_088AB520;
    case 849u: goto L_088AB528;
    case 850u: goto L_088AB530;
    case 851u: goto L_088AB534;
    case 852u: goto L_088AB53C;
    case 853u: goto L_088AB558;
    case 854u: goto L_088AB560;
    case 855u: goto L_088AB56C;
    case 856u: goto L_088AB574;
    case 857u: goto L_088AB57C;
    case 858u: goto L_088AB588;
    case 859u: goto L_088AB590;
    case 860u: goto L_088AB594;
    case 861u: goto L_088AB59C;
    case 862u: goto L_088AB5A4;
    case 863u: goto L_088AB5AC;
    case 864u: goto L_088AB5D0;
    case 865u: goto L_088AB61C;
    case 866u: goto L_088AB6A0;
    case 867u: goto L_088AB6AC;
    case 868u: goto L_088AB6B8;
    case 869u: goto L_088AB6C4;
    case 870u: goto L_088AB6CC;
    case 871u: goto L_088AB6D4;
    case 872u: goto L_088AB6DC;
    case 873u: goto L_088AB6E8;
    case 874u: goto L_088AB6F0;
    case 875u: goto L_088AB6F8;
    case 876u: goto L_088AB700;
    case 877u: goto L_088AB720;
    case 878u: goto L_088AB728;
    case 879u: goto L_088AB750;
    case 880u: goto L_088AB758;
    case 881u: goto L_088AB780;
    case 882u: goto L_088AB790;
    case 883u: goto L_088AB798;
    case 884u: goto L_088AB7AC;
    case 885u: goto L_088AB7B4;
    case 886u: goto L_088AB7BC;
    case 887u: goto L_088AB7D0;
    case 888u: goto L_088AB7D4;
    case 889u: goto L_088AB7DC;
    case 890u: goto L_088AB7F4;
    case 891u: goto L_088AB7FC;
    case 892u: goto L_088AB81C;
    case 893u: goto L_088AB824;
    case 894u: goto L_088AB84C;
    case 895u: goto L_088AB854;
    case 896u: goto L_088AB868;
    case 897u: goto L_088AB870;
    case 898u: goto L_088AB884;
    case 899u: goto L_088AB88C;
    case 900u: goto L_088AB8A0;
    case 901u: goto L_088AB8A8;
    case 902u: goto L_088AB8BC;
    case 903u: goto L_088AB8C8;
    case 904u: goto L_088AB8D0;
    case 905u: goto L_088AB8DC;
    case 906u: goto L_088AB8E4;
    case 907u: goto L_088AB920;
    case 908u: goto L_088AB928;
    case 909u: goto L_088AB93C;
    case 910u: goto L_088AB944;
    case 911u: goto L_088AB980;
    case 912u: goto L_088AB988;
    case 913u: goto L_088AB99C;
    case 914u: goto L_088AB9A8;
    case 915u: goto L_088AB9B0;
    case 916u: goto L_088AB9BC;
    case 917u: goto L_088AB9C4;
    case 918u: goto L_088AB9D0;
    case 919u: goto L_088AB9D4;
    case 920u: goto L_088AB9E0;
    case 921u: goto L_088AB9F4;
    case 922u: goto L_088AB9FC;
    case 923u: goto L_088ABA08;
    case 924u: goto L_088ABA10;
    case 925u: goto L_088ABA20;
    case 926u: goto L_088ABA24;
    case 927u: goto L_088ABA30;
    case 928u: goto L_088ABA44;
    case 929u: goto L_088ABA4C;
    case 930u: goto L_088ABA54;
    case 931u: goto L_088ABA90;
    case 932u: goto L_088ABA98;
    case 933u: goto L_088ABAD4;
    case 934u: goto L_088ABADC;
    case 935u: goto L_088ABAE4;
    case 936u: goto L_088ABAF0;
    case 937u: goto L_088ABAF8;
    case 938u: goto L_088ABB00;
    case 939u: goto L_088ABB14;
    case 940u: goto L_088ABB18;
    case 941u: goto L_088ABB1C;
    case 942u: goto L_088ABB20;
    case 943u: goto L_088ABB2C;
    case 944u: goto L_088ABB38;
    case 945u: goto L_088ABB40;
    case 946u: goto L_088ABB58;
    case 947u: goto L_088ABB78;
    case 948u: goto L_088ABB80;
    case 949u: goto L_088ABB88;
    case 950u: goto L_088ABB90;
    case 951u: goto L_088ABBB0;
    case 952u: goto L_088ABBB8;
    case 953u: goto L_088ABBCC;
    case 954u: goto L_088ABBD0;
    case 955u: goto L_088ABBE4;
    case 956u: goto L_088ABBF8;
    case 957u: goto L_088ABC04;
    case 958u: goto L_088ABC1C;
    case 959u: goto L_088ABC34;
    case 960u: goto L_088ABC3C;
    case 961u: goto L_088ABC44;
    case 962u: goto L_088ABC4C;
    case 963u: goto L_088ABC6C;
    case 964u: goto L_088ABC74;
    case 965u: goto L_088ABC88;
    case 966u: goto L_088ABC8C;
    case 967u: goto L_088ABCA0;
    case 968u: goto L_088ABCA8;
    case 969u: goto L_088ABCBC;
    case 970u: goto L_088ABCD0;
    case 971u: goto L_088ABCD8;
    case 972u: goto L_088ABCE0;
    case 973u: goto L_088ABCE8;
    case 974u: goto L_088ABD08;
    case 975u: goto L_088ABD10;
    case 976u: goto L_088ABD24;
    case 977u: goto L_088ABD38;
    case 978u: goto L_088ABD3C;
    case 979u: goto L_088ABD50;
    case 980u: goto L_088ABD78;
    case 981u: goto L_088ABDC0;
    case 982u: goto L_088ABDC8;
    case 983u: goto L_088ABDE4;
    case 984u: goto L_088ABDEC;
    case 985u: goto L_088ABE0C;
    case 986u: goto L_088ABE14;
    case 987u: goto L_088ABE24;
    case 988u: goto L_088ABE34;
    case 989u: goto L_088ABE3C;
    case 990u: goto L_088ABE44;
    case 991u: goto L_088ABE60;
    case 992u: goto L_088ABE68;
    case 993u: goto L_088ABE94;
    case 994u: goto L_088ABE9C;
    case 995u: goto L_088ABEAC;
    case 996u: goto L_088ABEBC;
    case 997u: goto L_088ABEC8;
    case 998u: goto L_088ABED0;
    case 999u: goto L_088ABEEC;
    case 1000u: goto L_088ABEF4;
    case 1001u: goto L_088ABF14;
    case 1002u: goto L_088ABF1C;
    case 1003u: goto L_088ABF2C;
    case 1004u: goto L_088ABF34;
    case 1005u: goto L_088ABF3C;
    case 1006u: goto L_088ABF48;
    case 1007u: goto L_088ABF50;
    case 1008u: goto L_088ABF6C;
    case 1009u: goto L_088ABF74;
    case 1010u: goto L_088ABF84;
    case 1011u: goto L_088ABF8C;
    case 1012u: goto L_088ABF94;
    case 1013u: goto L_088ABFA0;
    case 1014u: goto L_088ABFA8;
    case 1015u: goto L_088ABFB0;
    case 1016u: goto L_088ABFBC;
    case 1017u: goto L_088ABFC4;
    case 1018u: goto L_088ABFCC;
    case 1019u: goto L_088ABFD4;
    case 1020u: goto L_088ABFDC;
    case 1021u: goto L_088ABFF0;
    case 1022u: goto L_088ABFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088A8004:
    ctx.set_gpr(31, 0x088A800Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A800Cu) goto L_088A800C;
    return;
L_088A800C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(31, 0x088A8020u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 491u, 0x088470C8u>(ctx, &aot_mem) && ctx.pc == 0x088A8020u) goto L_088A8020;
    return;
L_088A8020:
    ctx.set_gpr(31, 0x088A8028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8028u) goto L_088A8028;
    return;
L_088A8028:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(34))))));
    ctx.set_gpr(31, 0x088A803Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 491u, 0x088470C8u>(ctx, &aot_mem) && ctx.pc == 0x088A803Cu) goto L_088A803C;
    return;
L_088A803C:
    ctx.set_gpr(31, 0x088A8044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8044u) goto L_088A8044;
    return;
L_088A8044:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8054u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 488u, 0x0884705Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8054u) goto L_088A8054;
    return;
L_088A8054:
    ctx.set_gpr(31, 0x088A805Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A805Cu) goto L_088A805C;
    return;
L_088A805C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8070u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(39));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8070u) goto L_088A8070;
    return;
L_088A8070:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_088A80B8;
    }
    goto L_088A807C;
L_088A807C:
    ctx.set_gpr(31, 0x088A8084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8084u) goto L_088A8084;
    return;
L_088A8084:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(35))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8098u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8098u) goto L_088A8098;
    return;
L_088A8098:
    ctx.set_gpr(31, 0x088A80A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A80A0u) goto L_088A80A0;
    return;
L_088A80A0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(35))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A80B0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A80B0u) goto L_088A80B0;
    return;
L_088A80B0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088A8408;
      }
      goto L_088A80B8;
    }
L_088A80B8:
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_088A80FC;
    }
    goto L_088A80C0;
L_088A80C0:
    ctx.set_gpr(31, 0x088A80C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A80C8u) goto L_088A80C8;
    return;
L_088A80C8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(35))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A80DCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(19));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A80DCu) goto L_088A80DC;
    return;
L_088A80DC:
    ctx.set_gpr(31, 0x088A80E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A80E4u) goto L_088A80E4;
    return;
L_088A80E4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(35))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A80F4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A80F4u) goto L_088A80F4;
    return;
L_088A80F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8404;
      }
      goto L_088A80FC;
    }
L_088A80FC:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088A8140;
      }
      goto L_088A8104;
    }
L_088A8104:
    ctx.set_gpr(31, 0x088A810Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A810Cu) goto L_088A810C;
    return;
L_088A810C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(35))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8120u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8120u) goto L_088A8120;
    return;
L_088A8120:
    ctx.set_gpr(31, 0x088A8128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8128u) goto L_088A8128;
    return;
L_088A8128:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(35))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8138u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A8138u) goto L_088A8138;
    return;
L_088A8138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8404;
      }
      goto L_088A8140;
    }
L_088A8140:
    ctx.set_gpr(31, 0x088A8148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8148u) goto L_088A8148;
    return;
L_088A8148:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(35))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8158u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A8158u) goto L_088A8158;
    return;
L_088A8158:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8404;
      }
      goto L_088A8160;
    }
L_088A8160:
    ctx.set_gpr(31, 0x088A8168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8168u) goto L_088A8168;
    return;
L_088A8168:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8178u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 488u, 0x0884705Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8178u) goto L_088A8178;
    return;
L_088A8178:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088A82A8;
      }
      goto L_088A8184;
    }
L_088A8184:
    ctx.set_gpr(31, 0x088A818Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A818Cu) goto L_088A818C;
    return;
L_088A818C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(36))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088A81A8u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088A81A8u) goto L_088A81A8;
    return;
L_088A81A8:
    ctx.set_gpr(31, 0x088A81B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A81B0u) goto L_088A81B0;
    return;
L_088A81B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16192u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(36))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088A81D4u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088A81D4u) goto L_088A81D4;
    return;
L_088A81D4:
    ctx.set_gpr(31, 0x088A81DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A81DCu) goto L_088A81DC;
    return;
L_088A81DC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(36))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A81ECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 490u, 0x088470A8u>(ctx, &aot_mem) && ctx.pc == 0x088A81ECu) goto L_088A81EC;
    return;
L_088A81EC:
    ctx.set_gpr(31, 0x088A81F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A81F4u) goto L_088A81F4;
    return;
L_088A81F4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(36))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8204u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A8204u) goto L_088A8204;
    return;
L_088A8204:
    ctx.set_gpr(31, 0x088A820Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A820Cu) goto L_088A820C;
    return;
L_088A820C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(37))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088A8228u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8228u) goto L_088A8228;
    return;
L_088A8228:
    ctx.set_gpr(31, 0x088A8230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8230u) goto L_088A8230;
    return;
L_088A8230:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16192u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(37))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088A8254u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088A8254u) goto L_088A8254;
    return;
L_088A8254:
    ctx.set_gpr(31, 0x088A825Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A825Cu) goto L_088A825C;
    return;
L_088A825C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(37))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A826Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 490u, 0x088470A8u>(ctx, &aot_mem) && ctx.pc == 0x088A826Cu) goto L_088A826C;
    return;
L_088A826C:
    ctx.set_gpr(31, 0x088A8274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8274u) goto L_088A8274;
    return;
L_088A8274:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(37))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8284u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A8284u) goto L_088A8284;
    return;
L_088A8284:
    ctx.set_gpr(31, 0x088A828Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A828Cu) goto L_088A828C;
    return;
L_088A828C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(35))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088A82A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A82A0u) goto L_088A82A0;
    return;
L_088A82A0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088A8390;
      }
      goto L_088A82A8;
    }
L_088A82A8:
    ctx.set_gpr(31, 0x088A82B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A82B0u) goto L_088A82B0;
    return;
L_088A82B0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(31, 0x088A82BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 492u, 0x088470F8u>(ctx, &aot_mem) && ctx.pc == 0x088A82BCu) goto L_088A82BC;
    return;
L_088A82BC:
    ctx.set_gpr(31, 0x088A82C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A82C4u) goto L_088A82C4;
    return;
L_088A82C4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A82D4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A82D4u) goto L_088A82D4;
    return;
L_088A82D4:
    ctx.set_gpr(31, 0x088A82DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A82DCu) goto L_088A82DC;
    return;
L_088A82DC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(34))))));
    ctx.set_gpr(31, 0x088A82E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 492u, 0x088470F8u>(ctx, &aot_mem) && ctx.pc == 0x088A82E8u) goto L_088A82E8;
    return;
L_088A82E8:
    ctx.set_gpr(31, 0x088A82F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A82F0u) goto L_088A82F0;
    return;
L_088A82F0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(34))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8300u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A8300u) goto L_088A8300;
    return;
L_088A8300:
    ctx.set_gpr(31, 0x088A8308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8308u) goto L_088A8308;
    return;
L_088A8308:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(36))))));
    ctx.set_gpr(31, 0x088A8314u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 459u, 0x08846E7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8314u) goto L_088A8314;
    return;
L_088A8314:
    ctx.set_gpr(31, 0x088A831Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A831Cu) goto L_088A831C;
    return;
L_088A831C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(36))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A832Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A832Cu) goto L_088A832C;
    return;
L_088A832C:
    ctx.set_gpr(31, 0x088A8334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8334u) goto L_088A8334;
    return;
L_088A8334:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(37))))));
    ctx.set_gpr(31, 0x088A8340u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 459u, 0x08846E7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8340u) goto L_088A8340;
    return;
L_088A8340:
    ctx.set_gpr(31, 0x088A8348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8348u) goto L_088A8348;
    return;
L_088A8348:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(37))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8358u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A8358u) goto L_088A8358;
    return;
L_088A8358:
    ctx.set_gpr(31, 0x088A8360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8360u) goto L_088A8360;
    return;
L_088A8360:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(35))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8370u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A8370u) goto L_088A8370;
    return;
L_088A8370:
    ctx.set_gpr(31, 0x088A8378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8378u) goto L_088A8378;
    return;
L_088A8378:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(35))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088A838Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A838Cu) goto L_088A838C;
    return;
L_088A838C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_088A8390;
L_088A8390:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088A8404;
      }
      goto L_088A839C;
    }
L_088A839C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A83CC;
      }
      goto L_088A83A8;
    }
L_088A83A8:
    ctx.set_gpr(31, 0x088A83B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A83B0u) goto L_088A83B0;
    return;
L_088A83B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17204u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(31, 0x088A83C4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 413u, 0x088465E4u>(ctx, &aot_mem) && ctx.pc == 0x088A83C4u) goto L_088A83C4;
    return;
L_088A83C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A83E4;
      }
      goto L_088A83CC;
    }
L_088A83CC:
    ctx.set_gpr(31, 0x088A83D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A83D4u) goto L_088A83D4;
    return;
L_088A83D4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A83E4u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 413u, 0x088465E4u>(ctx, &aot_mem) && ctx.pc == 0x088A83E4u) goto L_088A83E4;
    return;
L_088A83E4:
    ctx.set_gpr(31, 0x088A83ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A83ECu) goto L_088A83EC;
    return;
L_088A83EC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088A8404u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 442u, 0x08846C04u>(ctx, &aot_mem) && ctx.pc == 0x088A8404u) goto L_088A8404;
    return;
L_088A8404:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    goto L_088A8408;
L_088A8408:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_088A840C;
L_088A840C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 4 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(136)));
        goto L_088A84B8;
    }
    goto L_088A8418;
L_088A8418:
    ctx.set_gpr(31, 0x088A8420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8420u) goto L_088A8420;
    return;
L_088A8420:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8430u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 460u, 0x08846E9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8430u) goto L_088A8430;
    return;
L_088A8430:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A84B4;
      }
      goto L_088A843C;
    }
L_088A843C:
    ctx.set_gpr(31, 0x088A8444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8444u) goto L_088A8444;
    return;
L_088A8444:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8454u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 413u, 0x088465E4u>(ctx, &aot_mem) && ctx.pc == 0x088A8454u) goto L_088A8454;
    return;
L_088A8454:
    ctx.set_gpr(31, 0x088A845Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A845Cu) goto L_088A845C;
    return;
L_088A845C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A846Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A846Cu) goto L_088A846C;
    return;
L_088A846C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088A849C;
      }
      goto L_088A8478;
    }
L_088A8478:
    ctx.set_gpr(31, 0x088A8480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8480u) goto L_088A8480;
    return;
L_088A8480:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8494u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8494u) goto L_088A8494;
    return;
L_088A8494:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A84B4;
      }
      goto L_088A849C;
    }
L_088A849C:
    ctx.set_gpr(31, 0x088A84A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A84A4u) goto L_088A84A4;
    return;
L_088A84A4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A84B4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A84B4u) goto L_088A84B4;
    return;
L_088A84B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(136)));
    goto L_088A84B8;
L_088A84B8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(140)));
        goto L_088A859C;
    }
    goto L_088A84C4;
L_088A84C4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(140)));
        goto L_088A8554;
    }
    goto L_088A84D0;
L_088A84D0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088A84E4;
      }
      goto L_088A84DC;
    }
L_088A84DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088A85D4;
      }
      goto L_088A84E4;
    }
L_088A84E4:
    ctx.set_gpr(31, 0x088A84ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A84ECu) goto L_088A84EC;
    return;
L_088A84EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(39))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(31, 0x088A8504u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8504u) goto L_088A8504;
    return;
L_088A8504:
    ctx.set_gpr(31, 0x088A850Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A850Cu) goto L_088A850C;
    return;
L_088A850C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16281u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(39))))));
    ctx.set_gpr(31, 0x088A8524u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 402u, 0x088463E4u>(ctx, &aot_mem) && ctx.pc == 0x088A8524u) goto L_088A8524;
    return;
L_088A8524:
    ctx.set_gpr(31, 0x088A852Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A852Cu) goto L_088A852C;
    return;
L_088A852C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(39))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A853Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A853Cu) goto L_088A853C;
    return;
L_088A853C:
    ctx.set_gpr(3, 15564u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(140), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(136), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088A85D0;
      }
      goto L_088A8554;
    }
L_088A8554:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_088A85D0;
      }
      goto L_088A856C;
    }
L_088A856C:
    ctx.set_gpr(31, 0x088A8574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8574u) goto L_088A8574;
    return;
L_088A8574:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(39))))));
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(31, 0x088A8588u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 402u, 0x088463E4u>(ctx, &aot_mem) && ctx.pc == 0x088A8588u) goto L_088A8588;
    return;
L_088A8588:
    ctx.set_gpr(3, 16384u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(140), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(136), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088A85D0;
      }
      goto L_088A859C;
    }
L_088A859C:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_088A85D0;
      }
      goto L_088A85B4;
    }
L_088A85B4:
    ctx.set_gpr(31, 0x088A85BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A85BCu) goto L_088A85BC;
    return;
L_088A85BC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(39))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A85CCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A85CCu) goto L_088A85CC;
    return;
L_088A85CC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(136), 0u);
    goto L_088A85D0;
L_088A85D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_088A85D4;
L_088A85D4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A85E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
      if (branch_taken) {
          goto L_088A8990;
      }
      goto L_088A860C;
    }
L_088A860C:
    ctx.set_gpr(31, 0x088A8614u);
    // nop
    goto L_088A9C9C;
L_088A8614:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8940;
      }
      goto L_088A8620;
    }
L_088A8620:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
        goto L_088A8938;
    }
    goto L_088A8630;
L_088A8630:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(30908));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A864C:
    ctx.set_gpr(31, 0x088A8654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8654u) goto L_088A8654;
    return;
L_088A8654:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    ctx.set_gpr(31, 0x088A8660u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 456u, 0x08846E40u>(ctx, &aot_mem) && ctx.pc == 0x088A8660u) goto L_088A8660;
    return;
L_088A8660:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8934;
      }
      goto L_088A866C;
    }
L_088A866C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088A8934;
      }
      goto L_088A8680;
    }
L_088A8680:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A86D8;
      }
      goto L_088A869C;
    }
L_088A869C:
    ctx.set_gpr(31, 0x088A86A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A86A4u) goto L_088A86A4;
    return;
L_088A86A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088A86C8u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088A86C8u) goto L_088A86C8;
    return;
L_088A86C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088A8934;
      }
      goto L_088A86D8;
    }
L_088A86D8:
    ctx.set_gpr(31, 0x088A86E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A86E0u) goto L_088A86E0;
    return;
L_088A86E0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(43))))));
    ctx.set_gpr(31, 0x088A86ECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 447u, 0x08846D8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A86ECu) goto L_088A86EC;
    return;
L_088A86EC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8934;
      }
      goto L_088A86F8;
    }
L_088A86F8:
    ctx.set_gpr(31, 0x088A8700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8700u) goto L_088A8700;
    return;
L_088A8700:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(43))))));
    ctx.set_gpr(31, 0x088A870Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 456u, 0x08846E40u>(ctx, &aot_mem) && ctx.pc == 0x088A870Cu) goto L_088A870C;
    return;
L_088A870C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8934;
      }
      goto L_088A8718;
    }
L_088A8718:
    ctx.set_gpr(31, 0x088A8720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8720u) goto L_088A8720;
    return;
L_088A8720:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(43))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088A8744u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088A8744u) goto L_088A8744;
    return;
L_088A8744:
    ctx.set_gpr(31, 0x088A874Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A874Cu) goto L_088A874C;
    return;
L_088A874C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(43))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A875Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 490u, 0x088470A8u>(ctx, &aot_mem) && ctx.pc == 0x088A875Cu) goto L_088A875C;
    return;
L_088A875C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8934;
      }
      goto L_088A8764;
    }
L_088A8764:
    ctx.set_gpr(31, 0x088A876Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A876Cu) goto L_088A876C;
    return;
L_088A876C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    ctx.set_gpr(31, 0x088A8778u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 456u, 0x08846E40u>(ctx, &aot_mem) && ctx.pc == 0x088A8778u) goto L_088A8778;
    return;
L_088A8778:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8934;
      }
      goto L_088A8784;
    }
L_088A8784:
    ctx.set_gpr(31, 0x088A878Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A878Cu) goto L_088A878C;
    return;
L_088A878C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A879Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A879Cu) goto L_088A879C;
    return;
L_088A879C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088A8934;
      }
      goto L_088A87AC;
    }
L_088A87AC:
    ctx.set_gpr(31, 0x088A87B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A87B4u) goto L_088A87B4;
    return;
L_088A87B4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    ctx.set_gpr(31, 0x088A87C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 456u, 0x08846E40u>(ctx, &aot_mem) && ctx.pc == 0x088A87C0u) goto L_088A87C0;
    return;
L_088A87C0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8934;
      }
      goto L_088A87CC;
    }
L_088A87CC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088A8934;
      }
      goto L_088A87E0;
    }
L_088A87E0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A8934;
      }
      goto L_088A87FC;
    }
L_088A87FC:
    ctx.set_gpr(31, 0x088A8804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8804u) goto L_088A8804;
    return;
L_088A8804:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088A8828u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088A8828u) goto L_088A8828;
    return;
L_088A8828:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(26));
    goto L_088A882C;
L_088A882C:
    ctx.set_gpr(31, 0x088A8834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8834u) goto L_088A8834;
    return;
L_088A8834:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(23))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088A885Cu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088A885Cu) goto L_088A885C;
    return;
L_088A885C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 34 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A882C;
      }
      goto L_088A886C;
    }
L_088A886C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088A8934;
      }
      goto L_088A887C;
    }
L_088A887C:
    ctx.set_gpr(31, 0x088A8884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8884u) goto L_088A8884;
    return;
L_088A8884:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    ctx.set_gpr(31, 0x088A8890u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 456u, 0x08846E40u>(ctx, &aot_mem) && ctx.pc == 0x088A8890u) goto L_088A8890;
    return;
L_088A8890:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8934;
      }
      goto L_088A889C;
    }
L_088A889C:
    ctx.set_gpr(31, 0x088A88A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A88A4u) goto L_088A88A4;
    return;
L_088A88A4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A88B4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A88B4u) goto L_088A88B4;
    return;
L_088A88B4:
    ctx.set_gpr(31, 0x088A88BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A88BCu) goto L_088A88BC;
    return;
L_088A88BC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(41))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A88CCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A88CCu) goto L_088A88CC;
    return;
L_088A88CC:
    ctx.set_gpr(31, 0x088A88D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A88D4u) goto L_088A88D4;
    return;
L_088A88D4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(42))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A88E4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A88E4u) goto L_088A88E4;
    return;
L_088A88E4:
    ctx.set_gpr(31, 0x088A88ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A88ECu) goto L_088A88EC;
    return;
L_088A88EC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(43))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A88FCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A88FCu) goto L_088A88FC;
    return;
L_088A88FC:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(26));
    goto L_088A8900;
L_088A8900:
    ctx.set_gpr(31, 0x088A8908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8908u) goto L_088A8908;
    return;
L_088A8908:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(23))))));
    ctx.set_gpr(31, 0x088A891Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A891Cu) goto L_088A891C;
    return;
L_088A891C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 34 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8900;
      }
      goto L_088A892C;
    }
L_088A892C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    goto L_088A8934;
L_088A8934:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    goto L_088A8938;
L_088A8938:
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[20];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088A8940;
L_088A8940:
    ctx.set_gpr(31, 0x088A8948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8948u) goto L_088A8948;
    return;
L_088A8948:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44))))));
    ctx.set_gpr(31, 0x088A8954u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 447u, 0x08846D8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8954u) goto L_088A8954;
    return;
L_088A8954:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_088A8994;
    }
    goto L_088A8960;
L_088A8960:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(21));
    goto L_088A8964;
L_088A8964:
    ctx.set_gpr(31, 0x088A896Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A896Cu) goto L_088A896C;
    return;
L_088A896C:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(23))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8980u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A8980u) goto L_088A8980;
    return;
L_088A8980:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 26 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8964;
      }
      goto L_088A8990;
    }
L_088A8990:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_088A8994;
L_088A8994:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A89A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088A8A0C;
      }
      goto L_088A89C8;
    }
L_088A89C8:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_088A89CC;
L_088A89CC:
    ctx.set_gpr(31, 0x088A89D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A89D4u) goto L_088A89D4;
    return;
L_088A89D4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x088A89E4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_088A8A24;
L_088A89E4:
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(25))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(21))))));
    ctx.set_gpr(31, 0x088A89FCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A89FCu) goto L_088A89FC;
    return;
L_088A89FC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A89CC;
      }
      goto L_088A8A0C;
    }
L_088A8A0C:
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
L_088A8A24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088A8A50;
      }
      goto L_088A8A3C;
    }
L_088A8A3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.hi);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088A8A74;
      }
      goto L_088A8A50;
    }
L_088A8A50:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088A8A5Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
    goto L_088A8A80;
L_088A8A5C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_088A8A74;
L_088A8A74:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8A80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088A8A90;
      }
      goto L_088A8A88;
    }
L_088A8A88:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A8B20;
      }
      goto L_088A8A90;
    }
L_088A8A90:
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_088A8B1C;
      }
      goto L_088A8A9C;
    }
L_088A8A9C:
    ctx.set_gpr(1, ctx.gpr[6] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_088A8AF8;
      }
      goto L_088A8AA8;
    }
L_088A8AA8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_088A8AAC;
L_088A8AAC:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    if (ctx.gpr[2] != 0u) {
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
        goto L_088A8AAC;
    }
    goto L_088A8AF8;
L_088A8AF8:
    ctx.set_gpr(1, ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
        goto L_088A8B20;
    }
    goto L_088A8B04;
L_088A8B04:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_088A8B08;
L_088A8B08:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(4, ctx.lo);
    if (ctx.gpr[2] != 0u) {
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
        goto L_088A8B08;
    }
    goto L_088A8B1C;
L_088A8B1C:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    goto L_088A8B20;
L_088A8B20:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8B28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088A8BF0;
      }
      goto L_088A8B40;
    }
L_088A8B40:
    ctx.set_gpr(31, 0x088A8B48u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8B48u) goto L_088A8B48;
    return;
L_088A8B48:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(31, 0x088A8B54u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 492u, 0x088470F8u>(ctx, &aot_mem) && ctx.pc == 0x088A8B54u) goto L_088A8B54;
    return;
L_088A8B54:
    ctx.set_gpr(31, 0x088A8B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8B5Cu) goto L_088A8B5C;
    return;
L_088A8B5C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8B6Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A8B6Cu) goto L_088A8B6C;
    return;
L_088A8B6C:
    ctx.set_gpr(31, 0x088A8B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8B74u) goto L_088A8B74;
    return;
L_088A8B74:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(34))))));
    ctx.set_gpr(31, 0x088A8B80u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 492u, 0x088470F8u>(ctx, &aot_mem) && ctx.pc == 0x088A8B80u) goto L_088A8B80;
    return;
L_088A8B80:
    ctx.set_gpr(31, 0x088A8B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8B88u) goto L_088A8B88;
    return;
L_088A8B88:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(34))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8B98u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A8B98u) goto L_088A8B98;
    return;
L_088A8B98:
    ctx.set_gpr(31, 0x088A8BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8BA0u) goto L_088A8BA0;
    return;
L_088A8BA0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8BB0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A8BB0u) goto L_088A8BB0;
    return;
L_088A8BB0:
    ctx.set_gpr(31, 0x088A8BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8BB8u) goto L_088A8BB8;
    return;
L_088A8BB8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    ctx.set_gpr(31, 0x088A8BC4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 459u, 0x08846E7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8BC4u) goto L_088A8BC4;
    return;
L_088A8BC4:
    ctx.set_gpr(31, 0x088A8BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8BCCu) goto L_088A8BCC;
    return;
L_088A8BCC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(37))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8BDCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A8BDCu) goto L_088A8BDC;
    return;
L_088A8BDC:
    ctx.set_gpr(31, 0x088A8BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8BE4u) goto L_088A8BE4;
    return;
L_088A8BE4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(37))))));
    ctx.set_gpr(31, 0x088A8BF0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 459u, 0x08846E7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8BF0u) goto L_088A8BF0;
    return;
L_088A8BF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8C00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088A8C24u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_088A9380;
L_088A8C24:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    ctx.set_gpr(31, 0x088A8C3Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8C3Cu) goto L_088A8C3C;
    return;
L_088A8C3C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8C50u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(42));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8C50u) goto L_088A8C50;
    return;
L_088A8C50:
    ctx.set_gpr(31, 0x088A8C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8C58u) goto L_088A8C58;
    return;
L_088A8C58:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8C68u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A8C68u) goto L_088A8C68;
    return;
L_088A8C68:
    ctx.set_gpr(31, 0x088A8C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8C70u) goto L_088A8C70;
    return;
L_088A8C70:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088A8C8Cu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8C8Cu) goto L_088A8C8C;
    return;
L_088A8C8C:
    ctx.set_gpr(31, 0x088A8C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8C94u) goto L_088A8C94;
    return;
L_088A8C94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088A8CB8u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088A8CB8u) goto L_088A8CB8;
    return;
L_088A8CB8:
    ctx.set_gpr(31, 0x088A8CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8CC0u) goto L_088A8CC0;
    return;
L_088A8CC0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(41))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8CD0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A8CD0u) goto L_088A8CD0;
    return;
L_088A8CD0:
    ctx.set_gpr(31, 0x088A8CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8CD8u) goto L_088A8CD8;
    return;
L_088A8CD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 49760u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(41))))));
    ctx.set_gpr(31, 0x088A8CF4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A8CF4u) goto L_088A8CF4;
    return;
L_088A8CF4:
    ctx.set_gpr(31, 0x088A8CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8CFCu) goto L_088A8CFC;
    return;
L_088A8CFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 49280u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(41))))));
    ctx.set_gpr(31, 0x088A8D20u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A8D20u) goto L_088A8D20;
    return;
L_088A8D20:
    ctx.set_gpr(31, 0x088A8D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8D28u) goto L_088A8D28;
    return;
L_088A8D28:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(42))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8D38u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A8D38u) goto L_088A8D38;
    return;
L_088A8D38:
    ctx.set_gpr(31, 0x088A8D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8D40u) goto L_088A8D40;
    return;
L_088A8D40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17316u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(42))))));
    ctx.set_gpr(31, 0x088A8D5Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A8D5Cu) goto L_088A8D5C;
    return;
L_088A8D5C:
    ctx.set_gpr(31, 0x088A8D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8D64u) goto L_088A8D64;
    return;
L_088A8D64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17290u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(42))))));
    ctx.set_gpr(31, 0x088A8D88u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A8D88u) goto L_088A8D88;
    return;
L_088A8D88:
    ctx.set_gpr(31, 0x088A8D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8D90u) goto L_088A8D90;
    return;
L_088A8D90:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(43))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8DA0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A8DA0u) goto L_088A8DA0;
    return;
L_088A8DA0:
    ctx.set_gpr(31, 0x088A8DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8DA8u) goto L_088A8DA8;
    return;
L_088A8DA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16930u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17308u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(43))))));
    ctx.set_gpr(31, 0x088A8DC8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A8DC8u) goto L_088A8DC8;
    return;
L_088A8DC8:
    ctx.set_gpr(31, 0x088A8DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8DD0u) goto L_088A8DD0;
    return;
L_088A8DD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16930u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17282u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(43))))));
    ctx.set_gpr(31, 0x088A8DF8u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A8DF8u) goto L_088A8DF8;
    return;
L_088A8DF8:
    ctx.set_gpr(31, 0x088A8E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8E00u) goto L_088A8E00;
    return;
L_088A8E00:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(43))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088A8E1Cu);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8E1Cu) goto L_088A8E1C;
    return;
L_088A8E1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8E2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088A90E4;
      }
      goto L_088A8E60;
    }
L_088A8E60:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088A8E74u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_088A9380;
L_088A8E74:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(116), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088A8E84u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8E84u) goto L_088A8E84;
    return;
L_088A8E84:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(40))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(21))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8E98u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(43));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8E98u) goto L_088A8E98;
    return;
L_088A8E98:
    ctx.set_gpr(31, 0x088A8EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8EA0u) goto L_088A8EA0;
    return;
L_088A8EA0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(40))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8EB0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A8EB0u) goto L_088A8EB0;
    return;
L_088A8EB0:
    ctx.set_gpr(31, 0x088A8EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8EB8u) goto L_088A8EB8;
    return;
L_088A8EB8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(40))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088A8ED4u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8ED4u) goto L_088A8ED4;
    return;
L_088A8ED4:
    ctx.set_gpr(31, 0x088A8EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8EDCu) goto L_088A8EDC;
    return;
L_088A8EDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(40))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088A8F00u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088A8F00u) goto L_088A8F00;
    return;
L_088A8F00:
    ctx.set_gpr(31, 0x088A8F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8F08u) goto L_088A8F08;
    return;
L_088A8F08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 49760u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(41))))));
    ctx.set_gpr(31, 0x088A8F2Cu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A8F2Cu) goto L_088A8F2C;
    return;
L_088A8F2C:
    ctx.set_gpr(31, 0x088A8F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8F34u) goto L_088A8F34;
    return;
L_088A8F34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17316u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(42))))));
    ctx.set_gpr(31, 0x088A8F58u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A8F58u) goto L_088A8F58;
    return;
L_088A8F58:
    ctx.set_gpr(31, 0x088A8F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8F60u) goto L_088A8F60;
    return;
L_088A8F60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16930u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17308u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(43))))));
    ctx.set_gpr(31, 0x088A8F88u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A8F88u) goto L_088A8F88;
    return;
L_088A8F88:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(26));
    goto L_088A8F8C;
L_088A8F8C:
    ctx.set_gpr(31, 0x088A8F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A8F94u) goto L_088A8F94;
    return;
L_088A8F94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[16]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(23))))));
    ctx.set_gpr(31, 0x088A8FA8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A8FA8u) goto L_088A8FA8;
    return;
L_088A8FA8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 34 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8F8C;
      }
      goto L_088A8FB8;
    }
L_088A8FB8:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_088A8FC0;
L_088A8FC0:
    ctx.set_gpr(31, 0x088A8FC8u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_088A8A24;
L_088A8FC8:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
        goto L_088A8FE0;
    }
    goto L_088A8FD0;
L_088A8FD0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    if (static_cast<std::int32_t>(ctx.gpr[19]) > 0) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_088A8FC0;
    }
    goto L_088A8FDC;
L_088A8FDC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    goto L_088A8FE0;
L_088A8FE0:
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.set_gpr(4, 17264u << 16u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(3, 16704u << 16u);
    ctx.fpr[2] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.fpr[20] = ctx.fpr[1] + ctx.fpr[0];
      if (branch_taken) {
          goto L_088A90E4;
      }
      goto L_088A9014;
    }
L_088A9014:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088A9020u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_088A8A24;
L_088A9020:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[18]);
    ctx.set_gpr(31, 0x088A9030u);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(49));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9030u) goto L_088A9030;
    return;
L_088A9030:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(21))))));
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088A9044u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9044u) goto L_088A9044;
    return;
L_088A9044:
    ctx.set_gpr(31, 0x088A904Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A904Cu) goto L_088A904C;
    return;
L_088A904C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A905Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A905Cu) goto L_088A905C;
    return;
L_088A905C:
    ctx.set_gpr(31, 0x088A9064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9064u) goto L_088A9064;
    return;
L_088A9064:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088A9080u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9080u) goto L_088A9080;
    return;
L_088A9080:
    ctx.set_gpr(31, 0x088A9088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9088u) goto L_088A9088;
    return;
L_088A9088:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088A90ACu);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088A90ACu) goto L_088A90AC;
    return;
L_088A90AC:
    ctx.set_gpr(31, 0x088A90B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A90B4u) goto L_088A90B4;
    return;
L_088A90B4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 17239u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A90CCu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A90CCu) goto L_088A90CC;
    return;
L_088A90CC:
    ctx.set_gpr(3, 16704u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[0];
      if (branch_taken) {
          goto L_088A9014;
      }
      goto L_088A90E4;
    }
L_088A90E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A910C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_fpr_bits(21, ctx.fpr_bits(13));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(21));
    goto L_088A914C;
L_088A914C:
    ctx.set_gpr(31, 0x088A9154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9154u) goto L_088A9154;
    return;
L_088A9154:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[16]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(23))))));
    ctx.set_gpr(31, 0x088A9168u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9168u) goto L_088A9168;
    return;
L_088A9168:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 26 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A914C;
      }
      goto L_088A9178;
    }
L_088A9178:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_088A9180;
L_088A9180:
    ctx.set_gpr(31, 0x088A9188u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_088A8A24;
L_088A9188:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_088A91A0;
    }
    goto L_088A9190;
L_088A9190:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    if (static_cast<std::int32_t>(ctx.gpr[18]) > 0) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_088A9180;
    }
    goto L_088A919C;
L_088A919C:
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_088A91A0;
L_088A91A0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, 16128u << 16u);
    ctx.set_gpr(3, 16704u << 16u);
    ctx.set_gpr(2, 49628u << 16u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[21];
      if (branch_taken) {
          goto L_088A92AC;
      }
      goto L_088A91DC;
    }
L_088A91DC:
    ctx.set_gpr(2, 49648u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[21] = ctx.fpr[0] + ctx.fpr[22];
    goto L_088A91E8;
L_088A91E8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088A91F4u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_088A8A24;
L_088A91F4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[17]);
    ctx.set_gpr(31, 0x088A9204u);
    ctx.set_gpr(21, ctx.gpr[2] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9204u) goto L_088A9204;
    return;
L_088A9204:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(21))))));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(30));
    ctx.set_gpr(31, 0x088A9218u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9218u) goto L_088A9218;
    return;
L_088A9218:
    ctx.set_gpr(31, 0x088A9220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9220u) goto L_088A9220;
    return;
L_088A9220:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9230u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9230u) goto L_088A9230;
    return;
L_088A9230:
    ctx.set_gpr(31, 0x088A9238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9238u) goto L_088A9238;
    return;
L_088A9238:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088A9254u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9254u) goto L_088A9254;
    return;
L_088A9254:
    ctx.set_gpr(31, 0x088A925Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A925Cu) goto L_088A925C;
    return;
L_088A925C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x088A9270u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(22));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A9270u) goto L_088A9270;
    return;
L_088A9270:
    ctx.set_gpr(31, 0x088A9278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9278u) goto L_088A9278;
    return;
L_088A9278:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x088A9294u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A9294u) goto L_088A9294;
    return;
L_088A9294:
    ctx.set_gpr(2, 16704u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[0];
      if (branch_taken) {
          goto L_088A91E8;
      }
      goto L_088A92AC;
    }
L_088A92AC:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
    ctx.set_gpr(31, 0x088A92B8u);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A92B8u) goto L_088A92B8;
    return;
L_088A92B8:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(21))))));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A92CCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A92CCu) goto L_088A92CC;
    return;
L_088A92CC:
    ctx.set_gpr(31, 0x088A92D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A92D4u) goto L_088A92D4;
    return;
L_088A92D4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A92E4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A92E4u) goto L_088A92E4;
    return;
L_088A92E4:
    ctx.set_gpr(31, 0x088A92ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A92ECu) goto L_088A92EC;
    return;
L_088A92EC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088A9308u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9308u) goto L_088A9308;
    return;
L_088A9308:
    ctx.set_gpr(31, 0x088A9310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9310u) goto L_088A9310;
    return;
L_088A9310:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x088A9324u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(22));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A9324u) goto L_088A9324;
    return;
L_088A9324:
    ctx.set_gpr(31, 0x088A932Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A932Cu) goto L_088A932C;
    return;
L_088A932C:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 49648u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[14] = ctx.fpr[0] + ctx.fpr[22];
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9350u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A9350u) goto L_088A9350;
    return;
L_088A9350:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9380:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_088A97E0;
      }
      goto L_088A93B0;
    }
L_088A93B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(124), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[17]);
    goto L_088A93CC;
L_088A93CC:
    ctx.set_gpr(31, 0x088A93D4u);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A93D4u) goto L_088A93D4;
    return;
L_088A93D4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A93E4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A93E4u) goto L_088A93E4;
    return;
L_088A93E4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16728u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17382u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A940Cu);
    ctx.fpr[20] = ctx.fpr[0] - ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A940Cu) goto L_088A940C;
    return;
L_088A940C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49504u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A9424u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A9424u) goto L_088A9424;
    return;
L_088A9424:
    ctx.set_gpr(31, 0x088A942Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A942Cu) goto L_088A942C;
    return;
L_088A942C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16656u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A9448u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A9448u) goto L_088A9448;
    return;
L_088A9448:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[17]);
        goto L_088A93CC;
    }
    goto L_088A9458;
L_088A9458:
    ctx.set_gpr(31, 0x088A9460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9460u) goto L_088A9460;
    return;
L_088A9460:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(23))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9470u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9470u) goto L_088A9470;
    return;
L_088A9470:
    ctx.set_gpr(31, 0x088A9478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9478u) goto L_088A9478;
    return;
L_088A9478:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(33))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9488u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9488u) goto L_088A9488;
    return;
L_088A9488:
    ctx.set_gpr(31, 0x088A9490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9490u) goto L_088A9490;
    return;
L_088A9490:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(25))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A94A0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A94A0u) goto L_088A94A0;
    return;
L_088A94A0:
    ctx.set_gpr(31, 0x088A94A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A94A8u) goto L_088A94A8;
    return;
L_088A94A8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A94B8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A94B8u) goto L_088A94B8;
    return;
L_088A94B8:
    ctx.set_gpr(31, 0x088A94C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A94C0u) goto L_088A94C0;
    return;
L_088A94C0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(35))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A94D0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A94D0u) goto L_088A94D0;
    return;
L_088A94D0:
    ctx.set_gpr(31, 0x088A94D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A94D8u) goto L_088A94D8;
    return;
L_088A94D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49592u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(23))))));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x088A94F0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A94F0u) goto L_088A94F0;
    return;
L_088A94F0:
    ctx.set_gpr(31, 0x088A94F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A94F8u) goto L_088A94F8;
    return;
L_088A94F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17288u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(33))))));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x088A9510u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A9510u) goto L_088A9510;
    return;
L_088A9510:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A953C;
      }
      goto L_088A9518;
    }
L_088A9518:
    ctx.set_gpr(31, 0x088A9520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9520u) goto L_088A9520;
    return;
L_088A9520:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16680u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 49512u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(25))))));
    ctx.set_gpr(31, 0x088A953Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A953Cu) goto L_088A953C;
    return;
L_088A953C:
    ctx.set_gpr(31, 0x088A9544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9544u) goto L_088A9544;
    return;
L_088A9544:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17302u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(35))))));
    ctx.set_gpr(31, 0x088A9564u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A9564u) goto L_088A9564;
    return;
L_088A9564:
    ctx.set_gpr(31, 0x088A956Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A956Cu) goto L_088A956C;
    return;
L_088A956C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17302u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(31, 0x088A958Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A958Cu) goto L_088A958C;
    return;
L_088A958C:
    ctx.set_gpr(31, 0x088A9594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9594u) goto L_088A9594;
    return;
L_088A9594:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17302u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(36))))));
    ctx.set_gpr(31, 0x088A95B4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A95B4u) goto L_088A95B4;
    return;
L_088A95B4:
    ctx.set_gpr(31, 0x088A95BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A95BCu) goto L_088A95BC;
    return;
L_088A95BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17302u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(37))))));
    ctx.set_gpr(31, 0x088A95DCu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A95DCu) goto L_088A95DC;
    return;
L_088A95DC:
    ctx.set_gpr(31, 0x088A95E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A95E4u) goto L_088A95E4;
    return;
L_088A95E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17367u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17309u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 16384u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(39))))));
    ctx.set_gpr(31, 0x088A9604u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A9604u) goto L_088A9604;
    return;
L_088A9604:
    ctx.set_gpr(31, 0x088A960Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A960Cu) goto L_088A960C;
    return;
L_088A960C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49592u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(24))))));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x088A9624u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A9624u) goto L_088A9624;
    return;
L_088A9624:
    ctx.set_gpr(31, 0x088A962Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A962Cu) goto L_088A962C;
    return;
L_088A962C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17288u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(34))))));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x088A9644u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A9644u) goto L_088A9644;
    return;
L_088A9644:
    ctx.set_gpr(31, 0x088A964Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A964Cu) goto L_088A964C;
    return;
L_088A964C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(23))))));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x088A9664u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(13));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A9664u) goto L_088A9664;
    return;
L_088A9664:
    ctx.set_gpr(31, 0x088A966Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A966Cu) goto L_088A966C;
    return;
L_088A966C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17242u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(33))))));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A9688u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A9688u) goto L_088A9688;
    return;
L_088A9688:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A96B8;
      }
      goto L_088A9690;
    }
L_088A9690:
    ctx.set_gpr(31, 0x088A9698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9698u) goto L_088A9698;
    return;
L_088A9698:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16680u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16648u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(25))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A96B8u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A96B8u) goto L_088A96B8;
    return;
L_088A96B8:
    ctx.set_gpr(31, 0x088A96C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A96C0u) goto L_088A96C0;
    return;
L_088A96C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17271u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(35))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A96E0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A96E0u) goto L_088A96E0;
    return;
L_088A96E0:
    ctx.set_gpr(31, 0x088A96E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A96E8u) goto L_088A96E8;
    return;
L_088A96E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17271u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(38))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A9708u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A9708u) goto L_088A9708;
    return;
L_088A9708:
    ctx.set_gpr(31, 0x088A9710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9710u) goto L_088A9710;
    return;
L_088A9710:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17271u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(36))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A9730u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A9730u) goto L_088A9730;
    return;
L_088A9730:
    ctx.set_gpr(31, 0x088A9738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9738u) goto L_088A9738;
    return;
L_088A9738:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17271u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(37))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A9758u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A9758u) goto L_088A9758;
    return;
L_088A9758:
    ctx.set_gpr(31, 0x088A9760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9760u) goto L_088A9760;
    return;
L_088A9760:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17367u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17282u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 16384u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(39))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A9784u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A9784u) goto L_088A9784;
    return;
L_088A9784:
    ctx.set_gpr(31, 0x088A978Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A978Cu) goto L_088A978C;
    return;
L_088A978C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(24))))));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x088A97A4u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(13));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A97A4u) goto L_088A97A4;
    return;
L_088A97A4:
    ctx.set_gpr(31, 0x088A97ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A97ACu) goto L_088A97AC;
    return;
L_088A97AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17242u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(34))))));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A97C8u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A97C8u) goto L_088A97C8;
    return;
L_088A97C8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x088A97D8u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 970u, 0x088A7F94u>(ctx, &aot_mem) && ctx.pc == 0x088A97D8u) goto L_088A97D8;
    return;
L_088A97D8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_088A9B4C;
      }
      goto L_088A97E0;
    }
L_088A97E0:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(16, 0u + 0u);
    goto L_088A97E8;
L_088A97E8:
    ctx.set_gpr(31, 0x088A97F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A97F0u) goto L_088A97F0;
    return;
L_088A97F0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16728u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17382u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 32768u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[16]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(26))))));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_gpr(2, 49504u << 16u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x088A9830u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A9830u) goto L_088A9830;
    return;
L_088A9830:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A97E8;
      }
      goto L_088A9840;
    }
L_088A9840:
    ctx.set_gpr(31, 0x088A9848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9848u) goto L_088A9848;
    return;
L_088A9848:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49592u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(23))))));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A9864u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A9864u) goto L_088A9864;
    return;
L_088A9864:
    ctx.set_gpr(31, 0x088A986Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A986Cu) goto L_088A986C;
    return;
L_088A986C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17288u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(33))))));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A9888u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A9888u) goto L_088A9888;
    return;
L_088A9888:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A98B8;
      }
      goto L_088A9890;
    }
L_088A9890:
    ctx.set_gpr(31, 0x088A9898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9898u) goto L_088A9898;
    return;
L_088A9898:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16680u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 49512u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(25))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A98B8u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A98B8u) goto L_088A98B8;
    return;
L_088A98B8:
    ctx.set_gpr(31, 0x088A98C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A98C0u) goto L_088A98C0;
    return;
L_088A98C0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(35))))));
    ctx.set_gpr(31, 0x088A98CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 486u, 0x08846FF8u>(ctx, &aot_mem) && ctx.pc == 0x088A98CCu) goto L_088A98CC;
    return;
L_088A98CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9908;
      }
      goto L_088A98D4;
    }
L_088A98D4:
    ctx.set_gpr(31, 0x088A98DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A98DCu) goto L_088A98DC;
    return;
L_088A98DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17302u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(35))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A9900u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A9900u) goto L_088A9900;
    return;
L_088A9900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9930;
      }
      goto L_088A9908;
    }
L_088A9908:
    ctx.set_gpr(31, 0x088A9910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9910u) goto L_088A9910;
    return;
L_088A9910:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17302u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(35))))));
    ctx.set_gpr(31, 0x088A9930u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A9930u) goto L_088A9930;
    return;
L_088A9930:
    ctx.set_gpr(31, 0x088A9938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9938u) goto L_088A9938;
    return;
L_088A9938:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17302u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(38))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A995Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A995Cu) goto L_088A995C;
    return;
L_088A995C:
    ctx.set_gpr(31, 0x088A9964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9964u) goto L_088A9964;
    return;
L_088A9964:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17367u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17309u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 16384u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(39))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A9988u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A9988u) goto L_088A9988;
    return;
L_088A9988:
    ctx.set_gpr(31, 0x088A9990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9990u) goto L_088A9990;
    return;
L_088A9990:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(39))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A99A0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A99A0u) goto L_088A99A0;
    return;
L_088A99A0:
    ctx.set_gpr(31, 0x088A99A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A99A8u) goto L_088A99A8;
    return;
L_088A99A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17302u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(36))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A99CCu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A99CCu) goto L_088A99CC;
    return;
L_088A99CC:
    ctx.set_gpr(31, 0x088A99D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A99D4u) goto L_088A99D4;
    return;
L_088A99D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17302u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(37))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A99F8u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A99F8u) goto L_088A99F8;
    return;
L_088A99F8:
    ctx.set_gpr(31, 0x088A9A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9A00u) goto L_088A9A00;
    return;
L_088A9A00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49592u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(24))))));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A9A1Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A9A1Cu) goto L_088A9A1C;
    return;
L_088A9A1C:
    ctx.set_gpr(31, 0x088A9A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9A24u) goto L_088A9A24;
    return;
L_088A9A24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17288u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(34))))));
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x088A9A40u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x088A9A40u) goto L_088A9A40;
    return;
L_088A9A40:
    ctx.set_gpr(31, 0x088A9A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9A48u) goto L_088A9A48;
    return;
L_088A9A48:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(57))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9A58u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9A58u) goto L_088A9A58;
    return;
L_088A9A58:
    ctx.set_gpr(31, 0x088A9A60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9A60u) goto L_088A9A60;
    return;
L_088A9A60:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(59))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9A70u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9A70u) goto L_088A9A70;
    return;
L_088A9A70:
    ctx.set_gpr(31, 0x088A9A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9A78u) goto L_088A9A78;
    return;
L_088A9A78:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9A88u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9A88u) goto L_088A9A88;
    return;
L_088A9A88:
    ctx.set_gpr(31, 0x088A9A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9A90u) goto L_088A9A90;
    return;
L_088A9A90:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(61))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9AA0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9AA0u) goto L_088A9AA0;
    return;
L_088A9AA0:
    ctx.set_gpr(31, 0x088A9AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9AA8u) goto L_088A9AA8;
    return;
L_088A9AA8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(57))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9AB8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9AB8u) goto L_088A9AB8;
    return;
L_088A9AB8:
    ctx.set_gpr(31, 0x088A9AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9AC0u) goto L_088A9AC0;
    return;
L_088A9AC0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9AD0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9AD0u) goto L_088A9AD0;
    return;
L_088A9AD0:
    ctx.set_gpr(31, 0x088A9AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9AD8u) goto L_088A9AD8;
    return;
L_088A9AD8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(59))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9AE8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9AE8u) goto L_088A9AE8;
    return;
L_088A9AE8:
    ctx.set_gpr(31, 0x088A9AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9AF0u) goto L_088A9AF0;
    return;
L_088A9AF0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9B00u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9B00u) goto L_088A9B00;
    return;
L_088A9B00:
    ctx.set_gpr(31, 0x088A9B08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9B08u) goto L_088A9B08;
    return;
L_088A9B08:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(61))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9B18u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9B18u) goto L_088A9B18;
    return;
L_088A9B18:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(17));
    goto L_088A9B1C;
L_088A9B1C:
    ctx.set_gpr(31, 0x088A9B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9B24u) goto L_088A9B24;
    return;
L_088A9B24:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[16]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(23))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9B38u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9B38u) goto L_088A9B38;
    return;
L_088A9B38:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 34 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A9B1C;
      }
      goto L_088A9B48;
    }
L_088A9B48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_088A9B4C;
L_088A9B4C:
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
L_088A9B6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088A9C5C;
      }
      goto L_088A9B8C;
    }
L_088A9B8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 141 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 21 ? 1u : 0u);
        goto L_088A9BD8;
    }
    goto L_088A9BA0;
L_088A9BA0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088A9BE8;
      }
      goto L_088A9BD8;
    }
L_088A9BD8:
    if (ctx.gpr[1] != 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
        goto L_088A9BE8;
    }
    goto L_088A9BE0;
L_088A9BE0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    goto L_088A9BE8;
L_088A9BE8:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_088A9BEC;
L_088A9BEC:
    ctx.set_gpr(31, 0x088A9BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9BF4u) goto L_088A9BF4;
    return;
L_088A9BF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9C04u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_088A8A24;
L_088A9C04:
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[18]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(25))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21))))));
    ctx.set_gpr(31, 0x088A9C1Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9C1Cu) goto L_088A9C1C;
    return;
L_088A9C1C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A9BEC;
      }
      goto L_088A9C2C;
    }
L_088A9C2C:
    ctx.set_gpr(17, 0u + 0u);
    goto L_088A9C30;
L_088A9C30:
    ctx.set_gpr(31, 0x088A9C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9C38u) goto L_088A9C38;
    return;
L_088A9C38:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(26))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9C4Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9C4Cu) goto L_088A9C4C;
    return;
L_088A9C4C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A9C30;
      }
      goto L_088A9C5C;
    }
L_088A9C5C:
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
L_088A9C74:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9C84:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(156), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9C9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(3, 15948u << 16u);
        goto L_088AA58C;
    }
    goto L_088A9CCC;
L_088A9CCC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(3, 15651u << 16u);
        goto L_088AA40C;
    }
    goto L_088A9CD8;
L_088A9CD8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(3, 15692u << 16u);
        goto L_088AA294;
    }
    goto L_088A9CE4;
L_088A9CE4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9CF4;
      }
      goto L_088A9CEC;
    }
L_088A9CEC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_088AA638;
      }
      goto L_088A9CF4;
    }
L_088A9CF4:
    ctx.set_gpr(31, 0x088A9CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9CFCu) goto L_088A9CFC;
    return;
L_088A9CFC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(57))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9D0Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9D0Cu) goto L_088A9D0C;
    return;
L_088A9D0C:
    ctx.set_gpr(31, 0x088A9D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9D14u) goto L_088A9D14;
    return;
L_088A9D14:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9D24u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9D24u) goto L_088A9D24;
    return;
L_088A9D24:
    ctx.set_gpr(31, 0x088A9D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9D2Cu) goto L_088A9D2C;
    return;
L_088A9D2C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(59))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9D3Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9D3Cu) goto L_088A9D3C;
    return;
L_088A9D3C:
    ctx.set_gpr(31, 0x088A9D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9D44u) goto L_088A9D44;
    return;
L_088A9D44:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9D54u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9D54u) goto L_088A9D54;
    return;
L_088A9D54:
    ctx.set_gpr(31, 0x088A9D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9D5Cu) goto L_088A9D5C;
    return;
L_088A9D5C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(61))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9D6Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9D6Cu) goto L_088A9D6C;
    return;
L_088A9D6C:
    ctx.set_gpr(31, 0x088A9D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9D74u) goto L_088A9D74;
    return;
L_088A9D74:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(57))))));
    ctx.set_gpr(31, 0x088A9D80u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 459u, 0x08846E7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9D80u) goto L_088A9D80;
    return;
L_088A9D80:
    ctx.set_gpr(31, 0x088A9D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9D88u) goto L_088A9D88;
    return;
L_088A9D88:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    ctx.set_gpr(31, 0x088A9D94u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 459u, 0x08846E7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9D94u) goto L_088A9D94;
    return;
L_088A9D94:
    ctx.set_gpr(31, 0x088A9D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9D9Cu) goto L_088A9D9C;
    return;
L_088A9D9C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(59))))));
    ctx.set_gpr(31, 0x088A9DA8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 459u, 0x08846E7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9DA8u) goto L_088A9DA8;
    return;
L_088A9DA8:
    ctx.set_gpr(31, 0x088A9DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9DB0u) goto L_088A9DB0;
    return;
L_088A9DB0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60))))));
    ctx.set_gpr(31, 0x088A9DBCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 459u, 0x08846E7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9DBCu) goto L_088A9DBC;
    return;
L_088A9DBC:
    ctx.set_gpr(31, 0x088A9DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9DC4u) goto L_088A9DC4;
    return;
L_088A9DC4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(61))))));
    ctx.set_gpr(31, 0x088A9DD0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 459u, 0x08846E7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9DD0u) goto L_088A9DD0;
    return;
L_088A9DD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(50));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.hi);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 2245u << 16u);
        goto L_088A9DFC;
    }
    goto L_088A9DE8;
L_088A9DE8:
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 52429u);
    ctx.set_gpr(2, 2245u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(23540), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088A9E00;
      }
      goto L_088A9DFC;
    }
L_088A9DFC:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(23540), 0u);
    goto L_088A9E00;
L_088A9E00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.hi);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9E94;
      }
      goto L_088A9E18;
    }
L_088A9E18:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9E94;
      }
      goto L_088A9E24;
    }
L_088A9E24:
    ctx.set_gpr(31, 0x088A9E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9E2Cu) goto L_088A9E2C;
    return;
L_088A9E2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16416u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(2, 16544u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(57))))));
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(164)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A9E58u);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A9E58u) goto L_088A9E58;
    return;
L_088A9E58:
    ctx.set_gpr(31, 0x088A9E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9E60u) goto L_088A9E60;
    return;
L_088A9E60:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(57))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088A9E7Cu);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9E7Cu) goto L_088A9E7C;
    return;
L_088A9E7C:
    ctx.set_gpr(31, 0x088A9E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9E84u) goto L_088A9E84;
    return;
L_088A9E84:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(57))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9E94u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9E94u) goto L_088A9E94;
    return;
L_088A9E94:
    ctx.set_gpr(31, 0x088A9E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9E9Cu) goto L_088A9E9C;
    return;
L_088A9E9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16416u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(2, 16544u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(164)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A9EC8u);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A9EC8u) goto L_088A9EC8;
    return;
L_088A9EC8:
    ctx.set_gpr(31, 0x088A9ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9ED0u) goto L_088A9ED0;
    return;
L_088A9ED0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088A9EECu);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9EECu) goto L_088A9EEC;
    return;
L_088A9EEC:
    ctx.set_gpr(31, 0x088A9EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9EF4u) goto L_088A9EF4;
    return;
L_088A9EF4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9F04u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A9F04u) goto L_088A9F04;
    return;
L_088A9F04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(2, 26214u << 16u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(4, ctx.gpr[2] | 26215u);
    ctx.set_gpr(16, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[16]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(17, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[17]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(18, ctx.hi);
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(2, 16307u << 16u);
        goto L_088A9F70;
    }
    goto L_088A9F64;
L_088A9F64:
    ctx.set_gpr(2, 16384u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_088A9F78;
      }
      goto L_088A9F70;
    }
L_088A9F70:
    ctx.set_gpr(2, ctx.gpr[2] | 13107u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_088A9F78;
L_088A9F78:
    ctx.set_gpr(31, 0x088A9F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9F80u) goto L_088A9F80;
    return;
L_088A9F80:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(59))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(21))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A9F94u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9F94u) goto L_088A9F94;
    return;
L_088A9F94:
    ctx.set_gpr(31, 0x088A9F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9F9Cu) goto L_088A9F9C;
    return;
L_088A9F9C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(59))))));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(31, 0x088A9FB0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088A9FB0u) goto L_088A9FB0;
    return;
L_088A9FB0:
    ctx.set_gpr(31, 0x088A9FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9FB8u) goto L_088A9FB8;
    return;
L_088A9FB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23540)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(59))))));
    ctx.set_gpr(31, 0x088A9FD0u);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 402u, 0x088463E4u>(ctx, &aot_mem) && ctx.pc == 0x088A9FD0u) goto L_088A9FD0;
    return;
L_088A9FD0:
    ctx.set_gpr(31, 0x088A9FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9FD8u) goto L_088A9FD8;
    return;
L_088A9FD8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(59))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088A9FF4u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9FF4u) goto L_088A9FF4;
    return;
L_088A9FF4:
    ctx.set_gpr(31, 0x088A9FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A9FFCu) goto L_088A9FFC;
    return;
L_088A9FFC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(59))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA00Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA00Cu) goto L_088AA00C;
    return;
L_088AA00C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088AA020;
      }
      goto L_088AA018;
    }
L_088AA018:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA0CC;
      }
      goto L_088AA020;
    }
L_088AA020:
    ctx.set_gpr(31, 0x088AA028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA028u) goto L_088AA028;
    return;
L_088AA028:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(21))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA03Cu);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA03Cu) goto L_088AA03C;
    return;
L_088AA03C:
    ctx.set_gpr(31, 0x088AA044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA044u) goto L_088AA044;
    return;
L_088AA044:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16768u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(160)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60))))));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(31, 0x088AA064u);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088AA064u) goto L_088AA064;
    return;
L_088AA064:
    ctx.set_gpr(31, 0x088AA06Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA06Cu) goto L_088AA06C;
    return;
L_088AA06C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23540)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60))))));
    ctx.set_gpr(31, 0x088AA084u);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 402u, 0x088463E4u>(ctx, &aot_mem) && ctx.pc == 0x088AA084u) goto L_088AA084;
    return;
L_088AA084:
    ctx.set_gpr(31, 0x088AA08Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA08Cu) goto L_088AA08C;
    return;
L_088AA08C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AA0A8u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA0A8u) goto L_088AA0A8;
    return;
L_088AA0A8:
    ctx.set_gpr(31, 0x088AA0B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA0B0u) goto L_088AA0B0;
    return;
L_088AA0B0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA0C0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA0C0u) goto L_088AA0C0;
    return;
L_088AA0C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088AA0E8;
      }
      goto L_088AA0CC;
    }
L_088AA0CC:
    ctx.set_gpr(31, 0x088AA0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA0D4u) goto L_088AA0D4;
    return;
L_088AA0D4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA0E4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA0E4u) goto L_088AA0E4;
    return;
L_088AA0E4:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(0u));
    goto L_088AA0E8;
L_088AA0E8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA19C;
      }
      goto L_088AA0F0;
    }
L_088AA0F0:
    ctx.set_gpr(31, 0x088AA0F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA0F8u) goto L_088AA0F8;
    return;
L_088AA0F8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(61))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(21))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA10Cu);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA10Cu) goto L_088AA10C;
    return;
L_088AA10C:
    ctx.set_gpr(31, 0x088AA114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA114u) goto L_088AA114;
    return;
L_088AA114:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16896u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(160)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(61))))));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(31, 0x088AA134u);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088AA134u) goto L_088AA134;
    return;
L_088AA134:
    ctx.set_gpr(31, 0x088AA13Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA13Cu) goto L_088AA13C;
    return;
L_088AA13C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23540)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(61))))));
    ctx.set_gpr(31, 0x088AA154u);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 402u, 0x088463E4u>(ctx, &aot_mem) && ctx.pc == 0x088AA154u) goto L_088AA154;
    return;
L_088AA154:
    ctx.set_gpr(31, 0x088AA15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA15Cu) goto L_088AA15C;
    return;
L_088AA15C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(61))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AA178u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA178u) goto L_088AA178;
    return;
L_088AA178:
    ctx.set_gpr(31, 0x088AA180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA180u) goto L_088AA180;
    return;
L_088AA180:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(61))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA190u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA190u) goto L_088AA190;
    return;
L_088AA190:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_088AA1B8;
      }
      goto L_088AA19C;
    }
L_088AA19C:
    ctx.set_gpr(31, 0x088AA1A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA1A4u) goto L_088AA1A4;
    return;
L_088AA1A4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(61))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA1B4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA1B4u) goto L_088AA1B4;
    return;
L_088AA1B4:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(0u));
    goto L_088AA1B8;
L_088AA1B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA224;
      }
      goto L_088AA1C8;
    }
L_088AA1C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, ctx.hi);
    if (ctx.gpr[3] != 0u) {
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(156), 0u);
        goto L_088AA288;
    }
    goto L_088AA1DC;
L_088AA1DC:
    ctx.set_gpr(31, 0x088AA1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA1E4u) goto L_088AA1E4;
    return;
L_088AA1E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16576u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(59))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088AA1FCu);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 396u, 0x088462B0u>(ctx, &aot_mem) && ctx.pc == 0x088AA1FCu) goto L_088AA1FC;
    return;
L_088AA1FC:
    ctx.set_gpr(31, 0x088AA204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA204u) goto L_088AA204;
    return;
L_088AA204:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    ctx.set_gpr(3, 16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x088AA21Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 396u, 0x088462B0u>(ctx, &aot_mem) && ctx.pc == 0x088AA21Cu) goto L_088AA21C;
    return;
L_088AA21C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA284;
      }
      goto L_088AA224;
    }
L_088AA224:
    ctx.set_gpr(31, 0x088AA22Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA22Cu) goto L_088AA22C;
    return;
L_088AA22C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16672u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(59))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088AA244u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 396u, 0x088462B0u>(ctx, &aot_mem) && ctx.pc == 0x088AA244u) goto L_088AA244;
    return;
L_088AA244:
    ctx.set_gpr(31, 0x088AA24Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA24Cu) goto L_088AA24C;
    return;
L_088AA24C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16544u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088AA264u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 396u, 0x088462B0u>(ctx, &aot_mem) && ctx.pc == 0x088AA264u) goto L_088AA264;
    return;
L_088AA264:
    ctx.set_gpr(31, 0x088AA26Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA26Cu) goto L_088AA26C;
    return;
L_088AA26C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    ctx.set_gpr(3, 16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x088AA284u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 396u, 0x088462B0u>(ctx, &aot_mem) && ctx.pc == 0x088AA284u) goto L_088AA284;
    return;
L_088AA284:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(156), 0u);
    goto L_088AA288;
L_088AA288:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(148), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088AA634;
      }
      goto L_088AA294;
    }
L_088AA294:
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(156)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[12];
        goto L_088AA404;
    }
    goto L_088AA2B0;
L_088AA2B0:
    ctx.set_gpr(31, 0x088AA2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA2B8u) goto L_088AA2B8;
    return;
L_088AA2B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23540)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(59))))));
    ctx.set_gpr(31, 0x088AA2D8u);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 402u, 0x088463E4u>(ctx, &aot_mem) && ctx.pc == 0x088AA2D8u) goto L_088AA2D8;
    return;
L_088AA2D8:
    ctx.set_gpr(31, 0x088AA2E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA2E0u) goto L_088AA2E0;
    return;
L_088AA2E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23540)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60))))));
    ctx.set_gpr(31, 0x088AA300u);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 402u, 0x088463E4u>(ctx, &aot_mem) && ctx.pc == 0x088AA300u) goto L_088AA300;
    return;
L_088AA300:
    ctx.set_gpr(31, 0x088AA308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA308u) goto L_088AA308;
    return;
L_088AA308:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(23540)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(61))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA328u);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 402u, 0x088463E4u>(ctx, &aot_mem) && ctx.pc == 0x088AA328u) goto L_088AA328;
    return;
L_088AA328:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA394;
      }
      goto L_088AA338;
    }
L_088AA338:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, ctx.hi);
    if (ctx.gpr[3] != 0u) {
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(156), 0u);
        goto L_088AA3F8;
    }
    goto L_088AA34C;
L_088AA34C:
    ctx.set_gpr(31, 0x088AA354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA354u) goto L_088AA354;
    return;
L_088AA354:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49344u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(59))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088AA36Cu);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 396u, 0x088462B0u>(ctx, &aot_mem) && ctx.pc == 0x088AA36Cu) goto L_088AA36C;
    return;
L_088AA36C:
    ctx.set_gpr(31, 0x088AA374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA374u) goto L_088AA374;
    return;
L_088AA374:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    ctx.set_gpr(3, 49344u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x088AA38Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 396u, 0x088462B0u>(ctx, &aot_mem) && ctx.pc == 0x088AA38Cu) goto L_088AA38C;
    return;
L_088AA38C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA3F4;
      }
      goto L_088AA394;
    }
L_088AA394:
    ctx.set_gpr(31, 0x088AA39Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA39Cu) goto L_088AA39C;
    return;
L_088AA39C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49440u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(59))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088AA3B4u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 396u, 0x088462B0u>(ctx, &aot_mem) && ctx.pc == 0x088AA3B4u) goto L_088AA3B4;
    return;
L_088AA3B4:
    ctx.set_gpr(31, 0x088AA3BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA3BCu) goto L_088AA3BC;
    return;
L_088AA3BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49312u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088AA3D4u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 396u, 0x088462B0u>(ctx, &aot_mem) && ctx.pc == 0x088AA3D4u) goto L_088AA3D4;
    return;
L_088AA3D4:
    ctx.set_gpr(31, 0x088AA3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA3DCu) goto L_088AA3DC;
    return;
L_088AA3DC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    ctx.set_gpr(3, 49440u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x088AA3F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 396u, 0x088462B0u>(ctx, &aot_mem) && ctx.pc == 0x088AA3F4u) goto L_088AA3F4;
    return;
L_088AA3F4:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(156), 0u);
    goto L_088AA3F8;
L_088AA3F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(148), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088AA634;
      }
      goto L_088AA404;
    }
L_088AA404:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088AA634;
      }
      goto L_088AA40C;
    }
L_088AA40C:
    ctx.set_gpr(3, ctx.gpr[3] | 55050u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(156)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[12];
        goto L_088AA584;
    }
    goto L_088AA428;
L_088AA428:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(156), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.hi);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA480;
      }
      goto L_088AA444;
    }
L_088AA444:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA480;
      }
      goto L_088AA450;
    }
L_088AA450:
    ctx.set_gpr(31, 0x088AA458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA458u) goto L_088AA458;
    return;
L_088AA458:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(57))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AA480u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088AA480u) goto L_088AA480;
    return;
L_088AA480:
    ctx.set_gpr(31, 0x088AA488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA488u) goto L_088AA488;
    return;
L_088AA488:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AA4B0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088AA4B0u) goto L_088AA4B0;
    return;
L_088AA4B0:
    ctx.set_gpr(31, 0x088AA4B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA4B8u) goto L_088AA4B8;
    return;
L_088AA4B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(59))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AA4E0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088AA4E0u) goto L_088AA4E0;
    return;
L_088AA4E0:
    ctx.set_gpr(31, 0x088AA4E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA4E8u) goto L_088AA4E8;
    return;
L_088AA4E8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60))))));
    ctx.set_gpr(31, 0x088AA4F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 486u, 0x08846FF8u>(ctx, &aot_mem) && ctx.pc == 0x088AA4F4u) goto L_088AA4F4;
    return;
L_088AA4F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA52C;
      }
      goto L_088AA4FC;
    }
L_088AA4FC:
    ctx.set_gpr(31, 0x088AA504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA504u) goto L_088AA504;
    return;
L_088AA504:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AA52Cu);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088AA52Cu) goto L_088AA52C;
    return;
L_088AA52C:
    ctx.set_gpr(31, 0x088AA534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA534u) goto L_088AA534;
    return;
L_088AA534:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(61))))));
    ctx.set_gpr(31, 0x088AA540u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 486u, 0x08846FF8u>(ctx, &aot_mem) && ctx.pc == 0x088AA540u) goto L_088AA540;
    return;
L_088AA540:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
        goto L_088AA57C;
    }
    goto L_088AA548;
L_088AA548:
    ctx.set_gpr(31, 0x088AA550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA550u) goto L_088AA550;
    return;
L_088AA550:
    ctx.set_gpr(3, 15948u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(61))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088AA578u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088AA578u) goto L_088AA578;
    return;
L_088AA578:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    goto L_088AA57C;
L_088AA57C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(148), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088AA634;
      }
      goto L_088AA584;
    }
L_088AA584:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088AA634;
      }
      goto L_088AA58C;
    }
L_088AA58C:
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(156)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[12];
        goto L_088AA630;
    }
    goto L_088AA5A8;
L_088AA5A8:
    ctx.set_gpr(31, 0x088AA5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA5B0u) goto L_088AA5B0;
    return;
L_088AA5B0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(57))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA5C0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA5C0u) goto L_088AA5C0;
    return;
L_088AA5C0:
    ctx.set_gpr(31, 0x088AA5C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA5C8u) goto L_088AA5C8;
    return;
L_088AA5C8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA5D8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA5D8u) goto L_088AA5D8;
    return;
L_088AA5D8:
    ctx.set_gpr(31, 0x088AA5E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA5E0u) goto L_088AA5E0;
    return;
L_088AA5E0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(59))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA5F0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA5F0u) goto L_088AA5F0;
    return;
L_088AA5F0:
    ctx.set_gpr(31, 0x088AA5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA5F8u) goto L_088AA5F8;
    return;
L_088AA5F8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA608u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA608u) goto L_088AA608;
    return;
L_088AA608:
    ctx.set_gpr(31, 0x088AA610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA610u) goto L_088AA610;
    return;
L_088AA610:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(61))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA620u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA620u) goto L_088AA620;
    return;
L_088AA620:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(156), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(148), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088AA634;
      }
      goto L_088AA630;
    }
L_088AA630:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088AA634;
L_088AA634:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_088AA638;
L_088AA638:
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
L_088AA654:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088AA8CC;
      }
      goto L_088AA670;
    }
L_088AA670:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 15651u << 16u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] | 55050u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), 0u);
    ctx.set_gpr(31, 0x088AA6A0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA6A0u) goto L_088AA6A0;
    return;
L_088AA6A0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(31, 0x088AA6ACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 492u, 0x088470F8u>(ctx, &aot_mem) && ctx.pc == 0x088AA6ACu) goto L_088AA6AC;
    return;
L_088AA6AC:
    ctx.set_gpr(31, 0x088AA6B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA6B4u) goto L_088AA6B4;
    return;
L_088AA6B4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(34))))));
    ctx.set_gpr(31, 0x088AA6C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 492u, 0x088470F8u>(ctx, &aot_mem) && ctx.pc == 0x088AA6C0u) goto L_088AA6C0;
    return;
L_088AA6C0:
    ctx.set_gpr(31, 0x088AA6C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA6C8u) goto L_088AA6C8;
    return;
L_088AA6C8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    ctx.set_gpr(31, 0x088AA6D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 459u, 0x08846E7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA6D4u) goto L_088AA6D4;
    return;
L_088AA6D4:
    ctx.set_gpr(31, 0x088AA6DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA6DCu) goto L_088AA6DC;
    return;
L_088AA6DC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(37))))));
    ctx.set_gpr(31, 0x088AA6E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 459u, 0x08846E7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA6E8u) goto L_088AA6E8;
    return;
L_088AA6E8:
    ctx.set_gpr(31, 0x088AA6F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA6F0u) goto L_088AA6F0;
    return;
L_088AA6F0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA700u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA700u) goto L_088AA700;
    return;
L_088AA700:
    ctx.set_gpr(31, 0x088AA708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA708u) goto L_088AA708;
    return;
L_088AA708:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(34))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA718u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA718u) goto L_088AA718;
    return;
L_088AA718:
    ctx.set_gpr(31, 0x088AA720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA720u) goto L_088AA720;
    return;
L_088AA720:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA730u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA730u) goto L_088AA730;
    return;
L_088AA730:
    ctx.set_gpr(31, 0x088AA738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA738u) goto L_088AA738;
    return;
L_088AA738:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(37))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA748u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA748u) goto L_088AA748;
    return;
L_088AA748:
    ctx.set_gpr(31, 0x088AA750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA750u) goto L_088AA750;
    return;
L_088AA750:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA760u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA760u) goto L_088AA760;
    return;
L_088AA760:
    ctx.set_gpr(31, 0x088AA768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA768u) goto L_088AA768;
    return;
L_088AA768:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(33))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA778u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA778u) goto L_088AA778;
    return;
L_088AA778:
    ctx.set_gpr(31, 0x088AA780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA780u) goto L_088AA780;
    return;
L_088AA780:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA790u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA790u) goto L_088AA790;
    return;
L_088AA790:
    ctx.set_gpr(31, 0x088AA798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA798u) goto L_088AA798;
    return;
L_088AA798:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA7A8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA7A8u) goto L_088AA7A8;
    return;
L_088AA7A8:
    ctx.set_gpr(31, 0x088AA7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA7B0u) goto L_088AA7B0;
    return;
L_088AA7B0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(35))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA7C0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA7C0u) goto L_088AA7C0;
    return;
L_088AA7C0:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(17));
    goto L_088AA7C4;
L_088AA7C4:
    ctx.set_gpr(31, 0x088AA7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA7CCu) goto L_088AA7CC;
    return;
L_088AA7CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(23))))));
    ctx.set_gpr(31, 0x088AA7E0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA7E0u) goto L_088AA7E0;
    return;
L_088AA7E0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 34 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AA7C4;
      }
      goto L_088AA7F0;
    }
L_088AA7F0:
    ctx.set_gpr(31, 0x088AA7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA7F8u) goto L_088AA7F8;
    return;
L_088AA7F8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA80Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA80Cu) goto L_088AA80C;
    return;
L_088AA80C:
    ctx.set_gpr(17, 0u + 0u);
    goto L_088AA810;
L_088AA810:
    ctx.set_gpr(31, 0x088AA818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA818u) goto L_088AA818;
    return;
L_088AA818:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(26))))));
    ctx.set_gpr(31, 0x088AA82Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA82Cu) goto L_088AA82C;
    return;
L_088AA82C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AA810;
      }
      goto L_088AA83C;
    }
L_088AA83C:
    ctx.set_gpr(31, 0x088AA844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA844u) goto L_088AA844;
    return;
L_088AA844:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(57))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA854u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA854u) goto L_088AA854;
    return;
L_088AA854:
    ctx.set_gpr(31, 0x088AA85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA85Cu) goto L_088AA85C;
    return;
L_088AA85C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(58))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA86Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA86Cu) goto L_088AA86C;
    return;
L_088AA86C:
    ctx.set_gpr(31, 0x088AA874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA874u) goto L_088AA874;
    return;
L_088AA874:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(59))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA884u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA884u) goto L_088AA884;
    return;
L_088AA884:
    ctx.set_gpr(31, 0x088AA88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA88Cu) goto L_088AA88C;
    return;
L_088AA88C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(60))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA89Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA89Cu) goto L_088AA89C;
    return;
L_088AA89C:
    ctx.set_gpr(31, 0x088AA8A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA8A4u) goto L_088AA8A4;
    return;
L_088AA8A4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(61))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA8B4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA8B4u) goto L_088AA8B4;
    return;
L_088AA8B4:
    ctx.set_gpr(31, 0x088AA8BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA8BCu) goto L_088AA8BC;
    return;
L_088AA8BC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(39))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA8CCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088AA8CCu) goto L_088AA8CC;
    return;
L_088AA8CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA8E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(5636)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(5640)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2227u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(5644)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2227u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(5648)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088AA958;
      }
      goto L_088AA934;
    }
L_088AA934:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), 0u);
        goto L_088AA944;
    }
    goto L_088AA93C;
L_088AA93C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_088AA9E0;
      }
      goto L_088AA944;
    }
L_088AA944:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    goto L_088AA958;
L_088AA958:
    ctx.set_gpr(31, 0x088AA960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088AA960u) goto L_088AA960;
    return;
L_088AA960:
    ctx.set_gpr(31, 0x088AA968u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088AA968u) goto L_088AA968;
    return;
L_088AA968:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
        goto L_088AA988;
    }
    goto L_088AA974;
L_088AA974:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088AA994;
      }
      goto L_088AA988;
    }
L_088AA988:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    goto L_088AA994;
L_088AA994:
    ctx.set_gpr(31, 0x088AA99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AA99Cu) goto L_088AA99C;
    return;
L_088AA99C:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AA9B0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA9B0u) goto L_088AA9B0;
    return;
L_088AA9B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA9DC;
      }
      goto L_088AA9B8;
    }
L_088AA9B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088AA9DC;
      }
      goto L_088AA9CC;
    }
L_088AA9CC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088AA9E0;
      }
      goto L_088AA9DC;
    }
L_088AA9DC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088AA9E0;
L_088AA9E0:
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
L_088AA9F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    goto L_088AAA08;
L_088AAA08:
    ctx.set_gpr(31, 0x088AAA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAA10u) goto L_088AAA10;
    return;
L_088AAA10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088AAA20u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_088AAA90;
L_088AAA20:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_088AAA48;
    }
    goto L_088AAA2C;
L_088AAA2C:
    ctx.set_gpr(31, 0x088AAA34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAA34u) goto L_088AAA34;
    return;
L_088AAA34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088AAA44u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x088AAA44u) goto L_088AAA44;
    return;
L_088AAA44:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088AAA48;
L_088AAA48:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AAA08;
      }
      goto L_088AAA54;
    }
L_088AAA54:
    ctx.set_gpr(16, 0u + 0u);
    goto L_088AAA58;
L_088AAA58:
    ctx.set_gpr(31, 0x088AAA60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAA60u) goto L_088AAA60;
    return;
L_088AAA60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088AAA70u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 562u, 0x0884764Cu>(ctx, &aot_mem) && ctx.pc == 0x088AAA70u) goto L_088AAA70;
    return;
L_088AAA70:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AAA58;
      }
      goto L_088AAA80;
    }
L_088AAA80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AAA90:
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-13100)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AAAC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_088AAAD8;
L_088AAAD8:
    ctx.set_gpr(31, 0x088AAAE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAAE0u) goto L_088AAAE0;
    return;
L_088AAAE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088AAAF0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_088AAA90;
L_088AAAF0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_088AAB18;
    }
    goto L_088AAAFC;
L_088AAAFC:
    ctx.set_gpr(31, 0x088AAB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAB04u) goto L_088AAB04;
    return;
L_088AAB04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088AAB14u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x088AAB14u) goto L_088AAB14;
    return;
L_088AAB14:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088AAB18;
L_088AAB18:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AAAD8;
      }
      goto L_088AAB24;
    }
L_088AAB24:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(132), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(176), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(240), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(172), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(252), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(248), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AAB54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(132), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(176), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(240), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(172), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(252), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(248), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(244), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088AABA8u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AABA8u) goto L_088AABA8;
    return;
L_088AABA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16320u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088AABD4u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088AABD4u) goto L_088AABD4;
    return;
L_088AABD4:
    ctx.set_gpr(31, 0x088AABDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AABDCu) goto L_088AABDC;
    return;
L_088AABDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17250u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088AAC0Cu);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088AAC0Cu) goto L_088AAC0C;
    return;
L_088AAC0C:
    ctx.set_gpr(31, 0x088AAC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAC14u) goto L_088AAC14;
    return;
L_088AAC14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16888u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16320u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x088AAC48u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088AAC48u) goto L_088AAC48;
    return;
L_088AAC48:
    ctx.set_gpr(31, 0x088AAC50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088AAC50u) goto L_088AAC50;
    return;
L_088AAC50:
    ctx.set_gpr(31, 0x088AAC58u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088AAC58u) goto L_088AAC58;
    return;
L_088AAC58:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AACCC;
      }
      goto L_088AAC64;
    }
L_088AAC64:
    ctx.set_gpr(31, 0x088AAC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088AAC6Cu) goto L_088AAC6C;
    return;
L_088AAC6C:
    ctx.set_gpr(31, 0x088AAC74u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 878u, 0x0885B56Cu>(ctx, &aot_mem) && ctx.pc == 0x088AAC74u) goto L_088AAC74;
    return;
L_088AAC74:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(26));
        goto L_088AAC8C;
    }
    goto L_088AAC80;
L_088AAC80:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(24));
        goto L_088AAC8C;
    }
    goto L_088AAC88;
L_088AAC88:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(25));
    goto L_088AAC8C;
L_088AAC8C:
    ctx.set_gpr(31, 0x088AAC94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAC94u) goto L_088AAC94;
    return;
L_088AAC94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17022u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17035u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16204u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088AACCCu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088AACCCu) goto L_088AACCC;
    return;
L_088AACCC:
    ctx.set_gpr(31, 0x088AACD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AACD4u) goto L_088AACD4;
    return;
L_088AACD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17355u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088AAD0Cu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088AAD0Cu) goto L_088AAD0C;
    return;
L_088AAD0C:
    ctx.set_gpr(31, 0x088AAD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAD14u) goto L_088AAD14;
    return;
L_088AAD14:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088AAD28u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088AAD28u) goto L_088AAD28;
    return;
L_088AAD28:
    ctx.set_gpr(31, 0x088AAD30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAD30u) goto L_088AAD30;
    return;
L_088AAD30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17355u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088AAD68u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088AAD68u) goto L_088AAD68;
    return;
L_088AAD68:
    ctx.set_gpr(31, 0x088AAD70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAD70u) goto L_088AAD70;
    return;
L_088AAD70:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088AAD90u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x088AAD90u) goto L_088AAD90;
    return;
L_088AAD90:
    ctx.set_gpr(31, 0x088AAD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAD98u) goto L_088AAD98;
    return;
L_088AAD98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088AADC0u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x088AADC0u) goto L_088AADC0;
    return;
L_088AADC0:
    ctx.set_gpr(31, 0x088AADC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AADC8u) goto L_088AADC8;
    return;
L_088AADC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088AADDCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_088AB1EC;
L_088AADDC:
    ctx.set_gpr(31, 0x088AADE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AADE4u) goto L_088AADE4;
    return;
L_088AADE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088AADF8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088AADF8u) goto L_088AADF8;
    return;
L_088AADF8:
    ctx.set_gpr(31, 0x088AAE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAE00u) goto L_088AAE00;
    return;
L_088AAE00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17254u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 16944u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16204u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x088AAE40u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088AAE40u) goto L_088AAE40;
    return;
L_088AAE40:
    ctx.set_gpr(31, 0x088AAE48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAE48u) goto L_088AAE48;
    return;
L_088AAE48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17154u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, 16944u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16204u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x088AAE88u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088AAE88u) goto L_088AAE88;
    return;
L_088AAE88:
    ctx.set_gpr(31, 0x088AAE90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAE90u) goto L_088AAE90;
    return;
L_088AAE90:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088AAEB0u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x088AAEB0u) goto L_088AAEB0;
    return;
L_088AAEB0:
    ctx.set_gpr(31, 0x088AAEB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAEB8u) goto L_088AAEB8;
    return;
L_088AAEB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x088AAECCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088AAECCu) goto L_088AAECC;
    return;
L_088AAECC:
    ctx.set_gpr(31, 0x088AAED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAED4u) goto L_088AAED4;
    return;
L_088AAED4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x088AAEE8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088AAEE8u) goto L_088AAEE8;
    return;
L_088AAEE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(28));
        goto L_088AAEFC;
    }
    goto L_088AAEF8;
L_088AAEF8:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(29));
    goto L_088AAEFC;
L_088AAEFC:
    ctx.set_gpr(31, 0x088AAF04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAF04u) goto L_088AAF04;
    return;
L_088AAF04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17334u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16204u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(27));
    ctx.set_gpr(31, 0x088AAF40u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088AAF40u) goto L_088AAF40;
    return;
L_088AAF40:
    ctx.set_gpr(31, 0x088AAF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAF48u) goto L_088AAF48;
    return;
L_088AAF48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x088AAF5Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088AAF5Cu) goto L_088AAF5C;
    return;
L_088AAF5C:
    ctx.set_gpr(31, 0x088AAF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAF64u) goto L_088AAF64;
    return;
L_088AAF64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17334u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16204u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(31, 0x088AAFA0u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088AAFA0u) goto L_088AAFA0;
    return;
L_088AAFA0:
    ctx.set_gpr(31, 0x088AAFA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAFA8u) goto L_088AAFA8;
    return;
L_088AAFA8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088AAFC8u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x088AAFC8u) goto L_088AAFC8;
    return;
L_088AAFC8:
    ctx.set_gpr(31, 0x088AAFD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AAFD0u) goto L_088AAFD0;
    return;
L_088AAFD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088AAFF8u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x088AAFF8u) goto L_088AAFF8;
    return;
L_088AAFF8:
    ctx.set_gpr(31, 0x088AB000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB000u) goto L_088AB000;
    return;
L_088AB000:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(31, 0x088AB014u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_088AB1EC;
L_088AB014:
    ctx.set_gpr(31, 0x088AB01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB01Cu) goto L_088AB01C;
    return;
L_088AB01C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(31, 0x088AB030u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB030u) goto L_088AB030;
    return;
L_088AB030:
    ctx.set_gpr(31, 0x088AB038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088AB038u) goto L_088AB038;
    return;
L_088AB038:
    ctx.set_gpr(31, 0x088AB040u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088AB040u) goto L_088AB040;
    return;
L_088AB040:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_088AB1D0;
    }
    goto L_088AB04C;
L_088AB04C:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(264)));
    goto L_088AB054;
L_088AB054:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 17035u << 16u);
        goto L_088AB0DC;
    }
    goto L_088AB060;
L_088AB060:
    ctx.set_gpr(2, 17035u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16768u << 16u);
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.set_gpr(31, 0x088AB080u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB080u) goto L_088AB080;
    return;
L_088AB080:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16768u << 16u);
    ctx.set_gpr(10, 17035u << 16u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(43));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17187u << 16u);
    ctx.set_gpr(8, ctx.gpr[3] | 32768u);
    ctx.set_gpr(3, 16204u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(30));
    ctx.set_gpr(9, 0u + 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.set_gpr(31, 0x088AB0D4u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088AB0D4u) goto L_088AB0D4;
    return;
L_088AB0D4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088AB150;
      }
      goto L_088AB0DC;
    }
L_088AB0DC:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16768u << 16u);
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.set_gpr(31, 0x088AB0F8u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB0F8u) goto L_088AB0F8;
    return;
L_088AB0F8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16768u << 16u);
    ctx.set_gpr(10, 17035u << 16u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(43));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17187u << 16u);
    ctx.set_gpr(8, ctx.gpr[3] | 32768u);
    ctx.set_gpr(3, 16204u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(31));
    ctx.set_gpr(9, 0u + 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.set_gpr(31, 0x088AB14Cu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088AB14Cu) goto L_088AB14C;
    return;
L_088AB14C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088AB150;
L_088AB150:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(264)));
        goto L_088AB054;
    }
    goto L_088AB15C;
L_088AB15C:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(264)));
    goto L_088AB164;
L_088AB164:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_088AB1C0;
    }
    goto L_088AB174;
L_088AB174:
    ctx.set_gpr(31, 0x088AB17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB17Cu) goto L_088AB17C;
    return;
L_088AB17C:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16204u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(30));
    ctx.set_gpr(9, 0u + 0u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[0];
    ctx.set_fpr_bits(13, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x088AB1BCu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088AB1BCu) goto L_088AB1BC;
    return;
L_088AB1BC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088AB1C0;
L_088AB1C0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(264)));
        goto L_088AB164;
    }
    goto L_088AB1CC;
L_088AB1CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_088AB1D0;
L_088AB1D0:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB1EC:
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
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 490u, 0x088470A8u>(ctx, &aot_mem); return;
L_088AB220:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(172)));
    goto L_088AB24C;
L_088AB24C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_088AB5AC;
    }
    goto L_088AB258;
L_088AB258:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(240)));
        goto L_088AB26C;
    }
    goto L_088AB260;
L_088AB260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB558;
      }
      goto L_088AB268;
    }
L_088AB268:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(240)));
    goto L_088AB26C;
L_088AB26C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
        goto L_088AB2A0;
    }
    goto L_088AB278;
L_088AB278:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(19, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, 16720u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_088AB2BC;
      }
      goto L_088AB29C;
    }
L_088AB29C:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    goto L_088AB2A0;
L_088AB2A0:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(19, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, 16704u << 16u);
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_088AB2BC;
L_088AB2BC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB374;
      }
      goto L_088AB2C8;
    }
L_088AB2C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.fpr[20] = std::bit_cast<float>(0u);
        goto L_088AB2E4;
    }
    goto L_088AB2D4;
L_088AB2D4:
    ctx.set_gpr(2, 16656u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_088AB2E4;
      }
      goto L_088AB2E0;
    }
L_088AB2E0:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    goto L_088AB2E4;
L_088AB2E4:
    ctx.set_gpr(31, 0x088AB2ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB2ECu) goto L_088AB2EC;
    return;
L_088AB2EC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16204u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(6, 17247u << 16u);
    ctx.set_gpr(10, 16784u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17078u << 16u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[20];
    ctx.set_gpr(31, 0x088AB350u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088AB350u) goto L_088AB350;
    return;
L_088AB350:
    ctx.set_gpr(31, 0x088AB358u);
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB358u) goto L_088AB358;
    return;
L_088AB358:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(988));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088AB36Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB36Cu) goto L_088AB36C;
    return;
L_088AB36C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB558;
      }
      goto L_088AB374;
    }
L_088AB374:
    ctx.set_gpr(31, 0x088AB37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB37Cu) goto L_088AB37C;
    return;
L_088AB37C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(988));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088AB390u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB390u) goto L_088AB390;
    return;
L_088AB390:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(31, 0x088AB3B0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_088A8A24;
L_088AB3B0:
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
        goto L_088AB520;
    }
    goto L_088AB3B8;
L_088AB3B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088AB3D4;
      }
      goto L_088AB3C4;
    }
L_088AB3C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(252), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088AB474;
      }
      goto L_088AB3D4;
    }
L_088AB3D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_088AB45C;
      }
      goto L_088AB3DC;
    }
L_088AB3DC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_088AB430;
      }
      goto L_088AB3E8;
    }
L_088AB3E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_088AB408;
      }
      goto L_088AB3F0;
    }
L_088AB3F0:
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB408;
      }
      goto L_088AB404;
    }
L_088AB404:
    ctx.set_gpr(3, ctx.gpr[6] & 255u);
    goto L_088AB408;
L_088AB408:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(176)));
        goto L_088AB434;
    }
    goto L_088AB410;
L_088AB410:
    ctx.set_gpr(2, 1525u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 57600u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_088AB41C;
L_088AB41C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.set_gpr(6, ctx.lo);
    if (ctx.gpr[2] != 0u) {
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
        goto L_088AB41C;
    }
    goto L_088AB430;
L_088AB430:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(176)));
    goto L_088AB434;
L_088AB434:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(248)));
        goto L_088AB460;
    }
    goto L_088AB440;
L_088AB440:
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    goto L_088AB444;
L_088AB444:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[2] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
        goto L_088AB444;
    }
    goto L_088AB45C;
L_088AB45C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(248)));
    goto L_088AB460;
L_088AB460:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(252)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(252), ctx.gpr[2]);
    goto L_088AB474;
L_088AB474:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(248), 0u);
        goto L_088AB504;
    }
    goto L_088AB494;
L_088AB494:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(240), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088AB4B4;
      }
      goto L_088AB4A4;
    }
L_088AB4A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088AB558;
      }
      goto L_088AB4B4;
    }
L_088AB4B4:
    ctx.set_gpr(31, 0x088AB4BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088AB4BCu) goto L_088AB4BC;
    return;
L_088AB4BC:
    ctx.set_gpr(31, 0x088AB4C4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088AB4C4u) goto L_088AB4C4;
    return;
L_088AB4C4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(248), 0u);
        goto L_088AB4EC;
    }
    goto L_088AB4D0;
L_088AB4D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088AB4E8;
      }
      goto L_088AB4E0;
    }
L_088AB4E0:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(240), ctx.gpr[2]);
    goto L_088AB4E8;
L_088AB4E8:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(248), 0u);
    goto L_088AB4EC;
L_088AB4EC:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(252), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(176), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088AB558;
      }
      goto L_088AB500;
    }
L_088AB500:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(248), 0u);
    goto L_088AB504;
L_088AB504:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(176), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088AB558;
      }
      goto L_088AB51C;
    }
L_088AB51C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    goto L_088AB520;
L_088AB520:
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_088AB534;
    }
    goto L_088AB528;
L_088AB528:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_088AB534;
      }
      goto L_088AB530;
    }
L_088AB530:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088AB534;
L_088AB534:
    ctx.set_gpr(31, 0x088AB53Cu);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(248), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB53Cu) goto L_088AB53C;
    return;
L_088AB53C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088AB558u);
    ctx.set_gpr(8, ctx.gpr[18] + ctx.gpr[2]);
    goto L_088AB5D0;
L_088AB558:
    ctx.set_gpr(31, 0x088AB560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088AB560u) goto L_088AB560;
    return;
L_088AB560:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AB56Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x088AB56Cu) goto L_088AB56C;
    return;
L_088AB56C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_088AB594;
    }
    goto L_088AB574;
L_088AB574:
    ctx.set_gpr(31, 0x088AB57Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088AB57Cu) goto L_088AB57C;
    return;
L_088AB57C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AB588u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x088AB588u) goto L_088AB588;
    return;
L_088AB588:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(260)));
        goto L_088AB59C;
    }
    goto L_088AB590;
L_088AB590:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_088AB594;
L_088AB594:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(260)));
    goto L_088AB59C;
L_088AB59C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(172)));
        goto L_088AB24C;
    }
    goto L_088AB5A4;
L_088AB5A4:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_088AB5AC;
L_088AB5AC:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB5D0:
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(9, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[5] << 7u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[2]);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-15404))))));
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-13100)));
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem); return;
L_088AB61C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(5652)));
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(2, 2227u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(5656)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(5660)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(5664)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(20, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(5684)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2227u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(5688)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088AB9A8;
      }
      goto L_088AB6A0;
    }
L_088AB6A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(0u));
        goto L_088AB8D0;
    }
    goto L_088AB6AC;
L_088AB6AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
        goto L_088AB7DC;
    }
    goto L_088AB6B8;
L_088AB6B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088AB6E8;
      }
      goto L_088AB6C4;
    }
L_088AB6C4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB6D4;
      }
      goto L_088AB6CC;
    }
L_088AB6CC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16256u << 16u);
      if (branch_taken) {
          goto L_088ABB20;
      }
      goto L_088AB6D4;
    }
L_088AB6D4:
    ctx.set_gpr(31, 0x088AB6DCu);
    // nop
    goto L_088AAB54;
L_088AB6DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088ABB1C;
      }
      goto L_088AB6E8;
    }
L_088AB6E8:
    ctx.set_gpr(31, 0x088AB6F0u);
    // nop
    goto L_088AB220;
L_088AB6F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABB1C;
      }
      goto L_088AB6F8;
    }
L_088AB6F8:
    ctx.set_gpr(31, 0x088AB700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB700u) goto L_088AB700;
    return;
L_088AB700:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088AB720u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB720u) goto L_088AB720;
    return;
L_088AB720:
    ctx.set_gpr(31, 0x088AB728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB728u) goto L_088AB728;
    return;
L_088AB728:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088AB750u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x088AB750u) goto L_088AB750;
    return;
L_088AB750:
    ctx.set_gpr(31, 0x088AB758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB758u) goto L_088AB758;
    return;
L_088AB758:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17154u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16944u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088AB780u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x088AB780u) goto L_088AB780;
    return;
L_088AB780:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AB7B4;
      }
      goto L_088AB790;
    }
L_088AB790:
    ctx.set_gpr(31, 0x088AB798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB798u) goto L_088AB798;
    return;
L_088AB798:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(987));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088AB7ACu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB7ACu) goto L_088AB7AC;
    return;
L_088AB7AC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088AB7D4;
      }
      goto L_088AB7B4;
    }
L_088AB7B4:
    ctx.set_gpr(31, 0x088AB7BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB7BCu) goto L_088AB7BC;
    return;
L_088AB7BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(989));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088AB7D0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB7D0u) goto L_088AB7D0;
    return;
L_088AB7D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_088AB7D4;
L_088AB7D4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088ABB1C;
      }
      goto L_088AB7DC;
    }
L_088AB7DC:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[12];
        goto L_088AB8C8;
    }
    goto L_088AB7F4;
L_088AB7F4:
    ctx.set_gpr(31, 0x088AB7FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB7FCu) goto L_088AB7FC;
    return;
L_088AB7FC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088AB81Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB81Cu) goto L_088AB81C;
    return;
L_088AB81C:
    ctx.set_gpr(31, 0x088AB824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB824u) goto L_088AB824;
    return;
L_088AB824:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088AB84Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x088AB84Cu) goto L_088AB84C;
    return;
L_088AB84C:
    ctx.set_gpr(31, 0x088AB854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB854u) goto L_088AB854;
    return;
L_088AB854:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x088AB868u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_088AB1EC;
L_088AB868:
    ctx.set_gpr(31, 0x088AB870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB870u) goto L_088AB870;
    return;
L_088AB870:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x088AB884u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB884u) goto L_088AB884;
    return;
L_088AB884:
    ctx.set_gpr(31, 0x088AB88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB88Cu) goto L_088AB88C;
    return;
L_088AB88C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x088AB8A0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB8A0u) goto L_088AB8A0;
    return;
L_088AB8A0:
    ctx.set_gpr(31, 0x088AB8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB8A8u) goto L_088AB8A8;
    return;
L_088AB8A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(31, 0x088AB8BCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB8BCu) goto L_088AB8BC;
    return;
L_088AB8BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088ABB1C;
      }
      goto L_088AB8C8;
    }
L_088AB8C8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088ABB1C;
      }
      goto L_088AB8D0;
    }
L_088AB8D0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABB1C;
      }
      goto L_088AB8DC;
    }
L_088AB8DC:
    ctx.set_gpr(31, 0x088AB8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB8E4u) goto L_088AB8E4;
    return;
L_088AB8E4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17058u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17314u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 32768u);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x088AB920u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x088AB920u) goto L_088AB920;
    return;
L_088AB920:
    ctx.set_gpr(31, 0x088AB928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB928u) goto L_088AB928;
    return;
L_088AB928:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088AB93Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB93Cu) goto L_088AB93C;
    return;
L_088AB93C:
    ctx.set_gpr(31, 0x088AB944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB944u) goto L_088AB944;
    return;
L_088AB944:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17058u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17314u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 32768u);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x088AB980u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x088AB980u) goto L_088AB980;
    return;
L_088AB980:
    ctx.set_gpr(31, 0x088AB988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB988u) goto L_088AB988;
    return;
L_088AB988:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088AB99Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB99Cu) goto L_088AB99C;
    return;
L_088AB99C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088ABB1C;
      }
      goto L_088AB9A8;
    }
L_088AB9A8:
    ctx.set_gpr(31, 0x088AB9B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088AB9B0u) goto L_088AB9B0;
    return;
L_088AB9B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088AB9BCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x088AB9BCu) goto L_088AB9BC;
    return;
L_088AB9BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB9F4;
      }
      goto L_088AB9C4;
    }
L_088AB9C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
        goto L_088AB9D4;
    }
    goto L_088AB9D0;
L_088AB9D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_088AB9D4;
L_088AB9D4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088AB9E0u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB9E0u) goto L_088AB9E0;
    return;
L_088AB9E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088AB9F4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB9F4u) goto L_088AB9F4;
    return;
L_088AB9F4:
    ctx.set_gpr(31, 0x088AB9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088AB9FCu) goto L_088AB9FC;
    return;
L_088AB9FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ABA08u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x088ABA08u) goto L_088ABA08;
    return;
L_088ABA08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABA44;
      }
      goto L_088ABA10;
    }
L_088ABA10:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
        goto L_088ABA24;
    }
    goto L_088ABA20;
L_088ABA20:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088ABA24;
L_088ABA24:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088ABA30u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABA30u) goto L_088ABA30;
    return;
L_088ABA30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088ABA44u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABA44u) goto L_088ABA44;
    return;
L_088ABA44:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABADC;
      }
      goto L_088ABA4C;
    }
L_088ABA4C:
    ctx.set_gpr(31, 0x088ABA54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088ABA54u) goto L_088ABA54;
    return;
L_088ABA54:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17058u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17314u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 32768u);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x088ABA90u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x088ABA90u) goto L_088ABA90;
    return;
L_088ABA90:
    ctx.set_gpr(31, 0x088ABA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088ABA98u) goto L_088ABA98;
    return;
L_088ABA98:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17058u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17314u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 32768u);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x088ABAD4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x088ABAD4u) goto L_088ABAD4;
    return;
L_088ABAD4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
      if (branch_taken) {
          goto L_088ABB1C;
      }
      goto L_088ABADC;
    }
L_088ABADC:
    ctx.set_gpr(31, 0x088ABAE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088ABAE4u) goto L_088ABAE4;
    return;
L_088ABAE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ABAF0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x088ABAF0u) goto L_088ABAF0;
    return;
L_088ABAF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABB18;
      }
      goto L_088ABAF8;
    }
L_088ABAF8:
    ctx.set_gpr(31, 0x088ABB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABB00u) goto L_088ABB00;
    return;
L_088ABB00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088ABB14u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABB14u) goto L_088ABB14;
    return;
L_088ABB14:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    goto L_088ABB18;
L_088ABB18:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    goto L_088ABB1C;
L_088ABB1C:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_088ABB20;
L_088ABB20:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088ABB2Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x088ABB2Cu) goto L_088ABB2C;
    return;
L_088ABB2C:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_088ABB38;
L_088ABB38:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088ABB78;
      }
      goto L_088ABB40;
    }
L_088ABB40:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16192u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088ABB58u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x088ABB58u) goto L_088ABB58;
    return;
L_088ABB58:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5692));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088ABB78u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x088ABB78u) goto L_088ABB78;
    return;
L_088ABB78:
    ctx.set_gpr(31, 0x088ABB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088ABB80u) goto L_088ABB80;
    return;
L_088ABB80:
    ctx.set_gpr(31, 0x088ABB88u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABB88u) goto L_088ABB88;
    return;
L_088ABB88:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_088ABBB8;
    }
    goto L_088ABB90;
L_088ABB90:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088ABBB0u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x088ABBB0u) goto L_088ABBB0;
    return;
L_088ABBB0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088ABBD0;
      }
      goto L_088ABBB8;
    }
L_088ABBB8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088ABBCCu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x088ABBCCu) goto L_088ABBCC;
    return;
L_088ABBCC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_088ABBD0;
L_088ABBD0:
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088ABBE4u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5692));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x088ABBE4u) goto L_088ABBE4;
    return;
L_088ABBE4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088ABB38;
      }
      goto L_088ABBF8;
    }
L_088ABBF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_088ABCA8;
    }
    goto L_088ABC04;
L_088ABC04:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088ABC1Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x088ABC1Cu) goto L_088ABC1C;
    return;
L_088ABC1C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088ABC34u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5692));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x088ABC34u) goto L_088ABC34;
    return;
L_088ABC34:
    ctx.set_gpr(31, 0x088ABC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088ABC3Cu) goto L_088ABC3C;
    return;
L_088ABC3C:
    ctx.set_gpr(31, 0x088ABC44u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABC44u) goto L_088ABC44;
    return;
L_088ABC44:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_088ABC74;
    }
    goto L_088ABC4C;
L_088ABC4C:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088ABC6Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x088ABC6Cu) goto L_088ABC6C;
    return;
L_088ABC6C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
      if (branch_taken) {
          goto L_088ABC8C;
      }
      goto L_088ABC74;
    }
L_088ABC74:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088ABC88u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x088ABC88u) goto L_088ABC88;
    return;
L_088ABC88:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    goto L_088ABC8C;
L_088ABC8C:
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(254));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088ABCA0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5692));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x088ABCA0u) goto L_088ABCA0;
    return;
L_088ABCA0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16256u << 16u);
      if (branch_taken) {
          goto L_088ABD3C;
      }
      goto L_088ABCA8;
    }
L_088ABCA8:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088ABCBCu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x088ABCBCu) goto L_088ABCBC;
    return;
L_088ABCBC:
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088ABCD0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x088ABCD0u) goto L_088ABCD0;
    return;
L_088ABCD0:
    ctx.set_gpr(31, 0x088ABCD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088ABCD8u) goto L_088ABCD8;
    return;
L_088ABCD8:
    ctx.set_gpr(31, 0x088ABCE0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABCE0u) goto L_088ABCE0;
    return;
L_088ABCE0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_088ABD10;
    }
    goto L_088ABCE8;
L_088ABCE8:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088ABD08u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x088ABD08u) goto L_088ABD08;
    return;
L_088ABD08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABD24;
      }
      goto L_088ABD10;
    }
L_088ABD10:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088ABD24u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x088ABD24u) goto L_088ABD24;
    return;
L_088ABD24:
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(254));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088ABD38u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x088ABD38u) goto L_088ABD38;
    return;
L_088ABD38:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_088ABD3C;
L_088ABD3C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088ABD50u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x088ABD50u) goto L_088ABD50;
    return;
L_088ABD50:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABD78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    ctx.set_gpr(22, ctx.gpr[8] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(39));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    goto L_088ABDC0;
L_088ABDC0:
    ctx.set_gpr(31, 0x088ABDC8u);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(23));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088ABDC8u) goto L_088ABDC8;
    return;
L_088ABDC8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088ABDE4u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABDE4u) goto L_088ABDE4;
    return;
L_088ABDE4:
    ctx.set_gpr(31, 0x088ABDECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088ABDECu) goto L_088ABDEC;
    return;
L_088ABDEC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088ABE0Cu);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088ABE0Cu) goto L_088ABE0C;
    return;
L_088ABE0C:
    ctx.set_gpr(31, 0x088ABE14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088ABE14u) goto L_088ABE14;
    return;
L_088ABE14:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ABE24u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088ABE24u) goto L_088ABE24;
    return;
L_088ABE24:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 43 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
        goto L_088ABDC0;
    }
    goto L_088ABE34;
L_088ABE34:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(43));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[18]);
    goto L_088ABE3C;
L_088ABE3C:
    ctx.set_gpr(31, 0x088ABE44u);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(23));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088ABE44u) goto L_088ABE44;
    return;
L_088ABE44:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088ABE60u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABE60u) goto L_088ABE60;
    return;
L_088ABE60:
    ctx.set_gpr(31, 0x088ABE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088ABE68u) goto L_088ABE68;
    return;
L_088ABE68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15692u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[0];
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088ABE94u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088ABE94u) goto L_088ABE94;
    return;
L_088ABE94:
    ctx.set_gpr(31, 0x088ABE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088ABE9Cu) goto L_088ABE9C;
    return;
L_088ABE9C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ABEACu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088ABEACu) goto L_088ABEAC;
    return;
L_088ABEAC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 45 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[18]);
        goto L_088ABE3C;
    }
    goto L_088ABEBC;
L_088ABEBC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABF2C;
      }
      goto L_088ABEC8;
    }
L_088ABEC8:
    ctx.set_gpr(31, 0x088ABED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088ABED0u) goto L_088ABED0;
    return;
L_088ABED0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(68))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088ABEECu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABEECu) goto L_088ABEEC;
    return;
L_088ABEEC:
    ctx.set_gpr(31, 0x088ABEF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088ABEF4u) goto L_088ABEF4;
    return;
L_088ABEF4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(68))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088ABF14u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x088ABF14u) goto L_088ABF14;
    return;
L_088ABF14:
    ctx.set_gpr(31, 0x088ABF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088ABF1Cu) goto L_088ABF1C;
    return;
L_088ABF1C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(68))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ABF2Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088ABF2Cu) goto L_088ABF2C;
    return;
L_088ABF2C:
    ctx.set_gpr(31, 0x088ABF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ABF34u) goto L_088ABF34;
    return;
L_088ABF34:
    ctx.set_gpr(31, 0x088ABF3Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088ABF3Cu) goto L_088ABF3C;
    return;
L_088ABF3C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088ABF84;
      }
      goto L_088ABF48;
    }
L_088ABF48:
    ctx.set_gpr(31, 0x088ABF50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088ABF50u) goto L_088ABF50;
    return;
L_088ABF50:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(63))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088ABF6Cu);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABF6Cu) goto L_088ABF6C;
    return;
L_088ABF6C:
    ctx.set_gpr(31, 0x088ABF74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088ABF74u) goto L_088ABF74;
    return;
L_088ABF74:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(63))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ABF84u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088ABF84u) goto L_088ABF84;
    return;
L_088ABF84:
    ctx.set_gpr(31, 0x088ABF8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ABF8Cu) goto L_088ABF8C;
    return;
L_088ABF8C:
    ctx.set_gpr(31, 0x088ABF94u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088ABF94u) goto L_088ABF94;
    return;
L_088ABF94:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088ABFBC;
      }
      goto L_088ABFA0;
    }
L_088ABFA0:
    ctx.set_gpr(31, 0x088ABFA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088ABFA8u) goto L_088ABFA8;
    return;
L_088ABFA8:
    ctx.set_gpr(31, 0x088ABFB0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088ABFB0u) goto L_088ABFB0;
    return;
L_088ABFB0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 9u, 0x088AC080u>(ctx, &aot_mem); return;
      }
      goto L_088ABFBC;
    }
L_088ABFBC:
    ctx.set_gpr(31, 0x088ABFC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x088ABFC4u) goto L_088ABFC4;
    return;
L_088ABFC4:
    ctx.set_gpr(31, 0x088ABFCCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 121u, 0x088AC69Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABFCCu) goto L_088ABFCC;
    return;
L_088ABFCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABFF8;
      }
      goto L_088ABFD4;
    }
L_088ABFD4:
    ctx.set_gpr(31, 0x088ABFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088ABFDCu) goto L_088ABFDC;
    return;
L_088ABFDC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(69))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(22))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ABFF0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(25));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABFF0u) goto L_088ABFF0;
    return;
L_088ABFF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 2u, 0x088AC014u>(ctx, &aot_mem); return;
      }
      goto L_088ABFF8;
    }
L_088ABFF8:
    ctx.set_gpr(31, 0x088AC000u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0041(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0041_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_41(Runtime &runtime) {
    runtime.register_generated_unit(41u, 0x088A8000u, 16384u, &recomp_unit_0041, &recomp_unit_0041_entry);
    runtime.register_function(0x088A8004u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A800Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8020u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8028u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A803Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8044u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8054u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A805Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8070u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A807Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8084u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8098u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8104u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A810Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8120u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8128u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8138u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8140u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8148u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8158u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8160u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8168u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8178u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8184u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A818Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8204u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A820Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8228u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8230u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8254u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A825Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A826Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8274u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8284u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A828Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8300u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8308u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8314u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A831Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A832Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8334u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8340u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8348u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8358u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8360u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8370u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8378u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A838Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8390u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A839Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8404u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8408u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A840Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8418u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8420u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8430u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A843Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8444u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8454u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A845Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A846Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8478u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8480u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8494u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A849Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8504u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A850Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8524u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A852Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A853Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8554u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A856Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8574u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8588u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A859Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A860Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8614u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8620u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8630u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A864Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8654u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8660u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A866Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8680u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A869Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8700u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A870Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8718u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8720u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8744u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A874Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A875Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8764u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A876Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8778u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8784u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A878Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A879Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8804u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8828u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A882Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8834u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A885Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A886Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A887Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8884u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8890u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A889Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8900u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8908u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A891Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A892Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8934u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8938u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8940u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8948u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8954u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8960u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8964u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A896Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8980u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8990u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8994u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A0Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A50u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A80u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8AA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8AACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8AF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B08u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B40u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B54u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B80u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B98u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BCCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BDCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C50u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C68u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CF4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D38u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D40u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D64u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8DA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8DA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8DC8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8DD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8DF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E98u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8EA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8EB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8EB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8ED4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8EDCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F08u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8FA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8FB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8FC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8FC8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8FD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8FDCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8FE0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9014u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9020u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9030u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9044u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A904Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A905Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9064u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9080u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9088u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A910Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A914Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9154u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9168u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9178u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9180u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9188u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9190u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A919Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9204u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9218u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9220u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9230u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9238u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9254u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A925Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9270u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9278u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9294u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9308u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9310u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9324u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A932Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9350u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9380u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A940Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9424u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A942Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9448u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9458u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9460u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9470u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9478u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9488u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9490u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9510u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9518u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9520u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A953Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9544u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9564u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A956Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A958Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9594u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9604u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A960Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9624u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A962Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9644u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A964Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9664u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A966Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9688u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9690u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9698u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9708u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9710u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9730u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9738u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9758u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9760u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9784u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A978Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9830u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9840u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9848u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9864u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A986Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9888u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9890u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9898u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A98B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A98C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A98CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A98D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A98DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9900u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9908u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9910u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9930u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9938u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A995Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9964u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9988u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9990u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A99A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A99A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A99CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A99D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A99F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A40u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9AA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9AA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9AB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9AC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9AD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9AD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9AE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9AF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B08u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B38u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BE0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BF4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C38u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9CCCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9CD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9CE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9CECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9CF4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9CFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D0Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D54u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D80u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DBCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9EC8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9ED0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9EECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9EF4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F64u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F80u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FF4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA00Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA018u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA020u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA028u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA03Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA044u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA064u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA06Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA084u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA08Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA10Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA114u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA134u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA13Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA154u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA15Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA178u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA180u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA190u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA19Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA1A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA1B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA1B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA1C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA1DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA1E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA1FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA204u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA21Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA224u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA22Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA244u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA24Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA264u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA26Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA284u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA288u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA294u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA2B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA2B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA2D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA2E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA300u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA308u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA328u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA338u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA34Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA354u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA36Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA374u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA38Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA394u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA39Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA3B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA3BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA3D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA3DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA3F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA3F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA404u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA40Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA428u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA444u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA450u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA458u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA480u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA488u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA504u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA52Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA534u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA540u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA548u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA550u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA578u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA57Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA584u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA58Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA608u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA610u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA620u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA630u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA634u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA638u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA654u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA670u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA6A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA6ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA6B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA6C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA6C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA6D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA6DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA6E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA6F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA700u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA708u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA718u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA720u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA730u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA738u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA748u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA750u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA760u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA768u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA778u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA780u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA790u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA798u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA80Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA810u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA818u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA82Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA83Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA844u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA854u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA85Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA86Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA874u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA884u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA88Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA89Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA934u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA93Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA944u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA958u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA960u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA968u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA974u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA988u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA994u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA99Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA08u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA54u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA80u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAE0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB54u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AABA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AABD4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AABDCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC0Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC50u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC64u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC80u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACCCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACD4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD0Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD68u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD98u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADC8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADDCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE40u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAECCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAED4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF40u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF64u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAFA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAFA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAFC8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAFD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAFF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB000u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB014u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB01Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB030u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB038u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB040u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB04Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB054u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB060u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB080u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB0D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB0DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB0F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB14Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB150u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB15Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB164u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB174u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB17Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB220u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB24Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB258u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB260u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB268u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB26Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB278u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB29Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB350u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB358u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB36Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB374u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB37Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB390u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB3B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB3B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB3C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB3D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB3DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB3E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB3F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB404u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB408u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB410u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB41Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB430u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB434u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB440u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB444u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB45Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB460u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB474u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB494u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB500u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB504u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB51Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB520u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB528u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB530u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB534u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB53Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB558u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB560u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB56Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB574u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB57Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB588u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB590u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB594u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB59Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB61Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB700u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB720u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB728u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB750u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB758u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB780u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB790u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB798u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB81Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB824u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB84Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB854u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB868u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB870u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB884u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB88Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB920u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB928u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB93Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB944u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB980u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB988u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB99Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA08u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA54u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA98u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABAD4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABADCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABAE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABAF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABAF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB38u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB40u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB80u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBCCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABCA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABCA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABCBCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABCD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABCD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABCE0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABCE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD08u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD38u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD50u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDC8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE0Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE68u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEBCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEC8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABED0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEF4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF50u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFBCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFCCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFD4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFDCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFF8u, &recomp_unit_0041, "recomp_unit_0041");
}
} // namespace psprecomp
