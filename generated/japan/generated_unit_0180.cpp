#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0180[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 5, 0, 6, 7, 0, 0,
    0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 15, 0, 16, 0, 17, 0,
    0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 0, 26, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0,
    0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 33, 34, 0, 0, 0, 35, 0, 36, 0, 37, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40,
    41, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 47, 0, 0, 48, 0, 49, 0, 50, 51, 0, 52, 0, 53, 0, 54,
    0, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0,
    0, 65, 0, 66, 0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 76, 77, 0, 78, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0,
    0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 89,
    0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101,
    0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110,
    0, 0, 0, 111, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 0, 0, 118, 119, 0, 0, 120, 0, 0, 0,
    121, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 140, 141, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 153, 0, 0, 154, 0, 155,
    0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 159, 0, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 0, 0, 165, 0, 166, 0,
    167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 175, 0, 0, 176, 0, 177, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0,
    187, 0, 188, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 0, 196, 0, 197, 198, 0, 199, 0,
    0, 0, 200, 0, 201, 0, 0, 202, 0, 203, 0, 204, 205, 0, 206, 207, 0, 0, 208, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 212,
    0, 213, 214, 0, 215, 216, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0,
    0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 226, 0, 227, 0, 228, 229, 230, 0, 0, 0,
    231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 240, 0, 241, 0, 0,
    242, 243, 0, 0, 244, 0, 0, 0, 245, 0, 246, 0, 247, 0, 0, 248, 0, 0, 0, 249, 0, 250, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0,
    253, 0, 254, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 259, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0,
    0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 270, 0, 0, 271, 0, 272, 273, 0, 274, 0, 275, 0, 0, 0, 0, 276, 0, 277, 0, 278, 0,
    0, 0, 0, 279, 280, 0, 281, 0, 0, 0, 282, 0, 0, 283, 284, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0,
    0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0,
    0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305,
    0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 311, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0,
    0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0,
    335, 0, 336, 0, 337, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0,
    0, 0, 0, 0, 346, 0, 347, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352,
    0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 356, 0, 0, 0, 357, 0, 358, 0, 359, 360, 0, 361, 362,
    0, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 376, 0,
    377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 384, 0, 385, 0, 386, 0, 0, 0, 0, 387,
    0, 0, 0, 388, 0, 389, 0, 390, 0, 391, 0, 0, 392, 0, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 0, 396, 0, 397, 0, 0, 0,
    398, 0, 399, 0, 0, 0, 400, 0, 401, 0, 0, 0, 402, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 406, 0, 0,
    0, 407, 0, 408, 0, 409, 0, 0, 410, 0, 411, 0, 0, 0, 412, 0, 413, 0, 0, 414, 415, 0, 416, 417, 0, 418, 419, 0, 0, 420, 0, 421,
    0, 422, 0, 0, 0, 423, 424, 0, 425, 426, 0, 427, 428, 0, 429, 0, 0, 0, 430, 0, 431, 0, 432, 0, 433, 0, 0, 434, 0, 435, 0, 436,
    0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 444, 0, 445, 0, 0, 0, 446, 0, 447, 0, 448, 0, 449, 0, 0, 450, 0,
    451, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 455, 0, 456, 0, 457, 0, 458, 0, 0, 0, 0, 0, 459, 0, 460,
    0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 463, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 0, 0, 467, 0,
    0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 470, 471, 472, 0, 473, 0, 474, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 478,
    479, 480, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 484, 0, 485, 0, 0, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0, 0, 0, 0,
    491, 0, 492, 0, 0, 0, 493, 0, 494, 0, 0, 495, 0, 496, 0, 0, 497, 0, 0, 498, 0, 499, 500, 0, 501, 0, 0, 0, 502, 0, 0, 0,
    503, 0, 504, 0, 505, 0, 506, 0, 507, 0, 508, 0, 0, 509, 0, 510, 0, 511, 0, 0, 512, 0, 513, 514, 515, 0, 516, 0, 0, 0, 517, 0,
    0, 0, 518, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 0, 521, 522, 0, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 525, 0, 526, 0,
    527, 0, 528, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 531, 0, 0, 532, 0, 533, 0, 534, 0, 535, 0, 536, 0, 537, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 541, 0, 0, 0,
    0, 0, 542, 0, 543, 0, 0, 544, 545, 0, 0, 0, 0, 546, 547, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0,
    550, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 556, 0, 0,
    0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0,
    561, 0, 562, 0, 0, 563, 564, 0, 0, 0, 0, 565, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 569, 0, 570,
    0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 575, 0, 0, 0, 576, 0,
    577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0,
    0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 585, 0, 0, 586, 0, 587, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589,
    0, 0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 594, 0, 0, 0, 595, 0, 596, 0, 0, 0, 0, 0,
    0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 600, 0, 601, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 605,
    0, 0, 0, 606, 607, 0, 608, 0, 609, 0, 610, 0, 0, 0, 611, 0, 0, 612, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 616, 617, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0,
    0, 620, 0, 0, 621, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 625, 0, 0, 0, 0, 626, 0, 627, 0, 0, 628, 0, 0, 0, 0, 0,
    0, 0, 0, 629, 0, 0, 630, 0, 631, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 635, 0, 636, 0, 0, 637, 0, 638, 0, 639, 0, 0, 640, 0, 641, 0, 0, 642, 0, 643, 0, 0, 0, 0, 0, 0,
    644, 0, 0, 0, 0, 0, 645, 0, 646, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 653, 654, 0, 655, 656, 0, 0, 0, 657,
    0, 658, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 660, 0, 661, 0, 662, 0, 663, 0, 664, 0, 665, 0, 666, 0, 0, 0, 667, 0, 0, 668,
    0, 669, 0, 0, 0, 0, 0, 0, 0, 670, 671, 0, 672, 0, 0, 673, 0, 0, 0, 674, 0, 675, 0, 676, 0, 677, 0, 678, 0, 0, 0, 679,
    0, 680, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 683, 0, 0, 684, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 688, 689, 0, 0, 0, 690, 0, 691, 0, 0, 0, 692, 0, 0,
    693, 694, 0, 0, 695, 0, 696, 0, 697, 0, 698, 0, 699, 0, 0, 0, 0, 0, 0, 0, 700, 701, 0, 0, 702, 0, 0, 703, 0, 704, 0, 705,
    0, 0, 0, 0, 0, 706, 707, 0, 0, 708, 0, 709, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0,
    0, 712, 0, 713, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0,
    0, 0, 0, 718, 0, 0, 0, 0, 719, 0, 720, 0, 0, 0, 721, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0,
    0, 0, 0, 725, 0, 0, 726, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 728, 0, 729, 0, 730, 731, 0, 732, 0, 733, 0, 0, 0, 734, 0,
    735, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0,
    0, 0, 739, 0, 0, 740, 0, 0, 0, 0, 0, 741, 0, 0, 0, 742, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    744, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 746, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 749,
    0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 751, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 753, 0, 754, 0, 0, 755, 0, 756, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 761,
    0, 762, 0, 0, 0, 763, 0, 764, 0, 765, 0, 766, 0, 0, 0, 767, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    769, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 772, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0,
    774, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 778, 0, 0, 0, 0, 0, 779, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 782, 0, 0, 0, 0,
    0, 783, 0, 0, 0, 784, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 787, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 790, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 793,
    0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 795, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 798, 0, 0, 0, 0, 0, 799, 0, 0, 800, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0,
    0, 0, 803, 804, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 806, 0, 807, 0, 0, 0, 808, 0, 0, 809, 0, 810,
    0, 0, 811, 0, 812, 0, 0, 813, 0, 0, 814, 0, 0, 815, 0, 0, 0, 816, 0, 0, 817, 0, 0, 0, 818, 0, 819, 0, 0, 0, 820, 0,
    821, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 824, 0, 0, 0, 0, 825, 0, 0, 0, 0, 826, 0, 0, 0, 827,
    0, 0, 0, 0, 828, 0, 0, 829, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 831, 0, 0, 0, 832, 0, 833, 0, 0, 0, 0, 0, 834, 0,
    835, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 837, 0, 838, 0, 839, 840, 0, 0, 841, 0, 0, 842, 843, 0, 0, 0, 0, 844, 0,
    845, 0, 846, 0, 847, 0, 848, 0, 849, 0, 850, 0, 0, 851, 0, 852, 0, 0, 0, 0, 0, 853, 0, 0, 854, 0, 0, 0, 0, 855, 0, 856,
    0, 0, 857, 0, 0, 0, 0, 858, 0, 0, 859, 0, 0, 0, 0, 860, 0, 861, 0, 0, 0, 862, 0, 863, 0, 0, 0, 864, 0, 865, 0, 866,
    0, 867, 0, 868, 0, 869, 0, 870, 0, 871, 0, 872, 0, 0, 0, 0, 0, 0, 0, 0, 873, 0, 0, 874, 0, 875, 0, 876, 0, 877, 0, 878,
    0, 0, 0, 0, 0, 879, 0, 0, 0, 880, 0, 0, 0, 0, 881, 0, 0, 882, 883, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 884, 0, 0,
    0, 885, 0, 0, 0, 0, 0, 886, 887, 0, 0, 888, 0, 0, 0, 0, 0, 0, 889, 0, 890, 0, 891, 0, 0, 892, 0, 893, 0, 0, 0, 0,
    0, 894, 0, 0, 0, 0, 0, 0, 0, 895, 0, 896, 0, 0, 0, 897, 0, 0, 898, 0, 0, 0, 899, 0, 0, 0, 0, 900, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 901, 0, 902, 0, 903, 0, 904, 0, 0, 0, 0, 905, 0, 906, 0, 0, 0, 0, 0, 0, 907, 0, 0, 0, 908, 0, 909,
    0, 0, 910, 911, 0, 0, 0, 912, 0, 913, 0, 0, 914, 0, 0, 0, 915, 0, 916, 0, 917, 0, 918, 0, 919, 0, 0, 0, 920, 0, 0, 0,
    0, 921, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 922, 923, 0, 0, 924, 0, 0, 0, 925, 0, 926, 0, 927,
    0, 0, 928, 0, 0, 929, 0, 0, 0, 930, 0, 931, 0, 932, 0, 0, 0, 933, 0, 934, 0, 935, 0, 936, 0, 937, 0, 938, 0, 939, 0, 940,
    0, 0, 0, 0, 0, 0, 0, 0, 941, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 942, 0, 0, 943, 0, 0, 944, 0, 0, 0, 0, 945,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 946, 0, 0, 0, 947, 948, 0, 0, 0, 0, 949, 0, 950, 0, 0, 0, 0, 951, 952, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 953, 954, 0, 0, 955, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    956, 0, 0, 0, 0, 0, 0, 0, 0, 957, 0, 0, 958, 0, 959, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 960, 0, 961, 0, 962, 0, 963,
    0, 0, 0, 0, 0, 0, 964, 0, 0, 965, 0, 0, 0, 0, 0, 966, 0, 0, 0, 0, 0, 0, 0, 0, 0, 967, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 968, 0, 0, 0, 969, 0, 0, 0, 0, 0, 970, 0, 0, 0, 971, 0, 0, 0, 0, 0, 972, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 973, 0, 974, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 975, 0, 976, 977, 0, 0, 0, 0, 0, 0,
    0, 978, 0, 979, 0, 0, 0, 0, 0, 0, 980, 0, 981, 0, 982, 0, 0, 0, 0, 0, 0, 983, 0, 0, 0, 0, 0, 0, 984, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 985, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 986, 0, 0, 0, 0, 987, 0, 0, 0, 0, 0, 988,
};
void recomp_unit_0180_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AD4000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0180[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AD4000;
    case 2u: goto L_08AD4038;
    case 3u: goto L_08AD4054;
    case 4u: goto L_08AD405C;
    case 5u: goto L_08AD4068;
    case 6u: goto L_08AD4070;
    case 7u: goto L_08AD4074;
    case 8u: goto L_08AD4088;
    case 9u: goto L_08AD4090;
    case 10u: goto L_08AD40B0;
    case 11u: goto L_08AD40BC;
    case 12u: goto L_08AD40C8;
    case 13u: goto L_08AD40D0;
    case 14u: goto L_08AD40D8;
    case 15u: goto L_08AD40E8;
    case 16u: goto L_08AD40F0;
    case 17u: goto L_08AD40F8;
    case 18u: goto L_08AD4104;
    case 19u: goto L_08AD410C;
    case 20u: goto L_08AD4114;
    case 21u: goto L_08AD411C;
    case 22u: goto L_08AD4124;
    case 23u: goto L_08AD4134;
    case 24u: goto L_08AD4140;
    case 25u: goto L_08AD4148;
    case 26u: goto L_08AD4154;
    case 27u: goto L_08AD4158;
    case 28u: goto L_08AD4164;
    case 29u: goto L_08AD4170;
    case 30u: goto L_08AD4188;
    case 31u: goto L_08AD4194;
    case 32u: goto L_08AD41A0;
    case 33u: goto L_08AD41A8;
    case 34u: goto L_08AD41AC;
    case 35u: goto L_08AD41BC;
    case 36u: goto L_08AD41C4;
    case 37u: goto L_08AD41CC;
    case 38u: goto L_08AD41D4;
    case 39u: goto L_08AD41E0;
    case 40u: goto L_08AD41FC;
    case 41u: goto L_08AD4200;
    case 42u: goto L_08AD420C;
    case 43u: goto L_08AD4214;
    case 44u: goto L_08AD422C;
    case 45u: goto L_08AD4234;
    case 46u: goto L_08AD423C;
    case 47u: goto L_08AD4244;
    case 48u: goto L_08AD4250;
    case 49u: goto L_08AD4258;
    case 50u: goto L_08AD4260;
    case 51u: goto L_08AD4264;
    case 52u: goto L_08AD426C;
    case 53u: goto L_08AD4274;
    case 54u: goto L_08AD427C;
    case 55u: goto L_08AD4288;
    case 56u: goto L_08AD4294;
    case 57u: goto L_08AD42A4;
    case 58u: goto L_08AD42C0;
    case 59u: goto L_08AD42C8;
    case 60u: goto L_08AD42D8;
    case 61u: goto L_08AD42E0;
    case 62u: goto L_08AD42E8;
    case 63u: goto L_08AD42F0;
    case 64u: goto L_08AD42F8;
    case 65u: goto L_08AD4304;
    case 66u: goto L_08AD430C;
    case 67u: goto L_08AD4318;
    case 68u: goto L_08AD4328;
    case 69u: goto L_08AD4334;
    case 70u: goto L_08AD433C;
    case 71u: goto L_08AD4348;
    case 72u: goto L_08AD4354;
    case 73u: goto L_08AD4368;
    case 74u: goto L_08AD4394;
    case 75u: goto L_08AD439C;
    case 76u: goto L_08AD43B4;
    case 77u: goto L_08AD43B8;
    case 78u: goto L_08AD43C0;
    case 79u: goto L_08AD43C4;
    case 80u: goto L_08AD43E0;
    case 81u: goto L_08AD43F8;
    case 82u: goto L_08AD4418;
    case 83u: goto L_08AD442C;
    case 84u: goto L_08AD4448;
    case 85u: goto L_08AD4450;
    case 86u: goto L_08AD4464;
    case 87u: goto L_08AD446C;
    case 88u: goto L_08AD4474;
    case 89u: goto L_08AD447C;
    case 90u: goto L_08AD4484;
    case 91u: goto L_08AD44A0;
    case 92u: goto L_08AD44A8;
    case 93u: goto L_08AD44BC;
    case 94u: goto L_08AD44C4;
    case 95u: goto L_08AD44FC;
    case 96u: goto L_08AD4528;
    case 97u: goto L_08AD4530;
    case 98u: goto L_08AD4548;
    case 99u: goto L_08AD4550;
    case 100u: goto L_08AD4570;
    case 101u: goto L_08AD457C;
    case 102u: goto L_08AD4584;
    case 103u: goto L_08AD4590;
    case 104u: goto L_08AD45A0;
    case 105u: goto L_08AD45AC;
    case 106u: goto L_08AD45B8;
    case 107u: goto L_08AD45C8;
    case 108u: goto L_08AD45D0;
    case 109u: goto L_08AD45DC;
    case 110u: goto L_08AD45FC;
    case 111u: goto L_08AD460C;
    case 112u: goto L_08AD4618;
    case 113u: goto L_08AD4620;
    case 114u: goto L_08AD4628;
    case 115u: goto L_08AD4638;
    case 116u: goto L_08AD4644;
    case 117u: goto L_08AD464C;
    case 118u: goto L_08AD4660;
    case 119u: goto L_08AD4664;
    case 120u: goto L_08AD4670;
    case 121u: goto L_08AD4680;
    case 122u: goto L_08AD4690;
    case 123u: goto L_08AD4698;
    case 124u: goto L_08AD46AC;
    case 125u: goto L_08AD46EC;
    case 126u: goto L_08AD4710;
    case 127u: goto L_08AD4718;
    case 128u: goto L_08AD4724;
    case 129u: goto L_08AD474C;
    case 130u: goto L_08AD4758;
    case 131u: goto L_08AD4770;
    case 132u: goto L_08AD4788;
    case 133u: goto L_08AD4794;
    case 134u: goto L_08AD47C4;
    case 135u: goto L_08AD47D0;
    case 136u: goto L_08AD4810;
    case 137u: goto L_08AD482C;
    case 138u: goto L_08AD4844;
    case 139u: goto L_08AD4850;
    case 140u: goto L_08AD4858;
    case 141u: goto L_08AD485C;
    case 142u: goto L_08AD486C;
    case 143u: goto L_08AD4888;
    case 144u: goto L_08AD4890;
    case 145u: goto L_08AD4898;
    case 146u: goto L_08AD48A0;
    case 147u: goto L_08AD48A8;
    case 148u: goto L_08AD48B0;
    case 149u: goto L_08AD48BC;
    case 150u: goto L_08AD48C4;
    case 151u: goto L_08AD48CC;
    case 152u: goto L_08AD48E0;
    case 153u: goto L_08AD48E8;
    case 154u: goto L_08AD48F4;
    case 155u: goto L_08AD48FC;
    case 156u: goto L_08AD490C;
    case 157u: goto L_08AD4928;
    case 158u: goto L_08AD4930;
    case 159u: goto L_08AD4938;
    case 160u: goto L_08AD4944;
    case 161u: goto L_08AD494C;
    case 162u: goto L_08AD4954;
    case 163u: goto L_08AD495C;
    case 164u: goto L_08AD4964;
    case 165u: goto L_08AD4970;
    case 166u: goto L_08AD4978;
    case 167u: goto L_08AD4980;
    case 168u: goto L_08AD4988;
    case 169u: goto L_08AD4990;
    case 170u: goto L_08AD4998;
    case 171u: goto L_08AD49A0;
    case 172u: goto L_08AD49B4;
    case 173u: goto L_08AD49D4;
    case 174u: goto L_08AD49DC;
    case 175u: goto L_08AD49E4;
    case 176u: goto L_08AD49F0;
    case 177u: goto L_08AD49F8;
    case 178u: goto L_08AD4A00;
    case 179u: goto L_08AD4A20;
    case 180u: goto L_08AD4A2C;
    case 181u: goto L_08AD4A40;
    case 182u: goto L_08AD4A58;
    case 183u: goto L_08AD4A60;
    case 184u: goto L_08AD4A68;
    case 185u: goto L_08AD4A70;
    case 186u: goto L_08AD4A78;
    case 187u: goto L_08AD4A80;
    case 188u: goto L_08AD4A88;
    case 189u: goto L_08AD4A94;
    case 190u: goto L_08AD4AA4;
    case 191u: goto L_08AD4AB8;
    case 192u: goto L_08AD4AC0;
    case 193u: goto L_08AD4AC8;
    case 194u: goto L_08AD4AD0;
    case 195u: goto L_08AD4AD8;
    case 196u: goto L_08AD4AE4;
    case 197u: goto L_08AD4AEC;
    case 198u: goto L_08AD4AF0;
    case 199u: goto L_08AD4AF8;
    case 200u: goto L_08AD4B08;
    case 201u: goto L_08AD4B10;
    case 202u: goto L_08AD4B1C;
    case 203u: goto L_08AD4B24;
    case 204u: goto L_08AD4B2C;
    case 205u: goto L_08AD4B30;
    case 206u: goto L_08AD4B38;
    case 207u: goto L_08AD4B3C;
    case 208u: goto L_08AD4B48;
    case 209u: goto L_08AD4B5C;
    case 210u: goto L_08AD4B64;
    case 211u: goto L_08AD4B74;
    case 212u: goto L_08AD4B7C;
    case 213u: goto L_08AD4B84;
    case 214u: goto L_08AD4B88;
    case 215u: goto L_08AD4B90;
    case 216u: goto L_08AD4B94;
    case 217u: goto L_08AD4BA0;
    case 218u: goto L_08AD4BB8;
    case 219u: goto L_08AD4BCC;
    case 220u: goto L_08AD4BD4;
    case 221u: goto L_08AD4BE0;
    case 222u: goto L_08AD4BE8;
    case 223u: goto L_08AD4C0C;
    case 224u: goto L_08AD4C44;
    case 225u: goto L_08AD4C50;
    case 226u: goto L_08AD4C58;
    case 227u: goto L_08AD4C60;
    case 228u: goto L_08AD4C68;
    case 229u: goto L_08AD4C6C;
    case 230u: goto L_08AD4C70;
    case 231u: goto L_08AD4C80;
    case 232u: goto L_08AD4C88;
    case 233u: goto L_08AD4C90;
    case 234u: goto L_08AD4C98;
    case 235u: goto L_08AD4CA0;
    case 236u: goto L_08AD4CA8;
    case 237u: goto L_08AD4CC0;
    case 238u: goto L_08AD4CD8;
    case 239u: goto L_08AD4CE4;
    case 240u: goto L_08AD4CEC;
    case 241u: goto L_08AD4CF4;
    case 242u: goto L_08AD4D00;
    case 243u: goto L_08AD4D04;
    case 244u: goto L_08AD4D10;
    case 245u: goto L_08AD4D20;
    case 246u: goto L_08AD4D28;
    case 247u: goto L_08AD4D30;
    case 248u: goto L_08AD4D3C;
    case 249u: goto L_08AD4D4C;
    case 250u: goto L_08AD4D54;
    case 251u: goto L_08AD4D5C;
    case 252u: goto L_08AD4D68;
    case 253u: goto L_08AD4D80;
    case 254u: goto L_08AD4D88;
    case 255u: goto L_08AD4D94;
    case 256u: goto L_08AD4D9C;
    case 257u: goto L_08AD4DBC;
    case 258u: goto L_08AD4DC4;
    case 259u: goto L_08AD4DCC;
    case 260u: goto L_08AD4DDC;
    case 261u: goto L_08AD4DE4;
    case 262u: goto L_08AD4E10;
    case 263u: goto L_08AD4E18;
    case 264u: goto L_08AD4E2C;
    case 265u: goto L_08AD4E40;
    case 266u: goto L_08AD4E60;
    case 267u: goto L_08AD4E78;
    case 268u: goto L_08AD4E98;
    case 269u: goto L_08AD4EA0;
    case 270u: goto L_08AD4EAC;
    case 271u: goto L_08AD4EB8;
    case 272u: goto L_08AD4EC0;
    case 273u: goto L_08AD4EC4;
    case 274u: goto L_08AD4ECC;
    case 275u: goto L_08AD4ED4;
    case 276u: goto L_08AD4EE8;
    case 277u: goto L_08AD4EF0;
    case 278u: goto L_08AD4EF8;
    case 279u: goto L_08AD4F0C;
    case 280u: goto L_08AD4F10;
    case 281u: goto L_08AD4F18;
    case 282u: goto L_08AD4F28;
    case 283u: goto L_08AD4F34;
    case 284u: goto L_08AD4F38;
    case 285u: goto L_08AD4F3C;
    case 286u: goto L_08AD4F54;
    case 287u: goto L_08AD4F78;
    case 288u: goto L_08AD4F98;
    case 289u: goto L_08AD4FCC;
    case 290u: goto L_08AD5020;
    case 291u: goto L_08AD5028;
    case 292u: goto L_08AD5030;
    case 293u: goto L_08AD5038;
    case 294u: goto L_08AD5040;
    case 295u: goto L_08AD5048;
    case 296u: goto L_08AD5064;
    case 297u: goto L_08AD5088;
    case 298u: goto L_08AD5090;
    case 299u: goto L_08AD50AC;
    case 300u: goto L_08AD50B8;
    case 301u: goto L_08AD50C0;
    case 302u: goto L_08AD50CC;
    case 303u: goto L_08AD513C;
    case 304u: goto L_08AD5168;
    case 305u: goto L_08AD517C;
    case 306u: goto L_08AD5188;
    case 307u: goto L_08AD519C;
    case 308u: goto L_08AD51AC;
    case 309u: goto L_08AD51CC;
    case 310u: goto L_08AD51DC;
    case 311u: goto L_08AD51E0;
    case 312u: goto L_08AD520C;
    case 313u: goto L_08AD521C;
    case 314u: goto L_08AD5238;
    case 315u: goto L_08AD524C;
    case 316u: goto L_08AD528C;
    case 317u: goto L_08AD52AC;
    case 318u: goto L_08AD52C0;
    case 319u: goto L_08AD52E0;
    case 320u: goto L_08AD52F8;
    case 321u: goto L_08AD5310;
    case 322u: goto L_08AD5328;
    case 323u: goto L_08AD5340;
    case 324u: goto L_08AD5358;
    case 325u: goto L_08AD5374;
    case 326u: goto L_08AD5390;
    case 327u: goto L_08AD5398;
    case 328u: goto L_08AD53B0;
    case 329u: goto L_08AD53B8;
    case 330u: goto L_08AD53C4;
    case 331u: goto L_08AD53DC;
    case 332u: goto L_08AD5410;
    case 333u: goto L_08AD5470;
    case 334u: goto L_08AD5478;
    case 335u: goto L_08AD5480;
    case 336u: goto L_08AD5488;
    case 337u: goto L_08AD5490;
    case 338u: goto L_08AD5494;
    case 339u: goto L_08AD54B8;
    case 340u: goto L_08AD54BC;
    case 341u: goto L_08AD5510;
    case 342u: goto L_08AD5530;
    case 343u: goto L_08AD5548;
    case 344u: goto L_08AD5554;
    case 345u: goto L_08AD556C;
    case 346u: goto L_08AD5590;
    case 347u: goto L_08AD5598;
    case 348u: goto L_08AD55A4;
    case 349u: goto L_08AD55AC;
    case 350u: goto L_08AD55CC;
    case 351u: goto L_08AD55F0;
    case 352u: goto L_08AD55FC;
    case 353u: goto L_08AD5614;
    case 354u: goto L_08AD5638;
    case 355u: goto L_08AD5640;
    case 356u: goto L_08AD564C;
    case 357u: goto L_08AD565C;
    case 358u: goto L_08AD5664;
    case 359u: goto L_08AD566C;
    case 360u: goto L_08AD5670;
    case 361u: goto L_08AD5678;
    case 362u: goto L_08AD567C;
    case 363u: goto L_08AD5688;
    case 364u: goto L_08AD5690;
    case 365u: goto L_08AD5698;
    case 366u: goto L_08AD56A0;
    case 367u: goto L_08AD56A8;
    case 368u: goto L_08AD56B0;
    case 369u: goto L_08AD56B8;
    case 370u: goto L_08AD5700;
    case 371u: goto L_08AD5720;
    case 372u: goto L_08AD572C;
    case 373u: goto L_08AD5744;
    case 374u: goto L_08AD5768;
    case 375u: goto L_08AD5770;
    case 376u: goto L_08AD5778;
    case 377u: goto L_08AD5780;
    case 378u: goto L_08AD5794;
    case 379u: goto L_08AD57E0;
    case 380u: goto L_08AD5808;
    case 381u: goto L_08AD581C;
    case 382u: goto L_08AD5844;
    case 383u: goto L_08AD584C;
    case 384u: goto L_08AD5858;
    case 385u: goto L_08AD5860;
    case 386u: goto L_08AD5868;
    case 387u: goto L_08AD587C;
    case 388u: goto L_08AD588C;
    case 389u: goto L_08AD5894;
    case 390u: goto L_08AD589C;
    case 391u: goto L_08AD58A4;
    case 392u: goto L_08AD58B0;
    case 393u: goto L_08AD58C0;
    case 394u: goto L_08AD58CC;
    case 395u: goto L_08AD58D8;
    case 396u: goto L_08AD58E8;
    case 397u: goto L_08AD58F0;
    case 398u: goto L_08AD5900;
    case 399u: goto L_08AD5908;
    case 400u: goto L_08AD5918;
    case 401u: goto L_08AD5920;
    case 402u: goto L_08AD5930;
    case 403u: goto L_08AD5938;
    case 404u: goto L_08AD5944;
    case 405u: goto L_08AD5970;
    case 406u: goto L_08AD5974;
    case 407u: goto L_08AD5984;
    case 408u: goto L_08AD598C;
    case 409u: goto L_08AD5994;
    case 410u: goto L_08AD59A0;
    case 411u: goto L_08AD59A8;
    case 412u: goto L_08AD59B8;
    case 413u: goto L_08AD59C0;
    case 414u: goto L_08AD59CC;
    case 415u: goto L_08AD59D0;
    case 416u: goto L_08AD59D8;
    case 417u: goto L_08AD59DC;
    case 418u: goto L_08AD59E4;
    case 419u: goto L_08AD59E8;
    case 420u: goto L_08AD59F4;
    case 421u: goto L_08AD59FC;
    case 422u: goto L_08AD5A04;
    case 423u: goto L_08AD5A14;
    case 424u: goto L_08AD5A18;
    case 425u: goto L_08AD5A20;
    case 426u: goto L_08AD5A24;
    case 427u: goto L_08AD5A2C;
    case 428u: goto L_08AD5A30;
    case 429u: goto L_08AD5A38;
    case 430u: goto L_08AD5A48;
    case 431u: goto L_08AD5A50;
    case 432u: goto L_08AD5A58;
    case 433u: goto L_08AD5A60;
    case 434u: goto L_08AD5A6C;
    case 435u: goto L_08AD5A74;
    case 436u: goto L_08AD5A7C;
    case 437u: goto L_08AD5A84;
    case 438u: goto L_08AD5A8C;
    case 439u: goto L_08AD5A94;
    case 440u: goto L_08AD5A9C;
    case 441u: goto L_08AD5AA4;
    case 442u: goto L_08AD5AAC;
    case 443u: goto L_08AD5AB4;
    case 444u: goto L_08AD5ABC;
    case 445u: goto L_08AD5AC4;
    case 446u: goto L_08AD5AD4;
    case 447u: goto L_08AD5ADC;
    case 448u: goto L_08AD5AE4;
    case 449u: goto L_08AD5AEC;
    case 450u: goto L_08AD5AF8;
    case 451u: goto L_08AD5B00;
    case 452u: goto L_08AD5B24;
    case 453u: goto L_08AD5B30;
    case 454u: goto L_08AD5B3C;
    case 455u: goto L_08AD5B44;
    case 456u: goto L_08AD5B4C;
    case 457u: goto L_08AD5B54;
    case 458u: goto L_08AD5B5C;
    case 459u: goto L_08AD5B74;
    case 460u: goto L_08AD5B7C;
    case 461u: goto L_08AD5B98;
    case 462u: goto L_08AD5BB8;
    case 463u: goto L_08AD5BBC;
    case 464u: goto L_08AD5BD0;
    case 465u: goto L_08AD5BDC;
    case 466u: goto L_08AD5BE8;
    case 467u: goto L_08AD5BF8;
    case 468u: goto L_08AD5C04;
    case 469u: goto L_08AD5C20;
    case 470u: goto L_08AD5C28;
    case 471u: goto L_08AD5C2C;
    case 472u: goto L_08AD5C30;
    case 473u: goto L_08AD5C38;
    case 474u: goto L_08AD5C40;
    case 475u: goto L_08AD5C48;
    case 476u: goto L_08AD5C58;
    case 477u: goto L_08AD5C74;
    case 478u: goto L_08AD5C7C;
    case 479u: goto L_08AD5C80;
    case 480u: goto L_08AD5C84;
    case 481u: goto L_08AD5C8C;
    case 482u: goto L_08AD5CA8;
    case 483u: goto L_08AD5CB0;
    case 484u: goto L_08AD5CB8;
    case 485u: goto L_08AD5CC0;
    case 486u: goto L_08AD5CCC;
    case 487u: goto L_08AD5CD4;
    case 488u: goto L_08AD5CDC;
    case 489u: goto L_08AD5CE4;
    case 490u: goto L_08AD5CEC;
    case 491u: goto L_08AD5D00;
    case 492u: goto L_08AD5D08;
    case 493u: goto L_08AD5D18;
    case 494u: goto L_08AD5D20;
    case 495u: goto L_08AD5D2C;
    case 496u: goto L_08AD5D34;
    case 497u: goto L_08AD5D40;
    case 498u: goto L_08AD5D4C;
    case 499u: goto L_08AD5D54;
    case 500u: goto L_08AD5D58;
    case 501u: goto L_08AD5D60;
    case 502u: goto L_08AD5D70;
    case 503u: goto L_08AD5D80;
    case 504u: goto L_08AD5D88;
    case 505u: goto L_08AD5D90;
    case 506u: goto L_08AD5D98;
    case 507u: goto L_08AD5DA0;
    case 508u: goto L_08AD5DA8;
    case 509u: goto L_08AD5DB4;
    case 510u: goto L_08AD5DBC;
    case 511u: goto L_08AD5DC4;
    case 512u: goto L_08AD5DD0;
    case 513u: goto L_08AD5DD8;
    case 514u: goto L_08AD5DDC;
    case 515u: goto L_08AD5DE0;
    case 516u: goto L_08AD5DE8;
    case 517u: goto L_08AD5DF8;
    case 518u: goto L_08AD5E08;
    case 519u: goto L_08AD5E10;
    case 520u: goto L_08AD5E18;
    case 521u: goto L_08AD5E38;
    case 522u: goto L_08AD5E3C;
    case 523u: goto L_08AD5E50;
    case 524u: goto L_08AD5E60;
    case 525u: goto L_08AD5E70;
    case 526u: goto L_08AD5E78;
    case 527u: goto L_08AD5E80;
    case 528u: goto L_08AD5E88;
    case 529u: goto L_08AD5E9C;
    case 530u: goto L_08AD5EAC;
    case 531u: goto L_08AD5EB8;
    case 532u: goto L_08AD5EC4;
    case 533u: goto L_08AD5ECC;
    case 534u: goto L_08AD5ED4;
    case 535u: goto L_08AD5EDC;
    case 536u: goto L_08AD5EE4;
    case 537u: goto L_08AD5EEC;
    case 538u: goto L_08AD5F30;
    case 539u: goto L_08AD5F40;
    case 540u: goto L_08AD5F68;
    case 541u: goto L_08AD5F70;
    case 542u: goto L_08AD5F88;
    case 543u: goto L_08AD5F90;
    case 544u: goto L_08AD5F9C;
    case 545u: goto L_08AD5FA0;
    case 546u: goto L_08AD5FB4;
    case 547u: goto L_08AD5FB8;
    case 548u: goto L_08AD5FD4;
    case 549u: goto L_08AD5FE8;
    case 550u: goto L_08AD6000;
    case 551u: goto L_08AD6008;
    case 552u: goto L_08AD602C;
    case 553u: goto L_08AD6048;
    case 554u: goto L_08AD605C;
    case 555u: goto L_08AD606C;
    case 556u: goto L_08AD6074;
    case 557u: goto L_08AD6084;
    case 558u: goto L_08AD608C;
    case 559u: goto L_08AD60CC;
    case 560u: goto L_08AD60DC;
    case 561u: goto L_08AD6100;
    case 562u: goto L_08AD6108;
    case 563u: goto L_08AD6114;
    case 564u: goto L_08AD6118;
    case 565u: goto L_08AD612C;
    case 566u: goto L_08AD6130;
    case 567u: goto L_08AD6148;
    case 568u: goto L_08AD615C;
    case 569u: goto L_08AD6174;
    case 570u: goto L_08AD617C;
    case 571u: goto L_08AD61A0;
    case 572u: goto L_08AD61BC;
    case 573u: goto L_08AD61D0;
    case 574u: goto L_08AD61E0;
    case 575u: goto L_08AD61E8;
    case 576u: goto L_08AD61F8;
    case 577u: goto L_08AD6200;
    case 578u: goto L_08AD6238;
    case 579u: goto L_08AD6254;
    case 580u: goto L_08AD6268;
    case 581u: goto L_08AD6274;
    case 582u: goto L_08AD628C;
    case 583u: goto L_08AD62A8;
    case 584u: goto L_08AD62B0;
    case 585u: goto L_08AD62C0;
    case 586u: goto L_08AD62CC;
    case 587u: goto L_08AD62D4;
    case 588u: goto L_08AD62DC;
    case 589u: goto L_08AD62FC;
    case 590u: goto L_08AD630C;
    case 591u: goto L_08AD6320;
    case 592u: goto L_08AD632C;
    case 593u: goto L_08AD6344;
    case 594u: goto L_08AD6350;
    case 595u: goto L_08AD6360;
    case 596u: goto L_08AD6368;
    case 597u: goto L_08AD638C;
    case 598u: goto L_08AD63A8;
    case 599u: goto L_08AD63B0;
    case 600u: goto L_08AD63BC;
    case 601u: goto L_08AD63C4;
    case 602u: goto L_08AD63C8;
    case 603u: goto L_08AD63E0;
    case 604u: goto L_08AD63F0;
    case 605u: goto L_08AD63FC;
    case 606u: goto L_08AD640C;
    case 607u: goto L_08AD6410;
    case 608u: goto L_08AD6418;
    case 609u: goto L_08AD6420;
    case 610u: goto L_08AD6428;
    case 611u: goto L_08AD6438;
    case 612u: goto L_08AD6444;
    case 613u: goto L_08AD6458;
    case 614u: goto L_08AD6468;
    case 615u: goto L_08AD649C;
    case 616u: goto L_08AD64A8;
    case 617u: goto L_08AD64AC;
    case 618u: goto L_08AD64D0;
    case 619u: goto L_08AD64F4;
    case 620u: goto L_08AD6504;
    case 621u: goto L_08AD6510;
    case 622u: goto L_08AD651C;
    case 623u: goto L_08AD6548;
    case 624u: goto L_08AD65B8;
    case 625u: goto L_08AD65C0;
    case 626u: goto L_08AD65D4;
    case 627u: goto L_08AD65DC;
    case 628u: goto L_08AD65E8;
    case 629u: goto L_08AD660C;
    case 630u: goto L_08AD6618;
    case 631u: goto L_08AD6620;
    case 632u: goto L_08AD662C;
    case 633u: goto L_08AD6640;
    case 634u: goto L_08AD6658;
    case 635u: goto L_08AD6698;
    case 636u: goto L_08AD66A0;
    case 637u: goto L_08AD66AC;
    case 638u: goto L_08AD66B4;
    case 639u: goto L_08AD66BC;
    case 640u: goto L_08AD66C8;
    case 641u: goto L_08AD66D0;
    case 642u: goto L_08AD66DC;
    case 643u: goto L_08AD66E4;
    case 644u: goto L_08AD6700;
    case 645u: goto L_08AD6718;
    case 646u: goto L_08AD6720;
    case 647u: goto L_08AD673C;
    case 648u: goto L_08AD6758;
    case 649u: goto L_08AD6790;
    case 650u: goto L_08AD67A8;
    case 651u: goto L_08AD67D0;
    case 652u: goto L_08AD67D8;
    case 653u: goto L_08AD67DC;
    case 654u: goto L_08AD67E0;
    case 655u: goto L_08AD67E8;
    case 656u: goto L_08AD67EC;
    case 657u: goto L_08AD67FC;
    case 658u: goto L_08AD6804;
    case 659u: goto L_08AD6818;
    case 660u: goto L_08AD6830;
    case 661u: goto L_08AD6838;
    case 662u: goto L_08AD6840;
    case 663u: goto L_08AD6848;
    case 664u: goto L_08AD6850;
    case 665u: goto L_08AD6858;
    case 666u: goto L_08AD6860;
    case 667u: goto L_08AD6870;
    case 668u: goto L_08AD687C;
    case 669u: goto L_08AD6884;
    case 670u: goto L_08AD68A4;
    case 671u: goto L_08AD68A8;
    case 672u: goto L_08AD68B0;
    case 673u: goto L_08AD68BC;
    case 674u: goto L_08AD68CC;
    case 675u: goto L_08AD68D4;
    case 676u: goto L_08AD68DC;
    case 677u: goto L_08AD68E4;
    case 678u: goto L_08AD68EC;
    case 679u: goto L_08AD68FC;
    case 680u: goto L_08AD6904;
    case 681u: goto L_08AD690C;
    case 682u: goto L_08AD693C;
    case 683u: goto L_08AD6948;
    case 684u: goto L_08AD6954;
    case 685u: goto L_08AD695C;
    case 686u: goto L_08AD6A10;
    case 687u: goto L_08AD6A3C;
    case 688u: goto L_08AD6A48;
    case 689u: goto L_08AD6A4C;
    case 690u: goto L_08AD6A5C;
    case 691u: goto L_08AD6A64;
    case 692u: goto L_08AD6A74;
    case 693u: goto L_08AD6A80;
    case 694u: goto L_08AD6A84;
    case 695u: goto L_08AD6A90;
    case 696u: goto L_08AD6A98;
    case 697u: goto L_08AD6AA0;
    case 698u: goto L_08AD6AA8;
    case 699u: goto L_08AD6AB0;
    case 700u: goto L_08AD6AD0;
    case 701u: goto L_08AD6AD4;
    case 702u: goto L_08AD6AE0;
    case 703u: goto L_08AD6AEC;
    case 704u: goto L_08AD6AF4;
    case 705u: goto L_08AD6AFC;
    case 706u: goto L_08AD6B14;
    case 707u: goto L_08AD6B18;
    case 708u: goto L_08AD6B24;
    case 709u: goto L_08AD6B2C;
    case 710u: goto L_08AD6B34;
    case 711u: goto L_08AD6B6C;
    case 712u: goto L_08AD6B84;
    case 713u: goto L_08AD6B8C;
    case 714u: goto L_08AD6B94;
    case 715u: goto L_08AD6BA8;
    case 716u: goto L_08AD6C44;
    case 717u: goto L_08AD6C6C;
    case 718u: goto L_08AD6C8C;
    case 719u: goto L_08AD6CA0;
    case 720u: goto L_08AD6CA8;
    case 721u: goto L_08AD6CB8;
    case 722u: goto L_08AD6CC4;
    case 723u: goto L_08AD6CD4;
    case 724u: goto L_08AD6CEC;
    case 725u: goto L_08AD6D0C;
    case 726u: goto L_08AD6D18;
    case 727u: goto L_08AD6D30;
    case 728u: goto L_08AD6D44;
    case 729u: goto L_08AD6D4C;
    case 730u: goto L_08AD6D54;
    case 731u: goto L_08AD6D58;
    case 732u: goto L_08AD6D60;
    case 733u: goto L_08AD6D68;
    case 734u: goto L_08AD6D78;
    case 735u: goto L_08AD6D80;
    case 736u: goto L_08AD6D8C;
    case 737u: goto L_08AD6D9C;
    case 738u: goto L_08AD6DEC;
    case 739u: goto L_08AD6E08;
    case 740u: goto L_08AD6E14;
    case 741u: goto L_08AD6E2C;
    case 742u: goto L_08AD6E3C;
    case 743u: goto L_08AD6E4C;
    case 744u: goto L_08AD6E80;
    case 745u: goto L_08AD6EA4;
    case 746u: goto L_08AD6EB0;
    case 747u: goto L_08AD6EC8;
    case 748u: goto L_08AD6EDC;
    case 749u: goto L_08AD6EFC;
    case 750u: goto L_08AD6F1C;
    case 751u: goto L_08AD6F28;
    case 752u: goto L_08AD6F40;
    case 753u: goto L_08AD6F54;
    case 754u: goto L_08AD6F5C;
    case 755u: goto L_08AD6F68;
    case 756u: goto L_08AD6F70;
    case 757u: goto L_08AD6F9C;
    case 758u: goto L_08AD6FAC;
    case 759u: goto L_08AD6FC8;
    case 760u: goto L_08AD6FEC;
    case 761u: goto L_08AD6FFC;
    case 762u: goto L_08AD7004;
    case 763u: goto L_08AD7014;
    case 764u: goto L_08AD701C;
    case 765u: goto L_08AD7024;
    case 766u: goto L_08AD702C;
    case 767u: goto L_08AD703C;
    case 768u: goto L_08AD7044;
    case 769u: goto L_08AD7080;
    case 770u: goto L_08AD70A0;
    case 771u: goto L_08AD70C0;
    case 772u: goto L_08AD70CC;
    case 773u: goto L_08AD70E4;
    case 774u: goto L_08AD7100;
    case 775u: goto L_08AD7108;
    case 776u: goto L_08AD7134;
    case 777u: goto L_08AD7154;
    case 778u: goto L_08AD7160;
    case 779u: goto L_08AD7178;
    case 780u: goto L_08AD71BC;
    case 781u: goto L_08AD71E0;
    case 782u: goto L_08AD71EC;
    case 783u: goto L_08AD7204;
    case 784u: goto L_08AD7214;
    case 785u: goto L_08AD7218;
    case 786u: goto L_08AD7244;
    case 787u: goto L_08AD7250;
    case 788u: goto L_08AD7268;
    case 789u: goto L_08AD72A0;
    case 790u: goto L_08AD72AC;
    case 791u: goto L_08AD72C8;
    case 792u: goto L_08AD72D8;
    case 793u: goto L_08AD72FC;
    case 794u: goto L_08AD7320;
    case 795u: goto L_08AD732C;
    case 796u: goto L_08AD7344;
    case 797u: goto L_08AD735C;
    case 798u: goto L_08AD738C;
    case 799u: goto L_08AD73A4;
    case 800u: goto L_08AD73B0;
    case 801u: goto L_08AD73C8;
    case 802u: goto L_08AD73F0;
    case 803u: goto L_08AD7408;
    case 804u: goto L_08AD740C;
    case 805u: goto L_08AD7440;
    case 806u: goto L_08AD7450;
    case 807u: goto L_08AD7458;
    case 808u: goto L_08AD7468;
    case 809u: goto L_08AD7474;
    case 810u: goto L_08AD747C;
    case 811u: goto L_08AD7488;
    case 812u: goto L_08AD7490;
    case 813u: goto L_08AD749C;
    case 814u: goto L_08AD74A8;
    case 815u: goto L_08AD74B4;
    case 816u: goto L_08AD74C4;
    case 817u: goto L_08AD74D0;
    case 818u: goto L_08AD74E0;
    case 819u: goto L_08AD74E8;
    case 820u: goto L_08AD74F8;
    case 821u: goto L_08AD7500;
    case 822u: goto L_08AD7518;
    case 823u: goto L_08AD752C;
    case 824u: goto L_08AD7544;
    case 825u: goto L_08AD7558;
    case 826u: goto L_08AD756C;
    case 827u: goto L_08AD757C;
    case 828u: goto L_08AD7590;
    case 829u: goto L_08AD759C;
    case 830u: goto L_08AD75B0;
    case 831u: goto L_08AD75C8;
    case 832u: goto L_08AD75D8;
    case 833u: goto L_08AD75E0;
    case 834u: goto L_08AD75F8;
    case 835u: goto L_08AD7600;
    case 836u: goto L_08AD7624;
    case 837u: goto L_08AD7634;
    case 838u: goto L_08AD763C;
    case 839u: goto L_08AD7644;
    case 840u: goto L_08AD7648;
    case 841u: goto L_08AD7654;
    case 842u: goto L_08AD7660;
    case 843u: goto L_08AD7664;
    case 844u: goto L_08AD7678;
    case 845u: goto L_08AD7680;
    case 846u: goto L_08AD7688;
    case 847u: goto L_08AD7690;
    case 848u: goto L_08AD7698;
    case 849u: goto L_08AD76A0;
    case 850u: goto L_08AD76A8;
    case 851u: goto L_08AD76B4;
    case 852u: goto L_08AD76BC;
    case 853u: goto L_08AD76D4;
    case 854u: goto L_08AD76E0;
    case 855u: goto L_08AD76F4;
    case 856u: goto L_08AD76FC;
    case 857u: goto L_08AD7708;
    case 858u: goto L_08AD771C;
    case 859u: goto L_08AD7728;
    case 860u: goto L_08AD773C;
    case 861u: goto L_08AD7744;
    case 862u: goto L_08AD7754;
    case 863u: goto L_08AD775C;
    case 864u: goto L_08AD776C;
    case 865u: goto L_08AD7774;
    case 866u: goto L_08AD777C;
    case 867u: goto L_08AD7784;
    case 868u: goto L_08AD778C;
    case 869u: goto L_08AD7794;
    case 870u: goto L_08AD779C;
    case 871u: goto L_08AD77A4;
    case 872u: goto L_08AD77AC;
    case 873u: goto L_08AD77D0;
    case 874u: goto L_08AD77DC;
    case 875u: goto L_08AD77E4;
    case 876u: goto L_08AD77EC;
    case 877u: goto L_08AD77F4;
    case 878u: goto L_08AD77FC;
    case 879u: goto L_08AD7814;
    case 880u: goto L_08AD7824;
    case 881u: goto L_08AD7838;
    case 882u: goto L_08AD7844;
    case 883u: goto L_08AD7848;
    case 884u: goto L_08AD7874;
    case 885u: goto L_08AD7884;
    case 886u: goto L_08AD789C;
    case 887u: goto L_08AD78A0;
    case 888u: goto L_08AD78AC;
    case 889u: goto L_08AD78C8;
    case 890u: goto L_08AD78D0;
    case 891u: goto L_08AD78D8;
    case 892u: goto L_08AD78E4;
    case 893u: goto L_08AD78EC;
    case 894u: goto L_08AD7904;
    case 895u: goto L_08AD7924;
    case 896u: goto L_08AD792C;
    case 897u: goto L_08AD793C;
    case 898u: goto L_08AD7948;
    case 899u: goto L_08AD7958;
    case 900u: goto L_08AD796C;
    case 901u: goto L_08AD7994;
    case 902u: goto L_08AD799C;
    case 903u: goto L_08AD79A4;
    case 904u: goto L_08AD79AC;
    case 905u: goto L_08AD79C0;
    case 906u: goto L_08AD79C8;
    case 907u: goto L_08AD79E4;
    case 908u: goto L_08AD79F4;
    case 909u: goto L_08AD79FC;
    case 910u: goto L_08AD7A08;
    case 911u: goto L_08AD7A0C;
    case 912u: goto L_08AD7A1C;
    case 913u: goto L_08AD7A24;
    case 914u: goto L_08AD7A30;
    case 915u: goto L_08AD7A40;
    case 916u: goto L_08AD7A48;
    case 917u: goto L_08AD7A50;
    case 918u: goto L_08AD7A58;
    case 919u: goto L_08AD7A60;
    case 920u: goto L_08AD7A70;
    case 921u: goto L_08AD7A84;
    case 922u: goto L_08AD7ACC;
    case 923u: goto L_08AD7AD0;
    case 924u: goto L_08AD7ADC;
    case 925u: goto L_08AD7AEC;
    case 926u: goto L_08AD7AF4;
    case 927u: goto L_08AD7AFC;
    case 928u: goto L_08AD7B08;
    case 929u: goto L_08AD7B14;
    case 930u: goto L_08AD7B24;
    case 931u: goto L_08AD7B2C;
    case 932u: goto L_08AD7B34;
    case 933u: goto L_08AD7B44;
    case 934u: goto L_08AD7B4C;
    case 935u: goto L_08AD7B54;
    case 936u: goto L_08AD7B5C;
    case 937u: goto L_08AD7B64;
    case 938u: goto L_08AD7B6C;
    case 939u: goto L_08AD7B74;
    case 940u: goto L_08AD7B7C;
    case 941u: goto L_08AD7BA0;
    case 942u: goto L_08AD7BD0;
    case 943u: goto L_08AD7BDC;
    case 944u: goto L_08AD7BE8;
    case 945u: goto L_08AD7BFC;
    case 946u: goto L_08AD7C28;
    case 947u: goto L_08AD7C38;
    case 948u: goto L_08AD7C3C;
    case 949u: goto L_08AD7C50;
    case 950u: goto L_08AD7C58;
    case 951u: goto L_08AD7C6C;
    case 952u: goto L_08AD7C70;
    case 953u: goto L_08AD7CBC;
    case 954u: goto L_08AD7CC0;
    case 955u: goto L_08AD7CCC;
    case 956u: goto L_08AD7D00;
    case 957u: goto L_08AD7D24;
    case 958u: goto L_08AD7D30;
    case 959u: goto L_08AD7D38;
    case 960u: goto L_08AD7D64;
    case 961u: goto L_08AD7D6C;
    case 962u: goto L_08AD7D74;
    case 963u: goto L_08AD7D7C;
    case 964u: goto L_08AD7D98;
    case 965u: goto L_08AD7DA4;
    case 966u: goto L_08AD7DBC;
    case 967u: goto L_08AD7DE4;
    case 968u: goto L_08AD7E14;
    case 969u: goto L_08AD7E24;
    case 970u: goto L_08AD7E3C;
    case 971u: goto L_08AD7E4C;
    case 972u: goto L_08AD7E64;
    case 973u: goto L_08AD7E90;
    case 974u: goto L_08AD7E98;
    case 975u: goto L_08AD7ED8;
    case 976u: goto L_08AD7EE0;
    case 977u: goto L_08AD7EE4;
    case 978u: goto L_08AD7F04;
    case 979u: goto L_08AD7F0C;
    case 980u: goto L_08AD7F28;
    case 981u: goto L_08AD7F30;
    case 982u: goto L_08AD7F38;
    case 983u: goto L_08AD7F54;
    case 984u: goto L_08AD7F70;
    case 985u: goto L_08AD7F9C;
    case 986u: goto L_08AD7FCC;
    case 987u: goto L_08AD7FE0;
    case 988u: goto L_08AD7FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AD4000:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4038:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AD4070;
      }
      goto L_08AD4054;
    }
L_08AD4054:
    ctx.set_gpr(31, 0x08AD405Cu);
    // nop
    goto L_08AD42A4;
L_08AD405C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AD4074;
    }
    goto L_08AD4068;
L_08AD4068:
    ctx.set_gpr(31, 0x08AD4070u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AD4088;
L_08AD4070:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AD4074;
L_08AD4074:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4088:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08AD4090:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD4170;
      }
      goto L_08AD40B0;
    }
L_08AD40B0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AD41A0;
      }
      goto L_08AD40BC;
    }
L_08AD40BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD4134;
      }
      goto L_08AD40C8;
    }
L_08AD40C8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD40D8;
      }
      goto L_08AD40D0;
    }
L_08AD40D0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08AD4158;
      }
      goto L_08AD40D8;
    }
L_08AD40D8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23972)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD411C;
      }
      goto L_08AD40E8;
    }
L_08AD40E8:
    ctx.set_gpr(31, 0x08AD40F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AD40F0u) goto L_08AD40F0;
    return;
L_08AD40F0:
    ctx.set_gpr(31, 0x08AD40F8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08AD40F8u) goto L_08AD40F8;
    return;
L_08AD40F8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08AD4104u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AD420C;
L_08AD4104:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4114;
      }
      goto L_08AD410C;
    }
L_08AD410C:
    ctx.set_gpr(31, 0x08AD4114u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3FFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD4114u) goto L_08AD4114;
    return;
L_08AD4114:
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23972), ctx.gpr[2]);
    goto L_08AD411C;
L_08AD411C:
    ctx.set_gpr(31, 0x08AD4124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 167u, 0x08848AFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD4124u) goto L_08AD4124;
    return;
L_08AD4124:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AD4154;
      }
      goto L_08AD4134;
    }
L_08AD4134:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(31, 0x08AD4140u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23972)));
    goto L_08AD4214;
L_08AD4140:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4154;
      }
      goto L_08AD4148;
    }
L_08AD4148:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_08AD4154;
L_08AD4154:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08AD4158;
L_08AD4158:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AD4200;
    }
    goto L_08AD4164;
L_08AD4164:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_08AD41FC;
      }
      goto L_08AD4170;
    }
L_08AD4170:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AD4188u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23972)));
    goto L_08AD4368;
L_08AD4188:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD41FC;
      }
      goto L_08AD4194;
    }
L_08AD4194:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_08AD41FC;
      }
      goto L_08AD41A0;
    }
L_08AD41A0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AD41AC;
      }
      goto L_08AD41A8;
    }
L_08AD41A8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_08AD41AC;
L_08AD41AC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23972)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD41CC;
      }
      goto L_08AD41BC;
    }
L_08AD41BC:
    ctx.set_gpr(31, 0x08AD41C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD4038;
L_08AD41C4:
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23972), 0u);
    goto L_08AD41CC;
L_08AD41CC:
    ctx.set_gpr(31, 0x08AD41D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD41D4u) goto L_08AD41D4;
    return;
L_08AD41D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD41E0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08AD41E0u) goto L_08AD41E0;
    return;
L_08AD41E0:
    ctx.set_gpr(3, 2219u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-24204));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_08AD41FC;
L_08AD41FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AD4200;
L_08AD4200:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD420C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_08AD4214:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD4234;
      }
      goto L_08AD422C;
    }
L_08AD422C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AD4294;
      }
      goto L_08AD4234;
    }
L_08AD4234:
    ctx.set_gpr(31, 0x08AD423Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AD423Cu) goto L_08AD423C;
    return;
L_08AD423C:
    ctx.set_gpr(31, 0x08AD4244u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08AD4244u) goto L_08AD4244;
    return;
L_08AD4244:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08AD4250u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 23u, 0x088641F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4250u) goto L_08AD4250;
    return;
L_08AD4250:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
        goto L_08AD4264;
    }
    goto L_08AD4258;
L_08AD4258:
    ctx.set_gpr(31, 0x08AD4260u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 735u, 0x0884E828u>(ctx, &aot_mem) && ctx.pc == 0x08AD4260u) goto L_08AD4260;
    return;
L_08AD4260:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_08AD4264;
L_08AD4264:
    ctx.set_gpr(31, 0x08AD426Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD43E0;
L_08AD426C:
    ctx.set_gpr(31, 0x08AD4274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 160u, 0x08848A74u>(ctx, &aot_mem) && ctx.pc == 0x08AD4274u) goto L_08AD4274;
    return;
L_08AD4274:
    ctx.set_gpr(31, 0x08AD427Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD427Cu) goto L_08AD427C;
    return;
L_08AD427C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD4288u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 847u, 0x08AB31BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD4288u) goto L_08AD4288;
    return;
L_08AD4288:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AD4294;
L_08AD4294:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD42A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD4354;
      }
      goto L_08AD42C0;
    }
L_08AD42C0:
    ctx.set_gpr(31, 0x08AD42C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD42C8u) goto L_08AD42C8;
    return;
L_08AD42C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08AD42D8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 887u, 0x08AB33C4u>(ctx, &aot_mem) && ctx.pc == 0x08AD42D8u) goto L_08AD42D8;
    return;
L_08AD42D8:
    ctx.set_gpr(31, 0x08AD42E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AD42E0u) goto L_08AD42E0;
    return;
L_08AD42E0:
    ctx.set_gpr(31, 0x08AD42E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 455u, 0x08849BF0u>(ctx, &aot_mem) && ctx.pc == 0x08AD42E8u) goto L_08AD42E8;
    return;
L_08AD42E8:
    ctx.set_gpr(31, 0x08AD42F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD42F0u) goto L_08AD42F0;
    return;
L_08AD42F0:
    ctx.set_gpr(31, 0x08AD42F8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD42F8u) goto L_08AD42F8;
    return;
L_08AD42F8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08AD4304u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 234u, 0x08850B30u>(ctx, &aot_mem) && ctx.pc == 0x08AD4304u) goto L_08AD4304;
    return;
L_08AD4304:
    ctx.set_gpr(31, 0x08AD430Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD430Cu) goto L_08AD430C;
    return;
L_08AD430C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD4318u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08AD4318u) goto L_08AD4318;
    return;
L_08AD4318:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD4328u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4328u) goto L_08AD4328;
    return;
L_08AD4328:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08AD4334u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08AD4334u) goto L_08AD4334;
    return;
L_08AD4334:
    ctx.set_gpr(31, 0x08AD433Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 45u, 0x08850228u>(ctx, &aot_mem) && ctx.pc == 0x08AD433Cu) goto L_08AD433C;
    return;
L_08AD433C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08AD4348u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 778u, 0x0884EA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4348u) goto L_08AD4348;
    return;
L_08AD4348:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    goto L_08AD4354;
L_08AD4354:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4368:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AD4394u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 343u, 0x08805400u>(ctx, &aot_mem) && ctx.pc == 0x08AD4394u) goto L_08AD4394;
    return;
L_08AD4394:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
        goto L_08AD43B8;
    }
    goto L_08AD439C;
L_08AD439C:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AD43B4u);
    ctx.set_gpr(25, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 340u, 0x088053CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD43B4u) goto L_08AD43B4;
    return;
L_08AD43B4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    goto L_08AD43B8;
L_08AD43B8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AD43C4;
    }
    goto L_08AD43C0;
L_08AD43C0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AD43C4;
L_08AD43C4:
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
L_08AD43E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AD43F8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08AD43F8u) goto L_08AD43F8;
    return;
L_08AD43F8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AD4418u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x08AD4418u) goto L_08AD4418;
    return;
L_08AD4418:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AD442Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD442Cu) goto L_08AD442C;
    return;
L_08AD442C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(55));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AD4448u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 813u, 0x0884EC54u>(ctx, &aot_mem) && ctx.pc == 0x08AD4448u) goto L_08AD4448;
    return;
L_08AD4448:
    ctx.set_gpr(31, 0x08AD4450u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08AD4450u) goto L_08AD4450;
    return;
L_08AD4450:
    ctx.set_gpr(17, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AD4464u);
    ctx.set_gpr(17, ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08AD4464u) goto L_08AD4464;
    return;
L_08AD4464:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD44C4;
      }
      goto L_08AD446C;
    }
L_08AD446C:
    ctx.set_gpr(31, 0x08AD4474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 895u, 0x08AAF7C8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4474u) goto L_08AD4474;
    return;
L_08AD4474:
    ctx.set_gpr(31, 0x08AD447Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AD447Cu) goto L_08AD447C;
    return;
L_08AD447C:
    ctx.set_gpr(31, 0x08AD4484u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 977u, 0x08AAFC50u>(ctx, &aot_mem) && ctx.pc == 0x08AD4484u) goto L_08AD4484;
    return;
L_08AD4484:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(55));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AD44A0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 813u, 0x0884EC54u>(ctx, &aot_mem) && ctx.pc == 0x08AD44A0u) goto L_08AD44A0;
    return;
L_08AD44A0:
    ctx.set_gpr(31, 0x08AD44A8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08AD44A8u) goto L_08AD44A8;
    return;
L_08AD44A8:
    ctx.set_gpr(17, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AD44BCu);
    ctx.set_gpr(17, ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08AD44BCu) goto L_08AD44BC;
    return;
L_08AD44BC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD446C;
      }
      goto L_08AD44C4;
    }
L_08AD44C4:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6416)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6420)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6424)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD44FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AD4528u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08AD4528u) goto L_08AD4528;
    return;
L_08AD4528:
    ctx.set_gpr(31, 0x08AD4530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4530u) goto L_08AD4530;
    return;
L_08AD4530:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AD4548u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08AD4548u) goto L_08AD4548;
    return;
L_08AD4548:
    ctx.set_gpr(31, 0x08AD4550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4550u) goto L_08AD4550;
    return;
L_08AD4550:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AD4570u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4570u) goto L_08AD4570;
    return;
L_08AD4570:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08AD457Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 234u, 0x08850B30u>(ctx, &aot_mem) && ctx.pc == 0x08AD457Cu) goto L_08AD457C;
    return;
L_08AD457C:
    ctx.set_gpr(31, 0x08AD4584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4584u) goto L_08AD4584;
    return;
L_08AD4584:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD4590u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08AD4590u) goto L_08AD4590;
    return;
L_08AD4590:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD45A0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 462u, 0x0885186Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD45A0u) goto L_08AD45A0;
    return;
L_08AD45A0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08AD45ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08AD45ACu) goto L_08AD45AC;
    return;
L_08AD45AC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08AD45B8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 209u, 0x088509B4u>(ctx, &aot_mem) && ctx.pc == 0x08AD45B8u) goto L_08AD45B8;
    return;
L_08AD45B8:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08AD45C8u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6440));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 294u, 0x08855620u>(ctx, &aot_mem) && ctx.pc == 0x08AD45C8u) goto L_08AD45C8;
    return;
L_08AD45C8:
    ctx.set_gpr(31, 0x08AD45D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AD45D0u) goto L_08AD45D0;
    return;
L_08AD45D0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD45DCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 355u, 0x088496F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD45DCu) goto L_08AD45DC;
    return;
L_08AD45DC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AD45FCu);
    ctx.set_gpr(11, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 356u, 0x088496FCu>(ctx, &aot_mem) && ctx.pc == 0x08AD45FCu) goto L_08AD45FC;
    return;
L_08AD45FC:
    ctx.set_gpr(19, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08AD460Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD460Cu) goto L_08AD460C;
    return;
L_08AD460C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AD4618u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 253u, 0x08849158u>(ctx, &aot_mem) && ctx.pc == 0x08AD4618u) goto L_08AD4618;
    return;
L_08AD4618:
    if (ctx.gpr[19] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_08AD4664;
    }
    goto L_08AD4620;
L_08AD4620:
    ctx.set_gpr(31, 0x08AD4628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4628u) goto L_08AD4628;
    return;
L_08AD4628:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08AD4638u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 870u, 0x08843A60u>(ctx, &aot_mem) && ctx.pc == 0x08AD4638u) goto L_08AD4638;
    return;
L_08AD4638:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AD4644u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 521u, 0x08851B24u>(ctx, &aot_mem) && ctx.pc == 0x08AD4644u) goto L_08AD4644;
    return;
L_08AD4644:
    ctx.set_gpr(31, 0x08AD464Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AD464Cu) goto L_08AD464C;
    return;
L_08AD464C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AD4660u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x08AD4660u) goto L_08AD4660;
    return;
L_08AD4660:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_08AD4664;
L_08AD4664:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AD4670u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 235u, 0x08850B38u>(ctx, &aot_mem) && ctx.pc == 0x08AD4670u) goto L_08AD4670;
    return;
L_08AD4670:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(31, 0x08AD4680u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 259u, 0x08850C78u>(ctx, &aot_mem) && ctx.pc == 0x08AD4680u) goto L_08AD4680;
    return;
L_08AD4680:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AD4690u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 99u, 0x08850450u>(ctx, &aot_mem) && ctx.pc == 0x08AD4690u) goto L_08AD4690;
    return;
L_08AD4690:
    ctx.set_gpr(31, 0x08AD4698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4698u) goto L_08AD4698;
    return;
L_08AD4698:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD46ACu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD46ACu) goto L_08AD46AC;
    return;
L_08AD46AC:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6428)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6432)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6436)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08AD46EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08AD4710u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4710u) goto L_08AD4710;
    return;
L_08AD4710:
    ctx.set_gpr(31, 0x08AD4718u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x08AD4718u) goto L_08AD4718;
    return;
L_08AD4718:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_08AD474C;
    }
    goto L_08AD4724;
L_08AD4724:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6456)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6460)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6464)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_08AD474C;
L_08AD474C:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AD4758u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 99u, 0x08850450u>(ctx, &aot_mem) && ctx.pc == 0x08AD4758u) goto L_08AD4758;
    return;
L_08AD4758:
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
L_08AD4770:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AD4788u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 99u, 0x08850450u>(ctx, &aot_mem) && ctx.pc == 0x08AD4788u) goto L_08AD4788;
    return;
L_08AD4788:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AD47C4;
    }
    goto L_08AD4794;
L_08AD4794:
    ctx.set_gpr(4, 2233u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(3, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AD47C4;
L_08AD47C4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD47D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AD4810u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4810u) goto L_08AD4810;
    return;
L_08AD4810:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD482C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AD485C;
    }
    goto L_08AD4844;
L_08AD4844:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD4858;
      }
      goto L_08AD4850;
    }
L_08AD4850:
    ctx.set_gpr(31, 0x08AD4858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AD4858u) goto L_08AD4858;
    return;
L_08AD4858:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AD485C;
L_08AD485C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD486C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD4890;
      }
      goto L_08AD4888;
    }
L_08AD4888:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AD48FC;
      }
      goto L_08AD4890;
    }
L_08AD4890:
    ctx.set_gpr(31, 0x08AD4898u);
    // nop
    goto L_08AD4D10;
L_08AD4898:
    ctx.set_gpr(31, 0x08AD48A0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD4D68;
L_08AD48A0:
    ctx.set_gpr(31, 0x08AD48A8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD4D9C;
L_08AD48A8:
    ctx.set_gpr(31, 0x08AD48B0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD4BA0;
L_08AD48B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
        goto L_08AD48E8;
    }
    goto L_08AD48BC;
L_08AD48BC:
    ctx.set_gpr(31, 0x08AD48C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AD48C4u) goto L_08AD48C4;
    return;
L_08AD48C4:
    ctx.set_gpr(31, 0x08AD48CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AD48CCu) goto L_08AD48CC;
    return;
L_08AD48CC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AD48E0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(36));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD48E0u) goto L_08AD48E0;
    return;
L_08AD48E0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    goto L_08AD48E8;
L_08AD48E8:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AD48F4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD48F4u) goto L_08AD48F4;
    return;
L_08AD48F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AD48FC;
L_08AD48FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD490C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD4930;
      }
      goto L_08AD4928;
    }
L_08AD4928:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AD49A0;
      }
      goto L_08AD4930;
    }
L_08AD4930:
    ctx.set_gpr(31, 0x08AD4938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 893u, 0x0884B594u>(ctx, &aot_mem) && ctx.pc == 0x08AD4938u) goto L_08AD4938;
    return;
L_08AD4938:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
        goto L_08AD494C;
    }
    goto L_08AD4944;
L_08AD4944:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AD49A0;
      }
      goto L_08AD494C;
    }
L_08AD494C:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AD4978;
    }
    goto L_08AD4954;
L_08AD4954:
    ctx.set_gpr(31, 0x08AD495Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AD495Cu) goto L_08AD495C;
    return;
L_08AD495C:
    ctx.set_gpr(31, 0x08AD4964u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AD4964u) goto L_08AD4964;
    return;
L_08AD4964:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD4970u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4970u) goto L_08AD4970;
    return;
L_08AD4970:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AD4978;
L_08AD4978:
    ctx.set_gpr(31, 0x08AD4980u);
    // nop
    goto L_08AD4BE0;
L_08AD4980:
    ctx.set_gpr(31, 0x08AD4988u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AD4E10;
L_08AD4988:
    ctx.set_gpr(31, 0x08AD4990u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AD4D94;
L_08AD4990:
    ctx.set_gpr(31, 0x08AD4998u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AD4D3C;
L_08AD4998:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD49A0;
L_08AD49A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD49B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD49DC;
      }
      goto L_08AD49D4;
    }
L_08AD49D4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AD4A2C;
      }
      goto L_08AD49DC;
    }
L_08AD49DC:
    ctx.set_gpr(31, 0x08AD49E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 893u, 0x0884B594u>(ctx, &aot_mem) && ctx.pc == 0x08AD49E4u) goto L_08AD49E4;
    return;
L_08AD49E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AD49F8;
    }
    goto L_08AD49F0;
L_08AD49F0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AD4A2C;
      }
      goto L_08AD49F8;
    }
L_08AD49F8:
    ctx.set_gpr(31, 0x08AD4A00u);
    // nop
    goto L_08AD4BE8;
L_08AD4A00:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6516));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AD4A20u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08AD690C;
L_08AD4A20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    goto L_08AD4A2C;
L_08AD4A2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4A40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD4A60;
      }
      goto L_08AD4A58;
    }
L_08AD4A58:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AD4A94;
      }
      goto L_08AD4A60;
    }
L_08AD4A60:
    ctx.set_gpr(31, 0x08AD4A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 893u, 0x0884B594u>(ctx, &aot_mem) && ctx.pc == 0x08AD4A68u) goto L_08AD4A68;
    return;
L_08AD4A68:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_08AD4A78;
    }
    goto L_08AD4A70;
L_08AD4A70:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AD4A94;
      }
      goto L_08AD4A78;
    }
L_08AD4A78:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AD4A94;
    }
    goto L_08AD4A80;
L_08AD4A80:
    ctx.set_gpr(31, 0x08AD4A88u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    goto L_08AD6A10;
L_08AD4A88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD4A94;
L_08AD4A94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4AA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AD4AB8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 893u, 0x0884B594u>(ctx, &aot_mem) && ctx.pc == 0x08AD4AB8u) goto L_08AD4AB8;
    return;
L_08AD4AB8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AD4B3C;
    }
    goto L_08AD4AC0;
L_08AD4AC0:
    ctx.set_gpr(31, 0x08AD4AC8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD4E18;
L_08AD4AC8:
    ctx.set_gpr(31, 0x08AD4AD0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.pc = 0x08B0DED4u;
    return;
L_08AD4AD0:
    ctx.set_gpr(31, 0x08AD4AD8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    goto L_08AD6804;
L_08AD4AD8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
        goto L_08AD4AF0;
    }
    goto L_08AD4AE4;
L_08AD4AE4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
        goto L_08AD4B08;
    }
    goto L_08AD4AEC;
L_08AD4AEC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    goto L_08AD4AF0;
L_08AD4AF0:
    ctx.set_gpr(31, 0x08AD4AF8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD4CC0;
L_08AD4AF8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
      if (branch_taken) {
          goto L_08AD4B38;
      }
      goto L_08AD4B08;
    }
L_08AD4B08:
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
        goto L_08AD4B30;
    }
    goto L_08AD4B10;
L_08AD4B10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4B2C;
      }
      goto L_08AD4B1C;
    }
L_08AD4B1C:
    ctx.set_gpr(31, 0x08AD4B24u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    goto L_08AD6A10;
L_08AD4B24:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_08AD4B2C;
L_08AD4B2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    goto L_08AD4B30;
L_08AD4B30:
    ctx.set_gpr(31, 0x08AD4B38u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    goto L_08AD6468;
L_08AD4B38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AD4B3C;
L_08AD4B3C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4B48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AD4B5Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 893u, 0x0884B594u>(ctx, &aot_mem) && ctx.pc == 0x08AD4B5Cu) goto L_08AD4B5C;
    return;
L_08AD4B5C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AD4B94;
    }
    goto L_08AD4B64;
L_08AD4B64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AD4B88;
    }
    goto L_08AD4B74;
L_08AD4B74:
    ctx.set_gpr(31, 0x08AD4B7Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD4E40;
L_08AD4B7C:
    ctx.set_gpr(31, 0x08AD4B84u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    goto L_08AD6B34;
L_08AD4B84:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD4B88;
L_08AD4B88:
    ctx.set_gpr(31, 0x08AD4B90u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD4E78;
L_08AD4B90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AD4B94;
L_08AD4B94:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4BA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AD4BB8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4BB8u) goto L_08AD4BB8;
    return;
L_08AD4BB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AD4BCCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    goto L_08AD4F98;
L_08AD4BCC:
    ctx.set_gpr(31, 0x08AD4BD4u);
    // nop
    goto L_08AD687C;
L_08AD4BD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4BE0:
    // nop
    goto L_08AD6884;
L_08AD4BE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AD4C0Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4C0Cu) goto L_08AD4C0C;
    return;
L_08AD4C0C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(480));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(272));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, 30u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 33920u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AD4C44u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    goto L_08AD50CC;
L_08AD4C44:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AD4C50u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AD4C50u) goto L_08AD4C50;
    return;
L_08AD4C50:
    ctx.set_gpr(31, 0x08AD4C58u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AD4C58u) goto L_08AD4C58;
    return;
L_08AD4C58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.set_gpr(3, ctx.gpr[17] & 3u);
      if (branch_taken) {
          goto L_08AD4C6C;
      }
      goto L_08AD4C60;
    }
L_08AD4C60:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
        goto L_08AD4C70;
    }
    goto L_08AD4C68;
L_08AD4C68:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08AD4C6C;
L_08AD4C6C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08AD4C70;
L_08AD4C70:
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AD4C80u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD4C80u) goto L_08AD4C80;
    return;
L_08AD4C80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD4C90;
      }
      goto L_08AD4C88;
    }
L_08AD4C88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4C88;
      }
      goto L_08AD4C90;
    }
L_08AD4C90:
    ctx.set_gpr(31, 0x08AD4C98u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    goto L_08AD53DC;
L_08AD4C98:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_08AD4CA8;
    }
    goto L_08AD4CA0;
L_08AD4CA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4CA0;
      }
      goto L_08AD4CA8;
    }
L_08AD4CA8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4CC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AD4CD8u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    goto L_08AD5944;
L_08AD4CD8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AD4D04;
    }
    goto L_08AD4CE4;
L_08AD4CE4:
    ctx.set_gpr(31, 0x08AD4CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AD4CECu) goto L_08AD4CEC;
    return;
L_08AD4CEC:
    ctx.set_gpr(31, 0x08AD4CF4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AD4CF4u) goto L_08AD4CF4;
    return;
L_08AD4CF4:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AD4D00u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4D00u) goto L_08AD4D00;
    return;
L_08AD4D00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AD4D04;
L_08AD4D04:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4D10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AD4D20u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(768));
    ctx.pc = 0x08B0DFFCu;
    return;
L_08AD4D20:
    ctx.set_gpr(31, 0x08AD4D28u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(770));
    ctx.pc = 0x08B0DFFCu;
    return;
L_08AD4D28:
    ctx.set_gpr(31, 0x08AD4D30u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(771));
    ctx.pc = 0x08B0DFFCu;
    return;
L_08AD4D30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4D3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AD4D4Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(771));
    ctx.pc = 0x08B0E08Cu;
    return;
L_08AD4D4C:
    ctx.set_gpr(31, 0x08AD4D54u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(770));
    ctx.pc = 0x08B0E08Cu;
    return;
L_08AD4D54:
    ctx.set_gpr(31, 0x08AD4D5Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(768));
    ctx.pc = 0x08B0E08Cu;
    return;
L_08AD4D5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4D68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(5, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AD4D80u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6640));
    ctx.pc = 0x08B0DF9Cu;
    return;
L_08AD4D80:
    ctx.set_gpr(31, 0x08AD4D88u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(32));
    ctx.pc = 0x08B0DF8Cu;
    return;
L_08AD4D88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4D94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4D9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(480));
    ctx.set_gpr(31, 0x08AD4DBCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(272));
    ctx.pc = 0x08B0DF1Cu;
    return;
L_08AD4DBC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, 0u + 0u);
        goto L_08AD4DCC;
    }
    goto L_08AD4DC4;
L_08AD4DC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4DC4;
      }
      goto L_08AD4DCC;
    }
L_08AD4DCC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AD4DDCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0DF24u;
    return;
L_08AD4DDC:
    ctx.set_gpr(31, 0x08AD4DE4u);
    // nop
    ctx.pc = 0x08B0DF14u;
    return;
L_08AD4DE4:
    ctx.set_gpr(3, 8u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32768u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, 17u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4E10:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4E18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AD4E2Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.pc = 0x08B0DF3Cu;
    return;
L_08AD4E2C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4E40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 8u << 16u);
    ctx.set_gpr(31, 0x08AD4E60u);
    ctx.set_gpr(6, ctx.gpr[2] | 32768u);
    ctx.pc = 0x08B0E2FCu;
    return;
L_08AD4E60:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4E78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD4EA0;
      }
      goto L_08AD4E98;
    }
L_08AD4E98:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AD4F3C;
      }
      goto L_08AD4EA0;
    }
L_08AD4EA0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD4EC4;
      }
      goto L_08AD4EAC;
    }
L_08AD4EAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD4EC4;
      }
      goto L_08AD4EB8;
    }
L_08AD4EB8:
    ctx.set_gpr(31, 0x08AD4EC0u);
    // nop
    goto L_08AD4F54;
L_08AD4EC0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), 0u);
    goto L_08AD4EC4;
L_08AD4EC4:
    ctx.set_gpr(31, 0x08AD4ECCu);
    // nop
    ctx.pc = 0x08B0DF34u;
    return;
L_08AD4ECC:
    ctx.set_gpr(31, 0x08AD4ED4u);
    // nop
    ctx.pc = 0x08B0DF3Cu;
    return;
L_08AD4ED4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
        goto L_08AD4F10;
    }
    goto L_08AD4EE8;
L_08AD4EE8:
    ctx.set_gpr(31, 0x08AD4EF0u);
    // nop
    ctx.pc = 0x08B0DF34u;
    return;
L_08AD4EF0:
    ctx.set_gpr(31, 0x08AD4EF8u);
    // nop
    ctx.pc = 0x08B0DF3Cu;
    return;
L_08AD4EF8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4EE8;
      }
      goto L_08AD4F0C;
    }
L_08AD4F0C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    goto L_08AD4F10;
L_08AD4F10:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AD4F3C;
    }
    goto L_08AD4F18;
L_08AD4F18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AD4F38;
      }
      goto L_08AD4F28;
    }
L_08AD4F28:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AD4F34u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AD4F54;
L_08AD4F34:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), 0u);
    goto L_08AD4F38;
L_08AD4F38:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AD4F3C;
L_08AD4F3C:
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
L_08AD4F54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(31, 0x08AD4F78u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.pc = 0x08B0DF24u;
    return;
L_08AD4F78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4F98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2247u << 16u);
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23964)));
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(6668));
    ctx.set_gpr(8, 2247u << 16u);
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(-23164));
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23124), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AD5090;
      }
      goto L_08AD4FCC;
    }
L_08AD4FCC:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(15, ctx.gpr[24] + static_cast<std::uint32_t>(-5452));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-23164), ctx.gpr[13]);
    ctx.set_gpr(14, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-23960), ctx.gpr[15]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AD50C0;
      }
      goto L_08AD5020;
    }
L_08AD5020:
    ctx.set_gpr(31, 0x08AD5028u);
    // nop
    ctx.pc = 0x08B0E284u;
    return;
L_08AD5028:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AD50AC;
      }
      goto L_08AD5030;
    }
L_08AD5030:
    ctx.set_gpr(31, 0x08AD5038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 634u, 0x088A3B90u>(ctx, &aot_mem) && ctx.pc == 0x08AD5038u) goto L_08AD5038;
    return;
L_08AD5038:
    ctx.set_gpr(31, 0x08AD5040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 313u, 0x0887E518u>(ctx, &aot_mem) && ctx.pc == 0x08AD5040u) goto L_08AD5040;
    return;
L_08AD5040:
    ctx.set_gpr(31, 0x08AD5048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 23u, 0x08AD8204u>(ctx, &aot_mem) && ctx.pc == 0x08AD5048u) goto L_08AD5048;
    return;
L_08AD5048:
    ctx.set_gpr(3, 2221u << 16u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(27388));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(-5368));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD5064u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 461u, 0x088A2A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD5064u) goto L_08AD5064;
    return;
L_08AD5064:
    ctx.set_gpr(4, 2221u << 16u);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(27312));
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(-5344));
    ctx.set_gpr(8, 2247u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD5088u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-23132), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 461u, 0x088A2A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD5088u) goto L_08AD5088;
    return;
L_08AD5088:
    ctx.set_gpr(5, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-23128), ctx.gpr[2]);
    goto L_08AD5090;
L_08AD5090:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23964)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(9, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-23964), ctx.gpr[9]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD50AC:
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(31, 0x08AD50B8u);
    ctx.set_gpr(4, ctx.gpr[7] + static_cast<std::uint32_t>(-5324));
    goto L_08AD6860;
L_08AD50B8:
    // nop
    goto L_08AD5030;
L_08AD50C0:
    ctx.set_gpr(25, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[25]);
    goto L_08AD5020;
L_08AD50CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.set_gpr(11, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(9, ctx.gpr[3] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 31u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(14, ctx.gpr[12] >> 26u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[9] + ctx.gpr[14]);
    ctx.set_gpr(8, (ctx.gpr[8] & ~0x0000003Fu) | ((0u & 0x0000003Fu) << 0u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) <= 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[12]);
      if (branch_taken) {
          goto L_08AD53B8;
      }
      goto L_08AD513C;
    }
L_08AD513C:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 5368u << 16u);
    ctx.set_gpr(6, ctx.gpr[5] | 46473u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 31u));
    ctx.set_gpr(18, 2226u << 16u);
    ctx.set_gpr(17, 2226u << 16u);
    ctx.set_gpr(8, ctx.hi);
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 9u));
    ctx.set_gpr(31, 0x08AD5168u);
    ctx.set_gpr(4, ctx.gpr[24] - ctx.gpr[25]);
    ctx.pc = 0x08B0E2D4u;
    return;
L_08AD5168:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(-5280));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AD517Cu);
    ctx.set_gpr(4, 0u + 0u);
    goto L_08AD53C4;
L_08AD517C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08AD5188u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.pc = 0x08B0E2C4u;
    return;
L_08AD5188:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(-5268));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08AD519Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    goto L_08AD53C4;
L_08AD519C:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[11];
    ctx.set_gpr(17, ctx.gpr[16] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD5398;
      }
      goto L_08AD51AC;
    }
L_08AD51AC:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(10, 2226u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[9] << 5u);
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AD51CCu);
    ctx.set_gpr(7, ctx.gpr[10] + static_cast<std::uint32_t>(-5256));
    goto L_08AD53C4;
L_08AD51CC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AD521C;
      }
      goto L_08AD51DC;
    }
L_08AD51DC:
    ctx.set_gpr(18, 2226u << 16u);
    goto L_08AD51E0;
L_08AD51E0:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(-5236));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(12, ctx.gpr[3] << 2u);
    ctx.set_gpr(31, 0x08AD520Cu);
    ctx.set_gpr(5, ctx.gpr[12] + 0u);
    goto L_08AD53C4;
L_08AD520C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD51E0;
      }
      goto L_08AD521C;
    }
L_08AD521C:
    ctx.set_gpr(24, ctx.gpr[5] << 4u);
    ctx.set_gpr(18, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[24] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(-5220));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08AD5238u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    goto L_08AD53C4;
L_08AD5238:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    ctx.set_gpr(6, 2226u << 16u);
      if (branch_taken) {
          goto L_08AD52AC;
      }
      goto L_08AD524C;
    }
L_08AD524C:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[24] >> 29u);
    ctx.set_gpr(11, ctx.gpr[15] + ctx.gpr[3]);
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 3u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(-5188));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(14, ctx.lo);
    ctx.set_gpr(9, ctx.gpr[14] << 1u);
    ctx.set_gpr(10, ctx.gpr[9] + ctx.gpr[14]);
    ctx.set_gpr(31, 0x08AD528Cu);
    ctx.set_gpr(5, ctx.gpr[10] + 0u);
    goto L_08AD53C4;
L_08AD528C:
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD52AC:
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(-5204));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08AD52C0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    goto L_08AD53C4;
L_08AD52C0:
    ctx.set_gpr(13, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[13] + static_cast<std::uint32_t>(-5176));
    ctx.set_gpr(16, 2226u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AD52E0u);
    ctx.set_gpr(18, ctx.gpr[17] + ctx.gpr[2]);
    goto L_08AD53C4;
L_08AD52E0:
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(-5160));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08AD52F8u);
    ctx.set_gpr(17, ctx.gpr[18] + ctx.gpr[2]);
    goto L_08AD53C4;
L_08AD52F8:
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(-5160));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08AD5310u);
    ctx.set_gpr(18, ctx.gpr[17] + ctx.gpr[2]);
    goto L_08AD53C4;
L_08AD5310:
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(-5160));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08AD5328u);
    ctx.set_gpr(17, ctx.gpr[18] + ctx.gpr[2]);
    goto L_08AD53C4;
L_08AD5328:
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(-5160));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08AD5340u);
    ctx.set_gpr(18, ctx.gpr[17] + ctx.gpr[2]);
    goto L_08AD53C4;
L_08AD5340:
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(-5160));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08AD5358u);
    ctx.set_gpr(16, ctx.gpr[18] + ctx.gpr[2]);
    goto L_08AD53C4;
L_08AD5358:
    ctx.set_gpr(8, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(-5148));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24576));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AD5374u);
    ctx.set_gpr(18, ctx.gpr[16] + ctx.gpr[2]);
    goto L_08AD53C4;
L_08AD5374:
    ctx.set_gpr(25, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[25] + static_cast<std::uint32_t>(-5136));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AD5390u);
    ctx.set_gpr(16, ctx.gpr[18] + ctx.gpr[2]);
    goto L_08AD53C4;
L_08AD5390:
    ctx.set_gpr(17, ctx.gpr[16] + ctx.gpr[2]);
    goto L_08AD524C;
L_08AD5398:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(-5124));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2112));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08AD53B0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    goto L_08AD53C4;
L_08AD53B0:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    goto L_08AD51AC;
L_08AD53B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    goto L_08AD513C;
L_08AD53C4:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) > static_cast<std::int32_t>(ctx.gpr[5]) ? ctx.gpr[6] : ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD53DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    ctx.set_gpr(21, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23968)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(14, 2247u << 16u);
      if (branch_taken) {
          goto L_08AD5860;
      }
      goto L_08AD5410;
    }
L_08AD5410:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[14] + static_cast<std::uint32_t>(-23956));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[13]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[12]);
    ctx.set_gpr(9, ctx.gpr[12] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 31u));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(10, ctx.gpr[11] >> 26u);
    ctx.set_gpr(5, ctx.gpr[9] + ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[8]);
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x0000003Fu) | ((0u & 0x0000003Fu) << 0u));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AD5938;
      }
      goto L_08AD5470;
    }
L_08AD5470:
    ctx.set_gpr(31, 0x08AD5478u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 523u, 0x0887F994u>(ctx, &aot_mem) && ctx.pc == 0x08AD5478u) goto L_08AD5478;
    return;
L_08AD5478:
    ctx.set_gpr(31, 0x08AD5480u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 942u, 0x08883E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD5480u) goto L_08AD5480;
    return;
L_08AD5480:
    ctx.set_gpr(31, 0x08AD5488u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 500u, 0x0887F848u>(ctx, &aot_mem) && ctx.pc == 0x08AD5488u) goto L_08AD5488;
    return;
L_08AD5488:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08AD5494;
      }
      goto L_08AD5490;
    }
L_08AD5490:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(50));
    goto L_08AD5494;
L_08AD5494:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[24]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AD54BC;
      }
      goto L_08AD54B8;
    }
L_08AD54B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_08AD54BC;
L_08AD54BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(14, 5368u << 16u);
    ctx.set_gpr(13, ctx.gpr[14] | 46473u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(12, ctx.hi);
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 9u));
    ctx.set_gpr(8, ctx.gpr[16] - ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[9]);
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(20, ctx.gpr[17] + static_cast<std::uint32_t>(100));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[10]);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(256), ctx.gpr[8]);
    ctx.set_gpr(31, 0x08AD5510u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), 0u);
    ctx.pc = 0x08B0E2D4u;
    return;
L_08AD5510:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(19, ctx.gpr[7] + static_cast<std::uint32_t>(-5280));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AD5530u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    goto L_08AD53C4;
L_08AD5530:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[25] != 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AD5920;
      }
      goto L_08AD5548;
    }
L_08AD5548:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[16] == 0u) {
    ctx.pc = 0x08AD5550u; rt.stop("Allegrex BREAK code 7 at 0x08AD5550"); return;
        goto L_08AD5554;
    }
    goto L_08AD5554;
L_08AD5554:
    ctx.set_gpr(25, ctx.gpr[24] + static_cast<std::uint32_t>(7));
    { const std::uint32_t dividend = ctx.gpr[25]; const std::uint32_t divisor = ctx.gpr[16]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(19, ctx.gpr[24] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    ctx.set_gpr(15, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[15] << 3u);
    goto L_08AD556C;
L_08AD556C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(20, 2221u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(8, ctx.gpr[20] + static_cast<std::uint32_t>(25088));
    ctx.set_gpr(31, 0x08AD5590u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.pc = 0x08B0E254u;
    return;
L_08AD5590:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08AD5908;
      }
      goto L_08AD5598;
    }
L_08AD5598:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08AD57E0;
      }
      goto L_08AD55A4;
    }
L_08AD55A4:
    ctx.set_gpr(31, 0x08AD55ACu);
    ctx.set_gpr(4, 0u + 0u);
    ctx.pc = 0x08B0E2C4u;
    return;
L_08AD55AC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(18, ctx.gpr[5] + static_cast<std::uint32_t>(-5268));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD55CCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    goto L_08AD53C4;
L_08AD55CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[17] + static_cast<std::uint32_t>(108));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AD58F0;
      }
      goto L_08AD55F0;
    }
L_08AD55F0:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[4] == 0u) {
    ctx.pc = 0x08AD55F8u; rt.stop("Allegrex BREAK code 7 at 0x08AD55F8"); return;
        goto L_08AD55FC;
    }
    goto L_08AD55FC;
L_08AD55FC:
    ctx.set_gpr(14, ctx.gpr[13] + static_cast<std::uint32_t>(7));
    { const std::uint32_t dividend = ctx.gpr[14]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(12, ctx.gpr[13] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[12]);
    ctx.set_gpr(11, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[11] << 3u);
    goto L_08AD5614;
L_08AD5614:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08AD5638u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.pc = 0x08B0E2DCu;
    return;
L_08AD5638:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08AD58D8;
      }
      goto L_08AD5640;
    }
L_08AD5640:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(124));
      if (branch_taken) {
          goto L_08AD5860;
      }
      goto L_08AD564C;
    }
L_08AD564C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AD565Cu);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = 0x08B0E25Cu;
    return;
L_08AD565C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(264), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD5894;
      }
      goto L_08AD5664;
    }
L_08AD5664:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-5112));
    goto L_08AD566C;
L_08AD566C:
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AD5670;
L_08AD5670:
    ctx.set_gpr(31, 0x08AD5678u);
    // nop
    goto L_08AD6860;
L_08AD5678:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AD567C;
L_08AD567C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[16];
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08AD57E0;
      }
      goto L_08AD5688;
    }
L_08AD5688:
    ctx.set_gpr(31, 0x08AD5690u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AD6C44;
L_08AD5690:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08AD57E0;
      }
      goto L_08AD5698;
    }
L_08AD5698:
    ctx.set_gpr(31, 0x08AD56A0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AD6D9C;
L_08AD56A0:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08AD57E0;
      }
      goto L_08AD56A8;
    }
L_08AD56A8:
    ctx.set_gpr(31, 0x08AD56B0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AD7044;
L_08AD56B0:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    ctx.set_gpr(7, 2226u << 16u);
      if (branch_taken) {
          goto L_08AD5860;
      }
      goto L_08AD56B8;
    }
L_08AD56B8:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[13] >> 29u);
    ctx.set_gpr(11, ctx.gpr[12] + ctx.gpr[3]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 3u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(16, ctx.gpr[7] + static_cast<std::uint32_t>(-5188));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(8, ctx.gpr[9] << 1u);
    ctx.set_gpr(18, ctx.gpr[8] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AD5700u);
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(116));
    goto L_08AD53C4;
L_08AD5700:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[25]) ? 1u : 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[24] != 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[25]);
      if (branch_taken) {
          goto L_08AD587C;
      }
      goto L_08AD5720;
    }
L_08AD5720:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[4] == 0u) {
    ctx.pc = 0x08AD5728u; rt.stop("Allegrex BREAK code 7 at 0x08AD5728"); return;
        goto L_08AD572C;
    }
    goto L_08AD572C;
L_08AD572C:
    ctx.set_gpr(2, ctx.gpr[15] + static_cast<std::uint32_t>(63));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(4, ctx.gpr[15] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[16] << 6u);
    goto L_08AD5744;
L_08AD5744:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 31u));
    ctx.set_gpr(24, ctx.gpr[25] >> 21u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[24]);
    ctx.set_gpr(31, 0x08AD5768u);
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x000007FFu) | ((0u & 0x000007FFu) << 0u));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 726u, 0x0889F958u>(ctx, &aot_mem) && ctx.pc == 0x08AD5768u) goto L_08AD5768;
    return;
L_08AD5768:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(260), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD5868;
      }
      goto L_08AD5770;
    }
L_08AD5770:
    ctx.set_gpr(31, 0x08AD5778u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 28u, 0x08AD839Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD5778u) goto L_08AD5778;
    return;
L_08AD5778:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(428), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD584C;
      }
      goto L_08AD5780;
    }
L_08AD5780:
    ctx.set_gpr(6, 2247u << 16u);
    ctx.set_gpr(16, ctx.gpr[6] + static_cast<std::uint32_t>(-23164));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.set_gpr(9, 2226u << 16u);
      if (branch_taken) {
          goto L_08AD5808;
      }
      goto L_08AD5794;
    }
L_08AD5794:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23968)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(14, 15u << 16u);
    ctx.set_gpr(13, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ~(0u | ctx.gpr[3]));
    ctx.set_gpr(12, ctx.gpr[14] | 65535u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(29970));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-23968), ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(688), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(696), ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(772), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(692), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    goto L_08AD57E0;
L_08AD57E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5808:
    ctx.set_gpr(4, ctx.gpr[9] + static_cast<std::uint32_t>(-5064));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD581Cu);
    ctx.set_gpr(7, 0u + 0u);
    ctx.pc = 0x08B0DDF4u;
    return;
L_08AD581C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(420), ctx.gpr[2]);
    ctx.set_gpr(8, 2226u << 16u);
    ctx.set_gpr(18, 2221u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[8] + static_cast<std::uint32_t>(-5044));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(23296));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AD5844u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.pc = 0x08B0DDE4u;
    return;
L_08AD5844:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(424), ctx.gpr[2]);
    goto L_08AD5794;
L_08AD584C:
    ctx.set_gpr(21, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(-5028));
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AD5858;
L_08AD5858:
    ctx.set_gpr(31, 0x08AD5860u);
    // nop
    goto L_08AD6860;
L_08AD5860:
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AD57E0;
L_08AD5868:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(17, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(-4992));
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x000007FFu) | ((0u & 0x000007FFu) << 0u));
    goto L_08AD5858;
L_08AD587C:
    ctx.set_gpr(14, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[14] + static_cast<std::uint32_t>(-4944));
    ctx.set_gpr(31, 0x08AD588Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AD6860;
L_08AD588C:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08AD5744;
L_08AD5894:
    ctx.set_gpr(31, 0x08AD589Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = 0x08B0E2ACu;
    return;
L_08AD589C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(272), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD58B0;
      }
      goto L_08AD58A4;
    }
L_08AD58A4:
    ctx.set_gpr(15, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[15] + static_cast<std::uint32_t>(-4908));
    goto L_08AD566C;
L_08AD58B0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(276));
    ctx.set_gpr(31, 0x08AD58C0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = 0x08B0E244u;
    return;
L_08AD58C0:
    ctx.set_gpr(5, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08AD567C;
      }
      goto L_08AD58CC;
    }
L_08AD58CC:
    ctx.set_gpr(19, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(-4860));
    goto L_08AD5670;
L_08AD58D8:
    ctx.set_gpr(16, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(-4816));
    ctx.set_gpr(31, 0x08AD58E8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AD6860;
L_08AD58E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AD5640;
L_08AD58F0:
    ctx.set_gpr(10, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[10] + static_cast<std::uint32_t>(-4944));
    ctx.set_gpr(31, 0x08AD5900u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08AD6860;
L_08AD5900:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08AD5614;
L_08AD5908:
    ctx.set_gpr(18, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(-4772));
    ctx.set_gpr(31, 0x08AD5918u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AD6860;
L_08AD5918:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AD5598;
L_08AD5920:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-4944));
    ctx.set_gpr(31, 0x08AD5930u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08AD6860;
L_08AD5930:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08AD556C;
L_08AD5938:
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[15]);
    goto L_08AD5470;
L_08AD5944:
    ctx.set_gpr(5, 2247u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23968)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-23968), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23968)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AD5984;
      }
      goto L_08AD5970;
    }
L_08AD5970:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08AD5974;
L_08AD5974:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5984:
    ctx.set_gpr(31, 0x08AD598Cu);
    // nop
    goto L_08AD6804;
L_08AD598C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
        goto L_08AD59C0;
    }
    goto L_08AD5994;
L_08AD5994:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
        goto L_08AD59C0;
    }
    goto L_08AD59A0;
L_08AD59A0:
    ctx.set_gpr(31, 0x08AD59A8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD6804;
L_08AD59A8:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-4712));
    ctx.set_gpr(31, 0x08AD59B8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AD6860;
L_08AD59B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08AD5974;
L_08AD59C0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08AD5AC4;
      }
      goto L_08AD59CC;
    }
L_08AD59CC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(272)));
    goto L_08AD59D0;
L_08AD59D0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(124));
      if (branch_taken) {
          goto L_08AD5AB4;
      }
      goto L_08AD59D8;
    }
L_08AD59D8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(264)));
    goto L_08AD59DC;
L_08AD59DC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5AA4;
      }
      goto L_08AD59E4;
    }
L_08AD59E4:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    goto L_08AD59E8;
L_08AD59E8:
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[13] == ctx.gpr[12]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
        goto L_08AD5A8C;
    }
    goto L_08AD59F4;
L_08AD59F4:
    ctx.set_gpr(31, 0x08AD59FCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0E274u;
    return;
L_08AD59FC:
    ctx.set_gpr(31, 0x08AD5A04u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.pc = 0x08B0E23Cu;
    return;
L_08AD5A04:
    ctx.set_gpr(15, 2247u << 16u);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(-23152)));
    { const bool branch_taken = ctx.gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5A74;
      }
      goto L_08AD5A14;
    }
L_08AD5A14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(724)));
    goto L_08AD5A18;
L_08AD5A18:
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08AD5A60;
    }
    goto L_08AD5A20;
L_08AD5A20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    goto L_08AD5A24;
L_08AD5A24:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5A50;
      }
      goto L_08AD5A2C;
    }
L_08AD5A2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
    goto L_08AD5A30;
L_08AD5A30:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
        goto L_08AD5974;
    }
    goto L_08AD5A38;
L_08AD5A38:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[16];
    ctx.set_gpr(31, 0x08AD5A48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD5A48u) goto L_08AD5A48;
    return;
L_08AD5A48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08AD5974;
L_08AD5A50:
    ctx.set_gpr(31, 0x08AD5A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 30u, 0x08AD83B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD5A58u) goto L_08AD5A58;
    return;
L_08AD5A58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
    goto L_08AD5A30;
L_08AD5A60:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x08AD5A6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD5A6Cu) goto L_08AD5A6C;
    return;
L_08AD5A6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    goto L_08AD5A24;
L_08AD5A74:
    ctx.set_gpr(31, 0x08AD5A7Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.pc = 0x08B0DD74u;
    return;
L_08AD5A7C:
    ctx.set_gpr(31, 0x08AD5A84u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(424)));
    ctx.pc = 0x08B0DE74u;
    return;
L_08AD5A84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(724)));
    goto L_08AD5A18;
L_08AD5A8C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD59F4;
      }
      goto L_08AD5A94;
    }
L_08AD5A94:
    ctx.set_gpr(31, 0x08AD5A9Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0E26Cu;
    return;
L_08AD5A9C:
    // nop
    goto L_08AD59F4;
L_08AD5AA4:
    ctx.set_gpr(31, 0x08AD5AACu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0E26Cu;
    return;
L_08AD5AAC:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    goto L_08AD59E8;
L_08AD5AB4:
    ctx.set_gpr(31, 0x08AD5ABCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0E2CCu;
    return;
L_08AD5ABC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(264)));
    goto L_08AD59DC;
L_08AD5AC4:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(72)));
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08AD5AEC;
    }
    goto L_08AD5AD4;
L_08AD5AD4:
    ctx.set_gpr(31, 0x08AD5ADCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    goto L_08AD7FE0;
L_08AD5ADC:
    ctx.set_gpr(31, 0x08AD5AE4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
    ctx.pc = 0x08B0DE74u;
    return;
L_08AD5AE4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(272)));
    goto L_08AD59D0;
L_08AD5AEC:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[10];
    ctx.set_gpr(31, 0x08AD5AF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD5AF8u) goto L_08AD5AF8;
    return;
L_08AD5AF8:
    // nop
    goto L_08AD5AD4;
L_08AD5B00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(52));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08AD5B24;
L_08AD5B24:
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x08AD5B30u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.pc = 0x08B0DE7Cu;
    return;
L_08AD5B30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AD5B54;
      }
      goto L_08AD5B3C;
    }
L_08AD5B3C:
    ctx.set_gpr(31, 0x08AD5B44u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
    ctx.pc = 0x08B0DD34u;
    return;
L_08AD5B44:
    ctx.set_gpr(31, 0x08AD5B4Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD5B98;
L_08AD5B4C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08AD5B24;
L_08AD5B54:
    ctx.set_gpr(31, 0x08AD5B5Cu);
    // nop
    goto L_08AD6804;
L_08AD5B5C:
    ctx.set_gpr(7, ctx.gpr[2] ^ 3u);
    ctx.set_gpr(6, ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[5] | ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5B3C;
      }
      goto L_08AD5B74;
    }
L_08AD5B74:
    ctx.set_gpr(31, 0x08AD5B7Cu);
    ctx.set_gpr(4, 0u + 0u);
    ctx.pc = 0x08B0DE84u;
    return;
L_08AD5B7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5B98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD5BD0;
      }
      goto L_08AD5BB8;
    }
L_08AD5BB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    goto L_08AD5BBC;
L_08AD5BBC:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5BD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(31, 0x08AD5BDCu);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 45u, 0x08AD852Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD5BDCu) goto L_08AD5BDC;
    return;
L_08AD5BDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08AD5E10;
      }
      goto L_08AD5BE8;
    }
L_08AD5BE8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD5DA0;
      }
      goto L_08AD5BF8;
    }
L_08AD5BF8:
    ctx.set_gpr(10, ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
        goto L_08AD5C30;
    }
    goto L_08AD5C04;
L_08AD5C04:
    ctx.set_gpr(15, 2226u << 16u);
    ctx.set_gpr(13, ctx.gpr[5] << 2u);
    ctx.set_gpr(14, ctx.gpr[15] + static_cast<std::uint32_t>(-4656));
    ctx.set_gpr(12, ctx.gpr[13] + ctx.gpr[14]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[11];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5C20:
    ctx.set_gpr(31, 0x08AD5C28u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD7500;
L_08AD5C28:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08AD5C2C;
L_08AD5C2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    goto L_08AD5C30;
L_08AD5C30:
    ctx.set_gpr(31, 0x08AD5C38u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 25u, 0x08AD82F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD5C38u) goto L_08AD5C38;
    return;
L_08AD5C38:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08AD5CC0;
      }
      goto L_08AD5C40;
    }
L_08AD5C40:
    ctx.set_gpr(31, 0x08AD5C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 27u, 0x08AD8314u>(ctx, &aot_mem) && ctx.pc == 0x08AD5C48u) goto L_08AD5C48;
    return;
L_08AD5C48:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(9, ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(15, ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AD5C84;
      }
      goto L_08AD5C58;
    }
L_08AD5C58:
    ctx.set_gpr(14, 2226u << 16u);
    ctx.set_gpr(12, ctx.gpr[5] << 2u);
    ctx.set_gpr(13, ctx.gpr[14] + static_cast<std::uint32_t>(-4624));
    ctx.set_gpr(11, ctx.gpr[12] + ctx.gpr[13]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[10];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5C74:
    ctx.set_gpr(31, 0x08AD5C7Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD6368;
L_08AD5C7C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AD5C80;
L_08AD5C80:
    ctx.set_gpr(15, ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    goto L_08AD5C84;
L_08AD5C84:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
      if (branch_taken) {
          goto L_08AD5BBC;
      }
      goto L_08AD5C8C;
    }
L_08AD5C8C:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(25, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(-4592));
    ctx.set_gpr(24, ctx.gpr[25] + ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[17];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5CA8:
    ctx.set_gpr(31, 0x08AD5CB0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD5E18;
L_08AD5CB0:
    ctx.set_gpr(31, 0x08AD5CB8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD5EEC;
L_08AD5CB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    goto L_08AD5BBC;
L_08AD5CC0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    goto L_08AD5C80;
L_08AD5CCC:
    ctx.set_gpr(31, 0x08AD5CD4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD7600;
L_08AD5CD4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08AD5C2C;
L_08AD5CDC:
    ctx.set_gpr(31, 0x08AD5CE4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD76BC;
L_08AD5CE4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08AD5C2C;
L_08AD5CEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(724)));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x08AD5D00u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD5D00u) goto L_08AD5D00;
    return;
L_08AD5D00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD5D58;
      }
      goto L_08AD5D08;
    }
L_08AD5D08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(25, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[25];
    // nop
      if (branch_taken) {
          goto L_08AD5D88;
      }
      goto L_08AD5D18;
    }
L_08AD5D18:
    ctx.set_gpr(31, 0x08AD5D20u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 45u, 0x08AD852Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD5D20u) goto L_08AD5D20;
    return;
L_08AD5D20:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD5D58;
      }
      goto L_08AD5D2C;
    }
L_08AD5D2C:
    ctx.set_gpr(31, 0x08AD5D34u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 47u, 0x08AD8548u>(ctx, &aot_mem) && ctx.pc == 0x08AD5D34u) goto L_08AD5D34;
    return;
L_08AD5D34:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
        goto L_08AD5D58;
    }
    goto L_08AD5D40;
L_08AD5D40:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
        goto L_08AD5D60;
    }
    goto L_08AD5D4C;
L_08AD5D4C:
    ctx.set_gpr(31, 0x08AD5D54u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD77AC;
L_08AD5D54:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    goto L_08AD5D58;
L_08AD5D58:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08AD5C2C;
L_08AD5D60:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x08AD5D70u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[3]);
    ctx.pc = 0x08B0DE54u;
    return;
L_08AD5D70:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD5D4C;
      }
      goto L_08AD5D80;
    }
L_08AD5D80:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08AD5C2C;
L_08AD5D88:
    ctx.set_gpr(31, 0x08AD5D90u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    goto L_08AD7DA4;
L_08AD5D90:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD5D58;
      }
      goto L_08AD5D98;
    }
L_08AD5D98:
    // nop
    goto L_08AD5D18;
L_08AD5DA0:
    ctx.set_gpr(31, 0x08AD5DA8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 45u, 0x08AD852Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD5DA8u) goto L_08AD5DA8;
    return;
L_08AD5DA8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08AD5DDC;
      }
      goto L_08AD5DB4;
    }
L_08AD5DB4:
    ctx.set_gpr(31, 0x08AD5DBCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 47u, 0x08AD8548u>(ctx, &aot_mem) && ctx.pc == 0x08AD5DBCu) goto L_08AD5DBC;
    return;
L_08AD5DBC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08AD5DDC;
      }
      goto L_08AD5DC4;
    }
L_08AD5DC4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    if (ctx.gpr[6] == ctx.gpr[17]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
        goto L_08AD5DE8;
    }
    goto L_08AD5DD0;
L_08AD5DD0:
    ctx.set_gpr(31, 0x08AD5DD8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD77AC;
L_08AD5DD8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AD5DDC;
L_08AD5DDC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AD5DE0;
L_08AD5DE0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AD5BF8;
L_08AD5DE8:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x08AD5DF8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.pc = 0x08B0DE54u;
    return;
L_08AD5DF8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08AD5DD0;
      }
      goto L_08AD5E08;
    }
L_08AD5E08:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AD5DE0;
L_08AD5E10:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08AD5BE8;
L_08AD5E18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD5E50;
      }
      goto L_08AD5E38;
    }
L_08AD5E38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AD5E3C;
L_08AD5E3C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5E50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x08AD5E60u);
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(340));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 13u, 0x08AD8104u>(ctx, &aot_mem) && ctx.pc == 0x08AD5E60u) goto L_08AD5E60;
    return;
L_08AD5E60:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08AD5E38;
      }
      goto L_08AD5E70;
    }
L_08AD5E70:
    ctx.set_gpr(31, 0x08AD5E78u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
    ctx.pc = 0x08B0E2E4u;
    return;
L_08AD5E78:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD5E38;
      }
      goto L_08AD5E80;
    }
L_08AD5E80:
    ctx.set_gpr(31, 0x08AD5E88u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 2u, 0x08AD8014u>(ctx, &aot_mem) && ctx.pc == 0x08AD5E88u) goto L_08AD5E88;
    return;
L_08AD5E88:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(764)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AD5E9Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.pc = 0x08B0E29Cu;
    return;
L_08AD5E9C:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-4560));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AD5EDC;
      }
      goto L_08AD5EAC;
    }
L_08AD5EAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    ctx.set_gpr(31, 0x08AD5EB8u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(344)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 5u, 0x08AD8048u>(ctx, &aot_mem) && ctx.pc == 0x08AD5EB8u) goto L_08AD5EB8;
    return;
L_08AD5EB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(764)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5ECC;
      }
      goto L_08AD5EC4;
    }
L_08AD5EC4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(764), 0u);
    goto L_08AD5E38;
L_08AD5ECC:
    ctx.set_gpr(31, 0x08AD5ED4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 9u, 0x08AD8098u>(ctx, &aot_mem) && ctx.pc == 0x08AD5ED4u) goto L_08AD5ED4;
    return;
L_08AD5ED4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(764), 0u);
    goto L_08AD5E38;
L_08AD5EDC:
    ctx.set_gpr(31, 0x08AD5EE4u);
    // nop
    goto L_08AD6860;
L_08AD5EE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AD5E3C;
L_08AD5EEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.set_gpr(2, 32767u << 16u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] | 65535u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x08AD5F30u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD5F30u) goto L_08AD5F30;
    return;
L_08AD5F30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AD5FA0;
    }
    goto L_08AD5F40;
L_08AD5F40:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(264)));
    ctx.set_gpr(19, ctx.gpr[17] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(276));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AD5F68u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[9]);
    ctx.pc = 0x08B0E2F4u;
    return;
L_08AD5F68:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AD5FA0;
    }
    goto L_08AD5F70;
L_08AD5F70:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08AD5F88u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.pc = 0x08B0E22Cu;
    return;
L_08AD5F88:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_08AD6074;
      }
      goto L_08AD5F90;
    }
L_08AD5F90:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[7] == ctx.gpr[6]) {
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AD5FD4;
    }
    goto L_08AD5F9C;
L_08AD5F9C:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AD5FA0;
L_08AD5FA0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x08AD5FB4u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD5FB4u) goto L_08AD5FB4;
    return;
L_08AD5FB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_08AD5FB8;
L_08AD5FB8:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5FD4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[12];
    ctx.set_gpr(31, 0x08AD5FE8u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD5FE8u) goto L_08AD5FE8;
    return;
L_08AD5FE8:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AD6000u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(720), ctx.gpr[10]);
    ctx.pc = 0x08B0E234u;
    return;
L_08AD6000:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AD605C;
      }
      goto L_08AD6008;
    }
L_08AD6008:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(276)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), ctx.gpr[24]);
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(280)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[15];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AD6048;
      }
      goto L_08AD602C;
    }
L_08AD602C:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(744), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(288)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    goto L_08AD5FB4;
L_08AD6048:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(744)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(748)));
    ctx.set_gpr(25, ctx.gpr[4] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[25]);
    goto L_08AD602C;
L_08AD605C:
    ctx.set_gpr(14, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[14] + static_cast<std::uint32_t>(-4508));
    ctx.set_gpr(31, 0x08AD606Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AD6860;
L_08AD606C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_08AD5FB8;
L_08AD6074:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(-4452));
    ctx.set_gpr(31, 0x08AD6084u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AD6860;
L_08AD6084:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AD5FA0;
L_08AD608C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.set_gpr(2, 32767u << 16u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] | 65535u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x08AD60CCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD60CCu) goto L_08AD60CC;
    return;
L_08AD60CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AD6118;
    }
    goto L_08AD60DC;
L_08AD60DC:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(19, ctx.gpr[17] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AD6100u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[9]);
    ctx.pc = 0x08B0E294u;
    return;
L_08AD6100:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08AD61E8;
      }
      goto L_08AD6108;
    }
L_08AD6108:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[7] == ctx.gpr[6]) {
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AD6148;
    }
    goto L_08AD6114;
L_08AD6114:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AD6118;
L_08AD6118:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x08AD612Cu);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD612Cu) goto L_08AD612C;
    return;
L_08AD612C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    goto L_08AD6130;
L_08AD6130:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6148:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[12];
    ctx.set_gpr(31, 0x08AD615Cu);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD615Cu) goto L_08AD615C;
    return;
L_08AD615C:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AD6174u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(720), ctx.gpr[10]);
    ctx.pc = 0x08B0E234u;
    return;
L_08AD6174:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AD61D0;
      }
      goto L_08AD617C;
    }
L_08AD617C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(276)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[25]);
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(280)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[24]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[15];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AD61BC;
      }
      goto L_08AD61A0;
    }
L_08AD61A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(744), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(288)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    goto L_08AD612C;
L_08AD61BC:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(748)));
    ctx.set_gpr(4, ctx.gpr[8] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08AD61A0;
L_08AD61D0:
    ctx.set_gpr(14, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[14] + static_cast<std::uint32_t>(-4404));
    ctx.set_gpr(31, 0x08AD61E0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AD6860;
L_08AD61E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    goto L_08AD6130;
L_08AD61E8:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(-4348));
    ctx.set_gpr(31, 0x08AD61F8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AD6860;
L_08AD61F8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AD6118;
L_08AD6200:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(2048));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[18] << 11u);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(31, 0x08AD6238u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(260)));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 524u, 0x0887F9D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6238u) goto L_08AD6238;
    return;
L_08AD6238:
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x08AD6254u);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD6254u) goto L_08AD6254;
    return;
L_08AD6254:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08AD6350;
      }
      goto L_08AD6268;
    }
L_08AD6268:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AD6274u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AD6274u) goto L_08AD6274;
    return;
L_08AD6274:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[7];
    ctx.set_gpr(31, 0x08AD628Cu);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD628Cu) goto L_08AD628C;
    return;
L_08AD628C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[16] - ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD62FC;
      }
      goto L_08AD62A8;
    }
L_08AD62A8:
    ctx.set_gpr(31, 0x08AD62B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 526u, 0x0887F9ECu>(ctx, &aot_mem) && ctx.pc == 0x08AD62B0u) goto L_08AD62B0;
    return;
L_08AD62B0:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[19] == 0u) {
    ctx.pc = 0x08AD62BCu; rt.stop("Allegrex BREAK code 7 at 0x08AD62BC"); return;
        goto L_08AD62C0;
    }
    goto L_08AD62C0;
L_08AD62C0:
    ctx.set_gpr(5, ctx.hi);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AD62DC;
      }
      goto L_08AD62CC;
    }
L_08AD62CC:
    if (ctx.gpr[19] == 0u) {
    ctx.pc = 0x08AD62D0u; rt.stop("Allegrex BREAK code 7 at 0x08AD62D0"); return;
        goto L_08AD62D4;
    }
    goto L_08AD62D4;
L_08AD62D4:
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08AD62DC;
L_08AD62DC:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD62FC:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[9];
    ctx.set_gpr(31, 0x08AD630Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD630Cu) goto L_08AD630C;
    return;
L_08AD630C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[18]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08AD6350;
      }
      goto L_08AD6320;
    }
L_08AD6320:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AD632Cu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AD632Cu) goto L_08AD632C;
    return;
L_08AD632C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[13];
    ctx.set_gpr(31, 0x08AD6344u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD6344u) goto L_08AD6344;
    return;
L_08AD6344:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[4]);
    goto L_08AD62A8;
L_08AD6350:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[11];
    ctx.set_gpr(31, 0x08AD6360u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD6360u) goto L_08AD6360;
    return;
L_08AD6360:
    // nop
    goto L_08AD62A8;
L_08AD6368:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + static_cast<std::uint32_t>(128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(31, 0x08AD638Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.pc = 0x08B0E2BCu;
    return;
L_08AD638C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08AD63A8u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD63A8u) goto L_08AD63A8;
    return;
L_08AD63A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08AD63C4;
      }
      goto L_08AD63B0;
    }
L_08AD63B0:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AD63BCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(32));
    ctx.pc = 0x08B0E2B4u;
    return;
L_08AD63BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AD63E0;
      }
      goto L_08AD63C4;
    }
L_08AD63C4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AD63C8;
L_08AD63C8:
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
L_08AD63E0:
    ctx.set_gpr(3, 32865u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | 510u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.set_gpr(10, 32865u << 16u);
      if (branch_taken) {
          goto L_08AD6458;
      }
      goto L_08AD63F0;
    }
L_08AD63F0:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(8, 32865u << 16u);
      if (branch_taken) {
          goto L_08AD6438;
      }
      goto L_08AD63FC;
    }
L_08AD63FC:
    ctx.set_gpr(6, 32865u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] | 259u);
    if (ctx.gpr[16] == ctx.gpr[5]) {
    ctx.set_gpr(2, 32865u << 16u);
        goto L_08AD6428;
    }
    goto L_08AD640C;
L_08AD640C:
    ctx.set_gpr(14, 2226u << 16u);
    goto L_08AD6410;
L_08AD6410:
    ctx.set_gpr(4, ctx.gpr[14] + static_cast<std::uint32_t>(-4296));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AD6418;
L_08AD6418:
    ctx.set_gpr(31, 0x08AD6420u);
    // nop
    goto L_08AD6860;
L_08AD6420:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AD63C8;
L_08AD6428:
    ctx.set_gpr(9, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[9] + static_cast<std::uint32_t>(-4244));
    ctx.set_gpr(5, ctx.gpr[2] | 259u);
    goto L_08AD6418;
L_08AD6438:
    ctx.set_gpr(7, ctx.gpr[8] | 32775u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[7];
    ctx.set_gpr(14, 2226u << 16u);
      if (branch_taken) {
          goto L_08AD6410;
      }
      goto L_08AD6444;
    }
L_08AD6444:
    ctx.set_gpr(12, 32865u << 16u);
    ctx.set_gpr(13, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[13] + static_cast<std::uint32_t>(-4160));
    ctx.set_gpr(5, ctx.gpr[12] | 32775u);
    goto L_08AD6418;
L_08AD6458:
    ctx.set_gpr(11, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[11] + static_cast<std::uint32_t>(-4092));
    ctx.set_gpr(5, ctx.gpr[10] | 510u);
    goto L_08AD6418;
L_08AD6468:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.set_gpr(31, 0x08AD649Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    goto L_08AD6804;
L_08AD649C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AD64D0;
      }
      goto L_08AD64A8;
    }
L_08AD64A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08AD64AC;
L_08AD64AC:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD64D0:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(724)));
    ctx.set_gpr(2, 32767u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] | 65535u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x08AD64F4u);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD64F4u) goto L_08AD64F4;
    return;
L_08AD64F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08AD65C0;
    }
    goto L_08AD6504;
L_08AD6504:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[16];
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD6620;
      }
      goto L_08AD6510;
    }
L_08AD6510:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[16];
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1000));
      if (branch_taken) {
          goto L_08AD65DC;
      }
      goto L_08AD651C;
    }
L_08AD651C:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(740)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(500));
    ctx.set_gpr(25, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(24, ctx.gpr[25] + static_cast<std::uint32_t>(-500));
    ctx.set_gpr(22, ctx.lo);
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[24]) ? 1u : 0u);
    if (ctx.gpr[15] != 0u) {
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08AD65C0;
    }
    goto L_08AD6548;
L_08AD6548:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1000));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(29970));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(21, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(740)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(788), ctx.gpr[10]);
    jump_target = ctx.gpr[19];
    ctx.set_gpr(31, 0x08AD65B8u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(740), ctx.gpr[20]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD65B8u) goto L_08AD65B8;
    return;
L_08AD65B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08AD64AC;
L_08AD65C0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x08AD65D4u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD65D4u) goto L_08AD65D4;
    return;
L_08AD65D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08AD64AC;
L_08AD65DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(760)));
    ctx.set_gpr(31, 0x08AD65E8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 8u, 0x08AD8088u>(ctx, &aot_mem) && ctx.pc == 0x08AD65E8u) goto L_08AD65E8;
    return;
L_08AD65E8:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(748)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[13] << 1u);
    ctx.set_gpr(11, 0u - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[12]);
    ctx.set_gpr(21, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    if (ctx.gpr[21] == 0u) {
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(740)));
        goto L_08AD6548;
    }
    goto L_08AD660C;
L_08AD660C:
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[14] == 0u) {
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08AD65C0;
    }
    goto L_08AD6618;
L_08AD6618:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(740)));
    goto L_08AD6548;
L_08AD6620:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08AD65C0;
    }
    goto L_08AD662C;
L_08AD662C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(776)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(780)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
      if (branch_taken) {
          goto L_08AD673C;
      }
      goto L_08AD6640;
    }
L_08AD6640:
    ctx.set_gpr(11, 2226u << 16u);
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-3292)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(5)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_08AD6720;
      }
      goto L_08AD6658;
    }
L_08AD6658:
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(740)));
    ctx.set_gpr(15, 2226u << 16u);
    ctx.fpr[11] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(-3288)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[10] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(13)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[10]; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(9, 0x7FC00000u); else ctx.fpr[9] = fs * ft; }
    ctx.fpr[8] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    ctx.set_fpr_bits(12, ctx.fpr_bits(8));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = ctx.fpr[8] - ctx.fpr[13];
    ctx.set_gpr(31, 0x08AD6698u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD6758;
L_08AD6698:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AD66AC;
      }
      goto L_08AD66A0;
    }
L_08AD66A0:
    ctx.set_gpr(22, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD66C8;
      }
      goto L_08AD66AC;
    }
L_08AD66AC:
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD66B4;
L_08AD66B4:
    if (ctx.gpr[21] == ctx.gpr[10]) {
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08AD65C0;
    }
    goto L_08AD66BC;
L_08AD66BC:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(740)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(784), ctx.gpr[16]);
    goto L_08AD6548;
L_08AD66C8:
    ctx.set_gpr(31, 0x08AD66D0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 45u, 0x08AD852Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD66D0u) goto L_08AD66D0;
    return;
L_08AD66D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(760)));
    ctx.set_gpr(31, 0x08AD66DCu);
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    goto L_08AD7DA4;
L_08AD66DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD66B4;
      }
      goto L_08AD66E4;
    }
L_08AD66E4:
    ctx.set_gpr(8, ctx.gpr[22] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[22] ^ 3u);
    ctx.set_gpr(25, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(24, ctx.gpr[25] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD66B4;
      }
      goto L_08AD6700;
    }
L_08AD6700:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(788)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD66B4;
      }
      goto L_08AD6718;
    }
L_08AD6718:
    ctx.set_gpr(21, 0u + 0u);
    goto L_08AD66B4;
L_08AD6720:
    ctx.set_gpr(14, ctx.gpr[4] >> 1u);
    ctx.set_gpr(13, ctx.gpr[4] & 1u);
    ctx.set_gpr(12, ctx.gpr[13] | ctx.gpr[14]);
    ctx.fpr[7] = std::bit_cast<float>(ctx.gpr[12]);
    ctx.fpr[6] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(7)));
    ctx.fpr[1] = ctx.fpr[6] + ctx.fpr[6];
    goto L_08AD6658;
L_08AD673C:
    ctx.set_gpr(10, ctx.gpr[2] >> 1u);
    ctx.set_gpr(9, ctx.gpr[2] & 1u);
    ctx.set_gpr(6, ctx.gpr[9] | ctx.gpr[10]);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.fpr[2] = ctx.fpr[3] + ctx.fpr[3];
    goto L_08AD6640;
L_08AD6758:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-3284)));
    ctx.fpr[0] = ctx.fpr[4] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[3] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD67E8;
      }
      goto L_08AD6790;
    }
L_08AD6790:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-3280)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-3284)));
      if (branch_taken) {
          goto L_08AD67EC;
      }
      goto L_08AD67A8;
    }
L_08AD67A8:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(784)));
    ctx.fpr[3] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, ctx.gpr[8] ^ 2u);
    ctx.set_gpr(10, ctx.gpr[8] ^ 4u);
    ctx.set_gpr(5, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(9, ctx.gpr[10] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[5] | ctx.gpr[9]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[3]));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_08AD67DC;
      }
      goto L_08AD67D0;
    }
L_08AD67D0:
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AD67DC;
      }
      goto L_08AD67D8;
    }
L_08AD67D8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    goto L_08AD67DC;
L_08AD67DC:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    goto L_08AD67E0;
L_08AD67E0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD67E8:
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-3284)));
    goto L_08AD67EC;
L_08AD67EC:
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[5]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
        goto L_08AD67DC;
    }
    goto L_08AD67FC;
L_08AD67FC:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    goto L_08AD67E0;
L_08AD6804:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[3] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(7, 2226u << 16u);
      if (branch_taken) {
          goto L_08AD6858;
      }
      goto L_08AD6818;
    }
L_08AD6818:
    ctx.set_gpr(6, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[7] + static_cast<std::uint32_t>(-4016));
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6830:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6838:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6840:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6848:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6850:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6858:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6860:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AD6870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 417u, 0x088A2290u>(ctx, &aot_mem) && ctx.pc == 0x08AD6870u) goto L_08AD6870;
    return;
L_08AD6870:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD687C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6884:
    ctx.set_gpr(6, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23964)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-23964), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AD68B0;
      }
      goto L_08AD68A4;
    }
L_08AD68A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08AD68A8;
L_08AD68A8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD68B0:
    ctx.set_gpr(7, 2247u << 16u);
    ctx.set_gpr(31, 0x08AD68BCu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-23128)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 475u, 0x088A2B74u>(ctx, &aot_mem) && ctx.pc == 0x08AD68BCu) goto L_08AD68BC;
    return;
L_08AD68BC:
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23132)));
    ctx.set_gpr(31, 0x08AD68CCu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 475u, 0x088A2B74u>(ctx, &aot_mem) && ctx.pc == 0x08AD68CCu) goto L_08AD68CC;
    return;
L_08AD68CC:
    ctx.set_gpr(31, 0x08AD68D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 24u, 0x08AD820Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD68D4u) goto L_08AD68D4;
    return;
L_08AD68D4:
    ctx.set_gpr(31, 0x08AD68DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 337u, 0x0887E684u>(ctx, &aot_mem) && ctx.pc == 0x08AD68DCu) goto L_08AD68DC;
    return;
L_08AD68DC:
    ctx.set_gpr(31, 0x08AD68E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 637u, 0x088A3C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD68E4u) goto L_08AD68E4;
    return;
L_08AD68E4:
    ctx.set_gpr(31, 0x08AD68ECu);
    // nop
    ctx.pc = 0x08B0E2A4u;
    return;
L_08AD68EC:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(-3984));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AD68A4;
      }
      goto L_08AD68FC;
    }
L_08AD68FC:
    ctx.set_gpr(31, 0x08AD6904u);
    // nop
    goto L_08AD6860;
L_08AD6904:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08AD68A8;
L_08AD690C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + static_cast<std::uint32_t>(432));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AD693Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD693Cu) goto L_08AD693C;
    return;
L_08AD693C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AD6948u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD6948u) goto L_08AD6948;
    return;
L_08AD6948:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(31, 0x08AD6954u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 32u, 0x08AD83D4u>(ctx, &aot_mem) && ctx.pc == 0x08AD6954u) goto L_08AD6954;
    return;
L_08AD6954:
    ctx.set_gpr(31, 0x08AD695Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD78EC;
L_08AD695C:
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
L_08AD6A10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[5] ^ 6u);
    ctx.set_gpr(6, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD6A48;
      }
      goto L_08AD6A3C;
    }
L_08AD6A3C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD6A5C;
      }
      goto L_08AD6A48;
    }
L_08AD6A48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08AD6A4C;
L_08AD6A4C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6A5C:
    ctx.set_gpr(31, 0x08AD6A64u);
    // nop
    goto L_08AD6804;
L_08AD6A64:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(31, 0x08AD6A74u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 42u, 0x08AD84D4u>(ctx, &aot_mem) && ctx.pc == 0x08AD6A74u) goto L_08AD6A74;
    return;
L_08AD6A74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AD6AA0;
      }
      goto L_08AD6A80;
    }
L_08AD6A80:
    ctx.set_gpr(10, 2247u << 16u);
    goto L_08AD6A84;
L_08AD6A84:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-23152)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AD6A48;
      }
      goto L_08AD6A90;
    }
L_08AD6A90:
    ctx.set_gpr(31, 0x08AD6A98u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.pc = 0x08B0DD4Cu;
    return;
L_08AD6A98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08AD6A4C;
L_08AD6AA0:
    ctx.set_gpr(31, 0x08AD6AA8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 15u, 0x08AD811Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD6AA8u) goto L_08AD6AA8;
    return;
L_08AD6AA8:
    ctx.set_gpr(10, 2247u << 16u);
    goto L_08AD6A84;
L_08AD6AB0:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23152)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(5, 2247u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(-23956));
      if (branch_taken) {
          goto L_08AD6AE0;
      }
      goto L_08AD6AD0;
    }
L_08AD6AD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08AD6AD4;
L_08AD6AD4:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6AE0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23956)));
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_08AD6AD4;
    }
    goto L_08AD6AEC;
L_08AD6AEC:
    ctx.set_gpr(31, 0x08AD6AF4u);
    // nop
    goto L_08AD5B98;
L_08AD6AF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08AD6AD4;
L_08AD6AFC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23956)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-23956));
      if (branch_taken) {
          goto L_08AD6B24;
      }
      goto L_08AD6B14;
    }
L_08AD6B14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08AD6B18;
L_08AD6B18:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6B24:
    ctx.set_gpr(31, 0x08AD6B2Cu);
    // nop
    goto L_08AD79C8;
L_08AD6B2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08AD6B18;
L_08AD6B34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(2, 32767u << 16u);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x08AD6B6Cu);
    ctx.set_gpr(6, ctx.gpr[2] | 65535u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD6B6Cu) goto L_08AD6B6C;
    return;
L_08AD6B6C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[7] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08AD6BA8;
      }
      goto L_08AD6B84;
    }
L_08AD6B84:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    goto L_08AD6B8C;
L_08AD6B8C:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08AD6B94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD6B94u) goto L_08AD6B94;
    return;
L_08AD6B94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6BA8:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(720), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(32)));
    goto L_08AD6B8C;
L_08AD6C44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08AD6C8C;
      }
      goto L_08AD6C6C;
    }
L_08AD6C6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_08AD6C8C:
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AD6CA0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = 0x08B0E25Cu;
    return;
L_08AD6CA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD6D8C;
      }
      goto L_08AD6CA8;
    }
L_08AD6CA8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(31, 0x08AD6CB8u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(408));
    ctx.pc = 0x08B0E2ECu;
    return;
L_08AD6CB8:
    ctx.set_gpr(3, 2226u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-3900));
      if (branch_taken) {
          goto L_08AD6D54;
      }
      goto L_08AD6CC4;
    }
L_08AD6CC4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[5]) < 8193 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(11, 2226u << 16u);
      if (branch_taken) {
          goto L_08AD6D80;
      }
      goto L_08AD6CD4;
    }
L_08AD6CD4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.set_gpr(19, ctx.gpr[11] + static_cast<std::uint32_t>(-5124));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AD6CECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    goto L_08AD53C4;
L_08AD6CEC:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(412));
    ctx.set_gpr(8, ctx.gpr[10] + ctx.gpr[2]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AD6D68;
      }
      goto L_08AD6D0C;
    }
L_08AD6D0C:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[4] == 0u) {
    ctx.pc = 0x08AD6D14u; rt.stop("Allegrex BREAK code 7 at 0x08AD6D14"); return;
        goto L_08AD6D18;
    }
    goto L_08AD6D18;
L_08AD6D18:
    ctx.set_gpr(15, ctx.gpr[14] + static_cast<std::uint32_t>(7));
    { const std::uint32_t dividend = ctx.gpr[15]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(13, ctx.gpr[14] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[13]);
    ctx.set_gpr(12, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[12] << 3u);
    goto L_08AD6D30;
L_08AD6D30:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(340));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AD6D44u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.pc = 0x08B0E244u;
    return;
L_08AD6D44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08AD6C6C;
      }
      goto L_08AD6D4C;
    }
L_08AD6D4C:
    ctx.set_gpr(16, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(-3844));
    goto L_08AD6D54;
L_08AD6D54:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AD6D58;
L_08AD6D58:
    ctx.set_gpr(31, 0x08AD6D60u);
    // nop
    goto L_08AD6860;
L_08AD6D60:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AD6C6C;
L_08AD6D68:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(-4944));
    ctx.set_gpr(31, 0x08AD6D78u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08AD6860;
L_08AD6D78:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08AD6D30;
L_08AD6D80:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(-3800));
    goto L_08AD6D58;
L_08AD6D8C:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-3744));
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AD6D58;
L_08AD6D9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(18, ctx.gpr[6] + static_cast<std::uint32_t>(-5256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[4] + static_cast<std::uint32_t>(716));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[5] << 5u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(708), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD6DECu);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(712), ctx.gpr[2]);
    goto L_08AD53C4;
L_08AD6DEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AD702C;
      }
      goto L_08AD6E08;
    }
L_08AD6E08:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[4] == 0u) {
    ctx.pc = 0x08AD6E10u; rt.stop("Allegrex BREAK code 7 at 0x08AD6E10"); return;
        goto L_08AD6E14;
    }
    goto L_08AD6E14;
L_08AD6E14:
    ctx.set_gpr(12, ctx.gpr[11] + static_cast<std::uint32_t>(7));
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[10]);
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[4] << 3u);
    goto L_08AD6E2C;
L_08AD6E2C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(708)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AD6EDC;
      }
      goto L_08AD6E3C;
    }
L_08AD6E3C:
    ctx.set_gpr(13, 2226u << 16u);
    ctx.set_gpr(20, ctx.gpr[13] + static_cast<std::uint32_t>(-5236));
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(21, 2226u << 16u);
    goto L_08AD6E4C;
L_08AD6E4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(716)));
    ctx.set_gpr(6, ctx.gpr[17] << 5u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(18, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[8] << 2u);
    ctx.set_gpr(31, 0x08AD6E80u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08AD53C4;
L_08AD6E80:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(15, ctx.gpr[25] + ctx.gpr[2]);
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[24]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(-4944));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[15]);
      if (branch_taken) {
          goto L_08AD701C;
      }
      goto L_08AD6EA4;
    }
L_08AD6EA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[19] == 0u) {
    ctx.pc = 0x08AD6EACu; rt.stop("Allegrex BREAK code 7 at 0x08AD6EAC"); return;
        goto L_08AD6EB0;
    }
    goto L_08AD6EB0;
L_08AD6EB0:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(15));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[19]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(9, ctx.gpr[4] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[9]);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    goto L_08AD6EC8;
L_08AD6EC8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(708)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AD6E4C;
      }
      goto L_08AD6EDC;
    }
L_08AD6EDC:
    ctx.set_gpr(5, ctx.gpr[5] << 4u);
    ctx.set_gpr(17, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(732), ctx.gpr[5]);
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(-5220));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AD6EFCu);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    goto L_08AD53C4;
L_08AD6EFC:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(728));
    ctx.set_gpr(20, ctx.gpr[11] + ctx.gpr[2]);
    ctx.set_gpr(19, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AD7004;
      }
      goto L_08AD6F1C;
    }
L_08AD6F1C:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[4] == 0u) {
    ctx.pc = 0x08AD6F24u; rt.stop("Allegrex BREAK code 7 at 0x08AD6F24"); return;
        goto L_08AD6F28;
    }
    goto L_08AD6F28;
L_08AD6F28:
    ctx.set_gpr(24, ctx.gpr[15] + static_cast<std::uint32_t>(7));
    { const std::uint32_t dividend = ctx.gpr[24]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[14]);
    ctx.set_gpr(13, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[13] << 3u);
    goto L_08AD6F40;
L_08AD6F40:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(728)));
    ctx.set_gpr(31, 0x08AD6F54u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(732)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 207u, 0x088A0EA8u>(ctx, &aot_mem) && ctx.pc == 0x08AD6F54u) goto L_08AD6F54;
    return;
L_08AD6F54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(724), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD6FEC;
      }
      goto L_08AD6F5C;
    }
L_08AD6F5C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(708)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AD6FAC;
      }
      goto L_08AD6F68;
    }
L_08AD6F68:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(724)));
    goto L_08AD6F70;
L_08AD6F70:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(716)));
    ctx.set_gpr(2, ctx.gpr[17] << 5u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[9];
    ctx.set_gpr(31, 0x08AD6F9Cu);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD6F9Cu) goto L_08AD6F9C;
    return;
L_08AD6F9C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(708)));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(724)));
        goto L_08AD6F70;
    }
    goto L_08AD6FAC;
L_08AD6FAC:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(3003));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[18]);
    ctx.set_gpr(2, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(740), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(744), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(720), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(736), 0u);
    goto L_08AD6FC8;
L_08AD6FC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6FEC:
    ctx.set_gpr(16, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(-3692));
    ctx.set_gpr(31, 0x08AD6FFCu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AD6860;
L_08AD6FFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AD6FC8;
L_08AD7004:
    ctx.set_gpr(12, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[12] + static_cast<std::uint32_t>(-4944));
    ctx.set_gpr(31, 0x08AD7014u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08AD6860;
L_08AD7014:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08AD6F40;
L_08AD701C:
    ctx.set_gpr(31, 0x08AD7024u);
    // nop
    goto L_08AD6860;
L_08AD7024:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08AD6EC8;
L_08AD702C:
    ctx.set_gpr(9, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[9] + static_cast<std::uint32_t>(-4944));
    ctx.set_gpr(31, 0x08AD703Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08AD6860;
L_08AD703C:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08AD6E2C;
L_08AD7044:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD740C;
      }
      goto L_08AD7080;
    }
L_08AD7080:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(88));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(756), ctx.gpr[5]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(-5204));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AD70A0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(88));
    goto L_08AD53C4;
L_08AD70A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(760));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AD74E8;
      }
      goto L_08AD70C0;
    }
L_08AD70C0:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[4] == 0u) {
    ctx.pc = 0x08AD70C8u; rt.stop("Allegrex BREAK code 7 at 0x08AD70C8"); return;
        goto L_08AD70CC;
    }
    goto L_08AD70CC;
L_08AD70CC:
    ctx.set_gpr(12, ctx.gpr[11] + static_cast<std::uint32_t>(7));
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[10]);
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[9] << 3u);
    goto L_08AD70E4;
L_08AD70E4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08AD7100u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    goto L_08AD7E98;
L_08AD7100:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08AD74D0;
      }
      goto L_08AD7108;
    }
L_08AD7108:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(20));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(768), ctx.gpr[19]);
    ctx.set_gpr(23, 2226u << 16u);
    ctx.set_gpr(19, ctx.gpr[23] + static_cast<std::uint32_t>(-5176));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AD7134u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    goto L_08AD53C4;
L_08AD7134:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(15, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[15]);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AD74B4;
      }
      goto L_08AD7154;
    }
L_08AD7154:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[4] == 0u) {
    ctx.pc = 0x08AD715Cu; rt.stop("Allegrex BREAK code 7 at 0x08AD715C"); return;
        goto L_08AD7160;
    }
    goto L_08AD7160;
L_08AD7160:
    ctx.set_gpr(6, ctx.gpr[30] + static_cast<std::uint32_t>(7));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(25, ctx.gpr[30] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[25]);
    ctx.set_gpr(24, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[24] << 3u);
    goto L_08AD7178;
L_08AD7178:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(8, 2226u << 16u);
    ctx.set_gpr(23, ctx.gpr[8] + static_cast<std::uint32_t>(-5160));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(64));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(30, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(31, 0x08AD71BCu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    goto L_08AD53C4;
L_08AD71BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08AD749C;
      }
      goto L_08AD71E0;
    }
L_08AD71E0:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[21] == 0u) {
    ctx.pc = 0x08AD71E8u; rt.stop("Allegrex BREAK code 7 at 0x08AD71E8"); return;
        goto L_08AD71EC;
    }
    goto L_08AD71EC;
L_08AD71EC:
    ctx.set_gpr(12, ctx.gpr[11] + static_cast<std::uint32_t>(63));
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[10]);
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(8, ctx.gpr[9] << 6u);
    goto L_08AD7204;
L_08AD7204:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[20]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AD72D8;
      }
      goto L_08AD7214;
    }
L_08AD7214:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    goto L_08AD7218;
L_08AD7218:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(15, ctx.gpr[6] + ctx.gpr[19]);
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    ctx.set_gpr(25, ctx.gpr[20] << 2u);
    ctx.set_gpr(4, ctx.gpr[30] + static_cast<std::uint32_t>(-4944));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(18, ctx.gpr[25] + ctx.gpr[24]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[15]);
      if (branch_taken) {
          goto L_08AD7488;
      }
      goto L_08AD7244;
    }
L_08AD7244:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[21] == 0u) {
    ctx.pc = 0x08AD724Cu; rt.stop("Allegrex BREAK code 7 at 0x08AD724C"); return;
        goto L_08AD7250;
    }
    goto L_08AD7250;
L_08AD7250:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(63));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[7]);
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(8, ctx.gpr[4] << 6u);
    goto L_08AD7268;
L_08AD7268:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(9, ctx.gpr[13] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(11, ctx.gpr[3] << 2u);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[30] + static_cast<std::uint32_t>(-4944));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[22]);
    ctx.set_gpr(18, ctx.gpr[11] + ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AD7474;
      }
      goto L_08AD72A0;
    }
L_08AD72A0:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[21] == 0u) {
    ctx.pc = 0x08AD72A8u; rt.stop("Allegrex BREAK code 7 at 0x08AD72A8"); return;
        goto L_08AD72AC;
    }
    goto L_08AD72AC;
L_08AD72AC:
    ctx.set_gpr(25, ctx.gpr[24] + static_cast<std::uint32_t>(63));
    { const std::uint32_t dividend = ctx.gpr[25]; const std::uint32_t divisor = ctx.gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(15, ctx.gpr[24] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[15]);
    ctx.set_gpr(14, ctx.lo);
    ctx.set_gpr(8, ctx.gpr[14] << 6u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(2));
    goto L_08AD72C8;
L_08AD72C8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(18, static_cast<std::int32_t>(ctx.gpr[20]) < 5 ? 1u : 0u);
    if (ctx.gpr[18] != 0u) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
        goto L_08AD7218;
    }
    goto L_08AD72D8;
L_08AD72D8:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(24576));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.set_gpr(30, 2226u << 16u);
    ctx.set_gpr(19, ctx.gpr[30] + static_cast<std::uint32_t>(-3640));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24576));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AD72FCu);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    goto L_08AD53C4;
L_08AD72FC:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(20, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(22, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AD7458;
      }
      goto L_08AD7320;
    }
L_08AD7320:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[4] == 0u) {
    ctx.pc = 0x08AD7328u; rt.stop("Allegrex BREAK code 7 at 0x08AD7328"); return;
        goto L_08AD732C;
    }
    goto L_08AD732C;
L_08AD732C:
    ctx.set_gpr(2, ctx.gpr[7] + static_cast<std::uint32_t>(7));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[6] << 3u);
    goto L_08AD7344;
L_08AD7344:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08AD735Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 726u, 0x0889F958u>(ctx, &aot_mem) && ctx.pc == 0x08AD735Cu) goto L_08AD735C;
    return;
L_08AD735C:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(20));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(13, 2226u << 16u);
    ctx.set_gpr(19, ctx.gpr[13] + static_cast<std::uint32_t>(-5136));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), ctx.gpr[12]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AD738Cu);
    ctx.set_gpr(17, ctx.gpr[11] + static_cast<std::uint32_t>(28));
    goto L_08AD53C4;
L_08AD738C:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(8, ctx.gpr[10] + ctx.gpr[2]);
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AD7440;
      }
      goto L_08AD73A4;
    }
L_08AD73A4:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[18] == 0u) {
    ctx.pc = 0x08AD73ACu; rt.stop("Allegrex BREAK code 7 at 0x08AD73AC"); return;
        goto L_08AD73B0;
    }
    goto L_08AD73B0;
L_08AD73B0:
    ctx.set_gpr(25, ctx.gpr[24] + static_cast<std::uint32_t>(7));
    { const std::uint32_t dividend = ctx.gpr[25]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(15, ctx.gpr[24] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[15]);
    ctx.set_gpr(14, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[14] << 3u);
    goto L_08AD73C8;
L_08AD73C8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(20, 2226u << 16u);
    ctx.set_gpr(22, 2221u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(-3624));
    ctx.set_gpr(5, ctx.gpr[22] + static_cast<std::uint32_t>(31364));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2048));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AD73F0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.pc = 0x08B0DDE4u;
    return;
L_08AD73F0:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(752), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(764), ctx.gpr[18]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(772)));
    ctx.set_gpr(31, 0x08AD7408u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 19u, 0x08AD8160u>(ctx, &aot_mem) && ctx.pc == 0x08AD7408u) goto L_08AD7408;
    return;
L_08AD7408:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08AD740C;
L_08AD740C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD7440:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-4944));
    ctx.set_gpr(31, 0x08AD7450u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08AD6860;
L_08AD7450:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08AD73C8;
L_08AD7458:
    ctx.set_gpr(17, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(-4944));
    ctx.set_gpr(31, 0x08AD7468u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08AD6860;
L_08AD7468:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    ctx.set_gpr(3, 0u + 0u);
    goto L_08AD7344;
L_08AD7474:
    ctx.set_gpr(31, 0x08AD747Cu);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(2));
    goto L_08AD6860;
L_08AD747C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    ctx.set_gpr(8, 0u + 0u);
    goto L_08AD72C8;
L_08AD7488:
    ctx.set_gpr(31, 0x08AD7490u);
    // nop
    goto L_08AD6860;
L_08AD7490:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    ctx.set_gpr(8, 0u + 0u);
    goto L_08AD7268;
L_08AD749C:
    ctx.set_gpr(4, ctx.gpr[30] + static_cast<std::uint32_t>(-4944));
    ctx.set_gpr(31, 0x08AD74A8u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    goto L_08AD6860;
L_08AD74A8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    ctx.set_gpr(8, 0u + 0u);
    goto L_08AD7204;
L_08AD74B4:
    ctx.set_gpr(17, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(-4944));
    ctx.set_gpr(31, 0x08AD74C4u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08AD6860;
L_08AD74C4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    ctx.set_gpr(3, 0u + 0u);
    goto L_08AD7178;
L_08AD74D0:
    ctx.set_gpr(13, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[13] + static_cast<std::uint32_t>(-3612));
    ctx.set_gpr(31, 0x08AD74E0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AD6860;
L_08AD74E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AD740C;
L_08AD74E8:
    ctx.set_gpr(8, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[8] + static_cast<std::uint32_t>(-4944));
    ctx.set_gpr(31, 0x08AD74F8u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08AD6860;
L_08AD74F8:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08AD70E4;
L_08AD7500:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AD7518u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 45u, 0x08AD852Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD7518u) goto L_08AD7518;
    return;
L_08AD7518:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08AD752Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD752Cu) goto L_08AD752C;
    return;
L_08AD752C:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < 2048 ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2048));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD7558;
      }
      goto L_08AD7544;
    }
L_08AD7544:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD7558:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x08AD756Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD756Cu) goto L_08AD756C;
    return;
L_08AD756C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x08AD757Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = 0x08B0E24Cu;
    return;
L_08AD757C:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-3572));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(700));
      if (branch_taken) {
          goto L_08AD75D8;
      }
      goto L_08AD7590;
    }
L_08AD7590:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AD759Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.pc = 0x08B0E27Cu;
    return;
L_08AD759C:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(-3516));
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08AD75D8;
      }
      goto L_08AD75B0;
    }
L_08AD75B0:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[11];
    ctx.set_gpr(31, 0x08AD75C8u);
    ctx.set_gpr(4, ctx.gpr[13] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD75C8u) goto L_08AD75C8;
    return;
L_08AD75C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(704), ctx.gpr[4]);
    goto L_08AD7544;
L_08AD75D8:
    ctx.set_gpr(31, 0x08AD75E0u);
    // nop
    goto L_08AD6860;
L_08AD75E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[7];
    ctx.set_gpr(31, 0x08AD75F8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD75F8u) goto L_08AD75F8;
    return;
L_08AD75F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    goto L_08AD7544;
L_08AD7600:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08AD7624u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD7624u) goto L_08AD7624;
    return;
L_08AD7624:
    ctx.set_gpr(3, ctx.gpr[2] >> 5u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AD7664;
      }
      goto L_08AD7634;
    }
L_08AD7634:
    ctx.set_gpr(31, 0x08AD763Cu);
    // nop
    ctx.pc = 0x08B0E2BCu;
    return;
L_08AD763C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD76A0;
      }
      goto L_08AD7644;
    }
L_08AD7644:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    goto L_08AD7648;
L_08AD7648:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    ctx.set_gpr(3, 2247u << 16u);
      if (branch_taken) {
          goto L_08AD7688;
      }
      goto L_08AD7654;
    }
L_08AD7654:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23152)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD7678;
      }
      goto L_08AD7660;
    }
L_08AD7660:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    goto L_08AD7664;
L_08AD7664:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD7678:
    ctx.set_gpr(31, 0x08AD7680u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.pc = 0x08B0DD4Cu;
    return;
L_08AD7680:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    goto L_08AD7664;
L_08AD7688:
    ctx.set_gpr(31, 0x08AD7690u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 14u, 0x08AD8114u>(ctx, &aot_mem) && ctx.pc == 0x08AD7690u) goto L_08AD7690;
    return;
L_08AD7690:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AD7664;
      }
      goto L_08AD7698;
    }
L_08AD7698:
    ctx.set_gpr(3, 2247u << 16u);
    goto L_08AD7654;
L_08AD76A0:
    ctx.set_gpr(31, 0x08AD76A8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 45u, 0x08AD852Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD76A8u) goto L_08AD76A8;
    return;
L_08AD76A8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AD7664;
      }
      goto L_08AD76B4;
    }
L_08AD76B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    goto L_08AD7648;
L_08AD76BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AD76D4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 45u, 0x08AD852Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD76D4u) goto L_08AD76D4;
    return;
L_08AD76D4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AD76F4;
      }
      goto L_08AD76E0;
    }
L_08AD76E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD76F4:
    ctx.set_gpr(31, 0x08AD76FCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.pc = 0x08B0E2BCu;
    return;
L_08AD76FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AD76E0;
      }
      goto L_08AD7708;
    }
L_08AD7708:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08AD771Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD771Cu) goto L_08AD771C;
    return;
L_08AD771C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 2048 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AD76E0;
      }
      goto L_08AD7728;
    }
L_08AD7728:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(724)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08AD773Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD773Cu) goto L_08AD773C;
    return;
L_08AD773C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AD76E0;
      }
      goto L_08AD7744;
    }
L_08AD7744:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD778C;
      }
      goto L_08AD7754;
    }
L_08AD7754:
    ctx.set_gpr(31, 0x08AD775Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD608C;
L_08AD775C:
    ctx.set_gpr(9, 2247u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-23152)));
    if (ctx.gpr[8] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
        goto L_08AD777C;
    }
    goto L_08AD776C;
L_08AD776C:
    ctx.set_gpr(31, 0x08AD7774u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 42u, 0x08AD84D4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7774u) goto L_08AD7774;
    return;
L_08AD7774:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    goto L_08AD76E0;
L_08AD777C:
    ctx.set_gpr(31, 0x08AD7784u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.pc = 0x08B0DD4Cu;
    return;
L_08AD7784:
    // nop
    goto L_08AD776C;
L_08AD778C:
    ctx.set_gpr(31, 0x08AD7794u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    goto L_08AD7DA4;
L_08AD7794:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AD76E0;
      }
      goto L_08AD779C;
    }
L_08AD779C:
    ctx.set_gpr(31, 0x08AD77A4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 15u, 0x08AD811Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD77A4u) goto L_08AD77A4;
    return;
L_08AD77A4:
    // nop
    goto L_08AD7754;
L_08AD77AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + static_cast<std::uint32_t>(124));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AD77D0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.pc = 0x08B0E28Cu;
    return;
L_08AD77D0:
    ctx.set_gpr(3, 2226u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-3460));
      if (branch_taken) {
          goto L_08AD77F4;
      }
      goto L_08AD77DC;
    }
L_08AD77DC:
    ctx.set_gpr(31, 0x08AD77E4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0E264u;
    return;
L_08AD77E4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
        goto L_08AD7814;
    }
    goto L_08AD77EC;
L_08AD77EC:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-3408));
    goto L_08AD77F4;
L_08AD77F4:
    ctx.set_gpr(31, 0x08AD77FCu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AD6860;
L_08AD77FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD7814:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[7];
    ctx.set_gpr(31, 0x08AD7824u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD7824u) goto L_08AD7824;
    return;
L_08AD7824:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(724)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[5];
    ctx.set_gpr(31, 0x08AD7838u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD7838u) goto L_08AD7838;
    return;
L_08AD7838:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(708)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AD7884;
      }
      goto L_08AD7844;
    }
L_08AD7844:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(724)));
    goto L_08AD7848;
L_08AD7848:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(716)));
    ctx.set_gpr(14, ctx.gpr[17] << 5u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[13] + ctx.gpr[14]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[10];
    ctx.set_gpr(31, 0x08AD7874u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD7874u) goto L_08AD7874;
    return;
L_08AD7874:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(708)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(724)));
        goto L_08AD7848;
    }
    goto L_08AD7884;
L_08AD7884:
    ctx.set_gpr(17, 2247u << 16u);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23152)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(720), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(736), 0u);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(740), 0u);
      if (branch_taken) {
          goto L_08AD78D8;
      }
      goto L_08AD789C;
    }
L_08AD789C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    goto L_08AD78A0;
L_08AD78A0:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AD78C8;
      }
      goto L_08AD78AC;
    }
L_08AD78AC:
    ctx.set_gpr(25, 15u << 16u);
    ctx.set_gpr(24, ctx.gpr[25] | 65535u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(696), ctx.gpr[24]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(688), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(692), 0u);
    goto L_08AD77FC;
L_08AD78C8:
    ctx.set_gpr(31, 0x08AD78D0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    goto L_08AD7F70;
L_08AD78D0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(764), ctx.gpr[17]);
    goto L_08AD78AC;
L_08AD78D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(31, 0x08AD78E4u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = 0x08B0DD4Cu;
    return;
L_08AD78E4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    goto L_08AD78A0;
L_08AD78EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AD7904u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD6804;
L_08AD7904:
    ctx.set_gpr(6, ctx.gpr[2] ^ 3u);
    ctx.set_gpr(8, 0u < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(7, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[7] & ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-3356));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AD793C;
      }
      goto L_08AD7924;
    }
L_08AD7924:
    ctx.set_gpr(31, 0x08AD792Cu);
    // nop
    goto L_08AD6860;
L_08AD792C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD793C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AD7948u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(428)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 40u, 0x08AD84B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD7948u) goto L_08AD7948;
    return;
L_08AD7948:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AD79A4;
      }
      goto L_08AD7958;
    }
L_08AD7958:
    ctx.set_gpr(11, 2247u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-23152)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08AD7994;
      }
      goto L_08AD796C;
    }
L_08AD796C:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(720), 0u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(736), 0u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(740), 0u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(776), 0u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(780), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(788), ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    goto L_08AD792C;
L_08AD7994:
    ctx.set_gpr(31, 0x08AD799Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(424)));
    ctx.pc = 0x08B0DD7Cu;
    return;
L_08AD799C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08AD796C;
L_08AD79A4:
    ctx.set_gpr(31, 0x08AD79ACu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(760)));
    goto L_08AD7F70;
L_08AD79AC:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(752)));
    ctx.set_gpr(31, 0x08AD79C0u);
    ctx.set_gpr(6, ctx.gpr[9] + static_cast<std::uint32_t>(760));
    ctx.pc = 0x08B0DD7Cu;
    return;
L_08AD79C0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08AD7958;
L_08AD79C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD7A08;
      }
      goto L_08AD79E4;
    }
L_08AD79E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[17]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
        goto L_08AD7A58;
    }
    goto L_08AD79F4;
L_08AD79F4:
    ctx.set_gpr(31, 0x08AD79FCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD6804;
L_08AD79FC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[5]) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_08AD7A1C;
    }
    goto L_08AD7A08;
L_08AD7A08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AD7A0C;
L_08AD7A0C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD7A1C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AD7A30;
      }
      goto L_08AD7A24;
    }
L_08AD7A24:
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[3]) < -1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AD7A0C;
      }
      goto L_08AD7A30;
    }
L_08AD7A30:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[17];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AD7A08;
      }
      goto L_08AD7A40;
    }
L_08AD7A40:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_08AD7A0C;
    }
    goto L_08AD7A48;
L_08AD7A48:
    ctx.set_gpr(31, 0x08AD7A50u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 17u, 0x08AD8140u>(ctx, &aot_mem) && ctx.pc == 0x08AD7A50u) goto L_08AD7A50;
    return;
L_08AD7A50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AD7A0C;
L_08AD7A58:
    ctx.set_gpr(31, 0x08AD7A60u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 20u, 0x08AD8188u>(ctx, &aot_mem) && ctx.pc == 0x08AD7A60u) goto L_08AD7A60;
    return;
L_08AD7A60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AD7A70u);
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 21u, 0x08AD8198u>(ctx, &aot_mem) && ctx.pc == 0x08AD7A70u) goto L_08AD7A70;
    return;
L_08AD7A70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(776), ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(780), ctx.gpr[2]);
    goto L_08AD79F4;
L_08AD7A84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(52));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.set_gpr(20, 2247u << 16u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.set_gpr(17, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AD7ACCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0DDDCu;
    return;
L_08AD7ACC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_08AD7AD0;
L_08AD7AD0:
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x08AD7ADCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0DE7Cu;
    return;
L_08AD7ADC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[5] & 3u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[18];
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AD7B44;
      }
      goto L_08AD7AEC;
    }
L_08AD7AEC:
    ctx.set_gpr(31, 0x08AD7AF4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD7BA0;
L_08AD7AF4:
    ctx.set_gpr(31, 0x08AD7AFCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD7D7C;
L_08AD7AFC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 512 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(500));
      if (branch_taken) {
          goto L_08AD7B14;
      }
      goto L_08AD7B08;
    }
L_08AD7B08:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7B2C;
      }
      goto L_08AD7B14;
    }
L_08AD7B14:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23112)));
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AD7B24u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-23112), ctx.gpr[7]);
    ctx.pc = 0x08B0DD34u;
    return;
L_08AD7B24:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_08AD7AD0;
L_08AD7B2C:
    ctx.set_gpr(31, 0x08AD7B34u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD7DE4;
L_08AD7B34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23116)));
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-23116), ctx.gpr[2]);
    goto L_08AD7ACC;
L_08AD7B44:
    ctx.set_gpr(31, 0x08AD7B4Cu);
    // nop
    goto L_08AD7DA4;
L_08AD7B4C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7AEC;
      }
      goto L_08AD7B54;
    }
L_08AD7B54:
    ctx.set_gpr(31, 0x08AD7B5Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 82u, 0x088A4578u>(ctx, &aot_mem) && ctx.pc == 0x08AD7B5Cu) goto L_08AD7B5C;
    return;
L_08AD7B5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1000));
      if (branch_taken) {
          goto L_08AD7B74;
      }
      goto L_08AD7B64;
    }
L_08AD7B64:
    ctx.set_gpr(31, 0x08AD7B6Cu);
    // nop
    ctx.pc = 0x08B0DD34u;
    return;
L_08AD7B6C:
    // nop
    goto L_08AD7B54;
L_08AD7B74:
    ctx.set_gpr(31, 0x08AD7B7Cu);
    ctx.set_gpr(4, 0u + 0u);
    ctx.pc = 0x08B0DE84u;
    return;
L_08AD7B7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD7BA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[18];
    ctx.set_gpr(31, 0x08AD7BD0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD7BD0u) goto L_08AD7BD0;
    return;
L_08AD7BD0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 16384 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AD7BE8;
      }
      goto L_08AD7BDC;
    }
L_08AD7BDC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AD7BFC;
    }
    goto L_08AD7BE8;
L_08AD7BE8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD7BFC:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[10] << 2u);
    ctx.set_gpr(8, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    jump_target = ctx.gpr[9];
    ctx.set_gpr(31, 0x08AD7C28u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD7C28u) goto L_08AD7C28;
    return;
L_08AD7C28:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8192));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD7D6C;
      }
      goto L_08AD7C38;
    }
L_08AD7C38:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AD7C3C;
L_08AD7C3C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[12];
    ctx.set_gpr(31, 0x08AD7C50u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD7C50u) goto L_08AD7C50;
    return;
L_08AD7C50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[18] | ctx.gpr[2]);
    goto L_08AD7C58;
L_08AD7C58:
    ctx.set_gpr(14, ctx.gpr[15] & 3u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(8, ctx.gpr[18] + static_cast<std::uint32_t>(8192));
      if (branch_taken) {
          goto L_08AD7D38;
      }
      goto L_08AD7C6C;
    }
L_08AD7C6C:
    ctx.set_gpr(2, ctx.gpr[8] + 0u);
    goto L_08AD7C70;
L_08AD7C70:
    ctx.set_gpr(3, rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(7), ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]));
    ctx.set_gpr(5, rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(11), ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]));
    ctx.set_gpr(8, rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(15), ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[8]));
    rt.memory().aot_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[3]);
    rt.memory().aot_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(7), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(11), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    rt.memory().aot_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(15), ctx.gpr[8]);
    rt.memory().aot_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AD7C70;
      }
      goto L_08AD7CBC;
    }
L_08AD7CBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AD7CC0;
L_08AD7CC0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AD7CCCu);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = 0x08B0DDECu;
    return;
L_08AD7CCC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(13, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[13]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(5, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[12]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    if (ctx.gpr[11] == 0u) {
    ctx.pc = 0x08AD7CFCu; rt.stop("Allegrex BREAK code 7 at 0x08AD7CFC"); return;
        goto L_08AD7D00;
    }
    goto L_08AD7D00;
L_08AD7D00:
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(9, ctx.hi);
    jump_target = ctx.gpr[16];
    ctx.set_gpr(31, 0x08AD7D24u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD7D24u) goto L_08AD7D24;
    return;
L_08AD7D24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AD7D30u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0DDD4u;
    return;
L_08AD7D30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AD7BE8;
L_08AD7D38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-8), ctx.gpr[25]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[24]);
      if (branch_taken) {
          goto L_08AD7D38;
      }
      goto L_08AD7D64;
    }
L_08AD7D64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AD7CC0;
L_08AD7D6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(15, ctx.gpr[18] | ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD7C58;
      }
      goto L_08AD7D74;
    }
L_08AD7D74:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AD7C3C;
L_08AD7D7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08AD7D98u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD7D98u) goto L_08AD7D98;
    return;
L_08AD7D98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD7DA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08AD7DBCu);
    ctx.set_gpr(16, ctx.gpr[3] << 11u);
    goto L_08AD7D7C;
L_08AD7DBC:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.set_gpr(6, ctx.gpr[7] >> 30u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD7DE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(512));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x08AD7E14u);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD7E14u) goto L_08AD7E14;
    return;
L_08AD7E14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_08AD7E3C;
      }
      goto L_08AD7E24;
    }
L_08AD7E24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD7E3C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, 2247u << 16u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08AD7E24;
      }
      goto L_08AD7E4C;
    }
L_08AD7E4C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AD7E64u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-23120), ctx.gpr[12]);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 73u, 0x088A44D4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7E64u) goto L_08AD7E64;
    return;
L_08AD7E64:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-23120), 0u);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[10];
    ctx.set_gpr(31, 0x08AD7E90u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD7E90u) goto L_08AD7E90;
    return;
L_08AD7E90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AD7E24;
L_08AD7E98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(4, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AD7ED8u);
    ctx.set_gpr(17, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 67u, 0x088A4464u>(ctx, &aot_mem) && ctx.pc == 0x08AD7ED8u) goto L_08AD7ED8;
    return;
L_08AD7ED8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08AD7F04;
      }
      goto L_08AD7EE0;
    }
L_08AD7EE0:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AD7EE4;
L_08AD7EE4:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_08AD7F04:
    ctx.set_gpr(31, 0x08AD7F0Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 79u, 0x088A453Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD7F0Cu) goto L_08AD7F0C;
    return;
L_08AD7F0C:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-3276));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_08AD7F30;
      }
      goto L_08AD7F28;
    }
L_08AD7F28:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-2));
    goto L_08AD7EE4;
L_08AD7F30:
    ctx.set_gpr(31, 0x08AD7F38u);
    // nop
    ctx.pc = 0x08B0DD44u;
    return;
L_08AD7F38:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-3260));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD7F54u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.pc = 0x08B0DDF4u;
    return;
L_08AD7F54:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4179));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-23108), ctx.gpr[2]);
    goto L_08AD7EE4;
L_08AD7F70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(6, 2247u << 16u);
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-23112), 0u);
    ctx.set_gpr(31, 0x08AD7F9Cu);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23116), 0u);
    ctx.pc = 0x08B0DE3Cu;
    return;
L_08AD7F9C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08AD7FCCu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD7FCCu) goto L_08AD7FCC;
    return;
L_08AD7FCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD7FE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AD7FF8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B0DD94u;
    return;
L_08AD7FF8:
    ctx.set_gpr(31, 0x08AD8000u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0DD74u;
    return;
}

void recomp_unit_0180(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0180_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_180(Runtime &runtime) {
    runtime.register_generated_unit(180u, 0x08AD4000u, 16384u, &recomp_unit_0180, &recomp_unit_0180_entry);
    runtime.register_function(0x08AD4000u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4038u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4054u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD405Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4068u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4070u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4074u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4088u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4090u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4104u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD410Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4114u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD411Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4124u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4134u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4140u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4148u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4154u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4158u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4164u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4170u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4188u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4194u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4200u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD420Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4214u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD422Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4234u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD423Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4244u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4250u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4258u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4260u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4264u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD426Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4274u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD427Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4288u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4294u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD42A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD42C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD42C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD42D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD42E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD42E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD42F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD42F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4304u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD430Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4318u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4328u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4334u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD433Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4348u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4354u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4368u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4394u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD439Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD43B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD43B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD43C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD43C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD43E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD43F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4418u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD442Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4448u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4450u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4464u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD446Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4474u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD447Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4484u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD44A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD44A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD44BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD44C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD44FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4528u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4530u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4548u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4550u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4570u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD457Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4584u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4590u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD45A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD45ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD45B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD45C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD45D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD45DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD45FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD460Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4618u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4620u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4628u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4638u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4644u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD464Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4660u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4664u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4670u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4680u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4690u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4698u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD46ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD46ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4710u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4718u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4724u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD474Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4758u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4770u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4788u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4794u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD47C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD47D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4810u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD482Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4844u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4850u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4858u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD485Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD486Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4888u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4890u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4898u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD490Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4928u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4930u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4938u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4944u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD494Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4954u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD495Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4964u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4970u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4978u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4980u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4988u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4990u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4998u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD49A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD49B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD49D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD49DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD49E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD49F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD49F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A00u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A20u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AA4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AC8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AD8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AF0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B08u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B1Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B24u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B64u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B7Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BCCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BD4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C44u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C50u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CD8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CF4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D00u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D20u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4DBCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4DC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4DCCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4DDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4DE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4ECCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4ED4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EF0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4FCCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5020u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5028u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5030u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5038u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5040u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5048u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5064u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5088u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5090u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD50ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD50B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD50C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD50CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD513Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5168u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD517Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5188u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD519Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD51ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD51CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD51DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD51E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD520Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD521Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5238u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD524Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD528Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD52ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD52C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD52E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD52F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5310u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5328u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5340u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5358u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5374u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5390u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5398u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5410u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5470u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5478u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5480u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5488u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5490u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5494u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD54B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD54BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5510u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5530u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5548u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5554u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD556Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5590u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5598u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5614u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5638u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5640u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD564Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD565Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5664u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD566Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5670u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5678u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD567Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5688u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5690u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5698u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD56A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD56A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD56B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD56B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5700u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5720u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD572Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5744u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5768u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5770u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5778u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5780u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5794u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD57E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5808u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD581Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5844u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD584Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5858u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5860u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5868u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD587Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD588Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5894u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD589Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5900u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5908u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5918u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5920u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5930u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5938u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5944u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5970u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5974u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5984u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD598Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5994u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A20u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A24u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A50u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A7Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AA4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5ABCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AD4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5ADCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B00u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B24u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B44u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B7Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5BB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5BBCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5BD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5BDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5BE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5BF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C20u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C7Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CB0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CCCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CD4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D00u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D08u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D20u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DBCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DD8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E08u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E50u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5ECCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5ED4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FD4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6000u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6008u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD602Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6048u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD605Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD606Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6074u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6084u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD608Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6100u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6108u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6114u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6118u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD612Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6130u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6148u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD615Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6174u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD617Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6200u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6238u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6254u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6268u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6274u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD628Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD630Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6320u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD632Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6344u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6350u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6360u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6368u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD638Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD640Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6410u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6418u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6420u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6428u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6438u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6444u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6458u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6468u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD649Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD64A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD64ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD64D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD64F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6504u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6510u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD651Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6548u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD660Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6618u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6620u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD662Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6640u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6658u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6698u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6700u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6718u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6720u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD673Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6758u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6790u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6804u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6818u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6830u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6838u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6840u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6848u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6850u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6858u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6860u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6870u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD687Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6884u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6904u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD690Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD693Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6948u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6954u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD695Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A64u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AB0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AD4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AF4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B24u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C44u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CD4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D44u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6DECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E08u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6EA4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6EB0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6EC8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6EDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6EFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F1Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6FACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6FC8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6FECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6FFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7004u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7014u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD701Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7024u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD702Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD703Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7044u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7080u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD70A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD70C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD70CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD70E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7100u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7108u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7134u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7154u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7160u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7178u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD71BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD71E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD71ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7204u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7214u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7218u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7244u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7250u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7268u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD72A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD72ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD72C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD72D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD72FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7320u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD732Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7344u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD735Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD738Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7408u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD740Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7440u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7450u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7458u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7468u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7474u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD747Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7488u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7490u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD749Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD74A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD74B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD74C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD74D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD74E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD74E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD74F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7500u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7518u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD752Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7544u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7558u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD756Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD757Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7590u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD759Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7600u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7624u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7634u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD763Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7644u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7648u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7654u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7660u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7664u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7678u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7680u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7688u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7690u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7698u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7708u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD771Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7728u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD773Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7744u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7754u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD775Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD776Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7774u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD777Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7784u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD778Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7794u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD779Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7814u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7824u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7838u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7844u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7848u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7874u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7884u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD789Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD78A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD78ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD78C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD78D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD78D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD78E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD78ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7904u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7924u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD792Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD793Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7948u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7958u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD796Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7994u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD799Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A08u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A1Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A24u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A50u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7ACCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7AD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7ADCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7AECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7AF4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7AFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B08u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B24u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B44u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B64u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B7Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7BA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7BD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7BDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7BE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7BFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C50u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7CBCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7CC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7CCCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D00u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D24u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D64u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D7Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7DA4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7DBCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7DE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E24u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E64u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7ED8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7EE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7EE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FCCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FF8u, &recomp_unit_0180, "recomp_unit_0180");
}
} // namespace psprecomp
