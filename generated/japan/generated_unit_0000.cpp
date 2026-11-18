#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0000[4077] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0,
    8, 0, 0, 0, 9, 10, 0, 0, 0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 21, 22, 0, 23, 0, 24, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 34,
    0, 0, 35, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 49, 0, 50, 0, 51, 0, 0, 52, 0, 0, 53, 0, 54, 55, 0, 0, 56, 0, 57, 0, 58, 59, 60, 0, 0,
    0, 61, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74,
    0, 75, 0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 83, 0, 84, 0, 85, 0,
    86, 0, 87, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 101,
    102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 106, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0,
    110, 0, 111, 112, 0, 113, 0, 0, 0, 114, 115, 0, 0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0,
    0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 126, 127, 0, 128, 0, 0, 0, 129, 130, 0, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 134,
    0, 135, 0, 136, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 141, 142, 0, 143, 0, 144, 145, 0, 0, 0, 146, 0, 147, 0, 148, 0,
    149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156,
    0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 164, 165, 0, 0, 166, 0, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 172,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 176, 0, 0, 177, 0, 0, 178, 0,
    0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 188, 0, 0, 0, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0,
    0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 200, 0, 0, 0, 0, 0, 0,
    0, 201, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 209, 0, 0, 210,
    0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 214, 215, 0, 216, 0, 217, 218, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0,
    223, 0, 224, 0, 0, 0, 225, 0, 226, 0, 227, 228, 0, 229, 0, 0, 230, 231, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 235, 0,
    236, 237, 0, 238, 0, 239, 240, 0, 0, 241, 0, 242, 243, 0, 0, 0, 244, 245, 246, 0, 0, 0, 247, 0, 248, 0, 249, 250, 0, 251, 0, 252,
    253, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 257, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261,
    0, 262, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 269, 270, 0, 0, 0, 271, 0, 0,
    272, 0, 0, 273, 0, 0, 274, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 278, 0, 0, 279, 0, 280, 0, 0, 281, 0, 0, 0, 282,
    0, 0, 283, 0, 0, 284, 285, 286, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 289, 290, 0, 0, 0, 291, 0, 292, 0, 0, 0, 293, 0, 0,
    294, 0, 0, 295, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 0, 300, 0, 0, 301, 0, 302, 0, 0, 303,
    0, 0, 304, 0, 305, 0, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 311, 0, 312, 0, 313, 314, 0, 315, 0, 316, 317, 0, 318, 319, 0, 320,
    0, 321, 0, 322, 0, 0, 0, 0, 323, 324, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0,
    0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 335, 336, 0, 337, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0,
    343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0,
    0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 356,
    0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0,
    363, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 368, 369, 0, 370, 0, 0, 371, 0, 0, 372, 373, 0, 0, 0, 374, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 389, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 396, 0, 0, 397, 0, 0, 0, 398, 0, 399, 0, 400, 0,
    0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406,
    0, 407, 0, 0, 0, 408, 409, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413,
    0, 414, 0, 415, 416, 0, 417, 0, 418, 419, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0,
    0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428,
    0, 429, 0, 0, 0, 430, 431, 0, 432, 0, 0, 0, 433, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436,
    0, 0, 0, 437, 0, 438, 0, 0, 0, 439, 440, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 442, 443, 0, 444, 445, 0, 446, 0, 0, 0, 0,
    0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 452, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0,
    0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 458, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 463, 0, 464, 0, 465, 466,
    0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 470, 0, 471,
    0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 475, 476, 0, 477, 0, 0, 478, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482,
    0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 487, 0,
    0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 493, 0, 0,
    494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 499, 0, 500, 0, 0,
    501, 0, 0, 502, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 505, 0, 0, 0, 506,
    0, 0, 507, 0, 508, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0,
    513, 0, 0, 0, 514, 0, 515, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0,
    0, 0, 520, 0, 0, 0, 521, 0, 522, 0, 0, 0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526,
    0, 0, 0, 0, 527, 0, 0, 0, 528, 0, 529, 0, 530, 0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 535,
    0, 0, 536, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0,
    0, 541, 0, 0, 0, 0, 0, 542, 543, 0, 0, 0, 544, 0, 0, 545, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 551, 0, 552, 0, 0, 0, 553, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 558, 0, 559, 0, 0, 0, 0, 560, 0, 0, 561, 0, 562, 0, 0, 563, 0, 564, 0,
    0, 565, 0, 0, 566, 0, 567, 0, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 571, 0, 572, 0, 573, 0, 574, 0, 0, 575, 0,
    0, 576, 0, 0, 577, 0, 0, 0, 0, 578, 0, 579, 0, 0, 580, 0, 581, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0,
    0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 586, 587, 0, 588, 0, 0, 589, 0, 0, 590, 0, 591, 592, 0, 593, 0, 0, 594, 0, 595, 0, 0,
    596, 0, 0, 0, 0, 0, 0, 597, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 0, 601, 0, 0, 602, 0, 0, 603, 0, 0, 604, 0, 0, 605,
    0, 0, 606, 0, 0, 607, 0, 0, 608, 0, 0, 609, 0, 0, 610, 0, 0, 611, 0, 0, 612, 0, 0, 613, 0, 0, 614, 0, 0, 615, 0, 0,
    616, 0, 0, 617, 0, 0, 618, 0, 0, 619, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0, 0, 623, 0, 0, 624, 0, 0, 625, 0, 0, 626, 0,
    0, 627, 0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 631, 0, 0, 632, 0, 633, 0, 0, 634, 0, 0, 635, 0, 0, 636, 0, 0, 0, 0, 637,
    0, 638, 639, 0, 0, 0, 0, 640, 641, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 643, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 649, 0, 0, 0, 0, 0, 0, 0, 0,
    650, 0, 651, 652, 0, 0, 0, 0, 653, 654, 0, 0, 655, 656, 0, 657, 0, 0, 0, 658, 0, 0, 659, 660, 661, 0, 0, 0, 0, 0, 662, 0,
    663, 0, 664, 0, 0, 665, 0, 666, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 670, 671, 0, 0, 0, 0, 672, 0,
    0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0,
    0, 676, 0, 0, 677, 0, 678, 0, 0, 679, 680, 0, 0, 681, 0, 0, 0, 682, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0,
    685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 687, 0, 0, 688, 689, 0, 690, 0, 0, 691, 0, 0, 692, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 693, 0, 0, 694, 695, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697,
    0, 0, 698, 0, 0, 699, 0, 0, 700, 0, 701, 0, 702, 0, 703, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 708, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710,
    0, 0, 0, 0, 0, 0, 0, 711, 0, 712, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 715, 716, 0, 0, 717, 718, 0, 0, 0, 0, 0, 0,
    719, 0, 0, 0, 720, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 725, 0, 726, 0, 0, 727, 0, 728, 729, 0, 0, 730, 0, 0, 731, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 734, 735, 0, 736, 0, 0, 0, 0, 737, 0, 738, 739, 740, 0, 0, 0, 0, 0, 741, 0, 0,
    0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 744, 0, 0, 745, 0, 746, 747, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 750, 0,
    0, 751, 0, 0, 752, 753, 0, 0, 0, 0, 754, 0, 755, 0, 0, 756, 0, 0, 757, 758, 0, 759, 0, 0, 760, 0, 0, 761, 0, 0, 762, 0,
    763, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 765, 0, 766, 767, 0, 768, 0, 0, 0, 769, 0, 0, 0, 0, 0, 770, 0, 771, 0,
    772, 0, 0, 773, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 775, 776, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0,
    0, 779, 0, 0, 0, 0, 0, 780, 0, 781, 0, 0, 782, 0, 783, 0, 784, 0, 785, 0, 0, 786, 0, 787, 0, 788, 0, 0, 0, 789, 0, 0,
    0, 0, 790, 0, 0, 0, 791, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 794, 0, 0, 0, 0, 795, 0, 796, 0, 0, 0, 797, 0, 0, 0, 798, 0, 0, 0, 0, 799, 0, 0, 0, 0, 800, 801, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0,
    0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 806, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 808, 0, 0, 0,
    0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 813, 0, 0, 0,
    0, 814, 0, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 818, 0, 0, 0, 0, 819,
    0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 821, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 824, 0, 0, 0,
    0, 825, 0, 0, 826, 0, 0, 0, 0, 827, 0, 0, 0, 0, 828, 0, 0, 0, 0, 829, 830, 0, 0, 0, 831, 0, 832, 0, 0, 0, 0, 833,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 835, 0, 836, 0, 0, 837, 0, 838, 0, 0, 0, 0, 0, 0, 0, 839,
    0, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 841, 0, 842, 0, 843, 0, 0, 0, 0, 844, 0, 845, 0, 0, 0, 846, 0, 0, 0, 0,
    0, 0, 0, 847, 0, 0, 0, 0, 0, 848, 0, 0, 0, 0, 849, 0, 0, 850, 0, 851, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0,
    0, 0, 0, 853, 0, 0, 0, 0, 854, 0, 855, 0, 0, 0, 0, 0, 856, 0, 0, 0, 0, 0, 0, 857, 0, 0, 0, 0, 858, 0, 0, 0,
    0, 0, 0, 0, 859, 0, 0, 0, 0, 860, 0, 0, 0, 0, 861, 862, 0, 0, 0, 863, 0, 0, 0, 0, 864, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 865, 0, 0, 0, 0, 866, 0, 867, 0, 868, 0, 0, 0, 0, 869, 0, 0, 0, 0, 870, 0, 871, 0, 0, 0, 0, 872, 0,
    0, 0, 0, 0, 0, 873, 0, 0, 0, 0, 874, 0, 0, 0, 0, 0, 0, 0, 875, 0, 0, 0, 0, 876, 0, 877, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 878, 0, 0, 879, 0, 0, 880, 0, 0, 0, 881, 0, 0, 0, 882, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 883, 0, 0, 0, 0, 884, 885, 0, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 887, 0, 0, 0, 0, 0, 0, 0, 0, 888,
    0, 889, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 0, 0, 0, 0, 891, 0, 0, 0, 0, 0, 0, 0, 892, 0, 0, 0, 0, 893,
    0, 0, 0, 0, 0, 0, 0, 894, 0, 0, 0, 0, 895, 0, 0, 0, 0, 0, 0, 0, 0, 896, 0, 897, 0, 0, 0, 0, 898, 0, 899, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 900, 0, 0, 0, 901, 902, 0,
    0, 0, 903, 0, 904, 905, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 906, 0, 0, 907, 0, 908, 0, 0, 0, 909, 0, 910, 0, 911,
    912, 0, 913, 0, 914, 0, 0, 0, 0, 915, 0, 0, 0, 0, 916, 0, 0, 917, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 918, 0, 919, 0, 920, 921, 0, 922, 0, 0, 923, 0, 924, 0, 925, 0, 926, 927, 0, 928, 0, 929, 930, 0, 931, 932, 0, 0,
    0, 933, 0, 934, 0, 0, 935, 0, 0, 0, 0, 936, 0, 0, 937, 0, 0, 0, 938, 0, 0, 0, 0, 939, 0, 0, 0, 0, 940, 0, 0, 0,
    0, 941, 0, 0, 0, 942, 0, 0, 0, 0, 943, 0, 0, 944, 0, 0, 0, 945, 0, 946, 0, 947, 0, 948, 0, 949, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 950, 0, 0, 0, 951, 0, 0, 0, 952, 0, 0, 0, 953, 0, 954, 955, 0, 0, 0, 0, 956, 0, 0, 0, 957, 0, 958,
    959, 0, 960, 0, 0, 0, 961, 0, 0, 0, 0, 0, 962, 0, 0, 963, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 964, 0, 0,
    0, 0, 0, 965, 0, 0, 0, 0, 0, 966, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 967, 0, 0, 0, 0, 0, 0, 968, 0,
    0, 0, 0, 0, 969, 0, 0, 0, 0, 0, 0, 0, 970,
};
void recomp_unit_0000_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08804000u;
        entry_id = (entry_delta < 16308u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0000[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08804000;
    case 2u: goto L_08804034;
    case 3u: goto L_08804040;
    case 4u: goto L_08804048;
    case 5u: goto L_08804050;
    case 6u: goto L_08804060;
    case 7u: goto L_08804074;
    case 8u: goto L_08804080;
    case 9u: goto L_08804090;
    case 10u: goto L_08804094;
    case 11u: goto L_088040A4;
    case 12u: goto L_088040AC;
    case 13u: goto L_088040BC;
    case 14u: goto L_088040C8;
    case 15u: goto L_088040D8;
    case 16u: goto L_088040E8;
    case 17u: goto L_08804108;
    case 18u: goto L_08804114;
    case 19u: goto L_0880414C;
    case 20u: goto L_08804158;
    case 21u: goto L_08804160;
    case 22u: goto L_08804164;
    case 23u: goto L_0880416C;
    case 24u: goto L_08804174;
    case 25u: goto L_08804180;
    case 26u: goto L_0880419C;
    case 27u: goto L_088041A4;
    case 28u: goto L_088041BC;
    case 29u: goto L_088041C4;
    case 30u: goto L_088041D0;
    case 31u: goto L_088041DC;
    case 32u: goto L_088041E4;
    case 33u: goto L_088041F4;
    case 34u: goto L_088041FC;
    case 35u: goto L_08804208;
    case 36u: goto L_08804210;
    case 37u: goto L_08804218;
    case 38u: goto L_08804240;
    case 39u: goto L_08804268;
    case 40u: goto L_08804278;
    case 41u: goto L_088042BC;
    case 42u: goto L_088042D0;
    case 43u: goto L_0880439C;
    case 44u: goto L_088043A4;
    case 45u: goto L_088043B8;
    case 46u: goto L_088043C4;
    case 47u: goto L_0880446C;
    case 48u: goto L_08804490;
    case 49u: goto L_0880449C;
    case 50u: goto L_088044A4;
    case 51u: goto L_088044AC;
    case 52u: goto L_088044B8;
    case 53u: goto L_088044C4;
    case 54u: goto L_088044CC;
    case 55u: goto L_088044D0;
    case 56u: goto L_088044DC;
    case 57u: goto L_088044E4;
    case 58u: goto L_088044EC;
    case 59u: goto L_088044F0;
    case 60u: goto L_088044F4;
    case 61u: goto L_08804504;
    case 62u: goto L_0880451C;
    case 63u: goto L_08804524;
    case 64u: goto L_0880452C;
    case 65u: goto L_08804534;
    case 66u: goto L_0880453C;
    case 67u: goto L_08804544;
    case 68u: goto L_0880454C;
    case 69u: goto L_08804554;
    case 70u: goto L_0880455C;
    case 71u: goto L_08804564;
    case 72u: goto L_0880456C;
    case 73u: goto L_08804574;
    case 74u: goto L_0880457C;
    case 75u: goto L_08804584;
    case 76u: goto L_0880458C;
    case 77u: goto L_08804594;
    case 78u: goto L_0880459C;
    case 79u: goto L_088045BC;
    case 80u: goto L_088045C4;
    case 81u: goto L_088045CC;
    case 82u: goto L_088045E0;
    case 83u: goto L_088045E8;
    case 84u: goto L_088045F0;
    case 85u: goto L_088045F8;
    case 86u: goto L_08804600;
    case 87u: goto L_08804608;
    case 88u: goto L_08804620;
    case 89u: goto L_08804628;
    case 90u: goto L_08804630;
    case 91u: goto L_08804638;
    case 92u: goto L_08804650;
    case 93u: goto L_08804664;
    case 94u: goto L_08804688;
    case 95u: goto L_08804698;
    case 96u: goto L_088046A4;
    case 97u: goto L_088046B0;
    case 98u: goto L_088046CC;
    case 99u: goto L_088046DC;
    case 100u: goto L_088046E4;
    case 101u: goto L_088046FC;
    case 102u: goto L_08804700;
    case 103u: goto L_08804708;
    case 104u: goto L_08804720;
    case 105u: goto L_08804734;
    case 106u: goto L_0880473C;
    case 107u: goto L_08804740;
    case 108u: goto L_08804754;
    case 109u: goto L_08804774;
    case 110u: goto L_08804780;
    case 111u: goto L_08804788;
    case 112u: goto L_0880478C;
    case 113u: goto L_08804794;
    case 114u: goto L_088047A4;
    case 115u: goto L_088047A8;
    case 116u: goto L_088047C0;
    case 117u: goto L_088047C8;
    case 118u: goto L_088047D0;
    case 119u: goto L_088047D8;
    case 120u: goto L_088047E0;
    case 121u: goto L_088047E8;
    case 122u: goto L_088047F0;
    case 123u: goto L_088047F8;
    case 124u: goto L_08804818;
    case 125u: goto L_08804824;
    case 126u: goto L_0880482C;
    case 127u: goto L_08804830;
    case 128u: goto L_08804838;
    case 129u: goto L_08804848;
    case 130u: goto L_0880484C;
    case 131u: goto L_08804864;
    case 132u: goto L_0880486C;
    case 133u: goto L_08804874;
    case 134u: goto L_0880487C;
    case 135u: goto L_08804884;
    case 136u: goto L_0880488C;
    case 137u: goto L_08804894;
    case 138u: goto L_0880489C;
    case 139u: goto L_088048AC;
    case 140u: goto L_088048B8;
    case 141u: goto L_088048C0;
    case 142u: goto L_088048C4;
    case 143u: goto L_088048CC;
    case 144u: goto L_088048D4;
    case 145u: goto L_088048D8;
    case 146u: goto L_088048E8;
    case 147u: goto L_088048F0;
    case 148u: goto L_088048F8;
    case 149u: goto L_08804900;
    case 150u: goto L_08804908;
    case 151u: goto L_08804910;
    case 152u: goto L_08804918;
    case 153u: goto L_08804920;
    case 154u: goto L_08804930;
    case 155u: goto L_08804974;
    case 156u: goto L_0880497C;
    case 157u: goto L_0880499C;
    case 158u: goto L_088049B8;
    case 159u: goto L_088049C8;
    case 160u: goto L_088049D0;
    case 161u: goto L_08804A4C;
    case 162u: goto L_08804A84;
    case 163u: goto L_08804A94;
    case 164u: goto L_08804AA8;
    case 165u: goto L_08804AAC;
    case 166u: goto L_08804AB8;
    case 167u: goto L_08804AC8;
    case 168u: goto L_08804AD0;
    case 169u: goto L_08804AD8;
    case 170u: goto L_08804AEC;
    case 171u: goto L_08804AF4;
    case 172u: goto L_08804AFC;
    case 173u: goto L_08804B00;
    case 174u: goto L_08804B28;
    case 175u: goto L_08804B5C;
    case 176u: goto L_08804B60;
    case 177u: goto L_08804B6C;
    case 178u: goto L_08804B78;
    case 179u: goto L_08804B94;
    case 180u: goto L_08804BDC;
    case 181u: goto L_08804BE8;
    case 182u: goto L_08804C00;
    case 183u: goto L_08804C10;
    case 184u: goto L_08804C1C;
    case 185u: goto L_08804C34;
    case 186u: goto L_08804C4C;
    case 187u: goto L_08804C5C;
    case 188u: goto L_08804C60;
    case 189u: goto L_08804C78;
    case 190u: goto L_08804CA8;
    case 191u: goto L_08804CBC;
    case 192u: goto L_08804CE0;
    case 193u: goto L_08804CEC;
    case 194u: goto L_08804D04;
    case 195u: goto L_08804D14;
    case 196u: goto L_08804D20;
    case 197u: goto L_08804D38;
    case 198u: goto L_08804D50;
    case 199u: goto L_08804D60;
    case 200u: goto L_08804D64;
    case 201u: goto L_08804D84;
    case 202u: goto L_08804D98;
    case 203u: goto L_08804DA0;
    case 204u: goto L_08804DA8;
    case 205u: goto L_08804DB0;
    case 206u: goto L_08804DC0;
    case 207u: goto L_08804DD4;
    case 208u: goto L_08804DDC;
    case 209u: goto L_08804DF0;
    case 210u: goto L_08804DFC;
    case 211u: goto L_08804E08;
    case 212u: goto L_08804E18;
    case 213u: goto L_08804E20;
    case 214u: goto L_08804E28;
    case 215u: goto L_08804E2C;
    case 216u: goto L_08804E34;
    case 217u: goto L_08804E3C;
    case 218u: goto L_08804E40;
    case 219u: goto L_08804E48;
    case 220u: goto L_08804E54;
    case 221u: goto L_08804E60;
    case 222u: goto L_08804E6C;
    case 223u: goto L_08804E80;
    case 224u: goto L_08804E88;
    case 225u: goto L_08804E98;
    case 226u: goto L_08804EA0;
    case 227u: goto L_08804EA8;
    case 228u: goto L_08804EAC;
    case 229u: goto L_08804EB4;
    case 230u: goto L_08804EC0;
    case 231u: goto L_08804EC4;
    case 232u: goto L_08804ED4;
    case 233u: goto L_08804EE0;
    case 234u: goto L_08804EF0;
    case 235u: goto L_08804EF8;
    case 236u: goto L_08804F00;
    case 237u: goto L_08804F04;
    case 238u: goto L_08804F0C;
    case 239u: goto L_08804F14;
    case 240u: goto L_08804F18;
    case 241u: goto L_08804F24;
    case 242u: goto L_08804F2C;
    case 243u: goto L_08804F30;
    case 244u: goto L_08804F40;
    case 245u: goto L_08804F44;
    case 246u: goto L_08804F48;
    case 247u: goto L_08804F58;
    case 248u: goto L_08804F60;
    case 249u: goto L_08804F68;
    case 250u: goto L_08804F6C;
    case 251u: goto L_08804F74;
    case 252u: goto L_08804F7C;
    case 253u: goto L_08804F80;
    case 254u: goto L_08804F8C;
    case 255u: goto L_08804F94;
    case 256u: goto L_08804FB8;
    case 257u: goto L_08804FBC;
    case 258u: goto L_08804FC0;
    case 259u: goto L_08804FD0;
    case 260u: goto L_08804FE8;
    case 261u: goto L_08804FFC;
    case 262u: goto L_08805004;
    case 263u: goto L_08805008;
    case 264u: goto L_08805018;
    case 265u: goto L_08805030;
    case 266u: goto L_08805040;
    case 267u: goto L_0880504C;
    case 268u: goto L_08805058;
    case 269u: goto L_08805060;
    case 270u: goto L_08805064;
    case 271u: goto L_08805074;
    case 272u: goto L_08805080;
    case 273u: goto L_0880508C;
    case 274u: goto L_08805098;
    case 275u: goto L_088050A0;
    case 276u: goto L_088050B0;
    case 277u: goto L_088050C4;
    case 278u: goto L_088050CC;
    case 279u: goto L_088050D8;
    case 280u: goto L_088050E0;
    case 281u: goto L_088050EC;
    case 282u: goto L_088050FC;
    case 283u: goto L_08805108;
    case 284u: goto L_08805114;
    case 285u: goto L_08805118;
    case 286u: goto L_0880511C;
    case 287u: goto L_08805128;
    case 288u: goto L_08805134;
    case 289u: goto L_08805148;
    case 290u: goto L_0880514C;
    case 291u: goto L_0880515C;
    case 292u: goto L_08805164;
    case 293u: goto L_08805174;
    case 294u: goto L_08805180;
    case 295u: goto L_0880518C;
    case 296u: goto L_08805190;
    case 297u: goto L_088051B4;
    case 298u: goto L_088051C0;
    case 299u: goto L_088051D0;
    case 300u: goto L_088051DC;
    case 301u: goto L_088051E8;
    case 302u: goto L_088051F0;
    case 303u: goto L_088051FC;
    case 304u: goto L_08805208;
    case 305u: goto L_08805210;
    case 306u: goto L_0880521C;
    case 307u: goto L_08805224;
    case 308u: goto L_0880522C;
    case 309u: goto L_08805234;
    case 310u: goto L_0880523C;
    case 311u: goto L_08805240;
    case 312u: goto L_08805248;
    case 313u: goto L_08805250;
    case 314u: goto L_08805254;
    case 315u: goto L_0880525C;
    case 316u: goto L_08805264;
    case 317u: goto L_08805268;
    case 318u: goto L_08805270;
    case 319u: goto L_08805274;
    case 320u: goto L_0880527C;
    case 321u: goto L_08805284;
    case 322u: goto L_0880528C;
    case 323u: goto L_088052A0;
    case 324u: goto L_088052A4;
    case 325u: goto L_088052AC;
    case 326u: goto L_088052C4;
    case 327u: goto L_088052D0;
    case 328u: goto L_088052E8;
    case 329u: goto L_088052F4;
    case 330u: goto L_0880530C;
    case 331u: goto L_08805318;
    case 332u: goto L_08805328;
    case 333u: goto L_08805334;
    case 334u: goto L_08805358;
    case 335u: goto L_08805388;
    case 336u: goto L_0880538C;
    case 337u: goto L_08805394;
    case 338u: goto L_088053A4;
    case 339u: goto L_088053B0;
    case 340u: goto L_088053CC;
    case 341u: goto L_088053E0;
    case 342u: goto L_088053F8;
    case 343u: goto L_08805400;
    case 344u: goto L_0880541C;
    case 345u: goto L_0880542C;
    case 346u: goto L_0880543C;
    case 347u: goto L_08805448;
    case 348u: goto L_08805460;
    case 349u: goto L_0880546C;
    case 350u: goto L_0880548C;
    case 351u: goto L_088054B0;
    case 352u: goto L_088054B8;
    case 353u: goto L_088054C8;
    case 354u: goto L_088054D8;
    case 355u: goto L_088054E4;
    case 356u: goto L_088054FC;
    case 357u: goto L_08805508;
    case 358u: goto L_08805528;
    case 359u: goto L_0880554C;
    case 360u: goto L_08805554;
    case 361u: goto L_08805568;
    case 362u: goto L_08805574;
    case 363u: goto L_08805580;
    case 364u: goto L_08805584;
    case 365u: goto L_0880558C;
    case 366u: goto L_088055AC;
    case 367u: goto L_088055B8;
    case 368u: goto L_088055C0;
    case 369u: goto L_088055C4;
    case 370u: goto L_088055CC;
    case 371u: goto L_088055D8;
    case 372u: goto L_088055E4;
    case 373u: goto L_088055E8;
    case 374u: goto L_088055F8;
    case 375u: goto L_08805630;
    case 376u: goto L_08805638;
    case 377u: goto L_08805640;
    case 378u: goto L_08805648;
    case 379u: goto L_08805654;
    case 380u: goto L_08805664;
    case 381u: goto L_088056A0;
    case 382u: goto L_088056BC;
    case 383u: goto L_088056C4;
    case 384u: goto L_088056DC;
    case 385u: goto L_088056F0;
    case 386u: goto L_08805798;
    case 387u: goto L_088057B8;
    case 388u: goto L_088057C4;
    case 389u: goto L_088057CC;
    case 390u: goto L_088057D0;
    case 391u: goto L_088057E0;
    case 392u: goto L_088057FC;
    case 393u: goto L_08805834;
    case 394u: goto L_0880583C;
    case 395u: goto L_08805844;
    case 396u: goto L_0880584C;
    case 397u: goto L_08805858;
    case 398u: goto L_08805868;
    case 399u: goto L_08805870;
    case 400u: goto L_08805878;
    case 401u: goto L_08805888;
    case 402u: goto L_08805894;
    case 403u: goto L_088058A0;
    case 404u: goto L_088058B8;
    case 405u: goto L_088058EC;
    case 406u: goto L_088058FC;
    case 407u: goto L_08805904;
    case 408u: goto L_08805914;
    case 409u: goto L_08805918;
    case 410u: goto L_08805920;
    case 411u: goto L_08805934;
    case 412u: goto L_08805974;
    case 413u: goto L_0880597C;
    case 414u: goto L_08805984;
    case 415u: goto L_0880598C;
    case 416u: goto L_08805990;
    case 417u: goto L_08805998;
    case 418u: goto L_088059A0;
    case 419u: goto L_088059A4;
    case 420u: goto L_088059C8;
    case 421u: goto L_088059F0;
    case 422u: goto L_088059F8;
    case 423u: goto L_08805A04;
    case 424u: goto L_08805A10;
    case 425u: goto L_08805A1C;
    case 426u: goto L_08805A34;
    case 427u: goto L_08805A6C;
    case 428u: goto L_08805A7C;
    case 429u: goto L_08805A84;
    case 430u: goto L_08805A94;
    case 431u: goto L_08805A98;
    case 432u: goto L_08805AA0;
    case 433u: goto L_08805AB0;
    case 434u: goto L_08805AB4;
    case 435u: goto L_08805AC0;
    case 436u: goto L_08805AFC;
    case 437u: goto L_08805B0C;
    case 438u: goto L_08805B14;
    case 439u: goto L_08805B24;
    case 440u: goto L_08805B28;
    case 441u: goto L_08805B30;
    case 442u: goto L_08805B54;
    case 443u: goto L_08805B58;
    case 444u: goto L_08805B60;
    case 445u: goto L_08805B64;
    case 446u: goto L_08805B6C;
    case 447u: goto L_08805B8C;
    case 448u: goto L_08805BA4;
    case 449u: goto L_08805BB4;
    case 450u: goto L_08805BC0;
    case 451u: goto L_08805BCC;
    case 452u: goto L_08805BD4;
    case 453u: goto L_08805BD8;
    case 454u: goto L_08805BE8;
    case 455u: goto L_08805C74;
    case 456u: goto L_08805C94;
    case 457u: goto L_08805CA0;
    case 458u: goto L_08805CA8;
    case 459u: goto L_08805CAC;
    case 460u: goto L_08805CBC;
    case 461u: goto L_08805CD8;
    case 462u: goto L_08805CE0;
    case 463u: goto L_08805CE8;
    case 464u: goto L_08805CF0;
    case 465u: goto L_08805CF8;
    case 466u: goto L_08805CFC;
    case 467u: goto L_08805D08;
    case 468u: goto L_08805D3C;
    case 469u: goto L_08805D70;
    case 470u: goto L_08805D74;
    case 471u: goto L_08805D7C;
    case 472u: goto L_08805D88;
    case 473u: goto L_08805D94;
    case 474u: goto L_08805DA0;
    case 475u: goto L_08805DA8;
    case 476u: goto L_08805DAC;
    case 477u: goto L_08805DB4;
    case 478u: goto L_08805DC0;
    case 479u: goto L_08805DC4;
    case 480u: goto L_08805DD4;
    case 481u: goto L_08805DF0;
    case 482u: goto L_08805DFC;
    case 483u: goto L_08805E10;
    case 484u: goto L_08805E1C;
    case 485u: goto L_08805E5C;
    case 486u: goto L_08805E68;
    case 487u: goto L_08805E78;
    case 488u: goto L_08805E84;
    case 489u: goto L_08805EB4;
    case 490u: goto L_08805EC8;
    case 491u: goto L_08805ED8;
    case 492u: goto L_08805EE0;
    case 493u: goto L_08805EF4;
    case 494u: goto L_08805F00;
    case 495u: goto L_08805F10;
    case 496u: goto L_08805F40;
    case 497u: goto L_08805F54;
    case 498u: goto L_08805F64;
    case 499u: goto L_08805F6C;
    case 500u: goto L_08805F74;
    case 501u: goto L_08805F80;
    case 502u: goto L_08805F8C;
    case 503u: goto L_08805F98;
    case 504u: goto L_08805FE8;
    case 505u: goto L_08805FEC;
    case 506u: goto L_08805FFC;
    case 507u: goto L_08806008;
    case 508u: goto L_08806010;
    case 509u: goto L_08806020;
    case 510u: goto L_0880602C;
    case 511u: goto L_0880605C;
    case 512u: goto L_08806070;
    case 513u: goto L_08806080;
    case 514u: goto L_08806090;
    case 515u: goto L_08806098;
    case 516u: goto L_088060A8;
    case 517u: goto L_088060B4;
    case 518u: goto L_088060E4;
    case 519u: goto L_088060F8;
    case 520u: goto L_08806108;
    case 521u: goto L_08806118;
    case 522u: goto L_08806120;
    case 523u: goto L_08806130;
    case 524u: goto L_0880613C;
    case 525u: goto L_08806148;
    case 526u: goto L_0880617C;
    case 527u: goto L_08806190;
    case 528u: goto L_088061A0;
    case 529u: goto L_088061A8;
    case 530u: goto L_088061B0;
    case 531u: goto L_088061C4;
    case 532u: goto L_088061D0;
    case 533u: goto L_088061E0;
    case 534u: goto L_088061EC;
    case 535u: goto L_088061FC;
    case 536u: goto L_08806208;
    case 537u: goto L_08806214;
    case 538u: goto L_08806220;
    case 539u: goto L_08806250;
    case 540u: goto L_0880626C;
    case 541u: goto L_08806284;
    case 542u: goto L_0880629C;
    case 543u: goto L_088062A0;
    case 544u: goto L_088062B0;
    case 545u: goto L_088062BC;
    case 546u: goto L_088062C4;
    case 547u: goto L_088062D4;
    case 548u: goto L_08806304;
    case 549u: goto L_08806318;
    case 550u: goto L_08806328;
    case 551u: goto L_08806330;
    case 552u: goto L_08806338;
    case 553u: goto L_08806348;
    case 554u: goto L_08806354;
    case 555u: goto L_08806388;
    case 556u: goto L_0880639C;
    case 557u: goto L_088063AC;
    case 558u: goto L_088063B4;
    case 559u: goto L_088063BC;
    case 560u: goto L_088063D0;
    case 561u: goto L_088063DC;
    case 562u: goto L_088063E4;
    case 563u: goto L_088063F0;
    case 564u: goto L_088063F8;
    case 565u: goto L_08806404;
    case 566u: goto L_08806410;
    case 567u: goto L_08806418;
    case 568u: goto L_08806424;
    case 569u: goto L_0880643C;
    case 570u: goto L_0880644C;
    case 571u: goto L_08806454;
    case 572u: goto L_0880645C;
    case 573u: goto L_08806464;
    case 574u: goto L_0880646C;
    case 575u: goto L_08806478;
    case 576u: goto L_08806484;
    case 577u: goto L_08806490;
    case 578u: goto L_088064A4;
    case 579u: goto L_088064AC;
    case 580u: goto L_088064B8;
    case 581u: goto L_088064C0;
    case 582u: goto L_088064C4;
    case 583u: goto L_088064EC;
    case 584u: goto L_08806508;
    case 585u: goto L_08806518;
    case 586u: goto L_08806528;
    case 587u: goto L_0880652C;
    case 588u: goto L_08806534;
    case 589u: goto L_08806540;
    case 590u: goto L_0880654C;
    case 591u: goto L_08806554;
    case 592u: goto L_08806558;
    case 593u: goto L_08806560;
    case 594u: goto L_0880656C;
    case 595u: goto L_08806574;
    case 596u: goto L_08806580;
    case 597u: goto L_0880659C;
    case 598u: goto L_088065A8;
    case 599u: goto L_088065B4;
    case 600u: goto L_088065C0;
    case 601u: goto L_088065CC;
    case 602u: goto L_088065D8;
    case 603u: goto L_088065E4;
    case 604u: goto L_088065F0;
    case 605u: goto L_088065FC;
    case 606u: goto L_08806608;
    case 607u: goto L_08806614;
    case 608u: goto L_08806620;
    case 609u: goto L_0880662C;
    case 610u: goto L_08806638;
    case 611u: goto L_08806644;
    case 612u: goto L_08806650;
    case 613u: goto L_0880665C;
    case 614u: goto L_08806668;
    case 615u: goto L_08806674;
    case 616u: goto L_08806680;
    case 617u: goto L_0880668C;
    case 618u: goto L_08806698;
    case 619u: goto L_088066A4;
    case 620u: goto L_088066B0;
    case 621u: goto L_088066BC;
    case 622u: goto L_088066C8;
    case 623u: goto L_088066D4;
    case 624u: goto L_088066E0;
    case 625u: goto L_088066EC;
    case 626u: goto L_088066F8;
    case 627u: goto L_08806704;
    case 628u: goto L_08806710;
    case 629u: goto L_0880671C;
    case 630u: goto L_08806728;
    case 631u: goto L_08806730;
    case 632u: goto L_0880673C;
    case 633u: goto L_08806744;
    case 634u: goto L_08806750;
    case 635u: goto L_0880675C;
    case 636u: goto L_08806768;
    case 637u: goto L_0880677C;
    case 638u: goto L_08806784;
    case 639u: goto L_08806788;
    case 640u: goto L_0880679C;
    case 641u: goto L_088067A0;
    case 642u: goto L_088067AC;
    case 643u: goto L_088067D0;
    case 644u: goto L_088067D4;
    case 645u: goto L_088067E4;
    case 646u: goto L_08806814;
    case 647u: goto L_0880681C;
    case 648u: goto L_08806858;
    case 649u: goto L_0880685C;
    case 650u: goto L_08806880;
    case 651u: goto L_08806888;
    case 652u: goto L_0880688C;
    case 653u: goto L_088068A0;
    case 654u: goto L_088068A4;
    case 655u: goto L_088068B0;
    case 656u: goto L_088068B4;
    case 657u: goto L_088068BC;
    case 658u: goto L_088068CC;
    case 659u: goto L_088068D8;
    case 660u: goto L_088068DC;
    case 661u: goto L_088068E0;
    case 662u: goto L_088068F8;
    case 663u: goto L_08806900;
    case 664u: goto L_08806908;
    case 665u: goto L_08806914;
    case 666u: goto L_0880691C;
    case 667u: goto L_08806928;
    case 668u: goto L_0880693C;
    case 669u: goto L_08806950;
    case 670u: goto L_08806960;
    case 671u: goto L_08806964;
    case 672u: goto L_08806978;
    case 673u: goto L_08806984;
    case 674u: goto L_088069E8;
    case 675u: goto L_08806A64;
    case 676u: goto L_08806A84;
    case 677u: goto L_08806A90;
    case 678u: goto L_08806A98;
    case 679u: goto L_08806AA4;
    case 680u: goto L_08806AA8;
    case 681u: goto L_08806AB4;
    case 682u: goto L_08806AC4;
    case 683u: goto L_08806AD0;
    case 684u: goto L_08806AE0;
    case 685u: goto L_08806B00;
    case 686u: goto L_08806B34;
    case 687u: goto L_08806B38;
    case 688u: goto L_08806B44;
    case 689u: goto L_08806B48;
    case 690u: goto L_08806B50;
    case 691u: goto L_08806B5C;
    case 692u: goto L_08806B68;
    case 693u: goto L_08806B98;
    case 694u: goto L_08806BA4;
    case 695u: goto L_08806BA8;
    case 696u: goto L_08806BB0;
    case 697u: goto L_08806BFC;
    case 698u: goto L_08806C08;
    case 699u: goto L_08806C14;
    case 700u: goto L_08806C20;
    case 701u: goto L_08806C28;
    case 702u: goto L_08806C30;
    case 703u: goto L_08806C38;
    case 704u: goto L_08806C4C;
    case 705u: goto L_08806C68;
    case 706u: goto L_08806C90;
    case 707u: goto L_08806CAC;
    case 708u: goto L_08806CC8;
    case 709u: goto L_08806CD4;
    case 710u: goto L_08806CFC;
    case 711u: goto L_08806D1C;
    case 712u: goto L_08806D24;
    case 713u: goto L_08806D34;
    case 714u: goto L_08806D40;
    case 715u: goto L_08806D50;
    case 716u: goto L_08806D54;
    case 717u: goto L_08806D60;
    case 718u: goto L_08806D64;
    case 719u: goto L_08806D80;
    case 720u: goto L_08806D90;
    case 721u: goto L_08806DA0;
    case 722u: goto L_08806DBC;
    case 723u: goto L_08806DC4;
    case 724u: goto L_08806DE8;
    case 725u: goto L_08806E10;
    case 726u: goto L_08806E18;
    case 727u: goto L_08806E24;
    case 728u: goto L_08806E2C;
    case 729u: goto L_08806E30;
    case 730u: goto L_08806E3C;
    case 731u: goto L_08806E48;
    case 732u: goto L_08806E50;
    case 733u: goto L_08806E98;
    case 734u: goto L_08806EAC;
    case 735u: goto L_08806EB0;
    case 736u: goto L_08806EB8;
    case 737u: goto L_08806ECC;
    case 738u: goto L_08806ED4;
    case 739u: goto L_08806ED8;
    case 740u: goto L_08806EDC;
    case 741u: goto L_08806EF4;
    case 742u: goto L_08806F10;
    case 743u: goto L_08806F1C;
    case 744u: goto L_08806F28;
    case 745u: goto L_08806F34;
    case 746u: goto L_08806F3C;
    case 747u: goto L_08806F40;
    case 748u: goto L_08806F5C;
    case 749u: goto L_08806F70;
    case 750u: goto L_08806F78;
    case 751u: goto L_08806F84;
    case 752u: goto L_08806F90;
    case 753u: goto L_08806F94;
    case 754u: goto L_08806FA8;
    case 755u: goto L_08806FB0;
    case 756u: goto L_08806FBC;
    case 757u: goto L_08806FC8;
    case 758u: goto L_08806FCC;
    case 759u: goto L_08806FD4;
    case 760u: goto L_08806FE0;
    case 761u: goto L_08806FEC;
    case 762u: goto L_08806FF8;
    case 763u: goto L_08807000;
    case 764u: goto L_0880701C;
    case 765u: goto L_08807034;
    case 766u: goto L_0880703C;
    case 767u: goto L_08807040;
    case 768u: goto L_08807048;
    case 769u: goto L_08807058;
    case 770u: goto L_08807070;
    case 771u: goto L_08807078;
    case 772u: goto L_08807080;
    case 773u: goto L_0880708C;
    case 774u: goto L_088070A0;
    case 775u: goto L_088070C4;
    case 776u: goto L_088070C8;
    case 777u: goto L_088070D0;
    case 778u: goto L_088070F4;
    case 779u: goto L_08807104;
    case 780u: goto L_0880711C;
    case 781u: goto L_08807124;
    case 782u: goto L_08807130;
    case 783u: goto L_08807138;
    case 784u: goto L_08807140;
    case 785u: goto L_08807148;
    case 786u: goto L_08807154;
    case 787u: goto L_0880715C;
    case 788u: goto L_08807164;
    case 789u: goto L_08807174;
    case 790u: goto L_08807188;
    case 791u: goto L_08807198;
    case 792u: goto L_088071A4;
    case 793u: goto L_088071C4;
    case 794u: goto L_08807210;
    case 795u: goto L_08807224;
    case 796u: goto L_0880722C;
    case 797u: goto L_0880723C;
    case 798u: goto L_0880724C;
    case 799u: goto L_08807260;
    case 800u: goto L_08807274;
    case 801u: goto L_08807278;
    case 802u: goto L_088072A4;
    case 803u: goto L_088072F4;
    case 804u: goto L_0880730C;
    case 805u: goto L_0880732C;
    case 806u: goto L_08807340;
    case 807u: goto L_08807354;
    case 808u: goto L_08807370;
    case 809u: goto L_0880738C;
    case 810u: goto L_088073AC;
    case 811u: goto L_088073C4;
    case 812u: goto L_088073D8;
    case 813u: goto L_088073F0;
    case 814u: goto L_08807404;
    case 815u: goto L_08807424;
    case 816u: goto L_0880743C;
    case 817u: goto L_08807450;
    case 818u: goto L_08807468;
    case 819u: goto L_0880747C;
    case 820u: goto L_08807494;
    case 821u: goto L_088074A8;
    case 822u: goto L_088074BC;
    case 823u: goto L_088074D8;
    case 824u: goto L_088074F0;
    case 825u: goto L_08807504;
    case 826u: goto L_08807510;
    case 827u: goto L_08807524;
    case 828u: goto L_08807538;
    case 829u: goto L_0880754C;
    case 830u: goto L_08807550;
    case 831u: goto L_08807560;
    case 832u: goto L_08807568;
    case 833u: goto L_0880757C;
    case 834u: goto L_088075AC;
    case 835u: goto L_088075C0;
    case 836u: goto L_088075C8;
    case 837u: goto L_088075D4;
    case 838u: goto L_088075DC;
    case 839u: goto L_088075FC;
    case 840u: goto L_0880761C;
    case 841u: goto L_08807630;
    case 842u: goto L_08807638;
    case 843u: goto L_08807640;
    case 844u: goto L_08807654;
    case 845u: goto L_0880765C;
    case 846u: goto L_0880766C;
    case 847u: goto L_0880768C;
    case 848u: goto L_088076A4;
    case 849u: goto L_088076B8;
    case 850u: goto L_088076C4;
    case 851u: goto L_088076CC;
    case 852u: goto L_088076EC;
    case 853u: goto L_0880770C;
    case 854u: goto L_08807720;
    case 855u: goto L_08807728;
    case 856u: goto L_08807740;
    case 857u: goto L_0880775C;
    case 858u: goto L_08807770;
    case 859u: goto L_08807790;
    case 860u: goto L_088077A4;
    case 861u: goto L_088077B8;
    case 862u: goto L_088077BC;
    case 863u: goto L_088077CC;
    case 864u: goto L_088077E0;
    case 865u: goto L_08807810;
    case 866u: goto L_08807824;
    case 867u: goto L_0880782C;
    case 868u: goto L_08807834;
    case 869u: goto L_08807848;
    case 870u: goto L_0880785C;
    case 871u: goto L_08807864;
    case 872u: goto L_08807878;
    case 873u: goto L_08807894;
    case 874u: goto L_088078A8;
    case 875u: goto L_088078C8;
    case 876u: goto L_088078DC;
    case 877u: goto L_088078E4;
    case 878u: goto L_08807930;
    case 879u: goto L_0880793C;
    case 880u: goto L_08807948;
    case 881u: goto L_08807958;
    case 882u: goto L_08807968;
    case 883u: goto L_08807990;
    case 884u: goto L_088079A4;
    case 885u: goto L_088079A8;
    case 886u: goto L_088079C8;
    case 887u: goto L_088079D8;
    case 888u: goto L_088079FC;
    case 889u: goto L_08807A04;
    case 890u: goto L_08807A28;
    case 891u: goto L_08807A48;
    case 892u: goto L_08807A68;
    case 893u: goto L_08807A7C;
    case 894u: goto L_08807A9C;
    case 895u: goto L_08807AB0;
    case 896u: goto L_08807AD4;
    case 897u: goto L_08807ADC;
    case 898u: goto L_08807AF0;
    case 899u: goto L_08807AF8;
    case 900u: goto L_08807B64;
    case 901u: goto L_08807B74;
    case 902u: goto L_08807B78;
    case 903u: goto L_08807B88;
    case 904u: goto L_08807B90;
    case 905u: goto L_08807B94;
    case 906u: goto L_08807BC8;
    case 907u: goto L_08807BD4;
    case 908u: goto L_08807BDC;
    case 909u: goto L_08807BEC;
    case 910u: goto L_08807BF4;
    case 911u: goto L_08807BFC;
    case 912u: goto L_08807C00;
    case 913u: goto L_08807C08;
    case 914u: goto L_08807C10;
    case 915u: goto L_08807C24;
    case 916u: goto L_08807C38;
    case 917u: goto L_08807C44;
    case 918u: goto L_08807C90;
    case 919u: goto L_08807C98;
    case 920u: goto L_08807CA0;
    case 921u: goto L_08807CA4;
    case 922u: goto L_08807CAC;
    case 923u: goto L_08807CB8;
    case 924u: goto L_08807CC0;
    case 925u: goto L_08807CC8;
    case 926u: goto L_08807CD0;
    case 927u: goto L_08807CD4;
    case 928u: goto L_08807CDC;
    case 929u: goto L_08807CE4;
    case 930u: goto L_08807CE8;
    case 931u: goto L_08807CF0;
    case 932u: goto L_08807CF4;
    case 933u: goto L_08807D04;
    case 934u: goto L_08807D0C;
    case 935u: goto L_08807D18;
    case 936u: goto L_08807D2C;
    case 937u: goto L_08807D38;
    case 938u: goto L_08807D48;
    case 939u: goto L_08807D5C;
    case 940u: goto L_08807D70;
    case 941u: goto L_08807D84;
    case 942u: goto L_08807D94;
    case 943u: goto L_08807DA8;
    case 944u: goto L_08807DB4;
    case 945u: goto L_08807DC4;
    case 946u: goto L_08807DCC;
    case 947u: goto L_08807DD4;
    case 948u: goto L_08807DDC;
    case 949u: goto L_08807DE4;
    case 950u: goto L_08807E14;
    case 951u: goto L_08807E24;
    case 952u: goto L_08807E34;
    case 953u: goto L_08807E44;
    case 954u: goto L_08807E4C;
    case 955u: goto L_08807E50;
    case 956u: goto L_08807E64;
    case 957u: goto L_08807E74;
    case 958u: goto L_08807E7C;
    case 959u: goto L_08807E80;
    case 960u: goto L_08807E88;
    case 961u: goto L_08807E98;
    case 962u: goto L_08807EB0;
    case 963u: goto L_08807EBC;
    case 964u: goto L_08807EF4;
    case 965u: goto L_08807F0C;
    case 966u: goto L_08807F24;
    case 967u: goto L_08807F5C;
    case 968u: goto L_08807F78;
    case 969u: goto L_08807F90;
    case 970u: goto L_08807FB0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08804000:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(2, 1280u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] | 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 0u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08804034u);
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(0));
    ctx.pc = 0x08B0DD14u;
    return;
L_08804034:
    ctx.set_gpr(2, 3u << 16u);
    ctx.set_gpr(31, 0x08804040u);
    ctx.set_gpr(4, ctx.gpr[2] | 774u);
    ctx.pc = 0x08B0DD2Cu;
    return;
L_08804040:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(9, 2226u << 16u);
      if (branch_taken) {
          goto L_08804074;
      }
      goto L_08804048;
    }
L_08804048:
    ctx.set_gpr(31, 0x08804050u);
    // nop
    ctx.pc = 0x08B0DDBCu;
    return;
L_08804050:
    ctx.set_gpr(8, ctx.gpr[2] << 11u);
    ctx.set_gpr(7, ctx.gpr[2] ^ ctx.gpr[8]);
    ctx.set_gpr(31, 0x08804060u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.pc = 0x08B0DD9Cu;
    return;
L_08804060:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[6] ^ ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[5] ^ ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(9, 2226u << 16u);
    goto L_08804074;
L_08804074:
    ctx.set_gpr(3, ctx.gpr[9] + static_cast<std::uint32_t>(15900));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08804108;
      }
      goto L_08804080;
    }
L_08804080:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(11, ctx.gpr[3] + static_cast<std::uint32_t>(15916));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08804094;
      }
      goto L_08804090;
    }
L_08804090:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(15916)));
    goto L_08804094;
L_08804094:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(12, ctx.gpr[3] + static_cast<std::uint32_t>(15912));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(7, 4u << 16u);
      if (branch_taken) {
          goto L_088040AC;
      }
      goto L_088040A4;
    }
L_088040A4:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(15912)));
    ctx.set_gpr(7, ctx.gpr[13] << 10u);
    goto L_088040AC;
L_088040AC:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(14, ctx.gpr[5] + static_cast<std::uint32_t>(15920));
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(8, 32768u << 16u);
      if (branch_taken) {
          goto L_088040C8;
      }
      goto L_088040BC;
    }
L_088040BC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15920)));
    ctx.set_gpr(15, 32768u << 16u);
    ctx.set_gpr(8, ctx.gpr[16] | ctx.gpr[15]);
    goto L_088040C8;
L_088040C8:
    ctx.set_gpr(17, 2176u << 16u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(16660));
    ctx.set_gpr(31, 0x088040D8u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.pc = 0x08B0DDE4u;
    return;
L_088040D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088040E8u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.pc = 0x08B0DD7Cu;
    return;
L_088040E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804108:
    ctx.set_gpr(10, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[10] + static_cast<std::uint32_t>(-3720));
    goto L_08804080;
L_08804114:
    ctx.set_gpr(3, 2233u << 16u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1008));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(8976));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(996), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(984), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(992), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(980), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(976), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08804158;
      }
      goto L_0880414C;
    }
L_0880414C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8976)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08804164;
      }
      goto L_08804158;
    }
L_08804158:
    ctx.set_gpr(31, 0x08804160u);
    ctx.set_gpr(4, 0u + 0u);
    goto L_08804664;
L_08804160:
    ctx.set_gpr(20, 0u + 0u);
    goto L_08804164;
L_08804164:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_088041A4;
      }
      goto L_0880416C;
    }
L_0880416C:
    ctx.set_gpr(17, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08804174;
L_08804174:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08804180u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08804180u) goto L_08804180;
    return;
L_08804180:
    ctx.set_gpr(6, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[18]);
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[20]) < 20 ? 1u : 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088041A4;
      }
      goto L_0880419C;
    }
L_0880419C:
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
        goto L_08804174;
    }
    goto L_088041A4;
L_088041A4:
    ctx.set_gpr(9, ctx.gpr[20] << 2u);
    ctx.set_gpr(7, 2177u << 16u);
    ctx.set_gpr(8, ctx.gpr[9] + ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[7] + static_cast<std::uint32_t>(13048));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08804240;
      }
      goto L_088041BC;
    }
L_088041BC:
    ctx.set_gpr(31, 0x088041C4u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 786u, 0x088132F8u>(ctx, &aot_mem) && ctx.pc == 0x088041C4u) goto L_088041C4;
    return;
L_088041C4:
    ctx.set_gpr(10, 2176u << 16u);
    ctx.set_gpr(31, 0x088041D0u);
    ctx.set_gpr(4, ctx.gpr[10] + static_cast<std::uint32_t>(16384));
    ctx.pc = 0x08B0DCCCu;
    return;
L_088041D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088041DCu);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 760u, 0x08813114u>(ctx, &aot_mem) && ctx.pc == 0x088041DCu) goto L_088041DC;
    return;
L_088041DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08804210;
      }
      goto L_088041E4;
    }
L_088041E4:
    rt.memory().aot_store32(ctx.gpr[26] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(21, 2180u << 16u);
    ctx.set_gpr(31, 0x088041F4u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(-13500));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 672u, 0x0880F1B4u>(ctx, &aot_mem) && ctx.pc == 0x088041F4u) goto L_088041F4;
    return;
L_088041F4:
    ctx.set_gpr(31, 0x088041FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 85u, 0x0883CB3Cu>(ctx, &aot_mem) && ctx.pc == 0x088041FCu) goto L_088041FC;
    return;
L_088041FC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08804208u);
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 110u, 0x0883CC98u>(ctx, &aot_mem) && ctx.pc == 0x08804208u) goto L_08804208;
    return;
L_08804208:
    ctx.set_gpr(31, 0x08804210u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 215u, 0x08810BD8u>(ctx, &aot_mem) && ctx.pc == 0x08804210u) goto L_08804210;
    return;
L_08804210:
    ctx.set_gpr(31, 0x08804218u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0DE84u;
    return;
L_08804218:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(996)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(988)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(980)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(976)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804240:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(616));
    ctx.set_gpr(12, ctx.gpr[21] + static_cast<std::uint32_t>(708));
    ctx.set_gpr(11, ctx.gpr[21] + static_cast<std::uint32_t>(800));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    ctx.set_gpr(2, ctx.gpr[21] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), 0u);
    goto L_08804268;
L_08804268:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08804268;
      }
      goto L_08804278;
    }
L_08804278:
    ctx.set_gpr(14, 2225u << 16u);
    ctx.set_gpr(13, ctx.gpr[14] + static_cast<std::uint32_t>(-3708));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[13]);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    goto L_088042BC;
L_088042BC:
    ctx.set_gpr(16, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(15, ctx.gpr[5] < static_cast<std::uint32_t>(36) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] != 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088042BC;
      }
      goto L_088042D0;
    }
L_088042D0:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(0));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13070));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-21555));
    ctx.set_gpr(25, 0u + static_cast<std::uint32_t>(4660));
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(-6547));
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(-8468));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(11));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(168), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(172), ctx.gpr[9]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(276));
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(ctx.gpr[2]));
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(178), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(180), static_cast<std::uint16_t>(ctx.gpr[25]));
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(182), static_cast<std::uint16_t>(ctx.gpr[24]));
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(184), static_cast<std::uint16_t>(ctx.gpr[19]));
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(186), static_cast<std::uint16_t>(ctx.gpr[18]));
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(188), static_cast<std::uint16_t>(ctx.gpr[17]));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(160), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(192), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(200), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(204), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(208), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(212), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(252), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(256), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(260), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(264), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(268), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(272), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(276), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(280), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(284), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(288), 0u);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(248), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(328), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(332), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(336), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(340), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(596), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(468), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(600), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(604), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(608), 0u);
    ctx.set_gpr(31, 0x0880439Cu);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(612), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0880439Cu) goto L_0880439C;
    return;
L_0880439C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(892), 0u);
    goto L_088041E4;
L_088043A4:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-3652));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
      if (branch_taken) {
          goto L_088043C4;
      }
      goto L_088043B8;
    }
L_088043B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-3652)));
    jump_target = ctx.gpr[4];
    ctx.set_gpr(31, 0x088043C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088043C4u) goto L_088043C4;
    return;
L_088043C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880446C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0880458C;
      }
      goto L_08804490;
    }
L_08804490:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08804574;
      }
      goto L_0880449C;
    }
L_0880449C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08804564;
      }
      goto L_088044A4;
    }
L_088044A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08804504;
      }
      goto L_088044AC;
    }
L_088044AC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088044D0;
      }
      goto L_088044B8;
    }
L_088044B8:
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08804554;
      }
      goto L_088044C4;
    }
L_088044C4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[8];
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088044D0;
      }
      goto L_088044CC;
    }
L_088044CC:
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_088044D0;
L_088044D0:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[9];
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08804544;
      }
      goto L_088044DC;
    }
L_088044DC:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0880452C;
      }
      goto L_088044E4;
    }
L_088044E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0880451C;
      }
      goto L_088044EC;
    }
L_088044EC:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    goto L_088044F0;
L_088044F0:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_088044F4;
L_088044F4:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 31u));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08804504u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0DC7Cu;
    return;
L_08804504:
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
L_0880451C:
    ctx.set_gpr(31, 0x08804524u);
    // nop
    ctx.pc = 0x08B0DCFCu;
    return;
L_08804524:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_088044F4;
L_0880452C:
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
        goto L_088044F0;
    }
    goto L_08804534;
L_08804534:
    ctx.set_gpr(31, 0x0880453Cu);
    // nop
    ctx.pc = 0x08B0DCECu;
    return;
L_0880453C:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_088044F4;
L_08804544:
    ctx.set_gpr(31, 0x0880454Cu);
    // nop
    ctx.pc = 0x08B0DCF4u;
    return;
L_0880454C:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_088044F4;
L_08804554:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_088044D0;
      }
      goto L_0880455C;
    }
L_0880455C:
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_088044D0;
L_08804564:
    ctx.set_gpr(31, 0x0880456Cu);
    // nop
    ctx.pc = 0x08B0DCFCu;
    return;
L_0880456C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088044A4;
L_08804574:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088044A4;
      }
      goto L_0880457C;
    }
L_0880457C:
    ctx.set_gpr(31, 0x08804584u);
    // nop
    ctx.pc = 0x08B0DCECu;
    return;
L_08804584:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088044A4;
L_0880458C:
    ctx.set_gpr(31, 0x08804594u);
    // nop
    ctx.pc = 0x08B0DCF4u;
    return;
L_08804594:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088044A4;
L_0880459C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 2177u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(12324));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08804638;
      }
      goto L_088045BC;
    }
L_088045BC:
    ctx.set_gpr(31, 0x088045C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 743u, 0x08813024u>(ctx, &aot_mem) && ctx.pc == 0x088045C4u) goto L_088045C4;
    return;
L_088045C4:
    ctx.set_gpr(31, 0x088045CCu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x088045CCu) goto L_088045CC;
    return;
L_088045CC:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(-3704));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-3696));
      if (branch_taken) {
          goto L_088045F0;
      }
      goto L_088045E0;
    }
L_088045E0:
    ctx.set_gpr(31, 0x088045E8u);
    // nop
    ctx.pc = 0x08B0DD04u;
    return;
L_088045E8:
    ctx.set_gpr(31, 0x088045F0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0DE84u;
    return;
L_088045F0:
    ctx.set_gpr(31, 0x088045F8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 300u, 0x088155ACu>(ctx, &aot_mem) && ctx.pc == 0x088045F8u) goto L_088045F8;
    return;
L_088045F8:
    ctx.set_gpr(31, 0x08804600u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 778u, 0x08813264u>(ctx, &aot_mem) && ctx.pc == 0x08804600u) goto L_08804600;
    return;
L_08804600:
    ctx.set_gpr(31, 0x08804608u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.pc = 0x08B0DCD4u;
    return;
L_08804608:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08804638;
      }
      goto L_08804620;
    }
L_08804620:
    ctx.set_gpr(31, 0x08804628u);
    // nop
    ctx.pc = 0x08B0DCE4u;
    return;
L_08804628:
    ctx.set_gpr(31, 0x08804630u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = 0x08B0DCC4u;
    return;
L_08804630:
    ctx.set_gpr(31, 0x08804638u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0DE84u;
    return;
L_08804638:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08804650u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = 0x08B0DCDCu;
    return;
L_08804650:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804664:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2233u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8500)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088046FC;
      }
      goto L_08804688;
    }
L_08804688:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(15896));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(17, 1u << 16u);
      if (branch_taken) {
          goto L_088046B0;
      }
      goto L_08804698;
    }
L_08804698:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(15896)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880473C;
      }
      goto L_088046A4;
    }
L_088046A4:
    ctx.set_gpr(17, ctx.gpr[7] << 10u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8500)));
      if (branch_taken) {
          goto L_08804700;
      }
      goto L_088046B0;
    }
L_088046B0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-3648));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088046CCu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4096));
    ctx.pc = 0x08B0DD0Cu;
    return;
L_088046CC:
    ctx.set_gpr(3, 2233u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8508), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088046FC;
      }
      goto L_088046DC;
    }
L_088046DC:
    ctx.set_gpr(31, 0x088046E4u);
    // nop
    ctx.pc = 0x08B0DD1Cu;
    return;
L_088046E4:
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(6, 2233u << 16u);
    ctx.set_gpr(5, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8504), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8496), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8500), ctx.gpr[2]);
    goto L_088046FC;
L_088046FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8500)));
    goto L_08804700;
L_08804700:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_0880473C;
    }
    goto L_08804708;
L_08804708:
    ctx.set_gpr(6, 2233u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8496)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[18]);
    ctx.set_gpr(8, ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880473C;
      }
      goto L_08804720;
    }
L_08804720:
    ctx.set_gpr(11, 2233u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8504)));
    ctx.set_gpr(9, ctx.gpr[10] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08804740;
      }
      goto L_08804734;
    }
L_08804734:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8496), ctx.gpr[4]);
    goto L_0880473C;
L_0880473C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08804740;
L_08804740:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804754:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_088047E8;
      }
      goto L_08804774;
    }
L_08804774:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088047D0;
      }
      goto L_08804780;
    }
L_08804780:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088047C0;
      }
      goto L_08804788;
    }
L_08804788:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    goto L_0880478C;
L_0880478C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_088047A8;
      }
      goto L_08804794;
    }
L_08804794:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088047A4u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0DC1Cu;
    return;
L_088047A4:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_088047A8;
L_088047A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088047C0:
    ctx.set_gpr(31, 0x088047C8u);
    // nop
    ctx.pc = 0x08B0DCFCu;
    return;
L_088047C8:
    // nop
    goto L_0880478C;
L_088047D0:
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
        goto L_0880478C;
    }
    goto L_088047D8;
L_088047D8:
    ctx.set_gpr(31, 0x088047E0u);
    // nop
    ctx.pc = 0x08B0DCECu;
    return;
L_088047E0:
    // nop
    goto L_0880478C;
L_088047E8:
    ctx.set_gpr(31, 0x088047F0u);
    // nop
    ctx.pc = 0x08B0DCF4u;
    return;
L_088047F0:
    // nop
    goto L_0880478C;
L_088047F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0880488C;
      }
      goto L_08804818;
    }
L_08804818:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08804874;
      }
      goto L_08804824;
    }
L_08804824:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08804864;
      }
      goto L_0880482C;
    }
L_0880482C:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    goto L_08804830;
L_08804830:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_0880484C;
      }
      goto L_08804838;
    }
L_08804838:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08804848u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0DC04u;
    return;
L_08804848:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0880484C;
L_0880484C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804864:
    ctx.set_gpr(31, 0x0880486Cu);
    // nop
    ctx.pc = 0x08B0DCFCu;
    return;
L_0880486C:
    // nop
    goto L_08804830;
L_08804874:
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
        goto L_08804830;
    }
    goto L_0880487C;
L_0880487C:
    ctx.set_gpr(31, 0x08804884u);
    // nop
    ctx.pc = 0x08B0DCECu;
    return;
L_08804884:
    // nop
    goto L_08804830;
L_0880488C:
    ctx.set_gpr(31, 0x08804894u);
    // nop
    ctx.pc = 0x08B0DCF4u;
    return;
L_08804894:
    // nop
    goto L_08804830;
L_0880489C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08804910;
      }
      goto L_088048AC;
    }
L_088048AC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088048F8;
      }
      goto L_088048B8;
    }
L_088048B8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088048E8;
      }
      goto L_088048C0;
    }
L_088048C0:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    goto L_088048C4;
L_088048C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_088048D8;
      }
      goto L_088048CC;
    }
L_088048CC:
    ctx.set_gpr(31, 0x088048D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = 0x08B0DC34u;
    return;
L_088048D4:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_088048D8;
L_088048D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088048E8:
    ctx.set_gpr(31, 0x088048F0u);
    // nop
    ctx.pc = 0x08B0DCFCu;
    return;
L_088048F0:
    // nop
    goto L_088048C4;
L_088048F8:
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
        goto L_088048C4;
    }
    goto L_08804900;
L_08804900:
    ctx.set_gpr(31, 0x08804908u);
    // nop
    ctx.pc = 0x08B0DCECu;
    return;
L_08804908:
    // nop
    goto L_088048C4;
L_08804910:
    ctx.set_gpr(31, 0x08804918u);
    // nop
    ctx.pc = 0x08B0DCF4u;
    return;
L_08804918:
    // nop
    goto L_088048C4;
L_08804920:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804930:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804974:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880497C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880499C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2233u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8508)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_088049C8;
      }
      goto L_088049B8;
    }
L_088049B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088049C8:
    ctx.set_gpr(31, 0x088049D0u);
    // nop
    ctx.pc = 0x08B0DD24u;
    return;
L_088049D0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8508), 0u);
    goto L_088049B8;
L_08804A4C:
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
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08804AFC;
      }
      goto L_08804A84;
    }
L_08804A84:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.set_gpr(22, ctx.gpr[4] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_08804AC8;
      }
      goto L_08804A94;
    }
L_08804A94:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(3, ctx.lo);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(18, ctx.gpr[4] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_08804AC8;
      }
      goto L_08804AA8;
    }
L_08804AA8:
    ctx.set_gpr(18, ctx.gpr[18] - ctx.gpr[17]);
    goto L_08804AAC;
L_08804AAC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    jump_target = ctx.gpr[21];
    ctx.set_gpr(31, 0x08804AB8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08804AB8u) goto L_08804AB8;
    return;
L_08804AB8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(18, ctx.gpr[18] - ctx.gpr[17]);
        goto L_08804AAC;
    }
    goto L_08804AC8;
L_08804AC8:
    if (ctx.gpr[20] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08804B00;
    }
    goto L_08804AD0;
L_08804AD0:
    if (ctx.gpr[23] == 0u) {
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
        goto L_08804AF4;
    }
    goto L_08804AD8;
L_08804AD8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(2, ctx.lo);
    jump_target = ctx.gpr[20];
    ctx.set_gpr(31, 0x08804AECu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08804AECu) goto L_08804AEC;
    return;
L_08804AEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08804AFC;
      }
      goto L_08804AF4;
    }
L_08804AF4:
    jump_target = ctx.gpr[20];
    ctx.set_gpr(31, 0x08804AFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08804AFCu) goto L_08804AFC;
    return;
L_08804AFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08804B00;
L_08804B00:
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
L_08804B28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, ctx.lo);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_08804B78;
      }
      goto L_08804B5C;
    }
L_08804B5C:
    ctx.set_gpr(16, ctx.gpr[16] - ctx.gpr[18]);
    goto L_08804B60;
L_08804B60:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[19];
    ctx.set_gpr(31, 0x08804B6Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08804B6Cu) goto L_08804B6C;
    return;
L_08804B6C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(16, ctx.gpr[16] - ctx.gpr[18]);
        goto L_08804B60;
    }
    goto L_08804B78;
L_08804B78:
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
L_08804B94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[17] ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
      if (branch_taken) {
          goto L_08804C00;
      }
      goto L_08804BDC;
    }
L_08804BDC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[19];
    ctx.set_gpr(31, 0x08804BE8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08804BE8u) goto L_08804BE8;
    return;
L_08804BE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[18]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08804BDC;
      }
      goto L_08804C00;
    }
L_08804C00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08804C60;
    }
    goto L_08804C10;
L_08804C10:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804C5C;
      }
      goto L_08804C1C;
    }
L_08804C1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08804C5C;
      }
      goto L_08804C34;
    }
L_08804C34:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(16, ctx.gpr[16] - ctx.gpr[3]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08804C4Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08804C4Cu) goto L_08804C4C;
    return;
L_08804C4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08804C34;
      }
      goto L_08804C5C;
    }
L_08804C5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08804C60;
L_08804C60:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804C78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08804D60;
      }
      goto L_08804CA8;
    }
L_08804CA8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08804D60;
      }
      goto L_08804CBC;
    }
L_08804CBC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08804D04;
      }
      goto L_08804CE0;
    }
L_08804CE0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[20];
    ctx.set_gpr(31, 0x08804CECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08804CECu) goto L_08804CEC;
    return;
L_08804CEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08804CE0;
      }
      goto L_08804D04;
    }
L_08804D04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08804D64;
    }
    goto L_08804D14;
L_08804D14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804D60;
      }
      goto L_08804D20;
    }
L_08804D20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_08804D60;
      }
      goto L_08804D38;
    }
L_08804D38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(16, ctx.gpr[16] - ctx.gpr[3]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08804D50u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08804D50u) goto L_08804D50;
    return;
L_08804D50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08804D38;
      }
      goto L_08804D60;
    }
L_08804D60:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08804D64;
L_08804D64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804D84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[30]);
    ctx.set_gpr(31, 0x08804D98u);
    ctx.set_gpr(30, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 489u, 0x08812048u>(ctx, &aot_mem) && ctx.pc == 0x08804D98u) goto L_08804D98;
    return;
L_08804D98:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(29, ctx.gpr[30] + 0u);
      if (branch_taken) {
          goto L_08804DB0;
      }
      goto L_08804DA0;
    }
L_08804DA0:
    ctx.set_gpr(31, 0x08804DA8u);
    ctx.set_gpr(4, ctx.gpr[30] + static_cast<std::uint32_t>(24));
    goto L_088059C8;
L_08804DA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08804DA8;
      }
      goto L_08804DB0;
    }
L_08804DB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804DC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(30, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08804DDC;
      }
      goto L_08804DD4;
    }
L_08804DD4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08804FBC;
      }
      goto L_08804DDC;
    }
L_08804DDC:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804F8C;
      }
      goto L_08804DF0;
    }
L_08804DF0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08804FBC;
      }
      goto L_08804DFC;
    }
L_08804DFC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[3] + 0u);
    goto L_08804E08;
L_08804E08:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08804E20;
      }
      goto L_08804E18;
    }
L_08804E18:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_08804E2C;
      }
      goto L_08804E20;
    }
L_08804E20:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08804E08;
      }
      goto L_08804E28;
    }
L_08804E28:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08804E2C;
L_08804E2C:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
        goto L_08804E40;
    }
    goto L_08804E34;
L_08804E34:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(29, ctx.gpr[30] + 0u);
      if (branch_taken) {
          goto L_08804FC0;
      }
      goto L_08804E3C;
    }
L_08804E3C:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    goto L_08804E40;
L_08804E40:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804F8C;
      }
      goto L_08804E48;
    }
L_08804E48:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804F8C;
      }
      goto L_08804E54;
    }
L_08804E54:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, 32768u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    goto L_08804E60;
L_08804E60:
    ctx.set_gpr(4, ctx.gpr[10] & ctx.gpr[11]);
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_08804F44;
    }
    goto L_08804E6C;
L_08804E6C:
    ctx.set_gpr(4, ctx.gpr[10] << 1u);
    ctx.set_gpr(4, ctx.gpr[4] >> 1u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08804F2C;
      }
      goto L_08804E80;
    }
L_08804E80:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, ctx.gpr[3] + 0u);
    goto L_08804E88;
L_08804E88:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08804EA0;
      }
      goto L_08804E98;
    }
L_08804E98:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_08804EAC;
      }
      goto L_08804EA0;
    }
L_08804EA0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08804E88;
      }
      goto L_08804EA8;
    }
L_08804EA8:
    ctx.set_gpr(4, ctx.gpr[9] + 0u);
    goto L_08804EAC;
L_08804EAC:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(4, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
        goto L_08804F30;
    }
    goto L_08804EB4;
L_08804EB4:
    ctx.set_gpr(14, ctx.gpr[12] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) <= 0;
    ctx.set_gpr(13, 0u + 0u);
      if (branch_taken) {
          goto L_08804F8C;
      }
      goto L_08804EC0;
    }
L_08804EC0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08804EC4;
L_08804EC4:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[9]);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
        goto L_08804F18;
    }
    goto L_08804ED4;
L_08804ED4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_08804EE0;
L_08804EE0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08804EF8;
      }
      goto L_08804EF0;
    }
L_08804EF0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08804F04;
      }
      goto L_08804EF8;
    }
L_08804EF8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08804EE0;
      }
      goto L_08804F00;
    }
L_08804F00:
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    goto L_08804F04;
L_08804F04:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804F14;
      }
      goto L_08804F0C;
    }
L_08804F0C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08804FBC;
      }
      goto L_08804F14;
    }
L_08804F14:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_08804F18;
L_08804F18:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08804EC4;
      }
      goto L_08804F24;
    }
L_08804F24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08804F8C;
      }
      goto L_08804F2C;
    }
L_08804F2C:
    ctx.set_gpr(4, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    goto L_08804F30;
L_08804F30:
    ctx.set_gpr(4, ctx.gpr[4] << 3u);
    ctx.set_gpr(6, ctx.gpr[12] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(12, ctx.gpr[6] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08804F7C;
      }
      goto L_08804F40;
    }
L_08804F40:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08804F44;
L_08804F44:
    ctx.set_gpr(13, ctx.gpr[3] + 0u);
    goto L_08804F48;
L_08804F48:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08804F60;
      }
      goto L_08804F58;
    }
L_08804F58:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_08804F6C;
      }
      goto L_08804F60;
    }
L_08804F60:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08804F48;
      }
      goto L_08804F68;
    }
L_08804F68:
    ctx.set_gpr(4, ctx.gpr[9] + 0u);
    goto L_08804F6C;
L_08804F6C:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(8));
        goto L_08804F80;
    }
    goto L_08804F74;
L_08804F74:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08804FBC;
      }
      goto L_08804F7C;
    }
L_08804F7C:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(8));
    goto L_08804F80;
L_08804F80:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
        goto L_08804E60;
    }
    goto L_08804F8C;
L_08804F8C:
    if (ctx.gpr[8] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08804FBC;
    }
    goto L_08804F94;
L_08804F94:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30952));
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(6, 2176u << 16u);
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1768));
    ctx.set_gpr(5, ctx.gpr[30] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08804FB8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20504));
    goto L_088069E8;
L_08804FB8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08804FBC;
L_08804FBC:
    ctx.set_gpr(29, ctx.gpr[30] + 0u);
    goto L_08804FC0;
L_08804FC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804FD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08805008;
    }
    goto L_08804FE8;
L_08804FE8:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(30968));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08805004;
      }
      goto L_08804FFC;
    }
L_08804FFC:
    ctx.set_gpr(31, 0x08805004u);
    // nop
    goto L_08804D84;
L_08805004:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08805008;
L_08805008:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805018:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08805064;
    }
    goto L_08805030;
L_08805030:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30952));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0880504C;
      }
      goto L_08805040;
    }
L_08805040:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30968));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0880504C;
L_0880504C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08805060;
      }
      goto L_08805058;
    }
L_08805058:
    ctx.set_gpr(31, 0x08805060u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08804D84;
L_08805060:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08805064;
L_08805064:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805074:
    ctx.set_gpr(2, 2225u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3608));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805080:
    ctx.set_gpr(2, 2225u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3596));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880508C:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_088050A0;
      }
      goto L_08805098;
    }
L_08805098:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088052A4;
      }
      goto L_088050A0;
    }
L_088050A0:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(80));
    if (ctx.gpr[7] != ctx.gpr[3]) {
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
        goto L_0880511C;
    }
    goto L_088050B0;
L_088050B0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(67));
    if (ctx.gpr[7] != ctx.gpr[3]) {
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
        goto L_088050CC;
    }
    goto L_088050C4;
L_088050C4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    goto L_088050CC;
L_088050CC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(86));
    if (ctx.gpr[7] != ctx.gpr[3]) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
        goto L_088050E0;
    }
    goto L_088050D8;
L_088050D8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    goto L_088050E0;
L_088050E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(118));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
        goto L_08805118;
    }
    goto L_088050EC;
L_088050EC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(80));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_088052A4;
    }
    goto L_088050FC;
L_088050FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(42));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08805114;
      }
      goto L_08805108;
    }
L_08805108:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088052A4;
      }
      goto L_08805114;
    }
L_08805114:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    goto L_08805118;
L_08805118:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_0880511C;
L_0880511C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(33));
    if (ctx.gpr[7] == ctx.gpr[3]) {
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
        goto L_0880514C;
    }
    goto L_08805128;
L_08805128:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(42));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08805148;
      }
      goto L_08805134;
    }
L_08805134:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(86));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08805250;
      }
      goto L_08805148;
    }
L_08805148:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_0880514C;
L_0880514C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08805164;
      }
      goto L_0880515C;
    }
L_0880515C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_088052A4;
      }
      goto L_08805164;
    }
L_08805164:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[3];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088051C0;
      }
      goto L_08805174;
    }
L_08805174:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(33));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08805164;
      }
      goto L_08805180;
    }
L_08805180:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[7];
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_088051B4;
      }
      goto L_0880518C;
    }
L_0880518C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    goto L_08805190;
L_08805190:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[2] != ctx.gpr[7]) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
        goto L_08805190;
    }
    goto L_088051B4;
L_088051B4:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088052A4;
      }
      goto L_088051C0;
    }
L_088051C0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(33));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088051C0;
      }
      goto L_088051D0;
    }
L_088051D0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088051D0;
      }
      goto L_088051DC;
    }
L_088051DC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_08805164;
    }
    goto L_088051E8;
L_088051E8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_088052A4;
      }
      goto L_088051F0;
    }
L_088051F0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[9];
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08805210;
      }
      goto L_088051FC;
    }
L_088051FC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[3] != ctx.gpr[9]) {
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_08805210;
    }
    goto L_08805208;
L_08805208:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08805210;
L_08805210:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[8] != ctx.gpr[9]) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
        goto L_08805224;
    }
    goto L_0880521C;
L_0880521C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_088052A4;
      }
      goto L_08805224;
    }
L_08805224:
    if (ctx.gpr[3] != ctx.gpr[7]) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
        goto L_08805240;
    }
    goto L_0880522C;
L_0880522C:
    if (ctx.gpr[8] != ctx.gpr[7]) {
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_0880523C;
    }
    goto L_08805234;
L_08805234:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_0880523C;
L_0880523C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_08805240;
L_08805240:
    if (ctx.gpr[3] != ctx.gpr[7]) {
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
        goto L_08805254;
    }
    goto L_08805248;
L_08805248:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_088052A4;
      }
      goto L_08805250;
    }
L_08805250:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_08805254;
L_08805254:
    if (ctx.gpr[8] == ctx.gpr[6]) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
        goto L_08805268;
    }
    goto L_0880525C;
L_0880525C:
    if (ctx.gpr[8] != ctx.gpr[5]) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
        goto L_08805274;
    }
    goto L_08805264;
L_08805264:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    goto L_08805268;
L_08805268:
    if (ctx.gpr[8] == ctx.gpr[3]) {
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_088051F0;
    }
    goto L_08805270;
L_08805270:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    goto L_08805274;
L_08805274:
    if (ctx.gpr[8] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_088052A4;
    }
    goto L_0880527C;
L_0880527C:
    if (ctx.gpr[8] != 0u) {
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_0880528C;
    }
    goto L_08805284;
L_08805284:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088052A4;
      }
      goto L_0880528C;
    }
L_0880528C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0880527C;
      }
      goto L_088052A0;
    }
L_088052A0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088052A4;
L_088052A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088052AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1840)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088052C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088052C4u) goto L_088052C4;
    return;
L_088052C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088052D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1836)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088052E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088052E8u) goto L_088052E8;
    return;
L_088052E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088052F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1836)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0880530Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880530Cu) goto L_0880530C;
    return;
L_0880530C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805318:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08805328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 669u, 0x0880F190u>(ctx, &aot_mem) && ctx.pc == 0x08805328u) goto L_08805328;
    return;
L_08805328:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805334:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8512)));
    ctx.set_gpr(3, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8512), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805358:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088053A4;
      }
      goto L_08805388;
    }
L_08805388:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0880538C;
L_0880538C:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08805394u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08805394u) goto L_08805394;
    return;
L_08805394:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[19] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0880538C;
    }
    goto L_088053A4;
L_088053A4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088053B0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08806B50;
L_088053B0:
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
L_088053CC:
    ctx.set_gpr(1, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[24]) < 0;
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[1]);
      if (branch_taken) {
          goto L_088053F8;
      }
      goto L_088053E0;
    }
L_088053E0:
    ctx.set_gpr(25, ctx.gpr[4] + ctx.gpr[25]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    // nop
    ctx.set_gpr(25, ctx.gpr[25] + ctx.gpr[24]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    // nop
    goto L_088053F8;
L_088053F8:
    jump_target = ctx.gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805400:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880541C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
        goto L_0880543C;
    }
    goto L_0880542C;
L_0880542C:
    ctx.set_gpr(2, ctx.gpr[3] >> 1u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088054B0;
      }
      goto L_0880543C;
    }
L_0880543C:
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
        goto L_08805460;
    }
    goto L_08805448;
L_08805448:
    ctx.set_gpr(2, ctx.gpr[3] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088054B0;
      }
      goto L_08805460;
    }
L_08805460:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[3] >> 3u);
        goto L_0880548C;
    }
    goto L_0880546C;
L_0880546C:
    ctx.set_gpr(2, ctx.gpr[3] >> 3u);
    ctx.set_gpr(3, ctx.gpr[2] << 16u);
    ctx.set_gpr(2, ctx.gpr[7] << 8u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088054B0;
      }
      goto L_0880548C;
    }
L_0880548C:
    ctx.set_gpr(3, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[7] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] << 8u);
    ctx.set_gpr(6, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_088054B0;
L_088054B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088054B8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
        goto L_088054D8;
    }
    goto L_088054C8;
L_088054C8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880554C;
      }
      goto L_088054D8;
    }
L_088054D8:
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
        goto L_088054FC;
    }
    goto L_088054E4;
L_088054E4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0880554C;
      }
      goto L_088054FC;
    }
L_088054FC:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
        goto L_08805528;
    }
    goto L_08805508;
L_08805508:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
    ctx.set_gpr(3, ctx.gpr[2] << 16u);
    ctx.set_gpr(2, ctx.gpr[7] << 8u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0880554C;
      }
      goto L_08805528;
    }
L_08805528:
    ctx.set_gpr(3, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[7] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] << 8u);
    ctx.set_gpr(6, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0880554C;
L_0880554C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805554:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08805584;
    }
    goto L_08805568;
L_08805568:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08805580;
      }
      goto L_08805574;
    }
L_08805574:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08805580u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08805580u) goto L_08805580;
    return;
L_08805580:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08805584;
L_08805584:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880558C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088055ACu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_088067E4;
L_088055AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_088055C4;
    }
    goto L_088055B8;
L_088055B8:
    ctx.set_gpr(31, 0x088055C0u);
    // nop
    goto L_088052D0;
L_088055C0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088055C4;
L_088055C4:
    ctx.set_gpr(31, 0x088055CCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_08806BB0;
L_088055CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
        goto L_088055E8;
    }
    goto L_088055D8;
L_088055D8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088055E4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_08805BE8;
L_088055E4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_088055E8;
L_088055E8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088055F8u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_088056F0;
L_088055F8:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] << 8u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08805638;
      }
      goto L_08805630;
    }
L_08805630:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08805640;
      }
      goto L_08805638;
    }
L_08805638:
    ctx.set_gpr(2, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    goto L_08805640;
L_08805640:
    ctx.set_gpr(31, 0x08805648u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_0880541C;
L_08805648:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08805654u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_088054B8;
L_08805654:
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08805664u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_08805D3C;
L_08805664:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(42));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_088056BC;
    }
    goto L_088056A0;
L_088056A0:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088056C4;
      }
      goto L_088056BC;
    }
L_088056BC:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_088056C4;
L_088056C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088056DCu);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    goto L_08806984;
L_088056DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088056F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-416));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(35));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    goto L_08805798;
L_08805798:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08805798;
      }
      goto L_088057B8;
    }
L_088057B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_088057CC;
    }
    goto L_088057C4;
L_088057C4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 31u);
    goto L_088057CC;
L_088057CC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    goto L_088057D0;
L_088057D0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880597C;
      }
      goto L_088057E0;
    }
L_088057E0:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3584));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088057FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(4, ctx.gpr[4] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0880583C;
      }
      goto L_08805834;
    }
L_08805834:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08805844;
      }
      goto L_0880583C;
    }
L_0880583C:
    ctx.set_gpr(2, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_08805844;
L_08805844:
    ctx.set_gpr(31, 0x0880584Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    goto L_0880541C;
L_0880584C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08805858u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_088054B8;
L_08805858:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08805868u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    goto L_0880508C;
L_08805868:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_088059A4;
    }
    goto L_08805870;
L_08805870:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08805990;
      }
      goto L_08805878;
    }
L_08805878:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08805888u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_0880541C;
L_08805888:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08805894u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    goto L_0880541C;
L_08805894:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088058A0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_088054B8;
L_088058A0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08805914;
      }
      goto L_088058B8;
    }
L_088058B8:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(31, 0x088058ECu);
    ctx.set_gpr(5, ctx.gpr[2] | ctx.gpr[3]);
    goto L_0880508C;
L_088058EC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_08805904;
    }
    goto L_088058FC;
L_088058FC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08805918;
      }
      goto L_08805904;
    }
L_08805904:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088058B8;
      }
      goto L_08805914;
    }
L_08805914:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08805918;
L_08805918:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880598C;
      }
      goto L_08805920;
    }
L_08805920:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08805934u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08805D3C;
L_08805934:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08805974u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    goto L_08806984;
L_08805974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880598C;
      }
      goto L_0880597C;
    }
L_0880597C:
    ctx.set_gpr(31, 0x08805984u);
    // nop
    goto L_088052D0;
L_08805984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088059A0;
      }
      goto L_0880598C;
    }
L_0880598C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_08805990;
L_08805990:
    ctx.set_gpr(31, 0x08805998u);
    // nop
    goto L_088064EC;
L_08805998:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_088057D0;
      }
      goto L_088059A0;
    }
L_088059A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_088059A4;
L_088059A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088059C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(30, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x088059F0u);
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(76), ctx.gpr[29]);
    goto L_088052AC;
L_088059F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08805B64;
      }
      goto L_088059F8;
    }
L_088059F8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08805A04u);
    ctx.set_gpr(5, ctx.gpr[30] + static_cast<std::uint32_t>(80));
    goto L_0880541C;
L_08805A04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08805A10u);
    ctx.set_gpr(5, ctx.gpr[30] + static_cast<std::uint32_t>(84));
    goto L_0880541C;
L_08805A10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08805A1Cu);
    ctx.set_gpr(5, ctx.gpr[30] + static_cast<std::uint32_t>(88));
    goto L_088054B8;
L_08805A1C:
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08805A94;
      }
      goto L_08805A34;
    }
L_08805A34:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[30] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(5, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(31, 0x08805A6Cu);
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    goto L_0880508C;
L_08805A6C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(80)));
        goto L_08805A84;
    }
    goto L_08805A7C;
L_08805A7C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08805A98;
      }
      goto L_08805A84;
    }
L_08805A84:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08805A34;
      }
      goto L_08805A94;
    }
L_08805A94:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08805A98;
L_08805A98:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(80)));
        goto L_08805AB4;
    }
    goto L_08805AA0;
L_08805AA0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08805AB0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_088069E8;
L_08805AB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(80)));
    goto L_08805AB4;
L_08805AB4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08805B24;
      }
      goto L_08805AC0;
    }
L_08805AC0:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1844));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(5, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[30] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08805AFCu);
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    goto L_0880508C;
L_08805AFC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(80)));
        goto L_08805B14;
    }
    goto L_08805B0C;
L_08805B0C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08805B28;
      }
      goto L_08805B14;
    }
L_08805B14:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08805AC0;
      }
      goto L_08805B24;
    }
L_08805B24:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08805B28;
L_08805B28:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[30] + static_cast<std::uint32_t>(56));
        goto L_08805B58;
    }
    goto L_08805B30;
L_08805B30:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30984));
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(6, 2176u << 16u);
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1868));
    ctx.set_gpr(5, ctx.gpr[30] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08805B54u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(23436));
    goto L_088069E8;
L_08805B54:
    ctx.set_gpr(4, ctx.gpr[30] + static_cast<std::uint32_t>(56));
    goto L_08805B58;
L_08805B58:
    ctx.set_gpr(31, 0x08805B60u);
    // nop
    goto L_08805554;
L_08805B60:
    ctx.set_gpr(29, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(76)));
    goto L_08805B64;
L_08805B64:
    ctx.set_gpr(31, 0x08805B6Cu);
    // nop
    goto L_088052D0;
L_08805B6C:
    ctx.set_gpr(29, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805B8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08805BD8;
    }
    goto L_08805BA4;
L_08805BA4:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30984));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08805BC0;
      }
      goto L_08805BB4;
    }
L_08805BB4:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30968));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08805BC0;
L_08805BC0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08805BD4;
      }
      goto L_08805BCC;
    }
L_08805BCC:
    ctx.set_gpr(31, 0x08805BD4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08804D84;
L_08805BD4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08805BD8;
L_08805BD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805BE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(35));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    goto L_08805C74;
L_08805C74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08805C74;
      }
      goto L_08805C94;
    }
L_08805C94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08805CA8;
    }
    goto L_08805CA0;
L_08805CA0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 31u);
    goto L_08805CA8;
L_08805CA8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    goto L_08805CAC;
L_08805CAC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08805CD8;
      }
      goto L_08805CBC;
    }
L_08805CBC:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3520));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805CD8:
    ctx.set_gpr(31, 0x08805CE0u);
    // nop
    goto L_088052D0;
L_08805CE0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08805CFC;
      }
      goto L_08805CE8;
    }
L_08805CE8:
    ctx.set_gpr(31, 0x08805CF0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_088064EC;
L_08805CF0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08805CAC;
      }
      goto L_08805CF8;
    }
L_08805CF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08805CFC;
L_08805CFC:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08805D08u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_088054B8;
L_08805D08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805D3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-176));
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
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(23, ctx.gpr[6] + 0u);
    goto L_08805D70;
L_08805D70:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08805D74;
L_08805D74:
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08805DC4;
    }
    goto L_08805D7C;
L_08805D7C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08805D88u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08806C4C;
L_08805D88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08805D94u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_088067E4;
L_08805D94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08805DAC;
    }
    goto L_08805DA0;
L_08805DA0:
    ctx.set_gpr(31, 0x08805DA8u);
    // nop
    goto L_088052D0;
L_08805DA8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08805DAC;
L_08805DAC:
    ctx.set_gpr(31, 0x08805DB4u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08806BB0;
L_08805DB4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_08805D74;
    }
    goto L_08805DC0;
L_08805DC0:
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08805DC4;
L_08805DC4:
    ctx.set_gpr(3, ctx.gpr[16] & 31u);
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088064A4;
      }
      goto L_08805DD4;
    }
L_08805DD4:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3456));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805DF0:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08805DFCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    goto L_088054B8;
L_08805DFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088064AC;
      }
      goto L_08805E10;
    }
L_08805E10:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08805E1Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    goto L_088054B8;
L_08805E1C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(7, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08805E5Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08805E5Cu) goto L_08805E5C;
    return;
L_08805E5C:
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088064AC;
      }
      goto L_08805E68;
    }
L_08805E68:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(31, 0x08805E78u);
    ctx.set_gpr(18, ctx.gpr[16] & 64u);
    goto L_088054B8;
L_08805E78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08805E84u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    goto L_088054B8;
L_08805E84:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08805EC8;
      }
      goto L_08805EB4;
    }
L_08805EB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08805ED8;
      }
      goto L_08805EC8;
    }
L_08805EC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    goto L_08805ED8;
L_08805ED8:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
        goto L_088064AC;
    }
    goto L_08805EE0;
L_08805EE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[6];
    ctx.set_gpr(31, 0x08805EF4u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08805EF4u) goto L_08805EF4;
    return;
L_08805EF4:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088064AC;
      }
      goto L_08805F00;
    }
L_08805F00:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(31, 0x08805F10u);
    ctx.set_gpr(18, ctx.gpr[16] & 32u);
    goto L_088054B8;
L_08805F10:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[3] << 24u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(6, ctx.gpr[2] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08805F54;
      }
      goto L_08805F40;
    }
L_08805F40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08805F64;
      }
      goto L_08805F54;
    }
L_08805F54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08805F64;
L_08805F64:
    jump_target = ctx.gpr[6];
    ctx.set_gpr(31, 0x08805F6Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08805F6Cu) goto L_08805F6C;
    return;
L_08805F6C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088064AC;
      }
      goto L_08805F74;
    }
L_08805F74:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08805F80u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    goto L_088054B8;
L_08805F80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08805F8Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    goto L_0880541C;
L_08805F8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08805F98u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    goto L_0880541C;
L_08805F98:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(21, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(22, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.lo);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_08806008;
      }
      goto L_08805FE8;
    }
L_08805FE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    goto L_08805FEC;
L_08805FEC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[2]);
    jump_target = ctx.gpr[21];
    ctx.set_gpr(31, 0x08805FFCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08805FFCu) goto L_08805FFC;
    return;
L_08805FFC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[18] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
        goto L_08805FEC;
    }
    goto L_08806008;
L_08806008:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
      if (branch_taken) {
          goto L_088064AC;
      }
      goto L_08806010;
    }
L_08806010:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x08806020u);
    ctx.set_gpr(18, ctx.gpr[16] & 32u);
    goto L_088054B8;
L_08806020:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880602Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    goto L_088054B8;
L_0880602C:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[3] << 24u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(6, ctx.gpr[2] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08806070;
      }
      goto L_0880605C;
    }
L_0880605C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08806080;
      }
      goto L_08806070;
    }
L_08806070:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08806080;
L_08806080:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(5, 0u + 0u);
    jump_target = ctx.gpr[6];
    ctx.set_gpr(31, 0x08806090u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08806090u) goto L_08806090;
    return;
L_08806090:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088064AC;
      }
      goto L_08806098;
    }
L_08806098:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x088060A8u);
    ctx.set_gpr(18, ctx.gpr[16] & 32u);
    goto L_088054B8;
L_088060A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088060B4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    goto L_088054B8;
L_088060B4:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[3] << 24u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(6, ctx.gpr[2] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_088060F8;
      }
      goto L_088060E4;
    }
L_088060E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08806108;
      }
      goto L_088060F8;
    }
L_088060F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08806108;
L_08806108:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[6];
    ctx.set_gpr(31, 0x08806118u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08806118u) goto L_08806118;
    return;
L_08806118:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088064AC;
      }
      goto L_08806120;
    }
L_08806120:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x08806130u);
    ctx.set_gpr(18, ctx.gpr[16] & 32u);
    goto L_088054B8;
L_08806130:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880613Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    goto L_088054B8;
L_0880613C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806148u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    goto L_088054B8;
L_08806148:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[16] & 64u);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
      if (branch_taken) {
          goto L_08806190;
      }
      goto L_0880617C;
    }
L_0880617C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_088061A0;
      }
      goto L_08806190;
    }
L_08806190:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_088061A0;
L_088061A0:
    if (ctx.gpr[4] == 0u) {
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
        goto L_088064AC;
    }
    goto L_088061A8;
L_088061A8:
    if (ctx.gpr[18] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
        goto L_088061C4;
    }
    goto L_088061B0;
L_088061B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088061D0;
      }
      goto L_088061C4;
    }
L_088061C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_088061D0;
L_088061D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088061E0u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088061E0u) goto L_088061E0;
    return;
L_088061E0:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088064AC;
      }
      goto L_088061EC;
    }
L_088061EC:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x088061FCu);
    ctx.set_gpr(17, ctx.gpr[16] & 32u);
    goto L_088054B8;
L_088061FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806208u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    goto L_088054B8;
L_08806208:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806214u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    goto L_0880541C;
L_08806214:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806220u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    goto L_0880541C;
L_08806220:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(22, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(21, ctx.gpr[3] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_0880626C;
      }
      goto L_08806250;
    }
L_08806250:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_08806284;
      }
      goto L_0880626C;
    }
L_0880626C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[4] + ctx.gpr[3]);
    goto L_08806284;
L_08806284:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_088062BC;
      }
      goto L_0880629C;
    }
L_0880629C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_088062A0;
L_088062A0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[2]);
    jump_target = ctx.gpr[21];
    ctx.set_gpr(31, 0x088062B0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088062B0u) goto L_088062B0;
    return;
L_088062B0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[18] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_088062A0;
    }
    goto L_088062BC;
L_088062BC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
      if (branch_taken) {
          goto L_088064AC;
      }
      goto L_088062C4;
    }
L_088062C4:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x088062D4u);
    ctx.set_gpr(18, ctx.gpr[16] & 32u);
    goto L_088054B8;
L_088062D4:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[3] << 24u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(5, ctx.gpr[2] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08806318;
      }
      goto L_08806304;
    }
L_08806304:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08806328;
      }
      goto L_08806318;
    }
L_08806318:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08806328;
L_08806328:
    jump_target = ctx.gpr[5];
    ctx.set_gpr(31, 0x08806330u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08806330u) goto L_08806330;
    return;
L_08806330:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088064AC;
      }
      goto L_08806338;
    }
L_08806338:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08806348u);
    ctx.set_gpr(18, ctx.gpr[16] & 32u);
    goto L_088054B8;
L_08806348:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806354u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    goto L_088054B8;
L_08806354:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[16] & 64u);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
      if (branch_taken) {
          goto L_0880639C;
      }
      goto L_08806388;
    }
L_08806388:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_088063AC;
      }
      goto L_0880639C;
    }
L_0880639C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_088063AC;
L_088063AC:
    if (ctx.gpr[4] == 0u) {
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
        goto L_088064AC;
    }
    goto L_088063B4;
L_088063B4:
    if (ctx.gpr[18] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
        goto L_088063D0;
    }
    goto L_088063BC;
L_088063BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088063DC;
      }
      goto L_088063D0;
    }
L_088063D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_088063DC;
L_088063DC:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088063E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088063E4u) goto L_088063E4;
    return;
L_088063E4:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088064AC;
      }
      goto L_088063F0;
    }
L_088063F0:
    if (ctx.gpr[23] == ctx.gpr[5]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_088064C4;
    }
    goto L_088063F8;
L_088063F8:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08806404u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_0880541C;
L_08806404:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806410u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_088054B8;
L_08806410:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088064AC;
      }
      goto L_08806418;
    }
L_08806418:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08806424u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    goto L_088054B8;
L_08806424:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0880645C;
      }
      goto L_0880643C;
    }
L_0880643C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[3] != ctx.gpr[4]) {
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
        goto L_08806454;
    }
    goto L_0880644C;
L_0880644C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0880645C;
      }
      goto L_08806454;
    }
L_08806454:
    jump_target = ctx.gpr[6];
    ctx.set_gpr(31, 0x0880645Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880645Cu) goto L_0880645C;
    return;
L_0880645C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088064AC;
      }
      goto L_08806464;
    }
L_08806464:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088064C0;
      }
      goto L_0880646C;
    }
L_0880646C:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08806478u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    goto L_0880541C;
L_08806478:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806484u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_0880541C;
L_08806484:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806490u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_088054B8;
L_08806490:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088064AC;
      }
      goto L_088064A4;
    }
L_088064A4:
    ctx.set_gpr(31, 0x088064ACu);
    // nop
    goto L_088052D0;
L_088064AC:
    ctx.set_gpr(3, ctx.gpr[16] & 128u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08805D70;
      }
      goto L_088064B8;
    }
L_088064B8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08805D70;
      }
      goto L_088064C0;
    }
L_088064C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_088064C4;
L_088064C4:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088064EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08806508;
L_08806508:
    ctx.set_gpr(2, 0u < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_0880652C;
    }
    goto L_08806518;
L_08806518:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[3] & 31u);
        goto L_08806574;
    }
    goto L_08806528;
L_08806528:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0880652C;
L_0880652C:
    ctx.set_gpr(31, 0x08806534u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08806C4C;
L_08806534:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806540u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_088067E4;
L_08806540:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08806558;
    }
    goto L_0880654C;
L_0880654C:
    ctx.set_gpr(31, 0x08806554u);
    // nop
    goto L_088052D0;
L_08806554:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08806558;
L_08806558:
    ctx.set_gpr(31, 0x08806560u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08806BB0;
L_08806560:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08806788;
    }
    goto L_0880656C;
L_0880656C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08806508;
      }
      goto L_08806574;
    }
L_08806574:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880677C;
      }
      goto L_08806580;
    }
L_08806580:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3392));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880659C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088065A8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    goto L_088054B8;
L_088065A8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08806784;
      }
      goto L_088065B4;
    }
L_088065B4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088065C0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    goto L_088054B8;
L_088065C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088065CCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    goto L_088054B8;
L_088065CC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08806784;
      }
      goto L_088065D8;
    }
L_088065D8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088065E4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    goto L_088054B8;
L_088065E4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08806784;
      }
      goto L_088065F0;
    }
L_088065F0:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088065FCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    goto L_088054B8;
L_088065FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806608u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    goto L_0880541C;
L_08806608:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806614u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    goto L_0880541C;
L_08806614:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08806784;
      }
      goto L_08806620;
    }
L_08806620:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0880662Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    goto L_088054B8;
L_0880662C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806638u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    goto L_088054B8;
L_08806638:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08806784;
      }
      goto L_08806644;
    }
L_08806644:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08806650u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    goto L_088054B8;
L_08806650:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880665Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    goto L_088054B8;
L_0880665C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08806784;
      }
      goto L_08806668;
    }
L_08806668:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08806674u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    goto L_088054B8;
L_08806674:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806680u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    goto L_088054B8;
L_08806680:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880668Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    goto L_088054B8;
L_0880668C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08806784;
      }
      goto L_08806698;
    }
L_08806698:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088066A4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    goto L_088054B8;
L_088066A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088066B0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_088054B8;
L_088066B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088066BCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_0880541C;
L_088066BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088066C8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    goto L_0880541C;
L_088066C8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08806784;
      }
      goto L_088066D4;
    }
L_088066D4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088066E0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    goto L_088054B8;
L_088066E0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08806784;
      }
      goto L_088066EC;
    }
L_088066EC:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088066F8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_088054B8;
L_088066F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806704u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_088054B8;
L_08806704:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08806784;
      }
      goto L_08806710;
    }
L_08806710:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0880671Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    goto L_0880541C;
L_0880671C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806728u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_088054B8;
L_08806728:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08806784;
      }
      goto L_08806730;
    }
L_08806730:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0880673Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_088054B8;
L_0880673C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08806784;
      }
      goto L_08806744;
    }
L_08806744:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08806750u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_0880541C;
L_08806750:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880675Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_0880541C;
L_0880675C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806768u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_088054B8;
L_08806768:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08806784;
      }
      goto L_0880677C;
    }
L_0880677C:
    ctx.set_gpr(31, 0x08806784u);
    // nop
    goto L_088052D0;
L_08806784:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08806788;
L_08806788:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 31u);
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_088067D4;
    }
    goto L_0880679C;
L_0880679C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_088067A0;
L_088067A0:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088067ACu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_088054B8;
L_088067AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 31u);
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_088067A0;
    }
    goto L_088067D0;
L_088067D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_088067D4;
L_088067D4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088067E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08806814u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08806AB4;
L_08806814:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08806964;
    }
    goto L_0880681C;
L_0880681C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, 10922u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 43691u);
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[7]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[16] & ctx.gpr[8]);
    ctx.set_gpr(4, ctx.hi);
    ctx.set_gpr(5, ctx.gpr[5] >> 31u);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(9, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) < 0;
    ctx.set_gpr(10, 0u + 0u);
      if (branch_taken) {
          goto L_088068B0;
      }
      goto L_08806858;
    }
L_08806858:
    ctx.set_gpr(4, ctx.gpr[10] + ctx.gpr[9]);
    goto L_0880685C;
L_0880685C:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.set_gpr(4, ctx.gpr[6] << 1u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(11, ctx.gpr[7] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
        goto L_0880688C;
    }
    goto L_08806880;
L_08806880:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(9, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088068A4;
      }
      goto L_08806888;
    }
L_08806888:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    goto L_0880688C;
L_0880688C:
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088068B4;
      }
      goto L_088068A0;
    }
L_088068A0:
    ctx.set_gpr(10, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_088068A4;
L_088068A4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[10] + ctx.gpr[9]);
        goto L_0880685C;
    }
    goto L_088068B0;
L_088068B0:
    ctx.set_gpr(11, 0u + 0u);
    goto L_088068B4;
L_088068B4:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08806960;
      }
      goto L_088068BC;
    }
L_088068BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
        goto L_088068DC;
    }
    goto L_088068CC;
L_088068CC:
    ctx.set_gpr(2, ctx.gpr[11] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088068E0;
      }
      goto L_088068D8;
    }
L_088068D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    goto L_088068DC;
L_088068DC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088068E0;
L_088068E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x088068F8u);
    ctx.set_gpr(16, ctx.gpr[3] - ctx.gpr[2]);
    goto L_08806A64;
L_088068F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    goto L_08806900;
L_08806900:
    ctx.set_gpr(31, 0x08806908u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_0880541C;
L_08806908:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08806960;
      }
      goto L_08806914;
    }
L_08806914:
    ctx.set_gpr(31, 0x0880691Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_0880541C;
L_0880691C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806928u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_0880541C;
L_08806928:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08806960;
      }
      goto L_0880693C;
    }
L_0880693C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[18] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08806900;
      }
      goto L_08806950;
    }
L_08806950:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_08806960;
L_08806960:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08806964;
L_08806964:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806978:
    ctx.set_gpr(2, 2225u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3308));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806984:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(276)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(288)));
    ctx.fpr[27] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(292)));
    ctx.fpr[28] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(296)));
    ctx.fpr[29] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.fpr[30] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    ctx.fpr[31] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(29, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[6];
    { const bool signed_ok = ctx.execute_signed_sub(29u, 29u, 2u);
      if (!signed_ok) { rt.arithmetic_overflow(0x088069E4u, 0x03A2E822u); return; } }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088069E8:
    ctx.set_gpr(2, ctx.gpr[29] + 0u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-312));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[27]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[29]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[31]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(31, 0x08806A64u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0880558C;
L_08806A64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(16, ctx.gpr[2] & 64u);
    ctx.set_gpr(31, 0x08806A84u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0880541C;
L_08806A84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806A90u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_0880541C;
L_08806A90:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08806AA8;
    }
    goto L_08806A98;
L_08806A98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806AA4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_0880541C;
L_08806AA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08806AA8;
L_08806AA8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806AB4:
    ctx.set_gpr(7, 2233u << 16u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8528));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-2));
    goto L_08806AC4;
L_08806AC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_08806B38;
    }
    goto L_08806AD0;
L_08806AD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08806B34;
      }
      goto L_08806AE0;
    }
L_08806AE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08806B34;
      }
      goto L_08806B00;
    }
L_08806B00:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(5, ctx.gpr[8] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8528));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8532));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08806B48;
      }
      goto L_08806B34;
    }
L_08806B34:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08806B38;
L_08806B38:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08806AC4;
      }
      goto L_08806B44;
    }
L_08806B44:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08806B48;
L_08806B48:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806B50:
    ctx.set_gpr(6, 2233u << 16u);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8528));
    goto L_08806B5C;
L_08806B5C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_08806B98;
    }
    goto L_08806B68;
L_08806B68:
    ctx.set_gpr(3, 2233u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8528));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(3, 2233u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8532));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-12));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08806BA8;
      }
      goto L_08806B98;
    }
L_08806B98:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08806B5C;
      }
      goto L_08806BA4;
    }
L_08806BA4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08806BA8;
L_08806BA8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806BB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(16, ctx.gpr[2] & 64u);
    ctx.set_gpr(2, ctx.gpr[2] & 32u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[2] & 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08806BFCu);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_0880541C;
L_08806BFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806C08u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(164));
    goto L_0880541C;
L_08806C08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08806C20;
      }
      goto L_08806C14;
    }
L_08806C14:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08806C28;
      }
      goto L_08806C20;
    }
L_08806C20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    goto L_08806C28;
L_08806C28:
    if (ctx.gpr[16] == 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(180), 0u);
        goto L_08806C38;
    }
    goto L_08806C30;
L_08806C30:
    ctx.set_gpr(31, 0x08806C38u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(180));
    goto L_0880541C;
L_08806C38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806C4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(3, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
      if (branch_taken) {
          goto L_08806CC8;
      }
      goto L_08806C68;
    }
L_08806C68:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(6, ctx.gpr[8] << 2u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08806CAC;
      }
      goto L_08806C90;
    }
L_08806C90:
    ctx.set_gpr(2, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(13, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08806D1C;
      }
      goto L_08806CAC;
    }
L_08806CAC:
    ctx.set_gpr(2, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(13, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08806D1C;
      }
      goto L_08806CC8;
    }
L_08806CC8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(10, ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08806CFC;
    }
    goto L_08806CD4;
L_08806CD4:
    ctx.set_gpr(10, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, ctx.gpr[10] << 2u);
    ctx.set_gpr(11, ctx.gpr[10] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(11, ctx.gpr[11] & ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[10] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[11]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(13, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08806D1C;
      }
      goto L_08806CFC;
    }
L_08806CFC:
    ctx.set_gpr(10, ctx.gpr[10] << 2u);
    ctx.set_gpr(11, ctx.gpr[10] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(11, ctx.gpr[11] & ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[10] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[11]);
    ctx.set_gpr(13, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    goto L_08806D1C;
L_08806D1C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08806D34;
      }
      goto L_08806D24;
    }
L_08806D24:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08806D50;
      }
      goto L_08806D34;
    }
L_08806D34:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    if (ctx.gpr[9] != ctx.gpr[6]) {
    ctx.set_gpr(6, ctx.gpr[9] << 2u);
        goto L_08806D54;
    }
    goto L_08806D40;
L_08806D40:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), ctx.gpr[6]);
    goto L_08806D50;
L_08806D50:
    ctx.set_gpr(6, ctx.gpr[9] << 2u);
    goto L_08806D54;
L_08806D54:
    ctx.set_gpr(13, ctx.gpr[13] - ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(12, 0u + 0u);
      if (branch_taken) {
          goto L_08806D80;
      }
      goto L_08806D60;
    }
L_08806D60:
    ctx.set_gpr(11, ctx.gpr[4] + 0u);
    goto L_08806D64;
L_08806D64:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[12] < ctx.gpr[9] ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(96), ctx.gpr[10]);
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08806D64;
      }
      goto L_08806D80;
    }
L_08806D80:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08806DBC;
      }
      goto L_08806D90;
    }
L_08806D90:
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_08806DBC;
      }
      goto L_08806DA0;
    }
L_08806DA0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(264), ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08806DA0;
      }
      goto L_08806DBC;
    }
L_08806DBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806DC4:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(6, 2233u << 16u);
    ctx.set_gpr(7, 2233u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(30908));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30952));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7872));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(7872));
    goto L_08805358;
L_08806DE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(30));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08806E3C;
      }
      goto L_08806E10;
    }
L_08806E10:
    ctx.set_gpr(31, 0x08806E18u);
    // nop
    ctx.pc = 0x08B0DBECu;
    return;
L_08806E18:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(30));
      if (branch_taken) {
          goto L_08806E2C;
      }
      goto L_08806E24;
    }
L_08806E24:
    ctx.set_gpr(31, 0x08806E2Cu);
    // nop
    ctx.pc = 0x08B0DBFCu;
    return;
L_08806E2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08806E30;
L_08806E30:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806E3C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08806E48u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(30));
    ctx.pc = 0x08B0DBF4u;
    return;
L_08806E48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08806E30;
L_08806E50:
    ctx.set_gpr(9, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(12, ctx.gpr[9] + 0u);
    ctx.set_gpr(15, ctx.gpr[9] + 0u);
    ctx.set_gpr(4, ctx.gpr[6] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(13, ctx.gpr[7] + 0u);
    ctx.set_gpr(11, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(12, (ctx.gpr[12] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(10, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(15, (ctx.gpr[15] & ~0x7FFFFFFFu) | ((0u & 0x7FFFFFFFu) << 0u));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08806EAC;
      }
      goto L_08806E98;
    }
L_08806E98:
    ctx.set_gpr(2, 32751u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_08806EF4;
      }
      goto L_08806EAC;
    }
L_08806EAC:
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    goto L_08806EB0;
L_08806EB0:
    ctx.set_gpr(31, 0x08806EB8u);
    ctx.set_gpr(5, ctx.gpr[9] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08806EB8u) goto L_08806EB8;
    return;
L_08806EB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08806ECCu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08806ECCu) goto L_08806ECC;
    return;
L_08806ECC:
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    goto L_08806ED4;
L_08806ED4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08806ED8;
L_08806ED8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08806EDC;
L_08806EDC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[8] + 0u);
    ctx.set_gpr(3, ctx.gpr[9] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806EF4:
    ctx.set_gpr(2, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(3, 32752u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_08806EB0;
      }
      goto L_08806F10;
    }
L_08806F10:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 15u << 16u);
      if (branch_taken) {
          goto L_08806F5C;
      }
      goto L_08806F1C;
    }
L_08806F1C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08806ED8;
      }
      goto L_08806F28;
    }
L_08806F28:
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08806EDC;
      }
      goto L_08806F34;
    }
L_08806F34:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.set_gpr(2, 15u << 16u);
      if (branch_taken) {
          goto L_08806F5C;
      }
      goto L_08806F3C;
    }
L_08806F3C:
    ctx.set_gpr(3, ctx.gpr[15] >> 31u);
    goto L_08806F40;
L_08806F40:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3288));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    goto L_08806ED4;
L_08806F5C:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 20u));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-1023));
      if (branch_taken) {
          goto L_08806F90;
      }
      goto L_08806F70;
    }
L_08806F70:
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(2, ctx.gpr[12] << 11u);
      if (branch_taken) {
          goto L_08807140;
      }
      goto L_08806F78;
    }
L_08806F78:
    ctx.set_gpr(2, ctx.gpr[10] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) <= 0;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1043));
      if (branch_taken) {
          goto L_08806F90;
      }
      goto L_08806F84;
    }
L_08806F84:
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08806F84;
      }
      goto L_08806F90;
    }
L_08806F90:
    ctx.set_gpr(2, 15u << 16u);
    goto L_08806F94;
L_08806F94:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 20u));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(14, ctx.gpr[3] + static_cast<std::uint32_t>(-1023));
      if (branch_taken) {
          goto L_08806FC8;
      }
      goto L_08806FA8;
    }
L_08806FA8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(2, ctx.gpr[5] << 11u);
      if (branch_taken) {
          goto L_0880711C;
      }
      goto L_08806FB0;
    }
L_08806FB0:
    ctx.set_gpr(2, ctx.gpr[11] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(-1043));
      if (branch_taken) {
          goto L_08806FC8;
      }
      goto L_08806FBC;
    }
L_08806FBC:
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08806FBC;
      }
      goto L_08806FC8;
    }
L_08806FC8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < -1022 ? 1u : 0u);
    goto L_08806FCC;
L_08806FCC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_08807048;
      }
      goto L_08806FD4;
    }
L_08806FD4:
    ctx.set_gpr(12, (ctx.gpr[12] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    ctx.set_gpr(2, 16u << 16u);
    ctx.set_gpr(4, ctx.gpr[12] | ctx.gpr[2]);
    goto L_08806FE0;
L_08806FE0:
    ctx.set_gpr(18, static_cast<std::int32_t>(ctx.gpr[14]) < -1022 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_088070F4;
      }
      goto L_08806FEC;
    }
L_08806FEC:
    ctx.set_gpr(13, (ctx.gpr[13] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    ctx.set_gpr(2, 16u << 16u);
    ctx.set_gpr(3, ctx.gpr[13] | ctx.gpr[2]);
    goto L_08806FF8;
L_08806FF8:
    ctx.set_gpr(12, ctx.gpr[6] - ctx.gpr[14]);
    ctx.set_gpr(9, 0u + 0u);
    goto L_08807000;
L_08807000:
    ctx.set_gpr(5, ctx.gpr[4] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[4] << 1u);
    ctx.set_gpr(6, ctx.gpr[10] >> 31u);
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[9];
    ctx.set_gpr(8, ctx.gpr[5] << 1u);
      if (branch_taken) {
          goto L_08807070;
      }
      goto L_0880701C;
    }
L_0880701C:
    ctx.set_gpr(2, ctx.gpr[10] - ctx.gpr[11]);
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[6]);
    ctx.set_gpr(10, ctx.gpr[10] << 1u);
    ctx.set_gpr(6, ctx.gpr[2] | ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.set_gpr(7, ctx.gpr[2] >> 31u);
      if (branch_taken) {
          goto L_08807040;
      }
      goto L_08807034;
    }
L_08807034:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(4, ctx.gpr[8] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08806F3C;
      }
      goto L_0880703C;
    }
L_0880703C:
    ctx.set_gpr(10, ctx.gpr[2] << 1u);
    goto L_08807040;
L_08807040:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08807000;
L_08807048:
    ctx.set_gpr(7, ctx.gpr[2] - ctx.gpr[6]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < 32 ? 1u : 0u);
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(4, ctx.gpr[10] << (ctx.gpr[7] & 31u));
        goto L_08807138;
    }
    goto L_08807058;
L_08807058:
    ctx.set_gpr(2, 0u - ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[10] >> (ctx.gpr[2] & 31u));
    ctx.set_gpr(3, ctx.gpr[12] << (ctx.gpr[7] & 31u));
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(10, ctx.gpr[10] << (ctx.gpr[7] & 31u));
    goto L_08806FE0;
L_08807070:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.set_gpr(2, ctx.gpr[10] - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08807080;
      }
      goto L_08807078;
    }
L_08807078:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    goto L_08807080;
L_08807080:
    ctx.set_gpr(2, ctx.gpr[10] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[15] >> 31u);
      if (branch_taken) {
          goto L_08806F40;
      }
      goto L_0880708C;
    }
L_0880708C:
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088070C8;
      }
      goto L_088070A0;
    }
L_088070A0:
    ctx.set_gpr(3, ctx.gpr[10] >> 31u);
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[10] << 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088070A0;
      }
      goto L_088070C4;
    }
L_088070C4:
    ctx.set_gpr(18, static_cast<std::int32_t>(ctx.gpr[14]) < -1022 ? 1u : 0u);
    goto L_088070C8;
L_088070C8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_08807164;
      }
      goto L_088070D0;
    }
L_088070D0:
    ctx.set_gpr(3, ctx.gpr[14] + static_cast<std::uint32_t>(1023));
    ctx.set_gpr(2, 65520u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 20u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(25, ctx.gpr[15] | ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[10] + 0u);
    ctx.set_gpr(9, ctx.gpr[25] + 0u);
    goto L_08806ED4;
L_088070F4:
    ctx.set_gpr(7, ctx.gpr[2] - ctx.gpr[14]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < 32 ? 1u : 0u);
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, ctx.gpr[11] << (ctx.gpr[7] & 31u));
        goto L_0880715C;
    }
    goto L_08807104;
L_08807104:
    ctx.set_gpr(2, 0u - ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[11] >> (ctx.gpr[2] & 31u));
    ctx.set_gpr(3, ctx.gpr[5] << (ctx.gpr[7] & 31u));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(11, ctx.gpr[11] << (ctx.gpr[7] & 31u));
    goto L_08806FF8;
L_0880711C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_08806FC8;
      }
      goto L_08807124;
    }
L_08807124:
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08807124;
      }
      goto L_08807130;
    }
L_08807130:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < -1022 ? 1u : 0u);
    goto L_08806FCC;
L_08807138:
    ctx.set_gpr(10, 0u + 0u);
    goto L_08806FE0;
L_08807140:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_08806F90;
      }
      goto L_08807148;
    }
L_08807148:
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08807148;
      }
      goto L_08807154;
    }
L_08807154:
    ctx.set_gpr(2, 15u << 16u);
    goto L_08806F94;
L_0880715C:
    ctx.set_gpr(11, 0u + 0u);
    goto L_08806FF8;
L_08807164:
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[14]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08807198;
      }
      goto L_08807174;
    }
L_08807174:
    ctx.set_gpr(2, 0u - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[10] >> (ctx.gpr[5] & 31u));
    ctx.set_gpr(2, ctx.gpr[4] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> (ctx.gpr[5] & 31u)));
    goto L_08807188;
L_08807188:
    ctx.set_gpr(17, ctx.gpr[6] | ctx.gpr[15]);
    ctx.set_gpr(8, ctx.gpr[3] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    goto L_08806ED4;
L_08807198:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> (ctx.gpr[5] & 31u)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[15] + 0u);
      if (branch_taken) {
          goto L_08807188;
      }
      goto L_088071A4;
    }
L_088071A4:
    ctx.set_gpr(2, 0u - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[4] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(3, ctx.gpr[10] >> (ctx.gpr[5] & 31u));
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(17, ctx.gpr[6] | ctx.gpr[15]);
    ctx.set_gpr(8, ctx.gpr[3] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    goto L_08806ED4;
L_088071C4:
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.set_gpr(10, ctx.gpr[4] + 0u);
    ctx.set_gpr(11, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    ctx.set_gpr(9, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0880724C;
      }
      goto L_08807210;
    }
L_08807210:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_08807568;
      }
      goto L_08807224;
    }
L_08807224:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08807638;
      }
      goto L_0880722C;
    }
L_0880722C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3264)));
    ctx.set_gpr(31, 0x0880723Cu);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3260)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880723Cu) goto L_0880723C;
    return;
L_0880723C:
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    ctx.set_gpr(11, ctx.gpr[3] + 0u);
    ctx.set_gpr(8, ctx.gpr[3] + 0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-54));
    goto L_0880724C;
L_0880724C:
    ctx.set_gpr(2, 32751u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_088072A4;
      }
      goto L_08807260;
    }
L_08807260:
    ctx.set_gpr(4, ctx.gpr[10] + 0u);
    ctx.set_gpr(5, ctx.gpr[11] + 0u);
    ctx.set_gpr(6, ctx.gpr[10] + 0u);
    ctx.set_gpr(31, 0x08807274u);
    ctx.set_gpr(7, ctx.gpr[11] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08807274u) goto L_08807274;
    return;
L_08807274:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08807278;
L_08807278:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088072A4:
    ctx.set_gpr(2, 9u << 16u);
    ctx.set_gpr(19, (ctx.gpr[19] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    ctx.set_gpr(2, ctx.gpr[2] | 24420u);
    ctx.set_gpr(3, 16u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(4, 16368u << 16u);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] ^ ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-3256)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-3252)));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 20u));
    ctx.set_gpr(11, ctx.gpr[19] | ctx.gpr[4]);
    ctx.set_gpr(8, ctx.gpr[9] + ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1023));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 20u));
    ctx.set_gpr(4, ctx.gpr[10] + 0u);
    ctx.set_gpr(5, ctx.gpr[11] + 0u);
    ctx.set_gpr(31, 0x088072F4u);
    ctx.set_gpr(30, ctx.gpr[8] + ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088072F4u) goto L_088072F4;
    return;
L_088072F4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, (ctx.gpr[2] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088075AC;
      }
      goto L_0880730C;
    }
L_0880730C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3208)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3204)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, 65529u << 16u);
    ctx.set_gpr(31, 0x0880732Cu);
    ctx.set_gpr(18, ctx.gpr[18] | 60294u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880732Cu) goto L_0880732C;
    return;
L_0880732C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08807340u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08807340u) goto L_08807340;
    return;
L_08807340:
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[19] + ctx.gpr[18]);
    ctx.set_gpr(31, 0x08807354u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08807354u) goto L_08807354;
    return;
L_08807354:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08807370u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08807370u) goto L_08807370;
    return;
L_08807370:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880738Cu);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880738Cu) goto L_0880738C;
    return;
L_0880738C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3200)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3196)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088073ACu);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088073ACu) goto L_088073AC;
    return;
L_088073AC:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-3192)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-3188)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088073C4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088073C4u) goto L_088073C4;
    return;
L_088073C4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088073D8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088073D8u) goto L_088073D8;
    return;
L_088073D8:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-3184)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-3180)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088073F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088073F0u) goto L_088073F0;
    return;
L_088073F0:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08807404u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08807404u) goto L_08807404;
    return;
L_08807404:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3176)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3172)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08807424u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08807424u) goto L_08807424;
    return;
L_08807424:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-3168)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-3164)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880743Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880743Cu) goto L_0880743C;
    return;
L_0880743C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08807450u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08807450u) goto L_08807450;
    return;
L_08807450:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-3160)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-3156)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08807468u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08807468u) goto L_08807468;
    return;
L_08807468:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880747Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880747Cu) goto L_0880747C;
    return;
L_0880747C:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-3152)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-3148)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08807494u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08807494u) goto L_08807494;
    return;
L_08807494:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x088074A8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088074A8u) goto L_088074A8;
    return;
L_088074A8:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x088074BCu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088074BCu) goto L_088074BC;
    return;
L_088074BC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 6u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 47185u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[19]);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0880782C;
      }
      goto L_088074D8;
    }
L_088074D8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3224)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3220)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088074F0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088074F0u) goto L_088074F0;
    return;
L_088074F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08807504u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08807504u) goto L_08807504;
    return;
L_08807504:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08807728;
      }
      goto L_08807510;
    }
L_08807510:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08807524u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08807524u) goto L_08807524;
    return;
L_08807524:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08807538u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08807538u) goto L_08807538;
    return;
L_08807538:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0880754Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880754Cu) goto L_0880754C;
    return;
L_0880754C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08807550;
L_08807550:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08807560u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08807560u) goto L_08807560;
    return;
L_08807560:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08807278;
L_08807568:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3272)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3268)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0880757Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0880757Cu) goto L_0880757C;
    return;
L_0880757C:
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
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088075AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088075C0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 899u, 0x0881FBBCu>(ctx, &aot_mem) && ctx.pc == 0x088075C0u) goto L_088075C0;
    return;
L_088075C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0880765C;
      }
      goto L_088075C8;
    }
L_088075C8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08807274;
      }
      goto L_088075D4;
    }
L_088075D4:
    ctx.set_gpr(31, 0x088075DCu);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x088075DCu) goto L_088075DC;
    return;
L_088075DC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3248)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3244)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088075FCu);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088075FCu) goto L_088075FC;
    return;
L_088075FC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3240)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3236)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0880761Cu);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880761Cu) goto L_0880761C;
    return;
L_0880761C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08807630u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08807630u) goto L_08807630;
    return;
L_08807630:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08807278;
L_08807638:
    ctx.set_gpr(31, 0x08807640u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08807640u) goto L_08807640;
    return;
L_08807640:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08807654u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08807654u) goto L_08807654;
    return;
L_08807654:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08807278;
L_0880765C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0880766Cu);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880766Cu) goto L_0880766C;
    return;
L_0880766C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3232)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3228)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x0880768Cu);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880768Cu) goto L_0880768C;
    return;
L_0880768C:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-3224)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-3220)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088076A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088076A4u) goto L_088076A4;
    return;
L_088076A4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088076B8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088076B8u) goto L_088076B8;
    return;
L_088076B8:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08807810;
      }
      goto L_088076C4;
    }
L_088076C4:
    ctx.set_gpr(31, 0x088076CCu);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x088076CCu) goto L_088076CC;
    return;
L_088076CC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3248)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3244)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088076ECu);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088076ECu) goto L_088076EC;
    return;
L_088076EC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3216)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3212)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880770Cu);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880770Cu) goto L_0880770C;
    return;
L_0880770C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08807720u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08807720u) goto L_08807720;
    return;
L_08807720:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_088077BC;
L_08807728:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3248)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3244)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08807740u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08807740u) goto L_08807740;
    return;
L_08807740:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880775Cu);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880775Cu) goto L_0880775C;
    return;
L_0880775C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08807770u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08807770u) goto L_08807770;
    return;
L_08807770:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3240)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3236)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08807790u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08807790u) goto L_08807790;
    return;
L_08807790:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088077A4u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088077A4u) goto L_088077A4;
    return;
L_088077A4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x088077B8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088077B8u) goto L_088077B8;
    return;
L_088077B8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_088077BC;
L_088077BC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088077CCu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088077CCu) goto L_088077CC;
    return;
L_088077CC:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088077E0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088077E0u) goto L_088077E0;
    return;
L_088077E0:
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
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08807810:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08807824u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08807824u) goto L_08807824;
    return;
L_08807824:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08807278;
L_0880782C:
    if (ctx.gpr[30] != 0u) {
    ctx.set_gpr(2, 2225u << 16u);
        goto L_08807864;
    }
    goto L_08807834;
L_08807834:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08807848u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08807848u) goto L_08807848;
    return;
L_08807848:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880785Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880785Cu) goto L_0880785C;
    return;
L_0880785C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08807550;
L_08807864:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3248)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3244)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08807878u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08807878u) goto L_08807878;
    return;
L_08807878:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08807894u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08807894u) goto L_08807894;
    return;
L_08807894:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088078A8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088078A8u) goto L_088078A8;
    return;
L_088078A8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3216)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3212)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x088078C8u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088078C8u) goto L_088078C8;
    return;
L_088078C8:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088078DCu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088078DCu) goto L_088078DC;
    return;
L_088078DC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_088077BC;
L_088078E4:
    ctx.set_gpr(6, 15u << 16u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] | 65535u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(7, (ctx.gpr[7] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[7]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08807968;
      }
      goto L_08807930;
    }
L_08807930:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_088079C8;
      }
      goto L_0880793C;
    }
L_0880793C:
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08807AD4;
      }
      goto L_08807948;
    }
L_08807948:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3136)));
    ctx.set_gpr(31, 0x08807958u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3132)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08807958u) goto L_08807958;
    return;
L_08807958:
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-54));
    goto L_08807968;
L_08807968:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 20u));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, 32751u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1023));
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(17, ctx.gpr[4] >> 31u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, (ctx.gpr[16] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
      if (branch_taken) {
          goto L_088079FC;
      }
      goto L_08807990;
    }
L_08807990:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088079A4u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088079A4u) goto L_088079A4;
    return;
L_088079A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088079A8;
L_088079A8:
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
L_088079C8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3144)));
    ctx.set_gpr(31, 0x088079D8u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3140)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x088079D8u) goto L_088079D8;
    return;
L_088079D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_088079FC:
    ctx.set_gpr(31, 0x08807A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08807A04u) goto L_08807A04;
    return;
L_08807A04:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1023));
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[4] << 20u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, ctx.gpr[16] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08807A28u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    goto L_088071C4;
L_08807A28:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3128)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3124)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08807A48u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08807A48u) goto L_08807A48;
    return;
L_08807A48:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3120)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3116)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08807A68u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08807A68u) goto L_08807A68;
    return;
L_08807A68:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08807A7Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08807A7Cu) goto L_08807A7C;
    return;
L_08807A7C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3112)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3108)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08807A9Cu);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08807A9Cu) goto L_08807A9C;
    return;
L_08807A9C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08807AB0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08807AB0u) goto L_08807AB0;
    return;
L_08807AB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_08807AD4:
    ctx.set_gpr(31, 0x08807ADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08807ADCu) goto L_08807ADC;
    return;
L_08807ADC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08807AF0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08807AF0u) goto L_08807AF0;
    return;
L_08807AF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088079A8;
L_08807AF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.set_gpr(18, (ctx.gpr[18] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, (ctx.gpr[20] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
      if (branch_taken) {
          goto L_08807C44;
      }
      goto L_08807B64;
    }
L_08807B64:
    ctx.set_gpr(3, 32752u << 16u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[20] - ctx.gpr[3]);
      if (branch_taken) {
          goto L_08807BC8;
      }
      goto L_08807B74;
    }
L_08807B74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08807B78;
L_08807B78:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08807B88u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08807B88u) goto L_08807B88;
    return;
L_08807B88:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    goto L_08807B90;
L_08807B90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08807B94;
L_08807B94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08807BC8:
    ctx.set_gpr(23, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08807C90;
      }
      goto L_08807BD4;
    }
L_08807BD4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08807B78;
    }
    goto L_08807BDC;
L_08807BDC:
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08807BF4;
      }
      goto L_08807BEC;
    }
L_08807BEC:
    if (ctx.gpr[7] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08807B78;
    }
    goto L_08807BF4;
L_08807BF4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.set_gpr(2, 17215u << 16u);
      if (branch_taken) {
          goto L_08807D38;
      }
      goto L_08807BFC;
    }
L_08807BFC:
    ctx.set_gpr(30, 0u + 0u);
    goto L_08807C00;
L_08807C00:
    if (ctx.gpr[7] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08807CA4;
    }
    goto L_08807C08;
L_08807C08:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(2, 16368u << 16u);
      if (branch_taken) {
          goto L_08807DC4;
      }
      goto L_08807C10;
    }
L_08807C10:
    ctx.set_gpr(2, 49168u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[21] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 16367u << 16u);
      if (branch_taken) {
          goto L_08807E64;
      }
      goto L_08807C24;
    }
L_08807C24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08807C38u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08807C38u) goto L_08807C38;
    return;
L_08807C38:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    goto L_08807B90;
L_08807C44:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3056)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3052)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08807C90:
    if (ctx.gpr[21] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08807B78;
    }
    goto L_08807C98;
L_08807C98:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    goto L_08807BD4;
L_08807CA0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08807CA4;
L_08807CA4:
    ctx.set_gpr(31, 0x08807CACu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 219u, 0x0880D210u>(ctx, &aot_mem) && ctx.pc == 0x08807CACu) goto L_08807CAC;
    return;
L_08807CAC:
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08807CF0;
      }
      goto L_08807CB8;
    }
L_08807CB8:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.set_gpr(6, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_08807CD4;
      }
      goto L_08807CC0;
    }
L_08807CC0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.set_gpr(2, 16368u << 16u);
      if (branch_taken) {
          goto L_08807CD4;
      }
      goto L_08807CC8;
    }
L_08807CC8:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    ctx.set_gpr(2, ctx.gpr[22] >> 31u);
      if (branch_taken) {
          goto L_08807CF4;
      }
      goto L_08807CD0;
    }
L_08807CD0:
    ctx.set_gpr(6, ctx.gpr[8] + 0u);
    goto L_08807CD4;
L_08807CD4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.set_gpr(7, ctx.gpr[9] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 110u, 0x08808A10u>(ctx, &aot_mem); return;
      }
      goto L_08807CDC;
    }
L_08807CDC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.set_gpr(2, 49168u << 16u);
      if (branch_taken) {
          goto L_08807D94;
      }
      goto L_08807CE4;
    }
L_08807CE4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    goto L_08807CE8;
L_08807CE8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    goto L_08807B90;
L_08807CF0:
    ctx.set_gpr(2, ctx.gpr[22] >> 31u);
    goto L_08807CF4;
L_08807CF4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08807E14;
      }
      goto L_08807D04;
    }
L_08807D04:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08807D0C;
L_08807D0C:
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08807D18u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08807D18u) goto L_08807D18;
    return;
L_08807D18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08807D2Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08807D2Cu) goto L_08807D2C;
    return;
L_08807D2C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    goto L_08807B90;
L_08807D38:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08807C00;
      }
      goto L_08807D48;
    }
L_08807D48:
    ctx.set_gpr(2, 16367u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(30, 0u + 0u);
        goto L_08807C00;
    }
    goto L_08807D5C;
L_08807D5C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 20u));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-1023));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 140u, 0x08808C60u>(ctx, &aot_mem); return;
      }
      goto L_08807D70;
    }
L_08807D70:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[7] >> (ctx.gpr[2] & 31u));
    ctx.set_gpr(2, ctx.gpr[3] << (ctx.gpr[2] & 31u));
    if (ctx.gpr[7] != ctx.gpr[2]) {
    ctx.set_gpr(30, 0u + 0u);
        goto L_08807C00;
    }
    goto L_08807D84;
L_08807D84:
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(30, ctx.gpr[2] - ctx.gpr[3]);
    goto L_08807C00;
L_08807D94:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[30] | ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08807D0C;
      }
      goto L_08807DA8;
    }
L_08807DA8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08807CE8;
      }
      goto L_08807DB4;
    }
L_08807DB4:
    ctx.set_gpr(4, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[7] ^ ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    goto L_08807B90;
L_08807DC4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    ctx.set_gpr(2, 16384u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 105u, 0x088089BCu>(ctx, &aot_mem); return;
      }
      goto L_08807DCC;
    }
L_08807DCC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(2, 16352u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 112u, 0x08808A2Cu>(ctx, &aot_mem); return;
      }
      goto L_08807DD4;
    }
L_08807DD4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08807CA4;
      }
      goto L_08807DDC;
    }
L_08807DDC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_08807CA4;
      }
      goto L_08807DE4;
    }
L_08807DE4:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 223u, 0x08809404u>(ctx, &aot_mem); return;
L_08807E14:
    ctx.set_gpr(2, 16864u << 16u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 15u << 16u);
      if (branch_taken) {
          goto L_08807E88;
      }
      goto L_08807E24;
    }
L_08807E24:
    ctx.set_gpr(2, 17392u << 16u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 16367u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 124u, 0x08808AE4u>(ctx, &aot_mem); return;
      }
      goto L_08807E34;
    }
L_08807E34:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 122u, 0x08808AD4u>(ctx, &aot_mem); return;
      }
      goto L_08807E44;
    }
L_08807E44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
      if (branch_taken) {
          goto L_08807B90;
      }
      goto L_08807E4C;
    }
L_08807E4C:
    ctx.set_gpr(2, 2225u << 16u);
    goto L_08807E50;
L_08807E50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3048)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3044)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_08807B90;
L_08807E64:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 108u, 0x088089ECu>(ctx, &aot_mem); return;
      }
      goto L_08807E74;
    }
L_08807E74:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08807B94;
      }
      goto L_08807E7C;
    }
L_08807E7C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    goto L_08807E80;
L_08807E80:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    goto L_08807B90;
L_08807E88:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08807EBC;
      }
      goto L_08807E98;
    }
L_08807E98:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2992)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2988)));
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x08807EB0u);
    ctx.set_gpr(5, ctx.gpr[9] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08807EB0u) goto L_08807EB0;
    return;
L_08807EB0:
    ctx.set_gpr(20, ctx.gpr[3] + 0u);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-53));
    goto L_08807EBC;
L_08807EBC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 20u));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(3, 3u << 16u);
    ctx.set_gpr(5, (ctx.gpr[5] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    ctx.set_gpr(2, 16368u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 39054u);
    ctx.set_gpr(16, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(-1023));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08807F24;
      }
      goto L_08807EF4;
    }
L_08807EF4:
    ctx.set_gpr(2, 11u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 46713u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(17, 4u << 16u);
      if (branch_taken) {
          goto L_08807F24;
      }
      goto L_08807F0C;
    }
L_08807F0C:
    ctx.set_gpr(2, 65520u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1022));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08807F24;
L_08807F24:
    ctx.set_gpr(4, ctx.gpr[4] << 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3072));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(20, ctx.gpr[8] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08807F5Cu);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08807F5Cu) goto L_08807F5C;
    return;
L_08807F5C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08807F78u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08807F78u) goto L_08807F78;
    return;
L_08807F78:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-3056)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-3052)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08807F90u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08807F90u) goto L_08807F90;
    return;
L_08807F90:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(21, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08807FB0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08807FB0u) goto L_08807FB0;
    return;
L_08807FB0:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, 8192u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[17] + ctx.gpr[7]);
    ctx.set_gpr(6, 8u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[6]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08808000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    (void)rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0000(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0000_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_0(Runtime &runtime) {
    runtime.register_generated_unit(0u, 0x08804000u, 16384u, &recomp_unit_0000, &recomp_unit_0000_entry);
    runtime.register_function(0x08804000u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804034u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804040u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804048u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804050u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804060u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804074u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804080u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804090u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804094u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804108u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804114u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880414Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804158u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804160u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804164u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880416Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804174u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804180u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880419Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804208u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804210u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804218u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804240u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804268u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804278u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880439Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880446Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804490u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880449Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804504u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880451Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804524u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880452Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804534u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880453Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804544u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880454Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804554u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880455Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804564u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880456Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804574u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880457Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804584u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880458Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804594u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880459Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804600u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804608u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804620u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804628u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804630u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804638u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804650u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804664u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804688u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804698u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088046A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088046B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088046CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088046DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088046E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088046FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804700u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804708u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804720u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804734u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880473Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804740u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804754u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804774u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804780u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804788u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880478Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804794u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804818u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804824u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880482Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804830u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804838u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804848u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880484Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804864u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880486Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804874u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880487Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804884u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880488Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804894u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880489Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804900u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804908u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804910u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804918u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804920u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804930u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804974u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880497Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880499Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A4Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AB8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AD0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AD8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AF4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B00u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B28u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B60u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B78u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804BDCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804BE8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C00u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C10u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C1Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C4Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C60u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C78u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804CA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804CBCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804CE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804CECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D14u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D20u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D38u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D60u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D64u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DB0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DC0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DD4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DDCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E08u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E18u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E20u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E28u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E2Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E3Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E48u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E54u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E60u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E80u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E88u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EB4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EC0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EC4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804ED4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EF8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F00u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F0Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F14u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F18u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F24u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F2Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F30u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F44u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F48u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F58u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F60u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F68u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F74u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F7Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F80u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F8Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FB8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FBCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FC0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FD0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FE8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805004u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805008u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805018u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805030u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805040u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880504Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805058u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805060u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805064u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805074u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805080u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880508Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805098u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088050A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088050B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088050C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088050CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088050D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088050E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088050ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088050FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805108u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805114u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805118u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880511Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805128u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805134u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805148u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880514Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880515Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805164u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805174u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805180u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880518Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805190u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088051B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088051C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088051D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088051DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088051E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088051F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088051FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805208u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805210u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880521Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805224u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880522Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805234u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880523Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805240u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805248u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805250u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805254u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880525Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805264u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805268u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805270u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805274u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880527Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805284u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880528Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880530Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805318u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805328u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805334u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805358u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805388u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880538Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805394u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088053A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088053B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088053CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088053E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088053F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805400u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880541Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880542Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880543Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805448u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805460u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880546Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880548Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088054B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088054B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088054C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088054D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088054E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088054FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805508u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805528u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880554Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805554u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805568u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805574u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805580u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805584u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880558Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088055ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088055B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088055C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088055C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088055CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088055D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088055E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088055E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088055F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805630u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805638u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805640u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805648u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805654u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805664u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088056A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088056BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088056C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088056DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088056F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805798u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805834u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880583Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805844u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880584Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805858u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805868u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805870u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805878u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805888u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805894u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088058A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088058B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088058ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088058FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805904u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805914u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805918u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805920u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805934u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805974u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880597Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805984u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880598Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805990u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805998u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088059A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088059A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088059C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088059F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088059F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A10u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A1Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A7Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805AA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805AB0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805AB4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805AC0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805AFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B0Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B14u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B24u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B28u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B30u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B54u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B58u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B60u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B64u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B8Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805BA4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805BB4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805BC0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805BCCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805BD4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805BD8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805BE8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C74u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CBCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CD8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CE8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CF8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D08u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D3Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D70u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D74u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D7Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D88u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DB4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DC0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DC4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DD4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E10u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E1Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E68u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E78u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805EB4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805EC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805ED8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805EE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805EF4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F00u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F10u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F54u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F64u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F74u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F80u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F8Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805FE8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805FECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805FFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806008u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806010u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806020u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880602Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880605Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806070u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806080u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806090u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806098u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088060A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088060B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088060E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088060F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806108u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806118u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806120u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806130u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880613Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806148u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880617Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806190u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806208u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806214u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806220u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806250u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880626Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806284u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880629Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088062A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088062B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088062BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088062C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088062D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806304u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806318u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806328u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806330u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806338u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806348u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806354u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806388u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880639Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088063ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088063B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088063BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088063D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088063DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088063E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088063F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088063F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806404u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806410u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806418u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806424u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880643Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880644Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806454u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880645Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806464u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880646Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806478u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806484u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806490u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088064A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088064ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088064B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088064C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088064C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088064ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806508u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806518u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806528u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880652Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806534u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806540u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880654Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806554u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806558u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806560u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880656Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806574u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806580u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880659Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088065A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088065B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088065C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088065CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088065D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088065E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088065F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088065FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806608u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806614u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806620u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880662Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806638u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806644u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806650u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880665Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806668u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806674u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806680u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880668Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806698u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806704u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806710u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880671Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806728u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806730u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880673Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806744u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806750u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880675Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806768u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880677Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806784u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806788u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880679Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088067A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088067ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088067D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088067D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088067E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806814u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880681Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806858u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880685Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806880u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806888u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880688Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806900u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806908u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806914u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880691Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806928u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880693Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806950u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806960u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806964u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806978u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806984u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088069E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A64u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A90u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806AA4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806AA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806AB4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806AC4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806AD0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806AE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B00u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B38u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B44u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B48u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B68u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806BA4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806BA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806BB0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806BFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C08u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C14u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C20u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C28u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C30u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C38u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C4Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C68u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C90u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CD4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D1Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D24u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D54u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D60u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D64u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D80u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D90u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806DA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806DBCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806DC4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806DE8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E10u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E18u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E24u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E2Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E30u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E3Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E48u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806EACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806EB0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806EB8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806ECCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806ED4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806ED8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806EDCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806EF4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F10u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F1Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F28u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F3Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F70u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F78u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F90u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806FA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806FB0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806FBCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806FC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806FCCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806FD4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806FE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806FECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806FF8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807000u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880701Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807034u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880703Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807040u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807048u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807058u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807070u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807078u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807080u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880708Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088070A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088070C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088070C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088070D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088070F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807104u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880711Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807124u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807130u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807138u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807140u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807148u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807154u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880715Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807164u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807174u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807188u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807198u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088071A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088071C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807210u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807224u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880722Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880723Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880724Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807260u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807274u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807278u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088072A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088072F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880730Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880732Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807340u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807354u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807370u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880738Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088073ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088073C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088073D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088073F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807404u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807424u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880743Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807450u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807468u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880747Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807494u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088074A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088074BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088074D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088074F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807504u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807510u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807524u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807538u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880754Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807550u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807560u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807568u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880757Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088075ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088075C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088075C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088075D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088075DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088075FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880761Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807630u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807638u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807640u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807654u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880765Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880766Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880768Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088076A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088076B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088076C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088076CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088076ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880770Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807720u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807728u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807740u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880775Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807770u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807790u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088077A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088077B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088077BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088077CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088077E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807810u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807824u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880782Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807834u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807848u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880785Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807864u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807878u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807894u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088078A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088078C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088078DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088078E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807930u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880793Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807948u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807958u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807968u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807990u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088079A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088079A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088079C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088079D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088079FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807A04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807A28u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807A48u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807A68u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807A7Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807A9Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807AB0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807AD4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807ADCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807AF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807AF8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B64u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B74u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B78u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B88u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B90u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807BC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807BD4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807BDCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807BECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807BF4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807BFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C00u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C08u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C10u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C24u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C38u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C44u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C90u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CA4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CB8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CC0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CD0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CD4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CDCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CE4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CE8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CF4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D0Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D18u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D2Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D38u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D48u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D70u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807DA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807DB4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807DC4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807DCCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807DD4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807DDCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807DE4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E14u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E24u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E44u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E4Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E64u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E74u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E7Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E80u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E88u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807EB0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807EBCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807EF4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F0Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F24u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F78u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F90u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807FB0u, &recomp_unit_0000, "recomp_unit_0000");
}
} // namespace psprecomp
