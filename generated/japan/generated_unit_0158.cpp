#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0158[4095] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 22,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 28, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 36,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 51, 52, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0,
    0, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 59, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0,
    0, 64, 0, 65, 66, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 71, 0, 72, 73, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 78, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0,
    0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 121, 122, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 130, 0, 131, 0, 0, 132, 0, 133, 0, 134, 0, 0, 135, 0, 0, 0, 136,
    0, 137, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 143, 0, 144, 0, 145, 146, 0, 0, 147, 0, 148, 0,
    149, 0, 150, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0,
    0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0,
    0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 166,
    0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 177, 178, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0, 0,
    0, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0,
    193, 0, 0, 0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 203, 0,
    204, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0,
    0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    241, 0, 242, 0, 243, 0, 244, 0, 245, 0, 246, 0, 247, 0, 0, 0, 0, 0, 248, 0, 249, 0, 250, 251, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257,
    0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 266, 0, 0, 0, 0,
    0, 267, 0, 268, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274,
    0, 275, 0, 276, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0,
    0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0,
    0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 294, 0, 295, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0,
    298, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 304, 0, 305, 0, 0, 0, 0, 0,
    306, 0, 307, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 313,
    0, 314, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0,
    0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 328, 0, 329, 0,
    330, 0, 331, 0, 332, 0, 333, 0, 334, 0, 0, 335, 0, 336, 0, 337, 0, 338, 0, 0, 0, 0, 339, 0, 340, 0, 341, 0, 342, 0, 0, 343,
    0, 344, 345, 0, 346, 0, 0, 0, 347, 0, 0, 348, 0, 349, 0, 0, 0, 350, 351, 0, 0, 352, 353, 0, 354, 0, 0, 0, 355, 0, 0, 0,
    356, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0,
    0, 0, 364, 0, 0, 365, 0, 366, 0, 0, 367, 368, 0, 0, 369, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 374,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 390,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 393, 0, 394, 0, 0, 395, 0, 396, 0, 0, 0, 397, 0, 398, 0,
    0, 0, 399, 400, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 404, 405, 0, 406, 0, 0, 0, 0, 407, 0, 408, 0, 0, 409, 0, 410, 0, 0, 0, 411, 0, 0, 412, 0, 413, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 419, 0, 420, 0, 0, 0, 421, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0,
    0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0,
    0, 432, 0, 433, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0,
    0, 0, 440, 0, 441, 0, 442, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 445, 0, 446, 0, 0, 0, 0, 447, 0, 448, 0, 449,
    0, 450, 0, 0, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456,
    0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 459, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 463,
    0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 467, 0, 0, 468, 0, 469, 0, 0, 0, 0, 470, 0,
    0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0,
    0, 0, 479, 0, 0, 480, 0, 481, 0, 0, 0, 482, 0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0,
    0, 0, 487, 0, 0, 0, 0, 488, 0, 489, 0, 490, 0, 0, 491, 0, 492, 0, 493, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0,
    0, 0, 497, 0, 498, 0, 499, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 505,
    0, 0, 0, 0, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 514, 0, 0,
    0, 0, 515, 0, 516, 0, 0, 0, 0, 517, 0, 518, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 0,
    0, 523, 0, 524, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 531,
    0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 534, 0, 0, 0, 0, 535, 0, 536, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0,
    540, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 545, 546, 0, 0, 547, 0, 548, 0,
    549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 552, 0, 0,
    553, 0, 0, 554, 0, 0, 555, 0, 0, 556, 0, 557, 0, 0, 558, 0, 0, 559, 0, 0, 560, 0, 0, 561, 0, 0, 562, 0, 0, 563, 0, 0,
    564, 0, 565, 0, 0, 566, 0, 567, 0, 0, 568, 0, 569, 0, 0, 570, 0, 571, 0, 0, 572, 0, 0, 573, 0, 0, 574, 0, 575, 0, 0, 576,
    0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 0, 580, 0, 581, 0, 582, 0, 0, 0, 583, 0, 584, 0, 0, 0, 585, 0, 0, 0, 586, 0, 587,
    0, 588, 0, 0, 0, 589, 0, 590, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 593, 0, 594, 0, 595, 0, 596, 0, 597, 0, 0, 0, 0, 598,
    0, 0, 599, 0, 600, 0, 601, 0, 0, 0, 602, 0, 0, 603, 0, 604, 0, 0, 0, 605, 0, 606, 607, 0, 608, 0, 0, 0, 0, 609, 0, 610,
    0, 611, 0, 0, 0, 0, 612, 0, 613, 0, 614, 0, 615, 616, 0, 617, 0, 0, 0, 0, 618, 0, 619, 0, 620, 0, 621, 0, 0, 0, 622, 0,
    623, 0, 624, 0, 625, 0, 0, 0, 626, 0, 0, 627, 0, 628, 0, 629, 0, 0, 0, 0, 630, 0, 0, 631, 0, 632, 0, 0, 0, 0, 633, 0,
    634, 0, 635, 0, 636, 637, 0, 638, 0, 0, 0, 0, 639, 0, 640, 0, 641, 0, 642, 0, 643, 0, 0, 0, 644, 0, 0, 645, 0, 646, 0, 0,
    0, 647, 0, 648, 649, 0, 650, 0, 0, 0, 0, 651, 0, 652, 0, 653, 0, 0, 0, 0, 654, 0, 655, 0, 656, 0, 657, 0, 0, 0, 0, 658,
    0, 659, 0, 660, 0, 661, 0, 0, 0, 0, 662, 0, 663, 0, 664, 0, 665, 666, 0, 667, 0, 0, 0, 0, 668, 0, 669, 0, 670, 0, 671, 0,
    0, 672, 673, 0, 674, 0, 0, 0, 0, 675, 0, 676, 0, 677, 0, 678, 0, 0, 0, 679, 0, 0, 680, 0, 681, 0, 0, 0, 682, 0, 683, 684,
    0, 685, 0, 0, 0, 0, 686, 0, 687, 0, 688, 0, 0, 0, 0, 689, 0, 690, 0, 691, 0, 692, 0, 0, 0, 0, 693, 0, 694, 0, 695, 0,
    696, 0, 0, 0, 0, 697, 0, 698, 0, 699, 0, 700, 701, 0, 702, 0, 0, 0, 0, 703, 0, 704, 0, 0, 705, 0, 0, 706, 0, 707, 0, 708,
    0, 709, 0, 710, 0, 0, 0, 711, 0, 0, 712, 0, 713, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 716, 0, 717, 0, 0, 0, 0, 718, 0,
    719, 0, 720, 0, 721, 0, 722, 723, 0, 724, 0, 0, 0, 0, 725, 0, 726, 0, 727, 0, 728, 729, 0, 730, 0, 0, 0, 0, 731, 0, 732, 0,
    733, 0, 734, 0, 0, 0, 735, 0, 736, 0, 737, 0, 738, 0, 0, 0, 0, 739, 0, 740, 0, 741, 0, 742, 743, 0, 744, 0, 0, 0, 0, 745,
    0, 746, 0, 747, 0, 748, 0, 0, 0, 0, 749, 0, 750, 0, 751, 0, 752, 0, 753, 754, 0, 755, 0, 0, 0, 0, 756, 0, 757, 0, 758, 0,
    759, 0, 0, 0, 0, 760, 0, 761, 0, 762, 0, 763, 0, 0, 0, 0, 764, 0, 765, 0, 766, 0, 767, 768, 0, 769, 0, 0, 0, 0, 770, 0,
    771, 0, 772, 0, 773, 0, 0, 0, 0, 774, 0, 775, 0, 776, 0, 0, 777, 0, 778, 779, 0, 780, 0, 0, 0, 0, 781, 0, 782, 0, 783, 0,
    784, 0, 0, 0, 0, 785, 0, 786, 0, 787, 0, 788, 0, 0, 0, 0, 789, 0, 790, 0, 791, 0, 792, 793, 0, 794, 0, 0, 0, 0, 795, 796,
    0, 0, 797, 0, 0, 798, 0, 799, 0, 800, 0, 801, 0, 0, 802, 0, 803, 0, 0, 0, 804, 0, 805, 0, 0, 806, 0, 807, 0, 808, 0, 809,
    0, 0, 0, 810, 0, 811, 0, 0, 812, 0, 813, 0, 0, 814, 0, 815, 0, 0, 816, 0, 0, 817, 0, 818, 0, 819, 0, 0, 0, 820, 0, 821,
    0, 0, 822, 0, 0, 0, 823, 0, 824, 0, 0, 0, 825, 0, 826, 0, 827, 0, 0, 0, 828, 0, 0, 0, 829, 0, 830, 0, 0, 0, 831, 0,
    832, 0, 0, 0, 833, 0, 834, 0, 0, 835, 0, 836, 0, 837, 0, 0, 0, 0, 838, 0, 839, 0, 840, 0, 0, 841, 0, 0, 0, 0, 842, 843,
    0, 0, 844, 0, 845, 0, 846, 0, 0, 0, 847, 0, 0, 848, 0, 849, 0, 850, 0, 0, 0, 851, 0, 0, 852, 853, 0, 854, 855, 0, 856, 0,
    0, 0, 857, 0, 858, 0, 859, 0, 860, 0, 0, 0, 861, 0, 0, 862, 0, 0, 0, 0, 0, 863, 0, 864, 0, 0, 0, 865, 0, 0, 866, 0,
    867, 0, 868, 0, 869, 0, 0, 0, 870, 0, 0, 871, 0, 872, 0, 873, 0, 0, 0, 874, 0, 0, 875, 0, 876, 0, 0, 0, 0, 877, 878, 0,
    0, 879, 0, 880, 0, 0, 0, 881, 0, 0, 882, 883, 884, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 885, 0, 886, 0, 0, 0, 0, 0,
    0, 887, 0, 888, 0, 889, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 0, 891, 0, 0, 0, 892, 0, 0, 0, 0,
    0, 0, 893, 0, 0, 0, 894, 0, 0, 895, 0, 896, 0, 0, 0, 0, 897, 0, 898, 0, 0, 899, 0, 900, 0, 0, 901, 0, 902, 0, 903, 0,
    904, 0, 0, 905, 0, 0, 906, 0, 907, 0, 908, 0, 0, 909, 0, 910, 0, 911, 0, 912, 0, 913, 0, 0, 914, 0, 915, 0, 916, 0, 917, 0,
    918, 0, 919, 0, 920, 0, 0, 921, 0, 922, 0, 923, 0, 0, 924, 0, 925, 0, 0, 0, 926, 0, 927, 0, 928, 0, 0, 0, 0, 929, 0, 930,
    0, 0, 931, 0, 0, 0, 0, 0, 932, 0, 933, 0, 934, 0, 935, 0, 936, 0, 937, 0, 0, 0, 938, 0, 0, 939, 0, 940, 0, 0, 0, 0,
    0, 0, 941, 0, 942, 0, 0, 943, 0, 0, 0, 0, 944, 0, 945, 0, 0, 946, 0, 947, 0, 948, 0, 949, 0, 0, 0, 0, 950, 0, 951, 0,
    952, 0, 0, 953, 0, 954, 0, 955, 0, 0, 0, 0, 956, 0, 957, 0, 0, 0, 0, 958, 0, 959, 0, 0, 0, 0, 960, 0, 961, 0, 0, 0,
    0, 962, 0, 963, 0, 0, 0, 0, 964, 0, 965, 0, 0, 0, 0, 966, 0, 967, 0, 968, 0, 0, 0, 0, 969, 0, 970, 0, 0, 971, 0, 0,
    972, 0, 973, 0, 974, 0, 975, 0, 0, 976, 0, 977, 0, 978, 0, 0, 979, 0, 0, 0, 980, 0, 0, 981, 0, 982, 0, 0, 983, 0, 984, 0,
    985, 0, 0, 986, 0, 0, 987, 0, 0, 0, 988, 0, 989, 0, 990, 991, 0, 992, 0, 0, 993, 0, 994, 0, 995, 0, 996, 0, 0, 997, 0, 998,
    999, 1000, 0, 0, 1001, 0, 1002, 0, 0, 0, 0, 1003, 0, 1004, 0, 1005, 0, 1006, 1007, 0, 1008, 0, 1009, 0, 0, 0, 1010, 0, 1011, 0, 0, 0,
    1012, 0, 1013, 0, 0, 0, 0, 0, 0, 1014, 1015, 1016, 0, 0, 0, 0, 0, 0, 1017, 0, 0, 0, 0, 1018, 0, 0, 1019, 0, 1020, 0, 1021, 0,
    0, 1022, 0, 0, 1023, 0, 0, 0, 1024, 0, 1025, 0, 0, 1026, 0, 0, 1027, 1028, 0, 0, 1029, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1030, 0, 1031, 0, 1032, 0, 0, 1033, 0, 0, 0, 1034, 0, 1035, 0, 1036, 0, 0, 0, 1037, 1038, 0, 0, 0, 1039, 0, 1040, 0, 0, 1041,
    1042, 0, 0, 1043, 0, 1044, 0, 1045, 0, 0, 0, 0, 0, 0, 1046, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1047, 0, 0, 0, 0, 0,
    0, 0, 1048, 0, 1049, 0, 1050, 0, 0, 0, 0, 1051, 0, 0, 0, 0, 0, 0, 1052, 0, 0, 1053, 0, 1054, 0, 1055, 0, 1056, 0, 1057, 0, 1058,
    0, 1059, 0, 0, 1060, 0, 1061, 0, 0, 0, 0, 0, 0, 0, 1062, 0, 1063, 0, 0, 1064, 0, 1065, 0, 0, 0, 0, 1066, 0, 1067, 0, 1068, 0,
    1069, 0, 0, 1070, 1071, 0, 1072, 0, 1073, 0, 0, 0, 0, 0, 0, 0, 0, 1074, 0, 1075, 0, 0, 0, 0, 1076, 0, 1077, 0, 0, 0, 1078, 0,
    1079, 0, 0, 0, 1080, 0, 1081, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1082, 0, 0, 1083, 0, 1084, 0, 0, 0, 1085, 0, 1086, 0,
    0, 0, 1087, 0, 0, 0, 0, 0, 0, 0, 1088, 0, 1089, 0, 0, 0, 1090, 0, 0, 0, 0, 0, 0, 0, 1091, 0, 1092, 0, 0, 0, 1093, 0,
    0, 0, 0, 0, 0, 0, 1094, 0, 1095, 0, 0, 0, 1096, 0, 0, 0, 0, 0, 0, 0, 1097, 0, 1098, 0, 0, 0, 1099, 0, 0, 0, 0, 0,
    0, 0, 1100, 0, 1101, 0, 0, 0, 1102, 0, 0, 1103, 0, 1104, 0, 0, 1105, 0, 1106, 0, 0, 1107, 0, 0, 0, 0, 0, 0, 1108, 0, 0, 0,
    1109, 0, 1110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1111, 0, 0, 1112, 0, 0, 0, 0, 0, 1113, 0, 0, 0,
    0, 1114, 0, 1115, 0, 1116, 0, 0, 1117, 0, 1118, 0, 0, 1119, 0, 1120, 0, 0, 0, 1121, 0, 1122, 0, 0, 1123, 0, 1124, 0, 1125, 0, 0, 1126,
    0, 0, 1127, 0, 0, 1128, 0, 1129, 0, 1130, 0, 0, 1131, 0, 1132, 0, 1133, 0, 0, 1134, 1135, 0, 1136, 0, 0, 0, 1137, 0, 1138, 0, 1139, 0,
    1140, 0, 0, 0, 1141, 0, 1142, 0, 1143, 0, 0, 0, 0, 0, 0, 0, 1144, 0, 1145, 0, 0, 1146, 0, 1147, 0, 0, 1148, 0, 0, 1149, 0, 0,
    1150, 0, 1151, 0, 1152, 0, 1153, 0, 1154, 0, 0, 0, 1155, 0, 1156, 0, 1157, 0, 1158, 0, 1159, 0, 1160, 1161, 0, 1162, 0, 1163, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1164, 0, 0, 1165, 0, 0, 0, 0, 0, 1166, 0, 0, 0, 0, 1167, 1168, 0, 0, 1169,
};
void recomp_unit_0158_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A7C000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0158[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A7C000;
    case 2u: goto L_08A7C008;
    case 3u: goto L_08A7C028;
    case 4u: goto L_08A7C030;
    case 5u: goto L_08A7C03C;
    case 6u: goto L_08A7C05C;
    case 7u: goto L_08A7C064;
    case 8u: goto L_08A7C070;
    case 9u: goto L_08A7C090;
    case 10u: goto L_08A7C098;
    case 11u: goto L_08A7C0A4;
    case 12u: goto L_08A7C0C0;
    case 13u: goto L_08A7C0C4;
    case 14u: goto L_08A7C0D4;
    case 15u: goto L_08A7C0E8;
    case 16u: goto L_08A7C124;
    case 17u: goto L_08A7C12C;
    case 18u: goto L_08A7C13C;
    case 19u: goto L_08A7C148;
    case 20u: goto L_08A7C158;
    case 21u: goto L_08A7C174;
    case 22u: goto L_08A7C17C;
    case 23u: goto L_08A7C1B0;
    case 24u: goto L_08A7C1C8;
    case 25u: goto L_08A7C1D0;
    case 26u: goto L_08A7C1E0;
    case 27u: goto L_08A7C1F0;
    case 28u: goto L_08A7C1F8;
    case 29u: goto L_08A7C200;
    case 30u: goto L_08A7C234;
    case 31u: goto L_08A7C23C;
    case 32u: goto L_08A7C24C;
    case 33u: goto L_08A7C258;
    case 34u: goto L_08A7C260;
    case 35u: goto L_08A7C270;
    case 36u: goto L_08A7C27C;
    case 37u: goto L_08A7C290;
    case 38u: goto L_08A7C2A4;
    case 39u: goto L_08A7C2AC;
    case 40u: goto L_08A7C2C4;
    case 41u: goto L_08A7C2CC;
    case 42u: goto L_08A7C2D4;
    case 43u: goto L_08A7C2DC;
    case 44u: goto L_08A7C2F0;
    case 45u: goto L_08A7C30C;
    case 46u: goto L_08A7C318;
    case 47u: goto L_08A7C324;
    case 48u: goto L_08A7C330;
    case 49u: goto L_08A7C33C;
    case 50u: goto L_08A7C348;
    case 51u: goto L_08A7C350;
    case 52u: goto L_08A7C354;
    case 53u: goto L_08A7C368;
    case 54u: goto L_08A7C370;
    case 55u: goto L_08A7C38C;
    case 56u: goto L_08A7C398;
    case 57u: goto L_08A7C3A4;
    case 58u: goto L_08A7C3B0;
    case 59u: goto L_08A7C3B8;
    case 60u: goto L_08A7C3BC;
    case 61u: goto L_08A7C3D0;
    case 62u: goto L_08A7C3EC;
    case 63u: goto L_08A7C3F8;
    case 64u: goto L_08A7C404;
    case 65u: goto L_08A7C40C;
    case 66u: goto L_08A7C410;
    case 67u: goto L_08A7C424;
    case 68u: goto L_08A7C42C;
    case 69u: goto L_08A7C448;
    case 70u: goto L_08A7C45C;
    case 71u: goto L_08A7C468;
    case 72u: goto L_08A7C470;
    case 73u: goto L_08A7C474;
    case 74u: goto L_08A7C488;
    case 75u: goto L_08A7C4A4;
    case 76u: goto L_08A7C4C0;
    case 77u: goto L_08A7C4CC;
    case 78u: goto L_08A7C4D4;
    case 79u: goto L_08A7C4D8;
    case 80u: goto L_08A7C4EC;
    case 81u: goto L_08A7C504;
    case 82u: goto L_08A7C50C;
    case 83u: goto L_08A7C514;
    case 84u: goto L_08A7C51C;
    case 85u: goto L_08A7C524;
    case 86u: goto L_08A7C52C;
    case 87u: goto L_08A7C534;
    case 88u: goto L_08A7C53C;
    case 89u: goto L_08A7C544;
    case 90u: goto L_08A7C54C;
    case 91u: goto L_08A7C554;
    case 92u: goto L_08A7C55C;
    case 93u: goto L_08A7C564;
    case 94u: goto L_08A7C578;
    case 95u: goto L_08A7C590;
    case 96u: goto L_08A7C598;
    case 97u: goto L_08A7C5A0;
    case 98u: goto L_08A7C5A8;
    case 99u: goto L_08A7C5B0;
    case 100u: goto L_08A7C5C4;
    case 101u: goto L_08A7C5E8;
    case 102u: goto L_08A7C5F4;
    case 103u: goto L_08A7C630;
    case 104u: goto L_08A7C64C;
    case 105u: goto L_08A7C664;
    case 106u: goto L_08A7C678;
    case 107u: goto L_08A7C694;
    case 108u: goto L_08A7C6A8;
    case 109u: goto L_08A7C6BC;
    case 110u: goto L_08A7C6FC;
    case 111u: goto L_08A7C724;
    case 112u: goto L_08A7C738;
    case 113u: goto L_08A7C74C;
    case 114u: goto L_08A7C768;
    case 115u: goto L_08A7C770;
    case 116u: goto L_08A7C778;
    case 117u: goto L_08A7C784;
    case 118u: goto L_08A7C790;
    case 119u: goto L_08A7C79C;
    case 120u: goto L_08A7C7A8;
    case 121u: goto L_08A7C7B0;
    case 122u: goto L_08A7C7B4;
    case 123u: goto L_08A7C7C8;
    case 124u: goto L_08A7C7D0;
    case 125u: goto L_08A7C7E0;
    case 126u: goto L_08A7C7E8;
    case 127u: goto L_08A7C80C;
    case 128u: goto L_08A7C828;
    case 129u: goto L_08A7C830;
    case 130u: goto L_08A7C83C;
    case 131u: goto L_08A7C844;
    case 132u: goto L_08A7C850;
    case 133u: goto L_08A7C858;
    case 134u: goto L_08A7C860;
    case 135u: goto L_08A7C86C;
    case 136u: goto L_08A7C87C;
    case 137u: goto L_08A7C884;
    case 138u: goto L_08A7C898;
    case 139u: goto L_08A7C8A0;
    case 140u: goto L_08A7C8B4;
    case 141u: goto L_08A7C8BC;
    case 142u: goto L_08A7C8C4;
    case 143u: goto L_08A7C8D0;
    case 144u: goto L_08A7C8D8;
    case 145u: goto L_08A7C8E0;
    case 146u: goto L_08A7C8E4;
    case 147u: goto L_08A7C8F0;
    case 148u: goto L_08A7C8F8;
    case 149u: goto L_08A7C900;
    case 150u: goto L_08A7C908;
    case 151u: goto L_08A7C910;
    case 152u: goto L_08A7C91C;
    case 153u: goto L_08A7C9F8;
    case 154u: goto L_08A7CA04;
    case 155u: goto L_08A7CA0C;
    case 156u: goto L_08A7CA3C;
    case 157u: goto L_08A7CA6C;
    case 158u: goto L_08A7CA78;
    case 159u: goto L_08A7CA84;
    case 160u: goto L_08A7CAA0;
    case 161u: goto L_08A7CAB0;
    case 162u: goto L_08A7CAC0;
    case 163u: goto L_08A7CAD4;
    case 164u: goto L_08A7CAE4;
    case 165u: goto L_08A7CAF4;
    case 166u: goto L_08A7CAFC;
    case 167u: goto L_08A7CB04;
    case 168u: goto L_08A7CB0C;
    case 169u: goto L_08A7CB14;
    case 170u: goto L_08A7CB28;
    case 171u: goto L_08A7CB30;
    case 172u: goto L_08A7CB38;
    case 173u: goto L_08A7CB6C;
    case 174u: goto L_08A7CB74;
    case 175u: goto L_08A7CBA0;
    case 176u: goto L_08A7CBA8;
    case 177u: goto L_08A7CBBC;
    case 178u: goto L_08A7CBC0;
    case 179u: goto L_08A7CBC8;
    case 180u: goto L_08A7CBDC;
    case 181u: goto L_08A7CBEC;
    case 182u: goto L_08A7CBF4;
    case 183u: goto L_08A7CC08;
    case 184u: goto L_08A7CC14;
    case 185u: goto L_08A7CC24;
    case 186u: goto L_08A7CC2C;
    case 187u: goto L_08A7CC34;
    case 188u: goto L_08A7CC44;
    case 189u: goto L_08A7CC4C;
    case 190u: goto L_08A7CC60;
    case 191u: goto L_08A7CC68;
    case 192u: goto L_08A7CC78;
    case 193u: goto L_08A7CC80;
    case 194u: goto L_08A7CC94;
    case 195u: goto L_08A7CC9C;
    case 196u: goto L_08A7CCA4;
    case 197u: goto L_08A7CCDC;
    case 198u: goto L_08A7CCE4;
    case 199u: goto L_08A7CD1C;
    case 200u: goto L_08A7CD24;
    case 201u: goto L_08A7CD5C;
    case 202u: goto L_08A7CD64;
    case 203u: goto L_08A7CD78;
    case 204u: goto L_08A7CD80;
    case 205u: goto L_08A7CD94;
    case 206u: goto L_08A7CD9C;
    case 207u: goto L_08A7CDB0;
    case 208u: goto L_08A7CDB8;
    case 209u: goto L_08A7CDEC;
    case 210u: goto L_08A7CDF4;
    case 211u: goto L_08A7CE08;
    case 212u: goto L_08A7CE10;
    case 213u: goto L_08A7CE44;
    case 214u: goto L_08A7CE4C;
    case 215u: goto L_08A7CE64;
    case 216u: goto L_08A7CE6C;
    case 217u: goto L_08A7CEA0;
    case 218u: goto L_08A7CEA8;
    case 219u: goto L_08A7CEBC;
    case 220u: goto L_08A7CEC4;
    case 221u: goto L_08A7CED8;
    case 222u: goto L_08A7CEE0;
    case 223u: goto L_08A7CF14;
    case 224u: goto L_08A7CF1C;
    case 225u: goto L_08A7CF54;
    case 226u: goto L_08A7CF5C;
    case 227u: goto L_08A7CF94;
    case 228u: goto L_08A7CF9C;
    case 229u: goto L_08A7CFB0;
    case 230u: goto L_08A7CFB8;
    case 231u: goto L_08A7CFCC;
    case 232u: goto L_08A7CFD4;
    case 233u: goto L_08A7CFE8;
    case 234u: goto L_08A7CFF0;
    case 235u: goto L_08A7D014;
    case 236u: goto L_08A7D028;
    case 237u: goto L_08A7D030;
    case 238u: goto L_08A7D048;
    case 239u: goto L_08A7D050;
    case 240u: goto L_08A7D070;
    case 241u: goto L_08A7D080;
    case 242u: goto L_08A7D088;
    case 243u: goto L_08A7D090;
    case 244u: goto L_08A7D098;
    case 245u: goto L_08A7D0A0;
    case 246u: goto L_08A7D0A8;
    case 247u: goto L_08A7D0B0;
    case 248u: goto L_08A7D0C8;
    case 249u: goto L_08A7D0D0;
    case 250u: goto L_08A7D0D8;
    case 251u: goto L_08A7D0DC;
    case 252u: goto L_08A7D0F0;
    case 253u: goto L_08A7D130;
    case 254u: goto L_08A7D138;
    case 255u: goto L_08A7D13C;
    case 256u: goto L_08A7D144;
    case 257u: goto L_08A7D17C;
    case 258u: goto L_08A7D184;
    case 259u: goto L_08A7D19C;
    case 260u: goto L_08A7D1A8;
    case 261u: goto L_08A7D1B0;
    case 262u: goto L_08A7D1BC;
    case 263u: goto L_08A7D1C8;
    case 264u: goto L_08A7D1DC;
    case 265u: goto L_08A7D1E4;
    case 266u: goto L_08A7D1EC;
    case 267u: goto L_08A7D204;
    case 268u: goto L_08A7D20C;
    case 269u: goto L_08A7D224;
    case 270u: goto L_08A7D22C;
    case 271u: goto L_08A7D24C;
    case 272u: goto L_08A7D254;
    case 273u: goto L_08A7D274;
    case 274u: goto L_08A7D27C;
    case 275u: goto L_08A7D284;
    case 276u: goto L_08A7D28C;
    case 277u: goto L_08A7D2A4;
    case 278u: goto L_08A7D2AC;
    case 279u: goto L_08A7D2C4;
    case 280u: goto L_08A7D2CC;
    case 281u: goto L_08A7D2EC;
    case 282u: goto L_08A7D2F4;
    case 283u: goto L_08A7D318;
    case 284u: goto L_08A7D320;
    case 285u: goto L_08A7D328;
    case 286u: goto L_08A7D340;
    case 287u: goto L_08A7D348;
    case 288u: goto L_08A7D360;
    case 289u: goto L_08A7D368;
    case 290u: goto L_08A7D388;
    case 291u: goto L_08A7D390;
    case 292u: goto L_08A7D3B0;
    case 293u: goto L_08A7D3B8;
    case 294u: goto L_08A7D3C0;
    case 295u: goto L_08A7D3C8;
    case 296u: goto L_08A7D3E0;
    case 297u: goto L_08A7D3E8;
    case 298u: goto L_08A7D400;
    case 299u: goto L_08A7D408;
    case 300u: goto L_08A7D428;
    case 301u: goto L_08A7D430;
    case 302u: goto L_08A7D450;
    case 303u: goto L_08A7D458;
    case 304u: goto L_08A7D460;
    case 305u: goto L_08A7D468;
    case 306u: goto L_08A7D480;
    case 307u: goto L_08A7D488;
    case 308u: goto L_08A7D4A0;
    case 309u: goto L_08A7D4A8;
    case 310u: goto L_08A7D4C8;
    case 311u: goto L_08A7D4D0;
    case 312u: goto L_08A7D4F4;
    case 313u: goto L_08A7D4FC;
    case 314u: goto L_08A7D504;
    case 315u: goto L_08A7D51C;
    case 316u: goto L_08A7D524;
    case 317u: goto L_08A7D53C;
    case 318u: goto L_08A7D544;
    case 319u: goto L_08A7D564;
    case 320u: goto L_08A7D56C;
    case 321u: goto L_08A7D58C;
    case 322u: goto L_08A7D594;
    case 323u: goto L_08A7D5A8;
    case 324u: goto L_08A7D5B0;
    case 325u: goto L_08A7D5C4;
    case 326u: goto L_08A7D5D4;
    case 327u: goto L_08A7D5E8;
    case 328u: goto L_08A7D5F0;
    case 329u: goto L_08A7D5F8;
    case 330u: goto L_08A7D600;
    case 331u: goto L_08A7D608;
    case 332u: goto L_08A7D610;
    case 333u: goto L_08A7D618;
    case 334u: goto L_08A7D620;
    case 335u: goto L_08A7D62C;
    case 336u: goto L_08A7D634;
    case 337u: goto L_08A7D63C;
    case 338u: goto L_08A7D644;
    case 339u: goto L_08A7D658;
    case 340u: goto L_08A7D660;
    case 341u: goto L_08A7D668;
    case 342u: goto L_08A7D670;
    case 343u: goto L_08A7D67C;
    case 344u: goto L_08A7D684;
    case 345u: goto L_08A7D688;
    case 346u: goto L_08A7D690;
    case 347u: goto L_08A7D6A0;
    case 348u: goto L_08A7D6AC;
    case 349u: goto L_08A7D6B4;
    case 350u: goto L_08A7D6C4;
    case 351u: goto L_08A7D6C8;
    case 352u: goto L_08A7D6D4;
    case 353u: goto L_08A7D6D8;
    case 354u: goto L_08A7D6E0;
    case 355u: goto L_08A7D6F0;
    case 356u: goto L_08A7D700;
    case 357u: goto L_08A7D708;
    case 358u: goto L_08A7D718;
    case 359u: goto L_08A7D728;
    case 360u: goto L_08A7D744;
    case 361u: goto L_08A7D74C;
    case 362u: goto L_08A7D75C;
    case 363u: goto L_08A7D770;
    case 364u: goto L_08A7D788;
    case 365u: goto L_08A7D794;
    case 366u: goto L_08A7D79C;
    case 367u: goto L_08A7D7A8;
    case 368u: goto L_08A7D7AC;
    case 369u: goto L_08A7D7B8;
    case 370u: goto L_08A7D7C0;
    case 371u: goto L_08A7D7CC;
    case 372u: goto L_08A7D7E8;
    case 373u: goto L_08A7D7F4;
    case 374u: goto L_08A7D7FC;
    case 375u: goto L_08A7D830;
    case 376u: goto L_08A7D838;
    case 377u: goto L_08A7D84C;
    case 378u: goto L_08A7D854;
    case 379u: goto L_08A7D868;
    case 380u: goto L_08A7D870;
    case 381u: goto L_08A7D8A4;
    case 382u: goto L_08A7D8AC;
    case 383u: goto L_08A7D8D8;
    case 384u: goto L_08A7D8E0;
    case 385u: goto L_08A7D90C;
    case 386u: goto L_08A7D914;
    case 387u: goto L_08A7D940;
    case 388u: goto L_08A7D948;
    case 389u: goto L_08A7D974;
    case 390u: goto L_08A7D97C;
    case 391u: goto L_08A7D9A8;
    case 392u: goto L_08A7D9B0;
    case 393u: goto L_08A7D9C4;
    case 394u: goto L_08A7D9CC;
    case 395u: goto L_08A7D9D8;
    case 396u: goto L_08A7D9E0;
    case 397u: goto L_08A7D9F0;
    case 398u: goto L_08A7D9F8;
    case 399u: goto L_08A7DA08;
    case 400u: goto L_08A7DA0C;
    case 401u: goto L_08A7DA10;
    case 402u: goto L_08A7DA20;
    case 403u: goto L_08A7DA60;
    case 404u: goto L_08A7DA90;
    case 405u: goto L_08A7DA94;
    case 406u: goto L_08A7DA9C;
    case 407u: goto L_08A7DAB0;
    case 408u: goto L_08A7DAB8;
    case 409u: goto L_08A7DAC4;
    case 410u: goto L_08A7DACC;
    case 411u: goto L_08A7DADC;
    case 412u: goto L_08A7DAE8;
    case 413u: goto L_08A7DAF0;
    case 414u: goto L_08A7DB28;
    case 415u: goto L_08A7DB30;
    case 416u: goto L_08A7DB40;
    case 417u: goto L_08A7DB4C;
    case 418u: goto L_08A7DB54;
    case 419u: goto L_08A7DB8C;
    case 420u: goto L_08A7DB94;
    case 421u: goto L_08A7DBA4;
    case 422u: goto L_08A7DBB0;
    case 423u: goto L_08A7DBB8;
    case 424u: goto L_08A7DBF0;
    case 425u: goto L_08A7DBF8;
    case 426u: goto L_08A7DC18;
    case 427u: goto L_08A7DC20;
    case 428u: goto L_08A7DC40;
    case 429u: goto L_08A7DC48;
    case 430u: goto L_08A7DC68;
    case 431u: goto L_08A7DC70;
    case 432u: goto L_08A7DC84;
    case 433u: goto L_08A7DC8C;
    case 434u: goto L_08A7DCA0;
    case 435u: goto L_08A7DCA8;
    case 436u: goto L_08A7DCBC;
    case 437u: goto L_08A7DCC4;
    case 438u: goto L_08A7DCEC;
    case 439u: goto L_08A7DCF4;
    case 440u: goto L_08A7DD08;
    case 441u: goto L_08A7DD10;
    case 442u: goto L_08A7DD18;
    case 443u: goto L_08A7DD30;
    case 444u: goto L_08A7DD38;
    case 445u: goto L_08A7DD50;
    case 446u: goto L_08A7DD58;
    case 447u: goto L_08A7DD6C;
    case 448u: goto L_08A7DD74;
    case 449u: goto L_08A7DD7C;
    case 450u: goto L_08A7DD84;
    case 451u: goto L_08A7DD9C;
    case 452u: goto L_08A7DDA4;
    case 453u: goto L_08A7DDC8;
    case 454u: goto L_08A7DDD0;
    case 455u: goto L_08A7DDF4;
    case 456u: goto L_08A7DDFC;
    case 457u: goto L_08A7DE20;
    case 458u: goto L_08A7DE28;
    case 459u: goto L_08A7DE30;
    case 460u: goto L_08A7DE48;
    case 461u: goto L_08A7DE50;
    case 462u: goto L_08A7DE74;
    case 463u: goto L_08A7DE7C;
    case 464u: goto L_08A7DEA0;
    case 465u: goto L_08A7DEA8;
    case 466u: goto L_08A7DECC;
    case 467u: goto L_08A7DED0;
    case 468u: goto L_08A7DEDC;
    case 469u: goto L_08A7DEE4;
    case 470u: goto L_08A7DEF8;
    case 471u: goto L_08A7DF0C;
    case 472u: goto L_08A7DF14;
    case 473u: goto L_08A7DF28;
    case 474u: goto L_08A7DF30;
    case 475u: goto L_08A7DF44;
    case 476u: goto L_08A7DF54;
    case 477u: goto L_08A7DF70;
    case 478u: goto L_08A7DF78;
    case 479u: goto L_08A7DF88;
    case 480u: goto L_08A7DF94;
    case 481u: goto L_08A7DF9C;
    case 482u: goto L_08A7DFAC;
    case 483u: goto L_08A7DFB4;
    case 484u: goto L_08A7DFC4;
    case 485u: goto L_08A7DFDC;
    case 486u: goto L_08A7DFF0;
    case 487u: goto L_08A7E008;
    case 488u: goto L_08A7E01C;
    case 489u: goto L_08A7E024;
    case 490u: goto L_08A7E02C;
    case 491u: goto L_08A7E038;
    case 492u: goto L_08A7E040;
    case 493u: goto L_08A7E048;
    case 494u: goto L_08A7E050;
    case 495u: goto L_08A7E05C;
    case 496u: goto L_08A7E074;
    case 497u: goto L_08A7E088;
    case 498u: goto L_08A7E090;
    case 499u: goto L_08A7E098;
    case 500u: goto L_08A7E0A4;
    case 501u: goto L_08A7E0BC;
    case 502u: goto L_08A7E0D0;
    case 503u: goto L_08A7E0D4;
    case 504u: goto L_08A7E0E8;
    case 505u: goto L_08A7E0FC;
    case 506u: goto L_08A7E110;
    case 507u: goto L_08A7E118;
    case 508u: goto L_08A7E120;
    case 509u: goto L_08A7E128;
    case 510u: goto L_08A7E130;
    case 511u: goto L_08A7E144;
    case 512u: goto L_08A7E158;
    case 513u: goto L_08A7E16C;
    case 514u: goto L_08A7E174;
    case 515u: goto L_08A7E188;
    case 516u: goto L_08A7E190;
    case 517u: goto L_08A7E1A4;
    case 518u: goto L_08A7E1AC;
    case 519u: goto L_08A7E1C0;
    case 520u: goto L_08A7E1C8;
    case 521u: goto L_08A7E1DC;
    case 522u: goto L_08A7E1F0;
    case 523u: goto L_08A7E204;
    case 524u: goto L_08A7E20C;
    case 525u: goto L_08A7E214;
    case 526u: goto L_08A7E21C;
    case 527u: goto L_08A7E238;
    case 528u: goto L_08A7E24C;
    case 529u: goto L_08A7E260;
    case 530u: goto L_08A7E268;
    case 531u: goto L_08A7E27C;
    case 532u: goto L_08A7E290;
    case 533u: goto L_08A7E2A4;
    case 534u: goto L_08A7E2A8;
    case 535u: goto L_08A7E2BC;
    case 536u: goto L_08A7E2C4;
    case 537u: goto L_08A7E2CC;
    case 538u: goto L_08A7E2E4;
    case 539u: goto L_08A7E2F8;
    case 540u: goto L_08A7E300;
    case 541u: goto L_08A7E308;
    case 542u: goto L_08A7E320;
    case 543u: goto L_08A7E334;
    case 544u: goto L_08A7E34C;
    case 545u: goto L_08A7E360;
    case 546u: goto L_08A7E364;
    case 547u: goto L_08A7E370;
    case 548u: goto L_08A7E378;
    case 549u: goto L_08A7E380;
    case 550u: goto L_08A7E3B0;
    case 551u: goto L_08A7E3E8;
    case 552u: goto L_08A7E3F4;
    case 553u: goto L_08A7E400;
    case 554u: goto L_08A7E40C;
    case 555u: goto L_08A7E418;
    case 556u: goto L_08A7E424;
    case 557u: goto L_08A7E42C;
    case 558u: goto L_08A7E438;
    case 559u: goto L_08A7E444;
    case 560u: goto L_08A7E450;
    case 561u: goto L_08A7E45C;
    case 562u: goto L_08A7E468;
    case 563u: goto L_08A7E474;
    case 564u: goto L_08A7E480;
    case 565u: goto L_08A7E488;
    case 566u: goto L_08A7E494;
    case 567u: goto L_08A7E49C;
    case 568u: goto L_08A7E4A8;
    case 569u: goto L_08A7E4B0;
    case 570u: goto L_08A7E4BC;
    case 571u: goto L_08A7E4C4;
    case 572u: goto L_08A7E4D0;
    case 573u: goto L_08A7E4DC;
    case 574u: goto L_08A7E4E8;
    case 575u: goto L_08A7E4F0;
    case 576u: goto L_08A7E4FC;
    case 577u: goto L_08A7E504;
    case 578u: goto L_08A7E510;
    case 579u: goto L_08A7E51C;
    case 580u: goto L_08A7E52C;
    case 581u: goto L_08A7E534;
    case 582u: goto L_08A7E53C;
    case 583u: goto L_08A7E54C;
    case 584u: goto L_08A7E554;
    case 585u: goto L_08A7E564;
    case 586u: goto L_08A7E574;
    case 587u: goto L_08A7E57C;
    case 588u: goto L_08A7E584;
    case 589u: goto L_08A7E594;
    case 590u: goto L_08A7E59C;
    case 591u: goto L_08A7E5AC;
    case 592u: goto L_08A7E5BC;
    case 593u: goto L_08A7E5C8;
    case 594u: goto L_08A7E5D0;
    case 595u: goto L_08A7E5D8;
    case 596u: goto L_08A7E5E0;
    case 597u: goto L_08A7E5E8;
    case 598u: goto L_08A7E5FC;
    case 599u: goto L_08A7E608;
    case 600u: goto L_08A7E610;
    case 601u: goto L_08A7E618;
    case 602u: goto L_08A7E628;
    case 603u: goto L_08A7E634;
    case 604u: goto L_08A7E63C;
    case 605u: goto L_08A7E64C;
    case 606u: goto L_08A7E654;
    case 607u: goto L_08A7E658;
    case 608u: goto L_08A7E660;
    case 609u: goto L_08A7E674;
    case 610u: goto L_08A7E67C;
    case 611u: goto L_08A7E684;
    case 612u: goto L_08A7E698;
    case 613u: goto L_08A7E6A0;
    case 614u: goto L_08A7E6A8;
    case 615u: goto L_08A7E6B0;
    case 616u: goto L_08A7E6B4;
    case 617u: goto L_08A7E6BC;
    case 618u: goto L_08A7E6D0;
    case 619u: goto L_08A7E6D8;
    case 620u: goto L_08A7E6E0;
    case 621u: goto L_08A7E6E8;
    case 622u: goto L_08A7E6F8;
    case 623u: goto L_08A7E700;
    case 624u: goto L_08A7E708;
    case 625u: goto L_08A7E710;
    case 626u: goto L_08A7E720;
    case 627u: goto L_08A7E72C;
    case 628u: goto L_08A7E734;
    case 629u: goto L_08A7E73C;
    case 630u: goto L_08A7E750;
    case 631u: goto L_08A7E75C;
    case 632u: goto L_08A7E764;
    case 633u: goto L_08A7E778;
    case 634u: goto L_08A7E780;
    case 635u: goto L_08A7E788;
    case 636u: goto L_08A7E790;
    case 637u: goto L_08A7E794;
    case 638u: goto L_08A7E79C;
    case 639u: goto L_08A7E7B0;
    case 640u: goto L_08A7E7B8;
    case 641u: goto L_08A7E7C0;
    case 642u: goto L_08A7E7C8;
    case 643u: goto L_08A7E7D0;
    case 644u: goto L_08A7E7E0;
    case 645u: goto L_08A7E7EC;
    case 646u: goto L_08A7E7F4;
    case 647u: goto L_08A7E804;
    case 648u: goto L_08A7E80C;
    case 649u: goto L_08A7E810;
    case 650u: goto L_08A7E818;
    case 651u: goto L_08A7E82C;
    case 652u: goto L_08A7E834;
    case 653u: goto L_08A7E83C;
    case 654u: goto L_08A7E850;
    case 655u: goto L_08A7E858;
    case 656u: goto L_08A7E860;
    case 657u: goto L_08A7E868;
    case 658u: goto L_08A7E87C;
    case 659u: goto L_08A7E884;
    case 660u: goto L_08A7E88C;
    case 661u: goto L_08A7E894;
    case 662u: goto L_08A7E8A8;
    case 663u: goto L_08A7E8B0;
    case 664u: goto L_08A7E8B8;
    case 665u: goto L_08A7E8C0;
    case 666u: goto L_08A7E8C4;
    case 667u: goto L_08A7E8CC;
    case 668u: goto L_08A7E8E0;
    case 669u: goto L_08A7E8E8;
    case 670u: goto L_08A7E8F0;
    case 671u: goto L_08A7E8F8;
    case 672u: goto L_08A7E904;
    case 673u: goto L_08A7E908;
    case 674u: goto L_08A7E910;
    case 675u: goto L_08A7E924;
    case 676u: goto L_08A7E92C;
    case 677u: goto L_08A7E934;
    case 678u: goto L_08A7E93C;
    case 679u: goto L_08A7E94C;
    case 680u: goto L_08A7E958;
    case 681u: goto L_08A7E960;
    case 682u: goto L_08A7E970;
    case 683u: goto L_08A7E978;
    case 684u: goto L_08A7E97C;
    case 685u: goto L_08A7E984;
    case 686u: goto L_08A7E998;
    case 687u: goto L_08A7E9A0;
    case 688u: goto L_08A7E9A8;
    case 689u: goto L_08A7E9BC;
    case 690u: goto L_08A7E9C4;
    case 691u: goto L_08A7E9CC;
    case 692u: goto L_08A7E9D4;
    case 693u: goto L_08A7E9E8;
    case 694u: goto L_08A7E9F0;
    case 695u: goto L_08A7E9F8;
    case 696u: goto L_08A7EA00;
    case 697u: goto L_08A7EA14;
    case 698u: goto L_08A7EA1C;
    case 699u: goto L_08A7EA24;
    case 700u: goto L_08A7EA2C;
    case 701u: goto L_08A7EA30;
    case 702u: goto L_08A7EA38;
    case 703u: goto L_08A7EA4C;
    case 704u: goto L_08A7EA54;
    case 705u: goto L_08A7EA60;
    case 706u: goto L_08A7EA6C;
    case 707u: goto L_08A7EA74;
    case 708u: goto L_08A7EA7C;
    case 709u: goto L_08A7EA84;
    case 710u: goto L_08A7EA8C;
    case 711u: goto L_08A7EA9C;
    case 712u: goto L_08A7EAA8;
    case 713u: goto L_08A7EAB0;
    case 714u: goto L_08A7EABC;
    case 715u: goto L_08A7EAD0;
    case 716u: goto L_08A7EADC;
    case 717u: goto L_08A7EAE4;
    case 718u: goto L_08A7EAF8;
    case 719u: goto L_08A7EB00;
    case 720u: goto L_08A7EB08;
    case 721u: goto L_08A7EB10;
    case 722u: goto L_08A7EB18;
    case 723u: goto L_08A7EB1C;
    case 724u: goto L_08A7EB24;
    case 725u: goto L_08A7EB38;
    case 726u: goto L_08A7EB40;
    case 727u: goto L_08A7EB48;
    case 728u: goto L_08A7EB50;
    case 729u: goto L_08A7EB54;
    case 730u: goto L_08A7EB5C;
    case 731u: goto L_08A7EB70;
    case 732u: goto L_08A7EB78;
    case 733u: goto L_08A7EB80;
    case 734u: goto L_08A7EB88;
    case 735u: goto L_08A7EB98;
    case 736u: goto L_08A7EBA0;
    case 737u: goto L_08A7EBA8;
    case 738u: goto L_08A7EBB0;
    case 739u: goto L_08A7EBC4;
    case 740u: goto L_08A7EBCC;
    case 741u: goto L_08A7EBD4;
    case 742u: goto L_08A7EBDC;
    case 743u: goto L_08A7EBE0;
    case 744u: goto L_08A7EBE8;
    case 745u: goto L_08A7EBFC;
    case 746u: goto L_08A7EC04;
    case 747u: goto L_08A7EC0C;
    case 748u: goto L_08A7EC14;
    case 749u: goto L_08A7EC28;
    case 750u: goto L_08A7EC30;
    case 751u: goto L_08A7EC38;
    case 752u: goto L_08A7EC40;
    case 753u: goto L_08A7EC48;
    case 754u: goto L_08A7EC4C;
    case 755u: goto L_08A7EC54;
    case 756u: goto L_08A7EC68;
    case 757u: goto L_08A7EC70;
    case 758u: goto L_08A7EC78;
    case 759u: goto L_08A7EC80;
    case 760u: goto L_08A7EC94;
    case 761u: goto L_08A7EC9C;
    case 762u: goto L_08A7ECA4;
    case 763u: goto L_08A7ECAC;
    case 764u: goto L_08A7ECC0;
    case 765u: goto L_08A7ECC8;
    case 766u: goto L_08A7ECD0;
    case 767u: goto L_08A7ECD8;
    case 768u: goto L_08A7ECDC;
    case 769u: goto L_08A7ECE4;
    case 770u: goto L_08A7ECF8;
    case 771u: goto L_08A7ED00;
    case 772u: goto L_08A7ED08;
    case 773u: goto L_08A7ED10;
    case 774u: goto L_08A7ED24;
    case 775u: goto L_08A7ED2C;
    case 776u: goto L_08A7ED34;
    case 777u: goto L_08A7ED40;
    case 778u: goto L_08A7ED48;
    case 779u: goto L_08A7ED4C;
    case 780u: goto L_08A7ED54;
    case 781u: goto L_08A7ED68;
    case 782u: goto L_08A7ED70;
    case 783u: goto L_08A7ED78;
    case 784u: goto L_08A7ED80;
    case 785u: goto L_08A7ED94;
    case 786u: goto L_08A7ED9C;
    case 787u: goto L_08A7EDA4;
    case 788u: goto L_08A7EDAC;
    case 789u: goto L_08A7EDC0;
    case 790u: goto L_08A7EDC8;
    case 791u: goto L_08A7EDD0;
    case 792u: goto L_08A7EDD8;
    case 793u: goto L_08A7EDDC;
    case 794u: goto L_08A7EDE4;
    case 795u: goto L_08A7EDF8;
    case 796u: goto L_08A7EDFC;
    case 797u: goto L_08A7EE08;
    case 798u: goto L_08A7EE14;
    case 799u: goto L_08A7EE1C;
    case 800u: goto L_08A7EE24;
    case 801u: goto L_08A7EE2C;
    case 802u: goto L_08A7EE38;
    case 803u: goto L_08A7EE40;
    case 804u: goto L_08A7EE50;
    case 805u: goto L_08A7EE58;
    case 806u: goto L_08A7EE64;
    case 807u: goto L_08A7EE6C;
    case 808u: goto L_08A7EE74;
    case 809u: goto L_08A7EE7C;
    case 810u: goto L_08A7EE8C;
    case 811u: goto L_08A7EE94;
    case 812u: goto L_08A7EEA0;
    case 813u: goto L_08A7EEA8;
    case 814u: goto L_08A7EEB4;
    case 815u: goto L_08A7EEBC;
    case 816u: goto L_08A7EEC8;
    case 817u: goto L_08A7EED4;
    case 818u: goto L_08A7EEDC;
    case 819u: goto L_08A7EEE4;
    case 820u: goto L_08A7EEF4;
    case 821u: goto L_08A7EEFC;
    case 822u: goto L_08A7EF08;
    case 823u: goto L_08A7EF18;
    case 824u: goto L_08A7EF20;
    case 825u: goto L_08A7EF30;
    case 826u: goto L_08A7EF38;
    case 827u: goto L_08A7EF40;
    case 828u: goto L_08A7EF50;
    case 829u: goto L_08A7EF60;
    case 830u: goto L_08A7EF68;
    case 831u: goto L_08A7EF78;
    case 832u: goto L_08A7EF80;
    case 833u: goto L_08A7EF90;
    case 834u: goto L_08A7EF98;
    case 835u: goto L_08A7EFA4;
    case 836u: goto L_08A7EFAC;
    case 837u: goto L_08A7EFB4;
    case 838u: goto L_08A7EFC8;
    case 839u: goto L_08A7EFD0;
    case 840u: goto L_08A7EFD8;
    case 841u: goto L_08A7EFE4;
    case 842u: goto L_08A7EFF8;
    case 843u: goto L_08A7EFFC;
    case 844u: goto L_08A7F008;
    case 845u: goto L_08A7F010;
    case 846u: goto L_08A7F018;
    case 847u: goto L_08A7F028;
    case 848u: goto L_08A7F034;
    case 849u: goto L_08A7F03C;
    case 850u: goto L_08A7F044;
    case 851u: goto L_08A7F054;
    case 852u: goto L_08A7F060;
    case 853u: goto L_08A7F064;
    case 854u: goto L_08A7F06C;
    case 855u: goto L_08A7F070;
    case 856u: goto L_08A7F078;
    case 857u: goto L_08A7F088;
    case 858u: goto L_08A7F090;
    case 859u: goto L_08A7F098;
    case 860u: goto L_08A7F0A0;
    case 861u: goto L_08A7F0B0;
    case 862u: goto L_08A7F0BC;
    case 863u: goto L_08A7F0D4;
    case 864u: goto L_08A7F0DC;
    case 865u: goto L_08A7F0EC;
    case 866u: goto L_08A7F0F8;
    case 867u: goto L_08A7F100;
    case 868u: goto L_08A7F108;
    case 869u: goto L_08A7F110;
    case 870u: goto L_08A7F120;
    case 871u: goto L_08A7F12C;
    case 872u: goto L_08A7F134;
    case 873u: goto L_08A7F13C;
    case 874u: goto L_08A7F14C;
    case 875u: goto L_08A7F158;
    case 876u: goto L_08A7F160;
    case 877u: goto L_08A7F174;
    case 878u: goto L_08A7F178;
    case 879u: goto L_08A7F184;
    case 880u: goto L_08A7F18C;
    case 881u: goto L_08A7F19C;
    case 882u: goto L_08A7F1A8;
    case 883u: goto L_08A7F1AC;
    case 884u: goto L_08A7F1B0;
    case 885u: goto L_08A7F1E0;
    case 886u: goto L_08A7F1E8;
    case 887u: goto L_08A7F204;
    case 888u: goto L_08A7F20C;
    case 889u: goto L_08A7F214;
    case 890u: goto L_08A7F248;
    case 891u: goto L_08A7F25C;
    case 892u: goto L_08A7F26C;
    case 893u: goto L_08A7F288;
    case 894u: goto L_08A7F298;
    case 895u: goto L_08A7F2A4;
    case 896u: goto L_08A7F2AC;
    case 897u: goto L_08A7F2C0;
    case 898u: goto L_08A7F2C8;
    case 899u: goto L_08A7F2D4;
    case 900u: goto L_08A7F2DC;
    case 901u: goto L_08A7F2E8;
    case 902u: goto L_08A7F2F0;
    case 903u: goto L_08A7F2F8;
    case 904u: goto L_08A7F300;
    case 905u: goto L_08A7F30C;
    case 906u: goto L_08A7F318;
    case 907u: goto L_08A7F320;
    case 908u: goto L_08A7F328;
    case 909u: goto L_08A7F334;
    case 910u: goto L_08A7F33C;
    case 911u: goto L_08A7F344;
    case 912u: goto L_08A7F34C;
    case 913u: goto L_08A7F354;
    case 914u: goto L_08A7F360;
    case 915u: goto L_08A7F368;
    case 916u: goto L_08A7F370;
    case 917u: goto L_08A7F378;
    case 918u: goto L_08A7F380;
    case 919u: goto L_08A7F388;
    case 920u: goto L_08A7F390;
    case 921u: goto L_08A7F39C;
    case 922u: goto L_08A7F3A4;
    case 923u: goto L_08A7F3AC;
    case 924u: goto L_08A7F3B8;
    case 925u: goto L_08A7F3C0;
    case 926u: goto L_08A7F3D0;
    case 927u: goto L_08A7F3D8;
    case 928u: goto L_08A7F3E0;
    case 929u: goto L_08A7F3F4;
    case 930u: goto L_08A7F3FC;
    case 931u: goto L_08A7F408;
    case 932u: goto L_08A7F420;
    case 933u: goto L_08A7F428;
    case 934u: goto L_08A7F430;
    case 935u: goto L_08A7F438;
    case 936u: goto L_08A7F440;
    case 937u: goto L_08A7F448;
    case 938u: goto L_08A7F458;
    case 939u: goto L_08A7F464;
    case 940u: goto L_08A7F46C;
    case 941u: goto L_08A7F488;
    case 942u: goto L_08A7F490;
    case 943u: goto L_08A7F49C;
    case 944u: goto L_08A7F4B0;
    case 945u: goto L_08A7F4B8;
    case 946u: goto L_08A7F4C4;
    case 947u: goto L_08A7F4CC;
    case 948u: goto L_08A7F4D4;
    case 949u: goto L_08A7F4DC;
    case 950u: goto L_08A7F4F0;
    case 951u: goto L_08A7F4F8;
    case 952u: goto L_08A7F500;
    case 953u: goto L_08A7F50C;
    case 954u: goto L_08A7F514;
    case 955u: goto L_08A7F51C;
    case 956u: goto L_08A7F530;
    case 957u: goto L_08A7F538;
    case 958u: goto L_08A7F54C;
    case 959u: goto L_08A7F554;
    case 960u: goto L_08A7F568;
    case 961u: goto L_08A7F570;
    case 962u: goto L_08A7F584;
    case 963u: goto L_08A7F58C;
    case 964u: goto L_08A7F5A0;
    case 965u: goto L_08A7F5A8;
    case 966u: goto L_08A7F5BC;
    case 967u: goto L_08A7F5C4;
    case 968u: goto L_08A7F5CC;
    case 969u: goto L_08A7F5E0;
    case 970u: goto L_08A7F5E8;
    case 971u: goto L_08A7F5F4;
    case 972u: goto L_08A7F600;
    case 973u: goto L_08A7F608;
    case 974u: goto L_08A7F610;
    case 975u: goto L_08A7F618;
    case 976u: goto L_08A7F624;
    case 977u: goto L_08A7F62C;
    case 978u: goto L_08A7F634;
    case 979u: goto L_08A7F640;
    case 980u: goto L_08A7F650;
    case 981u: goto L_08A7F65C;
    case 982u: goto L_08A7F664;
    case 983u: goto L_08A7F670;
    case 984u: goto L_08A7F678;
    case 985u: goto L_08A7F680;
    case 986u: goto L_08A7F68C;
    case 987u: goto L_08A7F698;
    case 988u: goto L_08A7F6A8;
    case 989u: goto L_08A7F6B0;
    case 990u: goto L_08A7F6B8;
    case 991u: goto L_08A7F6BC;
    case 992u: goto L_08A7F6C4;
    case 993u: goto L_08A7F6D0;
    case 994u: goto L_08A7F6D8;
    case 995u: goto L_08A7F6E0;
    case 996u: goto L_08A7F6E8;
    case 997u: goto L_08A7F6F4;
    case 998u: goto L_08A7F6FC;
    case 999u: goto L_08A7F700;
    case 1000u: goto L_08A7F704;
    case 1001u: goto L_08A7F710;
    case 1002u: goto L_08A7F718;
    case 1003u: goto L_08A7F72C;
    case 1004u: goto L_08A7F734;
    case 1005u: goto L_08A7F73C;
    case 1006u: goto L_08A7F744;
    case 1007u: goto L_08A7F748;
    case 1008u: goto L_08A7F750;
    case 1009u: goto L_08A7F758;
    case 1010u: goto L_08A7F768;
    case 1011u: goto L_08A7F770;
    case 1012u: goto L_08A7F780;
    case 1013u: goto L_08A7F788;
    case 1014u: goto L_08A7F7A4;
    case 1015u: goto L_08A7F7A8;
    case 1016u: goto L_08A7F7AC;
    case 1017u: goto L_08A7F7C8;
    case 1018u: goto L_08A7F7DC;
    case 1019u: goto L_08A7F7E8;
    case 1020u: goto L_08A7F7F0;
    case 1021u: goto L_08A7F7F8;
    case 1022u: goto L_08A7F804;
    case 1023u: goto L_08A7F810;
    case 1024u: goto L_08A7F820;
    case 1025u: goto L_08A7F828;
    case 1026u: goto L_08A7F834;
    case 1027u: goto L_08A7F840;
    case 1028u: goto L_08A7F844;
    case 1029u: goto L_08A7F850;
    case 1030u: goto L_08A7F888;
    case 1031u: goto L_08A7F890;
    case 1032u: goto L_08A7F898;
    case 1033u: goto L_08A7F8A4;
    case 1034u: goto L_08A7F8B4;
    case 1035u: goto L_08A7F8BC;
    case 1036u: goto L_08A7F8C4;
    case 1037u: goto L_08A7F8D4;
    case 1038u: goto L_08A7F8D8;
    case 1039u: goto L_08A7F8E8;
    case 1040u: goto L_08A7F8F0;
    case 1041u: goto L_08A7F8FC;
    case 1042u: goto L_08A7F900;
    case 1043u: goto L_08A7F90C;
    case 1044u: goto L_08A7F914;
    case 1045u: goto L_08A7F91C;
    case 1046u: goto L_08A7F938;
    case 1047u: goto L_08A7F968;
    case 1048u: goto L_08A7F988;
    case 1049u: goto L_08A7F990;
    case 1050u: goto L_08A7F998;
    case 1051u: goto L_08A7F9AC;
    case 1052u: goto L_08A7F9C8;
    case 1053u: goto L_08A7F9D4;
    case 1054u: goto L_08A7F9DC;
    case 1055u: goto L_08A7F9E4;
    case 1056u: goto L_08A7F9EC;
    case 1057u: goto L_08A7F9F4;
    case 1058u: goto L_08A7F9FC;
    case 1059u: goto L_08A7FA04;
    case 1060u: goto L_08A7FA10;
    case 1061u: goto L_08A7FA18;
    case 1062u: goto L_08A7FA38;
    case 1063u: goto L_08A7FA40;
    case 1064u: goto L_08A7FA4C;
    case 1065u: goto L_08A7FA54;
    case 1066u: goto L_08A7FA68;
    case 1067u: goto L_08A7FA70;
    case 1068u: goto L_08A7FA78;
    case 1069u: goto L_08A7FA80;
    case 1070u: goto L_08A7FA8C;
    case 1071u: goto L_08A7FA90;
    case 1072u: goto L_08A7FA98;
    case 1073u: goto L_08A7FAA0;
    case 1074u: goto L_08A7FAC4;
    case 1075u: goto L_08A7FACC;
    case 1076u: goto L_08A7FAE0;
    case 1077u: goto L_08A7FAE8;
    case 1078u: goto L_08A7FAF8;
    case 1079u: goto L_08A7FB00;
    case 1080u: goto L_08A7FB10;
    case 1081u: goto L_08A7FB18;
    case 1082u: goto L_08A7FB4C;
    case 1083u: goto L_08A7FB58;
    case 1084u: goto L_08A7FB60;
    case 1085u: goto L_08A7FB70;
    case 1086u: goto L_08A7FB78;
    case 1087u: goto L_08A7FB88;
    case 1088u: goto L_08A7FBA8;
    case 1089u: goto L_08A7FBB0;
    case 1090u: goto L_08A7FBC0;
    case 1091u: goto L_08A7FBE0;
    case 1092u: goto L_08A7FBE8;
    case 1093u: goto L_08A7FBF8;
    case 1094u: goto L_08A7FC18;
    case 1095u: goto L_08A7FC20;
    case 1096u: goto L_08A7FC30;
    case 1097u: goto L_08A7FC50;
    case 1098u: goto L_08A7FC58;
    case 1099u: goto L_08A7FC68;
    case 1100u: goto L_08A7FC88;
    case 1101u: goto L_08A7FC90;
    case 1102u: goto L_08A7FCA0;
    case 1103u: goto L_08A7FCAC;
    case 1104u: goto L_08A7FCB4;
    case 1105u: goto L_08A7FCC0;
    case 1106u: goto L_08A7FCC8;
    case 1107u: goto L_08A7FCD4;
    case 1108u: goto L_08A7FCF0;
    case 1109u: goto L_08A7FD00;
    case 1110u: goto L_08A7FD08;
    case 1111u: goto L_08A7FD4C;
    case 1112u: goto L_08A7FD58;
    case 1113u: goto L_08A7FD70;
    case 1114u: goto L_08A7FD84;
    case 1115u: goto L_08A7FD8C;
    case 1116u: goto L_08A7FD94;
    case 1117u: goto L_08A7FDA0;
    case 1118u: goto L_08A7FDA8;
    case 1119u: goto L_08A7FDB4;
    case 1120u: goto L_08A7FDBC;
    case 1121u: goto L_08A7FDCC;
    case 1122u: goto L_08A7FDD4;
    case 1123u: goto L_08A7FDE0;
    case 1124u: goto L_08A7FDE8;
    case 1125u: goto L_08A7FDF0;
    case 1126u: goto L_08A7FDFC;
    case 1127u: goto L_08A7FE08;
    case 1128u: goto L_08A7FE14;
    case 1129u: goto L_08A7FE1C;
    case 1130u: goto L_08A7FE24;
    case 1131u: goto L_08A7FE30;
    case 1132u: goto L_08A7FE38;
    case 1133u: goto L_08A7FE40;
    case 1134u: goto L_08A7FE4C;
    case 1135u: goto L_08A7FE50;
    case 1136u: goto L_08A7FE58;
    case 1137u: goto L_08A7FE68;
    case 1138u: goto L_08A7FE70;
    case 1139u: goto L_08A7FE78;
    case 1140u: goto L_08A7FE80;
    case 1141u: goto L_08A7FE90;
    case 1142u: goto L_08A7FE98;
    case 1143u: goto L_08A7FEA0;
    case 1144u: goto L_08A7FEC0;
    case 1145u: goto L_08A7FEC8;
    case 1146u: goto L_08A7FED4;
    case 1147u: goto L_08A7FEDC;
    case 1148u: goto L_08A7FEE8;
    case 1149u: goto L_08A7FEF4;
    case 1150u: goto L_08A7FF00;
    case 1151u: goto L_08A7FF08;
    case 1152u: goto L_08A7FF10;
    case 1153u: goto L_08A7FF18;
    case 1154u: goto L_08A7FF20;
    case 1155u: goto L_08A7FF30;
    case 1156u: goto L_08A7FF38;
    case 1157u: goto L_08A7FF40;
    case 1158u: goto L_08A7FF48;
    case 1159u: goto L_08A7FF50;
    case 1160u: goto L_08A7FF58;
    case 1161u: goto L_08A7FF5C;
    case 1162u: goto L_08A7FF64;
    case 1163u: goto L_08A7FF6C;
    case 1164u: goto L_08A7FFB0;
    case 1165u: goto L_08A7FFBC;
    case 1166u: goto L_08A7FFD4;
    case 1167u: goto L_08A7FFE8;
    case 1168u: goto L_08A7FFEC;
    case 1169u: goto L_08A7FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A7C000:
    ctx.set_gpr(31, 0x08A7C008u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 484u, 0x08861D48u>(ctx, &aot_mem) && ctx.pc == 0x08A7C008u) goto L_08A7C008;
    return;
L_08A7C008:
    ctx.set_gpr(3, 2182u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-22964));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08A7C0C0;
      }
      goto L_08A7C028;
    }
L_08A7C028:
    ctx.set_gpr(31, 0x08A7C030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A7C030u) goto L_08A7C030;
    return;
L_08A7C030:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7C03Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 484u, 0x08861D48u>(ctx, &aot_mem) && ctx.pc == 0x08A7C03Cu) goto L_08A7C03C;
    return;
L_08A7C03C:
    ctx.set_gpr(3, 2182u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-22964));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08A7C0C0;
      }
      goto L_08A7C05C;
    }
L_08A7C05C:
    ctx.set_gpr(31, 0x08A7C064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A7C064u) goto L_08A7C064;
    return;
L_08A7C064:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7C070u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 484u, 0x08861D48u>(ctx, &aot_mem) && ctx.pc == 0x08A7C070u) goto L_08A7C070;
    return;
L_08A7C070:
    ctx.set_gpr(3, 2182u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-22964));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08A7C0C0;
      }
      goto L_08A7C090;
    }
L_08A7C090:
    ctx.set_gpr(31, 0x08A7C098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A7C098u) goto L_08A7C098;
    return;
L_08A7C098:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7C0A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 484u, 0x08861D48u>(ctx, &aot_mem) && ctx.pc == 0x08A7C0A4u) goto L_08A7C0A4;
    return;
L_08A7C0A4:
    ctx.set_gpr(3, 2182u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-22964));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_08A7C0C0;
L_08A7C0C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A7C0C4;
L_08A7C0C4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C0D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A7C0E8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08A7C0E8u) goto L_08A7C0E8;
    return;
L_08A7C0E8:
    ctx.set_gpr(2, 16985u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 47186u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16353u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 57826u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17402u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A7C124u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 427u, 0x08849A60u>(ctx, &aot_mem) && ctx.pc == 0x08A7C124u) goto L_08A7C124;
    return;
L_08A7C124:
    ctx.set_gpr(31, 0x08A7C12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7C12Cu) goto L_08A7C12C;
    return;
L_08A7C12C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A7C13Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 870u, 0x08843A60u>(ctx, &aot_mem) && ctx.pc == 0x08A7C13Cu) goto L_08A7C13C;
    return;
L_08A7C13C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A7C148u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 521u, 0x08851B24u>(ctx, &aot_mem) && ctx.pc == 0x08A7C148u) goto L_08A7C148;
    return;
L_08A7C148:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C158:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08A7C1F8;
      }
      goto L_08A7C174;
    }
L_08A7C174:
    ctx.set_gpr(31, 0x08A7C17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7C17Cu) goto L_08A7C17C;
    return;
L_08A7C17C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17056u << 16u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(200));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(150));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08A7C1B0u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08A7C1B0u) goto L_08A7C1B0;
    return;
L_08A7C1B0:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32724)));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A7C1C8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20248));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7C1C8u) goto L_08A7C1C8;
    return;
L_08A7C1C8:
    ctx.set_gpr(31, 0x08A7C1D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7C1D0u) goto L_08A7C1D0;
    return;
L_08A7C1D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7C1E0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7C1E0u) goto L_08A7C1E0;
    return;
L_08A7C1E0:
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7C1F0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20248));
    goto L_08A7C2A4;
L_08A7C1F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7C258;
      }
      goto L_08A7C1F8;
    }
L_08A7C1F8:
    ctx.set_gpr(31, 0x08A7C200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7C200u) goto L_08A7C200;
    return;
L_08A7C200:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16988u << 16u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(200));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(190));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08A7C234u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08A7C234u) goto L_08A7C234;
    return;
L_08A7C234:
    ctx.set_gpr(31, 0x08A7C23Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7C23Cu) goto L_08A7C23C;
    return;
L_08A7C23C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7C24Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7C24Cu) goto L_08A7C24C;
    return;
L_08A7C24C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7C258u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A7C2A4;
L_08A7C258:
    ctx.set_gpr(31, 0x08A7C260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7C260u) goto L_08A7C260;
    return;
L_08A7C260:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7C270u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7C270u) goto L_08A7C270;
    return;
L_08A7C270:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7C27Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2938u>(ctx, &aot_mem) && ctx.pc == 0x08A7C27Cu) goto L_08A7C27C;
    return;
L_08A7C27C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18316), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7C290u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18320), 0u);
    goto L_08A7DA9C;
L_08A7C290:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C2A4:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C2AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A7C2C4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_08A7C678;
L_08A7C2C4:
    ctx.set_gpr(31, 0x08A7C2CCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    goto L_08A7C64C;
L_08A7C2CC:
    ctx.set_gpr(31, 0x08A7C2D4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16328));
    goto L_08A7C4EC;
L_08A7C2D4:
    ctx.set_gpr(31, 0x08A7C2DCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(18344));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 299u, 0x08855674u>(ctx, &aot_mem) && ctx.pc == 0x08A7C2DCu) goto L_08A7C2DC;
    return;
L_08A7C2DC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C2F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08A7C350;
      }
      goto L_08A7C30C;
    }
L_08A7C30C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(960));
    ctx.set_gpr(31, 0x08A7C318u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A7C370;
L_08A7C318:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(704));
    ctx.set_gpr(31, 0x08A7C324u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A7C370;
L_08A7C324:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(448));
    ctx.set_gpr(31, 0x08A7C330u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A7C370;
L_08A7C330:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08A7C33Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A7C370;
L_08A7C33C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08A7C354;
    }
    goto L_08A7C348;
L_08A7C348:
    ctx.set_gpr(31, 0x08A7C350u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08A7C368;
L_08A7C350:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08A7C354;
L_08A7C354:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C368:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08A7C370:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08A7C3B8;
      }
      goto L_08A7C38C;
    }
L_08A7C38C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08A7C398u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08A7C398u) goto L_08A7C398;
    return;
L_08A7C398:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08A7C3A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 778u, 0x0884EA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7C3A4u) goto L_08A7C3A4;
    return;
L_08A7C3A4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08A7C3BC;
    }
    goto L_08A7C3B0;
L_08A7C3B0:
    ctx.set_gpr(31, 0x08A7C3B8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08A7C3B8u) goto L_08A7C3B8;
    return;
L_08A7C3B8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08A7C3BC;
L_08A7C3BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C3D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08A7C40C;
      }
      goto L_08A7C3EC;
    }
L_08A7C3EC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1640));
    ctx.set_gpr(31, 0x08A7C3F8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 717u, 0x08857768u>(ctx, &aot_mem) && ctx.pc == 0x08A7C3F8u) goto L_08A7C3F8;
    return;
L_08A7C3F8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08A7C410;
    }
    goto L_08A7C404;
L_08A7C404:
    ctx.set_gpr(31, 0x08A7C40Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08A7C424;
L_08A7C40C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08A7C410;
L_08A7C410:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C424:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08A7C42C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08A7C470;
      }
      goto L_08A7C448;
    }
L_08A7C448:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7624));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A7C45Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A7C488;
L_08A7C45C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08A7C474;
    }
    goto L_08A7C468;
L_08A7C468:
    ctx.set_gpr(31, 0x08A7C470u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08A7C470u) goto L_08A7C470;
    return;
L_08A7C470:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08A7C474;
L_08A7C474:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C488:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08A7C4D4;
      }
      goto L_08A7C4A4;
    }
L_08A7C4A4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7704));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7C4C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7C4C0u) goto L_08A7C4C0;
    return;
L_08A7C4C0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08A7C4D8;
    }
    goto L_08A7C4CC;
L_08A7C4CC:
    ctx.set_gpr(31, 0x08A7C4D4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08A7C4D4u) goto L_08A7C4D4;
    return;
L_08A7C4D4:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08A7C4D8;
L_08A7C4D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C4EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A7C504u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    goto L_08A7C578;
L_08A7C504:
    ctx.set_gpr(31, 0x08A7C50Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(448));
    goto L_08A7C578;
L_08A7C50C:
    ctx.set_gpr(31, 0x08A7C514u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(704));
    goto L_08A7C578;
L_08A7C514:
    ctx.set_gpr(31, 0x08A7C51Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(960));
    goto L_08A7C578;
L_08A7C51C:
    ctx.set_gpr(31, 0x08A7C524u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1228));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08A7C524u) goto L_08A7C524;
    return;
L_08A7C524:
    ctx.set_gpr(31, 0x08A7C52Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1240));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08A7C52Cu) goto L_08A7C52C;
    return;
L_08A7C52C:
    ctx.set_gpr(31, 0x08A7C534u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1268));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 223u, 0x08848F30u>(ctx, &aot_mem) && ctx.pc == 0x08A7C534u) goto L_08A7C534;
    return;
L_08A7C534:
    ctx.set_gpr(31, 0x08A7C53Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1416));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 299u, 0x08855674u>(ctx, &aot_mem) && ctx.pc == 0x08A7C53Cu) goto L_08A7C53C;
    return;
L_08A7C53C:
    ctx.set_gpr(31, 0x08A7C544u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1452));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 299u, 0x08855674u>(ctx, &aot_mem) && ctx.pc == 0x08A7C544u) goto L_08A7C544;
    return;
L_08A7C544:
    ctx.set_gpr(31, 0x08A7C54Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1496));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 299u, 0x08855674u>(ctx, &aot_mem) && ctx.pc == 0x08A7C54Cu) goto L_08A7C54C;
    return;
L_08A7C54C:
    ctx.set_gpr(31, 0x08A7C554u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1532));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 299u, 0x08855674u>(ctx, &aot_mem) && ctx.pc == 0x08A7C554u) goto L_08A7C554;
    return;
L_08A7C554:
    ctx.set_gpr(31, 0x08A7C55Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1604));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 299u, 0x08855674u>(ctx, &aot_mem) && ctx.pc == 0x08A7C55Cu) goto L_08A7C55C;
    return;
L_08A7C55C:
    ctx.set_gpr(31, 0x08A7C564u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1640));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 299u, 0x08855674u>(ctx, &aot_mem) && ctx.pc == 0x08A7C564u) goto L_08A7C564;
    return;
L_08A7C564:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C578:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A7C590u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 735u, 0x0884E828u>(ctx, &aot_mem) && ctx.pc == 0x08A7C590u) goto L_08A7C590;
    return;
L_08A7C590:
    ctx.set_gpr(31, 0x08A7C598u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 104u, 0x0884C6D4u>(ctx, &aot_mem) && ctx.pc == 0x08A7C598u) goto L_08A7C598;
    return;
L_08A7C598:
    ctx.set_gpr(31, 0x08A7C5A0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08A7C5A0u) goto L_08A7C5A0;
    return;
L_08A7C5A0:
    ctx.set_gpr(31, 0x08A7C5A8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(228));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08A7C5A8u) goto L_08A7C5A8;
    return;
L_08A7C5A8:
    ctx.set_gpr(31, 0x08A7C5B0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A7C5C4;
L_08A7C5B0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C5C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08A7C5E8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x08A7C5E8u) goto L_08A7C5E8;
    return;
L_08A7C5E8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x08A7C5F4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A7C5F4u) goto L_08A7C5F4;
    return;
L_08A7C5F4:
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
    ctx.set_gpr(2, 16624u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
    ctx.set_gpr(2, 15872u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(228));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A7C630u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08A7C630u) goto L_08A7C630;
    return;
L_08A7C630:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(248), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C64C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A7C664u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1640));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 629u, 0x08857228u>(ctx, &aot_mem) && ctx.pc == 0x08A7C664u) goto L_08A7C664;
    return;
L_08A7C664:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C678:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7C694u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    goto L_08A7C6FC;
L_08A7C694:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7624));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A7C6A8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A7C6BC;
L_08A7C6A8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C6BC:
    ctx.set_gpr(3, 2229u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27312)));
    ctx.set_gpr(3, 2229u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27316)));
    ctx.set_gpr(3, 2229u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27320)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C6FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7704));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A7C724u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A7C738;
L_08A7C724:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C738:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C74C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08A7C7B0;
      }
      goto L_08A7C768;
    }
L_08A7C768:
    ctx.set_gpr(31, 0x08A7C770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7C770u) goto L_08A7C770;
    return;
L_08A7C770:
    ctx.set_gpr(31, 0x08A7C778u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A7C7D0;
L_08A7C778:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16328));
    ctx.set_gpr(31, 0x08A7C784u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A7C2F0;
L_08A7C784:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08A7C790u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A7C3D0;
L_08A7C790:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08A7C79Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A7C42C;
L_08A7C79C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08A7C7B4;
    }
    goto L_08A7C7A8;
L_08A7C7A8:
    ctx.set_gpr(31, 0x08A7C7B0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08A7C7C8;
L_08A7C7B0:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08A7C7B4;
L_08A7C7B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C7C8:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08A7C7D0:
    ctx.set_gpr(3, 15692u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C7E0:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18136), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C7E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A7D0D8;
      }
      goto L_08A7C80C;
    }
L_08A7C80C:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26988));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C828:
    ctx.set_gpr(31, 0x08A7C830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7C830u) goto L_08A7C830;
    return;
L_08A7C830:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7C83Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08A7C83Cu) goto L_08A7C83C;
    return;
L_08A7C83C:
    ctx.set_gpr(31, 0x08A7C844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08A7C844u) goto L_08A7C844;
    return;
L_08A7C844:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7C850u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 109u, 0x08AF0728u>(ctx, &aot_mem) && ctx.pc == 0x08A7C850u) goto L_08A7C850;
    return;
L_08A7C850:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A7D0DC;
    }
    goto L_08A7C858;
L_08A7C858:
    ctx.set_gpr(31, 0x08A7C860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08A7C860u) goto L_08A7C860;
    return;
L_08A7C860:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7C86Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08A7C86Cu) goto L_08A7C86C;
    return;
L_08A7C86C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7D0D8;
      }
      goto L_08A7C87C;
    }
L_08A7C87C:
    ctx.set_gpr(31, 0x08A7C884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7C884u) goto L_08A7C884;
    return;
L_08A7C884:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A7C898u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_08A7D1BC;
L_08A7C898:
    ctx.set_gpr(31, 0x08A7C8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A7C8A0u) goto L_08A7C8A0;
    return;
L_08A7C8A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A7C8B4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_08A7D1B0;
L_08A7C8B4:
    ctx.set_gpr(31, 0x08A7C8BCu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08A7C8BCu) goto L_08A7C8BC;
    return;
L_08A7C8BC:
    ctx.set_gpr(31, 0x08A7C8C4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08A7C8C4u) goto L_08A7C8C4;
    return;
L_08A7C8C4:
    ctx.set_gpr(4, 0u | 48200u);
    ctx.set_gpr(31, 0x08A7C8D0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 876u, 0x0885B54Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7C8D0u) goto L_08A7C8D0;
    return;
L_08A7C8D0:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
        goto L_08A7C8E4;
    }
    goto L_08A7C8D8;
L_08A7C8D8:
    ctx.set_gpr(31, 0x08A7C8E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 690u, 0x08862B34u>(ctx, &aot_mem) && ctx.pc == 0x08A7C8E0u) goto L_08A7C8E0;
    return;
L_08A7C8E0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A7C8E4;
L_08A7C8E4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08A7C8F0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A7D1A8;
L_08A7C8F0:
    ctx.set_gpr(31, 0x08A7C8F8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A7C8F8u) goto L_08A7C8F8;
    return;
L_08A7C8F8:
    ctx.set_gpr(31, 0x08A7C900u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 633u, 0x0885E624u>(ctx, &aot_mem) && ctx.pc == 0x08A7C900u) goto L_08A7C900;
    return;
L_08A7C900:
    ctx.set_gpr(31, 0x08A7C908u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08A7D19C;
L_08A7C908:
    ctx.set_gpr(31, 0x08A7C910u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7C910u) goto L_08A7C910;
    return;
L_08A7C910:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A7C91Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 1005u, 0x0885FE18u>(ctx, &aot_mem) && ctx.pc == 0x08A7C91Cu) goto L_08A7C91C;
    return;
L_08A7C91C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18128), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18132), 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18124), ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18140), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18141), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18196), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18200), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18204), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18136), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18208), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18216), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18232), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18240), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18236), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18248), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18272), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18196), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18120), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18279), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18460), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18220), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18380), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18384), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18388), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(19220), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(19221), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18392), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18396), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18397), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18476), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18448), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18452), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18272), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18398), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18456), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18416), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18420), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18424), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18428), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18444), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18780), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18984), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18400), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18404), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18302), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18989), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08A7C9F8u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18996), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7C9F8u) goto L_08A7C9F8;
    return;
L_08A7C9F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7CA04u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 266u, 0x08AB0F70u>(ctx, &aot_mem) && ctx.pc == 0x08A7CA04u) goto L_08A7CA04;
    return;
L_08A7CA04:
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[3]);
    goto L_08A7CA0C;
L_08A7CA0C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(18784), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(18785), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(18786), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(18787), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(18788), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(18789), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(18790), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(18791), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 200 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[3]);
        goto L_08A7CA0C;
    }
    goto L_08A7CA3C;
L_08A7CA3C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18740), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18744), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18748), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18752), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18756), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18760), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18764), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18768), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7CA6Cu);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08A7D184;
L_08A7CA6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A7CA78u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A7CA78u) goto L_08A7CA78;
    return;
L_08A7CA78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A7CA84u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A7CA84u) goto L_08A7CA84;
    return;
L_08A7CA84:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18316), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18320), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18301), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A7CAA0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 167u, 0x08A94C70u>(ctx, &aot_mem) && ctx.pc == 0x08A7CAA0u) goto L_08A7CAA0;
    return;
L_08A7CAA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7CAB0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 219u, 0x08A94FECu>(ctx, &aot_mem) && ctx.pc == 0x08A7CAB0u) goto L_08A7CAB0;
    return;
L_08A7CAB0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08A7CAC0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 174u, 0x08A9D418u>(ctx, &aot_mem) && ctx.pc == 0x08A7CAC0u) goto L_08A7CAC0;
    return;
L_08A7CAC0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15992));
    ctx.set_gpr(31, 0x08A7CAD4u);
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 49u, 0x08AD8568u>(ctx, &aot_mem) && ctx.pc == 0x08A7CAD4u) goto L_08A7CAD4;
    return;
L_08A7CAD4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08A7CAE4u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16328));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 669u, 0x08AE639Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7CAE4u) goto L_08A7CAE4;
    return;
L_08A7CAE4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15840));
    ctx.set_gpr(31, 0x08A7CAF4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 1031u, 0x08AA7C24u>(ctx, &aot_mem) && ctx.pc == 0x08A7CAF4u) goto L_08A7CAF4;
    return;
L_08A7CAF4:
    ctx.set_gpr(31, 0x08A7CAFCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08A7D17C;
L_08A7CAFC:
    ctx.set_gpr(31, 0x08A7CB04u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08A7C0D4;
L_08A7CB04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D0D8;
      }
      goto L_08A7CB0C;
    }
L_08A7CB0C:
    ctx.set_gpr(31, 0x08A7CB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CB14u) goto L_08A7CB14;
    return;
L_08A7CB14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7CB28u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1372));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7CB28u) goto L_08A7CB28;
    return;
L_08A7CB28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D0D8;
      }
      goto L_08A7CB30;
    }
L_08A7CB30:
    ctx.set_gpr(31, 0x08A7CB38u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18278), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CB38u) goto L_08A7CB38;
    return;
L_08A7CB38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08A7CB6Cu);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A7CB6Cu) goto L_08A7CB6C;
    return;
L_08A7CB6C:
    ctx.set_gpr(31, 0x08A7CB74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CB74u) goto L_08A7CB74;
    return;
L_08A7CB74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(12));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A7CBA0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A7CBA0u) goto L_08A7CBA0;
    return;
L_08A7CBA0:
    ctx.set_gpr(31, 0x08A7CBA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CBA8u) goto L_08A7CBA8;
    return;
L_08A7CBA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A7CBBCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 708u, 0x0885EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7CBBCu) goto L_08A7CBBC;
    return;
L_08A7CBBC:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A7CBC0;
L_08A7CBC0:
    ctx.set_gpr(31, 0x08A7CBC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CBC8u) goto L_08A7CBC8;
    return;
L_08A7CBC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A7CBDCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7CBDCu) goto L_08A7CBDC;
    return;
L_08A7CBDC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 81 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7CBC0;
      }
      goto L_08A7CBEC;
    }
L_08A7CBEC:
    ctx.set_gpr(31, 0x08A7CBF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CBF4u) goto L_08A7CBF4;
    return;
L_08A7CBF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A7CC08u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7CC08u) goto L_08A7CC08;
    return;
L_08A7CC08:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A7CC14u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A7D7CC;
L_08A7CC14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7D0D8;
      }
      goto L_08A7CC24;
    }
L_08A7CC24:
    ctx.set_gpr(31, 0x08A7CC2Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 180u, 0x08A94D54u>(ctx, &aot_mem) && ctx.pc == 0x08A7CC2Cu) goto L_08A7CC2C;
    return;
L_08A7CC2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D0D8;
      }
      goto L_08A7CC34;
    }
L_08A7CC34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7D0D8;
      }
      goto L_08A7CC44;
    }
L_08A7CC44:
    ctx.set_gpr(31, 0x08A7CC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CC4Cu) goto L_08A7CC4C;
    return;
L_08A7CC4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A7CC60u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1374));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7CC60u) goto L_08A7CC60;
    return;
L_08A7CC60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D0D8;
      }
      goto L_08A7CC68;
    }
L_08A7CC68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7D0D8;
      }
      goto L_08A7CC78;
    }
L_08A7CC78:
    ctx.set_gpr(31, 0x08A7CC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CC80u) goto L_08A7CC80;
    return;
L_08A7CC80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A7CC94u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1376));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7CC94u) goto L_08A7CC94;
    return;
L_08A7CC94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D0D8;
      }
      goto L_08A7CC9C;
    }
L_08A7CC9C:
    ctx.set_gpr(31, 0x08A7CCA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CCA4u) goto L_08A7CCA4;
    return;
L_08A7CCA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17324u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(31, 0x08A7CCDCu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A7CCDCu) goto L_08A7CCDC;
    return;
L_08A7CCDC:
    ctx.set_gpr(31, 0x08A7CCE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CCE4u) goto L_08A7CCE4;
    return;
L_08A7CCE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17364u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A7CD1Cu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A7CD1Cu) goto L_08A7CD1C;
    return;
L_08A7CD1C:
    ctx.set_gpr(31, 0x08A7CD24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CD24u) goto L_08A7CD24;
    return;
L_08A7CD24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17364u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(61));
    ctx.set_gpr(31, 0x08A7CD5Cu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A7CD5Cu) goto L_08A7CD5C;
    return;
L_08A7CD5C:
    ctx.set_gpr(31, 0x08A7CD64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CD64u) goto L_08A7CD64;
    return;
L_08A7CD64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A7CD78u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7CD78u) goto L_08A7CD78;
    return;
L_08A7CD78:
    ctx.set_gpr(31, 0x08A7CD80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CD80u) goto L_08A7CD80;
    return;
L_08A7CD80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A7CD94u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7CD94u) goto L_08A7CD94;
    return;
L_08A7CD94:
    ctx.set_gpr(31, 0x08A7CD9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CD9Cu) goto L_08A7CD9C;
    return;
L_08A7CD9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A7CDB0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7CDB0u) goto L_08A7CDB0;
    return;
L_08A7CDB0:
    ctx.set_gpr(31, 0x08A7CDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CDB8u) goto L_08A7CDB8;
    return;
L_08A7CDB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(43));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x08A7CDECu);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A7CDECu) goto L_08A7CDEC;
    return;
L_08A7CDEC:
    ctx.set_gpr(31, 0x08A7CDF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CDF4u) goto L_08A7CDF4;
    return;
L_08A7CDF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(43));
    ctx.set_gpr(31, 0x08A7CE08u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7CE08u) goto L_08A7CE08;
    return;
L_08A7CE08:
    ctx.set_gpr(31, 0x08A7CE10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CE10u) goto L_08A7CE10;
    return;
L_08A7CE10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17150u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17070u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x08A7CE44u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A7CE44u) goto L_08A7CE44;
    return;
L_08A7CE44:
    ctx.set_gpr(31, 0x08A7CE4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CE4Cu) goto L_08A7CE4C;
    return;
L_08A7CE4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A7CE64u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_08A7D144;
L_08A7CE64:
    ctx.set_gpr(31, 0x08A7CE6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CE6Cu) goto L_08A7CE6C;
    return;
L_08A7CE6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17365u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17070u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x08A7CEA0u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A7CEA0u) goto L_08A7CEA0;
    return;
L_08A7CEA0:
    ctx.set_gpr(31, 0x08A7CEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CEA8u) goto L_08A7CEA8;
    return;
L_08A7CEA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(31, 0x08A7CEBCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7CEBCu) goto L_08A7CEBC;
    return;
L_08A7CEBC:
    ctx.set_gpr(31, 0x08A7CEC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CEC4u) goto L_08A7CEC4;
    return;
L_08A7CEC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(31, 0x08A7CED8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7CED8u) goto L_08A7CED8;
    return;
L_08A7CED8:
    ctx.set_gpr(31, 0x08A7CEE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CEE0u) goto L_08A7CEE0;
    return;
L_08A7CEE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17239u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08A7CF14u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A7CF14u) goto L_08A7CF14;
    return;
L_08A7CF14:
    ctx.set_gpr(31, 0x08A7CF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CF1Cu) goto L_08A7CF1C;
    return;
L_08A7CF1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17239u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(39));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A7CF54u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A7CF54u) goto L_08A7CF54;
    return;
L_08A7CF54:
    ctx.set_gpr(31, 0x08A7CF5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CF5Cu) goto L_08A7CF5C;
    return;
L_08A7CF5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17239u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16204u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(43));
    ctx.set_gpr(31, 0x08A7CF94u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A7CF94u) goto L_08A7CF94;
    return;
L_08A7CF94:
    ctx.set_gpr(31, 0x08A7CF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CF9Cu) goto L_08A7CF9C;
    return;
L_08A7CF9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(31, 0x08A7CFB0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7CFB0u) goto L_08A7CFB0;
    return;
L_08A7CFB0:
    ctx.set_gpr(31, 0x08A7CFB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CFB8u) goto L_08A7CFB8;
    return;
L_08A7CFB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(39));
    ctx.set_gpr(31, 0x08A7CFCCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7CFCCu) goto L_08A7CFCC;
    return;
L_08A7CFCC:
    ctx.set_gpr(31, 0x08A7CFD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CFD4u) goto L_08A7CFD4;
    return;
L_08A7CFD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A7CFE8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7CFE8u) goto L_08A7CFE8;
    return;
L_08A7CFE8:
    ctx.set_gpr(31, 0x08A7CFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CFF0u) goto L_08A7CFF0;
    return;
L_08A7CFF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16257u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 18350u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7D014u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(39));
    goto L_08A7D0F0;
L_08A7D014:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18300), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7D0D8;
      }
      goto L_08A7D028;
    }
L_08A7D028:
    ctx.set_gpr(31, 0x08A7D030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D030u) goto L_08A7D030;
    return;
L_08A7D030:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A7D048u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08A7D048u) goto L_08A7D048;
    return;
L_08A7D048:
    ctx.set_gpr(31, 0x08A7D050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D050u) goto L_08A7D050;
    return;
L_08A7D050:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A7D070u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08A7D070u) goto L_08A7D070;
    return;
L_08A7D070:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7D0D8;
      }
      goto L_08A7D080;
    }
L_08A7D080:
    ctx.set_gpr(31, 0x08A7D088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D088u) goto L_08A7D088;
    return;
L_08A7D088:
    ctx.set_gpr(31, 0x08A7D090u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x08A7D090u) goto L_08A7D090;
    return;
L_08A7D090:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D0D8;
      }
      goto L_08A7D098;
    }
L_08A7D098:
    ctx.set_gpr(31, 0x08A7D0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7D0A0u) goto L_08A7D0A0;
    return;
L_08A7D0A0:
    ctx.set_gpr(31, 0x08A7D0A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 814u, 0x08ACEC40u>(ctx, &aot_mem) && ctx.pc == 0x08A7D0A8u) goto L_08A7D0A8;
    return;
L_08A7D0A8:
    ctx.set_gpr(31, 0x08A7D0B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D0B0u) goto L_08A7D0B0;
    return;
L_08A7D0B0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A7D0C8u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08A7D0C8u) goto L_08A7D0C8;
    return;
L_08A7D0C8:
    ctx.set_gpr(31, 0x08A7D0D0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08A7C7E0;
L_08A7D0D0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A7D0DC;
      }
      goto L_08A7D0D8;
    }
L_08A7D0D8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A7D0DC;
L_08A7D0DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D0F0:
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
        goto L_08A7D13C;
    }
    goto L_08A7D130;
L_08A7D130:
    ctx.set_gpr(31, 0x08A7D138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 406u, 0x088464A0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D138u) goto L_08A7D138;
    return;
L_08A7D138:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A7D13C;
L_08A7D13C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D144:
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
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 487u, 0x08847018u>(ctx, &aot_mem); return;
L_08A7D17C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19224), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D184:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(3556), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D19C:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(2984));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32760));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D1A8:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D1B0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D1BC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D1C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08A7D3B8;
      }
      goto L_08A7D1DC;
    }
L_08A7D1DC:
    if (ctx.gpr[7] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(196));
        goto L_08A7D27C;
    }
    goto L_08A7D1E4;
L_08A7D1E4:
    ctx.set_gpr(31, 0x08A7D1ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D1ECu) goto L_08A7D1EC;
    return;
L_08A7D1EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A7D204u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D204u) goto L_08A7D204;
    return;
L_08A7D204:
    ctx.set_gpr(31, 0x08A7D20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D20Cu) goto L_08A7D20C;
    return;
L_08A7D20C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A7D224u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D224u) goto L_08A7D224;
    return;
L_08A7D224:
    ctx.set_gpr(31, 0x08A7D22Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D22Cu) goto L_08A7D22C;
    return;
L_08A7D22C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17158u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17084u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7D24Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A7D24Cu) goto L_08A7D24C;
    return;
L_08A7D24C:
    ctx.set_gpr(31, 0x08A7D254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D254u) goto L_08A7D254;
    return;
L_08A7D254:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17369u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17082u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7D274u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A7D274u) goto L_08A7D274;
    return;
L_08A7D274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D58C;
      }
      goto L_08A7D27C;
    }
L_08A7D27C:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A7D320;
      }
      goto L_08A7D284;
    }
L_08A7D284:
    ctx.set_gpr(31, 0x08A7D28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D28Cu) goto L_08A7D28C;
    return;
L_08A7D28C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A7D2A4u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D2A4u) goto L_08A7D2A4;
    return;
L_08A7D2A4:
    ctx.set_gpr(31, 0x08A7D2ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D2ACu) goto L_08A7D2AC;
    return;
L_08A7D2AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A7D2C4u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D2C4u) goto L_08A7D2C4;
    return;
L_08A7D2C4:
    ctx.set_gpr(31, 0x08A7D2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D2CCu) goto L_08A7D2CC;
    return;
L_08A7D2CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17159u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17082u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7D2ECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A7D2ECu) goto L_08A7D2EC;
    return;
L_08A7D2EC:
    ctx.set_gpr(31, 0x08A7D2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D2F4u) goto L_08A7D2F4;
    return;
L_08A7D2F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17369u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17084u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7D318u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A7D318u) goto L_08A7D318;
    return;
L_08A7D318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D58C;
      }
      goto L_08A7D320;
    }
L_08A7D320:
    ctx.set_gpr(31, 0x08A7D328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D328u) goto L_08A7D328;
    return;
L_08A7D328:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A7D340u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D340u) goto L_08A7D340;
    return;
L_08A7D340:
    ctx.set_gpr(31, 0x08A7D348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D348u) goto L_08A7D348;
    return;
L_08A7D348:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A7D360u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D360u) goto L_08A7D360;
    return;
L_08A7D360:
    ctx.set_gpr(31, 0x08A7D368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D368u) goto L_08A7D368;
    return;
L_08A7D368:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17159u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17082u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7D388u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A7D388u) goto L_08A7D388;
    return;
L_08A7D388:
    ctx.set_gpr(31, 0x08A7D390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D390u) goto L_08A7D390;
    return;
L_08A7D390:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17369u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17082u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7D3B0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A7D3B0u) goto L_08A7D3B0;
    return;
L_08A7D3B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D58C;
      }
      goto L_08A7D3B8;
    }
L_08A7D3B8:
    if (ctx.gpr[7] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(199));
        goto L_08A7D458;
    }
    goto L_08A7D3C0;
L_08A7D3C0:
    ctx.set_gpr(31, 0x08A7D3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D3C8u) goto L_08A7D3C8;
    return;
L_08A7D3C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A7D3E0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D3E0u) goto L_08A7D3E0;
    return;
L_08A7D3E0:
    ctx.set_gpr(31, 0x08A7D3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D3E8u) goto L_08A7D3E8;
    return;
L_08A7D3E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A7D400u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D400u) goto L_08A7D400;
    return;
L_08A7D400:
    ctx.set_gpr(31, 0x08A7D408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D408u) goto L_08A7D408;
    return;
L_08A7D408:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17157u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17012u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7D428u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A7D428u) goto L_08A7D428;
    return;
L_08A7D428:
    ctx.set_gpr(31, 0x08A7D430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D430u) goto L_08A7D430;
    return;
L_08A7D430:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17372u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7D450u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A7D450u) goto L_08A7D450;
    return;
L_08A7D450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D58C;
      }
      goto L_08A7D458;
    }
L_08A7D458:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A7D4FC;
      }
      goto L_08A7D460;
    }
L_08A7D460:
    ctx.set_gpr(31, 0x08A7D468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D468u) goto L_08A7D468;
    return;
L_08A7D468:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A7D480u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D480u) goto L_08A7D480;
    return;
L_08A7D480:
    ctx.set_gpr(31, 0x08A7D488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D488u) goto L_08A7D488;
    return;
L_08A7D488:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A7D4A0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D4A0u) goto L_08A7D4A0;
    return;
L_08A7D4A0:
    ctx.set_gpr(31, 0x08A7D4A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D4A8u) goto L_08A7D4A8;
    return;
L_08A7D4A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17158u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7D4C8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A7D4C8u) goto L_08A7D4C8;
    return;
L_08A7D4C8:
    ctx.set_gpr(31, 0x08A7D4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D4D0u) goto L_08A7D4D0;
    return;
L_08A7D4D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17372u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17012u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7D4F4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A7D4F4u) goto L_08A7D4F4;
    return;
L_08A7D4F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D58C;
      }
      goto L_08A7D4FC;
    }
L_08A7D4FC:
    ctx.set_gpr(31, 0x08A7D504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D504u) goto L_08A7D504;
    return;
L_08A7D504:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A7D51Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D51Cu) goto L_08A7D51C;
    return;
L_08A7D51C:
    ctx.set_gpr(31, 0x08A7D524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D524u) goto L_08A7D524;
    return;
L_08A7D524:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A7D53Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D53Cu) goto L_08A7D53C;
    return;
L_08A7D53C:
    ctx.set_gpr(31, 0x08A7D544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D544u) goto L_08A7D544;
    return;
L_08A7D544:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17158u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7D564u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A7D564u) goto L_08A7D564;
    return;
L_08A7D564:
    ctx.set_gpr(31, 0x08A7D56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D56Cu) goto L_08A7D56C;
    return;
L_08A7D56C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17372u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7D58Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A7D58Cu) goto L_08A7D58C;
    return;
L_08A7D58C:
    ctx.set_gpr(31, 0x08A7D594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D594u) goto L_08A7D594;
    return;
L_08A7D594:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(31, 0x08A7D5A8u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7D5A8u) goto L_08A7D5A8;
    return;
L_08A7D5A8:
    ctx.set_gpr(31, 0x08A7D5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D5B0u) goto L_08A7D5B0;
    return;
L_08A7D5B0:
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7D5C4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7D5C4u) goto L_08A7D5C4;
    return;
L_08A7D5C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D5D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08A7D5E8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A7D5E8u) goto L_08A7D5E8;
    return;
L_08A7D5E8:
    ctx.set_gpr(31, 0x08A7D5F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 351u, 0x088496ACu>(ctx, &aot_mem) && ctx.pc == 0x08A7D5F0u) goto L_08A7D5F0;
    return;
L_08A7D5F0:
    ctx.set_gpr(31, 0x08A7D5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A7D5F8u) goto L_08A7D5F8;
    return;
L_08A7D5F8:
    ctx.set_gpr(31, 0x08A7D600u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 455u, 0x08849BF0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D600u) goto L_08A7D600;
    return;
L_08A7D600:
    ctx.set_gpr(31, 0x08A7D608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7D608u) goto L_08A7D608;
    return;
L_08A7D608:
    ctx.set_gpr(31, 0x08A7D610u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7D610u) goto L_08A7D610;
    return;
L_08A7D610:
    ctx.set_gpr(31, 0x08A7D618u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 194u, 0x08A94E38u>(ctx, &aot_mem) && ctx.pc == 0x08A7D618u) goto L_08A7D618;
    return;
L_08A7D618:
    ctx.set_gpr(31, 0x08A7D620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7D620u) goto L_08A7D620;
    return;
L_08A7D620:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7D62Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 275u, 0x08AB0FF8u>(ctx, &aot_mem) && ctx.pc == 0x08A7D62Cu) goto L_08A7D62C;
    return;
L_08A7D62C:
    ctx.set_gpr(31, 0x08A7D634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A7D634u) goto L_08A7D634;
    return;
L_08A7D634:
    ctx.set_gpr(31, 0x08A7D63Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A7D63Cu) goto L_08A7D63C;
    return;
L_08A7D63C:
    ctx.set_gpr(31, 0x08A7D644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D644u) goto L_08A7D644;
    return;
L_08A7D644:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A7D658u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7D658u) goto L_08A7D658;
    return;
L_08A7D658:
    ctx.set_gpr(31, 0x08A7D660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08A7D660u) goto L_08A7D660;
    return;
L_08A7D660:
    ctx.set_gpr(31, 0x08A7D668u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A7D728;
L_08A7D668:
    ctx.set_gpr(31, 0x08A7D670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7D670u) goto L_08A7D670;
    return;
L_08A7D670:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7D67Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 275u, 0x08AB0FF8u>(ctx, &aot_mem) && ctx.pc == 0x08A7D67Cu) goto L_08A7D67C;
    return;
L_08A7D67C:
    ctx.set_gpr(31, 0x08A7D684u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A7D770;
L_08A7D684:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A7D688;
L_08A7D688:
    ctx.set_gpr(31, 0x08A7D690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D690u) goto L_08A7D690;
    return;
L_08A7D690:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7D6A0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08A7D6A0u) goto L_08A7D6A0;
    return;
L_08A7D6A0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08A7D6C8;
    }
    goto L_08A7D6AC;
L_08A7D6AC:
    ctx.set_gpr(31, 0x08A7D6B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D6B4u) goto L_08A7D6B4;
    return;
L_08A7D6B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7D6C4u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A7D6C4u) goto L_08A7D6C4;
    return;
L_08A7D6C4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A7D6C8;
L_08A7D6C8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 81 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D688;
      }
      goto L_08A7D6D4;
    }
L_08A7D6D4:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A7D6D8;
L_08A7D6D8:
    ctx.set_gpr(31, 0x08A7D6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D6E0u) goto L_08A7D6E0;
    return;
L_08A7D6E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7D6F0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 562u, 0x0884764Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7D6F0u) goto L_08A7D6F0;
    return;
L_08A7D6F0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D6D8;
      }
      goto L_08A7D700;
    }
L_08A7D700:
    ctx.set_gpr(31, 0x08A7D708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A7D708u) goto L_08A7D708;
    return;
L_08A7D708:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7D718u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7D718u) goto L_08A7D718;
    return;
L_08A7D718:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D728:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08A7D744;
L_08A7D744:
    ctx.set_gpr(31, 0x08A7D74Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 118u, 0x08AF07C4u>(ctx, &aot_mem) && ctx.pc == 0x08A7D74Cu) goto L_08A7D74C;
    return;
L_08A7D74C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 7 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08A7D744;
    }
    goto L_08A7D75C;
L_08A7D75C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D770:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A7D7AC;
      }
      goto L_08A7D788;
    }
L_08A7D788:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A7D794u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A7D1A8;
L_08A7D794:
    ctx.set_gpr(31, 0x08A7D79Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 95u, 0x08864718u>(ctx, &aot_mem) && ctx.pc == 0x08A7D79Cu) goto L_08A7D79C;
    return;
L_08A7D79C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08A7D7A8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 720u, 0x08862DB0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D7A8u) goto L_08A7D7A8;
    return;
L_08A7D7A8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A7D7AC;
L_08A7D7AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08A7D7C0;
    }
    goto L_08A7D7B8;
L_08A7D7B8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A7D7C0;
L_08A7D7C0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D7CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A7D9CC;
      }
      goto L_08A7D7E8;
    }
L_08A7D7E8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(18278)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08A7DA10;
    }
    goto L_08A7D7F4;
L_08A7D7F4:
    ctx.set_gpr(31, 0x08A7D7FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D7FCu) goto L_08A7D7FC;
    return;
L_08A7D7FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16832u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16912u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A7D830u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A7D830u) goto L_08A7D830;
    return;
L_08A7D830:
    ctx.set_gpr(31, 0x08A7D838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D838u) goto L_08A7D838;
    return;
L_08A7D838:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08A7D84Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 708u, 0x0885EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7D84Cu) goto L_08A7D84C;
    return;
L_08A7D84C:
    ctx.set_gpr(31, 0x08A7D854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D854u) goto L_08A7D854;
    return;
L_08A7D854:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08A7D868u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7D868u) goto L_08A7D868;
    return;
L_08A7D868:
    ctx.set_gpr(31, 0x08A7D870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D870u) goto L_08A7D870;
    return;
L_08A7D870:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08A7D8A4u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A7D8A4u) goto L_08A7D8A4;
    return;
L_08A7D8A4:
    ctx.set_gpr(31, 0x08A7D8ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D8ACu) goto L_08A7D8AC;
    return;
L_08A7D8AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A7D8D8u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(7));
    goto L_08A7DA20;
L_08A7D8D8:
    ctx.set_gpr(31, 0x08A7D8E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D8E0u) goto L_08A7D8E0;
    return;
L_08A7D8E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A7D90Cu);
    ctx.set_gpr(10, ctx.gpr[6] + 0u);
    goto L_08A7DA20;
L_08A7D90C:
    ctx.set_gpr(31, 0x08A7D914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D914u) goto L_08A7D914;
    return;
L_08A7D914:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A7D940u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(9));
    goto L_08A7DA20;
L_08A7D940:
    ctx.set_gpr(31, 0x08A7D948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D948u) goto L_08A7D948;
    return;
L_08A7D948:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A7D974u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(14));
    goto L_08A7DA20;
L_08A7D974:
    ctx.set_gpr(31, 0x08A7D97Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D97Cu) goto L_08A7D97C;
    return;
L_08A7D97C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A7D9A8u);
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
    goto L_08A7DA20;
L_08A7D9A8:
    ctx.set_gpr(31, 0x08A7D9B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D9B0u) goto L_08A7D9B0;
    return;
L_08A7D9B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08A7D9C4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7D9C4u) goto L_08A7D9C4;
    return;
L_08A7D9C4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18278), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08A7DA0C;
      }
      goto L_08A7D9CC;
    }
L_08A7D9CC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(18278)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7DA0C;
      }
      goto L_08A7D9D8;
    }
L_08A7D9D8:
    ctx.set_gpr(31, 0x08A7D9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D9E0u) goto L_08A7D9E0;
    return;
L_08A7D9E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7D9F0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A7D9F0u) goto L_08A7D9F0;
    return;
L_08A7D9F0:
    ctx.set_gpr(31, 0x08A7D9F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7D9F8u) goto L_08A7D9F8;
    return;
L_08A7D9F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7DA08u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A7DA08u) goto L_08A7DA08;
    return;
L_08A7DA08:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18278), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08A7DA0C;
L_08A7DA0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A7DA10;
L_08A7DA10:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7DA20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, ctx.gpr[5] << 4u);
    ctx.set_gpr(11, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[11] << 2u);
    ctx.set_gpr(6, ctx.gpr[11] + ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] << 3u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, 5u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-13100)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[6] == ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08A7DA94;
    }
    goto L_08A7DA60;
L_08A7DA60:
    ctx.set_gpr(2, ctx.gpr[5] << 7u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-15404))))));
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
    ctx.set_gpr(9, ctx.gpr[10] + 0u);
    ctx.set_gpr(31, 0x08A7DA90u);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 441u, 0x08846BA4u>(ctx, &aot_mem) && ctx.pc == 0x08A7DA90u) goto L_08A7DA90;
    return;
L_08A7DA90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A7DA94;
L_08A7DA94:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7DA9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08A7DAB0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A7DAB0u) goto L_08A7DAB0;
    return;
L_08A7DAB0:
    ctx.set_gpr(31, 0x08A7DAB8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A7DAB8u) goto L_08A7DAB8;
    return;
L_08A7DAB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7DAC4u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A7DEDC;
L_08A7DAC4:
    ctx.set_gpr(31, 0x08A7DACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DACCu) goto L_08A7DACC;
    return;
L_08A7DACC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7DADCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08A7DADCu) goto L_08A7DADC;
    return;
L_08A7DADC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A7DB28;
      }
      goto L_08A7DAE8;
    }
L_08A7DAE8:
    ctx.set_gpr(31, 0x08A7DAF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DAF0u) goto L_08A7DAF0;
    return;
L_08A7DAF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17324u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(31, 0x08A7DB28u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A7DB28u) goto L_08A7DB28;
    return;
L_08A7DB28:
    ctx.set_gpr(31, 0x08A7DB30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DB30u) goto L_08A7DB30;
    return;
L_08A7DB30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7DB40u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08A7DB40u) goto L_08A7DB40;
    return;
L_08A7DB40:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A7DB8C;
      }
      goto L_08A7DB4C;
    }
L_08A7DB4C:
    ctx.set_gpr(31, 0x08A7DB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DB54u) goto L_08A7DB54;
    return;
L_08A7DB54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17364u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A7DB8Cu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A7DB8Cu) goto L_08A7DB8C;
    return;
L_08A7DB8C:
    ctx.set_gpr(31, 0x08A7DB94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DB94u) goto L_08A7DB94;
    return;
L_08A7DB94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7DBA4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08A7DBA4u) goto L_08A7DBA4;
    return;
L_08A7DBA4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A7DBF0;
      }
      goto L_08A7DBB0;
    }
L_08A7DBB0:
    ctx.set_gpr(31, 0x08A7DBB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DBB8u) goto L_08A7DBB8;
    return;
L_08A7DBB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17364u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(61));
    ctx.set_gpr(31, 0x08A7DBF0u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A7DBF0u) goto L_08A7DBF0;
    return;
L_08A7DBF0:
    ctx.set_gpr(31, 0x08A7DBF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DBF8u) goto L_08A7DBF8;
    return;
L_08A7DBF8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A7DC18u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7DC18u) goto L_08A7DC18;
    return;
L_08A7DC18:
    ctx.set_gpr(31, 0x08A7DC20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DC20u) goto L_08A7DC20;
    return;
L_08A7DC20:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A7DC40u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7DC40u) goto L_08A7DC40;
    return;
L_08A7DC40:
    ctx.set_gpr(31, 0x08A7DC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DC48u) goto L_08A7DC48;
    return;
L_08A7DC48:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A7DC68u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7DC68u) goto L_08A7DC68;
    return;
L_08A7DC68:
    ctx.set_gpr(31, 0x08A7DC70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DC70u) goto L_08A7DC70;
    return;
L_08A7DC70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A7DC84u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7DC84u) goto L_08A7DC84;
    return;
L_08A7DC84:
    ctx.set_gpr(31, 0x08A7DC8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DC8Cu) goto L_08A7DC8C;
    return;
L_08A7DC8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A7DCA0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7DCA0u) goto L_08A7DCA0;
    return;
L_08A7DCA0:
    ctx.set_gpr(31, 0x08A7DCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DCA8u) goto L_08A7DCA8;
    return;
L_08A7DCA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A7DCBCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7DCBCu) goto L_08A7DCBC;
    return;
L_08A7DCBC:
    ctx.set_gpr(31, 0x08A7DCC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DCC4u) goto L_08A7DCC4;
    return;
L_08A7DCC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A7DCECu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A7DCECu) goto L_08A7DCEC;
    return;
L_08A7DCEC:
    ctx.set_gpr(31, 0x08A7DCF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DCF4u) goto L_08A7DCF4;
    return;
L_08A7DCF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A7DD08u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08A7DD08u) goto L_08A7DD08;
    return;
L_08A7DD08:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A7DD74;
    }
    goto L_08A7DD10;
L_08A7DD10:
    ctx.set_gpr(31, 0x08A7DD18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DD18u) goto L_08A7DD18;
    return;
L_08A7DD18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A7DD30u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DD30u) goto L_08A7DD30;
    return;
L_08A7DD30:
    ctx.set_gpr(31, 0x08A7DD38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DD38u) goto L_08A7DD38;
    return;
L_08A7DD38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A7DD50u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DD50u) goto L_08A7DD50;
    return;
L_08A7DD50:
    ctx.set_gpr(31, 0x08A7DD58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DD58u) goto L_08A7DD58;
    return;
L_08A7DD58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A7DD6Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7DD6Cu) goto L_08A7DD6C;
    return;
L_08A7DD6C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A7DED0;
      }
      goto L_08A7DD74;
    }
L_08A7DD74:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A7DE28;
      }
      goto L_08A7DD7C;
    }
L_08A7DD7C:
    ctx.set_gpr(31, 0x08A7DD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DD84u) goto L_08A7DD84;
    return;
L_08A7DD84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A7DD9Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DD9Cu) goto L_08A7DD9C;
    return;
L_08A7DD9C:
    ctx.set_gpr(31, 0x08A7DDA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DDA4u) goto L_08A7DDA4;
    return;
L_08A7DDA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17324u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7DDC8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A7DDC8u) goto L_08A7DDC8;
    return;
L_08A7DDC8:
    ctx.set_gpr(31, 0x08A7DDD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DDD0u) goto L_08A7DDD0;
    return;
L_08A7DDD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17364u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7DDF4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A7DDF4u) goto L_08A7DDF4;
    return;
L_08A7DDF4:
    ctx.set_gpr(31, 0x08A7DDFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DDFCu) goto L_08A7DDFC;
    return;
L_08A7DDFC:
    ctx.set_gpr(3, 17364u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7DE20u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A7DE20u) goto L_08A7DE20;
    return;
L_08A7DE20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7DECC;
      }
      goto L_08A7DE28;
    }
L_08A7DE28:
    ctx.set_gpr(31, 0x08A7DE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DE30u) goto L_08A7DE30;
    return;
L_08A7DE30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A7DE48u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DE48u) goto L_08A7DE48;
    return;
L_08A7DE48:
    ctx.set_gpr(31, 0x08A7DE50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DE50u) goto L_08A7DE50;
    return;
L_08A7DE50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17364u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7DE74u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A7DE74u) goto L_08A7DE74;
    return;
L_08A7DE74:
    ctx.set_gpr(31, 0x08A7DE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DE7Cu) goto L_08A7DE7C;
    return;
L_08A7DE7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17324u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7DEA0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A7DEA0u) goto L_08A7DEA0;
    return;
L_08A7DEA0:
    ctx.set_gpr(31, 0x08A7DEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DEA8u) goto L_08A7DEA8;
    return;
L_08A7DEA8:
    ctx.set_gpr(3, 17324u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7DECCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A7DECCu) goto L_08A7DECC;
    return;
L_08A7DECC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A7DED0;
L_08A7DED0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7DEDC:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18984), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7DEE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08A7DEF8u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DEF8u) goto L_08A7DEF8;
    return;
L_08A7DEF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A7DF0Cu);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7DF0Cu) goto L_08A7DF0C;
    return;
L_08A7DF0C:
    ctx.set_gpr(31, 0x08A7DF14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DF14u) goto L_08A7DF14;
    return;
L_08A7DF14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A7DF28u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7DF28u) goto L_08A7DF28;
    return;
L_08A7DF28:
    ctx.set_gpr(31, 0x08A7DF30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DF30u) goto L_08A7DF30;
    return;
L_08A7DF30:
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7DF44u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7DF44u) goto L_08A7DF44;
    return;
L_08A7DF44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7DF54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18984)));
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
        goto L_08A7E2C4;
    }
    goto L_08A7DF70;
L_08A7DF70:
    ctx.set_gpr(31, 0x08A7DF78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DF78u) goto L_08A7DF78;
    return;
L_08A7DF78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7DF88u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08A7DF88u) goto L_08A7DF88;
    return;
L_08A7DF88:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08A7E364;
    }
    goto L_08A7DF94;
L_08A7DF94:
    ctx.set_gpr(31, 0x08A7DF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7DF9Cu) goto L_08A7DF9C;
    return;
L_08A7DF9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A7DFACu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    goto L_08A7E380;
L_08A7DFAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E360;
      }
      goto L_08A7DFB4;
    }
L_08A7DFB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18128)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
        goto L_08A7E024;
    }
    goto L_08A7DFC4;
L_08A7DFC4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A7DFDCu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A7DFDCu) goto L_08A7DFDC;
    return;
L_08A7DFDC:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(413));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(229));
    ctx.set_gpr(31, 0x08A7DFF0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25068));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A7DFF0u) goto L_08A7DFF0;
    return;
L_08A7DFF0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A7E008u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A7E008u) goto L_08A7E008;
    return;
L_08A7E008:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(412));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08A7E01Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25068));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A7E01Cu) goto L_08A7E01C;
    return;
L_08A7E01C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E360;
      }
      goto L_08A7E024;
    }
L_08A7E024:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A7E360;
      }
      goto L_08A7E02C;
    }
L_08A7E02C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A7E118;
      }
      goto L_08A7E038;
    }
L_08A7E038:
    ctx.set_gpr(31, 0x08A7E040u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15992));
    goto L_08A7E378;
L_08A7E040:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E118;
      }
      goto L_08A7E048;
    }
L_08A7E048:
    ctx.set_gpr(31, 0x08A7E050u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15992));
    goto L_08A7E370;
L_08A7E050:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15992));
        goto L_08A7E090;
    }
    goto L_08A7E05C;
L_08A7E05C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A7E074u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A7E074u) goto L_08A7E074;
    return;
L_08A7E074:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(317));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(229));
    ctx.set_gpr(31, 0x08A7E088u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25060));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A7E088u) goto L_08A7E088;
    return;
L_08A7E088:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16256u << 16u);
      if (branch_taken) {
          goto L_08A7E0D4;
      }
      goto L_08A7E090;
    }
L_08A7E090:
    ctx.set_gpr(31, 0x08A7E098u);
    // nop
    goto L_08A7E370;
L_08A7E098:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A7E0D0;
      }
      goto L_08A7E0A4;
    }
L_08A7E0A4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A7E0BCu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A7E0BCu) goto L_08A7E0BC;
    return;
L_08A7E0BC:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(401));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(229));
    ctx.set_gpr(31, 0x08A7E0D0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25048));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A7E0D0u) goto L_08A7E0D0;
    return;
L_08A7E0D0:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08A7E0D4;
L_08A7E0D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A7E0E8u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A7E0E8u) goto L_08A7E0E8;
    return;
L_08A7E0E8:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(316));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08A7E0FCu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25060));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A7E0FCu) goto L_08A7E0FC;
    return;
L_08A7E0FC:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(400));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08A7E110u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25048));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A7E110u) goto L_08A7E110;
    return;
L_08A7E110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E360;
      }
      goto L_08A7E118;
    }
L_08A7E118:
    ctx.set_gpr(31, 0x08A7E120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7E120u) goto L_08A7E120;
    return;
L_08A7E120:
    ctx.set_gpr(31, 0x08A7E128u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E128u) goto L_08A7E128;
    return;
L_08A7E128:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_08A7E1C8;
    }
    goto L_08A7E130;
L_08A7E130:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A7E144u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A7E144u) goto L_08A7E144;
    return;
L_08A7E144:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(333));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(229));
    ctx.set_gpr(31, 0x08A7E158u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25036));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A7E158u) goto L_08A7E158;
    return;
L_08A7E158:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(413));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(229));
    ctx.set_gpr(31, 0x08A7E16Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25068));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A7E16Cu) goto L_08A7E16C;
    return;
L_08A7E16C:
    ctx.set_gpr(31, 0x08A7E174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7E174u) goto L_08A7E174;
    return;
L_08A7E174:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A7E188u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E188u) goto L_08A7E188;
    return;
L_08A7E188:
    ctx.set_gpr(31, 0x08A7E190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7E190u) goto L_08A7E190;
    return;
L_08A7E190:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A7E1A4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E1A4u) goto L_08A7E1A4;
    return;
L_08A7E1A4:
    ctx.set_gpr(31, 0x08A7E1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7E1ACu) goto L_08A7E1AC;
    return;
L_08A7E1AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A7E1C0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E1C0u) goto L_08A7E1C0;
    return;
L_08A7E1C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E204;
      }
      goto L_08A7E1C8;
    }
L_08A7E1C8:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A7E1DCu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A7E1DCu) goto L_08A7E1DC;
    return;
L_08A7E1DC:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(333));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(229));
    ctx.set_gpr(31, 0x08A7E1F0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25036));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A7E1F0u) goto L_08A7E1F0;
    return;
L_08A7E1F0:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(413));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(229));
    ctx.set_gpr(31, 0x08A7E204u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25068));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A7E204u) goto L_08A7E204;
    return;
L_08A7E204:
    ctx.set_gpr(31, 0x08A7E20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7E20Cu) goto L_08A7E20C;
    return;
L_08A7E20C:
    ctx.set_gpr(31, 0x08A7E214u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E214u) goto L_08A7E214;
    return;
L_08A7E214:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08A7E268;
    }
    goto L_08A7E21C;
L_08A7E21C:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A7E238u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A7E238u) goto L_08A7E238;
    return;
L_08A7E238:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(332));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08A7E24Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25036));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A7E24Cu) goto L_08A7E24C;
    return;
L_08A7E24C:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(412));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08A7E260u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25068));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A7E260u) goto L_08A7E260;
    return;
L_08A7E260:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16256u << 16u);
      if (branch_taken) {
          goto L_08A7E2A8;
      }
      goto L_08A7E268;
    }
L_08A7E268:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A7E27Cu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A7E27Cu) goto L_08A7E27C;
    return;
L_08A7E27C:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(332));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08A7E290u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25036));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A7E290u) goto L_08A7E290;
    return;
L_08A7E290:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(412));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08A7E2A4u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25068));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A7E2A4u) goto L_08A7E2A4;
    return;
L_08A7E2A4:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08A7E2A8;
L_08A7E2A8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A7E2BCu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A7E2BCu) goto L_08A7E2BC;
    return;
L_08A7E2BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E360;
      }
      goto L_08A7E2C4;
    }
L_08A7E2C4:
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
        goto L_08A7E300;
    }
    goto L_08A7E2CC;
L_08A7E2CC:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A7E2E4u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A7E2E4u) goto L_08A7E2E4;
    return;
L_08A7E2E4:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(421));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08A7E2F8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25068));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A7E2F8u) goto L_08A7E2F8;
    return;
L_08A7E2F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E360;
      }
      goto L_08A7E300;
    }
L_08A7E300:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A7E360;
      }
      goto L_08A7E308;
    }
L_08A7E308:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A7E320u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A7E320u) goto L_08A7E320;
    return;
L_08A7E320:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(422));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(229));
    ctx.set_gpr(31, 0x08A7E334u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25068));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A7E334u) goto L_08A7E334;
    return;
L_08A7E334:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A7E34Cu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A7E34Cu) goto L_08A7E34C;
    return;
L_08A7E34C:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(421));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08A7E360u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25068));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A7E360u) goto L_08A7E360;
    return;
L_08A7E360:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A7E364;
L_08A7E364:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E370:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E378:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(166)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E380:
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
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 486u, 0x08846FF8u>(ctx, &aot_mem); return;
L_08A7E3B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(31, 0x08A7E3E8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7E3E8u) goto L_08A7E3E8;
    return;
L_08A7E3E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7E3F4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A7E3F4u) goto L_08A7E3F4;
    return;
L_08A7E3F4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08A7E400u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7E400u) goto L_08A7E400;
    return;
L_08A7E400:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7E40Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A7E40Cu) goto L_08A7E40C;
    return;
L_08A7E40C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08A7E418u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7E418u) goto L_08A7E418;
    return;
L_08A7E418:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7E424u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A7E424u) goto L_08A7E424;
    return;
L_08A7E424:
    ctx.set_gpr(31, 0x08A7E42Cu);
    ctx.set_gpr(30, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7E42Cu) goto L_08A7E42C;
    return;
L_08A7E42C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7E438u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A7E438u) goto L_08A7E438;
    return;
L_08A7E438:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08A7E444u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7E444u) goto L_08A7E444;
    return;
L_08A7E444:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7E450u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A7E450u) goto L_08A7E450;
    return;
L_08A7E450:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08A7E45Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7E45Cu) goto L_08A7E45C;
    return;
L_08A7E45C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7E468u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A7E468u) goto L_08A7E468;
    return;
L_08A7E468:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08A7E474u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7E474u) goto L_08A7E474;
    return;
L_08A7E474:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7E480u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A7E480u) goto L_08A7E480;
    return;
L_08A7E480:
    ctx.set_gpr(31, 0x08A7E488u);
    ctx.set_gpr(20, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7E488u) goto L_08A7E488;
    return;
L_08A7E488:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7E494u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A7E494u) goto L_08A7E494;
    return;
L_08A7E494:
    ctx.set_gpr(31, 0x08A7E49Cu);
    ctx.set_gpr(19, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7E49Cu) goto L_08A7E49C;
    return;
L_08A7E49C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7E4A8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A7E4A8u) goto L_08A7E4A8;
    return;
L_08A7E4A8:
    ctx.set_gpr(31, 0x08A7E4B0u);
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7E4B0u) goto L_08A7E4B0;
    return;
L_08A7E4B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7E4BCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A7E4BCu) goto L_08A7E4BC;
    return;
L_08A7E4BC:
    ctx.set_gpr(31, 0x08A7E4C4u);
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7E4C4u) goto L_08A7E4C4;
    return;
L_08A7E4C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7E4D0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A7E4D0u) goto L_08A7E4D0;
    return;
L_08A7E4D0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08A7E4DCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7E4DCu) goto L_08A7E4DC;
    return;
L_08A7E4DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7E4E8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A7E4E8u) goto L_08A7E4E8;
    return;
L_08A7E4E8:
    ctx.set_gpr(31, 0x08A7E4F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7E4F0u) goto L_08A7E4F0;
    return;
L_08A7E4F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7E4FCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A7E4FCu) goto L_08A7E4FC;
    return;
L_08A7E4FC:
    ctx.set_gpr(31, 0x08A7E504u);
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7E504u) goto L_08A7E504;
    return;
L_08A7E504:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7E510u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A7E510u) goto L_08A7E510;
    return;
L_08A7E510:
    ctx.set_gpr(22, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08A7E51Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7E51Cu) goto L_08A7E51C;
    return;
L_08A7E51C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E52Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E52Cu) goto L_08A7E52C;
    return;
L_08A7E52C:
    ctx.set_gpr(31, 0x08A7E534u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A7E534u) goto L_08A7E534;
    return;
L_08A7E534:
    ctx.set_gpr(31, 0x08A7E53Cu);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7E53Cu) goto L_08A7E53C;
    return;
L_08A7E53C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E54Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E54Cu) goto L_08A7E54C;
    return;
L_08A7E54C:
    ctx.set_gpr(31, 0x08A7E554u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A7F20C;
L_08A7E554:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18320)));
    ctx.set_gpr(31, 0x08A7E564u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7E564u) goto L_08A7E564;
    return;
L_08A7E564:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E574u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E574u) goto L_08A7E574;
    return;
L_08A7E574:
    ctx.set_gpr(31, 0x08A7E57Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A7E57Cu) goto L_08A7E57C;
    return;
L_08A7E57C:
    ctx.set_gpr(31, 0x08A7E584u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18316), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7E584u) goto L_08A7E584;
    return;
L_08A7E584:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E594u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E594u) goto L_08A7E594;
    return;
L_08A7E594:
    ctx.set_gpr(31, 0x08A7E59Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A7F204;
L_08A7E59C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18324), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18320)));
        goto L_08A7EA54;
    }
    goto L_08A7E5AC;
L_08A7E5AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18320)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A7E8E8;
      }
      goto L_08A7E5BC;
    }
L_08A7E5BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A7E7B8;
      }
      goto L_08A7E5C8;
    }
L_08A7E5C8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E5D8;
      }
      goto L_08A7E5D0;
    }
L_08A7E5D0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18320)));
      if (branch_taken) {
          goto L_08A7EDFC;
      }
      goto L_08A7E5D8;
    }
L_08A7E5D8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E608;
      }
      goto L_08A7E5E0;
    }
L_08A7E5E0:
    ctx.set_gpr(31, 0x08A7E5E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E5E8u) goto L_08A7E5E8;
    return;
L_08A7E5E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E5FCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E5FCu) goto L_08A7E5FC;
    return;
L_08A7E5FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7E608;
    }
L_08A7E608:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E6A0;
      }
      goto L_08A7E610;
    }
L_08A7E610:
    ctx.set_gpr(31, 0x08A7E618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7E618u) goto L_08A7E618;
    return;
L_08A7E618:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E628u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E628u) goto L_08A7E628;
    return;
L_08A7E628:
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A7E634u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A7F1E8;
L_08A7E634:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E67C;
      }
      goto L_08A7E63C;
    }
L_08A7E63C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18320)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[5]) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
        goto L_08A7E658;
    }
    goto L_08A7E64C;
L_08A7E64C:
    ctx.set_gpr(31, 0x08A7E654u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08A7DA9C;
L_08A7E654:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    goto L_08A7E658;
L_08A7E658:
    ctx.set_gpr(31, 0x08A7E660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E660u) goto L_08A7E660;
    return;
L_08A7E660:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E674u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E674u) goto L_08A7E674;
    return;
L_08A7E674:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A7F1B0;
      }
      goto L_08A7E67C;
    }
L_08A7E67C:
    ctx.set_gpr(31, 0x08A7E684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E684u) goto L_08A7E684;
    return;
L_08A7E684:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E698u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E698u) goto L_08A7E698;
    return;
L_08A7E698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7E6A0;
    }
L_08A7E6A0:
    if (ctx.gpr[17] != 0u) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
        goto L_08A7E6B4;
    }
    goto L_08A7E6A8;
L_08A7E6A8:
    if (ctx.gpr[18] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08A7E6D8;
    }
    goto L_08A7E6B0;
L_08A7E6B0:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    goto L_08A7E6B4;
L_08A7E6B4:
    ctx.set_gpr(31, 0x08A7E6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E6BCu) goto L_08A7E6BC;
    return;
L_08A7E6BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E6D0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E6D0u) goto L_08A7E6D0;
    return;
L_08A7E6D0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7F1B0;
      }
      goto L_08A7E6D8;
    }
L_08A7E6D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E780;
      }
      goto L_08A7E6E0;
    }
L_08A7E6E0:
    ctx.set_gpr(31, 0x08A7E6E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7E6E8u) goto L_08A7E6E8;
    return;
L_08A7E6E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E6F8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E6F8u) goto L_08A7E6F8;
    return;
L_08A7E6F8:
    ctx.set_gpr(31, 0x08A7E700u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 684u, 0x08AF2BECu>(ctx, &aot_mem) && ctx.pc == 0x08A7E700u) goto L_08A7E700;
    return;
L_08A7E700:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7E708;
    }
L_08A7E708:
    ctx.set_gpr(31, 0x08A7E710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7E710u) goto L_08A7E710;
    return;
L_08A7E710:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E720u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E720u) goto L_08A7E720;
    return;
L_08A7E720:
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A7E72Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A7F1E8;
L_08A7E72C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E75C;
      }
      goto L_08A7E734;
    }
L_08A7E734:
    ctx.set_gpr(31, 0x08A7E73Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E73Cu) goto L_08A7E73C;
    return;
L_08A7E73C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E750u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E750u) goto L_08A7E750;
    return;
L_08A7E750:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7E75C;
    }
L_08A7E75C:
    ctx.set_gpr(31, 0x08A7E764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E764u) goto L_08A7E764;
    return;
L_08A7E764:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E778u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E778u) goto L_08A7E778;
    return;
L_08A7E778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7E780;
    }
L_08A7E780:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A7E794;
    }
    goto L_08A7E788;
L_08A7E788:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7E790;
    }
L_08A7E790:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A7E794;
L_08A7E794:
    ctx.set_gpr(31, 0x08A7E79Cu);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E79Cu) goto L_08A7E79C;
    return;
L_08A7E79C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E7B0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E7B0u) goto L_08A7E7B0;
    return;
L_08A7E7B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7E7B8;
    }
L_08A7E7B8:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E7C8;
      }
      goto L_08A7E7C0;
    }
L_08A7E7C0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E858;
      }
      goto L_08A7E7C8;
    }
L_08A7E7C8:
    ctx.set_gpr(31, 0x08A7E7D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7E7D0u) goto L_08A7E7D0;
    return;
L_08A7E7D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E7E0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E7E0u) goto L_08A7E7E0;
    return;
L_08A7E7E0:
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A7E7ECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A7F1E8;
L_08A7E7EC:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
        goto L_08A7E834;
    }
    goto L_08A7E7F4;
L_08A7E7F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18320)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[5]) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
        goto L_08A7E810;
    }
    goto L_08A7E804;
L_08A7E804:
    ctx.set_gpr(31, 0x08A7E80Cu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08A7DA9C;
L_08A7E80C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    goto L_08A7E810;
L_08A7E810:
    ctx.set_gpr(31, 0x08A7E818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E818u) goto L_08A7E818;
    return;
L_08A7E818:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E82Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E82Cu) goto L_08A7E82C;
    return;
L_08A7E82C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A7F1B0;
      }
      goto L_08A7E834;
    }
L_08A7E834:
    ctx.set_gpr(31, 0x08A7E83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E83Cu) goto L_08A7E83C;
    return;
L_08A7E83C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E850u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E850u) goto L_08A7E850;
    return;
L_08A7E850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7E858;
    }
L_08A7E858:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E884;
      }
      goto L_08A7E860;
    }
L_08A7E860:
    ctx.set_gpr(31, 0x08A7E868u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E868u) goto L_08A7E868;
    return;
L_08A7E868:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E87Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E87Cu) goto L_08A7E87C;
    return;
L_08A7E87C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7E884;
    }
L_08A7E884:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E8B0;
      }
      goto L_08A7E88C;
    }
L_08A7E88C:
    ctx.set_gpr(31, 0x08A7E894u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E894u) goto L_08A7E894;
    return;
L_08A7E894:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E8A8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E8A8u) goto L_08A7E8A8;
    return;
L_08A7E8A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7F1B0;
      }
      goto L_08A7E8B0;
    }
L_08A7E8B0:
    if (ctx.gpr[16] != 0u) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
        goto L_08A7E8C4;
    }
    goto L_08A7E8B8;
L_08A7E8B8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7E8C0;
    }
L_08A7E8C0:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    goto L_08A7E8C4;
L_08A7E8C4:
    ctx.set_gpr(31, 0x08A7E8CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E8CCu) goto L_08A7E8CC;
    return;
L_08A7E8CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E8E0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E8E0u) goto L_08A7E8E0;
    return;
L_08A7E8E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7E8E8;
    }
L_08A7E8E8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E92C;
      }
      goto L_08A7E8F0;
    }
L_08A7E8F0:
    if (ctx.gpr[3] != 0u) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
        goto L_08A7E908;
    }
    goto L_08A7E8F8;
L_08A7E8F8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A7E904u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08A7DA9C;
L_08A7E904:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    goto L_08A7E908;
L_08A7E908:
    ctx.set_gpr(31, 0x08A7E910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E910u) goto L_08A7E910;
    return;
L_08A7E910:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E924u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E924u) goto L_08A7E924;
    return;
L_08A7E924:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7F1B0;
      }
      goto L_08A7E92C;
    }
L_08A7E92C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E9C4;
      }
      goto L_08A7E934;
    }
L_08A7E934:
    ctx.set_gpr(31, 0x08A7E93Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7E93Cu) goto L_08A7E93C;
    return;
L_08A7E93C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E94Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E94Cu) goto L_08A7E94C;
    return;
L_08A7E94C:
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A7E958u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A7F1E8;
L_08A7E958:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
        goto L_08A7E9A0;
    }
    goto L_08A7E960;
L_08A7E960:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18320)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[5]) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
        goto L_08A7E97C;
    }
    goto L_08A7E970;
L_08A7E970:
    ctx.set_gpr(31, 0x08A7E978u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08A7DA9C;
L_08A7E978:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    goto L_08A7E97C;
L_08A7E97C:
    ctx.set_gpr(31, 0x08A7E984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E984u) goto L_08A7E984;
    return;
L_08A7E984:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E998u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E998u) goto L_08A7E998;
    return;
L_08A7E998:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A7F1B0;
      }
      goto L_08A7E9A0;
    }
L_08A7E9A0:
    ctx.set_gpr(31, 0x08A7E9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E9A8u) goto L_08A7E9A8;
    return;
L_08A7E9A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E9BCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E9BCu) goto L_08A7E9BC;
    return;
L_08A7E9BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7E9C4;
    }
L_08A7E9C4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E9F0;
      }
      goto L_08A7E9CC;
    }
L_08A7E9CC:
    ctx.set_gpr(31, 0x08A7E9D4u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E9D4u) goto L_08A7E9D4;
    return;
L_08A7E9D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7E9E8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E9E8u) goto L_08A7E9E8;
    return;
L_08A7E9E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7E9F0;
    }
L_08A7E9F0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EA1C;
      }
      goto L_08A7E9F8;
    }
L_08A7E9F8:
    ctx.set_gpr(31, 0x08A7EA00u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EA00u) goto L_08A7EA00;
    return;
L_08A7EA00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EA14u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EA14u) goto L_08A7EA14;
    return;
L_08A7EA14:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7F1B0;
      }
      goto L_08A7EA1C;
    }
L_08A7EA1C:
    if (ctx.gpr[16] != 0u) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
        goto L_08A7EA30;
    }
    goto L_08A7EA24;
L_08A7EA24:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7EA2C;
    }
L_08A7EA2C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    goto L_08A7EA30;
L_08A7EA30:
    ctx.set_gpr(31, 0x08A7EA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EA38u) goto L_08A7EA38;
    return;
L_08A7EA38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EA4Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EA4Cu) goto L_08A7EA4C;
    return;
L_08A7EA4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7EA54;
    }
L_08A7EA54:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A7ED00;
      }
      goto L_08A7EA60;
    }
L_08A7EA60:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7EC04;
      }
      goto L_08A7EA6C;
    }
L_08A7EA6C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EA7C;
      }
      goto L_08A7EA74;
    }
L_08A7EA74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7EA7C;
    }
L_08A7EA7C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EB00;
      }
      goto L_08A7EA84;
    }
L_08A7EA84:
    ctx.set_gpr(31, 0x08A7EA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7EA8Cu) goto L_08A7EA8C;
    return;
L_08A7EA8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EA9Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EA9Cu) goto L_08A7EA9C;
    return;
L_08A7EA9C:
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A7EAA8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A7F1E8;
L_08A7EAA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EADC;
      }
      goto L_08A7EAB0;
    }
L_08A7EAB0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A7EABCu);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EABCu) goto L_08A7EABC;
    return;
L_08A7EABC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EAD0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EAD0u) goto L_08A7EAD0;
    return;
L_08A7EAD0:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(18301), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A7F1B0;
      }
      goto L_08A7EADC;
    }
L_08A7EADC:
    ctx.set_gpr(31, 0x08A7EAE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EAE4u) goto L_08A7EAE4;
    return;
L_08A7EAE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EAF8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EAF8u) goto L_08A7EAF8;
    return;
L_08A7EAF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7EB00;
    }
L_08A7EB00:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EB40;
      }
      goto L_08A7EB08;
    }
L_08A7EB08:
    if (ctx.gpr[3] == ctx.gpr[5]) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
        goto L_08A7EB1C;
    }
    goto L_08A7EB10;
L_08A7EB10:
    ctx.set_gpr(31, 0x08A7EB18u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08A7DA9C;
L_08A7EB18:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    goto L_08A7EB1C;
L_08A7EB1C:
    ctx.set_gpr(31, 0x08A7EB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EB24u) goto L_08A7EB24;
    return;
L_08A7EB24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EB38u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EB38u) goto L_08A7EB38;
    return;
L_08A7EB38:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08A7F1B0;
      }
      goto L_08A7EB40;
    }
L_08A7EB40:
    if (ctx.gpr[17] != 0u) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
        goto L_08A7EB54;
    }
    goto L_08A7EB48;
L_08A7EB48:
    if (ctx.gpr[18] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08A7EB78;
    }
    goto L_08A7EB50;
L_08A7EB50:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    goto L_08A7EB54;
L_08A7EB54:
    ctx.set_gpr(31, 0x08A7EB5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EB5Cu) goto L_08A7EB5C;
    return;
L_08A7EB5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EB70u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EB70u) goto L_08A7EB70;
    return;
L_08A7EB70:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7F1B0;
      }
      goto L_08A7EB78;
    }
L_08A7EB78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EBCC;
      }
      goto L_08A7EB80;
    }
L_08A7EB80:
    ctx.set_gpr(31, 0x08A7EB88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7EB88u) goto L_08A7EB88;
    return;
L_08A7EB88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EB98u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EB98u) goto L_08A7EB98;
    return;
L_08A7EB98:
    ctx.set_gpr(31, 0x08A7EBA0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 684u, 0x08AF2BECu>(ctx, &aot_mem) && ctx.pc == 0x08A7EBA0u) goto L_08A7EBA0;
    return;
L_08A7EBA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7EBA8;
    }
L_08A7EBA8:
    ctx.set_gpr(31, 0x08A7EBB0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EBB0u) goto L_08A7EBB0;
    return;
L_08A7EBB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EBC4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EBC4u) goto L_08A7EBC4;
    return;
L_08A7EBC4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A7F1B0;
      }
      goto L_08A7EBCC;
    }
L_08A7EBCC:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A7EBE0;
    }
    goto L_08A7EBD4;
L_08A7EBD4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7EBDC;
    }
L_08A7EBDC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A7EBE0;
L_08A7EBE0:
    ctx.set_gpr(31, 0x08A7EBE8u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EBE8u) goto L_08A7EBE8;
    return;
L_08A7EBE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EBFCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EBFCu) goto L_08A7EBFC;
    return;
L_08A7EBFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7EC04;
    }
L_08A7EC04:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EC30;
      }
      goto L_08A7EC0C;
    }
L_08A7EC0C:
    ctx.set_gpr(31, 0x08A7EC14u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EC14u) goto L_08A7EC14;
    return;
L_08A7EC14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EC28u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EC28u) goto L_08A7EC28;
    return;
L_08A7EC28:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08A7F1B0;
      }
      goto L_08A7EC30;
    }
L_08A7EC30:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EC70;
      }
      goto L_08A7EC38;
    }
L_08A7EC38:
    if (ctx.gpr[3] == ctx.gpr[5]) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
        goto L_08A7EC4C;
    }
    goto L_08A7EC40;
L_08A7EC40:
    ctx.set_gpr(31, 0x08A7EC48u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08A7DA9C;
L_08A7EC48:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    goto L_08A7EC4C;
L_08A7EC4C:
    ctx.set_gpr(31, 0x08A7EC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EC54u) goto L_08A7EC54;
    return;
L_08A7EC54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EC68u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EC68u) goto L_08A7EC68;
    return;
L_08A7EC68:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08A7F1B0;
      }
      goto L_08A7EC70;
    }
L_08A7EC70:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EC9C;
      }
      goto L_08A7EC78;
    }
L_08A7EC78:
    ctx.set_gpr(31, 0x08A7EC80u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EC80u) goto L_08A7EC80;
    return;
L_08A7EC80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EC94u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EC94u) goto L_08A7EC94;
    return;
L_08A7EC94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7EC9C;
    }
L_08A7EC9C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7ECC8;
      }
      goto L_08A7ECA4;
    }
L_08A7ECA4:
    ctx.set_gpr(31, 0x08A7ECACu);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7ECACu) goto L_08A7ECAC;
    return;
L_08A7ECAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7ECC0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7ECC0u) goto L_08A7ECC0;
    return;
L_08A7ECC0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7F1B0;
      }
      goto L_08A7ECC8;
    }
L_08A7ECC8:
    if (ctx.gpr[16] != 0u) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
        goto L_08A7ECDC;
    }
    goto L_08A7ECD0;
L_08A7ECD0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7ECD8;
    }
L_08A7ECD8:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    goto L_08A7ECDC;
L_08A7ECDC:
    ctx.set_gpr(31, 0x08A7ECE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7ECE4u) goto L_08A7ECE4;
    return;
L_08A7ECE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7ECF8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7ECF8u) goto L_08A7ECF8;
    return;
L_08A7ECF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7ED00;
    }
L_08A7ED00:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7ED2C;
      }
      goto L_08A7ED08;
    }
L_08A7ED08:
    ctx.set_gpr(31, 0x08A7ED10u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7ED10u) goto L_08A7ED10;
    return;
L_08A7ED10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7ED24u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7ED24u) goto L_08A7ED24;
    return;
L_08A7ED24:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7F1B0;
      }
      goto L_08A7ED2C;
    }
L_08A7ED2C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7ED70;
      }
      goto L_08A7ED34;
    }
L_08A7ED34:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[5]) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
        goto L_08A7ED4C;
    }
    goto L_08A7ED40;
L_08A7ED40:
    ctx.set_gpr(31, 0x08A7ED48u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08A7DA9C;
L_08A7ED48:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    goto L_08A7ED4C;
L_08A7ED4C:
    ctx.set_gpr(31, 0x08A7ED54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7ED54u) goto L_08A7ED54;
    return;
L_08A7ED54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7ED68u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7ED68u) goto L_08A7ED68;
    return;
L_08A7ED68:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08A7F1B0;
      }
      goto L_08A7ED70;
    }
L_08A7ED70:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7ED9C;
      }
      goto L_08A7ED78;
    }
L_08A7ED78:
    ctx.set_gpr(31, 0x08A7ED80u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7ED80u) goto L_08A7ED80;
    return;
L_08A7ED80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7ED94u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7ED94u) goto L_08A7ED94;
    return;
L_08A7ED94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7ED9C;
    }
L_08A7ED9C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDC8;
      }
      goto L_08A7EDA4;
    }
L_08A7EDA4:
    ctx.set_gpr(31, 0x08A7EDACu);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EDACu) goto L_08A7EDAC;
    return;
L_08A7EDAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EDC0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EDC0u) goto L_08A7EDC0;
    return;
L_08A7EDC0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7F1B0;
      }
      goto L_08A7EDC8;
    }
L_08A7EDC8:
    if (ctx.gpr[16] != 0u) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
        goto L_08A7EDDC;
    }
    goto L_08A7EDD0;
L_08A7EDD0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF8;
      }
      goto L_08A7EDD8;
    }
L_08A7EDD8:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), 0u);
    goto L_08A7EDDC;
L_08A7EDDC:
    ctx.set_gpr(31, 0x08A7EDE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EDE4u) goto L_08A7EDE4;
    return;
L_08A7EDE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EDF8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EDF8u) goto L_08A7EDF8;
    return;
L_08A7EDF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18320)));
    goto L_08A7EDFC;
L_08A7EDFC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_08A7EFD0;
    }
    goto L_08A7EE08;
L_08A7EE08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A7EFA4;
      }
      goto L_08A7EE14;
    }
L_08A7EE14:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_08A7EE24;
    }
    goto L_08A7EE1C;
L_08A7EE1C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18320)));
      if (branch_taken) {
          goto L_08A7EFFC;
      }
      goto L_08A7EE24;
    }
L_08A7EE24:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_08A7EE6C;
    }
    goto L_08A7EE2C;
L_08A7EE2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18316)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
        goto L_08A7EE64;
    }
    goto L_08A7EE38;
L_08A7EE38:
    ctx.set_gpr(31, 0x08A7EE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7EE40u) goto L_08A7EE40;
    return;
L_08A7EE40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EE50u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EE50u) goto L_08A7EE50;
    return;
L_08A7EE50:
    ctx.set_gpr(31, 0x08A7EE58u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A7F20C;
L_08A7EE58:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18316), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7EFF8;
      }
      goto L_08A7EE64;
    }
L_08A7EE64:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18316), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7EFF8;
      }
      goto L_08A7EE6C;
    }
L_08A7EE6C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_08A7EEB4;
    }
    goto L_08A7EE74;
L_08A7EE74:
    ctx.set_gpr(31, 0x08A7EE7Cu);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18316)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7EE7Cu) goto L_08A7EE7C;
    return;
L_08A7EE7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EE8Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EE8Cu) goto L_08A7EE8C;
    return;
L_08A7EE8C:
    ctx.set_gpr(31, 0x08A7EE94u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A7F20C;
L_08A7EE94:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18316)));
        goto L_08A7EEA8;
    }
    goto L_08A7EEA0;
L_08A7EEA0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18316), 0u);
      if (branch_taken) {
          goto L_08A7EFF8;
      }
      goto L_08A7EEA8;
    }
L_08A7EEA8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18316), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7EFF8;
      }
      goto L_08A7EEB4;
    }
L_08A7EEB4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_08A7EED4;
    }
    goto L_08A7EEBC;
L_08A7EEBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18316)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EFF8;
      }
      goto L_08A7EEC8;
    }
L_08A7EEC8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18316), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7EFF8;
      }
      goto L_08A7EED4;
    }
L_08A7EED4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EF18;
      }
      goto L_08A7EEDC;
    }
L_08A7EEDC:
    ctx.set_gpr(31, 0x08A7EEE4u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18316)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7EEE4u) goto L_08A7EEE4;
    return;
L_08A7EEE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EEF4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EEF4u) goto L_08A7EEF4;
    return;
L_08A7EEF4:
    ctx.set_gpr(31, 0x08A7EEFCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A7F20C;
L_08A7EEFC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A7EFF8;
      }
      goto L_08A7EF08;
    }
L_08A7EF08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18316)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18316), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7EFF8;
      }
      goto L_08A7EF18;
    }
L_08A7EF18:
    if (ctx.gpr[30] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_08A7EF38;
    }
    goto L_08A7EF20;
L_08A7EF20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18316)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18316), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7EFF8;
      }
      goto L_08A7EF30;
    }
L_08A7EF30:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18316), 0u);
      if (branch_taken) {
          goto L_08A7EFF8;
      }
      goto L_08A7EF38;
    }
L_08A7EF38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EFF8;
      }
      goto L_08A7EF40;
    }
L_08A7EF40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18316)));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08A7EF50u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18316), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7EF50u) goto L_08A7EF50;
    return;
L_08A7EF50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EF60u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EF60u) goto L_08A7EF60;
    return;
L_08A7EF60:
    ctx.set_gpr(31, 0x08A7EF68u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A7F20C;
L_08A7EF68:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EFF8;
      }
      goto L_08A7EF78;
    }
L_08A7EF78:
    ctx.set_gpr(31, 0x08A7EF80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7EF80u) goto L_08A7EF80;
    return;
L_08A7EF80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EF90u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EF90u) goto L_08A7EF90;
    return;
L_08A7EF90:
    ctx.set_gpr(31, 0x08A7EF98u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A7F20C;
L_08A7EF98:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18316), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7EFF8;
      }
      goto L_08A7EFA4;
    }
L_08A7EFA4:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EFF8;
      }
      goto L_08A7EFAC;
    }
L_08A7EFAC:
    ctx.set_gpr(31, 0x08A7EFB4u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EFB4u) goto L_08A7EFB4;
    return;
L_08A7EFB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EFC8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EFC8u) goto L_08A7EFC8;
    return;
L_08A7EFC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EFF8;
      }
      goto L_08A7EFD0;
    }
L_08A7EFD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EFF8;
      }
      goto L_08A7EFD8;
    }
L_08A7EFD8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A7EFE4u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(18320), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EFE4u) goto L_08A7EFE4;
    return;
L_08A7EFE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7EFF8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EFF8u) goto L_08A7EFF8;
    return;
L_08A7EFF8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18320)));
    goto L_08A7EFFC;
L_08A7EFFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18316)));
        goto L_08A7F070;
    }
    goto L_08A7F008;
L_08A7F008:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F03C;
      }
      goto L_08A7F010;
    }
L_08A7F010:
    ctx.set_gpr(31, 0x08A7F018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7F018u) goto L_08A7F018;
    return;
L_08A7F018:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7F028u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7F028u) goto L_08A7F028;
    return;
L_08A7F028:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7F034u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A7F1E0;
L_08A7F034:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18320)));
      if (branch_taken) {
          goto L_08A7F064;
      }
      goto L_08A7F03C;
    }
L_08A7F03C:
    ctx.set_gpr(31, 0x08A7F044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7F044u) goto L_08A7F044;
    return;
L_08A7F044:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7F054u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7F054u) goto L_08A7F054;
    return;
L_08A7F054:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7F060u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08A7F1E0;
L_08A7F060:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18320)));
    goto L_08A7F064;
L_08A7F064:
    ctx.set_gpr(31, 0x08A7F06Cu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08A7DA9C;
L_08A7F06C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18316)));
    goto L_08A7F070;
L_08A7F070:
    ctx.set_gpr(31, 0x08A7F078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7F078u) goto L_08A7F078;
    return;
L_08A7F078:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7F088u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7F088u) goto L_08A7F088;
    return;
L_08A7F088:
    ctx.set_gpr(31, 0x08A7F090u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A7F090u) goto L_08A7F090;
    return;
L_08A7F090:
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_08A7F178;
    }
    goto L_08A7F098;
L_08A7F098:
    ctx.set_gpr(31, 0x08A7F0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7F0A0u) goto L_08A7F0A0;
    return;
L_08A7F0A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7F0B0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7F0B0u) goto L_08A7F0B0;
    return;
L_08A7F0B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7F0BCu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2938u>(ctx, &aot_mem) && ctx.pc == 0x08A7F0BCu) goto L_08A7F0BC;
    return;
L_08A7F0BC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18324)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18316)));
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
        goto L_08A7F100;
    }
    goto L_08A7F0D4;
L_08A7F0D4:
    ctx.set_gpr(31, 0x08A7F0DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7F0DCu) goto L_08A7F0DC;
    return;
L_08A7F0DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7F0ECu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7F0ECu) goto L_08A7F0EC;
    return;
L_08A7F0EC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(-5));
    ctx.set_gpr(31, 0x08A7F0F8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 650u, 0x08AF29B4u>(ctx, &aot_mem) && ctx.pc == 0x08A7F0F8u) goto L_08A7F0F8;
    return;
L_08A7F0F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F158;
      }
      goto L_08A7F100;
    }
L_08A7F100:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F134;
      }
      goto L_08A7F108;
    }
L_08A7F108:
    ctx.set_gpr(31, 0x08A7F110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7F110u) goto L_08A7F110;
    return;
L_08A7F110:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7F120u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7F120u) goto L_08A7F120;
    return;
L_08A7F120:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7F12Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 650u, 0x08AF29B4u>(ctx, &aot_mem) && ctx.pc == 0x08A7F12Cu) goto L_08A7F12C;
    return;
L_08A7F12C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F158;
      }
      goto L_08A7F134;
    }
L_08A7F134:
    ctx.set_gpr(31, 0x08A7F13Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7F13Cu) goto L_08A7F13C;
    return;
L_08A7F13C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7F14Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7F14Cu) goto L_08A7F14C;
    return;
L_08A7F14C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7F158u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 650u, 0x08AF29B4u>(ctx, &aot_mem) && ctx.pc == 0x08A7F158u) goto L_08A7F158;
    return;
L_08A7F158:
    ctx.set_gpr(31, 0x08A7F160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7F160u) goto L_08A7F160;
    return;
L_08A7F160:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7F174u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7F174u) goto L_08A7F174;
    return;
L_08A7F174:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08A7F178;
L_08A7F178:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 7 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_08A7F1AC;
    }
    goto L_08A7F184;
L_08A7F184:
    ctx.set_gpr(31, 0x08A7F18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7F18Cu) goto L_08A7F18C;
    return;
L_08A7F18C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7F19Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7F19Cu) goto L_08A7F19C;
    return;
L_08A7F19C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7F1A8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 650u, 0x08AF29B4u>(ctx, &aot_mem) && ctx.pc == 0x08A7F1A8u) goto L_08A7F1A8;
    return;
L_08A7F1A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_08A7F1AC;
L_08A7F1AC:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(18301), static_cast<std::uint8_t>(0u));
    goto L_08A7F1B0;
L_08A7F1B0:
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
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F1E0:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F1E8:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F204:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F20C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F214:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A7F248u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7F248u) goto L_08A7F248;
    return;
L_08A7F248:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08A7F25Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7F25Cu) goto L_08A7F25C;
    return;
L_08A7F25C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18128)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(18) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18301)));
        goto L_08A7F6BC;
    }
    goto L_08A7F26C;
L_08A7F26C:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26956));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F288:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A7F298u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    goto L_08A7F938;
L_08A7F298:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F2A4;
    }
L_08A7F2A4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F2AC;
    }
L_08A7F2AC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A7F2C0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 454u, 0x08A91BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A7F2C0u) goto L_08A7F2C0;
    return;
L_08A7F2C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F2C8;
    }
L_08A7F2C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18460), 0u);
      if (branch_taken) {
          goto L_08A7F2DC;
      }
      goto L_08A7F2D4;
    }
L_08A7F2D4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18128), 0u);
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F2DC;
    }
L_08A7F2DC:
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(15));
        goto L_08A7F2F0;
    }
    goto L_08A7F2E8;
L_08A7F2E8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A7F7A8;
      }
      goto L_08A7F2F0;
    }
L_08A7F2F0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18128), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F2F8;
    }
L_08A7F2F8:
    ctx.set_gpr(31, 0x08A7F300u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 165u, 0x08A80734u>(ctx, &aot_mem) && ctx.pc == 0x08A7F300u) goto L_08A7F300;
    return;
L_08A7F300:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A7F3D0;
    }
    goto L_08A7F30C;
L_08A7F30C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18124)));
        goto L_08A7F328;
    }
    goto L_08A7F318;
L_08A7F318:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F320;
    }
L_08A7F320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F328;
    }
L_08A7F328:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (ctx.gpr[2] != ctx.gpr[5]) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18141)));
        goto L_08A7F368;
    }
    goto L_08A7F334;
L_08A7F334:
    ctx.set_gpr(31, 0x08A7F33Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A7F33Cu) goto L_08A7F33C;
    return;
L_08A7F33C:
    ctx.set_gpr(31, 0x08A7F344u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A7F344u) goto L_08A7F344;
    return;
L_08A7F344:
    ctx.set_gpr(31, 0x08A7F34Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A7F34Cu) goto L_08A7F34C;
    return;
L_08A7F34C:
    ctx.set_gpr(31, 0x08A7F354u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A7F354u) goto L_08A7F354;
    return;
L_08A7F354:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A7F360u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    goto L_08A7F7F8;
L_08A7F360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F368;
    }
L_08A7F368:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A7F3A4;
    }
    goto L_08A7F370;
L_08A7F370:
    ctx.set_gpr(31, 0x08A7F378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A7F378u) goto L_08A7F378;
    return;
L_08A7F378:
    ctx.set_gpr(31, 0x08A7F380u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A7F380u) goto L_08A7F380;
    return;
L_08A7F380:
    ctx.set_gpr(31, 0x08A7F388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A7F388u) goto L_08A7F388;
    return;
L_08A7F388:
    ctx.set_gpr(31, 0x08A7F390u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A7F390u) goto L_08A7F390;
    return;
L_08A7F390:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A7F39Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    goto L_08A7F7F8;
L_08A7F39C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F3A4;
    }
L_08A7F3A4:
    ctx.set_gpr(31, 0x08A7F3ACu);
    // nop
    goto L_08A7F7F8;
L_08A7F3AC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18302)));
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18216), 0u);
        goto L_08A7F3C0;
    }
    goto L_08A7F3B8;
L_08A7F3B8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18216), ctx.gpr[2]);
    goto L_08A7F3C0;
L_08A7F3C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18220), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F3D0;
    }
L_08A7F3D0:
    ctx.set_gpr(31, 0x08A7F3D8u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A7F7F8;
L_08A7F3D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F3E0;
    }
L_08A7F3E0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A7F3F4u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 1043u, 0x08A8BD14u>(ctx, &aot_mem) && ctx.pc == 0x08A7F3F4u) goto L_08A7F3F4;
    return;
L_08A7F3F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F3FC;
    }
L_08A7F3FC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A7F428;
      }
      goto L_08A7F408;
    }
L_08A7F408:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18216), 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A7F420u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18248), 0u);
    goto L_08A7F7F8;
L_08A7F420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F428;
    }
L_08A7F428:
    ctx.set_gpr(31, 0x08A7F430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7F430u) goto L_08A7F430;
    return;
L_08A7F430:
    ctx.set_gpr(31, 0x08A7F438u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A7F438u) goto L_08A7F438;
    return;
L_08A7F438:
    ctx.set_gpr(31, 0x08A7F440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A7F440u) goto L_08A7F440;
    return;
L_08A7F440:
    ctx.set_gpr(31, 0x08A7F448u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A7F448u) goto L_08A7F448;
    return;
L_08A7F448:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7F458u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), 0u);
    goto L_08A7F7F0;
L_08A7F458:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A7F464u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    goto L_08A7F7F8;
L_08A7F464:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F46C;
    }
L_08A7F46C:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15992));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(18396));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A7F488u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 763u, 0x08AE2988u>(ctx, &aot_mem) && ctx.pc == 0x08A7F488u) goto L_08A7F488;
    return;
L_08A7F488:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F490;
    }
L_08A7F490:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18396)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A7F4B8;
    }
    goto L_08A7F49C;
L_08A7F49C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A7F4B0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08A7F7F8;
L_08A7F4B0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18396), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F4B8;
    }
L_08A7F4B8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A7F4C4u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18248), 0u);
    goto L_08A7F7F8;
L_08A7F4C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F4CC;
    }
L_08A7F4CC:
    ctx.set_gpr(31, 0x08A7F4D4u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 423u, 0x08A813C0u>(ctx, &aot_mem) && ctx.pc == 0x08A7F4D4u) goto L_08A7F4D4;
    return;
L_08A7F4D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F4DC;
    }
L_08A7F4DC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A7F4F0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 151u, 0x08A88AA4u>(ctx, &aot_mem) && ctx.pc == 0x08A7F4F0u) goto L_08A7F4F0;
    return;
L_08A7F4F0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18128)));
        goto L_08A7F500;
    }
    goto L_08A7F4F8;
L_08A7F4F8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A7F7A8;
      }
      goto L_08A7F500;
    }
L_08A7F500:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F50C;
    }
L_08A7F50C:
    ctx.set_gpr(31, 0x08A7F514u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 38u, 0x08A94354u>(ctx, &aot_mem) && ctx.pc == 0x08A7F514u) goto L_08A7F514;
    return;
L_08A7F514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F51C;
    }
L_08A7F51C:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(72));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A7F530u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 78u, 0x08AA063Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7F530u) goto L_08A7F530;
    return;
L_08A7F530:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F538;
    }
L_08A7F538:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A7F54Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    goto L_08A7F7F8;
L_08A7F54C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F554;
    }
L_08A7F554:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15992));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A7F568u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 542u, 0x08ADA2D8u>(ctx, &aot_mem) && ctx.pc == 0x08A7F568u) goto L_08A7F568;
    return;
L_08A7F568:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F570;
    }
L_08A7F570:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A7F584u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    goto L_08A7F7F8;
L_08A7F584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F58C;
    }
L_08A7F58C:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16328));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A7F5A0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 673u, 0x08AE6414u>(ctx, &aot_mem) && ctx.pc == 0x08A7F5A0u) goto L_08A7F5A0;
    return;
L_08A7F5A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F5A8;
    }
L_08A7F5A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A7F5BCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    goto L_08A7F7F8;
L_08A7F5BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F5C4;
    }
L_08A7F5C4:
    ctx.set_gpr(31, 0x08A7F5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7F5CCu) goto L_08A7F5CC;
    return;
L_08A7F5CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A7F5E0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7F5E0u) goto L_08A7F5E0;
    return;
L_08A7F5E0:
    ctx.set_gpr(31, 0x08A7F5E8u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 582u, 0x08A89F08u>(ctx, &aot_mem) && ctx.pc == 0x08A7F5E8u) goto L_08A7F5E8;
    return;
L_08A7F5E8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18476)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A7F608;
    }
    goto L_08A7F5F4;
L_08A7F5F4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A7F600u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    goto L_08A7F7F8;
L_08A7F600:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A7F618;
      }
      goto L_08A7F608;
    }
L_08A7F608:
    ctx.set_gpr(31, 0x08A7F610u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    goto L_08A7F7F8;
L_08A7F610:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18476), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    goto L_08A7F618;
L_08A7F618:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F624;
    }
L_08A7F624:
    ctx.set_gpr(31, 0x08A7F62Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 593u, 0x08A89FA0u>(ctx, &aot_mem) && ctx.pc == 0x08A7F62Cu) goto L_08A7F62C;
    return;
L_08A7F62C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F634;
    }
L_08A7F634:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A7F640u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    goto L_08A7F7F8;
L_08A7F640:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F650;
    }
L_08A7F650:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15840));
    ctx.set_gpr(31, 0x08A7F65Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 1032u, 0x08AA7C44u>(ctx, &aot_mem) && ctx.pc == 0x08A7F65Cu) goto L_08A7F65C;
    return;
L_08A7F65C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F664;
    }
L_08A7F664:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A7F670u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    goto L_08A7F7F8;
L_08A7F670:
    ctx.set_gpr(31, 0x08A7F678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7F678u) goto L_08A7F678;
    return;
L_08A7F678:
    ctx.set_gpr(31, 0x08A7F680u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 894u, 0x0884B59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7F680u) goto L_08A7F680;
    return;
L_08A7F680:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 201 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F68C;
    }
L_08A7F68C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F698;
    }
L_08A7F698:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A7F6A8u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 1068u, 0x08A8F3F4u>(ctx, &aot_mem) && ctx.pc == 0x08A7F6A8u) goto L_08A7F6A8;
    return;
L_08A7F6A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F6B8;
      }
      goto L_08A7F6B0;
    }
L_08A7F6B0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08A7F7AC;
      }
      goto L_08A7F6B8;
    }
L_08A7F6B8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18301)));
    goto L_08A7F6BC;
L_08A7F6BC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A7F6FC;
    }
    goto L_08A7F6C4;
L_08A7F6C4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18732)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A7F6E8;
    }
    goto L_08A7F6D0;
L_08A7F6D0:
    ctx.set_gpr(31, 0x08A7F6D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7F6D8u) goto L_08A7F6D8;
    return;
L_08A7F6D8:
    ctx.set_gpr(31, 0x08A7F6E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 800u, 0x08AF754Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7F6E0u) goto L_08A7F6E0;
    return;
L_08A7F6E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18128)));
      if (branch_taken) {
          goto L_08A7F704;
      }
      goto L_08A7F6E8;
    }
L_08A7F6E8:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A7F6F4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(280));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 967u, 0x08A93438u>(ctx, &aot_mem) && ctx.pc == 0x08A7F6F4u) goto L_08A7F6F4;
    return;
L_08A7F6F4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18732), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A7F700;
      }
      goto L_08A7F6FC;
    }
L_08A7F6FC:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18301), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A7F700;
L_08A7F700:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18128)));
    goto L_08A7F704;
L_08A7F704:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A7F734;
      }
      goto L_08A7F710;
    }
L_08A7F710:
    ctx.set_gpr(31, 0x08A7F718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7F718u) goto L_08A7F718;
    return;
L_08A7F718:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(31, 0x08A7F72Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_08A7F7C8;
L_08A7F72C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08A7F748;
      }
      goto L_08A7F734;
    }
L_08A7F734:
    ctx.set_gpr(31, 0x08A7F73Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7F73Cu) goto L_08A7F73C;
    return;
L_08A7F73C:
    ctx.set_gpr(31, 0x08A7F744u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A7C7D0;
L_08A7F744:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A7F748;
L_08A7F748:
    ctx.set_gpr(31, 0x08A7F750u);
    // nop
    goto L_08A7DF54;
L_08A7F750:
    ctx.set_gpr(31, 0x08A7F758u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A7F758u) goto L_08A7F758;
    return;
L_08A7F758:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A7F768u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 646u, 0x0885E758u>(ctx, &aot_mem) && ctx.pc == 0x08A7F768u) goto L_08A7F768;
    return;
L_08A7F768:
    ctx.set_gpr(31, 0x08A7F770u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08A7D19C;
L_08A7F770:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A7F780u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 1013u, 0x0885FEC0u>(ctx, &aot_mem) && ctx.pc == 0x08A7F780u) goto L_08A7F780;
    return;
L_08A7F780:
    ctx.set_gpr(31, 0x08A7F788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A7F788u) goto L_08A7F788;
    return;
L_08A7F788:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7F7A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7F7A4u) goto L_08A7F7A4;
    return;
L_08A7F7A4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08A7F7A8;
L_08A7F7A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08A7F7AC;
L_08A7F7AC:
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
L_08A7F7C8:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A7F7E8;
    }
    goto L_08A7F7DC;
L_08A7F7DC:
    ctx.set_gpr(3, 15692u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    goto L_08A7F7E8;
L_08A7F7E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F7F0:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15750), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F7F8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(5));
    if (ctx.gpr[5] != ctx.gpr[7]) {
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
        goto L_08A7F820;
    }
    goto L_08A7F804;
L_08A7F804:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18208)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
        goto L_08A7F840;
    }
    goto L_08A7F810;
L_08A7F810:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18136), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08A7F840;
      }
      goto L_08A7F820;
    }
L_08A7F820:
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18128)));
        goto L_08A7F844;
    }
    goto L_08A7F828;
L_08A7F828:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18208)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
        goto L_08A7F840;
    }
    goto L_08A7F834;
L_08A7F834:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18136), ctx.gpr[3]);
    goto L_08A7F840;
L_08A7F840:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18128)));
    goto L_08A7F844;
L_08A7F844:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18132), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18128), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F850:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[11]);
    ctx.set_gpr(31, 0x08A7F888u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A7F888u) goto L_08A7F888;
    return;
L_08A7F888:
    ctx.set_gpr(31, 0x08A7F890u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A7F890u) goto L_08A7F890;
    return;
L_08A7F890:
    ctx.set_gpr(31, 0x08A7F898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A7F898u) goto L_08A7F898;
    return;
L_08A7F898:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7F8A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 460u, 0x08B023F8u>(ctx, &aot_mem) && ctx.pc == 0x08A7F8A4u) goto L_08A7F8A4;
    return;
L_08A7F8A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
        goto L_08A7F8BC;
    }
    goto L_08A7F8B4;
L_08A7F8B4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08A7F8C4;
      }
      goto L_08A7F8BC;
    }
L_08A7F8BC:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    goto L_08A7F8C4;
L_08A7F8C4:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(19, ctx.gpr[2] - ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_08A7F90C;
      }
      goto L_08A7F8D4;
    }
L_08A7F8D4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    goto L_08A7F8D8;
L_08A7F8D8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08A7F900;
    }
    goto L_08A7F8E8;
L_08A7F8E8:
    ctx.set_gpr(31, 0x08A7F8F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A7F8F0u) goto L_08A7F8F0;
    return;
L_08A7F8F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7F8FCu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08A7F8FCu) goto L_08A7F8FC;
    return;
L_08A7F8FC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A7F900;
L_08A7F900:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
        goto L_08A7F8D8;
    }
    goto L_08A7F90C;
L_08A7F90C:
    ctx.set_gpr(31, 0x08A7F914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A7F914u) goto L_08A7F914;
    return;
L_08A7F914:
    ctx.set_gpr(31, 0x08A7F91Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 475u, 0x08B024FCu>(ctx, &aot_mem) && ctx.pc == 0x08A7F91Cu) goto L_08A7F91C;
    return;
L_08A7F91C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F938:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2230u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25028));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(120));
    goto L_08A7F968;
L_08A7F968:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7F968;
      }
      goto L_08A7F988;
    }
L_08A7F988:
    ctx.set_gpr(31, 0x08A7F990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7F990u) goto L_08A7F990;
    return;
L_08A7F990:
    ctx.set_gpr(31, 0x08A7F998u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 131u, 0x08B00A28u>(ctx, &aot_mem) && ctx.pc == 0x08A7F998u) goto L_08A7F998;
    return;
L_08A7F998:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 157u, 0x08A806ACu>(ctx, &aot_mem); return;
      }
      goto L_08A7F9AC;
    }
L_08A7F9AC:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26860));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F9C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18136)));
        goto L_08A7FA90;
    }
    goto L_08A7F9D4;
L_08A7F9D4:
    ctx.set_gpr(31, 0x08A7F9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 167u, 0x08848AFCu>(ctx, &aot_mem) && ctx.pc == 0x08A7F9DCu) goto L_08A7F9DC;
    return;
L_08A7F9DC:
    ctx.set_gpr(31, 0x08A7F9E4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 95u, 0x08864718u>(ctx, &aot_mem) && ctx.pc == 0x08A7F9E4u) goto L_08A7F9E4;
    return;
L_08A7F9E4:
    ctx.set_gpr(31, 0x08A7F9ECu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A7F9ECu) goto L_08A7F9EC;
    return;
L_08A7F9EC:
    ctx.set_gpr(31, 0x08A7F9F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 633u, 0x0885E624u>(ctx, &aot_mem) && ctx.pc == 0x08A7F9F4u) goto L_08A7F9F4;
    return;
L_08A7F9F4:
    ctx.set_gpr(31, 0x08A7F9FCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_08A7D19C;
L_08A7F9FC:
    ctx.set_gpr(31, 0x08A7FA04u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7FA04u) goto L_08A7FA04;
    return;
L_08A7FA04:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A7FA10u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 1005u, 0x0885FE18u>(ctx, &aot_mem) && ctx.pc == 0x08A7FA10u) goto L_08A7FA10;
    return;
L_08A7FA10:
    ctx.set_gpr(31, 0x08A7FA18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7FA18u) goto L_08A7FA18;
    return;
L_08A7FA18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A7FA38u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08A7FA38u) goto L_08A7FA38;
    return;
L_08A7FA38:
    ctx.set_gpr(31, 0x08A7FA40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08A7FA40u) goto L_08A7FA40;
    return;
L_08A7FA40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7FA4Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08A7FA4Cu) goto L_08A7FA4C;
    return;
L_08A7FA4C:
    ctx.set_gpr(31, 0x08A7FA54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7FA54u) goto L_08A7FA54;
    return;
L_08A7FA54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A7FA68u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7FA68u) goto L_08A7FA68;
    return;
L_08A7FA68:
    ctx.set_gpr(31, 0x08A7FA70u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08A7C0D4;
L_08A7FA70:
    ctx.set_gpr(31, 0x08A7FA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 160u, 0x08848A74u>(ctx, &aot_mem) && ctx.pc == 0x08A7FA78u) goto L_08A7FA78;
    return;
L_08A7FA78:
    ctx.set_gpr(31, 0x08A7FA80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7FA80u) goto L_08A7FA80;
    return;
L_08A7FA80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7FA8Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 275u, 0x08AB0FF8u>(ctx, &aot_mem) && ctx.pc == 0x08A7FA8Cu) goto L_08A7FA8C;
    return;
L_08A7FA8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18136)));
    goto L_08A7FA90;
L_08A7FA90:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    goto L_08A7FA98;
L_08A7FA98:
    ctx.set_gpr(31, 0x08A7FAA0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18248), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7FAA0u) goto L_08A7FAA0;
    return;
L_08A7FAA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A7FAC4u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08A7FAC4u) goto L_08A7FAC4;
    return;
L_08A7FAC4:
    ctx.set_gpr(31, 0x08A7FACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7FACCu) goto L_08A7FACC;
    return;
L_08A7FACC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08A7FAE0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7FAE0u) goto L_08A7FAE0;
    return;
L_08A7FAE0:
    ctx.set_gpr(31, 0x08A7FAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7FAE8u) goto L_08A7FAE8;
    return;
L_08A7FAE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A7FAF8u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31936)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A7FAF8u) goto L_08A7FAF8;
    return;
L_08A7FAF8:
    ctx.set_gpr(31, 0x08A7FB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A7FB00u) goto L_08A7FB00;
    return;
L_08A7FB00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A7FB10u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31940)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A7FB10u) goto L_08A7FB10;
    return;
L_08A7FB10:
    ctx.set_gpr(31, 0x08A7FB18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FB18u) goto L_08A7FB18;
    return;
L_08A7FB18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16988u << 16u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(200));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(190));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08A7FB4Cu);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08A7FB4Cu) goto L_08A7FB4C;
    return;
L_08A7FB4C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18232), 0u);
    ctx.set_gpr(31, 0x08A7FB58u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 20u, 0x08A94138u>(ctx, &aot_mem) && ctx.pc == 0x08A7FB58u) goto L_08A7FB58;
    return;
L_08A7FB58:
    ctx.set_gpr(31, 0x08A7FB60u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 194u, 0x08A94E38u>(ctx, &aot_mem) && ctx.pc == 0x08A7FB60u) goto L_08A7FB60;
    return;
L_08A7FB60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7FB70u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 219u, 0x08A94FECu>(ctx, &aot_mem) && ctx.pc == 0x08A7FB70u) goto L_08A7FB70;
    return;
L_08A7FB70:
    ctx.set_gpr(31, 0x08A7FB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FB78u) goto L_08A7FB78;
    return;
L_08A7FB78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7FB88u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7FB88u) goto L_08A7FB88;
    return;
L_08A7FB88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27408)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7FBA8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A7FBA8u) goto L_08A7FBA8;
    return;
L_08A7FBA8:
    ctx.set_gpr(31, 0x08A7FBB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FBB0u) goto L_08A7FBB0;
    return;
L_08A7FBB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7FBC0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7FBC0u) goto L_08A7FBC0;
    return;
L_08A7FBC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27412)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7FBE0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A7FBE0u) goto L_08A7FBE0;
    return;
L_08A7FBE0:
    ctx.set_gpr(31, 0x08A7FBE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FBE8u) goto L_08A7FBE8;
    return;
L_08A7FBE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7FBF8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7FBF8u) goto L_08A7FBF8;
    return;
L_08A7FBF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27416)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7FC18u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A7FC18u) goto L_08A7FC18;
    return;
L_08A7FC18:
    ctx.set_gpr(31, 0x08A7FC20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FC20u) goto L_08A7FC20;
    return;
L_08A7FC20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7FC30u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7FC30u) goto L_08A7FC30;
    return;
L_08A7FC30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27420)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7FC50u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A7FC50u) goto L_08A7FC50;
    return;
L_08A7FC50:
    ctx.set_gpr(31, 0x08A7FC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FC58u) goto L_08A7FC58;
    return;
L_08A7FC58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7FC68u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7FC68u) goto L_08A7FC68;
    return;
L_08A7FC68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27424)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A7FC88u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A7FC88u) goto L_08A7FC88;
    return;
L_08A7FC88:
    ctx.set_gpr(31, 0x08A7FC90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FC90u) goto L_08A7FC90;
    return;
L_08A7FC90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7FCA0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7FCA0u) goto L_08A7FCA0;
    return;
L_08A7FCA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7FCACu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 651u, 0x08AF29BCu>(ctx, &aot_mem) && ctx.pc == 0x08A7FCACu) goto L_08A7FCAC;
    return;
L_08A7FCAC:
    ctx.set_gpr(31, 0x08A7FCB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7FCB4u) goto L_08A7FCB4;
    return;
L_08A7FCB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7FCC0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 266u, 0x08AB0F70u>(ctx, &aot_mem) && ctx.pc == 0x08A7FCC0u) goto L_08A7FCC0;
    return;
L_08A7FCC0:
    ctx.set_gpr(31, 0x08A7FCC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FCC8u) goto L_08A7FCC8;
    return;
L_08A7FCC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7FCD4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A7FCD4u) goto L_08A7FCD4;
    return;
L_08A7FCD4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A7FCF0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18264), 0u);
    goto L_08A7F850;
L_08A7FCF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 157u, 0x08A806ACu>(ctx, &aot_mem); return;
      }
      goto L_08A7FD00;
    }
L_08A7FD00:
    ctx.set_gpr(31, 0x08A7FD08u);
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(18301), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FD08u) goto L_08A7FD08;
    return;
L_08A7FD08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17250u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17068u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17273u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17100u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08A7FD4Cu);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 103u, 0x08B00814u>(ctx, &aot_mem) && ctx.pc == 0x08A7FD4Cu) goto L_08A7FD4C;
    return;
L_08A7FD4C:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(90));
    goto L_08A7FD58;
L_08A7FD58:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(240));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24788));
    ctx.set_gpr(31, 0x08A7FD70u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A7FD70u) goto L_08A7FD70;
    return;
L_08A7FD70:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A7FD58;
      }
      goto L_08A7FD84;
    }
L_08A7FD84:
    ctx.set_gpr(31, 0x08A7FD8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7FD8Cu) goto L_08A7FD8C;
    return;
L_08A7FD8C:
    ctx.set_gpr(31, 0x08A7FD94u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x08A7FD94u) goto L_08A7FD94;
    return;
L_08A7FD94:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        (void)rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 158u, 0x08A806B0u>(ctx, &aot_mem); return;
    }
    goto L_08A7FDA0;
L_08A7FDA0:
    ctx.set_gpr(31, 0x08A7FDA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FDA8u) goto L_08A7FDA8;
    return;
L_08A7FDA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7FDB4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A7FDB4u) goto L_08A7FDB4;
    return;
L_08A7FDB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 157u, 0x08A806ACu>(ctx, &aot_mem); return;
      }
      goto L_08A7FDBC;
    }
L_08A7FDBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 157u, 0x08A806ACu>(ctx, &aot_mem); return;
      }
      goto L_08A7FDCC;
    }
L_08A7FDCC:
    ctx.set_gpr(31, 0x08A7FDD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FDD4u) goto L_08A7FDD4;
    return;
L_08A7FDD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7FDE0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A7FDE0u) goto L_08A7FDE0;
    return;
L_08A7FDE0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18264)));
        goto L_08A7FE50;
    }
    goto L_08A7FDE8;
L_08A7FDE8:
    ctx.set_gpr(31, 0x08A7FDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FDF0u) goto L_08A7FDF0;
    return;
L_08A7FDF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7FDFCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A7FDFCu) goto L_08A7FDFC;
    return;
L_08A7FDFC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18232), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7FE38;
      }
      goto L_08A7FE08;
    }
L_08A7FE08:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A7FE1C;
      }
      goto L_08A7FE14;
    }
L_08A7FE14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7FE4C;
      }
      goto L_08A7FE1C;
    }
L_08A7FE1C:
    ctx.set_gpr(31, 0x08A7FE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FE24u) goto L_08A7FE24;
    return;
L_08A7FE24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7FE30u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A7FE30u) goto L_08A7FE30;
    return;
L_08A7FE30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7FE4C;
      }
      goto L_08A7FE38;
    }
L_08A7FE38:
    ctx.set_gpr(31, 0x08A7FE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FE40u) goto L_08A7FE40;
    return;
L_08A7FE40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7FE4Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A7FE4Cu) goto L_08A7FE4C;
    return;
L_08A7FE4C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18264)));
    goto L_08A7FE50;
L_08A7FE50:
    ctx.set_gpr(31, 0x08A7FE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FE58u) goto L_08A7FE58;
    return;
L_08A7FE58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7FE68u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7FE68u) goto L_08A7FE68;
    return;
L_08A7FE68:
    ctx.set_gpr(31, 0x08A7FE70u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A7FE70u) goto L_08A7FE70;
    return;
L_08A7FE70:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A7FEC0;
      }
      goto L_08A7FE78;
    }
L_08A7FE78:
    ctx.set_gpr(31, 0x08A7FE80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FE80u) goto L_08A7FE80;
    return;
L_08A7FE80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7FE90u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7FE90u) goto L_08A7FE90;
    return;
L_08A7FE90:
    ctx.set_gpr(31, 0x08A7FE98u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A7FE98u) goto L_08A7FE98;
    return;
L_08A7FE98:
    ctx.set_gpr(31, 0x08A7FEA0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18264), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A7FEA0u) goto L_08A7FEA0;
    return;
L_08A7FEA0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18264)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31940));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A7FEC0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A7FEC0u) goto L_08A7FEC0;
    return;
L_08A7FEC0:
    ctx.set_gpr(31, 0x08A7FEC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FEC8u) goto L_08A7FEC8;
    return;
L_08A7FEC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7FED4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A7FED4u) goto L_08A7FED4;
    return;
L_08A7FED4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(-2));
        goto L_08A7FF58;
    }
    goto L_08A7FEDC;
L_08A7FEDC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18232)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(-2));
        goto L_08A7FF58;
    }
    goto L_08A7FEE8;
L_08A7FEE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A7FF40;
      }
      goto L_08A7FEF4;
    }
L_08A7FEF4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A7FF08;
      }
      goto L_08A7FF00;
    }
L_08A7FF00:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A7FF5C;
      }
      goto L_08A7FF08;
    }
L_08A7FF08:
    ctx.set_gpr(31, 0x08A7FF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FF10u) goto L_08A7FF10;
    return;
L_08A7FF10:
    ctx.set_gpr(31, 0x08A7FF18u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 131u, 0x08B00A28u>(ctx, &aot_mem) && ctx.pc == 0x08A7FF18u) goto L_08A7FF18;
    return;
L_08A7FF18:
    ctx.set_gpr(31, 0x08A7FF20u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18232), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FF20u) goto L_08A7FF20;
    return;
L_08A7FF20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7FF30u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7FF30u) goto L_08A7FF30;
    return;
L_08A7FF30:
    ctx.set_gpr(31, 0x08A7FF38u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A7FF38u) goto L_08A7FF38;
    return;
L_08A7FF38:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A7FF58;
      }
      goto L_08A7FF40;
    }
L_08A7FF40:
    ctx.set_gpr(31, 0x08A7FF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FF48u) goto L_08A7FF48;
    return;
L_08A7FF48:
    ctx.set_gpr(31, 0x08A7FF50u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 131u, 0x08B00A28u>(ctx, &aot_mem) && ctx.pc == 0x08A7FF50u) goto L_08A7FF50;
    return;
L_08A7FF50:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18232), 0u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A7FF58;
L_08A7FF58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    goto L_08A7FF5C;
L_08A7FF5C:
    if (ctx.gpr[19] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08A7FFEC;
    }
    goto L_08A7FF64;
L_08A7FF64:
    ctx.set_gpr(31, 0x08A7FF6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A7FF6Cu) goto L_08A7FF6C;
    return;
L_08A7FF6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17250u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17068u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17273u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17100u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08A7FFB0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 103u, 0x08B00814u>(ctx, &aot_mem) && ctx.pc == 0x08A7FFB0u) goto L_08A7FFB0;
    return;
L_08A7FFB0:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(90));
    goto L_08A7FFBC;
L_08A7FFBC:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(240));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24788));
    ctx.set_gpr(31, 0x08A7FFD4u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A7FFD4u) goto L_08A7FFD4;
    return;
L_08A7FFD4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A7FFBC;
      }
      goto L_08A7FFE8;
    }
L_08A7FFE8:
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A7FFEC;
L_08A7FFEC:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 157u, 0x08A806ACu>(ctx, &aot_mem); return;
      }
      goto L_08A7FFF8;
    }
L_08A7FFF8:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.pc = 0x08A80000u; return;
}

void recomp_unit_0158(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0158_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_158(Runtime &runtime) {
    runtime.register_generated_unit(158u, 0x08A7C000u, 16384u, &recomp_unit_0158, &recomp_unit_0158_entry);
    runtime.register_function(0x08A7C000u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C008u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C028u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C030u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C03Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C05Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C064u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C070u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C090u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C098u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C0A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C0C0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C0C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C0D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C0E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C124u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C12Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C13Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C148u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C158u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C174u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C17Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C1B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C1C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C1D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C1E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C1F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C1F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C200u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C234u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C23Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C24Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C258u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C260u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C270u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C27Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C290u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C2A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C2ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C2C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C2CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C2D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C2DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C2F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C30Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C318u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C324u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C330u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C33Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C348u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C350u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C354u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C368u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C370u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C38Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C398u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C3A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C3B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C3B8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C3BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C3D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C3ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C3F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C404u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C40Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C410u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C424u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C42Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C448u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C45Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C468u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C470u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C474u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C488u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C4A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C4C0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C4CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C4D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C4D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C4ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C504u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C50Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C514u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C51Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C524u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C52Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C534u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C53Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C544u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C54Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C554u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C55Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C564u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C578u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C590u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C598u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C5A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C5A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C5B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C5C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C5E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C5F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C630u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C64Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C664u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C678u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C694u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C6A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C6BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C6FCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C724u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C738u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C74Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C768u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C770u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C778u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C784u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C790u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C79Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C7A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C7B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C7B4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C7C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C7D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C7E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C7E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C80Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C828u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C830u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C83Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C844u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C850u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C858u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C860u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C86Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C87Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C884u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C898u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C8A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C8B4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C8BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C8C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C8D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C8D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C8E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C8E4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C8F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C8F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C900u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C908u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C910u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C91Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C9F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CA04u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CA0Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CA3Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CA6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CA78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CA84u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CAA0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CAB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CAC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CAD4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CAE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CAF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CAFCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CB04u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CB0Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CB14u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CB28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CB30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CB38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CB6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CB74u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CBA0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CBA8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CBBCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CBC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CBC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CBDCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CBECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CBF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC14u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC24u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC2Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC34u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC44u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC60u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CCA4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CCDCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CCE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD1Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD24u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD5Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD64u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CDB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CDB8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CDECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CDF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE10u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE44u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE64u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CEA0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CEA8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CEBCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CEC4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CED8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CEE0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CF14u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CF1Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CF54u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CF5Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CF94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CF9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CFB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CFB8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CFCCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CFD4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CFE8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CFF0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D014u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D028u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D030u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D048u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D050u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D070u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D080u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D088u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D090u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D098u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D0A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D0A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D0B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D0C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D0D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D0D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D0DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D0F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D130u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D138u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D13Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D144u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D17Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D184u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D19Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D1A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D1B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D1BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D1C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D1DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D1E4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D1ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D204u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D20Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D224u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D22Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D24Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D254u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D274u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D27Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D284u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D28Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D2A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D2ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D2C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D2CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D2ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D2F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D318u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D320u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D328u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D340u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D348u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D360u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D368u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D388u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D390u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D3B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D3B8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D3C0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D3C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D3E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D3E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D400u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D408u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D428u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D430u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D450u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D458u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D460u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D468u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D480u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D488u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D4A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D4A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D4C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D4D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D4F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D4FCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D504u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D51Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D524u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D53Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D544u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D564u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D56Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D58Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D594u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D5A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D5B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D5C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D5D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D5E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D5F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D5F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D600u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D608u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D610u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D618u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D620u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D62Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D634u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D63Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D644u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D658u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D660u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D668u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D670u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D67Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D684u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D688u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D690u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6B4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D700u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D708u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D718u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D728u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D744u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D74Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D75Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D770u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D788u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D794u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D79Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7B8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7C0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7FCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D830u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D838u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D84Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D854u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D868u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D870u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D8A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D8ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D8D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D8E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D90Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D914u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D940u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D948u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D974u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D97Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D9A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D9B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D9C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D9CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D9D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D9E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D9F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D9F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA0Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA10u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA60u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA90u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DAB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DAB8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DAC4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DACCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DADCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DAE8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DAF0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB40u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB54u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DBA4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DBB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DBB8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DBF0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DBF8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC18u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC40u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC48u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC70u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC84u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DCA0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DCA8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DCBCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DCC4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DCECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DCF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD10u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD18u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD50u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD58u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD74u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD7Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD84u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DDA4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DDC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DDD0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DDF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DDFCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE48u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE50u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE74u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE7Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DEA0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DEA8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DECCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DED0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DEDCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DEE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DEF8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF0Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF14u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF44u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF54u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF70u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF88u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DFACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DFB4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DFC4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DFDCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DFF0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E008u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E01Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E024u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E02Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E038u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E040u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E048u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E050u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E05Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E074u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E088u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E090u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E098u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E0A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E0BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E0D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E0D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E0E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E0FCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E110u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E118u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E120u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E128u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E130u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E144u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E158u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E16Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E174u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E188u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E190u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E1A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E1ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E1C0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E1C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E1DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E1F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E204u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E20Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E214u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E21Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E238u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E24Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E260u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E268u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E27Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E290u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E2A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E2A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E2BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E2C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E2CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E2E4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E2F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E300u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E308u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E320u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E334u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E34Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E360u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E364u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E370u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E378u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E380u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E3B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E3E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E3F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E400u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E40Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E418u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E424u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E42Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E438u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E444u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E450u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E45Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E468u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E474u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E480u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E488u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E494u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E49Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E4A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E4B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E4BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E4C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E4D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E4DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E4E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E4F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E4FCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E504u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E510u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E51Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E52Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E534u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E53Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E54Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E554u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E564u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E574u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E57Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E584u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E594u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E59Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E5ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E5BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E5C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E5D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E5D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E5E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E5E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E5FCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E608u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E610u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E618u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E628u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E634u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E63Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E64Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E654u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E658u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E660u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E674u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E67Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E684u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E698u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E6A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E6A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E6B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E6B4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E6BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E6D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E6D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E6E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E6E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E6F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E700u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E708u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E710u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E720u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E72Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E734u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E73Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E750u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E75Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E764u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E778u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E780u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E788u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E790u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E794u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E79Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E7B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E7B8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E7C0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E7C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E7D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E7E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E7ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E7F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E804u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E80Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E810u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E818u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E82Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E834u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E83Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E850u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E858u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E860u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E868u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E87Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E884u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E88Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E894u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E8A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E8B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E8B8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E8C0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E8C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E8CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E8E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E8E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E8F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E8F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E904u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E908u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E910u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E924u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E92Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E934u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E93Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E94Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E958u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E960u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E970u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E978u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E97Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E984u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E998u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E9A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E9A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E9BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E9C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E9CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E9D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E9E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E9F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E9F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA00u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA14u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA1Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA24u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA2Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA54u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA60u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA74u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA7Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA84u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EAA8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EAB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EABCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EAD0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EADCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EAE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EAF8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB00u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB10u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB18u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB1Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB24u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB40u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB48u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB50u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB54u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB5Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB70u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB88u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB98u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EBA0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EBA8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EBB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EBC4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EBCCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EBD4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EBDCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EBE0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EBE8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EBFCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC04u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC0Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC14u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC40u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC48u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC54u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC70u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ECA4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ECACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ECC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ECC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ECD0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ECD8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ECDCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ECE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ECF8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED00u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED10u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED24u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED2Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED34u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED40u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED48u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED54u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED70u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDA4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDD0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDD8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDDCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDF8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDFCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE14u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE1Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE24u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE2Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE40u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE50u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE58u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE64u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE74u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE7Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EEA0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EEA8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EEB4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EEBCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EEC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EED4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EEDCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EEE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EEF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EEFCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF18u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF40u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF50u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF60u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF90u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF98u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EFA4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EFACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EFB4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EFC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EFD0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EFD8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EFE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EFF8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EFFCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F008u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F010u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F018u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F028u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F034u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F03Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F044u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F054u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F060u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F064u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F06Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F070u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F078u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F088u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F090u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F098u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F0A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F0B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F0BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F0D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F0DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F0ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F0F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F100u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F108u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F110u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F120u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F12Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F134u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F13Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F14Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F158u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F160u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F174u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F178u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F184u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F18Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F19Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F1A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F1ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F1B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F1E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F1E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F204u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F20Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F214u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F248u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F25Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F26Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F288u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F298u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F2A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F2ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F2C0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F2C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F2D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F2DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F2E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F2F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F2F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F300u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F30Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F318u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F320u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F328u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F334u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F33Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F344u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F34Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F354u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F360u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F368u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F370u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F378u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F380u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F388u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F390u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F39Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F3A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F3ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F3B8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F3C0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F3D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F3D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F3E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F3F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F3FCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F408u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F420u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F428u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F430u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F438u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F440u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F448u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F458u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F464u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F46Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F488u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F490u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F49Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F4B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F4B8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F4C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F4CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F4D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F4DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F4F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F4F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F500u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F50Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F514u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F51Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F530u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F538u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F54Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F554u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F568u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F570u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F584u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F58Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F5A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F5A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F5BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F5C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F5CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F5E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F5E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F5F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F600u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F608u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F610u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F618u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F624u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F62Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F634u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F640u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F650u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F65Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F664u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F670u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F678u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F680u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F68Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F698u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F6A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F6B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F6B8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F6BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F6C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F6D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F6D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F6E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F6E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F6F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F6FCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F700u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F704u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F710u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F718u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F72Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F734u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F73Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F744u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F748u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F750u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F758u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F768u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F770u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F780u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F788u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F804u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F810u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F820u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F828u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F834u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F840u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F844u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F850u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F888u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F890u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F898u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F8A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F8B4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F8BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F8C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F8D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F8D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F8E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F8F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F8FCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F900u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F90Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F914u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F91Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F938u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F968u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F988u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F990u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F998u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F9ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F9C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F9D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F9DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F9E4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F9ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F9F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F9FCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA04u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA10u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA18u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA40u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA54u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA70u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA90u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA98u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FAA0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FAC4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FACCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FAE0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FAE8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FAF8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB00u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB10u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB18u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB58u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB60u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB70u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB88u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FBA8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FBB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FBC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FBE0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FBE8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FBF8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC18u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC50u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC58u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC88u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC90u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FCA0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FCACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FCB4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FCC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FCC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FCD4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FCF0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD00u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD58u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD70u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD84u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDA0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDA8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDB4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDBCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDCCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDD4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDE0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDE8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDF0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDFCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE14u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE1Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE24u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE40u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE50u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE58u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE70u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE90u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE98u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FEA0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FEC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FEC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FED4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FEDCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FEE8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FEF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF00u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF10u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF18u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF40u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF48u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF50u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF58u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF5Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF64u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FFB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FFBCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FFD4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FFE8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FFECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FFF8u, &recomp_unit_0158, "recomp_unit_0158");
}
} // namespace psprecomp
