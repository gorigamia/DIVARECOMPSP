#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0040[4094] = {
    1, 0, 2, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 17, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 21, 0, 0,
    0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0,
    28, 0, 0, 0, 29, 30, 0, 31, 0, 32, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0,
    0, 43, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50,
    0, 0, 51, 0, 52, 0, 53, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 61, 0, 62, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 71, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 77, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 82, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 91, 92, 0, 0, 0, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0,
    0, 98, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0,
    0, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 110, 0, 111, 112, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136,
    0, 0, 0, 137, 0, 138, 0, 0, 139, 0, 140, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 0, 0, 0,
    0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 153,
    0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 161,
    0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 164, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0,
    0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 178, 0, 0, 0, 0, 0, 0,
    179, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0,
    188, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0,
    196, 0, 197, 0, 0, 0, 0, 198, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 210, 0, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 0, 0, 217, 0,
    218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0,
    0, 0, 231, 0, 232, 0, 233, 0, 0, 234, 0, 0, 235, 0, 236, 237, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 246, 0, 247, 0, 0, 248, 249, 0, 0, 250, 0, 0, 0, 0, 251,
    0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 256, 0, 0, 257, 0, 258, 259, 0, 260, 0, 261, 0, 0, 262, 0,
    0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 266, 0, 267, 0, 268, 0, 0, 269, 0, 270, 0, 271, 0, 0, 272, 0, 273, 0, 274, 0,
    0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0,
    0, 0, 0, 281, 0, 282, 0, 0, 283, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 287, 0, 0, 0, 0, 288, 0, 289, 0, 290,
    0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0,
    0, 298, 299, 0, 0, 0, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 315,
    0, 316, 317, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 326, 0, 0, 327, 0, 328,
    0, 0, 329, 0, 330, 0, 0, 331, 0, 0, 0, 332, 0, 0, 333, 0, 334, 0, 335, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 339, 0, 340,
    0, 0, 0, 341, 0, 0, 0, 342, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 348, 0, 349,
    0, 0, 0, 350, 0, 0, 351, 0, 352, 0, 0, 0, 0, 353, 354, 0, 355, 0, 356, 0, 0, 0, 0, 357, 0, 358, 0, 359, 0, 360, 0, 361,
    0, 362, 0, 0, 0, 0, 363, 0, 364, 365, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0,
    387, 0, 0, 388, 0, 389, 0, 0, 0, 390, 0, 391, 0, 392, 0, 393, 0, 394, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 397, 0, 398,
    0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0,
    407, 0, 408, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0,
    0, 414, 0, 0, 0, 0, 0, 0, 415, 416, 0, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 420, 0, 0, 0, 421, 0, 422, 0, 423, 0, 424,
    0, 425, 0, 426, 0, 0, 427, 0, 428, 0, 0, 429, 0, 0, 0, 430, 0, 0, 431, 0, 432, 0, 433, 0, 0, 0, 434, 0, 435, 0, 0, 436,
    0, 437, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442,
    0, 443, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 448, 0, 449, 0, 450, 0, 0, 451, 0, 452, 453, 0, 454, 0,
    0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 463,
    0, 464, 0, 0, 465, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 468, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 472,
    0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 479,
    0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 482, 0, 483, 0, 484, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0,
    489, 0, 490, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 495, 0, 496, 0, 0, 497, 0, 0, 498, 0, 499, 0, 0,
    500, 0, 501, 0, 502, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 509, 0,
    510, 0, 0, 0, 0, 511, 0, 512, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 0, 517, 0, 518, 0, 519,
    0, 0, 520, 0, 0, 0, 0, 521, 0, 522, 0, 523, 0, 0, 524, 0, 0, 0, 0, 525, 0, 526, 0, 527, 0, 0, 528, 0, 529, 0, 530, 0,
    0, 531, 0, 0, 0, 0, 532, 0, 533, 0, 534, 0, 0, 535, 0, 0, 0, 0, 536, 0, 537, 0, 538, 0, 539, 0, 540, 0, 0, 0, 0, 541,
    0, 542, 0, 543, 0, 0, 544, 0, 545, 0, 0, 546, 547, 0, 548, 0, 549, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 0, 552, 0,
    0, 0, 0, 553, 0, 0, 554, 0, 555, 0, 0, 556, 0, 0, 0, 557, 0, 0, 558, 0, 559, 560, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0,
    563, 0, 0, 564, 0, 565, 0, 566, 0, 567, 0, 568, 0, 0, 0, 0, 0, 569, 0, 570, 0, 571, 0, 0, 572, 0, 0, 0, 573, 0, 0, 574,
    0, 0, 0, 0, 575, 0, 576, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0,
    583, 0, 584, 0, 0, 585, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 588, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0,
    591, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 595, 0, 596, 0, 597, 0, 0, 598, 0, 0, 599, 0, 600, 0, 601, 0, 0, 0,
    0, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0, 605, 0, 606, 0, 0, 0, 607, 0, 608, 0, 609, 0, 610, 0, 611, 0, 612, 0, 613,
    0, 0, 0, 614, 0, 615, 0, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0, 618, 0, 0, 619, 0, 0, 620, 0, 621, 0, 0, 622, 0, 0, 0,
    623, 0, 0, 624, 0, 625, 0, 626, 0, 0, 627, 0, 628, 0, 0, 629, 0, 0, 0, 630, 0, 0, 631, 0, 632, 0, 0, 0, 0, 633, 0, 634,
    0, 0, 0, 0, 0, 0, 0, 635, 0, 636, 0, 637, 0, 0, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 640, 641, 642, 0, 0, 643,
    0, 0, 0, 644, 0, 0, 0, 645, 646, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 0,
    651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 653, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 656, 0, 657, 0, 0, 658, 0, 0, 0, 659, 0,
    0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 663, 0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 666, 0, 0, 0, 667, 0, 0, 0,
    0, 0, 668, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 671, 672, 673, 0, 0, 674, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 676, 0, 677, 0, 0, 0, 0, 678, 0, 679, 0, 680, 0, 681, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 684, 0,
    0, 0, 0, 685, 0, 686, 0, 687, 0, 0, 0, 688, 0, 0, 689, 0, 0, 0, 690, 0, 691, 0, 692, 0, 693, 0, 0, 0, 694, 0, 0, 0,
    695, 0, 696, 0, 0, 0, 697, 0, 0, 698, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 0, 0, 0, 702,
    0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 0, 0, 0, 708,
    0, 0, 0, 0, 0, 709, 0, 0, 710, 0, 711, 712, 0, 0, 0, 713, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 720,
    0, 0, 721, 0, 0, 722, 723, 0, 0, 0, 0, 0, 0, 724, 0, 725, 0, 0, 726, 0, 727, 0, 0, 728, 0, 729, 0, 0, 730, 0, 0, 0,
    731, 0, 732, 0, 733, 0, 734, 0, 0, 0, 735, 0, 736, 0, 737, 0, 738, 0, 0, 0, 739, 0, 740, 0, 741, 0, 0, 742, 0, 0, 743, 0,
    0, 0, 744, 0, 0, 745, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 747, 0, 0, 748, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    750, 0, 751, 0, 0, 0, 752, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 756, 0, 757, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 759, 0, 0, 0, 760, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 763,
    0, 0, 0, 764, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768,
    0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 773, 0,
    774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 776, 777, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    779, 0, 0, 0, 0, 780, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 784, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    788, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0,
    793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 797, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 798, 0, 799, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 800, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 802, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806,
    0, 807, 0, 0, 0, 808, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 811, 0, 0, 0, 0, 0, 0, 0, 0, 0, 812, 0, 813,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 818, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 823, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 824, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 827, 0, 0, 0, 0, 0, 0, 0, 0, 0, 828, 0, 829,
    0, 0, 0, 830, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 833, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0,
    835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 837, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 839, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 840, 841, 0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 843, 0, 844, 0, 845, 0, 0, 846, 0, 0,
    0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0, 849, 0, 0, 850, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 851, 852,
    0, 853, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 854, 0, 855, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 856, 0, 857,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 858, 0, 859, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 860, 0, 861, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 862, 0, 863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 865, 0, 0, 866, 0, 867, 0, 0,
    0, 0, 0, 0, 0, 0, 868, 0, 869, 0, 870, 0, 0, 871, 0, 872, 0, 873, 0, 874, 0, 0, 0, 0, 0, 0, 0, 0, 0, 875, 0, 876,
    0, 877, 0, 0, 0, 0, 0, 0, 0, 0, 0, 878, 0, 879, 0, 880, 0, 0, 0, 0, 0, 0, 0, 0, 0, 881, 882, 0, 883, 0, 0, 0,
    0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 0, 0, 0, 0, 885, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 887, 0, 0, 0, 0,
    888, 889, 0, 890, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 891, 0, 0, 0, 0, 892, 893, 0, 894, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 895, 0, 0, 0, 0, 896, 897, 0, 898, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 899, 0, 0, 0, 0, 900, 901, 0, 902, 0, 0, 903, 0, 904, 0, 0, 0, 905, 0, 906, 0, 0, 0, 907, 0, 908, 0,
    0, 0, 909, 0, 910, 0, 0, 0, 911, 912, 0, 913, 0, 0, 0, 0, 914, 0, 0, 0, 915, 916, 0, 917, 0, 0, 0, 0, 918, 0, 0, 0,
    919, 0, 920, 0, 0, 0, 921, 0, 922, 0, 0, 0, 923, 0, 924, 0, 0, 0, 925, 0, 926, 0, 0, 0, 927, 0, 928, 0, 0, 0, 929, 0,
    930, 0, 0, 0, 931, 932, 0, 933, 0, 0, 0, 0, 934, 0, 0, 0, 935, 0, 936, 0, 0, 0, 937, 0, 0, 938, 0, 939, 0, 940, 0, 0,
    0, 941, 942, 0, 0, 0, 0, 0, 0, 0, 0, 943, 0, 0, 0, 0, 0, 0, 0, 944, 0, 945, 0, 0, 0, 0, 0, 0, 0, 0, 946, 0,
    0, 947, 0, 948, 0, 0, 0, 0, 949, 0, 950, 0, 0, 951, 0, 0, 952, 0, 0, 953, 0, 954, 0, 0, 0, 0, 955, 0, 956, 0, 0, 957,
    0, 0, 958, 0, 0, 959, 0, 0, 0, 960, 0, 961, 0, 962, 0, 0, 0, 963, 0, 964, 0, 0, 0, 965, 0, 966, 0, 0, 0, 967, 968, 969,
    0, 0, 0, 0, 0, 970, 0, 0, 0, 0, 0, 0, 0, 0, 0, 971, 0, 0, 972, 0, 973, 0, 0, 0, 974, 0, 0, 975, 0, 976,
};
void recomp_unit_0040_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088A4000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0040[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A4000;
    case 2u: goto L_088A4008;
    case 3u: goto L_088A400C;
    case 4u: goto L_088A4014;
    case 5u: goto L_088A401C;
    case 6u: goto L_088A4024;
    case 7u: goto L_088A402C;
    case 8u: goto L_088A4034;
    case 9u: goto L_088A403C;
    case 10u: goto L_088A4044;
    case 11u: goto L_088A404C;
    case 12u: goto L_088A4058;
    case 13u: goto L_088A408C;
    case 14u: goto L_088A4094;
    case 15u: goto L_088A409C;
    case 16u: goto L_088A40B0;
    case 17u: goto L_088A40C0;
    case 18u: goto L_088A40C4;
    case 19u: goto L_088A40E0;
    case 20u: goto L_088A40EC;
    case 21u: goto L_088A40F4;
    case 22u: goto L_088A410C;
    case 23u: goto L_088A4114;
    case 24u: goto L_088A4120;
    case 25u: goto L_088A412C;
    case 26u: goto L_088A415C;
    case 27u: goto L_088A416C;
    case 28u: goto L_088A4180;
    case 29u: goto L_088A4190;
    case 30u: goto L_088A4194;
    case 31u: goto L_088A419C;
    case 32u: goto L_088A41A4;
    case 33u: goto L_088A41B0;
    case 34u: goto L_088A41BC;
    case 35u: goto L_088A41C4;
    case 36u: goto L_088A41DC;
    case 37u: goto L_088A41E4;
    case 38u: goto L_088A420C;
    case 39u: goto L_088A4238;
    case 40u: goto L_088A424C;
    case 41u: goto L_088A4258;
    case 42u: goto L_088A426C;
    case 43u: goto L_088A4284;
    case 44u: goto L_088A428C;
    case 45u: goto L_088A42A0;
    case 46u: goto L_088A42B4;
    case 47u: goto L_088A42BC;
    case 48u: goto L_088A42CC;
    case 49u: goto L_088A42D8;
    case 50u: goto L_088A42FC;
    case 51u: goto L_088A4308;
    case 52u: goto L_088A4310;
    case 53u: goto L_088A4318;
    case 54u: goto L_088A4320;
    case 55u: goto L_088A432C;
    case 56u: goto L_088A4380;
    case 57u: goto L_088A4388;
    case 58u: goto L_088A43B4;
    case 59u: goto L_088A43CC;
    case 60u: goto L_088A43F8;
    case 61u: goto L_088A4408;
    case 62u: goto L_088A4410;
    case 63u: goto L_088A441C;
    case 64u: goto L_088A4424;
    case 65u: goto L_088A444C;
    case 66u: goto L_088A4454;
    case 67u: goto L_088A4464;
    case 68u: goto L_088A448C;
    case 69u: goto L_088A449C;
    case 70u: goto L_088A44B8;
    case 71u: goto L_088A44C0;
    case 72u: goto L_088A44C4;
    case 73u: goto L_088A44D4;
    case 74u: goto L_088A44F4;
    case 75u: goto L_088A4504;
    case 76u: goto L_088A4520;
    case 77u: goto L_088A4528;
    case 78u: goto L_088A452C;
    case 79u: goto L_088A453C;
    case 80u: goto L_088A4564;
    case 81u: goto L_088A456C;
    case 82u: goto L_088A4578;
    case 83u: goto L_088A45A0;
    case 84u: goto L_088A45A8;
    case 85u: goto L_088A45B4;
    case 86u: goto L_088A45F4;
    case 87u: goto L_088A4618;
    case 88u: goto L_088A4634;
    case 89u: goto L_088A4648;
    case 90u: goto L_088A465C;
    case 91u: goto L_088A4668;
    case 92u: goto L_088A466C;
    case 93u: goto L_088A4684;
    case 94u: goto L_088A46B4;
    case 95u: goto L_088A46C0;
    case 96u: goto L_088A46C4;
    case 97u: goto L_088A46EC;
    case 98u: goto L_088A4704;
    case 99u: goto L_088A4718;
    case 100u: goto L_088A4720;
    case 101u: goto L_088A4754;
    case 102u: goto L_088A476C;
    case 103u: goto L_088A4774;
    case 104u: goto L_088A478C;
    case 105u: goto L_088A4798;
    case 106u: goto L_088A47A4;
    case 107u: goto L_088A47B4;
    case 108u: goto L_088A47C8;
    case 109u: goto L_088A47D8;
    case 110u: goto L_088A47E0;
    case 111u: goto L_088A47E8;
    case 112u: goto L_088A47EC;
    case 113u: goto L_088A4820;
    case 114u: goto L_088A4830;
    case 115u: goto L_088A4854;
    case 116u: goto L_088A4864;
    case 117u: goto L_088A487C;
    case 118u: goto L_088A48B4;
    case 119u: goto L_088A48C4;
    case 120u: goto L_088A48C8;
    case 121u: goto L_088A48D8;
    case 122u: goto L_088A48E4;
    case 123u: goto L_088A4964;
    case 124u: goto L_088A49B0;
    case 125u: goto L_088A49B8;
    case 126u: goto L_088A4A44;
    case 127u: goto L_088A4A54;
    case 128u: goto L_088A4A80;
    case 129u: goto L_088A4A8C;
    case 130u: goto L_088A4AA0;
    case 131u: goto L_088A4AA8;
    case 132u: goto L_088A4AB0;
    case 133u: goto L_088A4ABC;
    case 134u: goto L_088A4AD0;
    case 135u: goto L_088A4AE0;
    case 136u: goto L_088A4AFC;
    case 137u: goto L_088A4B0C;
    case 138u: goto L_088A4B14;
    case 139u: goto L_088A4B20;
    case 140u: goto L_088A4B28;
    case 141u: goto L_088A4B30;
    case 142u: goto L_088A4B38;
    case 143u: goto L_088A4B48;
    case 144u: goto L_088A4B5C;
    case 145u: goto L_088A4B64;
    case 146u: goto L_088A4B6C;
    case 147u: goto L_088A4B84;
    case 148u: goto L_088A4B94;
    case 149u: goto L_088A4BB0;
    case 150u: goto L_088A4BD0;
    case 151u: goto L_088A4BD8;
    case 152u: goto L_088A4BE8;
    case 153u: goto L_088A4BFC;
    case 154u: goto L_088A4C0C;
    case 155u: goto L_088A4C28;
    case 156u: goto L_088A4C2C;
    case 157u: goto L_088A4C3C;
    case 158u: goto L_088A4C50;
    case 159u: goto L_088A4C6C;
    case 160u: goto L_088A4C74;
    case 161u: goto L_088A4C7C;
    case 162u: goto L_088A4C8C;
    case 163u: goto L_088A4C98;
    case 164u: goto L_088A4CAC;
    case 165u: goto L_088A4CB0;
    case 166u: goto L_088A4CBC;
    case 167u: goto L_088A4CC8;
    case 168u: goto L_088A4CD4;
    case 169u: goto L_088A4CEC;
    case 170u: goto L_088A4CF4;
    case 171u: goto L_088A4D08;
    case 172u: goto L_088A4D14;
    case 173u: goto L_088A4D20;
    case 174u: goto L_088A4D2C;
    case 175u: goto L_088A4D38;
    case 176u: goto L_088A4D4C;
    case 177u: goto L_088A4D60;
    case 178u: goto L_088A4D64;
    case 179u: goto L_088A4D80;
    case 180u: goto L_088A4D88;
    case 181u: goto L_088A4DA0;
    case 182u: goto L_088A4DAC;
    case 183u: goto L_088A4DC4;
    case 184u: goto L_088A4DCC;
    case 185u: goto L_088A4DDC;
    case 186u: goto L_088A4DE4;
    case 187u: goto L_088A4DF4;
    case 188u: goto L_088A4E00;
    case 189u: goto L_088A4E14;
    case 190u: goto L_088A4E24;
    case 191u: goto L_088A4E2C;
    case 192u: goto L_088A4E44;
    case 193u: goto L_088A4E50;
    case 194u: goto L_088A4E68;
    case 195u: goto L_088A4E70;
    case 196u: goto L_088A4E80;
    case 197u: goto L_088A4E88;
    case 198u: goto L_088A4E9C;
    case 199u: goto L_088A4EA4;
    case 200u: goto L_088A4EAC;
    case 201u: goto L_088A4EC8;
    case 202u: goto L_088A4ED0;
    case 203u: goto L_088A4F0C;
    case 204u: goto L_088A4F24;
    case 205u: goto L_088A4F98;
    case 206u: goto L_088A4FA4;
    case 207u: goto L_088A4FAC;
    case 208u: goto L_088A5018;
    case 209u: goto L_088A5024;
    case 210u: goto L_088A5034;
    case 211u: goto L_088A5040;
    case 212u: goto L_088A5048;
    case 213u: goto L_088A5050;
    case 214u: goto L_088A5058;
    case 215u: goto L_088A5060;
    case 216u: goto L_088A5068;
    case 217u: goto L_088A5078;
    case 218u: goto L_088A5080;
    case 219u: goto L_088A5088;
    case 220u: goto L_088A5090;
    case 221u: goto L_088A5098;
    case 222u: goto L_088A50A0;
    case 223u: goto L_088A50A8;
    case 224u: goto L_088A50B8;
    case 225u: goto L_088A50C0;
    case 226u: goto L_088A50C8;
    case 227u: goto L_088A50D0;
    case 228u: goto L_088A50D8;
    case 229u: goto L_088A50E8;
    case 230u: goto L_088A50F8;
    case 231u: goto L_088A5108;
    case 232u: goto L_088A5110;
    case 233u: goto L_088A5118;
    case 234u: goto L_088A5124;
    case 235u: goto L_088A5130;
    case 236u: goto L_088A5138;
    case 237u: goto L_088A513C;
    case 238u: goto L_088A5148;
    case 239u: goto L_088A5154;
    case 240u: goto L_088A5168;
    case 241u: goto L_088A5170;
    case 242u: goto L_088A5178;
    case 243u: goto L_088A51A4;
    case 244u: goto L_088A51B4;
    case 245u: goto L_088A51BC;
    case 246u: goto L_088A51C4;
    case 247u: goto L_088A51CC;
    case 248u: goto L_088A51D8;
    case 249u: goto L_088A51DC;
    case 250u: goto L_088A51E8;
    case 251u: goto L_088A51FC;
    case 252u: goto L_088A5208;
    case 253u: goto L_088A5220;
    case 254u: goto L_088A5230;
    case 255u: goto L_088A523C;
    case 256u: goto L_088A5244;
    case 257u: goto L_088A5250;
    case 258u: goto L_088A5258;
    case 259u: goto L_088A525C;
    case 260u: goto L_088A5264;
    case 261u: goto L_088A526C;
    case 262u: goto L_088A5278;
    case 263u: goto L_088A5288;
    case 264u: goto L_088A5298;
    case 265u: goto L_088A52A8;
    case 266u: goto L_088A52B0;
    case 267u: goto L_088A52B8;
    case 268u: goto L_088A52C0;
    case 269u: goto L_088A52CC;
    case 270u: goto L_088A52D4;
    case 271u: goto L_088A52DC;
    case 272u: goto L_088A52E8;
    case 273u: goto L_088A52F0;
    case 274u: goto L_088A52F8;
    case 275u: goto L_088A5318;
    case 276u: goto L_088A532C;
    case 277u: goto L_088A5334;
    case 278u: goto L_088A534C;
    case 279u: goto L_088A536C;
    case 280u: goto L_088A5374;
    case 281u: goto L_088A538C;
    case 282u: goto L_088A5394;
    case 283u: goto L_088A53A0;
    case 284u: goto L_088A53A8;
    case 285u: goto L_088A53B4;
    case 286u: goto L_088A53D4;
    case 287u: goto L_088A53D8;
    case 288u: goto L_088A53EC;
    case 289u: goto L_088A53F4;
    case 290u: goto L_088A53FC;
    case 291u: goto L_088A5404;
    case 292u: goto L_088A5420;
    case 293u: goto L_088A5428;
    case 294u: goto L_088A5434;
    case 295u: goto L_088A5454;
    case 296u: goto L_088A545C;
    case 297u: goto L_088A5468;
    case 298u: goto L_088A5484;
    case 299u: goto L_088A5488;
    case 300u: goto L_088A549C;
    case 301u: goto L_088A54A4;
    case 302u: goto L_088A54AC;
    case 303u: goto L_088A54B4;
    case 304u: goto L_088A54BC;
    case 305u: goto L_088A54C4;
    case 306u: goto L_088A54CC;
    case 307u: goto L_088A54D4;
    case 308u: goto L_088A54E8;
    case 309u: goto L_088A54F0;
    case 310u: goto L_088A5534;
    case 311u: goto L_088A5550;
    case 312u: goto L_088A5558;
    case 313u: goto L_088A5564;
    case 314u: goto L_088A5570;
    case 315u: goto L_088A557C;
    case 316u: goto L_088A5584;
    case 317u: goto L_088A5588;
    case 318u: goto L_088A559C;
    case 319u: goto L_088A55A4;
    case 320u: goto L_088A55D0;
    case 321u: goto L_088A55D8;
    case 322u: goto L_088A55E0;
    case 323u: goto L_088A5638;
    case 324u: goto L_088A5654;
    case 325u: goto L_088A565C;
    case 326u: goto L_088A5668;
    case 327u: goto L_088A5674;
    case 328u: goto L_088A567C;
    case 329u: goto L_088A5688;
    case 330u: goto L_088A5690;
    case 331u: goto L_088A569C;
    case 332u: goto L_088A56AC;
    case 333u: goto L_088A56B8;
    case 334u: goto L_088A56C0;
    case 335u: goto L_088A56C8;
    case 336u: goto L_088A56D0;
    case 337u: goto L_088A56E0;
    case 338u: goto L_088A56EC;
    case 339u: goto L_088A56F4;
    case 340u: goto L_088A56FC;
    case 341u: goto L_088A570C;
    case 342u: goto L_088A571C;
    case 343u: goto L_088A5724;
    case 344u: goto L_088A5730;
    case 345u: goto L_088A5750;
    case 346u: goto L_088A5760;
    case 347u: goto L_088A576C;
    case 348u: goto L_088A5774;
    case 349u: goto L_088A577C;
    case 350u: goto L_088A578C;
    case 351u: goto L_088A5798;
    case 352u: goto L_088A57A0;
    case 353u: goto L_088A57B4;
    case 354u: goto L_088A57B8;
    case 355u: goto L_088A57C0;
    case 356u: goto L_088A57C8;
    case 357u: goto L_088A57DC;
    case 358u: goto L_088A57E4;
    case 359u: goto L_088A57EC;
    case 360u: goto L_088A57F4;
    case 361u: goto L_088A57FC;
    case 362u: goto L_088A5804;
    case 363u: goto L_088A5818;
    case 364u: goto L_088A5820;
    case 365u: goto L_088A5824;
    case 366u: goto L_088A582C;
    case 367u: goto L_088A5834;
    case 368u: goto L_088A5868;
    case 369u: goto L_088A5870;
    case 370u: goto L_088A58A4;
    case 371u: goto L_088A58AC;
    case 372u: goto L_088A58E0;
    case 373u: goto L_088A58E8;
    case 374u: goto L_088A591C;
    case 375u: goto L_088A5924;
    case 376u: goto L_088A5958;
    case 377u: goto L_088A5960;
    case 378u: goto L_088A5994;
    case 379u: goto L_088A599C;
    case 380u: goto L_088A59D0;
    case 381u: goto L_088A59D8;
    case 382u: goto L_088A5A10;
    case 383u: goto L_088A5A18;
    case 384u: goto L_088A5A50;
    case 385u: goto L_088A5A60;
    case 386u: goto L_088A5A70;
    case 387u: goto L_088A5A80;
    case 388u: goto L_088A5A8C;
    case 389u: goto L_088A5A94;
    case 390u: goto L_088A5AA4;
    case 391u: goto L_088A5AAC;
    case 392u: goto L_088A5AB4;
    case 393u: goto L_088A5ABC;
    case 394u: goto L_088A5AC4;
    case 395u: goto L_088A5AD8;
    case 396u: goto L_088A5AE0;
    case 397u: goto L_088A5AF4;
    case 398u: goto L_088A5AFC;
    case 399u: goto L_088A5B10;
    case 400u: goto L_088A5B18;
    case 401u: goto L_088A5B2C;
    case 402u: goto L_088A5B34;
    case 403u: goto L_088A5B48;
    case 404u: goto L_088A5B50;
    case 405u: goto L_088A5B64;
    case 406u: goto L_088A5B6C;
    case 407u: goto L_088A5B80;
    case 408u: goto L_088A5B88;
    case 409u: goto L_088A5BA0;
    case 410u: goto L_088A5BA8;
    case 411u: goto L_088A5BC8;
    case 412u: goto L_088A5BE0;
    case 413u: goto L_088A5BE8;
    case 414u: goto L_088A5C04;
    case 415u: goto L_088A5C20;
    case 416u: goto L_088A5C24;
    case 417u: goto L_088A5C2C;
    case 418u: goto L_088A5C3C;
    case 419u: goto L_088A5C4C;
    case 420u: goto L_088A5C54;
    case 421u: goto L_088A5C64;
    case 422u: goto L_088A5C6C;
    case 423u: goto L_088A5C74;
    case 424u: goto L_088A5C7C;
    case 425u: goto L_088A5C84;
    case 426u: goto L_088A5C8C;
    case 427u: goto L_088A5C98;
    case 428u: goto L_088A5CA0;
    case 429u: goto L_088A5CAC;
    case 430u: goto L_088A5CBC;
    case 431u: goto L_088A5CC8;
    case 432u: goto L_088A5CD0;
    case 433u: goto L_088A5CD8;
    case 434u: goto L_088A5CE8;
    case 435u: goto L_088A5CF0;
    case 436u: goto L_088A5CFC;
    case 437u: goto L_088A5D04;
    case 438u: goto L_088A5D08;
    case 439u: goto L_088A5D1C;
    case 440u: goto L_088A5D50;
    case 441u: goto L_088A5D60;
    case 442u: goto L_088A5D7C;
    case 443u: goto L_088A5D84;
    case 444u: goto L_088A5D8C;
    case 445u: goto L_088A5D98;
    case 446u: goto L_088A5DB4;
    case 447u: goto L_088A5DBC;
    case 448u: goto L_088A5DC8;
    case 449u: goto L_088A5DD0;
    case 450u: goto L_088A5DD8;
    case 451u: goto L_088A5DE4;
    case 452u: goto L_088A5DEC;
    case 453u: goto L_088A5DF0;
    case 454u: goto L_088A5DF8;
    case 455u: goto L_088A5E0C;
    case 456u: goto L_088A5E14;
    case 457u: goto L_088A5E28;
    case 458u: goto L_088A5E30;
    case 459u: goto L_088A5E44;
    case 460u: goto L_088A5E4C;
    case 461u: goto L_088A5E60;
    case 462u: goto L_088A5E68;
    case 463u: goto L_088A5E7C;
    case 464u: goto L_088A5E84;
    case 465u: goto L_088A5E90;
    case 466u: goto L_088A5EA4;
    case 467u: goto L_088A5EAC;
    case 468u: goto L_088A5EC0;
    case 469u: goto L_088A5ECC;
    case 470u: goto L_088A5EE4;
    case 471u: goto L_088A5EF4;
    case 472u: goto L_088A5EFC;
    case 473u: goto L_088A5F14;
    case 474u: goto L_088A5F1C;
    case 475u: goto L_088A5F3C;
    case 476u: goto L_088A5F44;
    case 477u: goto L_088A5F58;
    case 478u: goto L_088A5F74;
    case 479u: goto L_088A5F7C;
    case 480u: goto L_088A5F94;
    case 481u: goto L_088A5F9C;
    case 482u: goto L_088A5FA8;
    case 483u: goto L_088A5FB0;
    case 484u: goto L_088A5FB8;
    case 485u: goto L_088A5FCC;
    case 486u: goto L_088A5FD4;
    case 487u: goto L_088A5FEC;
    case 488u: goto L_088A5FF4;
    case 489u: goto L_088A6000;
    case 490u: goto L_088A6008;
    case 491u: goto L_088A6010;
    case 492u: goto L_088A6018;
    case 493u: goto L_088A6038;
    case 494u: goto L_088A6044;
    case 495u: goto L_088A604C;
    case 496u: goto L_088A6054;
    case 497u: goto L_088A6060;
    case 498u: goto L_088A606C;
    case 499u: goto L_088A6074;
    case 500u: goto L_088A6080;
    case 501u: goto L_088A6088;
    case 502u: goto L_088A6090;
    case 503u: goto L_088A60A4;
    case 504u: goto L_088A60AC;
    case 505u: goto L_088A60C0;
    case 506u: goto L_088A60C8;
    case 507u: goto L_088A60DC;
    case 508u: goto L_088A60E4;
    case 509u: goto L_088A60F8;
    case 510u: goto L_088A6100;
    case 511u: goto L_088A6114;
    case 512u: goto L_088A611C;
    case 513u: goto L_088A6128;
    case 514u: goto L_088A613C;
    case 515u: goto L_088A6158;
    case 516u: goto L_088A6160;
    case 517u: goto L_088A616C;
    case 518u: goto L_088A6174;
    case 519u: goto L_088A617C;
    case 520u: goto L_088A6188;
    case 521u: goto L_088A619C;
    case 522u: goto L_088A61A4;
    case 523u: goto L_088A61AC;
    case 524u: goto L_088A61B8;
    case 525u: goto L_088A61CC;
    case 526u: goto L_088A61D4;
    case 527u: goto L_088A61DC;
    case 528u: goto L_088A61E8;
    case 529u: goto L_088A61F0;
    case 530u: goto L_088A61F8;
    case 531u: goto L_088A6204;
    case 532u: goto L_088A6218;
    case 533u: goto L_088A6220;
    case 534u: goto L_088A6228;
    case 535u: goto L_088A6234;
    case 536u: goto L_088A6248;
    case 537u: goto L_088A6250;
    case 538u: goto L_088A6258;
    case 539u: goto L_088A6260;
    case 540u: goto L_088A6268;
    case 541u: goto L_088A627C;
    case 542u: goto L_088A6284;
    case 543u: goto L_088A628C;
    case 544u: goto L_088A6298;
    case 545u: goto L_088A62A0;
    case 546u: goto L_088A62AC;
    case 547u: goto L_088A62B0;
    case 548u: goto L_088A62B8;
    case 549u: goto L_088A62C0;
    case 550u: goto L_088A62D0;
    case 551u: goto L_088A62D8;
    case 552u: goto L_088A62F8;
    case 553u: goto L_088A630C;
    case 554u: goto L_088A6318;
    case 555u: goto L_088A6320;
    case 556u: goto L_088A632C;
    case 557u: goto L_088A633C;
    case 558u: goto L_088A6348;
    case 559u: goto L_088A6350;
    case 560u: goto L_088A6354;
    case 561u: goto L_088A635C;
    case 562u: goto L_088A6370;
    case 563u: goto L_088A6380;
    case 564u: goto L_088A638C;
    case 565u: goto L_088A6394;
    case 566u: goto L_088A639C;
    case 567u: goto L_088A63A4;
    case 568u: goto L_088A63AC;
    case 569u: goto L_088A63C4;
    case 570u: goto L_088A63CC;
    case 571u: goto L_088A63D4;
    case 572u: goto L_088A63E0;
    case 573u: goto L_088A63F0;
    case 574u: goto L_088A63FC;
    case 575u: goto L_088A6410;
    case 576u: goto L_088A6418;
    case 577u: goto L_088A642C;
    case 578u: goto L_088A6434;
    case 579u: goto L_088A6448;
    case 580u: goto L_088A6450;
    case 581u: goto L_088A6464;
    case 582u: goto L_088A646C;
    case 583u: goto L_088A6480;
    case 584u: goto L_088A6488;
    case 585u: goto L_088A6494;
    case 586u: goto L_088A64A8;
    case 587u: goto L_088A64B0;
    case 588u: goto L_088A64C4;
    case 589u: goto L_088A64CC;
    case 590u: goto L_088A64F8;
    case 591u: goto L_088A6500;
    case 592u: goto L_088A650C;
    case 593u: goto L_088A6514;
    case 594u: goto L_088A652C;
    case 595u: goto L_088A6538;
    case 596u: goto L_088A6540;
    case 597u: goto L_088A6548;
    case 598u: goto L_088A6554;
    case 599u: goto L_088A6560;
    case 600u: goto L_088A6568;
    case 601u: goto L_088A6570;
    case 602u: goto L_088A6588;
    case 603u: goto L_088A6590;
    case 604u: goto L_088A65AC;
    case 605u: goto L_088A65B4;
    case 606u: goto L_088A65BC;
    case 607u: goto L_088A65CC;
    case 608u: goto L_088A65D4;
    case 609u: goto L_088A65DC;
    case 610u: goto L_088A65E4;
    case 611u: goto L_088A65EC;
    case 612u: goto L_088A65F4;
    case 613u: goto L_088A65FC;
    case 614u: goto L_088A660C;
    case 615u: goto L_088A6614;
    case 616u: goto L_088A6620;
    case 617u: goto L_088A6638;
    case 618u: goto L_088A6644;
    case 619u: goto L_088A6650;
    case 620u: goto L_088A665C;
    case 621u: goto L_088A6664;
    case 622u: goto L_088A6670;
    case 623u: goto L_088A6680;
    case 624u: goto L_088A668C;
    case 625u: goto L_088A6694;
    case 626u: goto L_088A669C;
    case 627u: goto L_088A66A8;
    case 628u: goto L_088A66B0;
    case 629u: goto L_088A66BC;
    case 630u: goto L_088A66CC;
    case 631u: goto L_088A66D8;
    case 632u: goto L_088A66E0;
    case 633u: goto L_088A66F4;
    case 634u: goto L_088A66FC;
    case 635u: goto L_088A671C;
    case 636u: goto L_088A6724;
    case 637u: goto L_088A672C;
    case 638u: goto L_088A674C;
    case 639u: goto L_088A6754;
    case 640u: goto L_088A6768;
    case 641u: goto L_088A676C;
    case 642u: goto L_088A6770;
    case 643u: goto L_088A677C;
    case 644u: goto L_088A678C;
    case 645u: goto L_088A679C;
    case 646u: goto L_088A67A0;
    case 647u: goto L_088A67BC;
    case 648u: goto L_088A67D0;
    case 649u: goto L_088A67D8;
    case 650u: goto L_088A67F4;
    case 651u: goto L_088A6800;
    case 652u: goto L_088A6818;
    case 653u: goto L_088A6828;
    case 654u: goto L_088A6830;
    case 655u: goto L_088A6848;
    case 656u: goto L_088A6854;
    case 657u: goto L_088A685C;
    case 658u: goto L_088A6868;
    case 659u: goto L_088A6878;
    case 660u: goto L_088A6884;
    case 661u: goto L_088A6894;
    case 662u: goto L_088A68AC;
    case 663u: goto L_088A68B4;
    case 664u: goto L_088A68C8;
    case 665u: goto L_088A68D8;
    case 666u: goto L_088A68E0;
    case 667u: goto L_088A68F0;
    case 668u: goto L_088A6908;
    case 669u: goto L_088A6910;
    case 670u: goto L_088A6924;
    case 671u: goto L_088A693C;
    case 672u: goto L_088A6940;
    case 673u: goto L_088A6944;
    case 674u: goto L_088A6950;
    case 675u: goto L_088A6958;
    case 676u: goto L_088A6990;
    case 677u: goto L_088A6998;
    case 678u: goto L_088A69AC;
    case 679u: goto L_088A69B4;
    case 680u: goto L_088A69BC;
    case 681u: goto L_088A69C4;
    case 682u: goto L_088A69CC;
    case 683u: goto L_088A69F0;
    case 684u: goto L_088A69F8;
    case 685u: goto L_088A6A0C;
    case 686u: goto L_088A6A14;
    case 687u: goto L_088A6A1C;
    case 688u: goto L_088A6A2C;
    case 689u: goto L_088A6A38;
    case 690u: goto L_088A6A48;
    case 691u: goto L_088A6A50;
    case 692u: goto L_088A6A58;
    case 693u: goto L_088A6A60;
    case 694u: goto L_088A6A70;
    case 695u: goto L_088A6A80;
    case 696u: goto L_088A6A88;
    case 697u: goto L_088A6A98;
    case 698u: goto L_088A6AA4;
    case 699u: goto L_088A6ABC;
    case 700u: goto L_088A6AE0;
    case 701u: goto L_088A6AE8;
    case 702u: goto L_088A6AFC;
    case 703u: goto L_088A6B14;
    case 704u: goto L_088A6B28;
    case 705u: goto L_088A6B3C;
    case 706u: goto L_088A6B54;
    case 707u: goto L_088A6B68;
    case 708u: goto L_088A6B7C;
    case 709u: goto L_088A6B94;
    case 710u: goto L_088A6BA0;
    case 711u: goto L_088A6BA8;
    case 712u: goto L_088A6BAC;
    case 713u: goto L_088A6BBC;
    case 714u: goto L_088A6BC4;
    case 715u: goto L_088A6C34;
    case 716u: goto L_088A6C64;
    case 717u: goto L_088A6CA0;
    case 718u: goto L_088A6CD8;
    case 719u: goto L_088A6CF4;
    case 720u: goto L_088A6CFC;
    case 721u: goto L_088A6D08;
    case 722u: goto L_088A6D14;
    case 723u: goto L_088A6D18;
    case 724u: goto L_088A6D34;
    case 725u: goto L_088A6D3C;
    case 726u: goto L_088A6D48;
    case 727u: goto L_088A6D50;
    case 728u: goto L_088A6D5C;
    case 729u: goto L_088A6D64;
    case 730u: goto L_088A6D70;
    case 731u: goto L_088A6D80;
    case 732u: goto L_088A6D88;
    case 733u: goto L_088A6D90;
    case 734u: goto L_088A6D98;
    case 735u: goto L_088A6DA8;
    case 736u: goto L_088A6DB0;
    case 737u: goto L_088A6DB8;
    case 738u: goto L_088A6DC0;
    case 739u: goto L_088A6DD0;
    case 740u: goto L_088A6DD8;
    case 741u: goto L_088A6DE0;
    case 742u: goto L_088A6DEC;
    case 743u: goto L_088A6DF8;
    case 744u: goto L_088A6E08;
    case 745u: goto L_088A6E14;
    case 746u: goto L_088A6E24;
    case 747u: goto L_088A6E40;
    case 748u: goto L_088A6E4C;
    case 749u: goto L_088A6E54;
    case 750u: goto L_088A6E80;
    case 751u: goto L_088A6E88;
    case 752u: goto L_088A6E98;
    case 753u: goto L_088A6EA0;
    case 754u: goto L_088A6ECC;
    case 755u: goto L_088A6ED4;
    case 756u: goto L_088A6EE4;
    case 757u: goto L_088A6EEC;
    case 758u: goto L_088A6F20;
    case 759u: goto L_088A6F28;
    case 760u: goto L_088A6F38;
    case 761u: goto L_088A6F40;
    case 762u: goto L_088A6F74;
    case 763u: goto L_088A6F7C;
    case 764u: goto L_088A6F8C;
    case 765u: goto L_088A6F94;
    case 766u: goto L_088A6FC4;
    case 767u: goto L_088A6FCC;
    case 768u: goto L_088A6FFC;
    case 769u: goto L_088A7004;
    case 770u: goto L_088A7038;
    case 771u: goto L_088A7040;
    case 772u: goto L_088A7070;
    case 773u: goto L_088A7078;
    case 774u: goto L_088A7080;
    case 775u: goto L_088A70B0;
    case 776u: goto L_088A70C4;
    case 777u: goto L_088A70C8;
    case 778u: goto L_088A70D0;
    case 779u: goto L_088A7100;
    case 780u: goto L_088A7114;
    case 781u: goto L_088A711C;
    case 782u: goto L_088A7150;
    case 783u: goto L_088A7158;
    case 784u: goto L_088A718C;
    case 785u: goto L_088A7194;
    case 786u: goto L_088A71C4;
    case 787u: goto L_088A71CC;
    case 788u: goto L_088A7200;
    case 789u: goto L_088A7208;
    case 790u: goto L_088A723C;
    case 791u: goto L_088A7244;
    case 792u: goto L_088A7278;
    case 793u: goto L_088A7280;
    case 794u: goto L_088A72B0;
    case 795u: goto L_088A72B8;
    case 796u: goto L_088A72E4;
    case 797u: goto L_088A72EC;
    case 798u: goto L_088A7318;
    case 799u: goto L_088A7320;
    case 800u: goto L_088A7350;
    case 801u: goto L_088A7358;
    case 802u: goto L_088A7388;
    case 803u: goto L_088A7390;
    case 804u: goto L_088A73C4;
    case 805u: goto L_088A73CC;
    case 806u: goto L_088A73FC;
    case 807u: goto L_088A7404;
    case 808u: goto L_088A7414;
    case 809u: goto L_088A741C;
    case 810u: goto L_088A7444;
    case 811u: goto L_088A744C;
    case 812u: goto L_088A7474;
    case 813u: goto L_088A747C;
    case 814u: goto L_088A74A4;
    case 815u: goto L_088A74AC;
    case 816u: goto L_088A74D4;
    case 817u: goto L_088A74DC;
    case 818u: goto L_088A7504;
    case 819u: goto L_088A750C;
    case 820u: goto L_088A7534;
    case 821u: goto L_088A753C;
    case 822u: goto L_088A7564;
    case 823u: goto L_088A756C;
    case 824u: goto L_088A7594;
    case 825u: goto L_088A759C;
    case 826u: goto L_088A75C4;
    case 827u: goto L_088A75CC;
    case 828u: goto L_088A75F4;
    case 829u: goto L_088A75FC;
    case 830u: goto L_088A760C;
    case 831u: goto L_088A7614;
    case 832u: goto L_088A7640;
    case 833u: goto L_088A7648;
    case 834u: goto L_088A7678;
    case 835u: goto L_088A7680;
    case 836u: goto L_088A76AC;
    case 837u: goto L_088A76B4;
    case 838u: goto L_088A76E4;
    case 839u: goto L_088A76EC;
    case 840u: goto L_088A771C;
    case 841u: goto L_088A7720;
    case 842u: goto L_088A7728;
    case 843u: goto L_088A7758;
    case 844u: goto L_088A7760;
    case 845u: goto L_088A7768;
    case 846u: goto L_088A7774;
    case 847u: goto L_088A7784;
    case 848u: goto L_088A77B4;
    case 849u: goto L_088A77BC;
    case 850u: goto L_088A77C8;
    case 851u: goto L_088A77F8;
    case 852u: goto L_088A77FC;
    case 853u: goto L_088A7804;
    case 854u: goto L_088A7838;
    case 855u: goto L_088A7840;
    case 856u: goto L_088A7874;
    case 857u: goto L_088A787C;
    case 858u: goto L_088A78B0;
    case 859u: goto L_088A78B8;
    case 860u: goto L_088A78EC;
    case 861u: goto L_088A78F4;
    case 862u: goto L_088A7924;
    case 863u: goto L_088A792C;
    case 864u: goto L_088A7958;
    case 865u: goto L_088A7960;
    case 866u: goto L_088A796C;
    case 867u: goto L_088A7974;
    case 868u: goto L_088A7998;
    case 869u: goto L_088A79A0;
    case 870u: goto L_088A79A8;
    case 871u: goto L_088A79B4;
    case 872u: goto L_088A79BC;
    case 873u: goto L_088A79C4;
    case 874u: goto L_088A79CC;
    case 875u: goto L_088A79F4;
    case 876u: goto L_088A79FC;
    case 877u: goto L_088A7A04;
    case 878u: goto L_088A7A2C;
    case 879u: goto L_088A7A34;
    case 880u: goto L_088A7A3C;
    case 881u: goto L_088A7A64;
    case 882u: goto L_088A7A68;
    case 883u: goto L_088A7A70;
    case 884u: goto L_088A7A94;
    case 885u: goto L_088A7AB8;
    case 886u: goto L_088A7AC0;
    case 887u: goto L_088A7AEC;
    case 888u: goto L_088A7B00;
    case 889u: goto L_088A7B04;
    case 890u: goto L_088A7B0C;
    case 891u: goto L_088A7B4C;
    case 892u: goto L_088A7B60;
    case 893u: goto L_088A7B64;
    case 894u: goto L_088A7B6C;
    case 895u: goto L_088A7BB0;
    case 896u: goto L_088A7BC4;
    case 897u: goto L_088A7BC8;
    case 898u: goto L_088A7BD0;
    case 899u: goto L_088A7C14;
    case 900u: goto L_088A7C28;
    case 901u: goto L_088A7C2C;
    case 902u: goto L_088A7C34;
    case 903u: goto L_088A7C40;
    case 904u: goto L_088A7C48;
    case 905u: goto L_088A7C58;
    case 906u: goto L_088A7C60;
    case 907u: goto L_088A7C70;
    case 908u: goto L_088A7C78;
    case 909u: goto L_088A7C88;
    case 910u: goto L_088A7C90;
    case 911u: goto L_088A7CA0;
    case 912u: goto L_088A7CA4;
    case 913u: goto L_088A7CAC;
    case 914u: goto L_088A7CC0;
    case 915u: goto L_088A7CD0;
    case 916u: goto L_088A7CD4;
    case 917u: goto L_088A7CDC;
    case 918u: goto L_088A7CF0;
    case 919u: goto L_088A7D00;
    case 920u: goto L_088A7D08;
    case 921u: goto L_088A7D18;
    case 922u: goto L_088A7D20;
    case 923u: goto L_088A7D30;
    case 924u: goto L_088A7D38;
    case 925u: goto L_088A7D48;
    case 926u: goto L_088A7D50;
    case 927u: goto L_088A7D60;
    case 928u: goto L_088A7D68;
    case 929u: goto L_088A7D78;
    case 930u: goto L_088A7D80;
    case 931u: goto L_088A7D90;
    case 932u: goto L_088A7D94;
    case 933u: goto L_088A7D9C;
    case 934u: goto L_088A7DB0;
    case 935u: goto L_088A7DC0;
    case 936u: goto L_088A7DC8;
    case 937u: goto L_088A7DD8;
    case 938u: goto L_088A7DE4;
    case 939u: goto L_088A7DEC;
    case 940u: goto L_088A7DF4;
    case 941u: goto L_088A7E04;
    case 942u: goto L_088A7E08;
    case 943u: goto L_088A7E2C;
    case 944u: goto L_088A7E4C;
    case 945u: goto L_088A7E54;
    case 946u: goto L_088A7E78;
    case 947u: goto L_088A7E84;
    case 948u: goto L_088A7E8C;
    case 949u: goto L_088A7EA0;
    case 950u: goto L_088A7EA8;
    case 951u: goto L_088A7EB4;
    case 952u: goto L_088A7EC0;
    case 953u: goto L_088A7ECC;
    case 954u: goto L_088A7ED4;
    case 955u: goto L_088A7EE8;
    case 956u: goto L_088A7EF0;
    case 957u: goto L_088A7EFC;
    case 958u: goto L_088A7F08;
    case 959u: goto L_088A7F14;
    case 960u: goto L_088A7F24;
    case 961u: goto L_088A7F2C;
    case 962u: goto L_088A7F34;
    case 963u: goto L_088A7F44;
    case 964u: goto L_088A7F4C;
    case 965u: goto L_088A7F5C;
    case 966u: goto L_088A7F64;
    case 967u: goto L_088A7F74;
    case 968u: goto L_088A7F78;
    case 969u: goto L_088A7F7C;
    case 970u: goto L_088A7F94;
    case 971u: goto L_088A7FBC;
    case 972u: goto L_088A7FC8;
    case 973u: goto L_088A7FD0;
    case 974u: goto L_088A7FE0;
    case 975u: goto L_088A7FEC;
    case 976u: goto L_088A7FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088A4000:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 665u, 0x088A3F84u>(ctx, &aot_mem); return;
L_088A4008:
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    goto L_088A400C;
L_088A400C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088A401C;
      }
      goto L_088A4014;
    }
L_088A4014:
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 664u, 0x088A3F78u>(ctx, &aot_mem); return;
L_088A401C:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 664u, 0x088A3F78u>(ctx, &aot_mem); return;
L_088A4024:
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    goto L_088A400C;
L_088A402C:
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_088A400C;
L_088A4034:
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_088A400C;
L_088A403C:
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_088A400C;
L_088A4044:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088A400C;
L_088A404C:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(30584));
    (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 667u, 0x088A3FA0u>(ctx, &aot_mem); return;
L_088A4058:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(3, ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(9, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088A4114;
      }
      goto L_088A408C;
    }
L_088A408C:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(30624));
    goto L_088A4094;
L_088A4094:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(10, 2248u << 16u);
      if (branch_taken) {
          goto L_088A40F4;
      }
      goto L_088A409C;
    }
L_088A409C:
    ctx.set_gpr(16, ctx.gpr[10] + static_cast<std::uint32_t>(4880));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x088A40B0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(127));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 639u, 0x0888F250u>(ctx, &aot_mem) && ctx.pc == 0x088A40B0u) goto L_088A40B0;
    return;
L_088A40B0:
    ctx.set_gpr(9, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(18596)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[9] + static_cast<std::uint32_t>(18596));
      if (branch_taken) {
          goto L_088A40E0;
      }
      goto L_088A40C0;
    }
L_088A40C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_088A40C4;
L_088A40C4:
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
L_088A40E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A40ECu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A40ECu) goto L_088A40EC;
    return;
L_088A40EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_088A40C4;
L_088A40F4:
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[8] + static_cast<std::uint32_t>(18596));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(18596)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.set_gpr(31, 0x088A410Cu);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A410Cu) goto L_088A410C;
    return;
L_088A410C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_088A40C4;
L_088A4114:
    ctx.set_gpr(4, ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(25, ctx.gpr[9] << 3u);
      if (branch_taken) {
          goto L_088A412C;
      }
      goto L_088A4120;
    }
L_088A4120:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(30660));
    goto L_088A4094;
L_088A412C:
    ctx.set_gpr(24, ctx.gpr[5] << 1u);
    ctx.set_gpr(16, ctx.gpr[24] + ctx.gpr[5]);
    ctx.set_gpr(20, ctx.gpr[25] + ctx.gpr[9]);
    ctx.set_gpr(15, ctx.gpr[16] << 2u);
    ctx.set_gpr(14, ctx.gpr[20] << 3u);
    ctx.set_gpr(13, 2245u << 16u);
    ctx.set_gpr(12, ctx.gpr[14] + ctx.gpr[15]);
    ctx.set_gpr(11, ctx.gpr[13] + static_cast<std::uint32_t>(17956));
    ctx.set_gpr(16, ctx.gpr[12] + ctx.gpr[11]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
        goto L_088A4194;
    }
    goto L_088A415C;
L_088A415C:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(30700));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(8, 2248u << 16u);
      if (branch_taken) {
          goto L_088A41C4;
      }
      goto L_088A416C;
    }
L_088A416C:
    ctx.set_gpr(20, ctx.gpr[8] + static_cast<std::uint32_t>(4880));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x088A4180u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(127));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 639u, 0x0888F250u>(ctx, &aot_mem) && ctx.pc == 0x088A4180u) goto L_088A4180;
    return;
L_088A4180:
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(18596)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(18596));
      if (branch_taken) {
          goto L_088A41B0;
      }
      goto L_088A4190;
    }
L_088A4190:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_088A4194;
L_088A4194:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
      if (branch_taken) {
          goto L_088A41A4;
      }
      goto L_088A419C;
    }
L_088A419C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    goto L_088A40C0;
L_088A41A4:
    ctx.set_gpr(18, 2225u << 16u);
    ctx.set_gpr(17, ctx.gpr[18] + static_cast<std::uint32_t>(30528));
    goto L_088A419C;
L_088A41B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A41BCu);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A41BCu) goto L_088A41BC;
    return;
L_088A41BC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_088A4194;
L_088A41C4:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(18596));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18596)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.set_gpr(31, 0x088A41DCu);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A41DCu) goto L_088A41DC;
    return;
L_088A41DC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_088A4194;
L_088A41E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18624)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088A4320;
      }
      goto L_088A420C;
    }
L_088A420C:
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(18744));
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(18632));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(23384), ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(22344));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(23380), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + 0u);
    goto L_088A4238;
L_088A4238:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[3] < static_cast<std::uint32_t>(512) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A4238;
      }
      goto L_088A424C;
    }
L_088A424C:
    ctx.set_gpr(10, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[10] + static_cast<std::uint32_t>(22856));
    ctx.set_gpr(3, 0u + 0u);
    goto L_088A4258;
L_088A4258:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[3] < static_cast<std::uint32_t>(512) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A4258;
      }
      goto L_088A426C;
    }
L_088A426C:
    ctx.set_gpr(12, 2245u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(448));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088A4284u);
    ctx.set_gpr(16, ctx.gpr[12] + static_cast<std::uint32_t>(23368));
    ctx.pc = 0x08B0DFCCu;
    return;
L_088A4284:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088A4320;
      }
      goto L_088A428C;
    }
L_088A428C:
    ctx.set_gpr(13, 2245u << 16u);
    ctx.set_gpr(18, ctx.gpr[13] + static_cast<std::uint32_t>(23392));
    ctx.set_gpr(19, ctx.gpr[16] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(14, ctx.gpr[17] << 2u);
    goto L_088A42A0;
L_088A42A0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088A42B4u);
    ctx.set_gpr(16, ctx.gpr[14] + ctx.gpr[18]);
    ctx.pc = 0x08B0DFCCu;
    return;
L_088A42B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088A42FC;
      }
      goto L_088A42BC;
    }
L_088A42BC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.set_gpr(14, ctx.gpr[17] << 2u);
      if (branch_taken) {
          goto L_088A42A0;
      }
      goto L_088A42CC;
    }
L_088A42CC:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18624), ctx.gpr[16]);
    goto L_088A42D8;
L_088A42D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A42FC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_088A4318;
      }
      goto L_088A4308;
    }
L_088A4308:
    ctx.set_gpr(31, 0x088A4310u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08B0DFD4u;
    return;
L_088A4310:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_088A4308;
      }
      goto L_088A4318;
    }
L_088A4318:
    ctx.set_gpr(31, 0x088A4320u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B0DFD4u;
    return;
L_088A4320:
    ctx.set_gpr(17, 32836u << 16u);
    ctx.set_gpr(3, ctx.gpr[17] | 1u);
    goto L_088A42D8;
L_088A432C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(21, 2245u << 16u);
    ctx.set_gpr(8, 2225u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18624)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(3, 32836u << 16u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[8] + static_cast<std::uint32_t>(30780));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(6, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(19, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(10, ctx.gpr[3] | 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[8];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088A4424;
      }
      goto L_088A4380;
    }
L_088A4380:
    ctx.set_gpr(31, 0x088A4388u);
    ctx.set_gpr(20, 2245u << 16u);
    ctx.pc = 0x08B0DDF4u;
    return;
L_088A4388:
    ctx.set_gpr(4, 2186u << 16u);
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(17844));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(30796));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(23388), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088A4424;
      }
      goto L_088A43B4;
    }
L_088A43B4:
    ctx.set_gpr(13, 32836u << 16u);
    ctx.set_gpr(12, 2245u << 16u);
    ctx.set_gpr(16, ctx.gpr[13] | 18u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(18628), 0u);
    ctx.set_gpr(31, 0x088A43CCu);
    ctx.set_gpr(18, ctx.gpr[20] + static_cast<std::uint32_t>(23368));
    ctx.pc = 0x08B0DDE4u;
    return;
L_088A43CC:
    ctx.set_gpr(7, 32770u << 16u);
    ctx.set_gpr(5, ctx.gpr[7] | 403u);
    ctx.set_gpr(11, 32836u << 16u);
    ctx.set_gpr(10, ctx.gpr[2] ^ ctx.gpr[5]);
    ctx.set_gpr(9, ctx.gpr[11] | 3u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    if (ctx.gpr[10] != 0u) ctx.set_gpr(16, ctx.gpr[9]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(23368), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088A4410;
      }
      goto L_088A43F8;
    }
L_088A43F8:
    ctx.set_gpr(14, 32836u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(31, 0x088A4408u);
    ctx.set_gpr(16, ctx.gpr[14] | 3u);
    ctx.pc = 0x08B0DD7Cu;
    return;
L_088A4408:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10000));
      if (branch_taken) {
          goto L_088A444C;
      }
      goto L_088A4410;
    }
L_088A4410:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(23388)));
    ctx.set_gpr(31, 0x088A441Cu);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08B0DD74u;
    return;
L_088A441C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(23388), ctx.gpr[17]);
    ctx.set_gpr(10, ctx.gpr[16] + 0u);
    goto L_088A4424;
L_088A4424:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[10] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A444C:
    ctx.set_gpr(31, 0x088A4454u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.pc = 0x08B0DD34u;
    return;
L_088A4454:
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18624), ctx.gpr[15]);
    ctx.set_gpr(10, ctx.gpr[16] + 0u);
    goto L_088A4424;
L_088A4464:
    ctx.set_gpr(6, 0u | 65408u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(9, ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[5] + static_cast<std::uint32_t>(-64));
    ctx.set_gpr(4, 32836u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[10] ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(6, ctx.gpr[4] | 16u);
      if (branch_taken) {
          goto L_088A44C4;
      }
      goto L_088A448C;
    }
L_088A448C:
    ctx.set_gpr(3, 32836u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] & 63u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, ctx.gpr[3] | 17u);
      if (branch_taken) {
          goto L_088A44C4;
      }
      goto L_088A449C;
    }
L_088A449C:
    ctx.set_gpr(9, 2245u << 16u);
    ctx.set_gpr(7, ctx.gpr[8] << 2u);
    ctx.set_gpr(2, 32836u << 16u);
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(23392));
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(6, ctx.gpr[2] | 17u);
      if (branch_taken) {
          goto L_088A44C4;
      }
      goto L_088A44B8;
    }
L_088A44B8:
    ctx.set_gpr(31, 0x088A44C0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0DFECu;
    return;
L_088A44C0:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_088A44C4;
L_088A44C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A44D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(10, 0u | 32768u);
    ctx.set_gpr(2, 32836u << 16u);
    ctx.set_gpr(11, ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[2] | 16u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(9, ctx.gpr[10] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_088A452C;
      }
      goto L_088A44F4;
    }
L_088A44F4:
    ctx.set_gpr(11, 32836u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(8, ctx.gpr[11] | 10u);
      if (branch_taken) {
          goto L_088A452C;
      }
      goto L_088A4504;
    }
L_088A4504:
    ctx.set_gpr(12, 2245u << 16u);
    ctx.set_gpr(8, ctx.gpr[4] << 2u);
    ctx.set_gpr(9, ctx.gpr[12] + static_cast<std::uint32_t>(23392));
    ctx.set_gpr(4, 32836u << 16u);
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(8, ctx.gpr[4] | 10u);
      if (branch_taken) {
          goto L_088A452C;
      }
      goto L_088A4520;
    }
L_088A4520:
    ctx.set_gpr(31, 0x088A4528u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0DFB4u;
    return;
L_088A4528:
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    goto L_088A452C;
L_088A452C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[8] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A453C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] << 2u);
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(23392));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[8]);
    ctx.set_gpr(7, 32836u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(2, ctx.gpr[7] | 16u);
      if (branch_taken) {
          goto L_088A456C;
      }
      goto L_088A4564;
    }
L_088A4564:
    ctx.set_gpr(31, 0x088A456Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0DFDCu;
    return;
L_088A456C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4578:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] << 2u);
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(23392));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(6, 32836u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(2, ctx.gpr[6] | 16u);
      if (branch_taken) {
          goto L_088A45A8;
      }
      goto L_088A45A0;
    }
L_088A45A0:
    ctx.set_gpr(31, 0x088A45A8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0DFE4u;
    return;
L_088A45A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A45B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(18628)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_088A4704;
      }
      goto L_088A45F4;
    }
L_088A45F4:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(7, ctx.gpr[8] << 3u);
    ctx.set_gpr(5, ctx.gpr[7] - ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[5] << 8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    goto L_088A4618;
L_088A4618:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(10, 2245u << 16u);
    ctx.set_gpr(9, ctx.gpr[10] + static_cast<std::uint32_t>(18760));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(20, ctx.gpr[4] + ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    goto L_088A4634;
L_088A4634:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[4] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A4634;
      }
      goto L_088A4648;
    }
L_088A4648:
    ctx.set_gpr(13, 2245u << 16u);
    ctx.set_gpr(12, ctx.gpr[13] + static_cast<std::uint32_t>(22344));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[12]);
    ctx.set_gpr(19, ctx.gpr[12] + 0u);
    ctx.set_gpr(23, 0u + 0u);
    goto L_088A465C;
L_088A465C:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.set_gpr(18, ctx.gpr[23] << 6u);
      if (branch_taken) {
          goto L_088A4774;
      }
      goto L_088A4668;
    }
L_088A4668:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_088A466C;
L_088A466C:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, static_cast<std::int32_t>(ctx.gpr[23]) < 8 ? 1u : 0u);
    ctx.set_gpr(14, ctx.gpr[15] + static_cast<std::uint32_t>(64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[14]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088A465C;
      }
      goto L_088A4684;
    }
L_088A4684:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[23] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(24, ctx.gpr[16] | ctx.gpr[17]);
    ctx.set_gpr(19, static_cast<std::int32_t>(ctx.gpr[25]) < 16 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[24]);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
      if (branch_taken) {
          goto L_088A4618;
      }
      goto L_088A46B4;
    }
L_088A46B4:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(13, 2245u << 16u);
      if (branch_taken) {
          goto L_088A4754;
      }
      goto L_088A46C0;
    }
L_088A46C0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_088A46C4;
L_088A46C4:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[12] - ctx.gpr[6]);
    ctx.set_gpr(30, ctx.gpr[4] << 8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(10, ctx.gpr[22] + static_cast<std::uint32_t>(18760));
    ctx.set_gpr(5, 0u | 32768u);
    ctx.set_gpr(31, 0x088A46ECu);
    ctx.set_gpr(6, ctx.gpr[30] + ctx.gpr[10]);
    ctx.pc = 0x08B0DFACu;
    return;
L_088A46EC:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18628)));
    ctx.set_gpr(8, ctx.gpr[9] ^ 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
      if (branch_taken) {
          goto L_088A45F4;
      }
      goto L_088A4704;
    }
L_088A4704:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088A4718u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B0DFACu;
    return;
L_088A4718:
    ctx.set_gpr(31, 0x088A4720u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.pc = 0x08B0DE84u;
    return;
L_088A4720:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4754:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(23388)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088A476Cu);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = 0x08B0DDDCu;
    return;
L_088A476C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_088A46C4;
L_088A4774:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(15, ctx.gpr[3] & 1024u);
    { const bool branch_taken = ctx.gpr[15] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088A47E8;
      }
      goto L_088A478C;
    }
L_088A478C:
    ctx.set_gpr(21, ctx.gpr[3] & 256u);
    if (ctx.gpr[21] != 0u) {
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_088A4C74;
    }
    goto L_088A4798;
L_088A4798:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(13, 2245u << 16u);
      if (branch_taken) {
          goto L_088A47EC;
      }
      goto L_088A47A4;
    }
L_088A47A4:
    ctx.set_gpr(22, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(23384)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    goto L_088A47B4;
L_088A47B4:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, ctx.gpr[5] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A47B4;
      }
      goto L_088A47C8;
    }
L_088A47C8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[25];
    ctx.set_gpr(30, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088A4BD8;
      }
      goto L_088A47D8;
    }
L_088A47D8:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088A4B64;
      }
      goto L_088A47E0;
    }
L_088A47E0:
    if (ctx.gpr[3] == ctx.gpr[5]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_088A4AB0;
    }
    goto L_088A47E8;
L_088A47E8:
    ctx.set_gpr(13, 2245u << 16u);
    goto L_088A47EC;
L_088A47EC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(23384)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(12, 2245u << 16u);
    ctx.set_gpr(21, 33026u << 16u);
    ctx.set_gpr(11, ctx.gpr[12] + static_cast<std::uint32_t>(22856));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(22344));
    ctx.set_gpr(13, ctx.gpr[18] + ctx.gpr[11]);
    ctx.set_gpr(16, ctx.gpr[21] | 1033u);
    ctx.set_gpr(15, 0u + 0u);
    ctx.set_gpr(11, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(14, ctx.gpr[25] + 0u);
    ctx.set_gpr(24, 16u << 16u);
    ctx.set_gpr(21, 1u << 16u);
    goto L_088A4820;
L_088A4820:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(22, ctx.gpr[6] & ctx.gpr[24]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(127));
      if (branch_taken) {
          goto L_088A4AA8;
      }
      goto L_088A4830;
    }
L_088A4830:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[5]);
    ctx.set_gpr(9, ctx.gpr[3] << 7u);
    ctx.set_gpr(8, ctx.gpr[9] - ctx.gpr[3]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(30, ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) < 0;
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
      if (branch_taken) {
          goto L_088A4AA0;
      }
      goto L_088A4854;
    }
L_088A4854:
    ctx.set_gpr(10, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(60), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088A48C4;
      }
      goto L_088A4864;
    }
L_088A4864:
    ctx.set_gpr(10, ctx.gpr[6] + 0u);
    ctx.set_gpr(10, (ctx.gpr[10] & ~0x00100000u) | ((0u & 0x00000001u) << 20u));
    ctx.set_gpr(6, ctx.gpr[10] & ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(60), 0u);
      if (branch_taken) {
          goto L_088A4A44;
      }
      goto L_088A487C;
    }
L_088A487C:
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(30, rt.memory().aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(50)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(10, (ctx.gpr[10] & ~0x00010000u) | ((0u & 0x00000001u) << 16u));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    goto L_088A48B4;
L_088A48B4:
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[30]));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(44), ctx.gpr[12]);
    goto L_088A48C4;
L_088A48C4:
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[17]);
    goto L_088A48C8;
L_088A48C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[3] & 256u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088A48E4;
      }
      goto L_088A48D8;
    }
L_088A48D8:
    ctx.set_gpr(12, ctx.gpr[3] & 512u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A49B8;
      }
      goto L_088A48E4;
    }
L_088A48E4:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(22, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, ctx.gpr[15] << 2u);
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.set_gpr(2, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.set_gpr(30, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.gpr[30] + ctx.gpr[2]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 6u));
    ctx.set_gpr(30, ctx.gpr[4] - ctx.gpr[8]);
    ctx.set_gpr(5, ctx.hi);
    ctx.set_gpr(9, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 6u));
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[10]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 31u));
    ctx.set_gpr(4, ctx.gpr[7] >> 20u);
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[4]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 12u));
    ctx.set_gpr(30, ctx.lo);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 31u));
    ctx.set_gpr(9, ctx.gpr[5] >> 20u);
    ctx.set_gpr(22, ctx.gpr[30] + ctx.gpr[9]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 12u));
    goto L_088A4964;
L_088A4964:
    ctx.set_gpr(9, ctx.gpr[12] + ctx.gpr[20]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(12, ctx.gpr[3] + ctx.gpr[10]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[30] : ctx.gpr[12]);
    ctx.set_gpr(22, static_cast<std::int32_t>(ctx.gpr[6]) < -32768 ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[10] + ctx.gpr[8]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[30] : ctx.gpr[2]);
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < -32768 ? 1u : 0u);
    if (ctx.gpr[22] != 0u) ctx.set_gpr(6, ctx.gpr[5]);
    if (ctx.gpr[4] != 0u) ctx.set_gpr(3, ctx.gpr[5]);
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[15]) < 28 ? 1u : 0u);
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_088A4820;
      }
      goto L_088A49B0;
    }
L_088A49B0:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_088A466C;
L_088A49B8:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(12, ctx.gpr[15] << 2u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.gpr[12] + ctx.gpr[25]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(22, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(9, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 31u));
    ctx.set_gpr(2, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.set_gpr(8, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.gpr[8] + ctx.gpr[2]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 6u));
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[6]);
    ctx.set_gpr(30, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.gpr[30] + ctx.gpr[9]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 6u));
    ctx.set_gpr(2, ctx.gpr[9] - ctx.gpr[10]);
    ctx.set_gpr(4, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(30, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(7, ctx.gpr[30] >> 20u);
    ctx.set_gpr(8, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 12u));
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.set_gpr(5, ctx.gpr[3] >> 20u);
    ctx.set_gpr(22, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 12u));
    goto L_088A4964;
L_088A4A44:
    ctx.set_gpr(6, 2u << 16u);
    ctx.set_gpr(7, ctx.gpr[10] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(3, 4u << 16u);
      if (branch_taken) {
          goto L_088A4A80;
      }
      goto L_088A4A54;
    }
L_088A4A54:
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(30, rt.memory().aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(50)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(10, (ctx.gpr[10] & ~0x00020000u) | ((0u & 0x00000001u) << 17u));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    goto L_088A48B4;
L_088A4A80:
    ctx.set_gpr(4, ctx.gpr[10] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_088A48C8;
      }
      goto L_088A4A8C;
    }
L_088A4A8C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(10, (ctx.gpr[10] & ~0x00040000u) | ((0u & 0x00000001u) << 18u));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    goto L_088A48C8;
L_088A4AA0:
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(52), 0u);
    goto L_088A4854;
L_088A4AA8:
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(52), ctx.gpr[10]);
    goto L_088A48C4;
L_088A4AB0:
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[3]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(13, 2245u << 16u);
      if (branch_taken) {
          goto L_088A47EC;
      }
      goto L_088A4ABC;
    }
L_088A4ABC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), 0u);
        goto L_088A4B5C;
    }
    goto L_088A4AD0;
L_088A4AD0:
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(23380)));
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[5]);
    ctx.set_gpr(7, 0u + 0u);
    goto L_088A4AE0;
L_088A4AE0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[7] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A4AE0;
      }
      goto L_088A4AFC;
    }
L_088A4AFC:
    ctx.set_gpr(7, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(23380)));
    ctx.set_gpr(2, ctx.gpr[7] + static_cast<std::uint32_t>(22392));
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[2]);
    goto L_088A4B0C;
L_088A4B0C:
    ctx.set_gpr(31, 0x088A4B14u);
    // nop
    goto L_088A4ED0;
L_088A4B14:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_088A4B48;
      }
      goto L_088A4B20;
    }
L_088A4B20:
    if (ctx.gpr[2] == ctx.gpr[10]) {
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
        goto L_088A4B38;
    }
    goto L_088A4B28;
L_088A4B28:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[15] + static_cast<std::uint32_t>(16));
    goto L_088A4B30;
L_088A4B30:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_088A47E8;
L_088A4B38:
    ctx.set_gpr(12, ctx.gpr[11] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[11]);
    goto L_088A47E8;
L_088A4B48:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[14]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[13]);
    goto L_088A47E8;
L_088A4B5C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), 0u);
    goto L_088A47E8;
L_088A4B64:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(13, 2245u << 16u);
      if (branch_taken) {
          goto L_088A47EC;
      }
      goto L_088A4B6C;
    }
L_088A4B6C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), 0u);
        goto L_088A4B5C;
    }
    goto L_088A4B84;
L_088A4B84:
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(23380)));
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[5]);
    ctx.set_gpr(7, 0u + 0u);
    goto L_088A4B94;
L_088A4B94:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[7] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A4B94;
      }
      goto L_088A4BB0;
    }
L_088A4BB0:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(12, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(23380)));
    ctx.set_gpr(7, ctx.gpr[10] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.set_gpr(11, ctx.gpr[12] + static_cast<std::uint32_t>(22392));
    ctx.set_gpr(31, 0x088A4BD0u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[11]);
    goto L_088A4ED0;
L_088A4BD0:
    ctx.set_gpr(13, 2245u << 16u);
    goto L_088A47EC;
L_088A4BD8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[3]) < 16 ? 1u : 0u);
    if (ctx.gpr[13] != 0u) {
    ctx.set_gpr(13, 2245u << 16u);
        goto L_088A47EC;
    }
    goto L_088A4BE8;
L_088A4BE8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(15, ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    if (ctx.gpr[14] != 0u) {
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
        goto L_088A4C3C;
    }
    goto L_088A4BFC;
L_088A4BFC:
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(23380)));
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[5]);
    ctx.set_gpr(7, 0u + 0u);
    goto L_088A4C0C;
L_088A4C0C:
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[7] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A4C0C;
      }
      goto L_088A4C28;
    }
L_088A4C28:
    ctx.set_gpr(30, 2245u << 16u);
    goto L_088A4C2C;
L_088A4C2C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(23380)));
    ctx.set_gpr(25, ctx.gpr[30] + static_cast<std::uint32_t>(22392));
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[25]);
    goto L_088A4B0C;
L_088A4C3C:
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(23380)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[21]);
    ctx.set_gpr(7, 0u + 0u);
    goto L_088A4C50;
L_088A4C50:
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(22, ctx.gpr[7] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A4C50;
      }
      goto L_088A4C6C;
    }
L_088A4C6C:
    ctx.set_gpr(30, 2245u << 16u);
    goto L_088A4C2C;
L_088A4C74:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.set_gpr(13, 2245u << 16u);
      if (branch_taken) {
          goto L_088A47EC;
      }
      goto L_088A4C7C;
    }
L_088A4C7C:
    ctx.set_gpr(17, 2245u << 16u);
    ctx.set_gpr(16, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(23384)));
      if (branch_taken) {
          goto L_088A4D20;
      }
      goto L_088A4C8C;
    }
L_088A4C8C:
    ctx.set_gpr(24, ctx.gpr[3] & 512u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088A4CF4;
      }
      goto L_088A4C98;
    }
L_088A4C98:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
      if (branch_taken) {
          goto L_088A4CC8;
      }
      goto L_088A4CAC;
    }
L_088A4CAC:
    ctx.set_gpr(5, ctx.gpr[21] + ctx.gpr[5]);
    goto L_088A4CB0;
L_088A4CB0:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x088A4CBCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(56));
    goto L_088A4EA4;
L_088A4CBC:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[21] + static_cast<std::uint32_t>(56));
    goto L_088A4B30;
L_088A4CC8:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088A4CD4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(112));
    goto L_088A4E80;
L_088A4CD4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + ctx.gpr[7]);
    ctx.set_gpr(31, 0x088A4CECu);
    ctx.set_gpr(6, ctx.gpr[3] - ctx.gpr[7]);
    goto L_088A4EA4;
L_088A4CEC:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), 0u);
    goto L_088A4B5C;
L_088A4CF4:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
      if (branch_taken) {
          goto L_088A4CC8;
      }
      goto L_088A4D08;
    }
L_088A4D08:
    ctx.set_gpr(5, ctx.gpr[21] + ctx.gpr[5]);
    ctx.set_gpr(31, 0x088A4D14u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(112));
    goto L_088A4EA4;
L_088A4D14:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[22] + static_cast<std::uint32_t>(112));
    goto L_088A4B30;
L_088A4D20:
    ctx.set_gpr(5, ctx.gpr[3] & 512u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088A4DF4;
      }
      goto L_088A4D2C;
    }
L_088A4D2C:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[6]) < 56 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
        goto L_088A4D88;
    }
    goto L_088A4D38;
L_088A4D38:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(11, ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.set_gpr(5, ctx.gpr[21] + ctx.gpr[5]);
        goto L_088A4CB0;
    }
    goto L_088A4D4C;
L_088A4D4C:
    ctx.set_gpr(16, ctx.gpr[6] - ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + ctx.gpr[5]);
    ctx.set_gpr(31, 0x088A4D60u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_088A4EA4;
L_088A4D60:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(56));
    goto L_088A4D64;
L_088A4D64:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(30, ctx.gpr[17] - ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[22] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x088A4D80u);
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    goto L_088A4EA4;
L_088A4D80:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    goto L_088A47E8;
L_088A4D88:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, ctx.gpr[6] - ctx.gpr[13]);
    ctx.set_gpr(5, ctx.gpr[21] + ctx.gpr[13]);
    ctx.set_gpr(31, 0x088A4DA0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_088A4EA4;
L_088A4DA0:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(17, ctx.gpr[12] - ctx.gpr[16]);
    goto L_088A4DAC;
L_088A4DAC:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[22] + ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(6, ctx.gpr[15] + 0u);
      if (branch_taken) {
          goto L_088A4DDC;
      }
      goto L_088A4DC4;
    }
L_088A4DC4:
    ctx.set_gpr(31, 0x088A4DCCu);
    // nop
    goto L_088A4EA4;
L_088A4DCC:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[24]);
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[24]);
    goto L_088A4DAC;
L_088A4DDC:
    ctx.set_gpr(31, 0x088A4DE4u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_088A4EA4;
L_088A4DE4:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[10] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_088A47E8;
L_088A4DF4:
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[6]) < 112 ? 1u : 0u);
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
        goto L_088A4E2C;
    }
    goto L_088A4E00;
L_088A4E00:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, ctx.gpr[5] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[25]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
      if (branch_taken) {
          goto L_088A4D08;
      }
      goto L_088A4E14;
    }
L_088A4E14:
    ctx.set_gpr(16, ctx.gpr[6] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[21] + ctx.gpr[5]);
    ctx.set_gpr(31, 0x088A4E24u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_088A4EA4;
L_088A4E24:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(112));
    goto L_088A4D64;
L_088A4E2C:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, ctx.gpr[6] - ctx.gpr[9]);
    ctx.set_gpr(5, ctx.gpr[21] + ctx.gpr[9]);
    ctx.set_gpr(31, 0x088A4E44u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_088A4EA4;
L_088A4E44:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(112));
    ctx.set_gpr(17, ctx.gpr[8] - ctx.gpr[16]);
    goto L_088A4E50;
L_088A4E50:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[22] + ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_088A4DDC;
      }
      goto L_088A4E68;
    }
L_088A4E68:
    ctx.set_gpr(31, 0x088A4E70u);
    // nop
    goto L_088A4EA4;
L_088A4E70:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[5]);
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[5]);
    goto L_088A4E50;
L_088A4E80:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_088A4E9C;
      }
      goto L_088A4E88;
    }
L_088A4E88:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A4E88;
      }
      goto L_088A4E9C;
    }
L_088A4E9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4EA4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_088A4EC8;
      }
      goto L_088A4EAC;
    }
L_088A4EAC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A4EAC;
      }
      goto L_088A4EC8;
    }
L_088A4EC8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4ED0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, 2225u << 16u);
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 4u));
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(30808));
    ctx.set_gpr(9, ctx.gpr[7] + ctx.gpr[2]);
    ctx.set_gpr(13, ctx.gpr[3] & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(5))))));
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[25] == ctx.gpr[3];
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_088A4FA4;
      }
      goto L_088A4F0C;
    }
L_088A4F0C:
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(24, ctx.gpr[14] - ctx.gpr[13]);
    ctx.set_gpr(15, ctx.gpr[13] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(13));
    goto L_088A4F24;
L_088A4F24:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[10]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.execute_madd(8u, 11u);
    ctx.set_gpr(2, ctx.gpr[3] << 28u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[15] & 31u)));
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[24] & 31u));
    ctx.set_gpr(7, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 6u));
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[8]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[8] : ctx.gpr[14]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[13]) ? ctx.gpr[7] : ctx.gpr[13]);
    ctx.execute_madd(2u, 11u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 6u));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[3]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[3] : ctx.gpr[14]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[13]) ? ctx.gpr[8] : ctx.gpr[13]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[3] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) >= 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088A4F24;
      }
      goto L_088A4F98;
    }
L_088A4F98:
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(9, ctx.gpr[25] + 0u);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    goto L_088A4FA4;
L_088A4FA4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[9] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4FAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, 2227u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(5572)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, 2227u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(5576)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2227u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(5580)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2227u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(5584)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2227u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(5588)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2227u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(5592)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088A5208;
      }
      goto L_088A5018;
    }
L_088A5018:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A5250;
      }
      goto L_088A5024;
    }
L_088A5024:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088A51B4;
      }
      goto L_088A5034;
    }
L_088A5034:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088A5154;
      }
      goto L_088A5040;
    }
L_088A5040:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A50F8;
      }
      goto L_088A5048;
    }
L_088A5048:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088A5078;
      }
      goto L_088A5050;
    }
L_088A5050:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5060;
      }
      goto L_088A5058;
    }
L_088A5058:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088A51DC;
      }
      goto L_088A5060;
    }
L_088A5060:
    ctx.set_gpr(31, 0x088A5068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 167u, 0x08848AFCu>(ctx, &aot_mem) && ctx.pc == 0x088A5068u) goto L_088A5068;
    return;
L_088A5068:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088A51D8;
      }
      goto L_088A5078;
    }
L_088A5078:
    ctx.set_gpr(31, 0x088A5080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088A5080u) goto L_088A5080;
    return;
L_088A5080:
    ctx.set_gpr(31, 0x088A5088u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088A54CC;
L_088A5088:
    ctx.set_gpr(31, 0x088A5090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5090u) goto L_088A5090;
    return;
L_088A5090:
    ctx.set_gpr(31, 0x088A5098u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088A5098u) goto L_088A5098;
    return;
L_088A5098:
    ctx.set_gpr(31, 0x088A50A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x088A50A0u) goto L_088A50A0;
    return;
L_088A50A0:
    ctx.set_gpr(31, 0x088A50A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088A54C4;
L_088A50A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A50B8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 911u, 0x08AB3554u>(ctx, &aot_mem) && ctx.pc == 0x088A50B8u) goto L_088A50B8;
    return;
L_088A50B8:
    ctx.set_gpr(31, 0x088A50C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A50C0u) goto L_088A50C0;
    return;
L_088A50C0:
    ctx.set_gpr(31, 0x088A50C8u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088A50C8u) goto L_088A50C8;
    return;
L_088A50C8:
    ctx.set_gpr(31, 0x088A50D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x088A50D0u) goto L_088A50D0;
    return;
L_088A50D0:
    ctx.set_gpr(31, 0x088A50D8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088A54BC;
L_088A50D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088A50E8u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 911u, 0x08AB3554u>(ctx, &aot_mem) && ctx.pc == 0x088A50E8u) goto L_088A50E8;
    return;
L_088A50E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088A51D8;
      }
      goto L_088A50F8;
    }
L_088A50F8:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(23404)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_088A5148;
    }
    goto L_088A5108;
L_088A5108:
    ctx.set_gpr(31, 0x088A5110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x088A5110u) goto L_088A5110;
    return;
L_088A5110:
    ctx.set_gpr(31, 0x088A5118u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x088A5118u) goto L_088A5118;
    return;
L_088A5118:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3696));
    ctx.set_gpr(31, 0x088A5124u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_088A54B4;
L_088A5124:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A513C;
      }
      goto L_088A5130;
    }
L_088A5130:
    ctx.set_gpr(31, 0x088A5138u);
    // nop
    goto L_088A54D4;
L_088A5138:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088A513C;
L_088A513C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(23404), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_088A5148;
L_088A5148:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088A51D8;
      }
      goto L_088A5154;
    }
L_088A5154:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088A5168u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23404)));
    goto L_088A55A4;
L_088A5168:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A51D8;
      }
      goto L_088A5170;
    }
L_088A5170:
    ctx.set_gpr(31, 0x088A5178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5178u) goto L_088A5178;
    return;
L_088A5178:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(3, 16448u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(51));
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088A51A4u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 308u, 0x08AB11D4u>(ctx, &aot_mem) && ctx.pc == 0x088A51A4u) goto L_088A51A4;
    return;
L_088A51A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088A51D8;
      }
      goto L_088A51B4;
    }
L_088A51B4:
    ctx.set_gpr(31, 0x088A51BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 160u, 0x08848A74u>(ctx, &aot_mem) && ctx.pc == 0x088A51BCu) goto L_088A51BC;
    return;
L_088A51BC:
    ctx.set_gpr(31, 0x088A51C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A51C4u) goto L_088A51C4;
    return;
L_088A51C4:
    ctx.set_gpr(31, 0x088A51CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 814u, 0x08ACEC40u>(ctx, &aot_mem) && ctx.pc == 0x088A51CCu) goto L_088A51CC;
    return;
L_088A51CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_088A51D8;
L_088A51D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_088A51DC;
L_088A51DC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 5 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_088A5488;
    }
    goto L_088A51E8;
L_088A51E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088A51FCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23404)));
    goto L_088A6830;
L_088A51FC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_088A5484;
      }
      goto L_088A5208;
    }
L_088A5208:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088A5220u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23404)));
    goto L_088A5D1C;
L_088A5220:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088A5230u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23404)));
    goto L_088A6828;
L_088A5230:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x088A523Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23404)));
    goto L_088A54AC;
L_088A523C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5484;
      }
      goto L_088A5244;
    }
L_088A5244:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_088A5484;
      }
      goto L_088A5250;
    }
L_088A5250:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A525C;
      }
      goto L_088A5258;
    }
L_088A5258:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_088A525C;
L_088A525C:
    ctx.set_gpr(31, 0x088A5264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5264u) goto L_088A5264;
    return;
L_088A5264:
    ctx.set_gpr(31, 0x088A526Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 344u, 0x08AB1444u>(ctx, &aot_mem) && ctx.pc == 0x088A526Cu) goto L_088A526C;
    return;
L_088A526C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x088A5278u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23404)));
    goto L_088A6950;
L_088A5278:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x088A5288u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23404)));
    goto L_088A54A4;
L_088A5288:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x088A5298u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23404)));
    goto L_088A5C04;
L_088A5298:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23404)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A52B8;
      }
      goto L_088A52A8;
    }
L_088A52A8:
    ctx.set_gpr(31, 0x088A52B0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_088A5534;
L_088A52B0:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(23404), 0u);
    goto L_088A52B8;
L_088A52B8:
    ctx.set_gpr(31, 0x088A52C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088A52C0u) goto L_088A52C0;
    return;
L_088A52C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A52CCu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_088A549C;
L_088A52CC:
    ctx.set_gpr(31, 0x088A52D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088A52D4u) goto L_088A52D4;
    return;
L_088A52D4:
    ctx.set_gpr(31, 0x088A52DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 528u, 0x08861EF8u>(ctx, &aot_mem) && ctx.pc == 0x088A52DCu) goto L_088A52DC;
    return;
L_088A52DC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[16] == ctx.gpr[3]) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
        goto L_088A53D8;
    }
    goto L_088A52E8;
L_088A52E8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A536C;
      }
      goto L_088A52F0;
    }
L_088A52F0:
    ctx.set_gpr(31, 0x088A52F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x088A52F8u) goto L_088A52F8;
    return;
L_088A52F8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088A5318u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x088A5318u) goto L_088A5318;
    return;
L_088A5318:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088A532Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A532Cu) goto L_088A532C;
    return;
L_088A532C:
    ctx.set_gpr(31, 0x088A5334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5334u) goto L_088A5334;
    return;
L_088A5334:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088A534Cu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x088A534Cu) goto L_088A534C;
    return;
L_088A534C:
    ctx.set_gpr(3, 2181u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-18380));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_088A5484;
      }
      goto L_088A536C;
    }
L_088A536C:
    ctx.set_gpr(31, 0x088A5374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088A5374u) goto L_088A5374;
    return;
L_088A5374:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x088A538Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088A549C;
L_088A538C:
    ctx.set_gpr(31, 0x088A5394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088A5394u) goto L_088A5394;
    return;
L_088A5394:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A53A0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 484u, 0x08861D48u>(ctx, &aot_mem) && ctx.pc == 0x088A53A0u) goto L_088A53A0;
    return;
L_088A53A0:
    ctx.set_gpr(31, 0x088A53A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A53A8u) goto L_088A53A8;
    return;
L_088A53A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A53B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x088A53B4u) goto L_088A53B4;
    return;
L_088A53B4:
    ctx.set_gpr(3, 2182u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-22964));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_088A5484;
      }
      goto L_088A53D4;
    }
L_088A53D4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088A53D8;
L_088A53D8:
    ctx.set_gpr(3, 2227u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(5569), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088A5454;
      }
      goto L_088A53EC;
    }
L_088A53EC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A5420;
      }
      goto L_088A53F4;
    }
L_088A53F4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5404;
      }
      goto L_088A53FC;
    }
L_088A53FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5484;
      }
      goto L_088A5404;
    }
L_088A5404:
    ctx.set_gpr(3, 2221u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(16528));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_088A5484;
      }
      goto L_088A5420;
    }
L_088A5420:
    ctx.set_gpr(31, 0x088A5428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5428u) goto L_088A5428;
    return;
L_088A5428:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A5434u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x088A5434u) goto L_088A5434;
    return;
L_088A5434:
    ctx.set_gpr(3, 2219u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-24204));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_088A5484;
      }
      goto L_088A5454;
    }
L_088A5454:
    ctx.set_gpr(31, 0x088A545Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A545Cu) goto L_088A545C;
    return;
L_088A545C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A5468u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x088A5468u) goto L_088A5468;
    return;
L_088A5468:
    ctx.set_gpr(3, 2221u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-31076));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
    goto L_088A5484;
L_088A5484:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_088A5488;
L_088A5488:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A549C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A54A4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3684)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A54AC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3676)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A54B4:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_088A54BC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A54C4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A54CC:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 213u, 0x08848DA4u>(ctx, &aot_mem); return;
L_088A54D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x088A54E8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 618u, 0x0885E49Cu>(ctx, &aot_mem) && ctx.pc == 0x088A54E8u) goto L_088A54E8;
    return;
L_088A54E8:
    ctx.set_gpr(31, 0x088A54F0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(3536));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 735u, 0x0884E828u>(ctx, &aot_mem) && ctx.pc == 0x088A54F0u) goto L_088A54F0;
    return;
L_088A54F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3656), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3660), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3664), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3668), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3672), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3676), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3680), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3684), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3688), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3692), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5534:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_088A5584;
      }
      goto L_088A5550;
    }
L_088A5550:
    ctx.set_gpr(31, 0x088A5558u);
    // nop
    goto L_088A5C04;
L_088A5558:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(3536));
    ctx.set_gpr(31, 0x088A5564u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 778u, 0x0884EA9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5564u) goto L_088A5564;
    return;
L_088A5564:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088A5570u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 626u, 0x0885E5ACu>(ctx, &aot_mem) && ctx.pc == 0x088A5570u) goto L_088A5570;
    return;
L_088A5570:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_088A5588;
    }
    goto L_088A557C;
L_088A557C:
    ctx.set_gpr(31, 0x088A5584u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088A559C;
L_088A5584:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_088A5588;
L_088A5588:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A559C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_088A55A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3668)));
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088A55D8;
      }
      goto L_088A55D0;
    }
L_088A55D0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A5BE8;
      }
      goto L_088A55D8;
    }
L_088A55D8:
    ctx.set_gpr(31, 0x088A55E0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x088A55E0u) goto L_088A55E0;
    return;
L_088A55E0:
    ctx.set_gpr(2, 2227u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(5596)));
    ctx.set_gpr(2, 2227u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(5600)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2227u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(5604)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2227u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(5608)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2227u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(5612)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2227u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(5616)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3672)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_088A5A94;
      }
      goto L_088A5638;
    }
L_088A5638:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(30820));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5654:
    ctx.set_gpr(31, 0x088A565Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A565Cu) goto L_088A565C;
    return;
L_088A565C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A5668u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(38));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 847u, 0x08AB31BCu>(ctx, &aot_mem) && ctx.pc == 0x088A5668u) goto L_088A5668;
    return;
L_088A5668:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3672)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3672), ctx.gpr[2]);
    goto L_088A5674;
L_088A5674:
    ctx.set_gpr(31, 0x088A567Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088A6958;
L_088A567C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3672)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3672), ctx.gpr[2]);
    goto L_088A5688;
L_088A5688:
    ctx.set_gpr(31, 0x088A5690u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 633u, 0x0885E624u>(ctx, &aot_mem) && ctx.pc == 0x088A5690u) goto L_088A5690;
    return;
L_088A5690:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3672)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3672), ctx.gpr[2]);
    goto L_088A569C;
L_088A569C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x088A56ACu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 664u, 0x0885E894u>(ctx, &aot_mem) && ctx.pc == 0x088A56ACu) goto L_088A56AC;
    return;
L_088A56AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088A56EC;
      }
      goto L_088A56B8;
    }
L_088A56B8:
    ctx.set_gpr(31, 0x088A56C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 895u, 0x08AAF7C8u>(ctx, &aot_mem) && ctx.pc == 0x088A56C0u) goto L_088A56C0;
    return;
L_088A56C0:
    ctx.set_gpr(31, 0x088A56C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x088A56C8u) goto L_088A56C8;
    return;
L_088A56C8:
    ctx.set_gpr(31, 0x088A56D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 977u, 0x08AAFC50u>(ctx, &aot_mem) && ctx.pc == 0x088A56D0u) goto L_088A56D0;
    return;
L_088A56D0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x088A56E0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 664u, 0x0885E894u>(ctx, &aot_mem) && ctx.pc == 0x088A56E0u) goto L_088A56E0;
    return;
L_088A56E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088A56B8;
      }
      goto L_088A56EC;
    }
L_088A56EC:
    ctx.set_gpr(31, 0x088A56F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x088A56F4u) goto L_088A56F4;
    return;
L_088A56F4:
    ctx.set_gpr(31, 0x088A56FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x088A56FCu) goto L_088A56FC;
    return;
L_088A56FC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088A570Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 859u, 0x0885F49Cu>(ctx, &aot_mem) && ctx.pc == 0x088A570Cu) goto L_088A570C;
    return;
L_088A570C:
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x088A571Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5620));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 294u, 0x08855620u>(ctx, &aot_mem) && ctx.pc == 0x088A571Cu) goto L_088A571C;
    return;
L_088A571C:
    ctx.set_gpr(31, 0x088A5724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x088A5724u) goto L_088A5724;
    return;
L_088A5724:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A5730u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 355u, 0x088496F4u>(ctx, &aot_mem) && ctx.pc == 0x088A5730u) goto L_088A5730;
    return;
L_088A5730:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088A5750u);
    ctx.set_gpr(11, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 356u, 0x088496FCu>(ctx, &aot_mem) && ctx.pc == 0x088A5750u) goto L_088A5750;
    return;
L_088A5750:
    ctx.set_gpr(19, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x088A5760u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088A5760u) goto L_088A5760;
    return;
L_088A5760:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x088A576Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 253u, 0x08849158u>(ctx, &aot_mem) && ctx.pc == 0x088A576Cu) goto L_088A576C;
    return;
L_088A576C:
    if (ctx.gpr[19] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3672)));
        goto L_088A57B8;
    }
    goto L_088A5774;
L_088A5774:
    ctx.set_gpr(31, 0x088A577Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x088A577Cu) goto L_088A577C;
    return;
L_088A577C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x088A578Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 870u, 0x08843A60u>(ctx, &aot_mem) && ctx.pc == 0x088A578Cu) goto L_088A578C;
    return;
L_088A578C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088A5798u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 521u, 0x08851B24u>(ctx, &aot_mem) && ctx.pc == 0x088A5798u) goto L_088A5798;
    return;
L_088A5798:
    ctx.set_gpr(31, 0x088A57A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x088A57A0u) goto L_088A57A0;
    return;
L_088A57A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088A57B4u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x088A57B4u) goto L_088A57B4;
    return;
L_088A57B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3672)));
    goto L_088A57B8;
L_088A57B8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3672), ctx.gpr[2]);
    goto L_088A57C0;
L_088A57C0:
    ctx.set_gpr(31, 0x088A57C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A57C8u) goto L_088A57C8;
    return;
L_088A57C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088A57DCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(46));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x088A57DCu) goto L_088A57DC;
    return;
L_088A57DC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3672)));
        goto L_088A5824;
    }
    goto L_088A57E4;
L_088A57E4:
    ctx.set_gpr(31, 0x088A57ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 895u, 0x08AAF7C8u>(ctx, &aot_mem) && ctx.pc == 0x088A57ECu) goto L_088A57EC;
    return;
L_088A57EC:
    ctx.set_gpr(31, 0x088A57F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x088A57F4u) goto L_088A57F4;
    return;
L_088A57F4:
    ctx.set_gpr(31, 0x088A57FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 977u, 0x08AAFC50u>(ctx, &aot_mem) && ctx.pc == 0x088A57FCu) goto L_088A57FC;
    return;
L_088A57FC:
    ctx.set_gpr(31, 0x088A5804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5804u) goto L_088A5804;
    return;
L_088A5804:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088A5818u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(46));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5818u) goto L_088A5818;
    return;
L_088A5818:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088A57E4;
      }
      goto L_088A5820;
    }
L_088A5820:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3672)));
    goto L_088A5824;
L_088A5824:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3672), ctx.gpr[2]);
    goto L_088A582C;
L_088A582C:
    ctx.set_gpr(31, 0x088A5834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5834u) goto L_088A5834;
    return;
L_088A5834:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17325u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17100u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088A5868u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088A5868u) goto L_088A5868;
    return;
L_088A5868:
    ctx.set_gpr(31, 0x088A5870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5870u) goto L_088A5870;
    return;
L_088A5870:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17340u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17278u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(6));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088A58A4u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088A58A4u) goto L_088A58A4;
    return;
L_088A58A4:
    ctx.set_gpr(31, 0x088A58ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A58ACu) goto L_088A58AC;
    return;
L_088A58AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17340u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17278u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(7));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088A58E0u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088A58E0u) goto L_088A58E0;
    return;
L_088A58E0:
    ctx.set_gpr(31, 0x088A58E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A58E8u) goto L_088A58E8;
    return;
L_088A58E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17166u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17237u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088A591Cu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088A591Cu) goto L_088A591C;
    return;
L_088A591C:
    ctx.set_gpr(31, 0x088A5924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5924u) goto L_088A5924;
    return;
L_088A5924:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17166u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17237u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x088A5958u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088A5958u) goto L_088A5958;
    return;
L_088A5958:
    ctx.set_gpr(31, 0x088A5960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5960u) goto L_088A5960;
    return;
L_088A5960:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17189u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17260u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088A5994u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088A5994u) goto L_088A5994;
    return;
L_088A5994:
    ctx.set_gpr(31, 0x088A599Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A599Cu) goto L_088A599C;
    return;
L_088A599C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17189u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17260u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088A59D0u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088A59D0u) goto L_088A59D0;
    return;
L_088A59D0:
    ctx.set_gpr(31, 0x088A59D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A59D8u) goto L_088A59D8;
    return;
L_088A59D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17198u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17281u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(5));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088A5A10u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088A5A10u) goto L_088A5A10;
    return;
L_088A5A10:
    ctx.set_gpr(31, 0x088A5A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5A18u) goto L_088A5A18;
    return;
L_088A5A18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17198u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17281u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088A5A50u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x088A5A50u) goto L_088A5A50;
    return;
L_088A5A50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3672)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3672), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088A5A94;
      }
      goto L_088A5A60;
    }
L_088A5A60:
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(5568)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3672)));
        goto L_088A5A8C;
    }
    goto L_088A5A70;
L_088A5A70:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(23408));
    ctx.set_gpr(31, 0x088A5A80u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 458u, 0x08B05D9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5A80u) goto L_088A5A80;
    return;
L_088A5A80:
    ctx.set_gpr(2, 2227u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(5568), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3672)));
    goto L_088A5A8C;
L_088A5A8C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3672), ctx.gpr[2]);
    goto L_088A5A94;
L_088A5A94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3672)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5AAC;
      }
      goto L_088A5AA4;
    }
L_088A5AA4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_088A5BE8;
      }
      goto L_088A5AAC;
    }
L_088A5AAC:
    ctx.set_gpr(31, 0x088A5AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x088A5AB4u) goto L_088A5AB4;
    return;
L_088A5AB4:
    ctx.set_gpr(31, 0x088A5ABCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x088A5ABCu) goto L_088A5ABC;
    return;
L_088A5ABC:
    ctx.set_gpr(31, 0x088A5AC4u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3672), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5AC4u) goto L_088A5AC4;
    return;
L_088A5AC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088A5AD8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5AD8u) goto L_088A5AD8;
    return;
L_088A5AD8:
    ctx.set_gpr(31, 0x088A5AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5AE0u) goto L_088A5AE0;
    return;
L_088A5AE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088A5AF4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5AF4u) goto L_088A5AF4;
    return;
L_088A5AF4:
    ctx.set_gpr(31, 0x088A5AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5AFCu) goto L_088A5AFC;
    return;
L_088A5AFC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088A5B10u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5B10u) goto L_088A5B10;
    return;
L_088A5B10:
    ctx.set_gpr(31, 0x088A5B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5B18u) goto L_088A5B18;
    return;
L_088A5B18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088A5B2Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5B2Cu) goto L_088A5B2C;
    return;
L_088A5B2C:
    ctx.set_gpr(31, 0x088A5B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5B34u) goto L_088A5B34;
    return;
L_088A5B34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088A5B48u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5B48u) goto L_088A5B48;
    return;
L_088A5B48:
    ctx.set_gpr(31, 0x088A5B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5B50u) goto L_088A5B50;
    return;
L_088A5B50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088A5B64u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5B64u) goto L_088A5B64;
    return;
L_088A5B64:
    ctx.set_gpr(31, 0x088A5B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5B6Cu) goto L_088A5B6C;
    return;
L_088A5B6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088A5B80u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5B80u) goto L_088A5B80;
    return;
L_088A5B80:
    ctx.set_gpr(31, 0x088A5B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5B88u) goto L_088A5B88;
    return;
L_088A5B88:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088A5BA0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x088A5BA0u) goto L_088A5BA0;
    return;
L_088A5BA0:
    ctx.set_gpr(31, 0x088A5BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5BA8u) goto L_088A5BA8;
    return;
L_088A5BA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088A5BC8u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x088A5BC8u) goto L_088A5BC8;
    return;
L_088A5BC8:
    ctx.set_gpr(2, 16752u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3680), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3684), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A5BE0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(222));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 596u, 0x0884792Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5BE0u) goto L_088A5BE0;
    return;
L_088A5BE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3668), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_088A5BE8;
L_088A5BE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5C04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3668)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088A5D08;
      }
      goto L_088A5C20;
    }
L_088A5C20:
    ctx.set_gpr(16, 0u + 0u);
    goto L_088A5C24;
L_088A5C24:
    ctx.set_gpr(31, 0x088A5C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5C2Cu) goto L_088A5C2C;
    return;
L_088A5C2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088A5C3Cu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x088A5C3Cu) goto L_088A5C3C;
    return;
L_088A5C3C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A5C24;
      }
      goto L_088A5C4C;
    }
L_088A5C4C:
    ctx.set_gpr(31, 0x088A5C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5C54u) goto L_088A5C54;
    return;
L_088A5C54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088A5C64u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 562u, 0x0884764Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5C64u) goto L_088A5C64;
    return;
L_088A5C64:
    ctx.set_gpr(31, 0x088A5C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x088A5C6Cu) goto L_088A5C6C;
    return;
L_088A5C6C:
    ctx.set_gpr(31, 0x088A5C74u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 455u, 0x08849BF0u>(ctx, &aot_mem) && ctx.pc == 0x088A5C74u) goto L_088A5C74;
    return;
L_088A5C74:
    ctx.set_gpr(31, 0x088A5C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5C7Cu) goto L_088A5C7C;
    return;
L_088A5C7C:
    ctx.set_gpr(31, 0x088A5C84u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5C84u) goto L_088A5C84;
    return;
L_088A5C84:
    ctx.set_gpr(31, 0x088A5C8Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 642u, 0x0885E700u>(ctx, &aot_mem) && ctx.pc == 0x088A5C8Cu) goto L_088A5C8C;
    return;
L_088A5C8C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088A5C98u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3536));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 234u, 0x08850B30u>(ctx, &aot_mem) && ctx.pc == 0x088A5C98u) goto L_088A5C98;
    return;
L_088A5C98:
    ctx.set_gpr(31, 0x088A5CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5CA0u) goto L_088A5CA0;
    return;
L_088A5CA0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A5CACu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088A5CACu) goto L_088A5CAC;
    return;
L_088A5CAC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A5CBCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x088A5CBCu) goto L_088A5CBC;
    return;
L_088A5CBC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088A5CC8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x088A5CC8u) goto L_088A5CC8;
    return;
L_088A5CC8:
    ctx.set_gpr(31, 0x088A5CD0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(3536));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 45u, 0x08850228u>(ctx, &aot_mem) && ctx.pc == 0x088A5CD0u) goto L_088A5CD0;
    return;
L_088A5CD0:
    ctx.set_gpr(31, 0x088A5CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5CD8u) goto L_088A5CD8;
    return;
L_088A5CD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(31, 0x088A5CE8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 887u, 0x08AB33C4u>(ctx, &aot_mem) && ctx.pc == 0x088A5CE8u) goto L_088A5CE8;
    return;
L_088A5CE8:
    ctx.set_gpr(31, 0x088A5CF0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088A6950;
L_088A5CF0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3668), static_cast<std::uint8_t>(0u));
        goto L_088A5D08;
    }
    goto L_088A5CFC;
L_088A5CFC:
    ctx.set_gpr(31, 0x088A5D04u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(333));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 596u, 0x0884792Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5D04u) goto L_088A5D04;
    return;
L_088A5D04:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3668), static_cast<std::uint8_t>(0u));
    goto L_088A5D08;
L_088A5D08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5D1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3668)));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088A679C;
      }
      goto L_088A5D50;
    }
L_088A5D50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3672)));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3672)));
        goto L_088A6770;
    }
    goto L_088A5D60;
L_088A5D60:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(30848));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5D7C:
    ctx.set_gpr(31, 0x088A5D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5D84u) goto L_088A5D84;
    return;
L_088A5D84:
    ctx.set_gpr(31, 0x088A5D8Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x088A5D8Cu) goto L_088A5D8C;
    return;
L_088A5D8C:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A5D98;
    }
L_088A5D98:
    ctx.set_gpr(3, 16752u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3680), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3684), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3672), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A5DB4;
    }
L_088A5DB4:
    ctx.set_gpr(31, 0x088A5DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088A5DBCu) goto L_088A5DBC;
    return;
L_088A5DBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A5DC8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x088A5DC8u) goto L_088A5DC8;
    return;
L_088A5DC8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3664)));
        goto L_088A5DF0;
    }
    goto L_088A5DD0;
L_088A5DD0:
    ctx.set_gpr(31, 0x088A5DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088A5DD8u) goto L_088A5DD8;
    return;
L_088A5DD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A5DE4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x088A5DE4u) goto L_088A5DE4;
    return;
L_088A5DE4:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3680)));
        goto L_088A5ECC;
    }
    goto L_088A5DEC;
L_088A5DEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3664)));
    goto L_088A5DF0;
L_088A5DF0:
    ctx.set_gpr(31, 0x088A5DF8u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3660), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5DF8u) goto L_088A5DF8;
    return;
L_088A5DF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088A5E0Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5E0Cu) goto L_088A5E0C;
    return;
L_088A5E0C:
    ctx.set_gpr(31, 0x088A5E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5E14u) goto L_088A5E14;
    return;
L_088A5E14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088A5E28u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5E28u) goto L_088A5E28;
    return;
L_088A5E28:
    ctx.set_gpr(31, 0x088A5E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5E30u) goto L_088A5E30;
    return;
L_088A5E30:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088A5E44u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5E44u) goto L_088A5E44;
    return;
L_088A5E44:
    ctx.set_gpr(31, 0x088A5E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5E4Cu) goto L_088A5E4C;
    return;
L_088A5E4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088A5E60u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5E60u) goto L_088A5E60;
    return;
L_088A5E60:
    ctx.set_gpr(31, 0x088A5E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5E68u) goto L_088A5E68;
    return;
L_088A5E68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088A5E7Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5E7Cu) goto L_088A5E7C;
    return;
L_088A5E7C:
    ctx.set_gpr(31, 0x088A5E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5E84u) goto L_088A5E84;
    return;
L_088A5E84:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A5E90u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088A6950;
L_088A5E90:
    ctx.set_gpr(6, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088A5EA4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5EA4u) goto L_088A5EA4;
    return;
L_088A5EA4:
    ctx.set_gpr(31, 0x088A5EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5EACu) goto L_088A5EAC;
    return;
L_088A5EAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088A5EC0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5EC0u) goto L_088A5EC0;
    return;
L_088A5EC0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3672), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A5ECC;
    }
L_088A5ECC:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3680), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A5EE4;
    }
L_088A5EE4:
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(5569)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, 2245u << 16u);
        goto L_088A5F74;
    }
    goto L_088A5EF4;
L_088A5EF4:
    ctx.set_gpr(31, 0x088A5EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5EFCu) goto L_088A5EFC;
    return;
L_088A5EFC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088A5F14u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x088A5F14u) goto L_088A5F14;
    return;
L_088A5F14:
    ctx.set_gpr(31, 0x088A5F1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5F1Cu) goto L_088A5F1C;
    return;
L_088A5F1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088A5F3Cu);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x088A5F3Cu) goto L_088A5F3C;
    return;
L_088A5F3C:
    ctx.set_gpr(31, 0x088A5F44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5F44u) goto L_088A5F44;
    return;
L_088A5F44:
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A5F58u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 365u, 0x08AB1554u>(ctx, &aot_mem) && ctx.pc == 0x088A5F58u) goto L_088A5F58;
    return;
L_088A5F58:
    ctx.set_gpr(3, 16153u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 39322u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3680), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3688), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3672), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A5F74;
    }
L_088A5F74:
    ctx.set_gpr(31, 0x088A5F7Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(23408));
    goto L_088A67D8;
L_088A5F7C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3684), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3676), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(5569), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A5F94;
    }
L_088A5F94:
    ctx.set_gpr(31, 0x088A5F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088A5F9Cu) goto L_088A5F9C;
    return;
L_088A5F9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A5FA8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x088A5FA8u) goto L_088A5FA8;
    return;
L_088A5FA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A606C;
      }
      goto L_088A5FB0;
    }
L_088A5FB0:
    ctx.set_gpr(31, 0x088A5FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5FB8u) goto L_088A5FB8;
    return;
L_088A5FB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088A5FCCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5FCCu) goto L_088A5FCC;
    return;
L_088A5FCC:
    ctx.set_gpr(31, 0x088A5FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A5FD4u) goto L_088A5FD4;
    return;
L_088A5FD4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088A5FECu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x088A5FECu) goto L_088A5FEC;
    return;
L_088A5FEC:
    ctx.set_gpr(31, 0x088A5FF4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088A6950;
L_088A5FF4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A6044;
      }
      goto L_088A6000;
    }
L_088A6000:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6010;
      }
      goto L_088A6008;
    }
L_088A6008:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, 2227u << 16u);
      if (branch_taken) {
          goto L_088A6060;
      }
      goto L_088A6010;
    }
L_088A6010:
    ctx.set_gpr(31, 0x088A6018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6018u) goto L_088A6018;
    return;
L_088A6018:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088A6038u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x088A6038u) goto L_088A6038;
    return;
L_088A6038:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3672), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A6044;
    }
L_088A6044:
    ctx.set_gpr(31, 0x088A604Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A604Cu) goto L_088A604C;
    return;
L_088A604C:
    ctx.set_gpr(31, 0x088A6054u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 344u, 0x08AB1444u>(ctx, &aot_mem) && ctx.pc == 0x088A6054u) goto L_088A6054;
    return;
L_088A6054:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3672), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A6060;
    }
L_088A6060:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(5568), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3676), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A606C;
    }
L_088A606C:
    ctx.set_gpr(31, 0x088A6074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088A6074u) goto L_088A6074;
    return;
L_088A6074:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A6080u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x088A6080u) goto L_088A6080;
    return;
L_088A6080:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6158;
      }
      goto L_088A6088;
    }
L_088A6088:
    ctx.set_gpr(31, 0x088A6090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6090u) goto L_088A6090;
    return;
L_088A6090:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088A60A4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A60A4u) goto L_088A60A4;
    return;
L_088A60A4:
    ctx.set_gpr(31, 0x088A60ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A60ACu) goto L_088A60AC;
    return;
L_088A60AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088A60C0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A60C0u) goto L_088A60C0;
    return;
L_088A60C0:
    ctx.set_gpr(31, 0x088A60C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A60C8u) goto L_088A60C8;
    return;
L_088A60C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088A60DCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A60DCu) goto L_088A60DC;
    return;
L_088A60DC:
    ctx.set_gpr(31, 0x088A60E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A60E4u) goto L_088A60E4;
    return;
L_088A60E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088A60F8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A60F8u) goto L_088A60F8;
    return;
L_088A60F8:
    ctx.set_gpr(31, 0x088A6100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6100u) goto L_088A6100;
    return;
L_088A6100:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088A6114u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6114u) goto L_088A6114;
    return;
L_088A6114:
    ctx.set_gpr(31, 0x088A611Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A611Cu) goto L_088A611C;
    return;
L_088A611C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A6128u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088A6950;
L_088A6128:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] << 1u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088A613Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A613Cu) goto L_088A613C;
    return;
L_088A613C:
    ctx.set_gpr(3, 16752u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3680), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3684), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3672), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A6158;
    }
L_088A6158:
    ctx.set_gpr(31, 0x088A6160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088A6160u) goto L_088A6160;
    return;
L_088A6160:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A616Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x088A616Cu) goto L_088A616C;
    return;
L_088A616C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A61D4;
      }
      goto L_088A6174;
    }
L_088A6174:
    ctx.set_gpr(31, 0x088A617Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A617Cu) goto L_088A617C;
    return;
L_088A617C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A6188u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088A6950;
L_088A6188:
    ctx.set_gpr(6, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088A619Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A619Cu) goto L_088A619C;
    return;
L_088A619C:
    ctx.set_gpr(31, 0x088A61A4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088A6894;
L_088A61A4:
    ctx.set_gpr(31, 0x088A61ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A61ACu) goto L_088A61AC;
    return;
L_088A61AC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A61B8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088A6950;
L_088A61B8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] << 1u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088A61CCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A61CCu) goto L_088A61CC;
    return;
L_088A61CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A61D4;
    }
L_088A61D4:
    ctx.set_gpr(31, 0x088A61DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088A61DCu) goto L_088A61DC;
    return;
L_088A61DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A61E8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x088A61E8u) goto L_088A61E8;
    return;
L_088A61E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A61F0;
    }
L_088A61F0:
    ctx.set_gpr(31, 0x088A61F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A61F8u) goto L_088A61F8;
    return;
L_088A61F8:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A6204u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088A6950;
L_088A6204:
    ctx.set_gpr(6, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088A6218u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6218u) goto L_088A6218;
    return;
L_088A6218:
    ctx.set_gpr(31, 0x088A6220u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088A68F0;
L_088A6220:
    ctx.set_gpr(31, 0x088A6228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6228u) goto L_088A6228;
    return;
L_088A6228:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A6234u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088A6950;
L_088A6234:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] << 1u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088A6248u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6248u) goto L_088A6248;
    return;
L_088A6248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A6250;
    }
L_088A6250:
    ctx.set_gpr(31, 0x088A6258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6258u) goto L_088A6258;
    return;
L_088A6258:
    ctx.set_gpr(31, 0x088A6260u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x088A6260u) goto L_088A6260;
    return;
L_088A6260:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A6268;
    }
L_088A6268:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2227u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(5568), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3676), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A627C;
    }
L_088A627C:
    ctx.set_gpr(31, 0x088A6284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x088A6284u) goto L_088A6284;
    return;
L_088A6284:
    ctx.set_gpr(31, 0x088A628Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x088A628Cu) goto L_088A628C;
    return;
L_088A628C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3060));
    ctx.set_gpr(31, 0x088A6298u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_088A67D0;
L_088A6298:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3692), ctx.gpr[2]);
        goto L_088A62B0;
    }
    goto L_088A62A0;
L_088A62A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A62ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 187u, 0x08AA8990u>(ctx, &aot_mem) && ctx.pc == 0x088A62ACu) goto L_088A62AC;
    return;
L_088A62AC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3692), ctx.gpr[2]);
    goto L_088A62B0;
L_088A62B0:
    ctx.set_gpr(31, 0x088A62B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088A62B8u) goto L_088A62B8;
    return;
L_088A62B8:
    ctx.set_gpr(31, 0x088A62C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x088A62C0u) goto L_088A62C0;
    return;
L_088A62C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3692)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A62D0u);
    ctx.set_gpr(6, 0u | 60696u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 230u, 0x08AA8C04u>(ctx, &aot_mem) && ctx.pc == 0x088A62D0u) goto L_088A62D0;
    return;
L_088A62D0:
    ctx.set_gpr(31, 0x088A62D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x088A62D8u) goto L_088A62D8;
    return;
L_088A62D8:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088A62F8u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x088A62F8u) goto L_088A62F8;
    return;
L_088A62F8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088A630Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A630Cu) goto L_088A630C;
    return;
L_088A630C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x088A6318u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3536));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 234u, 0x08850B30u>(ctx, &aot_mem) && ctx.pc == 0x088A6318u) goto L_088A6318;
    return;
L_088A6318:
    ctx.set_gpr(31, 0x088A6320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6320u) goto L_088A6320;
    return;
L_088A6320:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A632Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088A632Cu) goto L_088A632C;
    return;
L_088A632C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A633Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x088A633Cu) goto L_088A633C;
    return;
L_088A633C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x088A6348u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x088A6348u) goto L_088A6348;
    return;
L_088A6348:
    ctx.set_gpr(31, 0x088A6350u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 766u, 0x0885EEC4u>(ctx, &aot_mem) && ctx.pc == 0x088A6350u) goto L_088A6350;
    return;
L_088A6350:
    ctx.set_gpr(19, 0u + 0u);
    goto L_088A6354;
L_088A6354:
    ctx.set_gpr(31, 0x088A635Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A635Cu) goto L_088A635C;
    return;
L_088A635C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088A6370u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6370u) goto L_088A6370;
    return;
L_088A6370:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A6354;
      }
      goto L_088A6380;
    }
L_088A6380:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3672), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A638C;
    }
L_088A638C:
    ctx.set_gpr(31, 0x088A6394u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3692)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 243u, 0x08AA8CC4u>(ctx, &aot_mem) && ctx.pc == 0x088A6394u) goto L_088A6394;
    return;
L_088A6394:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A639C;
    }
L_088A639C:
    ctx.set_gpr(31, 0x088A63A4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3692)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 460u, 0x08AA97E8u>(ctx, &aot_mem) && ctx.pc == 0x088A63A4u) goto L_088A63A4;
    return;
L_088A63A4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
        goto L_088A63C4;
    }
    goto L_088A63AC;
L_088A63AC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3672), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2227u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(5568), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3676), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_088A6500;
      }
      goto L_088A63C4;
    }
L_088A63C4:
    ctx.set_gpr(31, 0x088A63CCu);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3536));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 234u, 0x08850B30u>(ctx, &aot_mem) && ctx.pc == 0x088A63CCu) goto L_088A63CC;
    return;
L_088A63CC:
    ctx.set_gpr(31, 0x088A63D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x088A63D4u) goto L_088A63D4;
    return;
L_088A63D4:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A63E0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088A63E0u) goto L_088A63E0;
    return;
L_088A63E0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A63F0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 462u, 0x0885186Cu>(ctx, &aot_mem) && ctx.pc == 0x088A63F0u) goto L_088A63F0;
    return;
L_088A63F0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x088A63FCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x088A63FCu) goto L_088A63FC;
    return;
L_088A63FC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088A6410u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 787u, 0x0885F02Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6410u) goto L_088A6410;
    return;
L_088A6410:
    ctx.set_gpr(31, 0x088A6418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6418u) goto L_088A6418;
    return;
L_088A6418:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x088A642Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A642Cu) goto L_088A642C;
    return;
L_088A642C:
    ctx.set_gpr(31, 0x088A6434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6434u) goto L_088A6434;
    return;
L_088A6434:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088A6448u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6448u) goto L_088A6448;
    return;
L_088A6448:
    ctx.set_gpr(31, 0x088A6450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6450u) goto L_088A6450;
    return;
L_088A6450:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088A6464u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6464u) goto L_088A6464;
    return;
L_088A6464:
    ctx.set_gpr(31, 0x088A646Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A646Cu) goto L_088A646C;
    return;
L_088A646C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088A6480u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6480u) goto L_088A6480;
    return;
L_088A6480:
    ctx.set_gpr(31, 0x088A6488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6488u) goto L_088A6488;
    return;
L_088A6488:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A6494u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088A6950;
L_088A6494:
    ctx.set_gpr(6, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088A64A8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A64A8u) goto L_088A64A8;
    return;
L_088A64A8:
    ctx.set_gpr(31, 0x088A64B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A64B0u) goto L_088A64B0;
    return;
L_088A64B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088A64C4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x088A64C4u) goto L_088A64C4;
    return;
L_088A64C4:
    ctx.set_gpr(31, 0x088A64CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A64CCu) goto L_088A64CC;
    return;
L_088A64CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16448u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(51));
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088A64F8u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 308u, 0x08AB11D4u>(ctx, &aot_mem) && ctx.pc == 0x088A64F8u) goto L_088A64F8;
    return;
L_088A64F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3672), ctx.gpr[2]);
    goto L_088A6500;
L_088A6500:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3692)));
    ctx.set_gpr(31, 0x088A650Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 191u, 0x08AA8A1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A650Cu) goto L_088A650C;
    return;
L_088A650C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3692), 0u);
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A6514;
    }
L_088A6514:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3680)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[20];
        goto L_088A6560;
    }
    goto L_088A652C;
L_088A652C:
    ctx.set_gpr(2, 16752u << 16u);
    ctx.set_gpr(31, 0x088A6538u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3680), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 194u, 0x08848CA8u>(ctx, &aot_mem) && ctx.pc == 0x088A6538u) goto L_088A6538;
    return;
L_088A6538:
    ctx.set_gpr(31, 0x088A6540u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 142u, 0x08AD486Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6540u) goto L_088A6540;
    return;
L_088A6540:
    ctx.set_gpr(31, 0x088A6548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 194u, 0x08848CA8u>(ctx, &aot_mem) && ctx.pc == 0x088A6548u) goto L_088A6548;
    return;
L_088A6548:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A6554u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(30));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 172u, 0x08AD49B4u>(ctx, &aot_mem) && ctx.pc == 0x088A6554u) goto L_088A6554;
    return;
L_088A6554:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3672), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A6560;
    }
L_088A6560:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3680), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A6568;
    }
L_088A6568:
    ctx.set_gpr(31, 0x088A6570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6570u) goto L_088A6570;
    return;
L_088A6570:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088A6588u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x088A6588u) goto L_088A6588;
    return;
L_088A6588:
    ctx.set_gpr(31, 0x088A6590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6590u) goto L_088A6590;
    return;
L_088A6590:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088A65ACu);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x088A65ACu) goto L_088A65AC;
    return;
L_088A65AC:
    ctx.set_gpr(31, 0x088A65B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088A65B4u) goto L_088A65B4;
    return;
L_088A65B4:
    ctx.set_gpr(31, 0x088A65BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 924u, 0x0884B6F4u>(ctx, &aot_mem) && ctx.pc == 0x088A65BCu) goto L_088A65BC;
    return;
L_088A65BC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[2]))));
    ctx.set_gpr(2, ctx.gpr[2] & 385u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A65E4;
      }
      goto L_088A65CC;
    }
L_088A65CC:
    ctx.set_gpr(31, 0x088A65D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 194u, 0x08848CA8u>(ctx, &aot_mem) && ctx.pc == 0x088A65D4u) goto L_088A65D4;
    return;
L_088A65D4:
    ctx.set_gpr(31, 0x088A65DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 181u, 0x08AD4A40u>(ctx, &aot_mem) && ctx.pc == 0x088A65DCu) goto L_088A65DC;
    return;
L_088A65DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3688), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_088A65E4;
L_088A65E4:
    ctx.set_gpr(31, 0x088A65ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 194u, 0x08848CA8u>(ctx, &aot_mem) && ctx.pc == 0x088A65ECu) goto L_088A65EC;
    return;
L_088A65EC:
    ctx.set_gpr(31, 0x088A65F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 893u, 0x0884B594u>(ctx, &aot_mem) && ctx.pc == 0x088A65F4u) goto L_088A65F4;
    return;
L_088A65F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A65FC;
    }
L_088A65FC:
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(31, 0x088A660Cu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3680), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 194u, 0x08848CA8u>(ctx, &aot_mem) && ctx.pc == 0x088A660Cu) goto L_088A660C;
    return;
L_088A660C:
    ctx.set_gpr(31, 0x088A6614u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 156u, 0x08AD490Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6614u) goto L_088A6614;
    return;
L_088A6614:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3672), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A6620;
    }
L_088A6620:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3680)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[20];
        goto L_088A6768;
    }
    goto L_088A6638;
L_088A6638:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3688)));
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3684), 0u);
        goto L_088A6754;
    }
    goto L_088A6644;
L_088A6644:
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(31, 0x088A6650u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(5569), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 167u, 0x08848AFCu>(ctx, &aot_mem) && ctx.pc == 0x088A6650u) goto L_088A6650;
    return;
L_088A6650:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x088A665Cu);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3536));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 234u, 0x08850B30u>(ctx, &aot_mem) && ctx.pc == 0x088A665Cu) goto L_088A665C;
    return;
L_088A665C:
    ctx.set_gpr(31, 0x088A6664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6664u) goto L_088A6664;
    return;
L_088A6664:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A6670u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088A6670u) goto L_088A6670;
    return;
L_088A6670:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A6680u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x088A6680u) goto L_088A6680;
    return;
L_088A6680:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x088A668Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x088A668Cu) goto L_088A668C;
    return;
L_088A668C:
    ctx.set_gpr(31, 0x088A6694u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(3536));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 45u, 0x08850228u>(ctx, &aot_mem) && ctx.pc == 0x088A6694u) goto L_088A6694;
    return;
L_088A6694:
    ctx.set_gpr(31, 0x088A669Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088A6958;
L_088A669C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x088A66A8u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3536));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 234u, 0x08850B30u>(ctx, &aot_mem) && ctx.pc == 0x088A66A8u) goto L_088A66A8;
    return;
L_088A66A8:
    ctx.set_gpr(31, 0x088A66B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x088A66B0u) goto L_088A66B0;
    return;
L_088A66B0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A66BCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088A66BCu) goto L_088A66BC;
    return;
L_088A66BC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A66CCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 462u, 0x0885186Cu>(ctx, &aot_mem) && ctx.pc == 0x088A66CCu) goto L_088A66CC;
    return;
L_088A66CC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x088A66D8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x088A66D8u) goto L_088A66D8;
    return;
L_088A66D8:
    ctx.set_gpr(31, 0x088A66E0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 766u, 0x0885EEC4u>(ctx, &aot_mem) && ctx.pc == 0x088A66E0u) goto L_088A66E0;
    return;
L_088A66E0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088A66F4u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 787u, 0x0885F02Cu>(ctx, &aot_mem) && ctx.pc == 0x088A66F4u) goto L_088A66F4;
    return;
L_088A66F4:
    ctx.set_gpr(31, 0x088A66FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A66FCu) goto L_088A66FC;
    return;
L_088A66FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088A671Cu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x088A671Cu) goto L_088A671C;
    return;
L_088A671C:
    ctx.set_gpr(31, 0x088A6724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 160u, 0x08848A74u>(ctx, &aot_mem) && ctx.pc == 0x088A6724u) goto L_088A6724;
    return;
L_088A6724:
    ctx.set_gpr(31, 0x088A672Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A672Cu) goto L_088A672C;
    return;
L_088A672C:
    ctx.set_gpr(3, 16128u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(51));
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088A674Cu);
    ctx.set_gpr(8, 0u + 0u);
    goto L_088A67BC;
L_088A674C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3672), 0u);
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A6754;
    }
L_088A6754:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3676), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(5569), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088A676C;
      }
      goto L_088A6768;
    }
L_088A6768:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3680), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088A676C;
L_088A676C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3672)));
    goto L_088A6770;
L_088A6770:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 4 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_088A67A0;
    }
    goto L_088A677C;
L_088A677C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088A678Cu);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 646u, 0x0885E758u>(ctx, &aot_mem) && ctx.pc == 0x088A678Cu) goto L_088A678C;
    return;
L_088A678C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(3536));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088A679Cu);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 99u, 0x08850450u>(ctx, &aot_mem) && ctx.pc == 0x088A679Cu) goto L_088A679C;
    return;
L_088A679C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_088A67A0;
L_088A67A0:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A67BC:
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 308u, 0x08AB11D4u>(ctx, &aot_mem); return;
L_088A67D0:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_088A67D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088A67F4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_088A6818;
L_088A67F4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A6800u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 491u, 0x08B05FC0u>(ctx, &aot_mem) && ctx.pc == 0x088A6800u) goto L_088A6800;
    return;
L_088A6800:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6818:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6828:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6830:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088A6848u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 787u, 0x0885F02Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6848u) goto L_088A6848;
    return;
L_088A6848:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(3536));
    ctx.set_gpr(31, 0x088A6854u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 234u, 0x08850B30u>(ctx, &aot_mem) && ctx.pc == 0x088A6854u) goto L_088A6854;
    return;
L_088A6854:
    ctx.set_gpr(31, 0x088A685Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x088A685Cu) goto L_088A685C;
    return;
L_088A685C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A6868u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088A6868u) goto L_088A6868;
    return;
L_088A6868:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A6878u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 462u, 0x0885186Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6878u) goto L_088A6878;
    return;
L_088A6878:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088A6884u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x088A6884u) goto L_088A6884;
    return;
L_088A6884:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6894:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3668)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088A68E0;
      }
      goto L_088A68AC;
    }
L_088A68AC:
    ctx.set_gpr(31, 0x088A68B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A68B4u) goto L_088A68B4;
    return;
L_088A68B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088A68C8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x088A68C8u) goto L_088A68C8;
    return;
L_088A68C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3660)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3660), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088A68E0;
      }
      goto L_088A68D8;
    }
L_088A68D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3660), ctx.gpr[3]);
    goto L_088A68E0;
L_088A68E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A68F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3668)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088A6940;
      }
      goto L_088A6908;
    }
L_088A6908:
    ctx.set_gpr(31, 0x088A6910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6910u) goto L_088A6910;
    return;
L_088A6910:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088A6924u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6924u) goto L_088A6924;
    return;
L_088A6924:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3660)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3660), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_088A6944;
    }
    goto L_088A693C;
L_088A693C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3660), 0u);
    goto L_088A6940;
L_088A6940:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_088A6944;
L_088A6944:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6950:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3660)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6958:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(23536))))));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(3536));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(39));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x088A6990u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 813u, 0x0884EC54u>(ctx, &aot_mem) && ctx.pc == 0x088A6990u) goto L_088A6990;
    return;
L_088A6990:
    ctx.set_gpr(31, 0x088A6998u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088A6998u) goto L_088A6998;
    return;
L_088A6998:
    ctx.set_gpr(17, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088A69ACu);
    ctx.set_gpr(17, ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x088A69ACu) goto L_088A69AC;
    return;
L_088A69AC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6A14;
      }
      goto L_088A69B4;
    }
L_088A69B4:
    ctx.set_gpr(31, 0x088A69BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 895u, 0x08AAF7C8u>(ctx, &aot_mem) && ctx.pc == 0x088A69BCu) goto L_088A69BC;
    return;
L_088A69BC:
    ctx.set_gpr(31, 0x088A69C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x088A69C4u) goto L_088A69C4;
    return;
L_088A69C4:
    ctx.set_gpr(31, 0x088A69CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 977u, 0x08AAFC50u>(ctx, &aot_mem) && ctx.pc == 0x088A69CCu) goto L_088A69CC;
    return;
L_088A69CC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(23536))))));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(3536));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(39));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x088A69F0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 813u, 0x0884EC54u>(ctx, &aot_mem) && ctx.pc == 0x088A69F0u) goto L_088A69F0;
    return;
L_088A69F0:
    ctx.set_gpr(31, 0x088A69F8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088A69F8u) goto L_088A69F8;
    return;
L_088A69F8:
    ctx.set_gpr(17, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088A6A0Cu);
    ctx.set_gpr(17, ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x088A6A0Cu) goto L_088A6A0C;
    return;
L_088A6A0C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A69B4;
      }
      goto L_088A6A14;
    }
L_088A6A14:
    ctx.set_gpr(31, 0x088A6A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x088A6A1Cu) goto L_088A6A1C;
    return;
L_088A6A1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088A6A2Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    goto L_088A6ABC;
L_088A6A2C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, 2245u << 16u);
        goto L_088A6A48;
    }
    goto L_088A6A38;
L_088A6A38:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 2245u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(23536), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_088A6AA4;
      }
      goto L_088A6A48;
    }
L_088A6A48:
    ctx.set_gpr(31, 0x088A6A50u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(23536), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x088A6A50u) goto L_088A6A50;
    return;
L_088A6A50:
    ctx.set_gpr(31, 0x088A6A58u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 157u, 0x0885C91Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6A58u) goto L_088A6A58;
    return;
L_088A6A58:
    ctx.set_gpr(31, 0x088A6A60u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x088A6A60u) goto L_088A6A60;
    return;
L_088A6A60:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A6A70u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_088A6ABC;
L_088A6A70:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088A6AA4;
      }
      goto L_088A6A80;
    }
L_088A6A80:
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_088A6A98;
    }
    goto L_088A6A88;
L_088A6A88:
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(23536), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_088A6AA4;
      }
      goto L_088A6A98;
    }
L_088A6A98:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A6A80;
      }
      goto L_088A6AA4;
    }
L_088A6AA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6ABC:
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
          goto L_088A6AFC;
      }
      goto L_088A6AE0;
    }
L_088A6AE0:
    ctx.set_gpr(31, 0x088A6AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 157u, 0x0885C91Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6AE8u) goto L_088A6AE8;
    return;
L_088A6AE8:
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    goto L_088A6AFC;
L_088A6AFC:
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
L_088A6B14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x088A6B28u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_088A6B3C;
L_088A6B28:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6B3C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(120));
    (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem); return;
L_088A6B54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x088A6B68u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_088A6BC4;
L_088A6B68:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6B7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_088A6BAC;
    }
    goto L_088A6B94;
L_088A6B94:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088A6BA8;
      }
      goto L_088A6BA0;
    }
L_088A6BA0:
    ctx.set_gpr(31, 0x088A6BA8u);
    // nop
    goto L_088A6BBC;
L_088A6BA8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088A6BAC;
L_088A6BAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6BBC:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_088A6BC4:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 15651u << 16u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[3] | 55050u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(132), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(244), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(208), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(228), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[6]);
    goto L_088A6C34;
L_088A6C34:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 68 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[6]);
        goto L_088A6C34;
    }
    goto L_088A6C64;
L_088A6C64:
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(268), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(272), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(276), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6CA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088A7E04;
      }
      goto L_088A6CD8;
    }
L_088A6CD8:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(30884));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6CF4:
    ctx.set_gpr(31, 0x088A6CFCu);
    // nop
    goto L_088A6BC4;
L_088A6CFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088A6D14;
      }
      goto L_088A6D08;
    }
L_088A6D08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088A6D18;
      }
      goto L_088A6D14;
    }
L_088A6D14:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(0u));
    goto L_088A6D18;
L_088A6D18:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(991));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(993));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088A6D70;
      }
      goto L_088A6D34;
    }
L_088A6D34:
    ctx.set_gpr(31, 0x088A6D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6D3Cu) goto L_088A6D3C;
    return;
L_088A6D3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A6D48u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(987));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 847u, 0x08AB31BCu>(ctx, &aot_mem) && ctx.pc == 0x088A6D48u) goto L_088A6D48;
    return;
L_088A6D48:
    ctx.set_gpr(31, 0x088A6D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6D50u) goto L_088A6D50;
    return;
L_088A6D50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A6D5Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(988));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 847u, 0x08AB31BCu>(ctx, &aot_mem) && ctx.pc == 0x088A6D5Cu) goto L_088A6D5C;
    return;
L_088A6D5C:
    ctx.set_gpr(31, 0x088A6D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6D64u) goto L_088A6D64;
    return;
L_088A6D64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A6D70u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(989));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 847u, 0x08AB31BCu>(ctx, &aot_mem) && ctx.pc == 0x088A6D70u) goto L_088A6D70;
    return;
L_088A6D70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088A7E04;
      }
      goto L_088A6D80;
    }
L_088A6D80:
    ctx.set_gpr(31, 0x088A6D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x088A6D88u) goto L_088A6D88;
    return;
L_088A6D88:
    ctx.set_gpr(31, 0x088A6D90u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1038u, 0x08AAFF54u>(ctx, &aot_mem) && ctx.pc == 0x088A6D90u) goto L_088A6D90;
    return;
L_088A6D90:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_088A7E08;
    }
    goto L_088A6D98;
L_088A6D98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088A7E04;
      }
      goto L_088A6DA8;
    }
L_088A6DA8:
    ctx.set_gpr(31, 0x088A6DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6DB0u) goto L_088A6DB0;
    return;
L_088A6DB0:
    ctx.set_gpr(31, 0x088A6DB8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 234u, 0x08844F80u>(ctx, &aot_mem) && ctx.pc == 0x088A6DB8u) goto L_088A6DB8;
    return;
L_088A6DB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7E04;
      }
      goto L_088A6DC0;
    }
L_088A6DC0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
        goto L_088A6E08;
    }
    goto L_088A6DD0;
L_088A6DD0:
    ctx.set_gpr(31, 0x088A6DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088A6DD8u) goto L_088A6DD8;
    return;
L_088A6DD8:
    ctx.set_gpr(31, 0x088A6DE0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088A6DE0u) goto L_088A6DE0;
    return;
L_088A6DE0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(0u));
        goto L_088A6DF8;
    }
    goto L_088A6DEC;
L_088A6DEC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(276), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(0u));
    goto L_088A6DF8;
L_088A6DF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088A7E04;
      }
      goto L_088A6E08;
    }
L_088A6E08:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(31, 0x088A6E14u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6E14u) goto L_088A6E14;
    return;
L_088A6E14:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088A6E24u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 222u, 0x08844EF0u>(ctx, &aot_mem) && ctx.pc == 0x088A6E24u) goto L_088A6E24;
    return;
L_088A6E24:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088A7E04;
      }
      goto L_088A6E40;
    }
L_088A6E40:
    ctx.set_gpr(18, ctx.gpr[16] & 255u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A7720;
      }
      goto L_088A6E4C;
    }
L_088A6E4C:
    ctx.set_gpr(31, 0x088A6E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6E54u) goto L_088A6E54;
    return;
L_088A6E54:
    ctx.set_gpr(3, 49592u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16262u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 26214u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088A6E80u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A6E80u) goto L_088A6E80;
    return;
L_088A6E80:
    ctx.set_gpr(31, 0x088A6E88u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6E88u) goto L_088A6E88;
    return;
L_088A6E88:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A6E98u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_088A7E2C;
L_088A6E98:
    ctx.set_gpr(31, 0x088A6EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6EA0u) goto L_088A6EA0;
    return;
L_088A6EA0:
    ctx.set_gpr(3, 17288u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16262u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 26214u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(31, 0x088A6ECCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A6ECCu) goto L_088A6ECC;
    return;
L_088A6ECC:
    ctx.set_gpr(31, 0x088A6ED4u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6ED4u) goto L_088A6ED4;
    return;
L_088A6ED4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(34))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A6EE4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_088A7E2C;
L_088A6EE4:
    ctx.set_gpr(31, 0x088A6EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6EECu) goto L_088A6EEC;
    return;
L_088A6EEC:
    ctx.set_gpr(3, 16864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17302u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16243u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 13107u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x088A6F20u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A6F20u) goto L_088A6F20;
    return;
L_088A6F20:
    ctx.set_gpr(31, 0x088A6F28u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6F28u) goto L_088A6F28;
    return;
L_088A6F28:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(36))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A6F38u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_088A7E2C;
L_088A6F38:
    ctx.set_gpr(31, 0x088A6F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6F40u) goto L_088A6F40;
    return;
L_088A6F40:
    ctx.set_gpr(3, 16864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17302u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16243u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 13107u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088A6F74u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A6F74u) goto L_088A6F74;
    return;
L_088A6F74:
    ctx.set_gpr(31, 0x088A6F7Cu);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6F7Cu) goto L_088A6F7C;
    return;
L_088A6F7C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(37))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A6F8Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_088A7E2C;
L_088A6F8C:
    ctx.set_gpr(31, 0x088A6F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6F94u) goto L_088A6F94;
    return;
L_088A6F94:
    ctx.set_gpr(3, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 49760u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16166u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 26214u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x088A6FC4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A6FC4u) goto L_088A6FC4;
    return;
L_088A6FC4:
    ctx.set_gpr(31, 0x088A6FCCu);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6FCCu) goto L_088A6FCC;
    return;
L_088A6FCC:
    ctx.set_gpr(3, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17316u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16166u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 26214u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(45));
    ctx.set_gpr(31, 0x088A6FFCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A6FFCu) goto L_088A6FFC;
    return;
L_088A6FFC:
    ctx.set_gpr(31, 0x088A7004u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7004u) goto L_088A7004;
    return;
L_088A7004:
    ctx.set_gpr(3, 16930u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17308u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16153u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 39322u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(47));
    ctx.set_gpr(31, 0x088A7038u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7038u) goto L_088A7038;
    return;
L_088A7038:
    ctx.set_gpr(31, 0x088A7040u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7040u) goto L_088A7040;
    return;
L_088A7040:
    ctx.set_gpr(3, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17261u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16140u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x088A7070u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7070u) goto L_088A7070;
    return;
L_088A7070:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(21));
    goto L_088A7078;
L_088A7078:
    ctx.set_gpr(31, 0x088A7080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7080u) goto L_088A7080;
    return;
L_088A7080:
    ctx.set_gpr(3, 16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 49628u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16140u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(30));
    ctx.set_gpr(31, 0x088A70B0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A70B0u) goto L_088A70B0;
    return;
L_088A70B0:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 26 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088A7078;
      }
      goto L_088A70C4;
    }
L_088A70C4:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(26));
    goto L_088A70C8;
L_088A70C8:
    ctx.set_gpr(31, 0x088A70D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A70D0u) goto L_088A70D0;
    return;
L_088A70D0:
    ctx.set_gpr(3, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17239u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16140u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088A7100u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7100u) goto L_088A7100;
    return;
L_088A7100:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 34 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088A70C8;
      }
      goto L_088A7114;
    }
L_088A7114:
    ctx.set_gpr(31, 0x088A711Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A711Cu) goto L_088A711C;
    return;
L_088A711C:
    ctx.set_gpr(3, 17382u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16656u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16204u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x088A7150u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7150u) goto L_088A7150;
    return;
L_088A7150:
    ctx.set_gpr(31, 0x088A7158u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7158u) goto L_088A7158;
    return;
L_088A7158:
    ctx.set_gpr(3, 17375u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16656u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16204u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x088A718Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A718Cu) goto L_088A718C;
    return;
L_088A718C:
    ctx.set_gpr(31, 0x088A7194u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7194u) goto L_088A7194;
    return;
L_088A7194:
    ctx.set_gpr(3, 17369u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16656u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16204u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x088A71C4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A71C4u) goto L_088A71C4;
    return;
L_088A71C4:
    ctx.set_gpr(31, 0x088A71CCu);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A71CCu) goto L_088A71CC;
    return;
L_088A71CC:
    ctx.set_gpr(3, 17362u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16656u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16204u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x088A7200u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7200u) goto L_088A7200;
    return;
L_088A7200:
    ctx.set_gpr(31, 0x088A7208u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7208u) goto L_088A7208;
    return;
L_088A7208:
    ctx.set_gpr(3, 17355u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16656u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16204u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x088A723Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A723Cu) goto L_088A723C;
    return;
L_088A723C:
    ctx.set_gpr(31, 0x088A7244u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7244u) goto L_088A7244;
    return;
L_088A7244:
    ctx.set_gpr(3, 17348u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16656u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16204u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x088A7278u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7278u) goto L_088A7278;
    return;
L_088A7278:
    ctx.set_gpr(31, 0x088A7280u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7280u) goto L_088A7280;
    return;
L_088A7280:
    ctx.set_gpr(3, 17342u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16656u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16204u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x088A72B0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A72B0u) goto L_088A72B0;
    return;
L_088A72B0:
    ctx.set_gpr(31, 0x088A72B8u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A72B8u) goto L_088A72B8;
    return;
L_088A72B8:
    ctx.set_gpr(3, 49592u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16268u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088A72E4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A72E4u) goto L_088A72E4;
    return;
L_088A72E4:
    ctx.set_gpr(31, 0x088A72ECu);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A72ECu) goto L_088A72EC;
    return;
L_088A72EC:
    ctx.set_gpr(3, 17288u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16268u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A7318u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7318u) goto L_088A7318;
    return;
L_088A7318:
    ctx.set_gpr(31, 0x088A7320u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7320u) goto L_088A7320;
    return;
L_088A7320:
    ctx.set_gpr(3, 16680u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 49512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16153u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 39322u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(30));
    ctx.set_gpr(31, 0x088A7350u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7350u) goto L_088A7350;
    return;
L_088A7350:
    ctx.set_gpr(31, 0x088A7358u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7358u) goto L_088A7358;
    return;
L_088A7358:
    ctx.set_gpr(3, 16864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17302u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x088A7388u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7388u) goto L_088A7388;
    return;
L_088A7388:
    ctx.set_gpr(31, 0x088A7390u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7390u) goto L_088A7390;
    return;
L_088A7390:
    ctx.set_gpr(3, 16864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17302u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16230u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 26214u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088A73C4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A73C4u) goto L_088A73C4;
    return;
L_088A73C4:
    ctx.set_gpr(31, 0x088A73CCu);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A73CCu) goto L_088A73CC;
    return;
L_088A73CC:
    ctx.set_gpr(3, 17367u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17309u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(21));
    ctx.set_gpr(31, 0x088A73FCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A73FCu) goto L_088A73FC;
    return;
L_088A73FC:
    ctx.set_gpr(31, 0x088A7404u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7404u) goto L_088A7404;
    return;
L_088A7404:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(39))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A7414u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_088A7E2C;
L_088A7414:
    ctx.set_gpr(31, 0x088A741Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A741Cu) goto L_088A741C;
    return;
L_088A741C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088A7444u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(31));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 441u, 0x08846BA4u>(ctx, &aot_mem) && ctx.pc == 0x088A7444u) goto L_088A7444;
    return;
L_088A7444:
    ctx.set_gpr(31, 0x088A744Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A744Cu) goto L_088A744C;
    return;
L_088A744C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088A7474u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 441u, 0x08846BA4u>(ctx, &aot_mem) && ctx.pc == 0x088A7474u) goto L_088A7474;
    return;
L_088A7474:
    ctx.set_gpr(31, 0x088A747Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A747Cu) goto L_088A747C;
    return;
L_088A747C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088A74A4u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 441u, 0x08846BA4u>(ctx, &aot_mem) && ctx.pc == 0x088A74A4u) goto L_088A74A4;
    return;
L_088A74A4:
    ctx.set_gpr(31, 0x088A74ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A74ACu) goto L_088A74AC;
    return;
L_088A74AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088A74D4u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(34));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 441u, 0x08846BA4u>(ctx, &aot_mem) && ctx.pc == 0x088A74D4u) goto L_088A74D4;
    return;
L_088A74D4:
    ctx.set_gpr(31, 0x088A74DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A74DCu) goto L_088A74DC;
    return;
L_088A74DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088A7504u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(35));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 441u, 0x08846BA4u>(ctx, &aot_mem) && ctx.pc == 0x088A7504u) goto L_088A7504;
    return;
L_088A7504:
    ctx.set_gpr(31, 0x088A750Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A750Cu) goto L_088A750C;
    return;
L_088A750C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088A7534u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(31));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 441u, 0x08846BA4u>(ctx, &aot_mem) && ctx.pc == 0x088A7534u) goto L_088A7534;
    return;
L_088A7534:
    ctx.set_gpr(31, 0x088A753Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A753Cu) goto L_088A753C;
    return;
L_088A753C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088A7564u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 441u, 0x08846BA4u>(ctx, &aot_mem) && ctx.pc == 0x088A7564u) goto L_088A7564;
    return;
L_088A7564:
    ctx.set_gpr(31, 0x088A756Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A756Cu) goto L_088A756C;
    return;
L_088A756C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088A7594u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 441u, 0x08846BA4u>(ctx, &aot_mem) && ctx.pc == 0x088A7594u) goto L_088A7594;
    return;
L_088A7594:
    ctx.set_gpr(31, 0x088A759Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A759Cu) goto L_088A759C;
    return;
L_088A759C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x088A75C4u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(34));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 441u, 0x08846BA4u>(ctx, &aot_mem) && ctx.pc == 0x088A75C4u) goto L_088A75C4;
    return;
L_088A75C4:
    ctx.set_gpr(31, 0x088A75CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A75CCu) goto L_088A75CC;
    return;
L_088A75CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x088A75F4u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(35));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 441u, 0x08846BA4u>(ctx, &aot_mem) && ctx.pc == 0x088A75F4u) goto L_088A75F4;
    return;
L_088A75F4:
    ctx.set_gpr(31, 0x088A75FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A75FCu) goto L_088A75FC;
    return;
L_088A75FC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A760Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_088A7E2C;
L_088A760C:
    ctx.set_gpr(31, 0x088A7614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7614u) goto L_088A7614;
    return;
L_088A7614:
    ctx.set_gpr(3, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16160u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(31, 0x088A7640u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7640u) goto L_088A7640;
    return;
L_088A7640:
    ctx.set_gpr(31, 0x088A7648u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7648u) goto L_088A7648;
    return;
L_088A7648:
    ctx.set_gpr(3, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16157u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 28836u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(46));
    ctx.set_gpr(31, 0x088A7678u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7678u) goto L_088A7678;
    return;
L_088A7678:
    ctx.set_gpr(31, 0x088A7680u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7680u) goto L_088A7680;
    return;
L_088A7680:
    ctx.set_gpr(3, 17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16153u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 39322u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088A76ACu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A76ACu) goto L_088A76AC;
    return;
L_088A76AC:
    ctx.set_gpr(31, 0x088A76B4u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A76B4u) goto L_088A76B4;
    return;
L_088A76B4:
    ctx.set_gpr(3, 17116u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16153u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 39322u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088A76E4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A76E4u) goto L_088A76E4;
    return;
L_088A76E4:
    ctx.set_gpr(31, 0x088A76ECu);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A76ECu) goto L_088A76EC;
    return;
L_088A76EC:
    ctx.set_gpr(3, 17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16153u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 39322u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088A771Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A771Cu) goto L_088A771C;
    return;
L_088A771C:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_088A7720;
L_088A7720:
    ctx.set_gpr(31, 0x088A7728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7728u) goto L_088A7728;
    return;
L_088A7728:
    ctx.set_gpr(3, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16102u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 26214u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088A7758u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7758u) goto L_088A7758;
    return;
L_088A7758:
    ctx.set_gpr(31, 0x088A7760u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088A7760u) goto L_088A7760;
    return;
L_088A7760:
    ctx.set_gpr(31, 0x088A7768u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088A7768u) goto L_088A7768;
    return;
L_088A7768:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 16076u << 16u);
        goto L_088A77BC;
    }
    goto L_088A7774;
L_088A7774:
    ctx.set_gpr(2, 16076u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(31, 0x088A7784u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7784u) goto L_088A7784;
    return;
L_088A7784:
    ctx.set_gpr(3, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16992u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16076u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088A77B4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A77B4u) goto L_088A77B4;
    return;
L_088A77B4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088A77FC;
      }
      goto L_088A77BC;
    }
L_088A77BC:
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(31, 0x088A77C8u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A77C8u) goto L_088A77C8;
    return;
L_088A77C8:
    ctx.set_gpr(3, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17187u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16076u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088A77F8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A77F8u) goto L_088A77F8;
    return;
L_088A77F8:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_088A77FC;
L_088A77FC:
    ctx.set_gpr(31, 0x088A7804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7804u) goto L_088A7804;
    return;
L_088A7804:
    ctx.set_gpr(3, 17329u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16076u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088A7838u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7838u) goto L_088A7838;
    return;
L_088A7838:
    ctx.set_gpr(31, 0x088A7840u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7840u) goto L_088A7840;
    return;
L_088A7840:
    ctx.set_gpr(3, 17373u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16076u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088A7874u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7874u) goto L_088A7874;
    return;
L_088A7874:
    ctx.set_gpr(31, 0x088A787Cu);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A787Cu) goto L_088A787C;
    return;
L_088A787C:
    ctx.set_gpr(3, 17307u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16076u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x088A78B0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A78B0u) goto L_088A78B0;
    return;
L_088A78B0:
    ctx.set_gpr(31, 0x088A78B8u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A78B8u) goto L_088A78B8;
    return;
L_088A78B8:
    ctx.set_gpr(3, 17349u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16076u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x088A78ECu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A78ECu) goto L_088A78EC;
    return;
L_088A78EC:
    ctx.set_gpr(31, 0x088A78F4u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A78F4u) goto L_088A78F4;
    return;
L_088A78F4:
    ctx.set_gpr(3, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17187u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16076u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088A7924u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7924u) goto L_088A7924;
    return;
L_088A7924:
    ctx.set_gpr(31, 0x088A792Cu);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A792Cu) goto L_088A792C;
    return;
L_088A792C:
    ctx.set_gpr(3, 17272u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16076u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(25));
    ctx.set_gpr(31, 0x088A7958u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7958u) goto L_088A7958;
    return;
L_088A7958:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088A7C28;
      }
      goto L_088A7960;
    }
L_088A7960:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(276)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_088A7C2C;
    }
    goto L_088A796C;
L_088A796C:
    ctx.set_gpr(31, 0x088A7974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7974u) goto L_088A7974;
    return;
L_088A7974:
    ctx.set_gpr(3, 17200u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088A7998u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7998u) goto L_088A7998;
    return;
L_088A7998:
    ctx.set_gpr(31, 0x088A79A0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088A79A0u) goto L_088A79A0;
    return;
L_088A79A0:
    ctx.set_gpr(31, 0x088A79A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 878u, 0x0885B56Cu>(ctx, &aot_mem) && ctx.pc == 0x088A79A8u) goto L_088A79A8;
    return;
L_088A79A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088A79FC;
      }
      goto L_088A79B4;
    }
L_088A79B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A79C4;
      }
      goto L_088A79BC;
    }
L_088A79BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7A34;
      }
      goto L_088A79C4;
    }
L_088A79C4:
    ctx.set_gpr(31, 0x088A79CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A79CCu) goto L_088A79CC;
    return;
L_088A79CC:
    ctx.set_gpr(3, 17200u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17144u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(22));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088A79F4u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A79F4u) goto L_088A79F4;
    return;
L_088A79F4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088A7A68;
      }
      goto L_088A79FC;
    }
L_088A79FC:
    ctx.set_gpr(31, 0x088A7A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7A04u) goto L_088A7A04;
    return;
L_088A7A04:
    ctx.set_gpr(3, 17200u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17144u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088A7A2Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7A2Cu) goto L_088A7A2C;
    return;
L_088A7A2C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088A7A68;
      }
      goto L_088A7A34;
    }
L_088A7A34:
    ctx.set_gpr(31, 0x088A7A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7A3Cu) goto L_088A7A3C;
    return;
L_088A7A3C:
    ctx.set_gpr(3, 17200u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17144u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088A7A64u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7A64u) goto L_088A7A64;
    return;
L_088A7A64:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_088A7A68;
L_088A7A68:
    ctx.set_gpr(19, 0u + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    goto L_088A7A70;
L_088A7A70:
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16816u << 16u);
    ctx.set_gpr(18, ctx.gpr[17] + ctx.gpr[19]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17274u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088A7A94u);
    ctx.fpr[21] = ctx.fpr[0] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7A94u) goto L_088A7A94;
    return;
L_088A7A94:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.set_gpr(3, 17146u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(15));
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088A7AB8u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7AB8u) goto L_088A7AB8;
    return;
L_088A7AB8:
    ctx.set_gpr(31, 0x088A7AC0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7AC0u) goto L_088A7AC0;
    return;
L_088A7AC0:
    ctx.set_gpr(3, 17146u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16051u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 13107u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x088A7AECu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7AECu) goto L_088A7AEC;
    return;
L_088A7AEC:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
        goto L_088A7A70;
    }
    goto L_088A7B00;
L_088A7B00:
    ctx.set_gpr(18, 0u + 0u);
    goto L_088A7B04;
L_088A7B04:
    ctx.set_gpr(31, 0x088A7B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7B0Cu) goto L_088A7B0C;
    return;
L_088A7B0C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16736u << 16u);
    ctx.set_gpr(8, 17275u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17175u << 16u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x088A7B4Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7B4Cu) goto L_088A7B4C;
    return;
L_088A7B4C:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088A7B04;
      }
      goto L_088A7B60;
    }
L_088A7B60:
    ctx.set_gpr(18, 0u + 0u);
    goto L_088A7B64;
L_088A7B64:
    ctx.set_gpr(31, 0x088A7B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7B6Cu) goto L_088A7B6C;
    return;
L_088A7B6C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16736u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(7, 0u + 0u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17305u << 16u);
    ctx.set_gpr(8, ctx.gpr[3] | 32768u);
    ctx.set_gpr(3, 17202u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x088A7BB0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7BB0u) goto L_088A7BB0;
    return;
L_088A7BB0:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088A7B64;
      }
      goto L_088A7BC4;
    }
L_088A7BC4:
    ctx.set_gpr(18, 0u + 0u);
    goto L_088A7BC8;
L_088A7BC8:
    ctx.set_gpr(31, 0x088A7BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7BD0u) goto L_088A7BD0;
    return;
L_088A7BD0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16736u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(7, 0u + 0u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17305u << 16u);
    ctx.set_gpr(8, ctx.gpr[3] | 32768u);
    ctx.set_gpr(3, 17231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x088A7C14u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 343u, 0x088457D0u>(ctx, &aot_mem) && ctx.pc == 0x088A7C14u) goto L_088A7C14;
    return;
L_088A7C14:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088A7BC8;
      }
      goto L_088A7C28;
    }
L_088A7C28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_088A7C2C;
L_088A7C2C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088A7C34;
L_088A7C34:
    ctx.set_gpr(16, ctx.gpr[16] & 255u);
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(39));
        goto L_088A7D94;
    }
    goto L_088A7C40;
L_088A7C40:
    ctx.set_gpr(31, 0x088A7C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7C48u) goto L_088A7C48;
    return;
L_088A7C48:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A7C58u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A7C58u) goto L_088A7C58;
    return;
L_088A7C58:
    ctx.set_gpr(31, 0x088A7C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7C60u) goto L_088A7C60;
    return;
L_088A7C60:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(34))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A7C70u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A7C70u) goto L_088A7C70;
    return;
L_088A7C70:
    ctx.set_gpr(31, 0x088A7C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7C78u) goto L_088A7C78;
    return;
L_088A7C78:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(36))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A7C88u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A7C88u) goto L_088A7C88;
    return;
L_088A7C88:
    ctx.set_gpr(31, 0x088A7C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7C90u) goto L_088A7C90;
    return;
L_088A7C90:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(37))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A7CA0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A7CA0u) goto L_088A7CA0;
    return;
L_088A7CA0:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(17));
    goto L_088A7CA4;
L_088A7CA4:
    ctx.set_gpr(31, 0x088A7CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7CACu) goto L_088A7CAC;
    return;
L_088A7CAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[18]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(23))))));
    ctx.set_gpr(31, 0x088A7CC0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A7CC0u) goto L_088A7CC0;
    return;
L_088A7CC0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 34 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A7CA4;
      }
      goto L_088A7CD0;
    }
L_088A7CD0:
    ctx.set_gpr(18, 0u + 0u);
    goto L_088A7CD4;
L_088A7CD4:
    ctx.set_gpr(31, 0x088A7CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7CDCu) goto L_088A7CDC;
    return;
L_088A7CDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[18]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(26))))));
    ctx.set_gpr(31, 0x088A7CF0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A7CF0u) goto L_088A7CF0;
    return;
L_088A7CF0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A7CD4;
      }
      goto L_088A7D00;
    }
L_088A7D00:
    ctx.set_gpr(31, 0x088A7D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7D08u) goto L_088A7D08;
    return;
L_088A7D08:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(57))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A7D18u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A7D18u) goto L_088A7D18;
    return;
L_088A7D18:
    ctx.set_gpr(31, 0x088A7D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7D20u) goto L_088A7D20;
    return;
L_088A7D20:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(58))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A7D30u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A7D30u) goto L_088A7D30;
    return;
L_088A7D30:
    ctx.set_gpr(31, 0x088A7D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7D38u) goto L_088A7D38;
    return;
L_088A7D38:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(59))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A7D48u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A7D48u) goto L_088A7D48;
    return;
L_088A7D48:
    ctx.set_gpr(31, 0x088A7D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7D50u) goto L_088A7D50;
    return;
L_088A7D50:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(60))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A7D60u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A7D60u) goto L_088A7D60;
    return;
L_088A7D60:
    ctx.set_gpr(31, 0x088A7D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7D68u) goto L_088A7D68;
    return;
L_088A7D68:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(61))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A7D78u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A7D78u) goto L_088A7D78;
    return;
L_088A7D78:
    ctx.set_gpr(31, 0x088A7D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7D80u) goto L_088A7D80;
    return;
L_088A7D80:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(39))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A7D90u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A7D90u) goto L_088A7D90;
    return;
L_088A7D90:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(39));
    goto L_088A7D94;
L_088A7D94:
    ctx.set_gpr(31, 0x088A7D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7D9Cu) goto L_088A7D9C;
    return;
L_088A7D9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[18]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(23))))));
    ctx.set_gpr(31, 0x088A7DB0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A7DB0u) goto L_088A7DB0;
    return;
L_088A7DB0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 76 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A7D94;
      }
      goto L_088A7DC0;
    }
L_088A7DC0:
    if (ctx.gpr[16] != 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
        goto L_088A7DD8;
    }
    goto L_088A7DC8;
L_088A7DC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088A7E04;
      }
      goto L_088A7DD8;
    }
L_088A7DD8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088A7E08;
      }
      goto L_088A7DE4;
    }
L_088A7DE4:
    ctx.set_gpr(31, 0x088A7DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 681u, 0x088AA8E0u>(ctx, &aot_mem) && ctx.pc == 0x088A7DECu) goto L_088A7DEC;
    return;
L_088A7DEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7E04;
      }
      goto L_088A7DF4;
    }
L_088A7DF4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088A7E08;
      }
      goto L_088A7E04;
    }
L_088A7E04:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088A7E08;
L_088A7E08:
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
L_088A7E2C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(13520), static_cast<std::uint8_t>(ctx.gpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A7E4C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A7E54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088A7E84;
      }
      goto L_088A7E78;
    }
L_088A7E78:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_088A7F7C;
    }
    goto L_088A7E84;
L_088A7E84:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[16]);
    goto L_088A7E8C;
L_088A7E8C:
    ctx.set_gpr(19, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(23))))));
    ctx.set_gpr(18, ctx.gpr[3] + static_cast<std::uint32_t>(23));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[19] == ctx.gpr[3]) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_088A7EC0;
    }
    goto L_088A7EA0;
L_088A7EA0:
    ctx.set_gpr(31, 0x088A7EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7EA8u) goto L_088A7EA8;
    return;
L_088A7EA8:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088A7EB4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 438u, 0x08846B50u>(ctx, &aot_mem) && ctx.pc == 0x088A7EB4u) goto L_088A7EB4;
    return;
L_088A7EB4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088A7EC0;
L_088A7EC0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 76 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[16]);
        goto L_088A7E8C;
    }
    goto L_088A7ECC;
L_088A7ECC:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[16]);
    goto L_088A7ED4;
L_088A7ED4:
    ctx.set_gpr(19, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(18, ctx.gpr[3] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[19] == ctx.gpr[3]) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_088A7F08;
    }
    goto L_088A7EE8;
L_088A7EE8:
    ctx.set_gpr(31, 0x088A7EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7EF0u) goto L_088A7EF0;
    return;
L_088A7EF0:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088A7EFCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 431u, 0x08846ABCu>(ctx, &aot_mem) && ctx.pc == 0x088A7EFCu) goto L_088A7EFC;
    return;
L_088A7EFC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088A7F08;
L_088A7F08:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[16]);
        goto L_088A7ED4;
    }
    goto L_088A7F14;
L_088A7F14:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7F78;
      }
      goto L_088A7F24;
    }
L_088A7F24:
    ctx.set_gpr(31, 0x088A7F2Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 697u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088A7F2Cu) goto L_088A7F2C;
    return;
L_088A7F2C:
    ctx.set_gpr(31, 0x088A7F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7F34u) goto L_088A7F34;
    return;
L_088A7F34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(987));
    ctx.set_gpr(31, 0x088A7F44u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 887u, 0x08AB33C4u>(ctx, &aot_mem) && ctx.pc == 0x088A7F44u) goto L_088A7F44;
    return;
L_088A7F44:
    ctx.set_gpr(31, 0x088A7F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7F4Cu) goto L_088A7F4C;
    return;
L_088A7F4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(988));
    ctx.set_gpr(31, 0x088A7F5Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 887u, 0x08AB33C4u>(ctx, &aot_mem) && ctx.pc == 0x088A7F5Cu) goto L_088A7F5C;
    return;
L_088A7F5C:
    ctx.set_gpr(31, 0x088A7F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7F64u) goto L_088A7F64;
    return;
L_088A7F64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(989));
    ctx.set_gpr(31, 0x088A7F74u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 887u, 0x08AB33C4u>(ctx, &aot_mem) && ctx.pc == 0x088A7F74u) goto L_088A7F74;
    return;
L_088A7F74:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088A7F78;
L_088A7F78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_088A7F7C;
L_088A7F7C:
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
L_088A7F94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 118u, 0x088A85D0u>(ctx, &aot_mem); return;
      }
      goto L_088A7FBC;
    }
L_088A7FBC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    if (ctx.gpr[3] == ctx.gpr[16]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
        (void)rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 84u, 0x088A840Cu>(ctx, &aot_mem); return;
    }
    goto L_088A7FC8;
L_088A7FC8:
    ctx.set_gpr(31, 0x088A7FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7FD0u) goto L_088A7FD0;
    return;
L_088A7FD0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A7FE0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088A7FE0u) goto L_088A7FE0;
    return;
L_088A7FE0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 30u, 0x088A8160u>(ctx, &aot_mem); return;
      }
      goto L_088A7FEC;
    }
L_088A7FEC:
    ctx.set_gpr(31, 0x088A7FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x088A7FF4u) goto L_088A7FF4;
    return;
L_088A7FF4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088A8004u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 413u, 0x088465E4u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0040(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0040_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_40(Runtime &runtime) {
    runtime.register_generated_unit(40u, 0x088A4000u, 16384u, &recomp_unit_0040, &recomp_unit_0040_entry);
    runtime.register_function(0x088A4000u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4008u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A400Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4014u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A401Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4024u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A402Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4034u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A403Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4044u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A404Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4058u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A408Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4094u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A409Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A40B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A40C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A40C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A40E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A40ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A40F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A410Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4114u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4120u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A412Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A415Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A416Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4180u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4190u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4194u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A419Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A41A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A41B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A41BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A41C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A41DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A41E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A420Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4238u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A424Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4258u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A426Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4284u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A428Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A42A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A42B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A42BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A42CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A42D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A42FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4308u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4310u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4318u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4320u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A432Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4380u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4388u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A43B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A43CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A43F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4408u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4410u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A441Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4424u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A444Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4454u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4464u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A448Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A449Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A44B8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A44C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A44C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A44D4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A44F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4504u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4520u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4528u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A452Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A453Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4564u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A456Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4578u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A45A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A45A8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A45B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A45F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4618u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4634u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4648u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A465Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4668u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A466Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4684u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A46B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A46C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A46C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A46ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4704u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4718u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4720u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4754u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A476Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4774u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A478Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4798u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A47A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A47B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A47C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A47D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A47E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A47E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A47ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4820u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4830u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4854u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4864u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A487Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A48B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A48C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A48C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A48D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A48E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4964u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A49B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A49B8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4A44u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4A54u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4A80u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4A8Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4AA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4AA8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4AB0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4ABCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4AD0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4AE0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4AFCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4B0Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4B14u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4B20u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4B28u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4B30u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4B38u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4B48u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4B5Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4B64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4B6Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4B84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4B94u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4BB0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4BD0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4BD8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4BE8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4BFCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4C0Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4C28u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4C2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4C3Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4C50u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4C6Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4C74u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4C7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4C8Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4C98u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4CACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4CB0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4CBCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4CC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4CD4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4CECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4CF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4D08u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4D14u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4D20u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4D2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4D38u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4D4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4D60u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4D64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4D80u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4D88u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4DA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4DACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4DC4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4DCCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4DDCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4DE4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4DF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E00u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E14u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E24u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E44u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E50u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E68u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E70u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E80u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E88u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E9Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4EA4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4EACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4EC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4ED0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4F0Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4F24u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4F98u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4FA4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4FACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5018u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5024u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5034u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5040u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5048u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5050u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5058u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5060u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5068u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5078u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5080u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5088u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5090u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5098u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A50A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A50A8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A50B8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A50C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A50C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A50D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A50D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A50E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A50F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5108u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5110u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5118u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5124u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5130u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5138u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A513Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5148u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5154u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5168u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5170u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5178u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A51A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A51B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A51BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A51C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A51CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A51D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A51DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A51E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A51FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5208u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5220u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5230u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A523Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5244u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5250u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5258u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A525Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5264u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A526Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5278u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5288u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5298u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A52A8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A52B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A52B8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A52C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A52CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A52D4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A52DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A52E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A52F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A52F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5318u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A532Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5334u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A534Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A536Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5374u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A538Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5394u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A53A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A53A8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A53B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A53D4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A53D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A53ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A53F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A53FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5404u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5420u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5428u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5434u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5454u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A545Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5468u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5484u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5488u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A549Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A54A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A54ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A54B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A54BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A54C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A54CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A54D4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A54E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A54F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5534u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5550u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5558u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5564u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5570u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A557Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5584u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5588u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A559Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A55A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A55D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A55D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A55E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5638u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5654u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A565Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5668u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5674u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A567Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5688u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5690u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A569Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A56ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A56B8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A56C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A56C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A56D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A56E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A56ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A56F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A56FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A570Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A571Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5724u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5730u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5750u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5760u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A576Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5774u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A577Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A578Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5798u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57B8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5804u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5818u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5820u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5824u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A582Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5834u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5868u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5870u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A58A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A58ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A58E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A58E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A591Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5924u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5958u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5960u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5994u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A599Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A59D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A59D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A10u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A18u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A50u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A60u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A70u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A80u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A8Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A94u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5AA4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5AACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5AB4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5ABCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5AC4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5AD8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5AE0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5AF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5AFCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B10u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B18u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B34u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B48u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B50u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B6Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B80u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B88u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5BA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5BA8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5BC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5BE0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5BE8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C04u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C20u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C24u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C3Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C54u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C6Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C74u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C8Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C98u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5CA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5CACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5CBCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5CC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5CD0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5CD8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5CE8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5CF0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5CFCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D04u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D08u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D1Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D50u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D60u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D8Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D98u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5DB4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5DBCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5DC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5DD0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5DD8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5DE4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5DECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5DF0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5DF8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E0Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E14u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E28u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E30u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E44u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E60u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E68u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E90u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5EA4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5EACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5EC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5ECCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5EE4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5EF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5EFCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F14u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F1Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F3Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F44u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F58u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F74u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F94u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F9Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5FA8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5FB0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5FB8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5FCCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5FD4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5FECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5FF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6000u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6008u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6010u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6018u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6038u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6044u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A604Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6054u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6060u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A606Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6074u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6080u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6088u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6090u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A60A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A60ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A60C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A60C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A60DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A60E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A60F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6100u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6114u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A611Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6128u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A613Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6158u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6160u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A616Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6174u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A617Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6188u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A619Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A61A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A61ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A61B8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A61CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A61D4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A61DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A61E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A61F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A61F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6204u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6218u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6220u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6228u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6234u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6248u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6250u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6258u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6260u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6268u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A627Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6284u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A628Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6298u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A62A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A62ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A62B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A62B8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A62C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A62D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A62D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A62F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A630Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6318u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6320u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A632Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A633Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6348u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6350u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6354u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A635Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6370u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6380u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A638Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6394u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A639Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A63A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A63ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A63C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A63CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A63D4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A63E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A63F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A63FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6410u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6418u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A642Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6434u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6448u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6450u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6464u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A646Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6480u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6488u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6494u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A64A8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A64B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A64C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A64CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A64F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6500u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A650Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6514u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A652Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6538u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6540u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6548u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6554u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6560u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6568u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6570u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6588u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6590u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A65ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A65B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A65BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A65CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A65D4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A65DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A65E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A65ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A65F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A65FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A660Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6614u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6620u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6638u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6644u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6650u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A665Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6664u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6670u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6680u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A668Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6694u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A669Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A66A8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A66B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A66BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A66CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A66D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A66E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A66F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A66FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A671Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6724u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A672Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A674Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6754u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6768u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A676Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6770u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A677Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A678Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A679Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A67A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A67BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A67D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A67D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A67F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6800u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6818u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6828u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6830u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6848u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6854u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A685Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6868u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6878u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6884u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6894u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A68ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A68B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A68C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A68D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A68E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A68F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6908u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6910u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6924u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A693Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6940u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6944u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6950u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6958u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6990u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6998u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A69ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A69B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A69BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A69C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A69CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A69F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A69F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A0Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A14u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A1Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A38u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A48u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A50u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A58u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A60u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A70u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A80u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A88u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A98u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6AA4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6ABCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6AE0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6AE8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6AFCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6B14u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6B28u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6B3Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6B54u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6B68u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6B7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6B94u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6BA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6BA8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6BACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6BBCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6BC4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6C34u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6C64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6CA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6CD8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6CF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6CFCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D08u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D14u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D18u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D34u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D3Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D48u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D50u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D5Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D70u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D80u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D88u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D90u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D98u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6DA8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6DB0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6DB8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6DC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6DD0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6DD8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6DE0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6DECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6DF8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E08u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E14u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E24u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E40u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E54u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E80u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E88u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E98u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6EA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6ECCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6ED4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6EE4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6EECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F20u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F28u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F38u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F40u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F74u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F8Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F94u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6FC4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6FCCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6FFCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7004u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7038u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7040u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7070u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7078u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7080u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A70B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A70C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A70C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A70D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7100u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7114u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A711Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7150u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7158u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A718Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7194u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A71C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A71CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7200u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7208u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A723Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7244u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7278u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7280u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A72B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A72B8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A72E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A72ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7318u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7320u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7350u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7358u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7388u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7390u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A73C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A73CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A73FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7404u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7414u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A741Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7444u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A744Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7474u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A747Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A74A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A74ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A74D4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A74DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7504u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A750Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7534u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A753Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7564u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A756Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7594u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A759Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A75C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A75CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A75F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A75FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A760Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7614u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7640u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7648u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7678u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7680u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A76ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A76B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A76E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A76ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A771Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7720u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7728u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7758u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7760u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7768u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7774u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7784u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A77B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A77BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A77C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A77F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A77FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7804u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7838u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7840u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7874u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A787Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A78B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A78B8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A78ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A78F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7924u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A792Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7958u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7960u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A796Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7974u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7998u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A79A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A79A8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A79B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A79BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A79C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A79CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A79F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A79FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A04u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A34u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A3Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A68u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A70u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A94u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7AB8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7AC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7AECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B00u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B04u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B0Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B60u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B6Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7BB0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7BC4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7BC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7BD0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C14u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C28u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C34u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C40u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C48u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C58u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C60u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C70u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C78u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C88u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C90u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CA4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CD0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CD4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CDCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CF0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D00u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D08u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D18u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D20u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D30u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D38u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D48u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D50u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D60u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D68u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D78u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D80u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D90u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D94u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D9Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DB0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DD8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DE4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E04u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E08u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E54u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E78u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E8Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7EA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7EA8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7EB4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7EC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7ECCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7ED4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7EE8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7EF0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7EFCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F08u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F14u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F24u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F34u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F44u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F5Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F74u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F78u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F94u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7FBCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7FC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7FD0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7FE0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7FECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7FF4u, &recomp_unit_0040, "recomp_unit_0040");
}
} // namespace psprecomp
