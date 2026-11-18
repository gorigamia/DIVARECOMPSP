#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0022[4095] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 9, 0, 0, 10,
    0, 11, 0, 0, 12, 0, 0, 0, 0, 13, 0, 14, 0, 15, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0,
    20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 29, 0, 0, 0, 30, 0, 0, 31, 0, 32,
    0, 0, 0, 33, 0, 34, 35, 0, 36, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0,
    0, 0, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 0, 51, 0, 0,
    0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 60, 0, 61, 0, 62,
    63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 70, 0, 0,
    71, 0, 0, 72, 0, 0, 0, 0, 73, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 84,
    85, 0, 0, 0, 86, 87, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0,
    103, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0,
    0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 117, 118, 0, 119, 0, 120, 0, 121,
    0, 122, 0, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 130, 131, 0, 132, 0,
    0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 137, 0, 138, 0, 0,
    0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 162,
    0, 163, 0, 164, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0,
    174, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 183,
    0, 0, 184, 0, 185, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0,
    0, 193, 0, 194, 0, 195, 0, 0, 196, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0,
    0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 208,
    0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    215, 0, 0, 0, 216, 0, 217, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 226, 0, 0, 0, 0, 0, 0, 0, 227,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0,
    238, 0, 0, 0, 239, 0, 240, 0, 0, 241, 0, 242, 0, 243, 0, 244, 0, 0, 245, 0, 246, 0, 247, 0, 0, 248, 0, 249, 0, 0, 0, 250,
    0, 0, 0, 251, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 256, 0, 0, 0, 257, 258, 0, 0,
    0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 262, 0, 263, 264, 0, 265, 0, 0, 266, 267, 0, 0, 0, 268, 0, 269, 0, 270, 0,
    271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 274, 275, 0, 0, 0, 276, 0, 277, 0, 278, 0, 279, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0,
    282, 0, 283, 0, 284, 285, 0, 0, 0, 286, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 291,
    0, 292, 0, 0, 293, 0, 294, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 298, 0, 0, 299, 0, 300, 0, 0, 0, 301, 302, 0, 0, 0,
    0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 309, 0, 0, 310, 311,
    0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 315, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 320,
    0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 326,
    0, 0, 327, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0,
    0, 0, 0, 334, 335, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 342, 0, 0, 343, 0, 344, 0, 0, 0, 345, 346, 0, 347, 0, 0,
    348, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 0,
    354, 0, 355, 0, 0, 356, 0, 0, 0, 0, 357, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 362, 0, 0,
    363, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0,
    0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 371, 372, 373, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 377,
    0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 380, 0, 0, 381, 0, 0, 0, 0, 0, 382, 383, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 388, 0, 389, 0, 390, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0,
    393, 394, 0, 0, 395, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 400, 0, 0,
    0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0,
    0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 411, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 417, 418, 419, 0, 420, 0, 0, 0, 0, 421, 0, 0,
    0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 426, 0, 0, 427, 0, 0, 0, 0, 0, 428, 429, 430,
    0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 434, 0, 435, 0, 0, 436, 0, 0, 437, 0, 438, 0, 0, 0,
    439, 0, 0, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 444, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 450, 0, 0, 451, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 453, 0, 0, 0, 454, 455, 0, 0, 0, 456, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 461,
    0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 468, 0, 0,
    0, 469, 0, 470, 0, 471, 0, 472, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476,
    0, 0, 477, 0, 478, 479, 0, 480, 0, 0, 481, 0, 0, 482, 0, 0, 483, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486,
    0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 491, 0, 492, 0, 0, 493, 0, 0, 494,
    0, 495, 0, 0, 496, 0, 0, 0, 497, 0, 0, 498, 499, 0, 500, 0, 501, 0, 0, 502, 0, 0, 0, 503, 504, 505, 0, 0, 0, 506, 0, 0,
    0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 509, 0, 510, 0, 0, 511, 512, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0,
    0, 0, 0, 0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 0, 521, 0, 0, 522, 523, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 526, 0,
    527, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 531, 0, 532, 0, 533, 0, 534, 0, 0, 535, 0, 0, 0, 536, 537, 0, 0, 538, 0,
    0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 543, 0, 544, 0, 545, 0, 546, 0, 547, 0, 0, 548, 0, 549,
    0, 550, 0, 551, 0, 552, 0, 0, 553, 0, 554, 0, 555, 0, 556, 0, 557, 0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 560, 0, 561, 0, 0,
    0, 0, 0, 562, 0, 0, 0, 563, 0, 564, 0, 0, 0, 565, 0, 566, 0, 567, 0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 570, 0, 571,
    0, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 574, 575, 0, 0, 0, 0, 576, 0, 0, 577, 0, 0, 578, 0, 0, 0, 0, 579, 0, 0, 580,
    0, 0, 0, 581, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 583, 584, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0,
    0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 588, 589, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 593, 0, 594,
    0, 595, 0, 596, 0, 597, 0, 0, 598, 0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 602, 0, 0, 603, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 608, 0, 0, 0, 609, 0, 0, 610, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 612, 613, 0, 614, 0, 0, 615, 0, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0,
    0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0,
    0, 630, 0, 631, 632, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 638,
    0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0,
    642, 0, 0, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 647, 0, 0, 0, 648, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 651, 652, 653, 0, 0, 0, 0, 654, 0, 655, 0, 0,
    0, 656, 0, 0, 657, 0, 658, 0, 0, 0, 0, 659, 0, 0, 660, 661, 0, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 666, 0, 0, 0, 667, 0, 0, 668, 0, 669, 0, 670, 0, 671, 0,
    0, 672, 0, 673, 0, 674, 0, 675, 0, 0, 676, 0, 677, 0, 0, 678, 0, 0, 0, 679, 0, 680, 0, 681, 0, 0, 682, 0, 0, 0, 683, 684,
    0, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 689, 0, 0, 0, 0,
    690, 0, 691, 0, 0, 0, 0, 0, 692, 0, 693, 0, 694, 0, 695, 0, 0, 0, 0, 696, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 700, 0, 0, 0, 0, 701, 0, 702, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    704, 0, 705, 0, 706, 707, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 710, 711, 0,
    712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 714, 0, 0, 715, 0, 0, 716, 0, 717, 718, 0, 0, 719, 0, 0, 720,
    0, 721, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 725, 0, 726, 0, 0, 0, 727, 0, 728, 729, 0, 0, 730,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    734, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 737, 0, 0, 738, 739, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 741, 0, 0, 742, 0, 743, 0, 744, 745, 0, 0, 0, 746, 0, 0, 747, 0, 0, 0, 0, 748, 0, 749, 0, 0, 750, 0, 751, 0,
    0, 0, 752, 753, 0, 0, 754, 0, 0, 0, 755, 0, 756, 0, 0, 0, 0, 0, 757, 0, 0, 758, 0, 759, 0, 760, 0, 0, 0, 761, 0, 762,
    0, 0, 0, 763, 0, 0, 0, 0, 0, 764, 765, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 767, 0, 768, 0, 769, 0, 0,
    0, 770, 0, 771, 0, 0, 0, 0, 0, 0, 0, 772, 0, 773, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 776,
    0, 777, 0, 0, 778, 0, 0, 0, 779, 0, 780, 0, 0, 781, 0, 0, 0, 0, 782, 0, 0, 0, 783, 784, 0, 785, 0, 0, 0, 0, 0, 786,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 789, 0, 0, 790, 0, 791,
    0, 0, 792, 0, 793, 0, 0, 794, 0, 795, 0, 0, 796, 0, 0, 797, 0, 798, 0, 799, 0, 0, 800, 0, 0, 0, 801, 0, 802, 0, 0, 0,
    0, 803, 0, 0, 0, 804, 805, 0, 0, 0, 806, 0, 807, 0, 808, 0, 0, 0, 809, 0, 810, 0, 811, 0, 812, 0, 0, 0, 0, 0, 0, 0,
    0, 813, 0, 0, 0, 814, 0, 815, 0, 816, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 819, 0, 820, 0, 0, 0, 0,
    821, 0, 822, 0, 0, 0, 0, 0, 0, 0, 823, 0, 824, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 826, 0, 0, 827, 0, 0, 0, 0, 0,
    0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 830, 831, 0, 832, 0, 0, 0, 0, 0, 0, 833, 0,
    0, 834, 0, 0, 0, 835, 0, 0, 0, 0, 0, 0, 836, 0, 837, 0, 0, 0, 0, 838, 0, 0, 0, 839, 0, 840, 0, 841, 0, 0, 0, 0,
    842, 0, 843, 0, 0, 0, 0, 0, 0, 0, 844, 0, 845, 0, 0, 0, 0, 0, 0, 0, 846, 0, 847, 0, 0, 0, 848, 0, 0, 849, 0, 850,
    0, 0, 0, 0, 851, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 0, 853, 0, 0, 0, 854, 0, 855, 0, 0, 0, 0, 856, 0, 0,
    0, 857, 858, 0, 0, 0, 0, 859, 0, 0, 0, 0, 0, 0, 0, 0, 860, 0, 0, 861, 0, 862, 863, 0, 864, 0, 865, 0, 0, 866, 0, 867,
    0, 868, 0, 0, 869, 0, 0, 870, 0, 871, 0, 0, 872, 0, 873, 0, 0, 874, 0, 875, 0, 0, 0, 0, 0, 876, 877, 0, 0, 0, 0, 878,
    0, 0, 0, 0, 0, 0, 879, 0, 0, 0, 0, 880, 0, 0, 0, 0, 0, 0, 0, 0, 0, 881, 882, 0, 0, 883, 0, 884, 0, 0, 885, 0,
    886, 0, 887, 0, 0, 0, 0, 0, 888, 0, 0, 0, 0, 0, 889, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 891, 0, 892, 0, 0, 0, 893,
    0, 894, 0, 0, 895, 0, 896, 0, 0, 0, 0, 0, 0, 897, 898, 0, 0, 0, 899, 0, 0, 0, 0, 0, 0, 0, 0, 900, 0, 901, 0, 0,
    0, 902, 0, 903, 0, 904, 0, 905, 0, 0, 0, 0, 906, 0, 0, 0, 907, 908, 909, 0, 0, 910, 0, 911, 0, 0, 0, 912, 0, 0, 0, 913,
    0, 914, 0, 915, 0, 0, 0, 0, 916, 0, 0, 0, 0, 917, 918, 919, 0, 0, 0, 0, 0, 920, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 921, 0, 0, 0, 922, 0, 923, 0, 0, 924, 0, 0, 925, 0, 0, 926, 0, 927, 0, 928, 0, 929, 0, 0, 0, 0, 0, 0, 0, 0,
    930, 0, 931, 0, 932, 0, 0, 0, 0, 0, 0, 0, 0, 933, 0, 934, 0, 935, 0, 0, 0, 0, 0, 0, 0, 0, 936, 0, 937, 0, 938, 0,
    0, 0, 0, 0, 0, 0, 0, 939, 0, 940, 0, 941, 942, 0, 943, 944, 0, 0, 0, 0, 0, 945, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 946, 0, 947, 948, 0, 949, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 950, 0, 0, 0, 951, 0, 952, 0, 953, 0, 0,
    0, 0, 0, 0, 0, 954, 0, 955, 0, 0, 0, 0, 0, 0, 0, 0, 956, 0, 0, 957, 958, 0, 0, 0, 0, 959, 0, 0, 0, 0, 0, 0,
    0, 0, 960, 0, 0, 0, 961, 0, 962, 0, 963, 0, 0, 0, 0, 0, 0, 0, 964, 0, 965, 0, 0, 0, 0, 0, 0, 0, 0, 966, 967, 0,
    0, 0, 968, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 969, 0, 970, 0, 0, 0, 0, 971, 0, 0, 0, 0, 972, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 973, 0, 0, 0, 0, 974, 0, 0, 0, 0, 975, 0, 0, 0, 976, 0, 977, 0, 0, 978, 0, 0, 979, 0, 0, 0,
    0, 980, 981, 0, 0, 0, 0, 0, 0, 982, 0, 0, 0, 0, 0, 0, 983, 0, 0, 0, 984, 0, 0, 0, 0, 0, 985, 986, 0, 0, 0, 0,
    0, 0, 0, 987, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 988, 0, 989, 990, 0, 991, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 992, 0, 0, 0, 0, 0, 0, 0, 993, 0, 0, 0, 994, 0, 0, 0, 995, 0, 0, 0, 0, 0, 0, 0, 996, 0,
    0, 0, 0, 0, 0, 0, 997, 0, 0, 0, 0, 0, 0, 998, 0, 0, 0, 0, 0, 999, 0, 0, 0, 0, 0, 1000, 0, 0, 1001, 0, 1002, 1003,
    0, 0, 0, 0, 1004, 0, 1005, 0, 0, 0, 0, 0, 0, 0, 1006, 0, 0, 1007, 0, 0, 1008, 0, 0, 0, 0, 0, 0, 1009, 0, 0, 1010, 0,
    0, 0, 0, 0, 1011, 0, 0, 0, 0, 0, 1012, 0, 0, 0, 0, 0, 1013, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1014, 0,
    0, 0, 1015, 0, 0, 0, 1016, 0, 0, 1017, 0, 0, 1018, 0, 1019, 0, 0, 0, 1020, 0, 1021, 0, 1022, 0, 0, 1023, 1024, 1025, 0, 0, 0, 1026,
    0, 0, 0, 0, 0, 0, 0, 0, 1027, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1028, 0, 1029, 0, 0, 0, 1030, 0, 1031, 0, 1032, 0, 1033,
};
void recomp_unit_0022_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0885C000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0022[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0885C000;
    case 2u: goto L_0885C00C;
    case 3u: goto L_0885C024;
    case 4u: goto L_0885C02C;
    case 5u: goto L_0885C038;
    case 6u: goto L_0885C050;
    case 7u: goto L_0885C05C;
    case 8u: goto L_0885C068;
    case 9u: goto L_0885C070;
    case 10u: goto L_0885C07C;
    case 11u: goto L_0885C084;
    case 12u: goto L_0885C090;
    case 13u: goto L_0885C0A4;
    case 14u: goto L_0885C0AC;
    case 15u: goto L_0885C0B4;
    case 16u: goto L_0885C0BC;
    case 17u: goto L_0885C0CC;
    case 18u: goto L_0885C0E8;
    case 19u: goto L_0885C0F4;
    case 20u: goto L_0885C100;
    case 21u: goto L_0885C108;
    case 22u: goto L_0885C110;
    case 23u: goto L_0885C118;
    case 24u: goto L_0885C120;
    case 25u: goto L_0885C128;
    case 26u: goto L_0885C13C;
    case 27u: goto L_0885C144;
    case 28u: goto L_0885C14C;
    case 29u: goto L_0885C158;
    case 30u: goto L_0885C168;
    case 31u: goto L_0885C174;
    case 32u: goto L_0885C17C;
    case 33u: goto L_0885C18C;
    case 34u: goto L_0885C194;
    case 35u: goto L_0885C198;
    case 36u: goto L_0885C1A0;
    case 37u: goto L_0885C1A4;
    case 38u: goto L_0885C1B8;
    case 39u: goto L_0885C1DC;
    case 40u: goto L_0885C1E8;
    case 41u: goto L_0885C1F4;
    case 42u: goto L_0885C20C;
    case 43u: goto L_0885C214;
    case 44u: goto L_0885C21C;
    case 45u: goto L_0885C224;
    case 46u: goto L_0885C22C;
    case 47u: goto L_0885C240;
    case 48u: goto L_0885C24C;
    case 49u: goto L_0885C260;
    case 50u: goto L_0885C268;
    case 51u: goto L_0885C274;
    case 52u: goto L_0885C288;
    case 53u: goto L_0885C294;
    case 54u: goto L_0885C2A8;
    case 55u: goto L_0885C2B0;
    case 56u: goto L_0885C2B8;
    case 57u: goto L_0885C2C0;
    case 58u: goto L_0885C2D8;
    case 59u: goto L_0885C2E0;
    case 60u: goto L_0885C2EC;
    case 61u: goto L_0885C2F4;
    case 62u: goto L_0885C2FC;
    case 63u: goto L_0885C300;
    case 64u: goto L_0885C310;
    case 65u: goto L_0885C31C;
    case 66u: goto L_0885C348;
    case 67u: goto L_0885C354;
    case 68u: goto L_0885C35C;
    case 69u: goto L_0885C36C;
    case 70u: goto L_0885C374;
    case 71u: goto L_0885C380;
    case 72u: goto L_0885C38C;
    case 73u: goto L_0885C3A0;
    case 74u: goto L_0885C3A4;
    case 75u: goto L_0885C3AC;
    case 76u: goto L_0885C3B4;
    case 77u: goto L_0885C3BC;
    case 78u: goto L_0885C3C4;
    case 79u: goto L_0885C3CC;
    case 80u: goto L_0885C3D8;
    case 81u: goto L_0885C3E0;
    case 82u: goto L_0885C3E8;
    case 83u: goto L_0885C3F0;
    case 84u: goto L_0885C3FC;
    case 85u: goto L_0885C400;
    case 86u: goto L_0885C410;
    case 87u: goto L_0885C414;
    case 88u: goto L_0885C41C;
    case 89u: goto L_0885C428;
    case 90u: goto L_0885C434;
    case 91u: goto L_0885C444;
    case 92u: goto L_0885C458;
    case 93u: goto L_0885C484;
    case 94u: goto L_0885C4A4;
    case 95u: goto L_0885C4D0;
    case 96u: goto L_0885C4E4;
    case 97u: goto L_0885C4F0;
    case 98u: goto L_0885C500;
    case 99u: goto L_0885C5AC;
    case 100u: goto L_0885C5B4;
    case 101u: goto L_0885C5E4;
    case 102u: goto L_0885C5F4;
    case 103u: goto L_0885C600;
    case 104u: goto L_0885C608;
    case 105u: goto L_0885C61C;
    case 106u: goto L_0885C64C;
    case 107u: goto L_0885C664;
    case 108u: goto L_0885C66C;
    case 109u: goto L_0885C678;
    case 110u: goto L_0885C684;
    case 111u: goto L_0885C690;
    case 112u: goto L_0885C6A0;
    case 113u: goto L_0885C6A8;
    case 114u: goto L_0885C6B4;
    case 115u: goto L_0885C6C0;
    case 116u: goto L_0885C6D8;
    case 117u: goto L_0885C6E0;
    case 118u: goto L_0885C6E4;
    case 119u: goto L_0885C6EC;
    case 120u: goto L_0885C6F4;
    case 121u: goto L_0885C6FC;
    case 122u: goto L_0885C704;
    case 123u: goto L_0885C710;
    case 124u: goto L_0885C71C;
    case 125u: goto L_0885C724;
    case 126u: goto L_0885C72C;
    case 127u: goto L_0885C73C;
    case 128u: goto L_0885C748;
    case 129u: goto L_0885C75C;
    case 130u: goto L_0885C76C;
    case 131u: goto L_0885C770;
    case 132u: goto L_0885C778;
    case 133u: goto L_0885C784;
    case 134u: goto L_0885C7A4;
    case 135u: goto L_0885C7CC;
    case 136u: goto L_0885C7D8;
    case 137u: goto L_0885C7EC;
    case 138u: goto L_0885C7F4;
    case 139u: goto L_0885C804;
    case 140u: goto L_0885C820;
    case 141u: goto L_0885C828;
    case 142u: goto L_0885C830;
    case 143u: goto L_0885C844;
    case 144u: goto L_0885C84C;
    case 145u: goto L_0885C854;
    case 146u: goto L_0885C864;
    case 147u: goto L_0885C870;
    case 148u: goto L_0885C878;
    case 149u: goto L_0885C8A0;
    case 150u: goto L_0885C8A8;
    case 151u: goto L_0885C8B4;
    case 152u: goto L_0885C8CC;
    case 153u: goto L_0885C8DC;
    case 154u: goto L_0885C8E4;
    case 155u: goto L_0885C8F0;
    case 156u: goto L_0885C904;
    case 157u: goto L_0885C91C;
    case 158u: goto L_0885C924;
    case 159u: goto L_0885C93C;
    case 160u: goto L_0885C964;
    case 161u: goto L_0885C970;
    case 162u: goto L_0885C97C;
    case 163u: goto L_0885C984;
    case 164u: goto L_0885C98C;
    case 165u: goto L_0885C994;
    case 166u: goto L_0885C99C;
    case 167u: goto L_0885C9AC;
    case 168u: goto L_0885C9C0;
    case 169u: goto L_0885C9C8;
    case 170u: goto L_0885C9D0;
    case 171u: goto L_0885C9DC;
    case 172u: goto L_0885C9E8;
    case 173u: goto L_0885C9F8;
    case 174u: goto L_0885CA00;
    case 175u: goto L_0885CA0C;
    case 176u: goto L_0885CA24;
    case 177u: goto L_0885CA30;
    case 178u: goto L_0885CA38;
    case 179u: goto L_0885CA44;
    case 180u: goto L_0885CA5C;
    case 181u: goto L_0885CA68;
    case 182u: goto L_0885CA74;
    case 183u: goto L_0885CA7C;
    case 184u: goto L_0885CA88;
    case 185u: goto L_0885CA90;
    case 186u: goto L_0885CA9C;
    case 187u: goto L_0885CAB0;
    case 188u: goto L_0885CAC0;
    case 189u: goto L_0885CAD0;
    case 190u: goto L_0885CADC;
    case 191u: goto L_0885CAEC;
    case 192u: goto L_0885CAF4;
    case 193u: goto L_0885CB04;
    case 194u: goto L_0885CB0C;
    case 195u: goto L_0885CB14;
    case 196u: goto L_0885CB20;
    case 197u: goto L_0885CB24;
    case 198u: goto L_0885CB3C;
    case 199u: goto L_0885CB74;
    case 200u: goto L_0885CB84;
    case 201u: goto L_0885CB90;
    case 202u: goto L_0885CB98;
    case 203u: goto L_0885CBC4;
    case 204u: goto L_0885CBD0;
    case 205u: goto L_0885CBD4;
    case 206u: goto L_0885CBE4;
    case 207u: goto L_0885CBF0;
    case 208u: goto L_0885CBFC;
    case 209u: goto L_0885CC04;
    case 210u: goto L_0885CC30;
    case 211u: goto L_0885CC3C;
    case 212u: goto L_0885CC40;
    case 213u: goto L_0885CC58;
    case 214u: goto L_0885CC78;
    case 215u: goto L_0885CC80;
    case 216u: goto L_0885CC90;
    case 217u: goto L_0885CC98;
    case 218u: goto L_0885CCA4;
    case 219u: goto L_0885CCB8;
    case 220u: goto L_0885CCCC;
    case 221u: goto L_0885CCD0;
    case 222u: goto L_0885CCE0;
    case 223u: goto L_0885CD1C;
    case 224u: goto L_0885CD34;
    case 225u: goto L_0885CD58;
    case 226u: goto L_0885CD5C;
    case 227u: goto L_0885CD7C;
    case 228u: goto L_0885CDC0;
    case 229u: goto L_0885CDE4;
    case 230u: goto L_0885CE08;
    case 231u: goto L_0885CE44;
    case 232u: goto L_0885CE4C;
    case 233u: goto L_0885CE58;
    case 234u: goto L_0885CE60;
    case 235u: goto L_0885CE68;
    case 236u: goto L_0885CE70;
    case 237u: goto L_0885CE78;
    case 238u: goto L_0885CE80;
    case 239u: goto L_0885CE90;
    case 240u: goto L_0885CE98;
    case 241u: goto L_0885CEA4;
    case 242u: goto L_0885CEAC;
    case 243u: goto L_0885CEB4;
    case 244u: goto L_0885CEBC;
    case 245u: goto L_0885CEC8;
    case 246u: goto L_0885CED0;
    case 247u: goto L_0885CED8;
    case 248u: goto L_0885CEE4;
    case 249u: goto L_0885CEEC;
    case 250u: goto L_0885CEFC;
    case 251u: goto L_0885CF0C;
    case 252u: goto L_0885CF10;
    case 253u: goto L_0885CF2C;
    case 254u: goto L_0885CF50;
    case 255u: goto L_0885CF58;
    case 256u: goto L_0885CF60;
    case 257u: goto L_0885CF70;
    case 258u: goto L_0885CF74;
    case 259u: goto L_0885CF84;
    case 260u: goto L_0885CFA0;
    case 261u: goto L_0885CFA8;
    case 262u: goto L_0885CFB4;
    case 263u: goto L_0885CFBC;
    case 264u: goto L_0885CFC0;
    case 265u: goto L_0885CFC8;
    case 266u: goto L_0885CFD4;
    case 267u: goto L_0885CFD8;
    case 268u: goto L_0885CFE8;
    case 269u: goto L_0885CFF0;
    case 270u: goto L_0885CFF8;
    case 271u: goto L_0885D000;
    case 272u: goto L_0885D018;
    case 273u: goto L_0885D020;
    case 274u: goto L_0885D028;
    case 275u: goto L_0885D02C;
    case 276u: goto L_0885D03C;
    case 277u: goto L_0885D044;
    case 278u: goto L_0885D04C;
    case 279u: goto L_0885D054;
    case 280u: goto L_0885D06C;
    case 281u: goto L_0885D074;
    case 282u: goto L_0885D080;
    case 283u: goto L_0885D088;
    case 284u: goto L_0885D090;
    case 285u: goto L_0885D094;
    case 286u: goto L_0885D0A4;
    case 287u: goto L_0885D0B0;
    case 288u: goto L_0885D0B8;
    case 289u: goto L_0885D0EC;
    case 290u: goto L_0885D0F4;
    case 291u: goto L_0885D0FC;
    case 292u: goto L_0885D104;
    case 293u: goto L_0885D110;
    case 294u: goto L_0885D118;
    case 295u: goto L_0885D120;
    case 296u: goto L_0885D130;
    case 297u: goto L_0885D140;
    case 298u: goto L_0885D148;
    case 299u: goto L_0885D154;
    case 300u: goto L_0885D15C;
    case 301u: goto L_0885D16C;
    case 302u: goto L_0885D170;
    case 303u: goto L_0885D188;
    case 304u: goto L_0885D1B0;
    case 305u: goto L_0885D1B8;
    case 306u: goto L_0885D1C0;
    case 307u: goto L_0885D1D0;
    case 308u: goto L_0885D1E4;
    case 309u: goto L_0885D1EC;
    case 310u: goto L_0885D1F8;
    case 311u: goto L_0885D1FC;
    case 312u: goto L_0885D208;
    case 313u: goto L_0885D228;
    case 314u: goto L_0885D234;
    case 315u: goto L_0885D240;
    case 316u: goto L_0885D244;
    case 317u: goto L_0885D250;
    case 318u: goto L_0885D26C;
    case 319u: goto L_0885D278;
    case 320u: goto L_0885D27C;
    case 321u: goto L_0885D294;
    case 322u: goto L_0885D2C4;
    case 323u: goto L_0885D2CC;
    case 324u: goto L_0885D2D8;
    case 325u: goto L_0885D2E4;
    case 326u: goto L_0885D2FC;
    case 327u: goto L_0885D308;
    case 328u: goto L_0885D30C;
    case 329u: goto L_0885D324;
    case 330u: goto L_0885D338;
    case 331u: goto L_0885D34C;
    case 332u: goto L_0885D360;
    case 333u: goto L_0885D374;
    case 334u: goto L_0885D38C;
    case 335u: goto L_0885D390;
    case 336u: goto L_0885D39C;
    case 337u: goto L_0885D3B0;
    case 338u: goto L_0885D3BC;
    case 339u: goto L_0885D404;
    case 340u: goto L_0885D40C;
    case 341u: goto L_0885D440;
    case 342u: goto L_0885D444;
    case 343u: goto L_0885D450;
    case 344u: goto L_0885D458;
    case 345u: goto L_0885D468;
    case 346u: goto L_0885D46C;
    case 347u: goto L_0885D474;
    case 348u: goto L_0885D480;
    case 349u: goto L_0885D484;
    case 350u: goto L_0885D4A4;
    case 351u: goto L_0885D4D0;
    case 352u: goto L_0885D4D8;
    case 353u: goto L_0885D4E4;
    case 354u: goto L_0885D500;
    case 355u: goto L_0885D508;
    case 356u: goto L_0885D514;
    case 357u: goto L_0885D528;
    case 358u: goto L_0885D52C;
    case 359u: goto L_0885D544;
    case 360u: goto L_0885D564;
    case 361u: goto L_0885D56C;
    case 362u: goto L_0885D574;
    case 363u: goto L_0885D580;
    case 364u: goto L_0885D584;
    case 365u: goto L_0885D598;
    case 366u: goto L_0885D5AC;
    case 367u: goto L_0885D5C4;
    case 368u: goto L_0885D5F0;
    case 369u: goto L_0885D614;
    case 370u: goto L_0885D628;
    case 371u: goto L_0885D630;
    case 372u: goto L_0885D634;
    case 373u: goto L_0885D638;
    case 374u: goto L_0885D640;
    case 375u: goto L_0885D64C;
    case 376u: goto L_0885D674;
    case 377u: goto L_0885D67C;
    case 378u: goto L_0885D690;
    case 379u: goto L_0885D6A8;
    case 380u: goto L_0885D6AC;
    case 381u: goto L_0885D6B8;
    case 382u: goto L_0885D6D0;
    case 383u: goto L_0885D6D4;
    case 384u: goto L_0885D6D8;
    case 385u: goto L_0885D6F0;
    case 386u: goto L_0885D724;
    case 387u: goto L_0885D72C;
    case 388u: goto L_0885D740;
    case 389u: goto L_0885D748;
    case 390u: goto L_0885D750;
    case 391u: goto L_0885D768;
    case 392u: goto L_0885D770;
    case 393u: goto L_0885D780;
    case 394u: goto L_0885D784;
    case 395u: goto L_0885D790;
    case 396u: goto L_0885D794;
    case 397u: goto L_0885D7AC;
    case 398u: goto L_0885D7E0;
    case 399u: goto L_0885D7E8;
    case 400u: goto L_0885D7F4;
    case 401u: goto L_0885D814;
    case 402u: goto L_0885D81C;
    case 403u: goto L_0885D828;
    case 404u: goto L_0885D83C;
    case 405u: goto L_0885D85C;
    case 406u: goto L_0885D878;
    case 407u: goto L_0885D888;
    case 408u: goto L_0885D898;
    case 409u: goto L_0885D8A8;
    case 410u: goto L_0885D8B8;
    case 411u: goto L_0885D8C4;
    case 412u: goto L_0885D8C8;
    case 413u: goto L_0885D8E4;
    case 414u: goto L_0885D910;
    case 415u: goto L_0885D934;
    case 416u: goto L_0885D948;
    case 417u: goto L_0885D950;
    case 418u: goto L_0885D954;
    case 419u: goto L_0885D958;
    case 420u: goto L_0885D960;
    case 421u: goto L_0885D974;
    case 422u: goto L_0885D998;
    case 423u: goto L_0885D9A0;
    case 424u: goto L_0885D9B4;
    case 425u: goto L_0885D9CC;
    case 426u: goto L_0885D9D0;
    case 427u: goto L_0885D9DC;
    case 428u: goto L_0885D9F4;
    case 429u: goto L_0885D9F8;
    case 430u: goto L_0885D9FC;
    case 431u: goto L_0885DA14;
    case 432u: goto L_0885DA38;
    case 433u: goto L_0885DA40;
    case 434u: goto L_0885DA48;
    case 435u: goto L_0885DA50;
    case 436u: goto L_0885DA5C;
    case 437u: goto L_0885DA68;
    case 438u: goto L_0885DA70;
    case 439u: goto L_0885DA80;
    case 440u: goto L_0885DA90;
    case 441u: goto L_0885DA98;
    case 442u: goto L_0885DAA8;
    case 443u: goto L_0885DAB8;
    case 444u: goto L_0885DAC0;
    case 445u: goto L_0885DAC8;
    case 446u: goto L_0885DAD4;
    case 447u: goto L_0885DB08;
    case 448u: goto L_0885DB10;
    case 449u: goto L_0885DB40;
    case 450u: goto L_0885DB44;
    case 451u: goto L_0885DB50;
    case 452u: goto L_0885DB58;
    case 453u: goto L_0885DB8C;
    case 454u: goto L_0885DB9C;
    case 455u: goto L_0885DBA0;
    case 456u: goto L_0885DBB0;
    case 457u: goto L_0885DBB4;
    case 458u: goto L_0885DBC8;
    case 459u: goto L_0885DBE4;
    case 460u: goto L_0885DBF4;
    case 461u: goto L_0885DBFC;
    case 462u: goto L_0885DC14;
    case 463u: goto L_0885DC1C;
    case 464u: goto L_0885DC2C;
    case 465u: goto L_0885DC34;
    case 466u: goto L_0885DC5C;
    case 467u: goto L_0885DC64;
    case 468u: goto L_0885DC74;
    case 469u: goto L_0885DC84;
    case 470u: goto L_0885DC8C;
    case 471u: goto L_0885DC94;
    case 472u: goto L_0885DC9C;
    case 473u: goto L_0885DCB4;
    case 474u: goto L_0885DCBC;
    case 475u: goto L_0885DCF4;
    case 476u: goto L_0885DCFC;
    case 477u: goto L_0885DD08;
    case 478u: goto L_0885DD10;
    case 479u: goto L_0885DD14;
    case 480u: goto L_0885DD1C;
    case 481u: goto L_0885DD28;
    case 482u: goto L_0885DD34;
    case 483u: goto L_0885DD40;
    case 484u: goto L_0885DD44;
    case 485u: goto L_0885DD54;
    case 486u: goto L_0885DD7C;
    case 487u: goto L_0885DD90;
    case 488u: goto L_0885DD9C;
    case 489u: goto L_0885DDBC;
    case 490u: goto L_0885DDD4;
    case 491u: goto L_0885DDDC;
    case 492u: goto L_0885DDE4;
    case 493u: goto L_0885DDF0;
    case 494u: goto L_0885DDFC;
    case 495u: goto L_0885DE04;
    case 496u: goto L_0885DE10;
    case 497u: goto L_0885DE20;
    case 498u: goto L_0885DE2C;
    case 499u: goto L_0885DE30;
    case 500u: goto L_0885DE38;
    case 501u: goto L_0885DE40;
    case 502u: goto L_0885DE4C;
    case 503u: goto L_0885DE5C;
    case 504u: goto L_0885DE60;
    case 505u: goto L_0885DE64;
    case 506u: goto L_0885DE74;
    case 507u: goto L_0885DE98;
    case 508u: goto L_0885DEA0;
    case 509u: goto L_0885DEA8;
    case 510u: goto L_0885DEB0;
    case 511u: goto L_0885DEBC;
    case 512u: goto L_0885DEC0;
    case 513u: goto L_0885DECC;
    case 514u: goto L_0885DEE4;
    case 515u: goto L_0885DEEC;
    case 516u: goto L_0885DF10;
    case 517u: goto L_0885DF18;
    case 518u: goto L_0885DF20;
    case 519u: goto L_0885DF28;
    case 520u: goto L_0885DF30;
    case 521u: goto L_0885DF3C;
    case 522u: goto L_0885DF48;
    case 523u: goto L_0885DF4C;
    case 524u: goto L_0885DF58;
    case 525u: goto L_0885DF70;
    case 526u: goto L_0885DF78;
    case 527u: goto L_0885DF80;
    case 528u: goto L_0885DF88;
    case 529u: goto L_0885DF90;
    case 530u: goto L_0885DFAC;
    case 531u: goto L_0885DFB4;
    case 532u: goto L_0885DFBC;
    case 533u: goto L_0885DFC4;
    case 534u: goto L_0885DFCC;
    case 535u: goto L_0885DFD8;
    case 536u: goto L_0885DFE8;
    case 537u: goto L_0885DFEC;
    case 538u: goto L_0885DFF8;
    case 539u: goto L_0885E00C;
    case 540u: goto L_0885E014;
    case 541u: goto L_0885E038;
    case 542u: goto L_0885E040;
    case 543u: goto L_0885E048;
    case 544u: goto L_0885E050;
    case 545u: goto L_0885E058;
    case 546u: goto L_0885E060;
    case 547u: goto L_0885E068;
    case 548u: goto L_0885E074;
    case 549u: goto L_0885E07C;
    case 550u: goto L_0885E084;
    case 551u: goto L_0885E08C;
    case 552u: goto L_0885E094;
    case 553u: goto L_0885E0A0;
    case 554u: goto L_0885E0A8;
    case 555u: goto L_0885E0B0;
    case 556u: goto L_0885E0B8;
    case 557u: goto L_0885E0C0;
    case 558u: goto L_0885E0D0;
    case 559u: goto L_0885E0DC;
    case 560u: goto L_0885E0EC;
    case 561u: goto L_0885E0F4;
    case 562u: goto L_0885E10C;
    case 563u: goto L_0885E11C;
    case 564u: goto L_0885E124;
    case 565u: goto L_0885E134;
    case 566u: goto L_0885E13C;
    case 567u: goto L_0885E144;
    case 568u: goto L_0885E154;
    case 569u: goto L_0885E164;
    case 570u: goto L_0885E174;
    case 571u: goto L_0885E17C;
    case 572u: goto L_0885E18C;
    case 573u: goto L_0885E198;
    case 574u: goto L_0885E1AC;
    case 575u: goto L_0885E1B0;
    case 576u: goto L_0885E1C4;
    case 577u: goto L_0885E1D0;
    case 578u: goto L_0885E1DC;
    case 579u: goto L_0885E1F0;
    case 580u: goto L_0885E1FC;
    case 581u: goto L_0885E20C;
    case 582u: goto L_0885E218;
    case 583u: goto L_0885E23C;
    case 584u: goto L_0885E240;
    case 585u: goto L_0885E248;
    case 586u: goto L_0885E274;
    case 587u: goto L_0885E28C;
    case 588u: goto L_0885E2A8;
    case 589u: goto L_0885E2AC;
    case 590u: goto L_0885E2C4;
    case 591u: goto L_0885E2E4;
    case 592u: goto L_0885E2EC;
    case 593u: goto L_0885E2F4;
    case 594u: goto L_0885E2FC;
    case 595u: goto L_0885E304;
    case 596u: goto L_0885E30C;
    case 597u: goto L_0885E314;
    case 598u: goto L_0885E320;
    case 599u: goto L_0885E330;
    case 600u: goto L_0885E33C;
    case 601u: goto L_0885E350;
    case 602u: goto L_0885E35C;
    case 603u: goto L_0885E368;
    case 604u: goto L_0885E39C;
    case 605u: goto L_0885E3A8;
    case 606u: goto L_0885E3C4;
    case 607u: goto L_0885E3CC;
    case 608u: goto L_0885E3D4;
    case 609u: goto L_0885E3E4;
    case 610u: goto L_0885E3F0;
    case 611u: goto L_0885E434;
    case 612u: goto L_0885E438;
    case 613u: goto L_0885E43C;
    case 614u: goto L_0885E444;
    case 615u: goto L_0885E450;
    case 616u: goto L_0885E45C;
    case 617u: goto L_0885E474;
    case 618u: goto L_0885E49C;
    case 619u: goto L_0885E4D4;
    case 620u: goto L_0885E4F4;
    case 621u: goto L_0885E508;
    case 622u: goto L_0885E520;
    case 623u: goto L_0885E530;
    case 624u: goto L_0885E53C;
    case 625u: goto L_0885E578;
    case 626u: goto L_0885E5AC;
    case 627u: goto L_0885E5C8;
    case 628u: goto L_0885E5E0;
    case 629u: goto L_0885E5F8;
    case 630u: goto L_0885E604;
    case 631u: goto L_0885E60C;
    case 632u: goto L_0885E610;
    case 633u: goto L_0885E624;
    case 634u: goto L_0885E644;
    case 635u: goto L_0885E64C;
    case 636u: goto L_0885E658;
    case 637u: goto L_0885E66C;
    case 638u: goto L_0885E67C;
    case 639u: goto L_0885E688;
    case 640u: goto L_0885E6C4;
    case 641u: goto L_0885E6E8;
    case 642u: goto L_0885E700;
    case 643u: goto L_0885E71C;
    case 644u: goto L_0885E724;
    case 645u: goto L_0885E734;
    case 646u: goto L_0885E758;
    case 647u: goto L_0885E784;
    case 648u: goto L_0885E794;
    case 649u: goto L_0885E7A4;
    case 650u: goto L_0885E7AC;
    case 651u: goto L_0885E7D0;
    case 652u: goto L_0885E7D4;
    case 653u: goto L_0885E7D8;
    case 654u: goto L_0885E7EC;
    case 655u: goto L_0885E7F4;
    case 656u: goto L_0885E804;
    case 657u: goto L_0885E810;
    case 658u: goto L_0885E818;
    case 659u: goto L_0885E82C;
    case 660u: goto L_0885E838;
    case 661u: goto L_0885E83C;
    case 662u: goto L_0885E848;
    case 663u: goto L_0885E864;
    case 664u: goto L_0885E894;
    case 665u: goto L_0885E8BC;
    case 666u: goto L_0885E8C4;
    case 667u: goto L_0885E8D4;
    case 668u: goto L_0885E8E0;
    case 669u: goto L_0885E8E8;
    case 670u: goto L_0885E8F0;
    case 671u: goto L_0885E8F8;
    case 672u: goto L_0885E904;
    case 673u: goto L_0885E90C;
    case 674u: goto L_0885E914;
    case 675u: goto L_0885E91C;
    case 676u: goto L_0885E928;
    case 677u: goto L_0885E930;
    case 678u: goto L_0885E93C;
    case 679u: goto L_0885E94C;
    case 680u: goto L_0885E954;
    case 681u: goto L_0885E95C;
    case 682u: goto L_0885E968;
    case 683u: goto L_0885E978;
    case 684u: goto L_0885E97C;
    case 685u: goto L_0885E990;
    case 686u: goto L_0885E9A0;
    case 687u: goto L_0885E9C8;
    case 688u: goto L_0885E9E0;
    case 689u: goto L_0885E9EC;
    case 690u: goto L_0885EA00;
    case 691u: goto L_0885EA08;
    case 692u: goto L_0885EA20;
    case 693u: goto L_0885EA28;
    case 694u: goto L_0885EA30;
    case 695u: goto L_0885EA38;
    case 696u: goto L_0885EA4C;
    case 697u: goto L_0885EA54;
    case 698u: goto L_0885EA6C;
    case 699u: goto L_0885EAA0;
    case 700u: goto L_0885EAA8;
    case 701u: goto L_0885EABC;
    case 702u: goto L_0885EAC4;
    case 703u: goto L_0885EAD8;
    case 704u: goto L_0885EB00;
    case 705u: goto L_0885EB08;
    case 706u: goto L_0885EB10;
    case 707u: goto L_0885EB14;
    case 708u: goto L_0885EB2C;
    case 709u: goto L_0885EB6C;
    case 710u: goto L_0885EB74;
    case 711u: goto L_0885EB78;
    case 712u: goto L_0885EB80;
    case 713u: goto L_0885EBB8;
    case 714u: goto L_0885EBC0;
    case 715u: goto L_0885EBCC;
    case 716u: goto L_0885EBD8;
    case 717u: goto L_0885EBE0;
    case 718u: goto L_0885EBE4;
    case 719u: goto L_0885EBF0;
    case 720u: goto L_0885EBFC;
    case 721u: goto L_0885EC04;
    case 722u: goto L_0885EC0C;
    case 723u: goto L_0885EC20;
    case 724u: goto L_0885EC30;
    case 725u: goto L_0885EC4C;
    case 726u: goto L_0885EC54;
    case 727u: goto L_0885EC64;
    case 728u: goto L_0885EC6C;
    case 729u: goto L_0885EC70;
    case 730u: goto L_0885EC7C;
    case 731u: goto L_0885ECB0;
    case 732u: goto L_0885ECC8;
    case 733u: goto L_0885ECD4;
    case 734u: goto L_0885ED00;
    case 735u: goto L_0885ED1C;
    case 736u: goto L_0885ED24;
    case 737u: goto L_0885ED2C;
    case 738u: goto L_0885ED38;
    case 739u: goto L_0885ED3C;
    case 740u: goto L_0885ED60;
    case 741u: goto L_0885ED8C;
    case 742u: goto L_0885ED98;
    case 743u: goto L_0885EDA0;
    case 744u: goto L_0885EDA8;
    case 745u: goto L_0885EDAC;
    case 746u: goto L_0885EDBC;
    case 747u: goto L_0885EDC8;
    case 748u: goto L_0885EDDC;
    case 749u: goto L_0885EDE4;
    case 750u: goto L_0885EDF0;
    case 751u: goto L_0885EDF8;
    case 752u: goto L_0885EE08;
    case 753u: goto L_0885EE0C;
    case 754u: goto L_0885EE18;
    case 755u: goto L_0885EE28;
    case 756u: goto L_0885EE30;
    case 757u: goto L_0885EE48;
    case 758u: goto L_0885EE54;
    case 759u: goto L_0885EE5C;
    case 760u: goto L_0885EE64;
    case 761u: goto L_0885EE74;
    case 762u: goto L_0885EE7C;
    case 763u: goto L_0885EE8C;
    case 764u: goto L_0885EEA4;
    case 765u: goto L_0885EEA8;
    case 766u: goto L_0885EEC4;
    case 767u: goto L_0885EEE4;
    case 768u: goto L_0885EEEC;
    case 769u: goto L_0885EEF4;
    case 770u: goto L_0885EF04;
    case 771u: goto L_0885EF0C;
    case 772u: goto L_0885EF2C;
    case 773u: goto L_0885EF34;
    case 774u: goto L_0885EF48;
    case 775u: goto L_0885EF68;
    case 776u: goto L_0885EF7C;
    case 777u: goto L_0885EF84;
    case 778u: goto L_0885EF90;
    case 779u: goto L_0885EFA0;
    case 780u: goto L_0885EFA8;
    case 781u: goto L_0885EFB4;
    case 782u: goto L_0885EFC8;
    case 783u: goto L_0885EFD8;
    case 784u: goto L_0885EFDC;
    case 785u: goto L_0885EFE4;
    case 786u: goto L_0885EFFC;
    case 787u: goto L_0885F02C;
    case 788u: goto L_0885F060;
    case 789u: goto L_0885F068;
    case 790u: goto L_0885F074;
    case 791u: goto L_0885F07C;
    case 792u: goto L_0885F088;
    case 793u: goto L_0885F090;
    case 794u: goto L_0885F09C;
    case 795u: goto L_0885F0A4;
    case 796u: goto L_0885F0B0;
    case 797u: goto L_0885F0BC;
    case 798u: goto L_0885F0C4;
    case 799u: goto L_0885F0CC;
    case 800u: goto L_0885F0D8;
    case 801u: goto L_0885F0E8;
    case 802u: goto L_0885F0F0;
    case 803u: goto L_0885F104;
    case 804u: goto L_0885F114;
    case 805u: goto L_0885F118;
    case 806u: goto L_0885F128;
    case 807u: goto L_0885F130;
    case 808u: goto L_0885F138;
    case 809u: goto L_0885F148;
    case 810u: goto L_0885F150;
    case 811u: goto L_0885F158;
    case 812u: goto L_0885F160;
    case 813u: goto L_0885F184;
    case 814u: goto L_0885F194;
    case 815u: goto L_0885F19C;
    case 816u: goto L_0885F1A4;
    case 817u: goto L_0885F1B8;
    case 818u: goto L_0885F1D8;
    case 819u: goto L_0885F1E4;
    case 820u: goto L_0885F1EC;
    case 821u: goto L_0885F200;
    case 822u: goto L_0885F208;
    case 823u: goto L_0885F228;
    case 824u: goto L_0885F230;
    case 825u: goto L_0885F250;
    case 826u: goto L_0885F25C;
    case 827u: goto L_0885F268;
    case 828u: goto L_0885F288;
    case 829u: goto L_0885F2C8;
    case 830u: goto L_0885F2D0;
    case 831u: goto L_0885F2D4;
    case 832u: goto L_0885F2DC;
    case 833u: goto L_0885F2F8;
    case 834u: goto L_0885F304;
    case 835u: goto L_0885F314;
    case 836u: goto L_0885F330;
    case 837u: goto L_0885F338;
    case 838u: goto L_0885F34C;
    case 839u: goto L_0885F35C;
    case 840u: goto L_0885F364;
    case 841u: goto L_0885F36C;
    case 842u: goto L_0885F380;
    case 843u: goto L_0885F388;
    case 844u: goto L_0885F3A8;
    case 845u: goto L_0885F3B0;
    case 846u: goto L_0885F3D0;
    case 847u: goto L_0885F3D8;
    case 848u: goto L_0885F3E8;
    case 849u: goto L_0885F3F4;
    case 850u: goto L_0885F3FC;
    case 851u: goto L_0885F410;
    case 852u: goto L_0885F430;
    case 853u: goto L_0885F448;
    case 854u: goto L_0885F458;
    case 855u: goto L_0885F460;
    case 856u: goto L_0885F474;
    case 857u: goto L_0885F484;
    case 858u: goto L_0885F488;
    case 859u: goto L_0885F49C;
    case 860u: goto L_0885F4C0;
    case 861u: goto L_0885F4CC;
    case 862u: goto L_0885F4D4;
    case 863u: goto L_0885F4D8;
    case 864u: goto L_0885F4E0;
    case 865u: goto L_0885F4E8;
    case 866u: goto L_0885F4F4;
    case 867u: goto L_0885F4FC;
    case 868u: goto L_0885F504;
    case 869u: goto L_0885F510;
    case 870u: goto L_0885F51C;
    case 871u: goto L_0885F524;
    case 872u: goto L_0885F530;
    case 873u: goto L_0885F538;
    case 874u: goto L_0885F544;
    case 875u: goto L_0885F54C;
    case 876u: goto L_0885F564;
    case 877u: goto L_0885F568;
    case 878u: goto L_0885F57C;
    case 879u: goto L_0885F598;
    case 880u: goto L_0885F5AC;
    case 881u: goto L_0885F5D4;
    case 882u: goto L_0885F5D8;
    case 883u: goto L_0885F5E4;
    case 884u: goto L_0885F5EC;
    case 885u: goto L_0885F5F8;
    case 886u: goto L_0885F600;
    case 887u: goto L_0885F608;
    case 888u: goto L_0885F620;
    case 889u: goto L_0885F638;
    case 890u: goto L_0885F65C;
    case 891u: goto L_0885F664;
    case 892u: goto L_0885F66C;
    case 893u: goto L_0885F67C;
    case 894u: goto L_0885F684;
    case 895u: goto L_0885F690;
    case 896u: goto L_0885F698;
    case 897u: goto L_0885F6B4;
    case 898u: goto L_0885F6B8;
    case 899u: goto L_0885F6C8;
    case 900u: goto L_0885F6EC;
    case 901u: goto L_0885F6F4;
    case 902u: goto L_0885F704;
    case 903u: goto L_0885F70C;
    case 904u: goto L_0885F714;
    case 905u: goto L_0885F71C;
    case 906u: goto L_0885F730;
    case 907u: goto L_0885F740;
    case 908u: goto L_0885F744;
    case 909u: goto L_0885F748;
    case 910u: goto L_0885F754;
    case 911u: goto L_0885F75C;
    case 912u: goto L_0885F76C;
    case 913u: goto L_0885F77C;
    case 914u: goto L_0885F784;
    case 915u: goto L_0885F78C;
    case 916u: goto L_0885F7A0;
    case 917u: goto L_0885F7B4;
    case 918u: goto L_0885F7B8;
    case 919u: goto L_0885F7BC;
    case 920u: goto L_0885F7D4;
    case 921u: goto L_0885F808;
    case 922u: goto L_0885F818;
    case 923u: goto L_0885F820;
    case 924u: goto L_0885F82C;
    case 925u: goto L_0885F838;
    case 926u: goto L_0885F844;
    case 927u: goto L_0885F84C;
    case 928u: goto L_0885F854;
    case 929u: goto L_0885F85C;
    case 930u: goto L_0885F880;
    case 931u: goto L_0885F888;
    case 932u: goto L_0885F890;
    case 933u: goto L_0885F8B4;
    case 934u: goto L_0885F8BC;
    case 935u: goto L_0885F8C4;
    case 936u: goto L_0885F8E8;
    case 937u: goto L_0885F8F0;
    case 938u: goto L_0885F8F8;
    case 939u: goto L_0885F91C;
    case 940u: goto L_0885F924;
    case 941u: goto L_0885F92C;
    case 942u: goto L_0885F930;
    case 943u: goto L_0885F938;
    case 944u: goto L_0885F93C;
    case 945u: goto L_0885F954;
    case 946u: goto L_0885F994;
    case 947u: goto L_0885F99C;
    case 948u: goto L_0885F9A0;
    case 949u: goto L_0885F9A8;
    case 950u: goto L_0885F9D4;
    case 951u: goto L_0885F9E4;
    case 952u: goto L_0885F9EC;
    case 953u: goto L_0885F9F4;
    case 954u: goto L_0885FA14;
    case 955u: goto L_0885FA1C;
    case 956u: goto L_0885FA40;
    case 957u: goto L_0885FA4C;
    case 958u: goto L_0885FA50;
    case 959u: goto L_0885FA64;
    case 960u: goto L_0885FA88;
    case 961u: goto L_0885FA98;
    case 962u: goto L_0885FAA0;
    case 963u: goto L_0885FAA8;
    case 964u: goto L_0885FAC8;
    case 965u: goto L_0885FAD0;
    case 966u: goto L_0885FAF4;
    case 967u: goto L_0885FAF8;
    case 968u: goto L_0885FB08;
    case 969u: goto L_0885FB40;
    case 970u: goto L_0885FB48;
    case 971u: goto L_0885FB5C;
    case 972u: goto L_0885FB70;
    case 973u: goto L_0885FB98;
    case 974u: goto L_0885FBAC;
    case 975u: goto L_0885FBC0;
    case 976u: goto L_0885FBD0;
    case 977u: goto L_0885FBD8;
    case 978u: goto L_0885FBE4;
    case 979u: goto L_0885FBF0;
    case 980u: goto L_0885FC04;
    case 981u: goto L_0885FC08;
    case 982u: goto L_0885FC24;
    case 983u: goto L_0885FC40;
    case 984u: goto L_0885FC50;
    case 985u: goto L_0885FC68;
    case 986u: goto L_0885FC6C;
    case 987u: goto L_0885FC8C;
    case 988u: goto L_0885FCCC;
    case 989u: goto L_0885FCD4;
    case 990u: goto L_0885FCD8;
    case 991u: goto L_0885FCE0;
    case 992u: goto L_0885FD18;
    case 993u: goto L_0885FD38;
    case 994u: goto L_0885FD48;
    case 995u: goto L_0885FD58;
    case 996u: goto L_0885FD78;
    case 997u: goto L_0885FD98;
    case 998u: goto L_0885FDB4;
    case 999u: goto L_0885FDCC;
    case 1000u: goto L_0885FDE4;
    case 1001u: goto L_0885FDF0;
    case 1002u: goto L_0885FDF8;
    case 1003u: goto L_0885FDFC;
    case 1004u: goto L_0885FE10;
    case 1005u: goto L_0885FE18;
    case 1006u: goto L_0885FE38;
    case 1007u: goto L_0885FE44;
    case 1008u: goto L_0885FE50;
    case 1009u: goto L_0885FE6C;
    case 1010u: goto L_0885FE78;
    case 1011u: goto L_0885FE90;
    case 1012u: goto L_0885FEA8;
    case 1013u: goto L_0885FEC0;
    case 1014u: goto L_0885FEF8;
    case 1015u: goto L_0885FF08;
    case 1016u: goto L_0885FF18;
    case 1017u: goto L_0885FF24;
    case 1018u: goto L_0885FF30;
    case 1019u: goto L_0885FF38;
    case 1020u: goto L_0885FF48;
    case 1021u: goto L_0885FF50;
    case 1022u: goto L_0885FF58;
    case 1023u: goto L_0885FF64;
    case 1024u: goto L_0885FF68;
    case 1025u: goto L_0885FF6C;
    case 1026u: goto L_0885FF7C;
    case 1027u: goto L_0885FFA0;
    case 1028u: goto L_0885FFC8;
    case 1029u: goto L_0885FFD0;
    case 1030u: goto L_0885FFE0;
    case 1031u: goto L_0885FFE8;
    case 1032u: goto L_0885FFF0;
    case 1033u: goto L_0885FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0885C000:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885C00Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18960));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885C00Cu) goto L_0885C00C;
    return;
L_0885C00C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1020), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885C024u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 380u, 0x0884D458u>(ctx, &aot_mem) && ctx.pc == 0x0885C024u) goto L_0885C024;
    return;
L_0885C024:
    ctx.set_gpr(31, 0x0885C02Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 361u, 0x0884D370u>(ctx, &aot_mem) && ctx.pc == 0x0885C02Cu) goto L_0885C02C;
    return;
L_0885C02C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885C038u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 360u, 0x0884D368u>(ctx, &aot_mem) && ctx.pc == 0x0885C038u) goto L_0885C038;
    return;
L_0885C038:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885C050u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19008));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885C050u) goto L_0885C050;
    return;
L_0885C050:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1024), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885C05Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 325u, 0x0884D1B8u>(ctx, &aot_mem) && ctx.pc == 0x0885C05Cu) goto L_0885C05C;
    return;
L_0885C05C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1032));
    ctx.set_gpr(31, 0x0885C068u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_0885C274;
L_0885C068:
    ctx.set_gpr(31, 0x0885C070u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_0885C268;
L_0885C070:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1028));
    ctx.set_gpr(31, 0x0885C07Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_0885C22C;
L_0885C07C:
    ctx.set_gpr(31, 0x0885C084u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1028));
    goto L_0885C224;
L_0885C084:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885C090u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1032));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885C090u) goto L_0885C090;
    return;
L_0885C090:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1020)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885C0A4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    goto L_0885C1B8;
L_0885C0A4:
    ctx.set_gpr(31, 0x0885C0ACu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0885DF90;
L_0885C0AC:
    ctx.set_gpr(31, 0x0885C0B4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(424));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 790u, 0x0884EB34u>(ctx, &aot_mem) && ctx.pc == 0x0885C0B4u) goto L_0885C0B4;
    return;
L_0885C0B4:
    ctx.set_gpr(31, 0x0885C0BCu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 518u, 0x08B06174u>(ctx, &aot_mem) && ctx.pc == 0x0885C0BCu) goto L_0885C0BC;
    return;
L_0885C0BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(876)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(876), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0885C194;
      }
      goto L_0885C0CC;
    }
L_0885C0CC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(424));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(364));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x0885C0E8u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 813u, 0x0884EC54u>(ctx, &aot_mem) && ctx.pc == 0x0885C0E8u) goto L_0885C0E8;
    return;
L_0885C0E8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(544));
    ctx.set_gpr(31, 0x0885C0F4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 569u, 0x0884A2D4u>(ctx, &aot_mem) && ctx.pc == 0x0885C0F4u) goto L_0885C0F4;
    return;
L_0885C0F4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0885C100u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x0885C100u) goto L_0885C100;
    return;
L_0885C100:
    ctx.set_gpr(31, 0x0885C108u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(544));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885C108u) goto L_0885C108;
    return;
L_0885C108:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C194;
      }
      goto L_0885C110;
    }
L_0885C110:
    ctx.set_gpr(31, 0x0885C118u);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 518u, 0x08B06174u>(ctx, &aot_mem) && ctx.pc == 0x0885C118u) goto L_0885C118;
    return;
L_0885C118:
    ctx.set_gpr(31, 0x0885C120u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 703u, 0x0884E5ECu>(ctx, &aot_mem) && ctx.pc == 0x0885C120u) goto L_0885C120;
    return;
L_0885C120:
    ctx.set_gpr(31, 0x0885C128u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_0885C310;
L_0885C128:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19016));
    ctx.set_gpr(31, 0x0885C13Cu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 223u, 0x08A59124u>(ctx, &aot_mem) && ctx.pc == 0x0885C13Cu) goto L_0885C13C;
    return;
L_0885C13C:
    ctx.set_gpr(31, 0x0885C144u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885C2C0;
L_0885C144:
    ctx.set_gpr(31, 0x0885C14Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885C2B8;
L_0885C14C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(548), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885C158u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(556));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x0885C158u) goto L_0885C158;
    return;
L_0885C158:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885C168u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(552), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 954u, 0x0885BAA4u>(ctx, &aot_mem) && ctx.pc == 0x0885C168u) goto L_0885C168;
    return;
L_0885C168:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0885C174u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1036), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0885C174u) goto L_0885C174;
    return;
L_0885C174:
    ctx.set_gpr(31, 0x0885C17Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x0885C17Cu) goto L_0885C17C;
    return;
L_0885C17C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x0885C18Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(876), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 316u, 0x0884D128u>(ctx, &aot_mem) && ctx.pc == 0x0885C18Cu) goto L_0885C18C;
    return;
L_0885C18C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C1A0;
      }
      goto L_0885C194;
    }
L_0885C194:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0885C198;
L_0885C198:
    ctx.set_gpr(31, 0x0885C1A0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 269u, 0x0884CE80u>(ctx, &aot_mem) && ctx.pc == 0x0885C1A0u) goto L_0885C1A0;
    return;
L_0885C1A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0885C1A4;
L_0885C1A4:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C1B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0885C1DCu);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    goto L_0885C21C;
L_0885C1DC:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885C1E8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0885C214;
L_0885C1E8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0885C1F4u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0885C20C;
L_0885C1F4:
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
L_0885C20C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C214:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem); return;
L_0885C21C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C224:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C22C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0885C240u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0885C260;
L_0885C240:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885C24Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0885C24Cu) goto L_0885C24C;
    return;
L_0885C24C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C260:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 621u, 0x08A0B448u>(ctx, &aot_mem); return;
L_0885C268:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C274:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0885C288u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 324u, 0x0884D1B0u>(ctx, &aot_mem) && ctx.pc == 0x0885C288u) goto L_0885C288;
    return;
L_0885C288:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885C294u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0885C294u) goto L_0885C294;
    return;
L_0885C294:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C2A8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 355u, 0x088496F4u>(ctx, &aot_mem); return;
L_0885C2B0:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 320u, 0x0884D174u>(ctx, &aot_mem); return;
L_0885C2B8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C2C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_0885C300;
    }
    goto L_0885C2D8;
L_0885C2D8:
    ctx.set_gpr(31, 0x0885C2E0u);
    // nop
    goto L_0885C310;
L_0885C2E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885C2ECu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0885C2ECu) goto L_0885C2EC;
    return;
L_0885C2EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C2FC;
      }
      goto L_0885C2F4;
    }
L_0885C2F4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0885C300;
      }
      goto L_0885C2FC;
    }
L_0885C2FC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0885C300;
L_0885C300:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C310:
    ctx.set_gpr(2, 2246u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24624)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C31C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885C348u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885C348u) goto L_0885C348;
    return;
L_0885C348:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0885C354u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(424));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 234u, 0x08850B30u>(ctx, &aot_mem) && ctx.pc == 0x0885C354u) goto L_0885C354;
    return;
L_0885C354:
    ctx.set_gpr(31, 0x0885C35Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885C35Cu) goto L_0885C35C;
    return;
L_0885C35C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0885C36Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x0885C36Cu) goto L_0885C36C;
    return;
L_0885C36C:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
        goto L_0885C3A4;
    }
    goto L_0885C374;
L_0885C374:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885C380u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0885DDBC;
L_0885C380:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(544));
    ctx.set_gpr(31, 0x0885C38Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x0885C38Cu) goto L_0885C38C;
    return;
L_0885C38C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(548), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885C3A0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(424));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 45u, 0x08850228u>(ctx, &aot_mem) && ctx.pc == 0x0885C3A0u) goto L_0885C3A0;
    return;
L_0885C3A0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
    goto L_0885C3A4;
L_0885C3A4:
    ctx.set_gpr(31, 0x0885C3ACu);
    // nop
    goto L_0885C5AC;
L_0885C3AC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_0885C414;
    }
    goto L_0885C3B4;
L_0885C3B4:
    ctx.set_gpr(31, 0x0885C3BCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
    goto L_0885C2B0;
L_0885C3BC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
        goto L_0885C3E0;
    }
    goto L_0885C3C4;
L_0885C3C4:
    ctx.set_gpr(31, 0x0885C3CCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
    goto L_0885C2B0;
L_0885C3CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.set_gpr(31, 0x0885C3D8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x0885C3D8u) goto L_0885C3D8;
    return;
L_0885C3D8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), 0u);
      if (branch_taken) {
          goto L_0885C400;
      }
      goto L_0885C3E0;
    }
L_0885C3E0:
    ctx.set_gpr(31, 0x0885C3E8u);
    // nop
    goto L_0885C2A8;
L_0885C3E8:
    ctx.set_gpr(31, 0x0885C3F0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 319u, 0x0884D16Cu>(ctx, &aot_mem) && ctx.pc == 0x0885C3F0u) goto L_0885C3F0;
    return;
L_0885C3F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.set_gpr(31, 0x0885C3FCu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x0885C3FCu) goto L_0885C3FC;
    return;
L_0885C3FC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), 0u);
    goto L_0885C400;
L_0885C400:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885C410u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885C410u) goto L_0885C410;
    return;
L_0885C410:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0885C414;
L_0885C414:
    ctx.set_gpr(31, 0x0885C41Cu);
    // nop
    goto L_0885DF90;
L_0885C41C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1028));
    ctx.set_gpr(31, 0x0885C428u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 950u, 0x0885BA54u>(ctx, &aot_mem) && ctx.pc == 0x0885C428u) goto L_0885C428;
    return;
L_0885C428:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1032));
    ctx.set_gpr(31, 0x0885C434u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x0885C434u) goto L_0885C434;
    return;
L_0885C434:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1020), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885C444u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1024), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 414u, 0x0884D658u>(ctx, &aot_mem) && ctx.pc == 0x0885C444u) goto L_0885C444;
    return;
L_0885C444:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(628), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_0885C458;
L_0885C458:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(636), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(640), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(644), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(648), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(652), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(656), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(660), ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0885C458;
      }
      goto L_0885C484;
    }
L_0885C484:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(636), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(632), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(756), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_0885C4A4;
L_0885C4A4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(756), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(760), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(764), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(768), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(772), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(776), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(780), ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0885C4A4;
      }
      goto L_0885C4D0;
    }
L_0885C4D0:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(756), ctx.gpr[3]);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_0885C4E4;
L_0885C4E4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(880));
    ctx.set_gpr(31, 0x0885C4F0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 952u, 0x0885BA7Cu>(ctx, &aot_mem) && ctx.pc == 0x0885C4F0u) goto L_0885C4F0;
    return;
L_0885C4F0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885C4E4;
      }
      goto L_0885C500;
    }
L_0885C500:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(900), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(904), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(908), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(909), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(910), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(916), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(920), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(924), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(928), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(932), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(936), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(940), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(944), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(948), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(952), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(956), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(960), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(968), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(964), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(972), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(965), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(976), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(966), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(980), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(967), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(984), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(988), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(992), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(996), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1000), ctx.gpr[3]);
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
L_0885C5AC:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(140));
    (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem); return;
L_0885C5B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0885C5E4u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 648u, 0x0884E334u>(ctx, &aot_mem) && ctx.pc == 0x0885C5E4u) goto L_0885C5E4;
    return;
L_0885C5E4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(910)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0885C66C;
      }
      goto L_0885C5F4;
    }
L_0885C5F4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(908)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(16, ctx.gpr[3] & 255u);
        goto L_0885C66C;
    }
    goto L_0885C600;
L_0885C600:
    ctx.set_gpr(31, 0x0885C608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x0885C608u) goto L_0885C608;
    return;
L_0885C608:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17223u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x0885C61Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_0885C878;
L_0885C61C:
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.set_gpr(2, 16544u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(904)));
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_0885C66C;
      }
      goto L_0885C64C;
    }
L_0885C64C:
    ctx.set_gpr(2, 15692u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0885C664u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0885D188;
L_0885C664:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(910), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0885C66C;
L_0885C66C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0885C678u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_0885D294;
L_0885C678:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0885C684u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_0885D5C4;
L_0885C684:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0885C690u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_0885D8E4;
L_0885C690:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(910)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(544));
        goto L_0885C6E4;
    }
    goto L_0885C6A0;
L_0885C6A0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C6E0;
      }
      goto L_0885C6A8;
    }
L_0885C6A8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(908)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885C6E0;
      }
      goto L_0885C6B4;
    }
L_0885C6B4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(909)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885C6E0;
      }
      goto L_0885C6C0;
    }
L_0885C6C0:
    ctx.set_gpr(2, 15692u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0885C6D8u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0885D188;
L_0885C6D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(910), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0885C6E0;
L_0885C6E0:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(544));
    goto L_0885C6E4;
L_0885C6E4:
    ctx.set_gpr(31, 0x0885C6ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885C6ECu) goto L_0885C6EC;
    return;
L_0885C6EC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
        goto L_0885C770;
    }
    goto L_0885C6F4;
L_0885C6F4:
    ctx.set_gpr(31, 0x0885C6FCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0885C6FCu) goto L_0885C6FC;
    return;
L_0885C6FC:
    ctx.set_gpr(31, 0x0885C704u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x0885C704u) goto L_0885C704;
    return;
L_0885C704:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(620)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(4));
        goto L_0885C724;
    }
    goto L_0885C710;
L_0885C710:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(556));
    ctx.set_gpr(31, 0x0885C71Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x0885C71Cu) goto L_0885C71C;
    return;
L_0885C71C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0885C748;
      }
      goto L_0885C724;
    }
L_0885C724:
    ctx.set_gpr(31, 0x0885C72Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 373u, 0x0884D408u>(ctx, &aot_mem) && ctx.pc == 0x0885C72Cu) goto L_0885C72C;
    return;
L_0885C72C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(548)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885C73Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_0885C7A4;
L_0885C73C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x0885C748u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x0885C748u) goto L_0885C748;
    return;
L_0885C748:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(624)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x0885C75Cu);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(424));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 189u, 0x08850884u>(ctx, &aot_mem) && ctx.pc == 0x0885C75Cu) goto L_0885C75C;
    return;
L_0885C75C:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885C76Cu);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(424));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 99u, 0x08850450u>(ctx, &aot_mem) && ctx.pc == 0x0885C76Cu) goto L_0885C76C;
    return;
L_0885C76C:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_0885C770;
L_0885C770:
    ctx.set_gpr(31, 0x0885C778u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0885E1C4;
L_0885C778:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0885C784u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    goto L_0885E014;
L_0885C784:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C7A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0885C7CCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    goto L_0885C830;
L_0885C7CC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885C7D8u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0885C828;
L_0885C7D8:
    ctx.set_gpr(3, ctx.gpr[18] << 6u);
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885C7ECu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x0885C7ECu) goto L_0885C7EC;
    return;
L_0885C7EC:
    ctx.set_gpr(31, 0x0885C7F4u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0885C820;
L_0885C7F4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885C804u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x0885C804u) goto L_0885C804;
    return;
L_0885C804:
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
L_0885C820:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(188));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C828:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(124));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C830:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(121)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32));
        goto L_0885C84C;
    }
    goto L_0885C844;
L_0885C844:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0885C864;
      }
      goto L_0885C84C;
    }
L_0885C84C:
    ctx.set_gpr(31, 0x0885C854u);
    // nop
    goto L_0885C870;
L_0885C854:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885C864u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885C864u) goto L_0885C864;
    return;
L_0885C864:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C870:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C878:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_fpr_bits(20, ctx.fpr_bits(13));
    ctx.set_fpu_condition((ctx.fpr[21] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885C8B4;
      }
      goto L_0885C8A0;
    }
L_0885C8A0:
    ctx.set_gpr(31, 0x0885C8A8u);
    // nop
    goto L_0885C8CC;
L_0885C8A8:
    ctx.fpr[1] = ctx.fpr[20] - ctx.fpr[21];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[21] = ctx.fpr[21] + ctx.fpr[0];
    goto L_0885C8B4;
L_0885C8B4:
    ctx.set_fpr_bits(0, ctx.fpr_bits(21));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C8CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0885C8DCu);
    // nop
    goto L_0885C91C;
L_0885C8DC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
        goto L_0885C8F0;
    }
    goto L_0885C8E4;
L_0885C8E4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
      if (branch_taken) {
          goto L_0885C904;
      }
      goto L_0885C8F0;
    }
L_0885C8F0:
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_0885C904;
L_0885C904:
    ctx.set_gpr(2, 20352u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C91C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 975u, 0x08AB39ACu>(ctx, &aot_mem); return;
L_0885C924:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(636), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(756), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(876), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C93C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(876)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0885CB04;
      }
      goto L_0885C964;
    }
L_0885C964:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
        goto L_0885CADC;
    }
    goto L_0885C970;
L_0885C970:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(18, ctx.gpr[16] << 2u);
        goto L_0885C9AC;
    }
    goto L_0885C97C;
L_0885C97C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C98C;
      }
      goto L_0885C984;
    }
L_0885C984:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0885CB24;
      }
      goto L_0885C98C;
    }
L_0885C98C:
    ctx.set_gpr(31, 0x0885C994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 125u, 0x0884C7F8u>(ctx, &aot_mem) && ctx.pc == 0x0885C994u) goto L_0885C994;
    return;
L_0885C994:
    ctx.set_gpr(31, 0x0885C99Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 125u, 0x0884C7F8u>(ctx, &aot_mem) && ctx.pc == 0x0885C99Cu) goto L_0885C99C;
    return;
L_0885C99C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(876)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(876), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[16] << 2u);
    goto L_0885C9AC;
L_0885C9AC:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(636)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885C9C0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 471u, 0x0884D924u>(ctx, &aot_mem) && ctx.pc == 0x0885C9C0u) goto L_0885C9C0;
    return;
L_0885C9C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CB20;
      }
      goto L_0885C9C8;
    }
L_0885C9C8:
    ctx.set_gpr(31, 0x0885C9D0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0885DF90;
L_0885C9D0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1028));
    ctx.set_gpr(31, 0x0885C9DCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 950u, 0x0885BA54u>(ctx, &aot_mem) && ctx.pc == 0x0885C9DCu) goto L_0885C9DC;
    return;
L_0885C9DC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1032));
    ctx.set_gpr(31, 0x0885C9E8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x0885C9E8u) goto L_0885C9E8;
    return;
L_0885C9E8:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[18]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0885C9F8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 380u, 0x0884D458u>(ctx, &aot_mem) && ctx.pc == 0x0885C9F8u) goto L_0885C9F8;
    return;
L_0885C9F8:
    ctx.set_gpr(31, 0x0885CA00u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 361u, 0x0884D370u>(ctx, &aot_mem) && ctx.pc == 0x0885CA00u) goto L_0885CA00;
    return;
L_0885CA00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885CA0Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 360u, 0x0884D368u>(ctx, &aot_mem) && ctx.pc == 0x0885CA0Cu) goto L_0885CA0C;
    return;
L_0885CA0C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885CA24u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18960));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885CA24u) goto L_0885CA24;
    return;
L_0885CA24:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885CA30u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1020), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 380u, 0x0884D458u>(ctx, &aot_mem) && ctx.pc == 0x0885CA30u) goto L_0885CA30;
    return;
L_0885CA30:
    ctx.set_gpr(31, 0x0885CA38u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 361u, 0x0884D370u>(ctx, &aot_mem) && ctx.pc == 0x0885CA38u) goto L_0885CA38;
    return;
L_0885CA38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885CA44u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 360u, 0x0884D368u>(ctx, &aot_mem) && ctx.pc == 0x0885CA44u) goto L_0885CA44;
    return;
L_0885CA44:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885CA5Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19008));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885CA5Cu) goto L_0885CA5C;
    return;
L_0885CA5C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1024), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885CA68u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 325u, 0x0884D1B8u>(ctx, &aot_mem) && ctx.pc == 0x0885CA68u) goto L_0885CA68;
    return;
L_0885CA68:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1032));
    ctx.set_gpr(31, 0x0885CA74u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_0885C274;
L_0885CA74:
    ctx.set_gpr(31, 0x0885CA7Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_0885C268;
L_0885CA7C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1028));
    ctx.set_gpr(31, 0x0885CA88u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_0885C22C;
L_0885CA88:
    ctx.set_gpr(31, 0x0885CA90u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1028));
    goto L_0885C224;
L_0885CA90:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885CA9Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1032));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885CA9Cu) goto L_0885CA9C;
    return;
L_0885CA9C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1020)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885CAB0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    goto L_0885C1B8;
L_0885CAB0:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(756)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(876)));
        goto L_0885CAD0;
    }
    goto L_0885CAC0;
L_0885CAC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(876)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(876), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0885CB20;
      }
      goto L_0885CAD0;
    }
L_0885CAD0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(876), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0885CB20;
      }
      goto L_0885CADC;
    }
L_0885CADC:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(756)));
    ctx.set_gpr(31, 0x0885CAECu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 471u, 0x0884D924u>(ctx, &aot_mem) && ctx.pc == 0x0885CAECu) goto L_0885CAEC;
    return;
L_0885CAEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CB20;
      }
      goto L_0885CAF4;
    }
L_0885CAF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(876)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(876), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0885CB20;
      }
      goto L_0885CB04;
    }
L_0885CB04:
    ctx.set_gpr(31, 0x0885CB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0885CB0Cu) goto L_0885CB0C;
    return;
L_0885CB0C:
    ctx.set_gpr(31, 0x0885CB14u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x0885CB14u) goto L_0885CB14;
    return;
L_0885CB14:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(876), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0885CB24;
      }
      goto L_0885CB20;
    }
L_0885CB20:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0885CB24;
L_0885CB24:
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
L_0885CB3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[18]);
    ctx.set_gpr(19, ctx.gpr[3] + static_cast<std::uint32_t>(756));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(756)));
    if (static_cast<std::int32_t>(ctx.gpr[3]) < 0) {
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[18]);
        goto L_0885CBD4;
    }
    goto L_0885CB74;
L_0885CB74:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(408)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885CB84u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(208));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885CB84u) goto L_0885CB84;
    return;
L_0885CB84:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0885CBD0;
      }
      goto L_0885CB90;
    }
L_0885CB90:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_0885CB98;
L_0885CB98:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(756), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(760), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(764), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(768), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(772), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(776), ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(780), ctx.gpr[4]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0885CB98;
      }
      goto L_0885CBC4;
    }
L_0885CBC4:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(756), ctx.gpr[4]);
    goto L_0885CBD0;
L_0885CBD0:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[18]);
    goto L_0885CBD4;
L_0885CBD4:
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(636));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(636)));
    if (static_cast<std::int32_t>(ctx.gpr[3]) < 0) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0885CC40;
    }
    goto L_0885CBE4;
L_0885CBE4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0885CBF0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 532u, 0x0884DC10u>(ctx, &aot_mem) && ctx.pc == 0x0885CBF0u) goto L_0885CBF0;
    return;
L_0885CBF0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0885CC3C;
      }
      goto L_0885CBFC;
    }
L_0885CBFC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_0885CC04;
L_0885CC04:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(636), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(640), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(644), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(648), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(652), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(656), ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0885CC04;
      }
      goto L_0885CC30;
    }
L_0885CC30:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(636), ctx.gpr[4]);
    goto L_0885CC3C;
L_0885CC3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0885CC40;
L_0885CC40:
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
L_0885CC58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885CC98;
      }
      goto L_0885CC78;
    }
L_0885CC78:
    ctx.set_gpr(31, 0x0885CC80u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 373u, 0x0884D408u>(ctx, &aot_mem) && ctx.pc == 0x0885CC80u) goto L_0885CC80;
    return;
L_0885CC80:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(548)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885CC90u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(556));
    goto L_0885C7A4;
L_0885CC90:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0885CC98;
L_0885CC98:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885CCA4u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 542u, 0x0884DCA8u>(ctx, &aot_mem) && ctx.pc == 0x0885CCA4u) goto L_0885CCA4;
    return;
L_0885CCA4:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(756)));
    if (static_cast<std::int32_t>(ctx.gpr[3]) < 0) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0885CCD0;
    }
    goto L_0885CCB8;
L_0885CCB8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885CCCCu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(208));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885CCCCu) goto L_0885CCCC;
    return;
L_0885CCCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0885CCD0;
L_0885CCD0:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CCE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0885CD1Cu);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 552u, 0x0884DD40u>(ctx, &aot_mem) && ctx.pc == 0x0885CD1Cu) goto L_0885CD1C;
    return;
L_0885CD1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(756)));
    if (static_cast<std::int32_t>(ctx.gpr[3]) < 0) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_0885CD5C;
    }
    goto L_0885CD34;
L_0885CD34:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885CD58u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(208));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885CD58u) goto L_0885CD58;
    return;
L_0885CD58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_0885CD5C;
L_0885CD5C:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CD7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(16, ctx.gpr[10] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885CDC0u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885CDC0u) goto L_0885CDC0;
    return;
L_0885CDC0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885CDE4u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885CDE4u) goto L_0885CDE4;
    return;
L_0885CDE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CE08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[5] << 2u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[19]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(880));
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0885CE44u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0885D0B0;
L_0885CE44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CE58;
      }
      goto L_0885CE4C;
    }
L_0885CE4C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885CE58u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 952u, 0x0885BA7Cu>(ctx, &aot_mem) && ctx.pc == 0x0885CE58u) goto L_0885CE58;
    return;
L_0885CE58:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_0885CE68;
    }
    goto L_0885CE60;
L_0885CE60:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0885CE78;
      }
      goto L_0885CE68;
    }
L_0885CE68:
    ctx.set_gpr(31, 0x0885CE70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 703u, 0x0884E5ECu>(ctx, &aot_mem) && ctx.pc == 0x0885CE70u) goto L_0885CE70;
    return;
L_0885CE70:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[19]);
    goto L_0885CE78;
L_0885CE78:
    ctx.set_gpr(31, 0x0885CE80u);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(880));
    goto L_0885D0A4;
L_0885CE80:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0885CE90u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 223u, 0x08A59124u>(ctx, &aot_mem) && ctx.pc == 0x0885CE90u) goto L_0885CE90;
    return;
L_0885CE90:
    ctx.set_gpr(31, 0x0885CE98u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885D054;
L_0885CE98:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885CEA4u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 952u, 0x0885BA7Cu>(ctx, &aot_mem) && ctx.pc == 0x0885CEA4u) goto L_0885CEA4;
    return;
L_0885CEA4:
    ctx.set_gpr(31, 0x0885CEACu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0885D0B0;
L_0885CEAC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0885CF10;
    }
    goto L_0885CEB4;
L_0885CEB4:
    ctx.set_gpr(31, 0x0885CEBCu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0885D04C;
L_0885CEBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885CEC8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 651u, 0x08A56F18u>(ctx, &aot_mem) && ctx.pc == 0x0885CEC8u) goto L_0885CEC8;
    return;
L_0885CEC8:
    ctx.set_gpr(31, 0x0885CED0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0885D04C;
L_0885CED0:
    ctx.set_gpr(31, 0x0885CED8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885D000;
L_0885CED8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_0885CF0C;
      }
      goto L_0885CEE4;
    }
L_0885CEE4:
    ctx.set_gpr(31, 0x0885CEECu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0885D04C;
L_0885CEEC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885CEFCu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_0885CF2C;
L_0885CEFC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885CEE4;
      }
      goto L_0885CF0C;
    }
L_0885CF0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0885CF10;
L_0885CF10:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CF2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0885CF50u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    goto L_0885CFF8;
L_0885CF50:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0885CF74;
    }
    goto L_0885CF58;
L_0885CF58:
    ctx.set_gpr(31, 0x0885CF60u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    goto L_0885CFF0;
L_0885CF60:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885CF70u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_0885CF84;
L_0885CF70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0885CF74;
L_0885CF74:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CF84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0885CFD4;
      }
      goto L_0885CFA0;
    }
L_0885CFA0:
    if (static_cast<std::int32_t>(ctx.gpr[16]) < 0) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0885CFD8;
    }
    goto L_0885CFA8;
L_0885CFA8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_0885CFC0;
    }
    goto L_0885CFB4;
L_0885CFB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CFD4;
      }
      goto L_0885CFBC;
    }
L_0885CFBC:
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_0885CFC0;
L_0885CFC0:
    ctx.set_gpr(31, 0x0885CFC8u);
    // nop
    goto L_0885CFE8;
L_0885CFC8:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0885CFD4;
L_0885CFD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0885CFD8;
L_0885CFD8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CFE8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CFF0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CFF8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D000:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0885D018u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    goto L_0885D044;
L_0885D018:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_0885D02C;
    }
    goto L_0885D020;
L_0885D020:
    ctx.set_gpr(31, 0x0885D028u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    goto L_0885D03C;
L_0885D028:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    goto L_0885D02C;
L_0885D02C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D03C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D044:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D04C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D054:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_0885D094;
    }
    goto L_0885D06C;
L_0885D06C:
    ctx.set_gpr(31, 0x0885D074u);
    // nop
    goto L_0885D0A4;
L_0885D074:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885D080u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0885D080u) goto L_0885D080;
    return;
L_0885D080:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D090;
      }
      goto L_0885D088;
    }
L_0885D088:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0885D094;
      }
      goto L_0885D090;
    }
L_0885D090:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0885D094;
L_0885D094:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D0A4:
    ctx.set_gpr(2, 2246u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24720)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D0B0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D0B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(880));
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0885D0ECu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0885D0B0;
L_0885D0EC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0885D170;
    }
    goto L_0885D0F4;
L_0885D0F4:
    ctx.set_gpr(31, 0x0885D0FCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0885D04C;
L_0885D0FC:
    ctx.set_gpr(31, 0x0885D104u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885D000;
L_0885D104:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[3];
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0885D148;
      }
      goto L_0885D110;
    }
L_0885D110:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_0885D16C;
      }
      goto L_0885D118;
    }
L_0885D118:
    ctx.set_gpr(31, 0x0885D120u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0885D04C;
L_0885D120:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885D130u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_0885CF2C;
L_0885D130:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885D118;
      }
      goto L_0885D140;
    }
L_0885D140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D16C;
      }
      goto L_0885D148;
    }
L_0885D148:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D16C;
      }
      goto L_0885D154;
    }
L_0885D154:
    ctx.set_gpr(31, 0x0885D15Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0885D04C;
L_0885D15C:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x0885D16Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885CF2C;
L_0885D16C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0885D170;
L_0885D170:
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
L_0885D188:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0885D1B0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(888));
    goto L_0885D0B0;
L_0885D1B0:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_0885D1C0;
    }
    goto L_0885D1B8;
L_0885D1B8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(908), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0885D27C;
      }
      goto L_0885D1C0;
    }
L_0885D1C0:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[12])) || ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0885D208;
    }
    goto L_0885D1D0;
L_0885D1D0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(900), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(908), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0885D1EC;
      }
      goto L_0885D1E4;
    }
L_0885D1E4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(909), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0885D1FC;
      }
      goto L_0885D1EC;
    }
L_0885D1EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[17] != ctx.gpr[3]) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(910), static_cast<std::uint8_t>(0u));
        goto L_0885D27C;
    }
    goto L_0885D1F8;
L_0885D1F8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(909), static_cast<std::uint8_t>(0u));
    goto L_0885D1FC;
L_0885D1FC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(910), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D27C;
      }
      goto L_0885D208;
    }
L_0885D208:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(908), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(909), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
        goto L_0885D244;
    }
    goto L_0885D228;
L_0885D228:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0885D240;
      }
      goto L_0885D234;
    }
L_0885D234:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885D240u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    goto L_0885D0B8;
L_0885D240:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
    goto L_0885D244;
L_0885D244:
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(910), static_cast<std::uint8_t>(0u));
        goto L_0885D27C;
    }
    goto L_0885D250;
L_0885D250:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8876));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D26C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(910), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0885D27C;
      }
      goto L_0885D278;
    }
L_0885D278:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(910), static_cast<std::uint8_t>(0u));
    goto L_0885D27C;
L_0885D27C:
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
L_0885D294:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0885D2C4u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(888));
    goto L_0885D0B0;
L_0885D2C4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0885D484;
    }
    goto L_0885D2CC;
L_0885D2CC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(908)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D480;
      }
      goto L_0885D2D8;
    }
L_0885D2D8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(909)));
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(900)));
        goto L_0885D338;
    }
    goto L_0885D2E4;
L_0885D2E4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(900)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_0885D308;
    }
    goto L_0885D2FC;
L_0885D2FC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(904)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[0] / ctx.fpr[1];
      if (branch_taken) {
          goto L_0885D30C;
      }
      goto L_0885D308;
    }
L_0885D308:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_0885D30C;
L_0885D30C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[0])) || ctx.fpr[22] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1000)));
        goto L_0885D390;
    }
    goto L_0885D324;
L_0885D324:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(904), 0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(909), static_cast<std::uint8_t>(0u));
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(908), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0885D38C;
      }
      goto L_0885D338;
    }
L_0885D338:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[22])) || ctx.fpr[2] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885D360;
      }
      goto L_0885D34C;
    }
L_0885D34C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(904)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[2];
    ctx.fpr[22] = ctx.fpr[0] - ctx.fpr[1];
    goto L_0885D360;
L_0885D360:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885D38C;
      }
      goto L_0885D374;
    }
L_0885D374:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(909), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(908), static_cast<std::uint8_t>(0u));
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(910), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0885D38C;
L_0885D38C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1000)));
    goto L_0885D390;
L_0885D390:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 13 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
        goto L_0885D458;
    }
    goto L_0885D39C;
L_0885D39C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[21] = ctx.fpr[0] - ctx.fpr[22];
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_0885D3B0;
L_0885D3B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    if (ctx.gpr[17] != ctx.gpr[2]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1000)));
        goto L_0885D40C;
    }
    goto L_0885D3BC;
L_0885D3BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1000)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(18312));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x0885D404u);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    goto L_0885D0B8;
L_0885D404:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0885D444;
      }
      goto L_0885D40C;
    }
L_0885D40C:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18312));
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x0885D440u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_0885D0B8;
L_0885D440:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0885D444;
L_0885D444:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885D3B0;
      }
      goto L_0885D450;
    }
L_0885D450:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(908)));
      if (branch_taken) {
          goto L_0885D46C;
      }
      goto L_0885D458;
    }
L_0885D458:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0885D468u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    goto L_0885D0B8;
L_0885D468:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(908)));
    goto L_0885D46C;
L_0885D46C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D480;
      }
      goto L_0885D474;
    }
L_0885D474:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(904)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[20];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0885D480;
L_0885D480:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0885D484;
L_0885D484:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D4A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0885D4D0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(888));
    goto L_0885D0B0;
L_0885D4D0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0885D52C;
    }
    goto L_0885D4D8;
L_0885D4D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0885D528;
      }
      goto L_0885D4E4;
    }
L_0885D4E4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(940), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(944), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(948), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_0885D500;
L_0885D500:
    ctx.set_gpr(31, 0x0885D508u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(888));
    goto L_0885D04C;
L_0885D508:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x0885D514u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885D544;
L_0885D514:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(916), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885D500;
      }
      goto L_0885D528;
    }
L_0885D528:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0885D52C;
L_0885D52C:
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
L_0885D544:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0885D564u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    goto L_0885CFF8;
L_0885D564:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(0u);
        goto L_0885D584;
    }
    goto L_0885D56C;
L_0885D56C:
    ctx.set_gpr(31, 0x0885D574u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    goto L_0885CFF0;
L_0885D574:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885D580u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885D598;
L_0885D580:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_0885D584;
L_0885D584:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D598:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0885D5ACu);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_0885CFE8;
L_0885D5AC:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D5C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(948)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0885D6D8;
    }
    goto L_0885D5F0;
L_0885D5F0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(944)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[12];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(944), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(940)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(3, 16256u << 16u);
        goto L_0885D634;
    }
    goto L_0885D614;
L_0885D614:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(944)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885D630;
      }
      goto L_0885D628;
    }
L_0885D628:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[0] / ctx.fpr[1];
      if (branch_taken) {
          goto L_0885D638;
      }
      goto L_0885D630;
    }
L_0885D630:
    ctx.set_gpr(3, 16256u << 16u);
    goto L_0885D634;
L_0885D634:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_0885D638;
L_0885D638:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_0885D640;
L_0885D640:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[18] != ctx.gpr[3]) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(916)));
        goto L_0885D67C;
    }
    goto L_0885D64C;
L_0885D64C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(916)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x0885D674u);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    goto L_0885D0B8;
L_0885D674:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0885D6AC;
      }
      goto L_0885D67C;
    }
L_0885D67C:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885D6A8;
      }
      goto L_0885D690;
    }
L_0885D690:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0885D6A8u);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    goto L_0885D0B8;
L_0885D6A8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0885D6AC;
L_0885D6AC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885D640;
      }
      goto L_0885D6B8;
    }
L_0885D6B8:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) || ctx.fpr[20] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885D6D4;
      }
      goto L_0885D6D0;
    }
L_0885D6D0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(948), static_cast<std::uint8_t>(0u));
    goto L_0885D6D4;
L_0885D6D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0885D6D8;
L_0885D6D8:
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
L_0885D6F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[17] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[19]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0885D724u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(880));
    goto L_0885D0B0;
L_0885D724:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0885D794;
    }
    goto L_0885D72C;
L_0885D72C:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(952));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(952)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0885D790;
      }
      goto L_0885D740;
    }
L_0885D740:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(19, 0u + 0u);
    goto L_0885D748;
L_0885D748:
    if (ctx.gpr[19] != ctx.gpr[16]) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_0885D770;
    }
    goto L_0885D750;
L_0885D750:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885D768u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    goto L_0885D0B8;
L_0885D768:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0885D784;
      }
      goto L_0885D770;
    }
L_0885D770:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885D780u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    goto L_0885D0B8;
L_0885D780:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0885D784;
L_0885D784:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885D748;
      }
      goto L_0885D790;
    }
L_0885D790:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0885D794;
L_0885D794:
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
L_0885D7AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_fpr_bits(20, ctx.fpr_bits(13));
    ctx.set_gpr(31, 0x0885D7E0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(892));
    goto L_0885D0B0;
L_0885D7E0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0885D8C8;
    }
    goto L_0885D7E8;
L_0885D7E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(960)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0885D8C4;
      }
      goto L_0885D7F4;
    }
L_0885D7F4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(960), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(988), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(992), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(996), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(984), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_0885D814;
L_0885D814:
    ctx.set_gpr(31, 0x0885D81Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(892));
    goto L_0885D04C;
L_0885D81C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885D828u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_0885D544;
L_0885D828:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(968), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885D814;
      }
      goto L_0885D83C;
    }
L_0885D83C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(964), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(965), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(966), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(967), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(960)));
    ctx.set_gpr(1, ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D8C4;
      }
      goto L_0885D85C;
    }
L_0885D85C:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8932));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D878:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[16]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(964), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0885D8C4;
      }
      goto L_0885D888;
    }
L_0885D888:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(964), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(966), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0885D8C4;
      }
      goto L_0885D898;
    }
L_0885D898:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(964), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(967), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0885D8C4;
      }
      goto L_0885D8A8;
    }
L_0885D8A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(965), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(966), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0885D8C4;
      }
      goto L_0885D8B8;
    }
L_0885D8B8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(965), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(967), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0885D8C4;
L_0885D8C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0885D8C8;
L_0885D8C8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D8E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(996)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0885D9FC;
    }
    goto L_0885D910;
L_0885D910:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(992)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[12];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(992), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(988)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(3, 16256u << 16u);
        goto L_0885D954;
    }
    goto L_0885D934;
L_0885D934:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(992)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885D950;
      }
      goto L_0885D948;
    }
L_0885D948:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[0] / ctx.fpr[1];
      if (branch_taken) {
          goto L_0885D958;
      }
      goto L_0885D950;
    }
L_0885D950:
    ctx.set_gpr(3, 16256u << 16u);
    goto L_0885D954;
L_0885D954:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_0885D958;
L_0885D958:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_0885D960;
L_0885D960:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(964)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(968)));
        goto L_0885D9A0;
    }
    goto L_0885D974;
L_0885D974:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(968)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(984)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x0885D998u);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    goto L_0885D0B8;
L_0885D998:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0885D9D0;
      }
      goto L_0885D9A0;
    }
L_0885D9A0:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885D9CC;
      }
      goto L_0885D9B4;
    }
L_0885D9B4:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885D9CCu);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    goto L_0885D0B8;
L_0885D9CC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0885D9D0;
L_0885D9D0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885D960;
      }
      goto L_0885D9DC;
    }
L_0885D9DC:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) || ctx.fpr[20] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885D9F8;
      }
      goto L_0885D9F4;
    }
L_0885D9F4:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(996), static_cast<std::uint8_t>(0u));
    goto L_0885D9F8;
L_0885D9F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0885D9FC;
L_0885D9FC:
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
L_0885DA14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0885DA38u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(888));
    goto L_0885D0B0;
L_0885DA38:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0885DBB4;
    }
    goto L_0885DA40;
L_0885DA40:
    ctx.set_gpr(31, 0x0885DA48u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(896));
    goto L_0885D0B0;
L_0885DA48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DBB0;
      }
      goto L_0885DA50;
    }
L_0885DA50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1000)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0885DBB0;
      }
      goto L_0885DA5C;
    }
L_0885DA5C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1000), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0885DAC0;
      }
      goto L_0885DA68;
    }
L_0885DA68:
    ctx.set_gpr(16, 0u + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_0885DA70;
L_0885DA70:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0885DA80u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_0885D0B8;
L_0885DA80:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_0885DA70;
    }
    goto L_0885DA90;
L_0885DA90:
    ctx.set_gpr(16, 0u + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_0885DA98;
L_0885DA98:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0885DAA8u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_0885D0B8;
L_0885DAA8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_0885DA98;
    }
    goto L_0885DAB8;
L_0885DAB8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 49024u << 16u);
      if (branch_taken) {
          goto L_0885DBA0;
      }
      goto L_0885DAC0;
    }
L_0885DAC0:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_0885DAC8;
L_0885DAC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    if (ctx.gpr[17] != ctx.gpr[2]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1000)));
        goto L_0885DB10;
    }
    goto L_0885DAD4;
L_0885DAD4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1000)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18312));
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0885DB08u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    goto L_0885D0B8;
L_0885DB08:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0885DB44;
      }
      goto L_0885DB10;
    }
L_0885DB10:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18312));
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0885DB40u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_0885D0B8;
L_0885DB40:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0885DB44;
L_0885DB44:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885DAC8;
      }
      goto L_0885DB50;
    }
L_0885DB50:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_0885DB58;
L_0885DB58:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1000)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18676));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0885DB8Cu);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_0885D0B8;
L_0885DB8C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885DB58;
      }
      goto L_0885DB9C;
    }
L_0885DB9C:
    ctx.set_gpr(2, 49024u << 16u);
    goto L_0885DBA0;
L_0885DBA0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885DBB0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0885D188;
L_0885DBB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0885DBB4;
L_0885DBB4:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885DBC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885DBFC;
      }
      goto L_0885DBE4;
    }
L_0885DBE4:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885DBF4u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0885D188;
L_0885DBF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DC14;
      }
      goto L_0885DBFC;
    }
L_0885DBFC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(900), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(904), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(908), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(909), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(910), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0885DC14;
L_0885DC14:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
        goto L_0885DC34;
    }
    goto L_0885DC1C;
L_0885DC1C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885DC2Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    goto L_0885D4A4;
L_0885DC2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DC5C;
      }
      goto L_0885DC34;
    }
L_0885DC34:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(916), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(920), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(924), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(928), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(932), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(936), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(940), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(944), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(948), static_cast<std::uint8_t>(0u));
    goto L_0885DC5C;
L_0885DC5C:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
        goto L_0885DC8C;
    }
    goto L_0885DC64;
L_0885DC64:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0885DC74u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    goto L_0885D6F0;
L_0885DC74:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0885DC84u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    goto L_0885D6F0;
L_0885DC84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DC94;
      }
      goto L_0885DC8C;
    }
L_0885DC8C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(952), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(956), ctx.gpr[3]);
    goto L_0885DC94;
L_0885DC94:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
        goto L_0885DCBC;
    }
    goto L_0885DC9C;
L_0885DC9C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885DCB4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    goto L_0885D7AC;
L_0885DCB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DCF4;
      }
      goto L_0885DCBC;
    }
L_0885DCBC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(960), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(968), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(964), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(972), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(965), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(976), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(966), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(980), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(967), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(984), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(988), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(992), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(996), static_cast<std::uint8_t>(0u));
    goto L_0885DCF4;
L_0885DCF4:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
        goto L_0885DD10;
    }
    goto L_0885DCFC;
L_0885DCFC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885DD08u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    goto L_0885DA14;
L_0885DD08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DD14;
      }
      goto L_0885DD10;
    }
L_0885DD10:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1000), ctx.gpr[3]);
    goto L_0885DD14;
L_0885DD14:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0885DD44;
    }
    goto L_0885DD1C;
L_0885DD1C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x0885DD28u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0885D294;
L_0885DD28:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x0885DD34u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0885D5C4;
L_0885DD34:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885DD40u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_0885D8E4;
L_0885DD40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0885DD44;
L_0885DD44:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885DD54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_fpr_bits(20, ctx.fpr_bits(13));
    ctx.set_gpr(31, 0x0885DD7Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x0885DD7Cu) goto L_0885DD7C;
    return;
L_0885DD7C:
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(624)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x0885DD90u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x0885DD90u) goto L_0885DD90;
    return;
L_0885DD90:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(556));
    ctx.set_gpr(31, 0x0885DD9Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 748u, 0x089FFCD4u>(ctx, &aot_mem) && ctx.pc == 0x0885DD9Cu) goto L_0885DD9C;
    return;
L_0885DD9C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885DDBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885DE2C;
      }
      goto L_0885DDD4;
    }
L_0885DDD4:
    ctx.set_gpr(31, 0x0885DDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885DDDCu) goto L_0885DDDC;
    return;
L_0885DDDC:
    ctx.set_gpr(31, 0x0885DDE4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 622u, 0x088571D0u>(ctx, &aot_mem) && ctx.pc == 0x0885DDE4u) goto L_0885DDE4;
    return;
L_0885DDE4:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(552)));
        goto L_0885DE30;
    }
    goto L_0885DDF0;
L_0885DDF0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(552)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0885DE64;
    }
    goto L_0885DDFC;
L_0885DDFC:
    ctx.set_gpr(31, 0x0885DE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x0885DE04u) goto L_0885DE04;
    return;
L_0885DE04:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885DE10u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(544));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885DE10u) goto L_0885DE10;
    return;
L_0885DE10:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885DE20u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 462u, 0x0885186Cu>(ctx, &aot_mem) && ctx.pc == 0x0885DE20u) goto L_0885DE20;
    return;
L_0885DE20:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(552), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0885DE60;
      }
      goto L_0885DE2C;
    }
L_0885DE2C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(552)));
    goto L_0885DE30;
L_0885DE30:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DE60;
      }
      goto L_0885DE38;
    }
L_0885DE38:
    ctx.set_gpr(31, 0x0885DE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x0885DE40u) goto L_0885DE40;
    return;
L_0885DE40:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885DE4Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(544));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885DE4Cu) goto L_0885DE4C;
    return;
L_0885DE4C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885DE5Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x0885DE5Cu) goto L_0885DE5C;
    return;
L_0885DE5C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(552), static_cast<std::uint8_t>(0u));
    goto L_0885DE60;
L_0885DE60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0885DE64;
L_0885DE64:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885DE74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0885DE98u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    goto L_0885DDBC;
L_0885DE98:
    ctx.set_gpr(31, 0x0885DEA0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 320u, 0x0884D174u>(ctx, &aot_mem) && ctx.pc == 0x0885DEA0u) goto L_0885DEA0;
    return;
L_0885DEA0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_0885DEC0;
    }
    goto L_0885DEA8;
L_0885DEA8:
    ctx.set_gpr(31, 0x0885DEB0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 373u, 0x0884D408u>(ctx, &aot_mem) && ctx.pc == 0x0885DEB0u) goto L_0885DEB0;
    return;
L_0885DEB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885DEBCu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_0885DEE4;
L_0885DEBC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0885DEC0;
L_0885DEC0:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885DECCu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 686u, 0x0884E520u>(ctx, &aot_mem) && ctx.pc == 0x0885DECCu) goto L_0885DECC;
    return;
L_0885DECC:
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
L_0885DEE4:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(253), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885DEEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1008)));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885DF58;
      }
      goto L_0885DF10;
    }
L_0885DF10:
    ctx.set_gpr(31, 0x0885DF18u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1028));
    goto L_0885DF88;
L_0885DF18:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1012), 0u);
        goto L_0885DF4C;
    }
    goto L_0885DF20;
L_0885DF20:
    ctx.set_gpr(31, 0x0885DF28u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 373u, 0x0884D408u>(ctx, &aot_mem) && ctx.pc == 0x0885DF28u) goto L_0885DF28;
    return;
L_0885DF28:
    ctx.set_gpr(31, 0x0885DF30u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885DF78;
L_0885DF30:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885DF3Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1028));
    goto L_0885DF88;
L_0885DF3C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885DF48u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0885DF70;
L_0885DF48:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1012), 0u);
    goto L_0885DF4C;
L_0885DF4C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1008), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0885DF58;
L_0885DF58:
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
L_0885DF70:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem); return;
L_0885DF78:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
    goto L_0885DF80;
L_0885DF80:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885DF88:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885DF90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1008)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885DFF8;
      }
      goto L_0885DFAC;
    }
L_0885DFAC:
    ctx.set_gpr(31, 0x0885DFB4u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1028));
    goto L_0885DF88;
L_0885DFB4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, 16256u << 16u);
        goto L_0885DFEC;
    }
    goto L_0885DFBC;
L_0885DFBC:
    ctx.set_gpr(31, 0x0885DFC4u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 373u, 0x0884D408u>(ctx, &aot_mem) && ctx.pc == 0x0885DFC4u) goto L_0885DFC4;
    return;
L_0885DFC4:
    ctx.set_gpr(31, 0x0885DFCCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885DF78;
L_0885DFCC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885DFD8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1028));
    goto L_0885DF88;
L_0885DFD8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885DFE8u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_0885E00C;
L_0885DFE8:
    ctx.set_gpr(3, 16256u << 16u);
    goto L_0885DFEC;
L_0885DFEC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1012), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1016), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1008), static_cast<std::uint8_t>(0u));
    goto L_0885DFF8;
L_0885DFF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885E00C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 338u, 0x089497CCu>(ctx, &aot_mem); return;
L_0885E014:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1008)));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885E1AC;
      }
      goto L_0885E038;
    }
L_0885E038:
    ctx.set_gpr(31, 0x0885E040u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 320u, 0x0884D174u>(ctx, &aot_mem) && ctx.pc == 0x0885E040u) goto L_0885E040;
    return;
L_0885E040:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0885E1B0;
    }
    goto L_0885E048;
L_0885E048:
    ctx.set_gpr(31, 0x0885E050u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1032));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885E050u) goto L_0885E050;
    return;
L_0885E050:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885E1AC;
      }
      goto L_0885E058;
    }
L_0885E058:
    ctx.set_gpr(31, 0x0885E060u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1032));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0885E060u) goto L_0885E060;
    return;
L_0885E060:
    ctx.set_gpr(31, 0x0885E068u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 560u, 0x0884A250u>(ctx, &aot_mem) && ctx.pc == 0x0885E068u) goto L_0885E068;
    return;
L_0885E068:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885E074u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0885E074u) goto L_0885E074;
    return;
L_0885E074:
    ctx.set_gpr(31, 0x0885E07Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0885E07Cu) goto L_0885E07C;
    return;
L_0885E07C:
    ctx.set_gpr(31, 0x0885E084u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0885E084u) goto L_0885E084;
    return;
L_0885E084:
    ctx.set_gpr(31, 0x0885E08Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0885E08Cu) goto L_0885E08C;
    return;
L_0885E08C:
    ctx.set_gpr(31, 0x0885E094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x0885E094u) goto L_0885E094;
    return;
L_0885E094:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885E0A0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 476u, 0x08849D34u>(ctx, &aot_mem) && ctx.pc == 0x0885E0A0u) goto L_0885E0A0;
    return;
L_0885E0A0:
    ctx.set_gpr(31, 0x0885E0A8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x0885E0A8u) goto L_0885E0A8;
    return;
L_0885E0A8:
    ctx.set_gpr(31, 0x0885E0B0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x0885E0B0u) goto L_0885E0B0;
    return;
L_0885E0B0:
    ctx.set_gpr(31, 0x0885E0B8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x0885E0B8u) goto L_0885E0B8;
    return;
L_0885E0B8:
    ctx.set_gpr(31, 0x0885E0C0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 373u, 0x0884D408u>(ctx, &aot_mem) && ctx.pc == 0x0885E0C0u) goto L_0885E0C0;
    return;
L_0885E0C0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1024)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885E0D0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    goto L_0885C7A4;
L_0885E0D0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x0885E0DCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x0885E0DCu) goto L_0885E0DC;
    return;
L_0885E0DC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x0885E0ECu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 138u, 0x08A01E60u>(ctx, &aot_mem) && ctx.pc == 0x0885E0ECu) goto L_0885E0EC;
    return;
L_0885E0EC:
    ctx.set_gpr(31, 0x0885E0F4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 652u, 0x0884A6E0u>(ctx, &aot_mem) && ctx.pc == 0x0885E0F4u) goto L_0885E0F4;
    return;
L_0885E0F4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0885E10Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x0885E10Cu) goto L_0885E10C;
    return;
L_0885E10C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0885E11Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0885E11Cu) goto L_0885E11C;
    return;
L_0885E11C:
    ctx.set_gpr(31, 0x0885E124u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 652u, 0x0884A6E0u>(ctx, &aot_mem) && ctx.pc == 0x0885E124u) goto L_0885E124;
    return;
L_0885E124:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x0885E134u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0885E134u) goto L_0885E134;
    return;
L_0885E134:
    ctx.set_gpr(31, 0x0885E13Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 652u, 0x0884A6E0u>(ctx, &aot_mem) && ctx.pc == 0x0885E13Cu) goto L_0885E13C;
    return;
L_0885E13C:
    ctx.set_gpr(31, 0x0885E144u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x0885E144u) goto L_0885E144;
    return;
L_0885E144:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0885E154u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 779u, 0x0884AD78u>(ctx, &aot_mem) && ctx.pc == 0x0885E154u) goto L_0885E154;
    return;
L_0885E154:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0885E164u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 779u, 0x0884AD78u>(ctx, &aot_mem) && ctx.pc == 0x0885E164u) goto L_0885E164;
    return;
L_0885E164:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0885E174u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 779u, 0x0884AD78u>(ctx, &aot_mem) && ctx.pc == 0x0885E174u) goto L_0885E174;
    return;
L_0885E174:
    ctx.set_gpr(31, 0x0885E17Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 373u, 0x0884D408u>(ctx, &aot_mem) && ctx.pc == 0x0885E17Cu) goto L_0885E17C;
    return;
L_0885E17C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1020)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885E18Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    goto L_0885C7A4;
L_0885E18C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(31, 0x0885E198u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 737u, 0x089FFB18u>(ctx, &aot_mem) && ctx.pc == 0x0885E198u) goto L_0885E198;
    return;
L_0885E198:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(31, 0x0885E1ACu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 500u, 0x08B06058u>(ctx, &aot_mem) && ctx.pc == 0x0885E1ACu) goto L_0885E1AC;
    return;
L_0885E1AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0885E1B0;
L_0885E1B0:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885E1C4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1008)));
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1016)));
        goto L_0885E1DC;
    }
    goto L_0885E1D0;
L_0885E1D0:
    ctx.set_gpr(2, 16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_0885E240;
      }
      goto L_0885E1DC;
    }
L_0885E1DC:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1012)));
        goto L_0885E1FC;
    }
    goto L_0885E1F0;
L_0885E1F0:
    ctx.set_gpr(2, 16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_0885E240;
      }
      goto L_0885E1FC;
    }
L_0885E1FC:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] < ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[12];
        goto L_0885E218;
    }
    goto L_0885E20C;
L_0885E20C:
    ctx.set_gpr(2, 16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_0885E240;
      }
      goto L_0885E218;
    }
L_0885E218:
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1012), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1016)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[2] / ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885E240;
      }
      goto L_0885E23C;
    }
L_0885E23C:
    ctx.set_fpr_bits(0, ctx.fpr_bits(1));
    goto L_0885E240;
L_0885E240:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885E248:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0885E274u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 719u, 0x0884E6A0u>(ctx, &aot_mem) && ctx.pc == 0x0885E274u) goto L_0885E274;
    return;
L_0885E274:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(756)));
    if (static_cast<std::int32_t>(ctx.gpr[3]) < 0) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0885E2AC;
    }
    goto L_0885E28C;
L_0885E28C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(408)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885E2A8u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(208));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885E2A8u) goto L_0885E2A8;
    return;
L_0885E2A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0885E2AC;
L_0885E2AC:
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
L_0885E2C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x0885E2E4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0885E2E4u) goto L_0885E2E4;
    return;
L_0885E2E4:
    ctx.set_gpr(31, 0x0885E2ECu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0885E2ECu) goto L_0885E2EC;
    return;
L_0885E2EC:
    ctx.set_gpr(31, 0x0885E2F4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 730u, 0x0883F334u>(ctx, &aot_mem) && ctx.pc == 0x0885E2F4u) goto L_0885E2F4;
    return;
L_0885E2F4:
    ctx.set_gpr(31, 0x0885E2FCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 730u, 0x0883F334u>(ctx, &aot_mem) && ctx.pc == 0x0885E2FCu) goto L_0885E2FC;
    return;
L_0885E2FC:
    ctx.set_gpr(31, 0x0885E304u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x0885E304u) goto L_0885E304;
    return;
L_0885E304:
    ctx.set_gpr(31, 0x0885E30Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x0885E30Cu) goto L_0885E30C;
    return;
L_0885E30C:
    ctx.set_gpr(31, 0x0885E314u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x0885E314u) goto L_0885E314;
    return;
L_0885E314:
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(31, 0x0885E320u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 373u, 0x0884D408u>(ctx, &aot_mem) && ctx.pc == 0x0885E320u) goto L_0885E320;
    return;
L_0885E320:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(548)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885E330u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    goto L_0885C7A4;
L_0885E330:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x0885E33Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x0885E33Cu) goto L_0885E33C;
    return;
L_0885E33C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x0885E350u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x0885E350u) goto L_0885E350;
    return;
L_0885E350:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885E35Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 476u, 0x08849D34u>(ctx, &aot_mem) && ctx.pc == 0x0885E35Cu) goto L_0885E35C;
    return;
L_0885E35C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0885E368u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x0885E368u) goto L_0885E368;
    return;
L_0885E368:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 16409u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
      if (branch_taken) {
          goto L_0885E438;
      }
      goto L_0885E39C;
    }
L_0885E39C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x0885E3A8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_0885E474;
L_0885E3A8:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(2, 16512u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
        goto L_0885E3CC;
    }
    goto L_0885E3C4;
L_0885E3C4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0885E438;
      }
      goto L_0885E3CC;
    }
L_0885E3CC:
    ctx.set_gpr(31, 0x0885E3D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 373u, 0x0884D408u>(ctx, &aot_mem) && ctx.pc == 0x0885E3D4u) goto L_0885E3D4;
    return;
L_0885E3D4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(416)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885E3E4u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    goto L_0885C7A4;
L_0885E3E4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x0885E3F0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x0885E3F0u) goto L_0885E3F0;
    return;
L_0885E3F0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 16672u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 16256u << 16u);
    ctx.set_gpr(2, 17168u << 16u);
    ctx.fpr[0] = ctx.fpr[2] - ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
        goto L_0885E43C;
    }
    goto L_0885E434;
L_0885E434:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0885E438;
L_0885E438:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_0885E43C;
L_0885E43C:
    ctx.set_gpr(31, 0x0885E444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 373u, 0x0884D408u>(ctx, &aot_mem) && ctx.pc == 0x0885E444u) goto L_0885E444;
    return;
L_0885E444:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885E450u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0885DEE4;
L_0885E450:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885E45Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0885DDBC;
L_0885E45C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885E474:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[3] - ctx.fpr[2];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885E49C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 2181u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6104));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5476));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x0885E4D4u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 179u, 0x08804B94u>(ctx, &aot_mem) && ctx.pc == 0x0885E4D4u) goto L_0885E4D4;
    return;
L_0885E4D4:
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 2181u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(3280));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-14636));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23932));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0885E4F4u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 179u, 0x08804B94u>(ctx, &aot_mem) && ctx.pc == 0x0885E4F4u) goto L_0885E4F4;
    return;
L_0885E4F4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_0885E508;
L_0885E508:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    ctx.set_gpr(31, 0x0885E520u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x0885E520u) goto L_0885E520;
    return;
L_0885E520:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 27 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885E508;
      }
      goto L_0885E530;
    }
L_0885E530:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, 49024u << 16u);
    goto L_0885E53C;
L_0885E53C:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3388), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3492), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3392), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3493), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3396), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3494), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3400), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3495), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3404), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3496), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0885E53C;
      }
      goto L_0885E578;
    }
L_0885E578:
    ctx.set_gpr(2, 16672u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3488), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3520), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3524), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3528), static_cast<std::uint8_t>(0u));
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
L_0885E5AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0885E60C;
      }
      goto L_0885E5C8;
    }
L_0885E5C8:
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(3280));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23932));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0885E5E0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 174u, 0x08804B28u>(ctx, &aot_mem) && ctx.pc == 0x0885E5E0u) goto L_0885E5E0;
    return;
L_0885E5E0:
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5476));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x0885E5F8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 174u, 0x08804B28u>(ctx, &aot_mem) && ctx.pc == 0x0885E5F8u) goto L_0885E5F8;
    return;
L_0885E5F8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0885E610;
    }
    goto L_0885E604;
L_0885E604:
    ctx.set_gpr(31, 0x0885E60Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0885E60Cu) goto L_0885E60C;
    return;
L_0885E60C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0885E610;
L_0885E610:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885E624:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885E6E8;
      }
      goto L_0885E644;
    }
L_0885E644:
    ctx.set_gpr(31, 0x0885E64Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x0885E64Cu) goto L_0885E64C;
    return;
L_0885E64C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_0885E658;
L_0885E658:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(3280));
    ctx.set_gpr(31, 0x0885E66Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x0885E66Cu) goto L_0885E66C;
    return;
L_0885E66C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 27 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885E658;
      }
      goto L_0885E67C;
    }
L_0885E67C:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, 49024u << 16u);
    goto L_0885E688;
L_0885E688:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3388), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3492), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3392), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3493), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3396), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3494), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3400), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3495), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3404), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3496), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0885E688;
      }
      goto L_0885E6C4;
    }
L_0885E6C4:
    ctx.set_gpr(3, 16672u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3488), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3520), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3524), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3528), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0885E6E8;
L_0885E6E8:
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
L_0885E700:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0885E71C;
L_0885E71C:
    ctx.set_gpr(31, 0x0885E724u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0885ED60;
L_0885E724:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 27 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_0885E71C;
    }
    goto L_0885E734;
L_0885E734:
    ctx.set_gpr(3, 16672u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3488), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885E758:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885E848;
      }
      goto L_0885E784;
    }
L_0885E784:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3520)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(18, 0u + 0u);
        goto L_0885E7D4;
    }
    goto L_0885E794;
L_0885E794:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885E7A4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885E7A4u) goto L_0885E7A4;
    return;
L_0885E7A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885E7D0;
      }
      goto L_0885E7AC;
    }
L_0885E7AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3520)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885E7D0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 99u, 0x08850450u>(ctx, &aot_mem) && ctx.pc == 0x0885E7D0u) goto L_0885E7D0;
    return;
L_0885E7D0:
    ctx.set_gpr(18, 0u + 0u);
    goto L_0885E7D4;
L_0885E7D4:
    ctx.set_gpr(17, ctx.gpr[19] + 0u);
    goto L_0885E7D8;
L_0885E7D8:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[18]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(3492));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3492)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0885E83C;
    }
    goto L_0885E7EC;
L_0885E7EC:
    ctx.set_gpr(31, 0x0885E7F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885E7F4u) goto L_0885E7F4;
    return;
L_0885E7F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0885E804u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_0885E864;
L_0885E804:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885E838;
      }
      goto L_0885E810;
    }
L_0885E810:
    ctx.set_gpr(31, 0x0885E818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885E818u) goto L_0885E818;
    return;
L_0885E818:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0885E82Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x0885E82Cu) goto L_0885E82C;
    return;
L_0885E82C:
    ctx.set_gpr(3, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3388), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0885E838;
L_0885E838:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0885E83C;
L_0885E83C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885E7D8;
      }
      goto L_0885E848;
    }
L_0885E848:
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
L_0885E864:
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
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-13100)));
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 464u, 0x08846F10u>(ctx, &aot_mem); return;
L_0885E894:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885E8C4;
      }
      goto L_0885E8BC;
    }
L_0885E8BC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0885EB14;
      }
      goto L_0885E8C4;
    }
L_0885E8C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0885EA30;
      }
      goto L_0885E8D4;
    }
L_0885E8D4:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[9]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3524)));
        goto L_0885E9A0;
    }
    goto L_0885E8E0;
L_0885E8E0:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_0885E8F0;
    }
    goto L_0885E8E8;
L_0885E8E8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0885EB14;
      }
      goto L_0885E8F0;
    }
L_0885E8F0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3524), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0885E914;
      }
      goto L_0885E8F8;
    }
L_0885E8F8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 27 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
        goto L_0885EB14;
    }
    goto L_0885E904;
L_0885E904:
    ctx.set_gpr(31, 0x0885E90Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0885ED60;
L_0885E90C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3524), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0885E93C;
      }
      goto L_0885E914;
    }
L_0885E914:
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[3]);
    goto L_0885E91C;
L_0885E91C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
        goto L_0885E930;
    }
    goto L_0885E928;
L_0885E928:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3524), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0885E93C;
      }
      goto L_0885E930;
    }
L_0885E930:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 27 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[3]);
        goto L_0885E91C;
    }
    goto L_0885E93C;
L_0885E93C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3524)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 506 ? 1u : 0u);
        goto L_0885E954;
    }
    goto L_0885E94C;
L_0885E94C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0885EB14;
      }
      goto L_0885E954;
    }
L_0885E954:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
        goto L_0885E97C;
    }
    goto L_0885E95C;
L_0885E95C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 897 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885E978;
      }
      goto L_0885E968;
    }
L_0885E968:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0885EB10;
      }
      goto L_0885E978;
    }
L_0885E978:
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    goto L_0885E97C;
L_0885E97C:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885E990u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 790u, 0x0884EB34u>(ctx, &aot_mem) && ctx.pc == 0x0885E990u) goto L_0885E990;
    return;
L_0885E990:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0885EB10;
      }
      goto L_0885E9A0;
    }
L_0885E9A0:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0885E9C8u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 813u, 0x0884EC54u>(ctx, &aot_mem) && ctx.pc == 0x0885E9C8u) goto L_0885E9C8;
    return;
L_0885E9C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3524)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885E9E0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 569u, 0x0884A2D4u>(ctx, &aot_mem) && ctx.pc == 0x0885E9E0u) goto L_0885E9E0;
    return;
L_0885E9E0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0885E9ECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x0885E9ECu) goto L_0885E9EC;
    return;
L_0885E9EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3524)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885EA00u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885EA00u) goto L_0885EA00;
    return;
L_0885EA00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885EB10;
      }
      goto L_0885EA08;
    }
L_0885EA08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3524)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, 0x0885EA20u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0885EA20u) goto L_0885EA20;
    return;
L_0885EA20:
    ctx.set_gpr(31, 0x0885EA28u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x0885EA28u) goto L_0885EA28;
    return;
L_0885EA28:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3524)));
      if (branch_taken) {
          goto L_0885EB14;
      }
      goto L_0885EA30;
    }
L_0885EA30:
    ctx.set_gpr(31, 0x0885EA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885EA38u) goto L_0885EA38;
    return;
L_0885EA38:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3524)));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885EA4Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x0885EA4Cu) goto L_0885EA4C;
    return;
L_0885EA4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885EB10;
      }
      goto L_0885EA54;
    }
L_0885EA54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3524)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, 0x0885EA6Cu);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3524)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885EA6Cu) goto L_0885EA6C;
    return;
L_0885EA6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x0885EAA0u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x0885EAA0u) goto L_0885EAA0;
    return;
L_0885EAA0:
    ctx.set_gpr(31, 0x0885EAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885EAA8u) goto L_0885EAA8;
    return;
L_0885EAA8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3524)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0885EABCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_0885EB2C;
L_0885EABC:
    ctx.set_gpr(31, 0x0885EAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885EAC4u) goto L_0885EAC4;
    return;
L_0885EAC4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3524)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0885EAD8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x0885EAD8u) goto L_0885EAD8;
    return;
L_0885EAD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3524)));
    ctx.set_gpr(3, 49024u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3388), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3524)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3492), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x0885EB00u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0885EB00u) goto L_0885EB00;
    return;
L_0885EB00:
    ctx.set_gpr(31, 0x0885EB08u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x0885EB08u) goto L_0885EB08;
    return;
L_0885EB08:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3524)));
      if (branch_taken) {
          goto L_0885EB14;
      }
      goto L_0885EB10;
    }
L_0885EB10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0885EB14;
L_0885EB14:
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
L_0885EB2C:
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
        goto L_0885EB78;
    }
    goto L_0885EB6C;
L_0885EB6C:
    ctx.set_gpr(31, 0x0885EB74u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 444u, 0x08846D14u>(ctx, &aot_mem) && ctx.pc == 0x0885EB74u) goto L_0885EB74;
    return;
L_0885EB74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0885EB78;
L_0885EB78:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885EB80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885EBC0;
      }
      goto L_0885EBB8;
    }
L_0885EBB8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0885ED3C;
      }
      goto L_0885EBC0;
    }
L_0885EBC0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 506 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
        goto L_0885EBE4;
    }
    goto L_0885EBCC;
L_0885EBCC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < 897 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885EBE0;
      }
      goto L_0885EBD8;
    }
L_0885EBD8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0885ED3C;
      }
      goto L_0885EBE0;
    }
L_0885EBE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    goto L_0885EBE4;
L_0885EBE4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(3524), ctx.gpr[19]);
        goto L_0885EC64;
    }
    goto L_0885EBF0;
L_0885EBF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[19] << 4u);
        goto L_0885EC30;
    }
    goto L_0885EBFC;
L_0885EBFC:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, ctx.gpr[19] << 4u);
        goto L_0885EC0C;
    }
    goto L_0885EC04;
L_0885EC04:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0885ED3C;
      }
      goto L_0885EC0C;
    }
L_0885EC0C:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885EC20u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 790u, 0x0884EB34u>(ctx, &aot_mem) && ctx.pc == 0x0885EC20u) goto L_0885EC20;
    return;
L_0885EC20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] << 4u);
    goto L_0885EC30;
L_0885EC30:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0885EC4Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 791u, 0x0884EB3Cu>(ctx, &aot_mem) && ctx.pc == 0x0885EC4Cu) goto L_0885EC4C;
    return;
L_0885EC4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885ED38;
      }
      goto L_0885EC54;
    }
L_0885EC54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0885ED38;
      }
      goto L_0885EC64;
    }
L_0885EC64:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_0885ED00;
      }
      goto L_0885EC6C;
    }
L_0885EC6C:
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    goto L_0885EC70;
L_0885EC70:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(3524)));
    ctx.set_gpr(31, 0x0885EC7Cu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_0885ED60;
L_0885EC7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(3524)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0885ECB0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 1069u, 0x0884F85Cu>(ctx, &aot_mem) && ctx.pc == 0x0885ECB0u) goto L_0885ECB0;
    return;
L_0885ECB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(3524)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885ECC8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 569u, 0x0884A2D4u>(ctx, &aot_mem) && ctx.pc == 0x0885ECC8u) goto L_0885ECC8;
    return;
L_0885ECC8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0885ECD4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x0885ECD4u) goto L_0885ECD4;
    return;
L_0885ECD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(3524)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(3524)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(3524), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0885EC70;
      }
      goto L_0885ED00;
    }
L_0885ED00:
    ctx.set_gpr(2, ctx.gpr[19] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0885ED1Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 808u, 0x0884EC14u>(ctx, &aot_mem) && ctx.pc == 0x0885ED1Cu) goto L_0885ED1C;
    return;
L_0885ED1C:
    ctx.set_gpr(31, 0x0885ED24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0885ED24u) goto L_0885ED24;
    return;
L_0885ED24:
    ctx.set_gpr(31, 0x0885ED2Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x0885ED2Cu) goto L_0885ED2C;
    return;
L_0885ED2C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0885ED3C;
      }
      goto L_0885ED38;
    }
L_0885ED38:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0885ED3C;
L_0885ED3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885ED60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885EEA4;
      }
      goto L_0885ED8C;
    }
L_0885ED8C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 27 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0885EEA8;
    }
    goto L_0885ED98;
L_0885ED98:
    if (static_cast<std::int32_t>(ctx.gpr[18]) >= 0) {
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[19]);
        goto L_0885EDAC;
    }
    goto L_0885EDA0;
L_0885EDA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885EEA4;
      }
      goto L_0885EDA8;
    }
L_0885EDA8:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[19]);
    goto L_0885EDAC;
L_0885EDAC:
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885EEA4;
      }
      goto L_0885EDBC;
    }
L_0885EDBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3520)));
    if (ctx.gpr[18] != ctx.gpr[2]) {
    ctx.set_gpr(20, ctx.gpr[18] << 2u);
        goto L_0885EE18;
    }
    goto L_0885EDC8;
L_0885EDC8:
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    ctx.set_gpr(31, 0x0885EDDCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885EDDCu) goto L_0885EDDC;
    return;
L_0885EDDC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_0885EE0C;
    }
    goto L_0885EDE4;
L_0885EDE4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3528)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885EE08;
      }
      goto L_0885EDF0;
    }
L_0885EDF0:
    ctx.set_gpr(31, 0x0885EDF8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885EDF8u) goto L_0885EDF8;
    return;
L_0885EDF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885EE08u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x0885EE08u) goto L_0885EE08;
    return;
L_0885EE08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0885EE0C;
L_0885EE0C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3520), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3528), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(20, ctx.gpr[18] << 2u);
    goto L_0885EE18;
L_0885EE18:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[20]);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    ctx.set_gpr(31, 0x0885EE28u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885EE28u) goto L_0885EE28;
    return;
L_0885EE28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885EE5C;
      }
      goto L_0885EE30;
    }
L_0885EE30:
    ctx.set_gpr(2, ctx.gpr[18] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885EE48u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 45u, 0x08850228u>(ctx, &aot_mem) && ctx.pc == 0x0885EE48u) goto L_0885EE48;
    return;
L_0885EE48:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885EE54u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x0885EE54u) goto L_0885EE54;
    return;
L_0885EE54:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0885EEA4;
      }
      goto L_0885EE5C;
    }
L_0885EE5C:
    ctx.set_gpr(31, 0x0885EE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885EE64u) goto L_0885EE64;
    return;
L_0885EE64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0885EE74u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x0885EE74u) goto L_0885EE74;
    return;
L_0885EE74:
    ctx.set_gpr(31, 0x0885EE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885EE7Cu) goto L_0885EE7C;
    return;
L_0885EE7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0885EE8Cu);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 562u, 0x0884764Cu>(ctx, &aot_mem) && ctx.pc == 0x0885EE8Cu) goto L_0885EE8C;
    return;
L_0885EE8C:
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[19]);
    ctx.set_gpr(5, 49024u << 16u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3388), ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3492), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0885EEA4;
L_0885EEA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0885EEA8;
L_0885EEA8:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885EEC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885EFE4;
      }
      goto L_0885EEE4;
    }
L_0885EEE4:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_0885EEEC;
L_0885EEEC:
    ctx.set_gpr(31, 0x0885EEF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885EEF4u) goto L_0885EEF4;
    return;
L_0885EEF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0885EF04u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_0885EFFC;
L_0885EF04:
    ctx.set_gpr(31, 0x0885EF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885EF0Cu) goto L_0885EF0C;
    return;
L_0885EF0C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0885EF2Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x0885EF2Cu) goto L_0885EF2C;
    return;
L_0885EF2C:
    ctx.set_gpr(31, 0x0885EF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885EF34u) goto L_0885EF34;
    return;
L_0885EF34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0885EF48u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x0885EF48u) goto L_0885EF48;
    return;
L_0885EF48:
    ctx.set_gpr(3, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3388), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3492), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885EEEC;
      }
      goto L_0885EF68;
    }
L_0885EF68:
    ctx.set_gpr(3, 16672u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3488), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3520)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[16]);
        goto L_0885EF84;
    }
    goto L_0885EF7C;
L_0885EF7C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3528), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0885EFE4;
      }
      goto L_0885EF84;
    }
L_0885EF84:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3528), static_cast<std::uint8_t>(0u));
        goto L_0885EFDC;
    }
    goto L_0885EF90;
L_0885EF90:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885EFA0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885EFA0u) goto L_0885EFA0;
    return;
L_0885EFA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885EFD8;
      }
      goto L_0885EFA8;
    }
L_0885EFA8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3528)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885EFD8;
      }
      goto L_0885EFB4;
    }
L_0885EFB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3520)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885EFC8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885EFC8u) goto L_0885EFC8;
    return;
L_0885EFC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885EFD8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x0885EFD8u) goto L_0885EFD8;
    return;
L_0885EFD8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3528), static_cast<std::uint8_t>(0u));
    goto L_0885EFDC;
L_0885EFDC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3520), ctx.gpr[3]);
    goto L_0885EFE4;
L_0885EFE4:
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
L_0885EFFC:
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
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-13100)));
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 459u, 0x08846E7Cu>(ctx, &aot_mem); return;
L_0885F02C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885F068;
      }
      goto L_0885F060;
    }
L_0885F060:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0885F268;
      }
      goto L_0885F068;
    }
L_0885F068:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 27 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_0885F268;
    }
    goto L_0885F074;
L_0885F074:
    if (static_cast<std::int32_t>(ctx.gpr[18]) >= 0) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3520)));
        goto L_0885F088;
    }
    goto L_0885F07C;
L_0885F07C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F268;
      }
      goto L_0885F088;
    }
L_0885F088:
    if (ctx.gpr[3] != ctx.gpr[18]) {
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[19]);
        goto L_0885F0B0;
    }
    goto L_0885F090;
L_0885F090:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3528)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_0885F268;
    }
    goto L_0885F09C;
L_0885F09C:
    ctx.set_gpr(31, 0x0885F0A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0885F2DC;
L_0885F0A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F268;
      }
      goto L_0885F0B0;
    }
L_0885F0B0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_0885F0C4;
    }
    goto L_0885F0BC;
L_0885F0BC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0885F268;
      }
      goto L_0885F0C4;
    }
L_0885F0C4:
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
        goto L_0885F118;
    }
    goto L_0885F0CC;
L_0885F0CC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3528)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F114;
      }
      goto L_0885F0D8;
    }
L_0885F0D8:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885F0E8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885F0E8u) goto L_0885F0E8;
    return;
L_0885F0E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F114;
      }
      goto L_0885F0F0;
    }
L_0885F0F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3520)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885F104u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885F104u) goto L_0885F104;
    return;
L_0885F104:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885F114u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x0885F114u) goto L_0885F114;
    return;
L_0885F114:
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    goto L_0885F118;
L_0885F118:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    ctx.set_gpr(31, 0x0885F128u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885F128u) goto L_0885F128;
    return;
L_0885F128:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F1E4;
      }
      goto L_0885F130;
    }
L_0885F130:
    ctx.set_gpr(31, 0x0885F138u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885F138u) goto L_0885F138;
    return;
L_0885F138:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885F148u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 462u, 0x0885186Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F148u) goto L_0885F148;
    return;
L_0885F148:
    ctx.set_gpr(31, 0x0885F150u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F150u) goto L_0885F150;
    return;
L_0885F150:
    ctx.set_gpr(31, 0x0885F158u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 560u, 0x0884A250u>(ctx, &aot_mem) && ctx.pc == 0x0885F158u) goto L_0885F158;
    return;
L_0885F158:
    ctx.set_gpr(31, 0x0885F160u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x0885F160u) goto L_0885F160;
    return;
L_0885F160:
    ctx.set_gpr(2, ctx.gpr[18] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885F184u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 235u, 0x08850B38u>(ctx, &aot_mem) && ctx.pc == 0x0885F184u) goto L_0885F184;
    return;
L_0885F184:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885F194u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 259u, 0x08850C78u>(ctx, &aot_mem) && ctx.pc == 0x0885F194u) goto L_0885F194;
    return;
L_0885F194:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    goto L_0885F19C;
L_0885F19C:
    ctx.set_gpr(31, 0x0885F1A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885F1A4u) goto L_0885F1A4;
    return;
L_0885F1A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885F1B8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F1B8u) goto L_0885F1B8;
    return;
L_0885F1B8:
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3388), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3492), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885F19C;
      }
      goto L_0885F1D8;
    }
L_0885F1D8:
    ctx.set_gpr(2, 16672u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3488), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0885F25C;
      }
      goto L_0885F1E4;
    }
L_0885F1E4:
    ctx.set_gpr(31, 0x0885F1ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885F1ECu) goto L_0885F1EC;
    return;
L_0885F1EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0885F200u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F200u) goto L_0885F200;
    return;
L_0885F200:
    ctx.set_gpr(31, 0x0885F208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885F208u) goto L_0885F208;
    return;
L_0885F208:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0885F228u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_0885F288;
L_0885F228:
    ctx.set_gpr(31, 0x0885F230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885F230u) goto L_0885F230;
    return;
L_0885F230:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0885F250u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F250u) goto L_0885F250;
    return;
L_0885F250:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0885F25Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_0885FB08;
L_0885F25C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3520), ctx.gpr[18]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3528), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0885F268;
L_0885F268:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F288:
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
        goto L_0885F2D4;
    }
    goto L_0885F2C8;
L_0885F2C8:
    ctx.set_gpr(31, 0x0885F2D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x0885F2D0u) goto L_0885F2D0;
    return;
L_0885F2D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0885F2D4;
L_0885F2D4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F2DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885F3D8;
      }
      goto L_0885F2F8;
    }
L_0885F2F8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3528)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0885F488;
    }
    goto L_0885F304;
L_0885F304:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3520)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0885F484;
      }
      goto L_0885F314;
    }
L_0885F314:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3528), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3520)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885F330u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885F330u) goto L_0885F330;
    return;
L_0885F330:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F364;
      }
      goto L_0885F338;
    }
L_0885F338:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3520)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885F34Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885F34Cu) goto L_0885F34C;
    return;
L_0885F34C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885F35Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 462u, 0x0885186Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F35Cu) goto L_0885F35C;
    return;
L_0885F35C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F484;
      }
      goto L_0885F364;
    }
L_0885F364:
    ctx.set_gpr(31, 0x0885F36Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885F36Cu) goto L_0885F36C;
    return;
L_0885F36C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3520)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0885F380u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F380u) goto L_0885F380;
    return;
L_0885F380:
    ctx.set_gpr(31, 0x0885F388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885F388u) goto L_0885F388;
    return;
L_0885F388:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3520)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885F3A8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    goto L_0885F288;
L_0885F3A8:
    ctx.set_gpr(31, 0x0885F3B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885F3B0u) goto L_0885F3B0;
    return;
L_0885F3B0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3520)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0885F3D0u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F3D0u) goto L_0885F3D0;
    return;
L_0885F3D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F484;
      }
      goto L_0885F3D8;
    }
L_0885F3D8:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3528)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0885F484;
      }
      goto L_0885F3E8;
    }
L_0885F3E8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3528), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_0885F3F4;
L_0885F3F4:
    ctx.set_gpr(31, 0x0885F3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885F3FCu) goto L_0885F3FC;
    return;
L_0885F3FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0885F410u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F410u) goto L_0885F410;
    return;
L_0885F410:
    ctx.set_gpr(3, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3388), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3492), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885F3F4;
      }
      goto L_0885F430;
    }
L_0885F430:
    ctx.set_gpr(3, 16672u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3488), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3520)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0885F484;
      }
      goto L_0885F448;
    }
L_0885F448:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885F458u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885F458u) goto L_0885F458;
    return;
L_0885F458:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F484;
      }
      goto L_0885F460;
    }
L_0885F460:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3520)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885F474u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885F474u) goto L_0885F474;
    return;
L_0885F474:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885F484u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x0885F484u) goto L_0885F484;
    return;
L_0885F484:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0885F488;
L_0885F488:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F49C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885F4E8;
      }
      goto L_0885F4C0;
    }
L_0885F4C0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 27 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_0885F4D8;
    }
    goto L_0885F4CC;
L_0885F4CC:
    if (static_cast<std::int32_t>(ctx.gpr[6]) >= 0) {
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
        goto L_0885F504;
    }
    goto L_0885F4D4;
L_0885F4D4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0885F4D8;
L_0885F4D8:
    ctx.set_gpr(31, 0x0885F4E0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0885F57C;
L_0885F4E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0885F568;
      }
      goto L_0885F4E8;
    }
L_0885F4E8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3520)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0885F504;
      }
      goto L_0885F4F4;
    }
L_0885F4F4:
    ctx.set_gpr(31, 0x0885F4FCu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0885F57C;
L_0885F4FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F564;
      }
      goto L_0885F504;
    }
L_0885F504:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
        goto L_0885F524;
    }
    goto L_0885F510;
L_0885F510:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0885F51Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0885F57C;
L_0885F51C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F564;
      }
      goto L_0885F524;
    }
L_0885F524:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885F530u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885F530u) goto L_0885F530;
    return;
L_0885F530:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[16] << 4u);
        goto L_0885F54C;
    }
    goto L_0885F538;
L_0885F538:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0885F544u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0885F57C;
L_0885F544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F564;
      }
      goto L_0885F54C;
    }
L_0885F54C:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0885F564u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 209u, 0x088509B4u>(ctx, &aot_mem) && ctx.pc == 0x0885F564u) goto L_0885F564;
    return;
L_0885F564:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0885F568;
L_0885F568:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F57C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0885F598u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 270u, 0x0883D560u>(ctx, &aot_mem) && ctx.pc == 0x0885F598u) goto L_0885F598;
    return;
L_0885F598:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F5AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_0885F5D8;
      }
      goto L_0885F5D4;
    }
L_0885F5D4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3520)));
    goto L_0885F5D8;
L_0885F5D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
        goto L_0885F5EC;
    }
    goto L_0885F5E4;
L_0885F5E4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0885F620;
      }
      goto L_0885F5EC;
    }
L_0885F5EC:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885F5F8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885F5F8u) goto L_0885F5F8;
    return;
L_0885F5F8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[16] << 4u);
        goto L_0885F608;
    }
    goto L_0885F600;
L_0885F600:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0885F620;
      }
      goto L_0885F608;
    }
L_0885F608:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885F620u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 220u, 0x08850A7Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F620u) goto L_0885F620;
    return;
L_0885F620:
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
L_0885F638:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3520)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0885F66C;
      }
      goto L_0885F65C;
    }
L_0885F65C:
    ctx.set_gpr(31, 0x0885F664u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 269u, 0x0884CE80u>(ctx, &aot_mem) && ctx.pc == 0x0885F664u) goto L_0885F664;
    return;
L_0885F664:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0885F6B8;
      }
      goto L_0885F66C;
    }
L_0885F66C:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885F67Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885F67Cu) goto L_0885F67C;
    return;
L_0885F67C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3520)));
        goto L_0885F698;
    }
    goto L_0885F684;
L_0885F684:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885F690u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 269u, 0x0884CE80u>(ctx, &aot_mem) && ctx.pc == 0x0885F690u) goto L_0885F690;
    return;
L_0885F690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F6B4;
      }
      goto L_0885F698;
    }
L_0885F698:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885F6B4u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 234u, 0x08850B30u>(ctx, &aot_mem) && ctx.pc == 0x0885F6B4u) goto L_0885F6B4;
    return;
L_0885F6B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0885F6B8;
L_0885F6B8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F6C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885F75C;
      }
      goto L_0885F6EC;
    }
L_0885F6EC:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_0885F6F4;
L_0885F6F4:
    ctx.set_gpr(19, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_0885F748;
    }
    goto L_0885F704;
L_0885F704:
    ctx.set_gpr(31, 0x0885F70Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885F70Cu) goto L_0885F70C;
    return;
L_0885F70C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885F744;
      }
      goto L_0885F714;
    }
L_0885F714:
    ctx.set_gpr(31, 0x0885F71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885F71Cu) goto L_0885F71C;
    return;
L_0885F71C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885F730u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F730u) goto L_0885F730;
    return;
L_0885F730:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3492), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3520)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0885F744;
      }
      goto L_0885F740;
    }
L_0885F740:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3528), static_cast<std::uint8_t>(0u));
    goto L_0885F744;
L_0885F744:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0885F748;
L_0885F748:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 27 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885F6F4;
      }
      goto L_0885F754;
    }
L_0885F754:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0885F7BC;
      }
      goto L_0885F75C;
    }
L_0885F75C:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F7B8;
      }
      goto L_0885F76C;
    }
L_0885F76C:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885F77Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885F77Cu) goto L_0885F77C;
    return;
L_0885F77C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885F7B8;
      }
      goto L_0885F784;
    }
L_0885F784:
    ctx.set_gpr(31, 0x0885F78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885F78Cu) goto L_0885F78C;
    return;
L_0885F78C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885F7A0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F7A0u) goto L_0885F7A0;
    return;
L_0885F7A0:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3492), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3520)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0885F7B8;
      }
      goto L_0885F7B4;
    }
L_0885F7B4:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3528), static_cast<std::uint8_t>(0u));
    goto L_0885F7B8;
L_0885F7B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0885F7BC;
L_0885F7BC:
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
L_0885F7D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
      if (branch_taken) {
          goto L_0885F938;
      }
      goto L_0885F808;
    }
L_0885F808:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885F818u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885F818u) goto L_0885F818;
    return;
L_0885F818:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0885F93C;
    }
    goto L_0885F820;
L_0885F820:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0885F8F0;
      }
      goto L_0885F82C;
    }
L_0885F82C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0885F8BC;
      }
      goto L_0885F838;
    }
L_0885F838:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0885F888;
      }
      goto L_0885F844;
    }
L_0885F844:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F854;
      }
      goto L_0885F84C;
    }
L_0885F84C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F924;
      }
      goto L_0885F854;
    }
L_0885F854:
    ctx.set_gpr(31, 0x0885F85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885F85Cu) goto L_0885F85C;
    return;
L_0885F85C:
    ctx.set_gpr(3, 17264u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 49928u << 16u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0885F880u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_0885F954;
L_0885F880:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_0885F930;
      }
      goto L_0885F888;
    }
L_0885F888:
    ctx.set_gpr(31, 0x0885F890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885F890u) goto L_0885F890;
    return;
L_0885F890:
    ctx.set_gpr(3, 17264u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17356u << 16u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0885F8B4u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_0885F954;
L_0885F8B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F92C;
      }
      goto L_0885F8BC;
    }
L_0885F8BC:
    ctx.set_gpr(31, 0x0885F8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885F8C4u) goto L_0885F8C4;
    return;
L_0885F8C4:
    ctx.set_gpr(3, 50032u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17160u << 16u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0885F8E8u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_0885F954;
L_0885F8E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F92C;
      }
      goto L_0885F8F0;
    }
L_0885F8F0:
    ctx.set_gpr(31, 0x0885F8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885F8F8u) goto L_0885F8F8;
    return;
L_0885F8F8:
    ctx.set_gpr(3, 17460u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17160u << 16u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0885F91Cu);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_0885F954;
L_0885F91C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F92C;
      }
      goto L_0885F924;
    }
L_0885F924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F938;
      }
      goto L_0885F92C;
    }
L_0885F92C:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[18]);
    goto L_0885F930;
L_0885F930:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3492), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0885F938;
L_0885F938:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0885F93C;
L_0885F93C:
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
L_0885F954:
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
        goto L_0885F9A0;
    }
    goto L_0885F994;
L_0885F994:
    ctx.set_gpr(31, 0x0885F99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 397u, 0x088462FCu>(ctx, &aot_mem) && ctx.pc == 0x0885F99Cu) goto L_0885F99C;
    return;
L_0885F99C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0885F9A0;
L_0885F9A0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F9A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
      if (branch_taken) {
          goto L_0885FA4C;
      }
      goto L_0885F9D4;
    }
L_0885F9D4:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885F9E4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885F9E4u) goto L_0885F9E4;
    return;
L_0885F9E4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0885FA50;
    }
    goto L_0885F9EC;
L_0885F9EC:
    ctx.set_gpr(31, 0x0885F9F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885F9F4u) goto L_0885F9F4;
    return;
L_0885F9F4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0885FA14u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x0885FA14u) goto L_0885FA14;
    return;
L_0885FA14:
    ctx.set_gpr(31, 0x0885FA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885FA1Cu) goto L_0885FA1C;
    return;
L_0885FA1C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0885FA40u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x0885FA40u) goto L_0885FA40;
    return;
L_0885FA40:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3492), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0885FA4C;
L_0885FA4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0885FA50;
L_0885FA50:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FA64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
      if (branch_taken) {
          goto L_0885FAF4;
      }
      goto L_0885FA88;
    }
L_0885FA88:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885FA98u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885FA98u) goto L_0885FA98;
    return;
L_0885FA98:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0885FAF8;
    }
    goto L_0885FAA0;
L_0885FAA0:
    ctx.set_gpr(31, 0x0885FAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885FAA8u) goto L_0885FAA8;
    return;
L_0885FAA8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0885FAC8u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x0885FAC8u) goto L_0885FAC8;
    return;
L_0885FAC8:
    ctx.set_gpr(31, 0x0885FAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885FAD0u) goto L_0885FAD0;
    return;
L_0885FAD0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0885FAF4u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x0885FAF4u) goto L_0885FAF4;
    return;
L_0885FAF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0885FAF8;
L_0885FAF8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FB08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3280));
    ctx.set_gpr(31, 0x0885FB40u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885FB40u) goto L_0885FB40;
    return;
L_0885FB40:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_0885FC6C;
    }
    goto L_0885FB48;
L_0885FB48:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(3488)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[20]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(3388));
    ctx.set_gpr(31, 0x0885FB5Cu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3388), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885FB5Cu) goto L_0885FB5C;
    return;
L_0885FB5C:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885FB70u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    goto L_0885FC8C;
L_0885FB70:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(3488)));
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(3, 16720u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[2])) || ctx.fpr[0] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(3488), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0885FC68;
      }
      goto L_0885FB98;
    }
L_0885FB98:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_0885FBAC;
L_0885FBAC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3388)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_0885FBE4;
    }
    goto L_0885FBC0;
L_0885FBC0:
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[2]));
    // nop
    if (!ctx.fpu_condition()) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
        goto L_0885FBD8;
    }
    goto L_0885FBD0;
L_0885FBD0:
    ctx.set_fpr_bits(2, ctx.fpr_bits(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_0885FBD8;
L_0885FBD8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0885FBE4;
L_0885FBE4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885FBAC;
      }
      goto L_0885FBF0;
    }
L_0885FBF0:
    ctx.set_gpr(3, 16672u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[20] = ctx.fpr[2] - ctx.fpr[0];
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_0885FC50;
      }
      goto L_0885FC04;
    }
L_0885FC04:
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_0885FC08;
L_0885FC08:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3388)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[20];
    ctx.set_gpr(31, 0x0885FC24u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3388), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885FC24u) goto L_0885FC24;
    return;
L_0885FC24:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3388)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885FC40u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    goto L_0885FC8C;
L_0885FC40:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885FC08;
      }
      goto L_0885FC50;
    }
L_0885FC50:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16672u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(3488), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0885FC68;
L_0885FC68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_0885FC6C;
L_0885FC6C:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FC8C:
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
        goto L_0885FCD8;
    }
    goto L_0885FCCC;
L_0885FCCC:
    ctx.set_gpr(31, 0x0885FCD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 415u, 0x08846628u>(ctx, &aot_mem) && ctx.pc == 0x0885FCD4u) goto L_0885FCD4;
    return;
L_0885FCD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0885FCD8;
L_0885FCD8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FCE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 2181u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6104));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5476));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(91));
    ctx.set_gpr(31, 0x0885FD18u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 179u, 0x08804B94u>(ctx, &aot_mem) && ctx.pc == 0x0885FD18u) goto L_0885FD18;
    return;
L_0885FD18:
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 2181u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(10936));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-14636));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23932));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0885FD38u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(91));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 179u, 0x08804B94u>(ctx, &aot_mem) && ctx.pc == 0x0885FD38u) goto L_0885FD38;
    return;
L_0885FD38:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_0885FD48;
L_0885FD48:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(10936));
    ctx.set_gpr(31, 0x0885FD58u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x0885FD58u) goto L_0885FD58;
    return;
L_0885FD58:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11300), 0u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(11664), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885FD48;
      }
      goto L_0885FD78;
    }
L_0885FD78:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
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
L_0885FD98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0885FDF8;
      }
      goto L_0885FDB4;
    }
L_0885FDB4:
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(10936));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23932));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0885FDCCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(91));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 174u, 0x08804B28u>(ctx, &aot_mem) && ctx.pc == 0x0885FDCCu) goto L_0885FDCC;
    return;
L_0885FDCC:
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5476));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x0885FDE4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(91));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 174u, 0x08804B28u>(ctx, &aot_mem) && ctx.pc == 0x0885FDE4u) goto L_0885FDE4;
    return;
L_0885FDE4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0885FDFC;
    }
    goto L_0885FDF0;
L_0885FDF0:
    ctx.set_gpr(31, 0x0885FDF8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0885FDF8u) goto L_0885FDF8;
    return;
L_0885FDF8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0885FDFC;
L_0885FDFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FE10:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FE18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885FE78;
      }
      goto L_0885FE38;
    }
L_0885FE38:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_0885FE44;
L_0885FE44:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(10936));
    ctx.set_gpr(31, 0x0885FE50u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x0885FE50u) goto L_0885FE50;
    return;
L_0885FE50:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(11300), 0u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(11664), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885FE44;
      }
      goto L_0885FE6C;
    }
L_0885FE6C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0885FE78;
L_0885FE78:
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
L_0885FE90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0885FEA8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 49u, 0x08860290u>(ctx, &aot_mem) && ctx.pc == 0x0885FEA8u) goto L_0885FEA8;
    return;
L_0885FEA8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FEC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[21] + 0u);
    ctx.set_gpr(16, ctx.gpr[21] + 0u);
    goto L_0885FEF8;
L_0885FEF8:
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(11664)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0885FF6C;
    }
    goto L_0885FF08;
L_0885FF08:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0885FF18u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 99u, 0x08850450u>(ctx, &aot_mem) && ctx.pc == 0x0885FF18u) goto L_0885FF18;
    return;
L_0885FF18:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885FF68;
      }
      goto L_0885FF24;
    }
L_0885FF24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11300)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(10936));
        goto L_0885FF50;
    }
    goto L_0885FF30;
L_0885FF30:
    ctx.set_gpr(31, 0x0885FF38u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885FF38u) goto L_0885FF38;
    return;
L_0885FF38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885FF48u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x0885FF48u) goto L_0885FF48;
    return;
L_0885FF48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885FF68;
      }
      goto L_0885FF50;
    }
L_0885FF50:
    ctx.set_gpr(31, 0x0885FF58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885FF58u) goto L_0885FF58;
    return;
L_0885FF58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11300)));
    ctx.set_gpr(31, 0x0885FF64u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x0885FF64u) goto L_0885FF64;
    return;
L_0885FF64:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11300), 0u);
    goto L_0885FF68;
L_0885FF68:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0885FF6C;
L_0885FF6C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 91 ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(120));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885FEF8;
      }
      goto L_0885FF7C;
    }
L_0885FF7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FFA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(10, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885FFD0;
      }
      goto L_0885FFC8;
    }
L_0885FFC8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 20u, 0x08860100u>(ctx, &aot_mem); return;
      }
      goto L_0885FFD0;
    }
L_0885FFD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        (void)rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 13u, 0x0886007Cu>(ctx, &aot_mem); return;
    }
    goto L_0885FFE0;
L_0885FFE0:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_0885FFF0;
    }
    goto L_0885FFE8;
L_0885FFE8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 20u, 0x08860100u>(ctx, &aot_mem); return;
      }
      goto L_0885FFF0;
    }
L_0885FFF0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860014u>(ctx, &aot_mem); return;
      }
      goto L_0885FFF8;
    }
L_0885FFF8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 91 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
        (void)rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 20u, 0x08860100u>(ctx, &aot_mem); return;
    }
    (void)rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 2u, 0x08860004u>(ctx, &aot_mem); return;
}

void recomp_unit_0022(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0022_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_22(Runtime &runtime) {
    runtime.register_generated_unit(22u, 0x0885C000u, 16384u, &recomp_unit_0022, &recomp_unit_0022_entry);
    runtime.register_function(0x0885C000u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C00Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C024u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C02Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C038u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C050u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C05Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C068u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C070u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C07Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C084u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C090u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C0A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C0ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C0B4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C0BCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C0CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C0E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C0F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C100u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C108u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C110u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C118u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C120u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C128u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C13Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C144u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C14Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C158u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C168u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C174u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C17Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C18Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C194u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C198u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C1A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C1A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C1B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C1DCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C1E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C1F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C20Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C214u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C21Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C224u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C22Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C240u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C24Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C260u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C268u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C274u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C288u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C294u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C2A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C2B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C2B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C2C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C2D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C2E0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C2ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C2F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C2FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C300u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C310u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C31Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C348u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C354u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C35Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C36Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C374u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C380u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C38Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3B4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3BCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3E0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C400u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C410u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C414u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C41Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C428u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C434u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C444u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C458u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C484u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C4A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C4D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C4E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C4F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C500u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C5ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C5B4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C5E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C5F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C600u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C608u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C61Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C64Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C664u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C66Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C678u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C684u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C690u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6B4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6E0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C704u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C710u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C71Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C724u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C72Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C73Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C748u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C75Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C76Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C770u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C778u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C784u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C7A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C7CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C7D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C7ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C7F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C804u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C820u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C828u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C830u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C844u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C84Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C854u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C864u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C870u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C878u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C8A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C8A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C8B4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C8CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C8DCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C8E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C8F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C904u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C91Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C924u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C93Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C964u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C970u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C97Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C984u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C98Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C994u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C99Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C9ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C9C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C9C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C9D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C9DCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C9E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C9F8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA00u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA0Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA24u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA38u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA44u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA5Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA74u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA7Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA88u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA9Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CAB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CAC0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CAD0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CADCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CAECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CAF4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB04u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB0Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB14u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB20u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB24u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB3Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB74u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB84u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB98u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CBC4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CBD0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CBD4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CBE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CBF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CBFCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC04u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC3Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC40u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC58u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC78u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC80u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC98u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CCA4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CCB8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CCCCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CCD0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CCE0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD1Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD34u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD58u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD5Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD7Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CDC0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CDE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE44u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE4Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE58u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE60u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE78u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE80u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE98u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CEA4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CEACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CEB4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CEBCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CEC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CED0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CED8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CEE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CEECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CEFCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF0Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF10u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF2Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF58u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF60u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF74u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF84u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFA0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFB4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFBCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFC0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFD4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFD8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFF8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D000u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D018u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D020u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D028u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D02Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D03Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D044u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D04Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D054u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D06Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D074u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D080u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D088u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D090u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D094u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D0A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D0B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D0B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D0ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D0F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D0FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D104u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D110u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D118u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D120u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D130u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D140u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D148u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D154u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D15Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D16Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D170u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D188u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D1B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D1B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D1C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D1D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D1E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D1ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D1F8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D1FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D208u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D228u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D234u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D240u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D244u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D250u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D26Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D278u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D27Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D294u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D2C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D2CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D2D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D2E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D2FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D308u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D30Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D324u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D338u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D34Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D360u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D374u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D38Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D390u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D39Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D3B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D3BCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D404u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D40Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D440u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D444u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D450u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D458u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D468u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D46Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D474u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D480u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D484u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D4A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D4D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D4D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D4E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D500u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D508u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D514u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D528u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D52Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D544u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D564u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D56Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D574u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D580u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D584u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D598u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D5ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D5C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D5F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D614u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D628u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D630u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D634u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D638u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D640u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D64Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D674u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D67Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D690u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D6A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D6ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D6B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D6D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D6D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D6D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D6F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D724u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D72Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D740u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D748u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D750u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D768u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D770u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D780u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D784u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D790u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D794u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D7ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D7E0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D7E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D7F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D814u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D81Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D828u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D83Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D85Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D878u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D888u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D898u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D8A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D8B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D8C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D8C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D8E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D910u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D934u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D948u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D950u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D954u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D958u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D960u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D974u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D998u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9B4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9DCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9F8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA14u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA38u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA40u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA5Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA80u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA98u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DAA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DAB8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DAC0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DAC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DAD4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB10u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB40u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB44u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB58u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB8Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB9Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBA0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBB4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBF4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBFCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC14u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC1Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC2Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC34u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC5Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC64u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC74u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC84u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC8Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC94u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC9Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DCB4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DCBCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DCF4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DCFCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD10u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD14u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD1Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD28u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD34u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD40u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD44u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD54u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD7Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD9Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DDBCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DDD4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DDDCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DDE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DDF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DDFCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE04u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE10u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE20u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE2Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE38u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE40u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE4Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE5Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE60u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE64u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE74u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE98u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DEA0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DEA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DEB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DEBCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DEC0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DECCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DEE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DEECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF10u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF18u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF20u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF28u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF3Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF4Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF58u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF78u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF80u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF88u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFB4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFBCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFC4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFCCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFD8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFF8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E00Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E014u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E038u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E040u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E048u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E050u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E058u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E060u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E068u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E074u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E07Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E084u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E08Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E094u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0DCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E10Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E11Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E124u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E134u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E13Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E144u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E154u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E164u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E174u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E17Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E18Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E198u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E1ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E1B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E1C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E1D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E1DCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E1F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E1FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E20Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E218u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E23Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E240u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E248u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E274u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E28Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E304u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E30Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E314u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E320u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E330u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E33Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E350u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E35Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E368u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E39Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E3A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E3C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E3CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E3D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E3E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E3F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E434u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E438u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E43Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E444u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E450u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E45Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E474u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E49Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E4D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E4F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E508u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E520u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E530u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E53Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E578u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E5ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E5C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E5E0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E5F8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E604u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E60Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E610u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E624u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E644u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E64Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E658u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E66Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E67Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E688u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E6C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E6E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E700u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E71Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E724u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E734u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E758u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E784u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E794u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E7A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E7ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E7D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E7D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E7D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E7ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E7F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E804u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E810u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E818u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E82Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E838u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E83Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E848u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E864u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E894u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E8BCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E8C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E8D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E8E0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E8E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E8F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E8F8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E904u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E90Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E914u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E91Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E928u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E930u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E93Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E94Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E954u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E95Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E968u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E978u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E97Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E990u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E9A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E9C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E9E0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E9ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA00u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA20u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA28u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA38u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA4Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA54u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA6Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EAA0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EAA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EABCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EAC4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EAD8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB00u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB10u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB14u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB2Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB6Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB74u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB78u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB80u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EBB8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EBC0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EBCCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EBD8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EBE0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EBE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EBF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EBFCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC04u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC0Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC20u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC4Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC54u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC64u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC6Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC7Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ECB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ECC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ECD4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED00u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED1Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED24u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED2Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED38u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED3Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED60u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED8Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED98u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EDA0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EDA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EDACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EDBCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EDC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EDDCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EDE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EDF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EDF8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE0Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE18u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE28u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE54u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE5Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE64u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE74u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE7Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE8Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EEA4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EEA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EEC4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EEE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EEECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EEF4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF04u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF0Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF2Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF34u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF7Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF84u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EFA0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EFA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EFB4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EFC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EFD8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EFDCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EFE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EFFCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F02Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F060u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F068u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F074u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F07Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F088u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F090u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F09Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F0A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F0B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F0BCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F0C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F0CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F0D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F0E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F0F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F104u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F114u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F118u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F128u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F130u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F138u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F148u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F150u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F158u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F160u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F184u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F194u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F19Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F1A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F1B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F1D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F1E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F1ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F200u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F208u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F228u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F230u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F250u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F25Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F268u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F288u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F2C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F2D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F2D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F2DCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F2F8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F304u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F314u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F330u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F338u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F34Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F35Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F364u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F36Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F380u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F388u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F3A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F3B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F3D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F3D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F3E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F3F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F3FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F410u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F430u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F448u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F458u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F460u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F474u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F484u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F488u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F49Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4E0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F504u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F510u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F51Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F524u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F530u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F538u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F544u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F54Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F564u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F568u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F57Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F598u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F5ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F5D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F5D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F5E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F5ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F5F8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F600u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F608u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F620u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F638u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F65Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F664u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F66Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F67Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F684u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F690u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F698u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F6B4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F6B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F6C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F6ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F6F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F704u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F70Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F714u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F71Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F730u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F740u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F744u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F748u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F754u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F75Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F76Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F77Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F784u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F78Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F7A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F7B4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F7B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F7BCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F7D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F808u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F818u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F820u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F82Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F838u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F844u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F84Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F854u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F85Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F880u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F888u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F890u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F8B4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F8BCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F8C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F8E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F8F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F8F8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F91Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F924u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F92Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F930u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F938u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F93Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F954u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F994u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F99Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F9A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F9A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F9D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F9E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F9ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F9F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FA14u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FA1Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FA40u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FA4Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FA50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FA64u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FA88u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FA98u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FAA0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FAA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FAC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FAD0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FAF4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FAF8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FB08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FB40u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FB48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FB5Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FB70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FB98u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FBACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FBC0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FBD0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FBD8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FBE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FBF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FC04u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FC08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FC24u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FC40u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FC50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FC68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FC6Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FC8Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FCCCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FCD4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FCD8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FCE0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FD18u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FD38u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FD48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FD58u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FD78u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FD98u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FDB4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FDCCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FDE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FDF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FDF8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FDFCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE10u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE18u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE38u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE44u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE6Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE78u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FEA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FEC0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FEF8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FF08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FF18u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FF24u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FF30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FF38u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FF48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FF50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FF58u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FF64u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FF68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FF6Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FF7Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FFA0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FFC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FFD0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FFE0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FFE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FFF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FFF8u, &recomp_unit_0022, "recomp_unit_0022");
}
} // namespace psprecomp
