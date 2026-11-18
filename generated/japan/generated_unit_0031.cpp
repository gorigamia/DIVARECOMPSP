#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0031[4096] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 9,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0,
    0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0,
    0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 31, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0,
    36, 37, 38, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 43, 0, 0, 0, 44, 45, 0, 0, 0, 0, 46, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 49, 0, 50, 0, 0, 51, 0, 52, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0,
    0, 55, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 60, 61, 0, 62, 0, 0, 0, 0, 63, 0,
    0, 0, 0, 64, 0, 65, 0, 66, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 73, 0, 74,
    0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 0, 85, 0, 86, 0, 0,
    87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 91, 92, 0, 0, 93, 94, 0, 0, 0,
    0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 103,
    104, 105, 0, 0, 0, 0, 106, 0, 107, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 114, 115, 0, 0, 0, 0, 116, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 121, 0, 0, 122, 123, 0, 0, 124, 0, 125, 0, 126,
    0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 138, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0,
    143, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 151, 0,
    152, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 156, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0,
    0, 161, 0, 0, 0, 0, 0, 162, 0, 163, 0, 164, 0, 0, 0, 165, 0, 166, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 174, 175, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 180, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 184, 185, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199,
    0, 200, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0,
    0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 211, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 216, 0, 217, 0, 0, 0, 218, 0, 219, 0, 0, 0, 220, 0, 221, 0, 222,
    0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 237, 0, 238, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 0, 0, 243, 0, 244, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0, 248, 249, 0, 250, 0, 251, 0, 252, 0, 253, 254, 0, 0, 255, 0,
    256, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 261, 0, 0, 0, 0,
    262, 0, 263, 264, 0, 265, 266, 267, 0, 268, 0, 0, 0, 269, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 273, 0, 0, 274, 0, 275,
    0, 276, 0, 277, 278, 0, 279, 0, 280, 281, 0, 282, 0, 283, 0, 284, 0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292,
    0, 293, 0, 294, 295, 0, 296, 0, 297, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307, 0, 0, 308, 0,
    309, 0, 310, 0, 311, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0,
    318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 322,
    0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 331,
    0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 0,
    340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 347, 0, 348, 0, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 352, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 356, 357, 0, 0, 358, 0, 359, 0, 360, 0,
    0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 363, 364, 365, 0, 0, 0, 366, 0, 367, 0, 368, 0, 0, 0, 0, 0, 369, 0,
    370, 0, 0, 0, 0, 0, 371, 372, 0, 0, 373, 0, 374, 0, 375, 0, 376, 0, 0, 0, 377, 0, 0, 378, 0, 379, 0, 0, 0, 380, 0, 0,
    381, 0, 0, 0, 382, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 387, 0, 388, 0, 0, 389, 390, 0, 0, 0,
    0, 0, 0, 391, 0, 392, 0, 393, 0, 394, 0, 0, 0, 0, 0, 395, 396, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399,
    0, 400, 0, 401, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406,
    0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0,
    0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0,
    0, 0, 0, 0, 423, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 429, 0, 0,
    0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 0, 433, 0, 434, 0, 0, 0, 435, 0, 436, 0,
    0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 440, 0, 0, 441, 0, 0, 0, 442, 443, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0,
    0, 446, 447, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0,
    0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 460, 0, 461, 0, 462, 0, 0, 0, 463, 0, 0, 464, 0, 465, 466, 0, 0,
    467, 0, 468, 0, 469, 0, 470, 0, 471, 0, 472, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 476, 0, 0, 0, 477, 0, 0, 478,
    479, 0, 480, 481, 0, 0, 482, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 489, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 493, 0, 0, 494, 0, 0,
    495, 0, 496, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 500, 0, 501, 0, 0, 0, 502, 0, 503, 504, 0,
    0, 505, 0, 0, 0, 506, 507, 508, 0, 0, 0, 0, 509, 0, 0, 510, 0, 0, 511, 0, 512, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0,
    515, 0, 0, 0, 516, 0, 517, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 520, 0, 521, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 523, 0, 0, 0, 524, 525, 0, 0, 526, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 530, 0, 0,
    531, 0, 532, 0, 0, 533, 0, 0, 534, 0, 0, 0, 535, 0, 0, 536, 537, 0, 0, 0, 538, 0, 539, 0, 540, 0, 541, 0, 542, 0, 0, 0,
    543, 0, 544, 0, 0, 545, 0, 0, 546, 0, 547, 0, 0, 0, 0, 0, 0, 0, 548, 0, 549, 0, 550, 0, 551, 0, 552, 0, 0, 553, 0, 554,
    0, 0, 555, 0, 556, 0, 0, 0, 557, 0, 558, 0, 559, 0, 560, 0, 0, 561, 0, 562, 0, 563, 0, 564, 0, 565, 0, 566, 0, 0, 0, 567,
    0, 0, 568, 0, 0, 0, 569, 0, 0, 570, 0, 0, 0, 571, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 576, 0, 0, 577, 0, 578, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 580, 581, 0, 582, 0, 583, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 587, 0, 588, 0, 0, 0, 0, 0,
    589, 0, 590, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 594, 0, 595, 0, 596, 0, 0, 0, 0, 0, 0, 0, 597, 598, 0, 599, 0,
    600, 601, 0, 602, 0, 603, 0, 0, 604, 0, 605, 0, 606, 0, 607, 0, 608, 0, 609, 0, 610, 0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 613,
    614, 0, 615, 0, 616, 617, 0, 618, 0, 619, 0, 0, 620, 0, 621, 0, 622, 0, 623, 0, 624, 0, 625, 0, 626, 0, 627, 0, 0, 0, 0, 0,
    0, 0, 628, 629, 0, 630, 0, 631, 0, 632, 0, 0, 0, 633, 0, 0, 634, 0, 635, 636, 0, 637, 0, 0, 638, 0, 639, 0, 0, 640, 0, 641,
    0, 642, 0, 643, 0, 0, 0, 0, 644, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647, 0, 648, 0, 0, 0, 0, 649, 0, 650, 0,
    0, 0, 0, 651, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 658, 0, 659, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 661, 0, 662, 0, 663, 0, 0, 664, 0, 0, 665, 0, 666, 0, 667, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 670,
    0, 671, 0, 672, 0, 0, 0, 0, 0, 0, 0, 673, 674, 0, 675, 0, 676, 0, 677, 0, 0, 0, 678, 0, 679, 0, 680, 0, 0, 0, 681, 0,
    0, 0, 0, 682, 0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 685, 0, 686, 0, 687, 0, 0, 0, 0, 0, 0, 0, 688, 689, 0, 690, 0, 691,
    692, 0, 693, 0, 694, 0, 0, 695, 0, 696, 0, 697, 0, 698, 0, 699, 0, 700, 701, 0, 702, 0, 0, 703, 0, 704, 0, 0, 705, 0, 706, 0,
    707, 0, 708, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 710, 0, 711, 0, 0, 712, 0, 0, 713, 0, 714, 0, 715, 0, 0, 716, 0, 0, 717,
    718, 0, 719, 0, 0, 0, 0, 0, 720, 0, 721, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 724, 725, 0, 726, 0,
    0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 728, 0, 0, 729, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 731, 0, 0, 0, 0, 732, 0, 733, 0, 0, 0, 0, 734, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 737, 0, 0, 0,
    0, 738, 0, 0, 0, 0, 0, 0, 739, 0, 740, 0, 0, 0, 0, 741, 742, 0, 0, 0, 0, 0, 0, 0, 743, 0, 744, 0, 0, 0, 0, 0,
    745, 0, 0, 0, 0, 746, 0, 747, 0, 0, 0, 0, 0, 0, 0, 748, 749, 0, 750, 0, 751, 0, 0, 0, 752, 0, 0, 0, 0, 753, 0, 754,
    0, 0, 0, 0, 0, 0, 755, 0, 756, 0, 757, 0, 0, 0, 0, 0, 0, 0, 758, 759, 0, 760, 0, 761, 762, 0, 763, 0, 764, 0, 0, 765,
    0, 766, 0, 767, 0, 768, 0, 769, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 771, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0,
    774, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 776, 0, 777, 778, 0, 779, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 781, 0,
    0, 0, 0, 0, 0, 0, 782, 0, 783, 0, 784, 0, 0, 0, 785, 0, 786, 787, 0, 788, 789, 0, 790, 791, 0, 792, 793, 0, 794, 0, 795, 0,
    796, 797, 0, 798, 0, 0, 0, 0, 0, 0, 799, 0, 800, 0, 801, 0, 802, 0, 803, 0, 804, 0, 805, 0, 806, 0, 807, 0, 808, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    809, 0, 0, 0, 810, 0, 811, 0, 812, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 819, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0,
    0, 0, 821, 0, 822, 0, 0, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 824, 0, 825, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0,
    0, 827, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 830, 0, 831, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 833,
    0, 834, 0, 835, 0, 0, 0, 0, 836, 0, 0, 0, 0, 837, 0, 838, 0, 839, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 841, 0, 842, 0,
    0, 843, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0, 0, 0, 0, 845, 0, 846, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 847, 0, 0, 0, 0, 0, 0, 0, 848, 0, 849, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0, 851, 0, 0, 852, 0, 0, 0, 853, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 854, 0, 0, 0, 0, 0, 855, 0, 856, 0,
    0, 0, 0, 0, 857, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 860, 0, 0, 861, 0, 0, 0, 0, 862, 863, 0, 0, 864, 0, 0, 0, 0, 865, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 867,
    0, 0, 0, 868, 869, 0, 870, 0, 871, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 872, 0, 0, 0, 0, 873, 0, 0, 0, 0, 0, 874, 0, 0, 0, 875, 0, 0, 876, 0, 877, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    878, 0, 879, 0, 880, 0, 881, 0, 0, 882, 0, 0, 0, 883, 0, 884, 0, 0, 0, 885, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 887, 0, 0, 888, 0, 0, 0, 0, 889, 890, 0, 0, 891, 0, 0, 0,
    0, 892, 0, 0, 0, 0, 893, 0, 0, 0, 0, 0, 894, 0, 0, 0, 895, 896, 0, 897, 0, 898, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 899, 0, 0, 0, 0, 900, 0, 0, 0, 0, 0, 901, 0, 0, 0, 902, 0,
    0, 903, 0, 904, 0, 0, 0, 0, 0, 0, 0, 0, 0, 905, 0, 906, 0, 907, 0, 908, 0, 0, 909, 0, 0, 0, 910, 0, 911, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 912, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 913, 914, 0, 915, 0, 916, 0, 917, 0, 918, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 919,
    0, 920, 0, 921, 0, 0, 922, 0, 0, 0, 923, 0, 0, 924, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 925, 0, 0, 0, 0,
    0, 926, 0, 0, 927, 0, 0, 0, 0, 0, 0, 928, 0, 929, 0, 930, 0, 931, 932, 0, 933, 0, 0, 0, 0, 934, 0, 935, 0, 936, 0, 0,
    0, 0, 0, 0, 0, 0, 937, 0, 0, 0, 0, 938, 0, 939, 0, 0, 0, 940, 0, 941, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 942, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 943, 0, 0, 0, 0, 0, 0, 0, 0, 944, 0,
    0, 0, 945, 946, 0, 0, 947, 948, 0, 949, 950, 0, 951, 952, 0, 953, 954, 0, 955, 0, 956, 0, 0, 957, 958, 0, 959, 0, 960, 0, 0, 0,
    0, 961, 962, 0, 963, 964, 0, 0, 965, 966, 0, 0, 967, 0, 0, 968, 969, 0, 0, 970, 0, 971, 972, 0, 0, 0, 0, 0, 0, 973, 0, 974,
};
void recomp_unit_0031_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08880000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0031[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08880000;
    case 2u: goto L_0888000C;
    case 3u: goto L_0888001C;
    case 4u: goto L_0888002C;
    case 5u: goto L_0888003C;
    case 6u: goto L_0888004C;
    case 7u: goto L_08880058;
    case 8u: goto L_08880070;
    case 9u: goto L_0888007C;
    case 10u: goto L_08880090;
    case 11u: goto L_088800B4;
    case 12u: goto L_088800C0;
    case 13u: goto L_088800D4;
    case 14u: goto L_088800E4;
    case 15u: goto L_088800F4;
    case 16u: goto L_08880114;
    case 17u: goto L_08880120;
    case 18u: goto L_08880154;
    case 19u: goto L_088801AC;
    case 20u: goto L_088801D8;
    case 21u: goto L_088801E0;
    case 22u: goto L_088801E8;
    case 23u: goto L_088801F0;
    case 24u: goto L_08880200;
    case 25u: goto L_08880218;
    case 26u: goto L_08880268;
    case 27u: goto L_08880274;
    case 28u: goto L_08880284;
    case 29u: goto L_08880294;
    case 30u: goto L_088802A4;
    case 31u: goto L_088802A8;
    case 32u: goto L_088802B4;
    case 33u: goto L_088802C8;
    case 34u: goto L_088802DC;
    case 35u: goto L_088802F0;
    case 36u: goto L_08880300;
    case 37u: goto L_08880304;
    case 38u: goto L_08880308;
    case 39u: goto L_08880314;
    case 40u: goto L_0888032C;
    case 41u: goto L_0888033C;
    case 42u: goto L_08880348;
    case 43u: goto L_08880350;
    case 44u: goto L_08880360;
    case 45u: goto L_08880364;
    case 46u: goto L_08880378;
    case 47u: goto L_088803A4;
    case 48u: goto L_088803AC;
    case 49u: goto L_088803B8;
    case 50u: goto L_088803C0;
    case 51u: goto L_088803CC;
    case 52u: goto L_088803D4;
    case 53u: goto L_088803E0;
    case 54u: goto L_088803E8;
    case 55u: goto L_08880404;
    case 56u: goto L_08880410;
    case 57u: goto L_08880424;
    case 58u: goto L_0888043C;
    case 59u: goto L_08880450;
    case 60u: goto L_08880458;
    case 61u: goto L_0888045C;
    case 62u: goto L_08880464;
    case 63u: goto L_08880478;
    case 64u: goto L_0888048C;
    case 65u: goto L_08880494;
    case 66u: goto L_0888049C;
    case 67u: goto L_088804A4;
    case 68u: goto L_088804B0;
    case 69u: goto L_088804BC;
    case 70u: goto L_088804C8;
    case 71u: goto L_088804E4;
    case 72u: goto L_088804EC;
    case 73u: goto L_088804F4;
    case 74u: goto L_088804FC;
    case 75u: goto L_08880504;
    case 76u: goto L_08880518;
    case 77u: goto L_08880520;
    case 78u: goto L_08880528;
    case 79u: goto L_08880530;
    case 80u: goto L_08880540;
    case 81u: goto L_08880548;
    case 82u: goto L_08880550;
    case 83u: goto L_08880558;
    case 84u: goto L_08880560;
    case 85u: goto L_0888056C;
    case 86u: goto L_08880574;
    case 87u: goto L_08880580;
    case 88u: goto L_08880588;
    case 89u: goto L_088805C0;
    case 90u: goto L_088805D0;
    case 91u: goto L_088805DC;
    case 92u: goto L_088805E0;
    case 93u: goto L_088805EC;
    case 94u: goto L_088805F0;
    case 95u: goto L_08880610;
    case 96u: goto L_08880618;
    case 97u: goto L_08880620;
    case 98u: goto L_08880630;
    case 99u: goto L_08880650;
    case 100u: goto L_08880658;
    case 101u: goto L_08880668;
    case 102u: goto L_08880670;
    case 103u: goto L_0888067C;
    case 104u: goto L_08880680;
    case 105u: goto L_08880684;
    case 106u: goto L_08880698;
    case 107u: goto L_088806A0;
    case 108u: goto L_088806A4;
    case 109u: goto L_088806C4;
    case 110u: goto L_088806CC;
    case 111u: goto L_088806D4;
    case 112u: goto L_088806DC;
    case 113u: goto L_088806F4;
    case 114u: goto L_0888070C;
    case 115u: goto L_08880710;
    case 116u: goto L_08880724;
    case 117u: goto L_0888072C;
    case 118u: goto L_08880738;
    case 119u: goto L_08880740;
    case 120u: goto L_08880748;
    case 121u: goto L_08880750;
    case 122u: goto L_0888075C;
    case 123u: goto L_08880760;
    case 124u: goto L_0888076C;
    case 125u: goto L_08880774;
    case 126u: goto L_0888077C;
    case 127u: goto L_08880790;
    case 128u: goto L_08880798;
    case 129u: goto L_088807A0;
    case 130u: goto L_088807AC;
    case 131u: goto L_088807BC;
    case 132u: goto L_088807C4;
    case 133u: goto L_088807CC;
    case 134u: goto L_088807D8;
    case 135u: goto L_08880800;
    case 136u: goto L_08880820;
    case 137u: goto L_08880838;
    case 138u: goto L_08880840;
    case 139u: goto L_08880848;
    case 140u: goto L_08880854;
    case 141u: goto L_08880860;
    case 142u: goto L_0888086C;
    case 143u: goto L_08880880;
    case 144u: goto L_08880888;
    case 145u: goto L_08880894;
    case 146u: goto L_0888089C;
    case 147u: goto L_088808B0;
    case 148u: goto L_088808C4;
    case 149u: goto L_088808DC;
    case 150u: goto L_088808F4;
    case 151u: goto L_088808F8;
    case 152u: goto L_08880900;
    case 153u: goto L_08880908;
    case 154u: goto L_08880924;
    case 155u: goto L_08880930;
    case 156u: goto L_08880938;
    case 157u: goto L_08880940;
    case 158u: goto L_0888094C;
    case 159u: goto L_0888095C;
    case 160u: goto L_0888096C;
    case 161u: goto L_08880984;
    case 162u: goto L_0888099C;
    case 163u: goto L_088809A4;
    case 164u: goto L_088809AC;
    case 165u: goto L_088809BC;
    case 166u: goto L_088809C4;
    case 167u: goto L_088809D0;
    case 168u: goto L_088809D8;
    case 169u: goto L_088809E0;
    case 170u: goto L_08880A1C;
    case 171u: goto L_08880A28;
    case 172u: goto L_08880A34;
    case 173u: goto L_08880A40;
    case 174u: goto L_08880A4C;
    case 175u: goto L_08880A50;
    case 176u: goto L_08880A5C;
    case 177u: goto L_08880A70;
    case 178u: goto L_08880A8C;
    case 179u: goto L_08880AA8;
    case 180u: goto L_08880AAC;
    case 181u: goto L_08880AB4;
    case 182u: goto L_08880AD0;
    case 183u: goto L_08880AD8;
    case 184u: goto L_08880AE4;
    case 185u: goto L_08880AE8;
    case 186u: goto L_08880B00;
    case 187u: goto L_08880B1C;
    case 188u: goto L_08880B24;
    case 189u: goto L_08880B34;
    case 190u: goto L_08880B3C;
    case 191u: goto L_08880B80;
    case 192u: goto L_08880BAC;
    case 193u: goto L_08880BB4;
    case 194u: goto L_08880BBC;
    case 195u: goto L_08880BC4;
    case 196u: goto L_08880BD4;
    case 197u: goto L_08880BE0;
    case 198u: goto L_08880BF0;
    case 199u: goto L_08880BFC;
    case 200u: goto L_08880C04;
    case 201u: goto L_08880C14;
    case 202u: goto L_08880C20;
    case 203u: goto L_08880C30;
    case 204u: goto L_08880C3C;
    case 205u: goto L_08880C54;
    case 206u: goto L_08880C70;
    case 207u: goto L_08880C78;
    case 208u: goto L_08880C8C;
    case 209u: goto L_08880C94;
    case 210u: goto L_08880CC4;
    case 211u: goto L_08880CC8;
    case 212u: goto L_08880CD0;
    case 213u: goto L_08880CD8;
    case 214u: goto L_08880D1C;
    case 215u: goto L_08880D30;
    case 216u: goto L_08880D3C;
    case 217u: goto L_08880D44;
    case 218u: goto L_08880D54;
    case 219u: goto L_08880D5C;
    case 220u: goto L_08880D6C;
    case 221u: goto L_08880D74;
    case 222u: goto L_08880D7C;
    case 223u: goto L_08880D84;
    case 224u: goto L_08880D98;
    case 225u: goto L_08880DB4;
    case 226u: goto L_08880DC8;
    case 227u: goto L_08880DD4;
    case 228u: goto L_08880DE4;
    case 229u: goto L_08880DF0;
    case 230u: goto L_08880E34;
    case 231u: goto L_08880E4C;
    case 232u: goto L_08880E60;
    case 233u: goto L_08880EA8;
    case 234u: goto L_08880EB0;
    case 235u: goto L_08880ECC;
    case 236u: goto L_08880EE4;
    case 237u: goto L_08880EEC;
    case 238u: goto L_08880EF4;
    case 239u: goto L_08880F38;
    case 240u: goto L_08880F40;
    case 241u: goto L_08880F4C;
    case 242u: goto L_08880F78;
    case 243u: goto L_08880F90;
    case 244u: goto L_08880F98;
    case 245u: goto L_08880FA0;
    case 246u: goto L_08880FA8;
    case 247u: goto L_08880FB8;
    case 248u: goto L_08880FC4;
    case 249u: goto L_08880FC8;
    case 250u: goto L_08880FD0;
    case 251u: goto L_08880FD8;
    case 252u: goto L_08880FE0;
    case 253u: goto L_08880FE8;
    case 254u: goto L_08880FEC;
    case 255u: goto L_08880FF8;
    case 256u: goto L_08881000;
    case 257u: goto L_08881008;
    case 258u: goto L_08881010;
    case 259u: goto L_0888103C;
    case 260u: goto L_08881068;
    case 261u: goto L_0888106C;
    case 262u: goto L_08881080;
    case 263u: goto L_08881088;
    case 264u: goto L_0888108C;
    case 265u: goto L_08881094;
    case 266u: goto L_08881098;
    case 267u: goto L_0888109C;
    case 268u: goto L_088810A4;
    case 269u: goto L_088810B4;
    case 270u: goto L_088810B8;
    case 271u: goto L_088810D8;
    case 272u: goto L_088810E0;
    case 273u: goto L_088810E8;
    case 274u: goto L_088810F4;
    case 275u: goto L_088810FC;
    case 276u: goto L_08881104;
    case 277u: goto L_0888110C;
    case 278u: goto L_08881110;
    case 279u: goto L_08881118;
    case 280u: goto L_08881120;
    case 281u: goto L_08881124;
    case 282u: goto L_0888112C;
    case 283u: goto L_08881134;
    case 284u: goto L_0888113C;
    case 285u: goto L_08881144;
    case 286u: goto L_0888114C;
    case 287u: goto L_08881154;
    case 288u: goto L_0888115C;
    case 289u: goto L_08881164;
    case 290u: goto L_0888116C;
    case 291u: goto L_08881174;
    case 292u: goto L_0888117C;
    case 293u: goto L_08881184;
    case 294u: goto L_0888118C;
    case 295u: goto L_08881190;
    case 296u: goto L_08881198;
    case 297u: goto L_088811A0;
    case 298u: goto L_088811A4;
    case 299u: goto L_088811AC;
    case 300u: goto L_088811B4;
    case 301u: goto L_088811BC;
    case 302u: goto L_088811C4;
    case 303u: goto L_088811CC;
    case 304u: goto L_088811D4;
    case 305u: goto L_088811DC;
    case 306u: goto L_088811E4;
    case 307u: goto L_088811EC;
    case 308u: goto L_088811F8;
    case 309u: goto L_08881200;
    case 310u: goto L_08881208;
    case 311u: goto L_08881210;
    case 312u: goto L_08881220;
    case 313u: goto L_0888122C;
    case 314u: goto L_0888123C;
    case 315u: goto L_08881250;
    case 316u: goto L_08881264;
    case 317u: goto L_08881274;
    case 318u: goto L_08881280;
    case 319u: goto L_08881290;
    case 320u: goto L_088812E0;
    case 321u: goto L_088812F0;
    case 322u: goto L_088812FC;
    case 323u: goto L_08881318;
    case 324u: goto L_08881320;
    case 325u: goto L_0888132C;
    case 326u: goto L_08881334;
    case 327u: goto L_0888134C;
    case 328u: goto L_08881358;
    case 329u: goto L_08881364;
    case 330u: goto L_08881370;
    case 331u: goto L_0888137C;
    case 332u: goto L_0888138C;
    case 333u: goto L_0888139C;
    case 334u: goto L_088813AC;
    case 335u: goto L_088813BC;
    case 336u: goto L_088813C8;
    case 337u: goto L_088813D8;
    case 338u: goto L_088813E4;
    case 339u: goto L_088813F4;
    case 340u: goto L_08881400;
    case 341u: goto L_08881410;
    case 342u: goto L_08881454;
    case 343u: goto L_08881464;
    case 344u: goto L_0888148C;
    case 345u: goto L_0888149C;
    case 346u: goto L_088814A8;
    case 347u: goto L_088814B8;
    case 348u: goto L_088814C0;
    case 349u: goto L_088814CC;
    case 350u: goto L_088814DC;
    case 351u: goto L_088814E8;
    case 352u: goto L_088814F8;
    case 353u: goto L_08881520;
    case 354u: goto L_08881538;
    case 355u: goto L_08881540;
    case 356u: goto L_08881558;
    case 357u: goto L_0888155C;
    case 358u: goto L_08881568;
    case 359u: goto L_08881570;
    case 360u: goto L_08881578;
    case 361u: goto L_08881598;
    case 362u: goto L_088815A0;
    case 363u: goto L_088815B8;
    case 364u: goto L_088815BC;
    case 365u: goto L_088815C0;
    case 366u: goto L_088815D0;
    case 367u: goto L_088815D8;
    case 368u: goto L_088815E0;
    case 369u: goto L_088815F8;
    case 370u: goto L_08881600;
    case 371u: goto L_08881618;
    case 372u: goto L_0888161C;
    case 373u: goto L_08881628;
    case 374u: goto L_08881630;
    case 375u: goto L_08881638;
    case 376u: goto L_08881640;
    case 377u: goto L_08881650;
    case 378u: goto L_0888165C;
    case 379u: goto L_08881664;
    case 380u: goto L_08881674;
    case 381u: goto L_08881680;
    case 382u: goto L_08881690;
    case 383u: goto L_0888169C;
    case 384u: goto L_088816A4;
    case 385u: goto L_088816C8;
    case 386u: goto L_088816D0;
    case 387u: goto L_088816D8;
    case 388u: goto L_088816E0;
    case 389u: goto L_088816EC;
    case 390u: goto L_088816F0;
    case 391u: goto L_0888170C;
    case 392u: goto L_08881714;
    case 393u: goto L_0888171C;
    case 394u: goto L_08881724;
    case 395u: goto L_0888173C;
    case 396u: goto L_08881740;
    case 397u: goto L_08881748;
    case 398u: goto L_08881754;
    case 399u: goto L_0888177C;
    case 400u: goto L_08881784;
    case 401u: goto L_0888178C;
    case 402u: goto L_08881794;
    case 403u: goto L_0888179C;
    case 404u: goto L_088817D4;
    case 405u: goto L_088817DC;
    case 406u: goto L_088817FC;
    case 407u: goto L_08881820;
    case 408u: goto L_08881834;
    case 409u: goto L_0888184C;
    case 410u: goto L_08881854;
    case 411u: goto L_0888185C;
    case 412u: goto L_08881878;
    case 413u: goto L_08881888;
    case 414u: goto L_088818A4;
    case 415u: goto L_088818B4;
    case 416u: goto L_088818C0;
    case 417u: goto L_088818E0;
    case 418u: goto L_08881918;
    case 419u: goto L_08881920;
    case 420u: goto L_08881940;
    case 421u: goto L_08881964;
    case 422u: goto L_08881978;
    case 423u: goto L_08881990;
    case 424u: goto L_08881998;
    case 425u: goto L_088819A0;
    case 426u: goto L_088819BC;
    case 427u: goto L_088819D8;
    case 428u: goto L_088819E8;
    case 429u: goto L_088819F4;
    case 430u: goto L_08881A14;
    case 431u: goto L_08881A40;
    case 432u: goto L_08881A48;
    case 433u: goto L_08881A58;
    case 434u: goto L_08881A60;
    case 435u: goto L_08881A70;
    case 436u: goto L_08881A78;
    case 437u: goto L_08881A84;
    case 438u: goto L_08881A98;
    case 439u: goto L_08881AA8;
    case 440u: goto L_08881AB4;
    case 441u: goto L_08881AC0;
    case 442u: goto L_08881AD0;
    case 443u: goto L_08881AD4;
    case 444u: goto L_08881AF0;
    case 445u: goto L_08881AF8;
    case 446u: goto L_08881B04;
    case 447u: goto L_08881B08;
    case 448u: goto L_08881B1C;
    case 449u: goto L_08881B28;
    case 450u: goto L_08881B40;
    case 451u: goto L_08881B48;
    case 452u: goto L_08881B60;
    case 453u: goto L_08881BAC;
    case 454u: goto L_08881BC0;
    case 455u: goto L_08881BE0;
    case 456u: goto L_08881BEC;
    case 457u: goto L_08881C04;
    case 458u: goto L_08881C20;
    case 459u: goto L_08881C34;
    case 460u: goto L_08881C3C;
    case 461u: goto L_08881C44;
    case 462u: goto L_08881C4C;
    case 463u: goto L_08881C5C;
    case 464u: goto L_08881C68;
    case 465u: goto L_08881C70;
    case 466u: goto L_08881C74;
    case 467u: goto L_08881C80;
    case 468u: goto L_08881C88;
    case 469u: goto L_08881C90;
    case 470u: goto L_08881C98;
    case 471u: goto L_08881CA0;
    case 472u: goto L_08881CA8;
    case 473u: goto L_08881CB0;
    case 474u: goto L_08881CC8;
    case 475u: goto L_08881CD8;
    case 476u: goto L_08881CE0;
    case 477u: goto L_08881CF0;
    case 478u: goto L_08881CFC;
    case 479u: goto L_08881D00;
    case 480u: goto L_08881D08;
    case 481u: goto L_08881D0C;
    case 482u: goto L_08881D18;
    case 483u: goto L_08881D20;
    case 484u: goto L_08881D2C;
    case 485u: goto L_08881D48;
    case 486u: goto L_08881D60;
    case 487u: goto L_08881D78;
    case 488u: goto L_08881DA8;
    case 489u: goto L_08881DAC;
    case 490u: goto L_08881DB8;
    case 491u: goto L_08881DD0;
    case 492u: goto L_08881DE4;
    case 493u: goto L_08881DE8;
    case 494u: goto L_08881DF4;
    case 495u: goto L_08881E00;
    case 496u: goto L_08881E08;
    case 497u: goto L_08881E10;
    case 498u: goto L_08881E34;
    case 499u: goto L_08881E44;
    case 500u: goto L_08881E54;
    case 501u: goto L_08881E5C;
    case 502u: goto L_08881E6C;
    case 503u: goto L_08881E74;
    case 504u: goto L_08881E78;
    case 505u: goto L_08881E84;
    case 506u: goto L_08881E94;
    case 507u: goto L_08881E98;
    case 508u: goto L_08881E9C;
    case 509u: goto L_08881EB0;
    case 510u: goto L_08881EBC;
    case 511u: goto L_08881EC8;
    case 512u: goto L_08881ED0;
    case 513u: goto L_08881ED8;
    case 514u: goto L_08881EF4;
    case 515u: goto L_08881F00;
    case 516u: goto L_08881F10;
    case 517u: goto L_08881F18;
    case 518u: goto L_08881F1C;
    case 519u: goto L_08881F38;
    case 520u: goto L_08881F44;
    case 521u: goto L_08881F4C;
    case 522u: goto L_08881F58;
    case 523u: goto L_08881F94;
    case 524u: goto L_08881FA4;
    case 525u: goto L_08881FA8;
    case 526u: goto L_08881FB4;
    case 527u: goto L_08881FC0;
    case 528u: goto L_08881FD0;
    case 529u: goto L_08881FEC;
    case 530u: goto L_08881FF4;
    case 531u: goto L_08882000;
    case 532u: goto L_08882008;
    case 533u: goto L_08882014;
    case 534u: goto L_08882020;
    case 535u: goto L_08882030;
    case 536u: goto L_0888203C;
    case 537u: goto L_08882040;
    case 538u: goto L_08882050;
    case 539u: goto L_08882058;
    case 540u: goto L_08882060;
    case 541u: goto L_08882068;
    case 542u: goto L_08882070;
    case 543u: goto L_08882080;
    case 544u: goto L_08882088;
    case 545u: goto L_08882094;
    case 546u: goto L_088820A0;
    case 547u: goto L_088820A8;
    case 548u: goto L_088820C8;
    case 549u: goto L_088820D0;
    case 550u: goto L_088820D8;
    case 551u: goto L_088820E0;
    case 552u: goto L_088820E8;
    case 553u: goto L_088820F4;
    case 554u: goto L_088820FC;
    case 555u: goto L_08882108;
    case 556u: goto L_08882110;
    case 557u: goto L_08882120;
    case 558u: goto L_08882128;
    case 559u: goto L_08882130;
    case 560u: goto L_08882138;
    case 561u: goto L_08882144;
    case 562u: goto L_0888214C;
    case 563u: goto L_08882154;
    case 564u: goto L_0888215C;
    case 565u: goto L_08882164;
    case 566u: goto L_0888216C;
    case 567u: goto L_0888217C;
    case 568u: goto L_08882188;
    case 569u: goto L_08882198;
    case 570u: goto L_088821A4;
    case 571u: goto L_088821B4;
    case 572u: goto L_088821C0;
    case 573u: goto L_088821D0;
    case 574u: goto L_08882204;
    case 575u: goto L_08882234;
    case 576u: goto L_08882238;
    case 577u: goto L_08882244;
    case 578u: goto L_0888224C;
    case 579u: goto L_0888225C;
    case 580u: goto L_08882288;
    case 581u: goto L_0888228C;
    case 582u: goto L_08882294;
    case 583u: goto L_0888229C;
    case 584u: goto L_088822A4;
    case 585u: goto L_088822C0;
    case 586u: goto L_088822D8;
    case 587u: goto L_088822E0;
    case 588u: goto L_088822E8;
    case 589u: goto L_08882300;
    case 590u: goto L_08882308;
    case 591u: goto L_08882310;
    case 592u: goto L_0888232C;
    case 593u: goto L_08882334;
    case 594u: goto L_0888233C;
    case 595u: goto L_08882344;
    case 596u: goto L_0888234C;
    case 597u: goto L_0888236C;
    case 598u: goto L_08882370;
    case 599u: goto L_08882378;
    case 600u: goto L_08882380;
    case 601u: goto L_08882384;
    case 602u: goto L_0888238C;
    case 603u: goto L_08882394;
    case 604u: goto L_088823A0;
    case 605u: goto L_088823A8;
    case 606u: goto L_088823B0;
    case 607u: goto L_088823B8;
    case 608u: goto L_088823C0;
    case 609u: goto L_088823C8;
    case 610u: goto L_088823D0;
    case 611u: goto L_088823D8;
    case 612u: goto L_088823E0;
    case 613u: goto L_088823FC;
    case 614u: goto L_08882400;
    case 615u: goto L_08882408;
    case 616u: goto L_08882410;
    case 617u: goto L_08882414;
    case 618u: goto L_0888241C;
    case 619u: goto L_08882424;
    case 620u: goto L_08882430;
    case 621u: goto L_08882438;
    case 622u: goto L_08882440;
    case 623u: goto L_08882448;
    case 624u: goto L_08882450;
    case 625u: goto L_08882458;
    case 626u: goto L_08882460;
    case 627u: goto L_08882468;
    case 628u: goto L_08882488;
    case 629u: goto L_0888248C;
    case 630u: goto L_08882494;
    case 631u: goto L_0888249C;
    case 632u: goto L_088824A4;
    case 633u: goto L_088824B4;
    case 634u: goto L_088824C0;
    case 635u: goto L_088824C8;
    case 636u: goto L_088824CC;
    case 637u: goto L_088824D4;
    case 638u: goto L_088824E0;
    case 639u: goto L_088824E8;
    case 640u: goto L_088824F4;
    case 641u: goto L_088824FC;
    case 642u: goto L_08882504;
    case 643u: goto L_0888250C;
    case 644u: goto L_08882520;
    case 645u: goto L_08882528;
    case 646u: goto L_08882540;
    case 647u: goto L_08882554;
    case 648u: goto L_0888255C;
    case 649u: goto L_08882570;
    case 650u: goto L_08882578;
    case 651u: goto L_0888258C;
    case 652u: goto L_08882594;
    case 653u: goto L_088825D0;
    case 654u: goto L_088825D8;
    case 655u: goto L_08882630;
    case 656u: goto L_08882638;
    case 657u: goto L_0888265C;
    case 658u: goto L_08882698;
    case 659u: goto L_088826A0;
    case 660u: goto L_088826A8;
    case 661u: goto L_08882704;
    case 662u: goto L_0888270C;
    case 663u: goto L_08882714;
    case 664u: goto L_08882720;
    case 665u: goto L_0888272C;
    case 666u: goto L_08882734;
    case 667u: goto L_0888273C;
    case 668u: goto L_08882744;
    case 669u: goto L_08882768;
    case 670u: goto L_0888277C;
    case 671u: goto L_08882784;
    case 672u: goto L_0888278C;
    case 673u: goto L_088827AC;
    case 674u: goto L_088827B0;
    case 675u: goto L_088827B8;
    case 676u: goto L_088827C0;
    case 677u: goto L_088827C8;
    case 678u: goto L_088827D8;
    case 679u: goto L_088827E0;
    case 680u: goto L_088827E8;
    case 681u: goto L_088827F8;
    case 682u: goto L_0888280C;
    case 683u: goto L_08882814;
    case 684u: goto L_08882830;
    case 685u: goto L_08882838;
    case 686u: goto L_08882840;
    case 687u: goto L_08882848;
    case 688u: goto L_08882868;
    case 689u: goto L_0888286C;
    case 690u: goto L_08882874;
    case 691u: goto L_0888287C;
    case 692u: goto L_08882880;
    case 693u: goto L_08882888;
    case 694u: goto L_08882890;
    case 695u: goto L_0888289C;
    case 696u: goto L_088828A4;
    case 697u: goto L_088828AC;
    case 698u: goto L_088828B4;
    case 699u: goto L_088828BC;
    case 700u: goto L_088828C4;
    case 701u: goto L_088828C8;
    case 702u: goto L_088828D0;
    case 703u: goto L_088828DC;
    case 704u: goto L_088828E4;
    case 705u: goto L_088828F0;
    case 706u: goto L_088828F8;
    case 707u: goto L_08882900;
    case 708u: goto L_08882908;
    case 709u: goto L_08882920;
    case 710u: goto L_08882934;
    case 711u: goto L_0888293C;
    case 712u: goto L_08882948;
    case 713u: goto L_08882954;
    case 714u: goto L_0888295C;
    case 715u: goto L_08882964;
    case 716u: goto L_08882970;
    case 717u: goto L_0888297C;
    case 718u: goto L_08882980;
    case 719u: goto L_08882988;
    case 720u: goto L_088829A0;
    case 721u: goto L_088829A8;
    case 722u: goto L_088829C0;
    case 723u: goto L_088829DC;
    case 724u: goto L_088829EC;
    case 725u: goto L_088829F0;
    case 726u: goto L_088829F8;
    case 727u: goto L_08882A10;
    case 728u: goto L_08882A2C;
    case 729u: goto L_08882A38;
    case 730u: goto L_08882A40;
    case 731u: goto L_08882A8C;
    case 732u: goto L_08882AA0;
    case 733u: goto L_08882AA8;
    case 734u: goto L_08882ABC;
    case 735u: goto L_08882AC0;
    case 736u: goto L_08882AE8;
    case 737u: goto L_08882AF0;
    case 738u: goto L_08882B04;
    case 739u: goto L_08882B20;
    case 740u: goto L_08882B28;
    case 741u: goto L_08882B3C;
    case 742u: goto L_08882B40;
    case 743u: goto L_08882B60;
    case 744u: goto L_08882B68;
    case 745u: goto L_08882B80;
    case 746u: goto L_08882B94;
    case 747u: goto L_08882B9C;
    case 748u: goto L_08882BBC;
    case 749u: goto L_08882BC0;
    case 750u: goto L_08882BC8;
    case 751u: goto L_08882BD0;
    case 752u: goto L_08882BE0;
    case 753u: goto L_08882BF4;
    case 754u: goto L_08882BFC;
    case 755u: goto L_08882C18;
    case 756u: goto L_08882C20;
    case 757u: goto L_08882C28;
    case 758u: goto L_08882C48;
    case 759u: goto L_08882C4C;
    case 760u: goto L_08882C54;
    case 761u: goto L_08882C5C;
    case 762u: goto L_08882C60;
    case 763u: goto L_08882C68;
    case 764u: goto L_08882C70;
    case 765u: goto L_08882C7C;
    case 766u: goto L_08882C84;
    case 767u: goto L_08882C8C;
    case 768u: goto L_08882C94;
    case 769u: goto L_08882C9C;
    case 770u: goto L_08882CB4;
    case 771u: goto L_08882CC8;
    case 772u: goto L_08882CD0;
    case 773u: goto L_08882CF4;
    case 774u: goto L_08882D00;
    case 775u: goto L_08882D18;
    case 776u: goto L_08882D34;
    case 777u: goto L_08882D3C;
    case 778u: goto L_08882D40;
    case 779u: goto L_08882D48;
    case 780u: goto L_08882D5C;
    case 781u: goto L_08882D78;
    case 782u: goto L_08882D98;
    case 783u: goto L_08882DA0;
    case 784u: goto L_08882DA8;
    case 785u: goto L_08882DB8;
    case 786u: goto L_08882DC0;
    case 787u: goto L_08882DC4;
    case 788u: goto L_08882DCC;
    case 789u: goto L_08882DD0;
    case 790u: goto L_08882DD8;
    case 791u: goto L_08882DDC;
    case 792u: goto L_08882DE4;
    case 793u: goto L_08882DE8;
    case 794u: goto L_08882DF0;
    case 795u: goto L_08882DF8;
    case 796u: goto L_08882E00;
    case 797u: goto L_08882E04;
    case 798u: goto L_08882E0C;
    case 799u: goto L_08882E28;
    case 800u: goto L_08882E30;
    case 801u: goto L_08882E38;
    case 802u: goto L_08882E40;
    case 803u: goto L_08882E48;
    case 804u: goto L_08882E50;
    case 805u: goto L_08882E58;
    case 806u: goto L_08882E60;
    case 807u: goto L_08882E68;
    case 808u: goto L_08882E70;
    case 809u: goto L_08883080;
    case 810u: goto L_08883090;
    case 811u: goto L_08883098;
    case 812u: goto L_088830A0;
    case 813u: goto L_088830AC;
    case 814u: goto L_08883114;
    case 815u: goto L_08883138;
    case 816u: goto L_0888314C;
    case 817u: goto L_088831A0;
    case 818u: goto L_088831C4;
    case 819u: goto L_088831D0;
    case 820u: goto L_088831EC;
    case 821u: goto L_08883208;
    case 822u: goto L_08883210;
    case 823u: goto L_08883230;
    case 824u: goto L_08883248;
    case 825u: goto L_08883250;
    case 826u: goto L_08883268;
    case 827u: goto L_08883284;
    case 828u: goto L_08883290;
    case 829u: goto L_088832B0;
    case 830u: goto L_088832C8;
    case 831u: goto L_088832D0;
    case 832u: goto L_088832E8;
    case 833u: goto L_088832FC;
    case 834u: goto L_08883304;
    case 835u: goto L_0888330C;
    case 836u: goto L_08883320;
    case 837u: goto L_08883334;
    case 838u: goto L_0888333C;
    case 839u: goto L_08883344;
    case 840u: goto L_08883358;
    case 841u: goto L_08883370;
    case 842u: goto L_08883378;
    case 843u: goto L_08883384;
    case 844u: goto L_088833A0;
    case 845u: goto L_088833BC;
    case 846u: goto L_088833C4;
    case 847u: goto L_08883508;
    case 848u: goto L_08883528;
    case 849u: goto L_08883530;
    case 850u: goto L_08883544;
    case 851u: goto L_0888355C;
    case 852u: goto L_08883568;
    case 853u: goto L_08883578;
    case 854u: goto L_088836D8;
    case 855u: goto L_088836F0;
    case 856u: goto L_088836F8;
    case 857u: goto L_08883710;
    case 858u: goto L_08883718;
    case 859u: goto L_0888375C;
    case 860u: goto L_0888378C;
    case 861u: goto L_08883798;
    case 862u: goto L_088837AC;
    case 863u: goto L_088837B0;
    case 864u: goto L_088837BC;
    case 865u: goto L_088837D0;
    case 866u: goto L_088837E4;
    case 867u: goto L_088837FC;
    case 868u: goto L_0888380C;
    case 869u: goto L_08883810;
    case 870u: goto L_08883818;
    case 871u: goto L_08883820;
    case 872u: goto L_08883888;
    case 873u: goto L_0888389C;
    case 874u: goto L_088838B4;
    case 875u: goto L_088838C4;
    case 876u: goto L_088838D0;
    case 877u: goto L_088838D8;
    case 878u: goto L_08883900;
    case 879u: goto L_08883908;
    case 880u: goto L_08883910;
    case 881u: goto L_08883918;
    case 882u: goto L_08883924;
    case 883u: goto L_08883934;
    case 884u: goto L_0888393C;
    case 885u: goto L_0888394C;
    case 886u: goto L_08883990;
    case 887u: goto L_088839C0;
    case 888u: goto L_088839CC;
    case 889u: goto L_088839E0;
    case 890u: goto L_088839E4;
    case 891u: goto L_088839F0;
    case 892u: goto L_08883A04;
    case 893u: goto L_08883A18;
    case 894u: goto L_08883A30;
    case 895u: goto L_08883A40;
    case 896u: goto L_08883A44;
    case 897u: goto L_08883A4C;
    case 898u: goto L_08883A54;
    case 899u: goto L_08883ABC;
    case 900u: goto L_08883AD0;
    case 901u: goto L_08883AE8;
    case 902u: goto L_08883AF8;
    case 903u: goto L_08883B04;
    case 904u: goto L_08883B0C;
    case 905u: goto L_08883B34;
    case 906u: goto L_08883B3C;
    case 907u: goto L_08883B44;
    case 908u: goto L_08883B4C;
    case 909u: goto L_08883B58;
    case 910u: goto L_08883B68;
    case 911u: goto L_08883B70;
    case 912u: goto L_08883BDC;
    case 913u: goto L_08883C18;
    case 914u: goto L_08883C1C;
    case 915u: goto L_08883C24;
    case 916u: goto L_08883C2C;
    case 917u: goto L_08883C34;
    case 918u: goto L_08883C3C;
    case 919u: goto L_08883C7C;
    case 920u: goto L_08883C84;
    case 921u: goto L_08883C8C;
    case 922u: goto L_08883C98;
    case 923u: goto L_08883CA8;
    case 924u: goto L_08883CB4;
    case 925u: goto L_08883CEC;
    case 926u: goto L_08883D04;
    case 927u: goto L_08883D10;
    case 928u: goto L_08883D2C;
    case 929u: goto L_08883D34;
    case 930u: goto L_08883D3C;
    case 931u: goto L_08883D44;
    case 932u: goto L_08883D48;
    case 933u: goto L_08883D50;
    case 934u: goto L_08883D64;
    case 935u: goto L_08883D6C;
    case 936u: goto L_08883D74;
    case 937u: goto L_08883D98;
    case 938u: goto L_08883DAC;
    case 939u: goto L_08883DB4;
    case 940u: goto L_08883DC4;
    case 941u: goto L_08883DCC;
    case 942u: goto L_08883E98;
    case 943u: goto L_08883ED4;
    case 944u: goto L_08883EF8;
    case 945u: goto L_08883F08;
    case 946u: goto L_08883F0C;
    case 947u: goto L_08883F18;
    case 948u: goto L_08883F1C;
    case 949u: goto L_08883F24;
    case 950u: goto L_08883F28;
    case 951u: goto L_08883F30;
    case 952u: goto L_08883F34;
    case 953u: goto L_08883F3C;
    case 954u: goto L_08883F40;
    case 955u: goto L_08883F48;
    case 956u: goto L_08883F50;
    case 957u: goto L_08883F5C;
    case 958u: goto L_08883F60;
    case 959u: goto L_08883F68;
    case 960u: goto L_08883F70;
    case 961u: goto L_08883F84;
    case 962u: goto L_08883F88;
    case 963u: goto L_08883F90;
    case 964u: goto L_08883F94;
    case 965u: goto L_08883FA0;
    case 966u: goto L_08883FA4;
    case 967u: goto L_08883FB0;
    case 968u: goto L_08883FBC;
    case 969u: goto L_08883FC0;
    case 970u: goto L_08883FCC;
    case 971u: goto L_08883FD4;
    case 972u: goto L_08883FD8;
    case 973u: goto L_08883FF4;
    case 974u: goto L_08883FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08880000:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0888004C;
      }
      goto L_0888000C;
    }
L_0888000C:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0888004C;
      }
      goto L_0888001C;
    }
L_0888001C:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0888004C;
      }
      goto L_0888002C;
    }
L_0888002C:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0888004C;
      }
      goto L_0888003C;
    }
L_0888003C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    if (ctx.gpr[14] != 0u) {
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
        (void)rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 592u, 0x0887FFC4u>(ctx, &aot_mem); return;
    }
    goto L_0888004C;
L_0888004C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_088801AC;
      }
      goto L_08880058;
    }
L_08880058:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(180));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(17, ctx.lo);
    ctx.set_gpr(31, 0x08880070u);
    ctx.set_gpr(18, ctx.gpr[17] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 18u, 0x088A015Cu>(ctx, &aot_mem) && ctx.pc == 0x08880070u) goto L_08880070;
    return;
L_08880070:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0888007Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 32u, 0x088A022Cu>(ctx, &aot_mem) && ctx.pc == 0x0888007Cu) goto L_0888007C;
    return;
L_0888007C:
    ctx.set_gpr(16, ctx.gpr[2] >> 31u);
    ctx.set_gpr(25, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08880090u);
    ctx.set_gpr(20, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[25]) >> 1u));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 46u, 0x088A02FCu>(ctx, &aot_mem) && ctx.pc == 0x08880090u) goto L_08880090;
    return;
L_08880090:
    ctx.set_gpr(24, ctx.gpr[2] >> 31u);
    ctx.set_gpr(15, ctx.gpr[2] + ctx.gpr[24]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 1u));
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088800B4u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 81u, 0x08874C70u>(ctx, &aot_mem) && ctx.pc == 0x088800B4u) goto L_088800B4;
    return;
L_088800B4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_088801AC;
      }
      goto L_088800C0;
    }
L_088800C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2184u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(3680));
    ctx.set_gpr(31, 0x088800D4u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 229u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x088800D4u) goto L_088800D4;
    return;
L_088800D4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08880154;
      }
      goto L_088800E4;
    }
L_088800E4:
    ctx.set_gpr(22, static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.set_gpr(3, ctx.gpr[19] & 3u);
      if (branch_taken) {
          goto L_088801D8;
      }
      goto L_088800F4;
    }
L_088800F4:
    ctx.set_gpr(15, ctx.gpr[7] << 2u);
    ctx.set_gpr(24, ctx.gpr[15] + ctx.gpr[21]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[15] + ctx.gpr[8]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08880154;
      }
      goto L_08880114;
    }
L_08880114:
    ctx.set_gpr(25, ctx.gpr[7] << 2u);
    ctx.set_gpr(6, ctx.gpr[25] + ctx.gpr[21]);
    ctx.set_gpr(4, ctx.gpr[25] + ctx.gpr[8]);
    goto L_08880120;
L_08880120:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(21, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08880120;
      }
      goto L_08880154;
    }
L_08880154:
    ctx.set_gpr(9, 32767u << 16u);
    ctx.set_gpr(22, ctx.gpr[9] | 65535u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(160), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(168), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(172), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), 0u);
    goto L_088801AC;
L_088801AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088801D8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08880114;
      }
      goto L_088801E0;
    }
L_088801E0:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088800F4;
      }
      goto L_088801E8;
    }
L_088801E8:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(14, ctx.gpr[7] << 2u);
      if (branch_taken) {
          goto L_08880200;
      }
      goto L_088801F0;
    }
L_088801F0:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    ctx.set_gpr(14, ctx.gpr[7] << 2u);
    goto L_08880200;
L_08880200:
    ctx.set_gpr(4, ctx.gpr[14] + ctx.gpr[21]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[14] + ctx.gpr[8]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[13]);
    goto L_088800F4;
L_08880218:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.set_gpr(6, 0u | 51200u);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x08880268u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08880268u) goto L_08880268;
    return;
L_08880268:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08880300;
      }
      goto L_08880274;
    }
L_08880274:
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(3, ctx.gpr[6] & 3u);
      if (branch_taken) {
          goto L_08880548;
      }
      goto L_08880284;
    }
L_08880284:
    ctx.set_gpr(13, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(23, ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08880304;
      }
      goto L_08880294;
    }
L_08880294:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[14] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
        goto L_08880308;
    }
    goto L_088802A4;
L_088802A4:
    ctx.set_gpr(16, ctx.gpr[4] + ctx.gpr[5]);
    goto L_088802A8;
L_088802A8:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.set_gpr(23, ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08880304;
      }
      goto L_088802B4;
    }
L_088802B4:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
        goto L_08880308;
    }
    goto L_088802C8;
L_088802C8:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(23, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(21, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.set_gpr(23, ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08880304;
      }
      goto L_088802DC;
    }
L_088802DC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[24] != 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
        goto L_08880308;
    }
    goto L_088802F0;
L_088802F0:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088802A8;
      }
      goto L_08880300;
    }
L_08880300:
    ctx.set_gpr(23, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08880304;
L_08880304:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_08880308;
L_08880308:
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08880314u);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x08880314u) goto L_08880314;
    return;
L_08880314:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x0888032Cu);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888032Cu) goto L_0888032C;
    return;
L_0888032C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08880364;
    }
    goto L_0888033C;
L_0888033C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08880348u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 138u, 0x08875124u>(ctx, &aot_mem) && ctx.pc == 0x08880348u) goto L_08880348;
    return;
L_08880348:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08880360;
      }
      goto L_08880350;
    }
L_08880350:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088803A4;
      }
      goto L_08880360;
    }
L_08880360:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08880364;
L_08880364:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[19];
    ctx.set_gpr(31, 0x08880378u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08880378u) goto L_08880378;
    return;
L_08880378:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
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
L_088803A4:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(154))))));
        goto L_088804EC;
    }
    goto L_088803AC;
L_088803AC:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
      if (branch_taken) {
          goto L_0888049C;
      }
      goto L_088803B8;
    }
L_088803B8:
    ctx.set_gpr(31, 0x088803C0u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 231u, 0x08875980u>(ctx, &aot_mem) && ctx.pc == 0x088803C0u) goto L_088803C0;
    return;
L_088803C0:
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[14];
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08880494;
      }
      goto L_088803CC;
    }
L_088803CC:
    ctx.set_gpr(31, 0x088803D4u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 231u, 0x08875980u>(ctx, &aot_mem) && ctx.pc == 0x088803D4u) goto L_088803D4;
    return;
L_088803D4:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08880478;
      }
      goto L_088803E0;
    }
L_088803E0:
    ctx.set_gpr(31, 0x088803E8u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 231u, 0x08875980u>(ctx, &aot_mem) && ctx.pc == 0x088803E8u) goto L_088803E8;
    return;
L_088803E8:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-10));
    ctx.set_gpr(8, ctx.gpr[2] ^ 20u);
    ctx.set_gpr(25, ctx.gpr[6] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(24, ctx.gpr[25] | ctx.gpr[7]);
    if (ctx.gpr[24] != 0u) {
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08880464;
    }
    goto L_08880404;
L_08880404:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (ctx.gpr[2] == ctx.gpr[5]) {
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08880464;
    }
    goto L_08880410;
L_08880410:
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x08880424u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x08880424u) goto L_08880424;
    return;
L_08880424:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[22];
    ctx.set_gpr(31, 0x0888043Cu);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888043Cu) goto L_0888043C;
    return;
L_0888043C:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08880450;
L_08880450:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08880458u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08880458u) goto L_08880458;
    return;
L_08880458:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_0888045C;
L_0888045C:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08880378;
L_08880464:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    goto L_08880450;
L_08880478:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? ctx.gpr[17] : ctx.gpr[18]);
    ctx.set_gpr(31, 0x0888048Cu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0888048Cu) goto L_0888048C;
    return;
L_0888048C:
    // nop
    goto L_088803E0;
L_08880494:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[15]));
    goto L_088803CC;
L_0888049C:
    ctx.set_gpr(31, 0x088804A4u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 231u, 0x08875980u>(ctx, &aot_mem) && ctx.pc == 0x088804A4u) goto L_088804A4;
    return;
L_088804A4:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x088804B0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 233u, 0x08875990u>(ctx, &aot_mem) && ctx.pc == 0x088804B0u) goto L_088804B0;
    return;
L_088804B0:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x088804BCu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 232u, 0x08875988u>(ctx, &aot_mem) && ctx.pc == 0x088804BCu) goto L_088804BC;
    return;
L_088804BC:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x088804C8u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 249u, 0x08875A34u>(ctx, &aot_mem) && ctx.pc == 0x088804C8u) goto L_088804C8;
    return;
L_088804C8:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[13];
    ctx.set_gpr(31, 0x088804E4u);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088804E4u) goto L_088804E4;
    return;
L_088804E4:
    // nop
    goto L_088803B8;
L_088804EC:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08880504;
    }
    goto L_088804F4;
L_088804F4:
    ctx.set_gpr(31, 0x088804FCu);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 228u, 0x088758C4u>(ctx, &aot_mem) && ctx.pc == 0x088804FCu) goto L_088804FC;
    return;
L_088804FC:
    ctx.set_gpr(21, 0u + 0u);
    goto L_088803AC;
L_08880504:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[22];
    ctx.set_gpr(31, 0x08880518u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08880518u) goto L_08880518;
    return;
L_08880518:
    ctx.set_gpr(31, 0x08880520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 221u, 0x088757B4u>(ctx, &aot_mem) && ctx.pc == 0x08880520u) goto L_08880520;
    return;
L_08880520:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(11, 2225u << 16u);
      if (branch_taken) {
          goto L_08880530;
      }
      goto L_08880528;
    }
L_08880528:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    goto L_0888045C;
L_08880530:
    ctx.set_gpr(10, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[11] + static_cast<std::uint32_t>(15236));
    ctx.set_gpr(31, 0x08880540u);
    ctx.set_gpr(5, ctx.gpr[10] + static_cast<std::uint32_t>(15268));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 85u, 0x08879084u>(ctx, &aot_mem) && ctx.pc == 0x08880540u) goto L_08880540;
    return;
L_08880540:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    goto L_0888045C;
L_08880548:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088802A4;
      }
      goto L_08880550;
    }
L_08880550:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08880284;
      }
      goto L_08880558;
    }
L_08880558:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(11, ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08880574;
      }
      goto L_08880560;
    }
L_08880560:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(23, ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08880304;
      }
      goto L_0888056C;
    }
L_0888056C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[4] + ctx.gpr[5]);
    goto L_08880574;
L_08880574:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(23, ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08880304;
      }
      goto L_08880580;
    }
L_08880580:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08880284;
L_08880588:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088805DC;
      }
      goto L_088805C0;
    }
L_088805C0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
        goto L_088805E0;
    }
    goto L_088805D0;
L_088805D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088809D0;
      }
      goto L_088805DC;
    }
L_088805DC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    goto L_088805E0;
L_088805E0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_088809AC;
    }
    goto L_088805EC;
L_088805EC:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_088805F0;
L_088805F0:
    ctx.set_gpr(7, 32767u << 16u);
    ctx.set_gpr(20, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[7] | 65535u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x08880610u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08880610u) goto L_08880610;
    return;
L_08880610:
    ctx.set_gpr(31, 0x08880618u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 231u, 0x08875980u>(ctx, &aot_mem) && ctx.pc == 0x08880618u) goto L_08880618;
    return;
L_08880618:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08880650;
      }
      goto L_08880620;
    }
L_08880620:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(11, 0u | 32769u);
      if (branch_taken) {
          goto L_08880650;
      }
      goto L_08880630;
    }
L_08880630:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(21, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(15, ctx.gpr[21] << 8u);
    ctx.set_gpr(14, (ctx.gpr[21] >> 8u) & 0x000000FFu);
    ctx.set_gpr(13, ctx.gpr[14] | ctx.gpr[15]);
    ctx.set_gpr(12, ctx.gpr[13] & 65535u);
    if (ctx.gpr[12] == ctx.gpr[11]) {
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(3));
        goto L_08880888;
    }
    goto L_08880650;
L_08880650:
    ctx.set_gpr(31, 0x08880658u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08880BE0;
L_08880658:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[24]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08880840;
      }
      goto L_08880668;
    }
L_08880668:
    ctx.set_gpr(31, 0x08880670u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 231u, 0x08875980u>(ctx, &aot_mem) && ctx.pc == 0x08880670u) goto L_08880670;
    return;
L_08880670:
    ctx.set_gpr(25, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[25];
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088806C4;
      }
      goto L_0888067C;
    }
L_0888067C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(3));
    goto L_08880680;
L_08880680:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08880684;
L_08880684:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    goto L_08880698;
L_08880698:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088806A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088806A0u) goto L_088806A0;
    return;
L_088806A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_088806A4;
L_088806A4:
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
L_088806C4:
    ctx.set_gpr(31, 0x088806CCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08880BFC;
L_088806CC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08880680;
      }
      goto L_088806D4;
    }
L_088806D4:
    ctx.set_gpr(31, 0x088806DCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08880BC4;
L_088806DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088806F4u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088806F4u) goto L_088806F4;
    return;
L_088806F4:
    ctx.set_gpr(11, ctx.gpr[2] >> 31u);
    ctx.set_gpr(10, ctx.gpr[2] + ctx.gpr[11]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880724;
      }
      goto L_0888070C;
    }
L_0888070C:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08880710;
L_08880710:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08880698;
L_08880724:
    ctx.set_gpr(31, 0x0888072Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08880BFC;
L_0888072C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08880748;
      }
      goto L_08880738;
    }
L_08880738:
    ctx.set_gpr(31, 0x08880740u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 231u, 0x08875980u>(ctx, &aot_mem) && ctx.pc == 0x08880740u) goto L_08880740;
    return;
L_08880740:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08880798;
      }
      goto L_08880748;
    }
L_08880748:
    ctx.set_gpr(31, 0x08880750u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 231u, 0x08875980u>(ctx, &aot_mem) && ctx.pc == 0x08880750u) goto L_08880750;
    return;
L_08880750:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_0888077C;
    }
    goto L_0888075C;
L_0888075C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_08880760;
L_08880760:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x0888076Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 281u, 0x08875C2Cu>(ctx, &aot_mem) && ctx.pc == 0x0888076Cu) goto L_0888076C;
    return;
L_0888076C:
    ctx.set_gpr(31, 0x08880774u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 287u, 0x08875CACu>(ctx, &aot_mem) && ctx.pc == 0x08880774u) goto L_08880774;
    return;
L_08880774:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_088806A4;
L_0888077C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[18];
    ctx.set_gpr(31, 0x08880790u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08880790u) goto L_08880790;
    return;
L_08880790:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_08880760;
L_08880798:
    ctx.set_gpr(31, 0x088807A0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 238u, 0x088759C8u>(ctx, &aot_mem) && ctx.pc == 0x088807A0u) goto L_088807A0;
    return;
L_088807A0:
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[13];
    ctx.set_gpr(7, 2225u << 16u);
      if (branch_taken) {
          goto L_088807C4;
      }
      goto L_088807AC;
    }
L_088807AC:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[7] + static_cast<std::uint32_t>(15304));
    ctx.set_gpr(31, 0x088807BCu);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(15340));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 85u, 0x08879084u>(ctx, &aot_mem) && ctx.pc == 0x088807BCu) goto L_088807BC;
    return;
L_088807BC:
    // nop
    goto L_08880748;
L_088807C4:
    ctx.set_gpr(31, 0x088807CCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 233u, 0x08875990u>(ctx, &aot_mem) && ctx.pc == 0x088807CCu) goto L_088807CC;
    return;
L_088807CC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[2] == 0u) {
    ctx.pc = 0x088807D4u; rt.stop("Allegrex BREAK code 7 at 0x088807D4"); return;
        goto L_088807D8;
    }
    goto L_088807D8;
L_088807D8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(9, ctx.gpr[8] >> 31u);
    ctx.set_gpr(25, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[25]) >> 1u));
    ctx.set_gpr(15, ctx.gpr[5] + ctx.gpr[24]);
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(16, ctx.gpr[21] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08880748;
      }
      goto L_08880800;
    }
L_08880800:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(21, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(31, 0x08880820u);
    ctx.set_gpr(5, ctx.gpr[2] << 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x08880820u) goto L_08880820;
    return;
L_08880820:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[21];
    ctx.set_gpr(31, 0x08880838u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08880838u) goto L_08880838;
    return;
L_08880838:
    // nop
    goto L_08880748;
L_08880840:
    ctx.set_gpr(31, 0x08880848u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 231u, 0x08875980u>(ctx, &aot_mem) && ctx.pc == 0x08880848u) goto L_08880848;
    return;
L_08880848:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088806D4;
      }
      goto L_08880854;
    }
L_08880854:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(9, ctx.gpr[2] + static_cast<std::uint32_t>(576));
      if (branch_taken) {
          goto L_0888086C;
      }
      goto L_08880860;
    }
L_08880860:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == 0u) ctx.set_gpr(16, ctx.gpr[8]);
    goto L_0888086C;
L_0888086C:
    ctx.set_gpr(2, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == 0u) ctx.set_gpr(16, ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088806D4;
      }
      goto L_08880880;
    }
L_08880880:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08880684;
L_08880888:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.set_gpr(31, 0x08880894u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 24u, 0x08878604u>(ctx, &aot_mem) && ctx.pc == 0x08880894u) goto L_08880894;
    return;
L_08880894:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
        goto L_088808F8;
    }
    goto L_0888089C;
L_0888089C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, static_cast<std::int32_t>(ctx.gpr[24]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[19] != 0u) {
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08880710;
    }
    goto L_088808B0;
L_088808B0:
    ctx.set_gpr(21, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088808C4u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x088808C4u) goto L_088808C4;
    return;
L_088808C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x088808DCu);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088808DCu) goto L_088808DC;
    return;
L_088808DC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088808F4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088808F4u) goto L_088808F4;
    return;
L_088808F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    goto L_088808F8;
L_088808F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_088806A4;
      }
      goto L_08880900;
    }
L_08880900:
    ctx.set_gpr(19, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08880908;
L_08880908:
    ctx.set_gpr(3, 32767u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[3] | 65535u);
    jump_target = ctx.gpr[9];
    ctx.set_gpr(31, 0x08880924u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08880924u) goto L_08880924;
    return;
L_08880924:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_088806A0;
      }
      goto L_08880930;
    }
L_08880930:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.set_gpr(16, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0888095C;
      }
      goto L_08880938;
    }
L_08880938:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(10, ctx.gpr[6] + ctx.gpr[5]);
    goto L_08880940;
L_08880940:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0888095C;
      }
      goto L_0888094C;
    }
L_0888094C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(10, ctx.gpr[6] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08880940;
      }
      goto L_0888095C;
    }
L_0888095C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0888096Cu);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0888096Cu) goto L_0888096C;
    return;
L_0888096C:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[13];
    ctx.set_gpr(31, 0x08880984u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08880984u) goto L_08880984;
    return;
L_08880984:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[11];
    ctx.set_gpr(31, 0x0888099Cu);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888099Cu) goto L_0888099C;
    return;
L_0888099C:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08880908;
    }
    goto L_088809A4;
L_088809A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_088806A4;
L_088809AC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[20];
    ctx.set_gpr(31, 0x088809BCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088809BCu) goto L_088809BC;
    return;
L_088809BC:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_088805F0;
    }
    goto L_088809C4;
L_088809C4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_088806A0;
L_088809D0:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088809D8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088809D8u) goto L_088809D8;
    return;
L_088809D8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    goto L_088805E0;
L_088809E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08880A1Cu);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 249u, 0x08875A34u>(ctx, &aot_mem) && ctx.pc == 0x08880A1Cu) goto L_08880A1C;
    return;
L_08880A1C:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08880A28u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 296u, 0x08875D34u>(ctx, &aot_mem) && ctx.pc == 0x08880A28u) goto L_08880A28;
    return;
L_08880A28:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08880A34u);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 297u, 0x08875D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08880A34u) goto L_08880A34;
    return;
L_08880A34:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08880A40u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 231u, 0x08875980u>(ctx, &aot_mem) && ctx.pc == 0x08880A40u) goto L_08880A40;
    return;
L_08880A40:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08880BAC;
      }
      goto L_08880A4C;
    }
L_08880A4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    goto L_08880A50;
L_08880A50:
    ctx.set_gpr(3, ctx.gpr[19] - ctx.gpr[4]);
    ctx.set_gpr(20, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[20]) ? ctx.gpr[3] : ctx.gpr[20]);
    ctx.set_gpr(21, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08880A5C;
L_08880A5C:
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08880A70u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x08880A70u) goto L_08880A70;
    return;
L_08880A70:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x08880A8Cu);
    ctx.set_gpr(19, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08880A8Cu) goto L_08880A8C;
    return;
L_08880A8C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    jump_target = ctx.gpr[7];
    ctx.set_gpr(31, 0x08880AA8u);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08880AA8u) goto L_08880AA8;
    return;
L_08880AA8:
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    goto L_08880AAC;
L_08880AAC:
    ctx.set_gpr(31, 0x08880AB4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 233u, 0x08875990u>(ctx, &aot_mem) && ctx.pc == 0x08880AB4u) goto L_08880AB4;
    return;
L_08880AB4:
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] << 1u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08880B3C;
      }
      goto L_08880AD0;
    }
L_08880AD0:
    ctx.set_gpr(31, 0x08880AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x08880AD8u) goto L_08880AD8;
    return;
L_08880AD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08880B24;
      }
      goto L_08880AE4;
    }
L_08880AE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08880AE8;
L_08880AE8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[11];
    ctx.set_gpr(31, 0x08880B00u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08880B00u) goto L_08880B00;
    return;
L_08880B00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[10];
    ctx.set_gpr(31, 0x08880B1Cu);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08880B1Cu) goto L_08880B1C;
    return;
L_08880B1C:
    // nop
    goto L_08880AAC;
L_08880B24:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08880B34u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08880B34u) goto L_08880B34;
    return;
L_08880B34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08880AE8;
L_08880B3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, ctx.gpr[24] + ctx.gpr[23]);
    ctx.set_gpr(15, ctx.gpr[21] + ctx.gpr[20]);
    ctx.set_gpr(19, ctx.gpr[5] + ctx.gpr[23]);
    ctx.set_gpr(18, ctx.gpr[4] + ctx.gpr[20]);
    ctx.set_gpr(14, ctx.gpr[25] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[15]);
    ctx.set_gpr(31, 0x08880B80u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[14]);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 292u, 0x08875CF0u>(ctx, &aot_mem) && ctx.pc == 0x08880B80u) goto L_08880B80;
    return;
L_08880B80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
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
L_08880BAC:
    ctx.set_gpr(31, 0x08880BB4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08880BFC;
L_08880BB4:
    if (ctx.gpr[2] != ctx.gpr[16]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
        goto L_08880A50;
    }
    goto L_08880BBC;
L_08880BBC:
    ctx.set_gpr(21, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08880A5C;
L_08880BC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08880BD4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 247u, 0x08875A24u>(ctx, &aot_mem) && ctx.pc == 0x08880BD4u) goto L_08880BD4;
    return;
L_08880BD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880BE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08880BF0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 249u, 0x08875A34u>(ctx, &aot_mem) && ctx.pc == 0x08880BF0u) goto L_08880BF0;
    return;
L_08880BF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880BFC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880C04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08880C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 220u, 0x088757A8u>(ctx, &aot_mem) && ctx.pc == 0x08880C14u) goto L_08880C14;
    return;
L_08880C14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880C20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08880C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 221u, 0x088757B4u>(ctx, &aot_mem) && ctx.pc == 0x08880C30u) goto L_08880C30;
    return;
L_08880C30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880C3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26480)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08880C70;
      }
      goto L_08880C54;
    }
L_08880C54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26480)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26480), ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880C70:
    ctx.set_gpr(31, 0x08880C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 222u, 0x088757C0u>(ctx, &aot_mem) && ctx.pc == 0x08880C78u) goto L_08880C78;
    return;
L_08880C78:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-4516));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08880C8Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2880));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08880C8Cu) goto L_08880C8C;
    return;
L_08880C8C:
    // nop
    goto L_08880C54;
L_08880C94:
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26480)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-26480), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-4516));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26480)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2880));
      if (branch_taken) {
          goto L_08880CD0;
      }
      goto L_08880CC4;
    }
L_08880CC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08880CC8;
L_08880CC8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880CD0:
    ctx.set_gpr(31, 0x08880CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08880CD8u) goto L_08880CD8;
    return;
L_08880CD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08880CC8;
L_08880D1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08880D5C;
      }
      goto L_08880D30;
    }
L_08880D30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08880D6C;
      }
      goto L_08880D3C;
    }
L_08880D3C:
    ctx.set_gpr(31, 0x08880D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x08880D44u) goto L_08880D44;
    return;
L_08880D44:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08880D54u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08880D54u) goto L_08880D54;
    return;
L_08880D54:
    ctx.set_gpr(31, 0x08880D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x08880D5Cu) goto L_08880D5C;
    return;
L_08880D5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880D6C:
    ctx.set_gpr(31, 0x08880D74u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 99u, 0x08874E00u>(ctx, &aot_mem) && ctx.pc == 0x08880D74u) goto L_08880D74;
    return;
L_08880D74:
    // nop
    goto L_08880D3C;
L_08880D7C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880D84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(31, 0x08880D98u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 634u, 0x088726F0u>(ctx, &aot_mem) && ctx.pc == 0x08880D98u) goto L_08880D98;
    return;
L_08880D98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880DB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.set_gpr(31, 0x08880DC8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 639u, 0x08872728u>(ctx, &aot_mem) && ctx.pc == 0x08880DC8u) goto L_08880DC8;
    return;
L_08880DC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880DD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08880DE4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 646u, 0x088727C0u>(ctx, &aot_mem) && ctx.pc == 0x08880DE4u) goto L_08880DE4;
    return;
L_08880DE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880DF0:
    ctx.set_gpr(2, 32767u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] | 65535u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(160), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(172), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880E34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08880E4Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 290u, 0x08875CC4u>(ctx, &aot_mem) && ctx.pc == 0x08880E4Cu) goto L_08880E4C;
    return;
L_08880E4C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880E60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + static_cast<std::uint32_t>(28));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08880EA8;
L_08880EA8:
    ctx.set_gpr(31, 0x08880EB0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 233u, 0x08875990u>(ctx, &aot_mem) && ctx.pc == 0x08880EB0u) goto L_08880EB0;
    return;
L_08880EB0:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16384));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08880EEC;
      }
      goto L_08880ECC;
    }
L_08880ECC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08880EE4u);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08880EE4u) goto L_08880EE4;
    return;
L_08880EE4:
    // nop
    goto L_08880EA8;
L_08880EEC:
    ctx.set_gpr(31, 0x08880EF4u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 18u, 0x088A015Cu>(ctx, &aot_mem) && ctx.pc == 0x08880EF4u) goto L_08880EF4;
    return;
L_08880EF4:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, 8191u << 16u);
    ctx.set_gpr(13, ctx.gpr[15] - ctx.gpr[2]);
    ctx.set_gpr(14, ctx.gpr[13] >> 31u);
    ctx.set_gpr(12, ctx.gpr[13] + ctx.gpr[14]);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 1u));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[10] >> 31u);
    ctx.set_gpr(9, ctx.gpr[10] + ctx.gpr[2]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? ctx.gpr[6] : ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    ctx.set_gpr(2, ctx.gpr[17] | 65535u);
      if (branch_taken) {
          goto L_08880F40;
      }
      goto L_08880F38;
    }
L_08880F38:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[16]);
    goto L_08880F40;
L_08880F40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08880F4Cu);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 230u, 0x08875978u>(ctx, &aot_mem) && ctx.pc == 0x08880F4Cu) goto L_08880F4C;
    return;
L_08880F4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880F78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08880FA8;
      }
      goto L_08880F90;
    }
L_08880F90:
    ctx.set_gpr(31, 0x08880F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x08880F98u) goto L_08880F98;
    return;
L_08880F98:
    ctx.set_gpr(31, 0x08880FA0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0888179C;
L_08880FA0:
    ctx.set_gpr(31, 0x08880FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x08880FA8u) goto L_08880FA8;
    return;
L_08880FA8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08881008;
      }
      goto L_08880FB8;
    }
L_08880FB8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08880FF8;
      }
      goto L_08880FC4;
    }
L_08880FC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    goto L_08880FC8;
L_08880FC8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08880FEC;
      }
      goto L_08880FD0;
    }
L_08880FD0:
    ctx.set_gpr(31, 0x08880FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x08880FD8u) goto L_08880FD8;
    return;
L_08880FD8:
    ctx.set_gpr(31, 0x08880FE0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088818E0;
L_08880FE0:
    ctx.set_gpr(31, 0x08880FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x08880FE8u) goto L_08880FE8;
    return;
L_08880FE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08880FEC;
L_08880FEC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880FF8:
    ctx.set_gpr(31, 0x08881000u);
    // nop
    goto L_08880218;
L_08881000:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    goto L_08880FC8;
L_08881008:
    ctx.set_gpr(31, 0x08881010u);
    // nop
    goto L_088816A4;
L_08881010:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    goto L_08880FC8;
L_0888103C:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26476)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088811EC;
      }
      goto L_08881068;
    }
L_08881068:
    ctx.set_gpr(3, 2247u << 16u);
    goto L_0888106C;
L_0888106C:
    ctx.set_gpr(17, ctx.gpr[3] + static_cast<std::uint32_t>(-4516));
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(20, ctx.gpr[17] + static_cast<std::uint32_t>(2880));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    goto L_08881080;
L_08881080:
    if (ctx.gpr[16] == ctx.gpr[19]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(168)));
        goto L_0888116C;
    }
    goto L_08881088;
L_08881088:
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(180))))));
    goto L_0888108C;
L_0888108C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088810E8;
      }
      goto L_08881094;
    }
L_08881094:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(360));
    goto L_08881098;
L_08881098:
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    goto L_0888109C;
L_0888109C:
    if (ctx.gpr[9] != 0u) {
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
        goto L_08881080;
    }
    goto L_088810A4;
L_088810A4:
    ctx.set_gpr(10, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-26468)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(11, 2245u << 16u);
      if (branch_taken) {
          goto L_088810D8;
      }
      goto L_088810B4;
    }
L_088810B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088810B8;
L_088810B8:
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
L_088810D8:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088810E0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-26464)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088810E0u) goto L_088810E0;
    return;
L_088810E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088810B8;
L_088810E8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    if (static_cast<std::int32_t>(ctx.gpr[7]) <= 0) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
        goto L_08881110;
    }
    goto L_088810F4;
L_088810F4:
    ctx.set_gpr(31, 0x088810FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x088810FCu) goto L_088810FC;
    return;
L_088810FC:
    ctx.set_gpr(31, 0x08881104u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0888179C;
L_08881104:
    ctx.set_gpr(31, 0x0888110Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x0888110Cu) goto L_0888110C;
    return;
L_0888110C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    goto L_08881110;
L_08881110:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0888115C;
      }
      goto L_08881118;
    }
L_08881118:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0888114C;
      }
      goto L_08881120;
    }
L_08881120:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    goto L_08881124;
L_08881124:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(360));
      if (branch_taken) {
          goto L_08881098;
      }
      goto L_0888112C;
    }
L_0888112C:
    ctx.set_gpr(31, 0x08881134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x08881134u) goto L_08881134;
    return;
L_08881134:
    ctx.set_gpr(31, 0x0888113Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088818E0;
L_0888113C:
    ctx.set_gpr(31, 0x08881144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x08881144u) goto L_08881144;
    return;
L_08881144:
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    goto L_0888109C;
L_0888114C:
    ctx.set_gpr(31, 0x08881154u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08880218;
L_08881154:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    goto L_08881124;
L_0888115C:
    ctx.set_gpr(31, 0x08881164u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088816A4;
L_08881164:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    goto L_08881124;
L_0888116C:
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
        goto L_08881190;
    }
    goto L_08881174;
L_08881174:
    ctx.set_gpr(31, 0x0888117Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x0888117Cu) goto L_0888117C;
    return;
L_0888117C:
    ctx.set_gpr(31, 0x08881184u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0888179C;
L_08881184:
    ctx.set_gpr(31, 0x0888118Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x0888118Cu) goto L_0888118C;
    return;
L_0888118C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    goto L_08881190;
L_08881190:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088811DC;
      }
      goto L_08881198;
    }
L_08881198:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088811CC;
      }
      goto L_088811A0;
    }
L_088811A0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(172)));
    goto L_088811A4;
L_088811A4:
    if (static_cast<std::int32_t>(ctx.gpr[6]) <= 0) {
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(180))))));
        goto L_0888108C;
    }
    goto L_088811AC;
L_088811AC:
    ctx.set_gpr(31, 0x088811B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x088811B4u) goto L_088811B4;
    return;
L_088811B4:
    ctx.set_gpr(31, 0x088811BCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088818E0;
L_088811BC:
    ctx.set_gpr(31, 0x088811C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x088811C4u) goto L_088811C4;
    return;
L_088811C4:
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(180))))));
    goto L_0888108C;
L_088811CC:
    ctx.set_gpr(31, 0x088811D4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08880218;
L_088811D4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(172)));
    goto L_088811A4;
L_088811DC:
    ctx.set_gpr(31, 0x088811E4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088816A4;
L_088811E4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(172)));
    goto L_088811A4;
L_088811EC:
    ctx.set_gpr(5, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088811F8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26472)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088811F8u) goto L_088811F8;
    return;
L_088811F8:
    ctx.set_gpr(3, 2247u << 16u);
    goto L_0888106C;
L_08881200:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08881208:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08881210:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08881220u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 298u, 0x08875D44u>(ctx, &aot_mem) && ctx.pc == 0x08881220u) goto L_08881220;
    return;
L_08881220:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888122C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888123C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    ctx.set_gpr(31, 0x08881250u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 277u, 0x08875C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08881250u) goto L_08881250;
    return;
L_08881250:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08881264:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08881274u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 269u, 0x08875B34u>(ctx, &aot_mem) && ctx.pc == 0x08881274u) goto L_08881274;
    return;
L_08881274:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08881280:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08881290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 272u, 0x08875B98u>(ctx, &aot_mem) && ctx.pc == 0x08881290u) goto L_08881290;
    return;
L_08881290:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088812E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088812F0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 227u, 0x088758BCu>(ctx, &aot_mem) && ctx.pc == 0x088812F0u) goto L_088812F0;
    return;
L_088812F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088812FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08881318u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x08881318u) goto L_08881318;
    return;
L_08881318:
    if (static_cast<std::int32_t>(ctx.gpr[17]) <= 0) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
        goto L_0888134C;
    }
    goto L_08881320;
L_08881320:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), ctx.gpr[3]);
    goto L_0888132C;
L_0888132C:
    ctx.set_gpr(31, 0x08881334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x08881334u) goto L_08881334;
    return;
L_08881334:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888134C:
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[3]);
    goto L_0888132C;
L_08881358:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08881364:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08881370:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888137C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888138C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888139C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088813AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088813BCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 231u, 0x08875980u>(ctx, &aot_mem) && ctx.pc == 0x088813BCu) goto L_088813BC;
    return;
L_088813BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088813C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088813D8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 232u, 0x08875988u>(ctx, &aot_mem) && ctx.pc == 0x088813D8u) goto L_088813D8;
    return;
L_088813D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088813E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088813F4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 233u, 0x08875990u>(ctx, &aot_mem) && ctx.pc == 0x088813F4u) goto L_088813F4;
    return;
L_088813F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08881400:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08881410u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 239u, 0x088759D0u>(ctx, &aot_mem) && ctx.pc == 0x08881410u) goto L_08881410;
    return;
L_08881410:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08881454:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08881464u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 252u, 0x08875A4Cu>(ctx, &aot_mem) && ctx.pc == 0x08881464u) goto L_08881464;
    return;
L_08881464:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888148C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888149Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 253u, 0x08875A54u>(ctx, &aot_mem) && ctx.pc == 0x0888149Cu) goto L_0888149C;
    return;
L_0888149C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088814A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_088814C0;
      }
      goto L_088814B8;
    }
L_088814B8:
    ctx.set_gpr(31, 0x088814C0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 254u, 0x08875A5Cu>(ctx, &aot_mem) && ctx.pc == 0x088814C0u) goto L_088814C0;
    return;
L_088814C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088814CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088814DCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 257u, 0x08875A70u>(ctx, &aot_mem) && ctx.pc == 0x088814DCu) goto L_088814DC;
    return;
L_088814DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088814E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088814F8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 258u, 0x08875A78u>(ctx, &aot_mem) && ctx.pc == 0x088814F8u) goto L_088814F8;
    return;
L_088814F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08881520:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08881538u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 259u, 0x08875A80u>(ctx, &aot_mem) && ctx.pc == 0x08881538u) goto L_08881538;
    return;
L_08881538:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08881558;
      }
      goto L_08881540;
    }
L_08881540:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08881568;
      }
      goto L_08881558;
    }
L_08881558:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0888155C;
L_0888155C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08881568:
    ctx.set_gpr(31, 0x08881570u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 260u, 0x08875A88u>(ctx, &aot_mem) && ctx.pc == 0x08881570u) goto L_08881570;
    return;
L_08881570:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0888155C;
L_08881578:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08881598u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 259u, 0x08875A80u>(ctx, &aot_mem) && ctx.pc == 0x08881598u) goto L_08881598;
    return;
L_08881598:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_088815BC;
      }
      goto L_088815A0;
    }
L_088815A0:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_088815D0;
      }
      goto L_088815B8;
    }
L_088815B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    goto L_088815BC;
L_088815BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_088815C0;
L_088815C0:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088815D0:
    ctx.set_gpr(31, 0x088815D8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 261u, 0x08875A90u>(ctx, &aot_mem) && ctx.pc == 0x088815D8u) goto L_088815D8;
    return;
L_088815D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_088815C0;
L_088815E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088815F8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 259u, 0x08875A80u>(ctx, &aot_mem) && ctx.pc == 0x088815F8u) goto L_088815F8;
    return;
L_088815F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08881618;
      }
      goto L_08881600;
    }
L_08881600:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08881628;
      }
      goto L_08881618;
    }
L_08881618:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0888161C;
L_0888161C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08881628:
    ctx.set_gpr(31, 0x08881630u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 262u, 0x08875AA0u>(ctx, &aot_mem) && ctx.pc == 0x08881630u) goto L_08881630;
    return;
L_08881630:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0888161C;
L_08881638:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08881640:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08881650u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 238u, 0x088759C8u>(ctx, &aot_mem) && ctx.pc == 0x08881650u) goto L_08881650;
    return;
L_08881650:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888165C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08881664:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08881674u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 263u, 0x08875AA8u>(ctx, &aot_mem) && ctx.pc == 0x08881674u) goto L_08881674;
    return;
L_08881674:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08881680:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08881690u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 266u, 0x08875AF0u>(ctx, &aot_mem) && ctx.pc == 0x08881690u) goto L_08881690;
    return;
L_08881690:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888169C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088816A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x088816C8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 280u, 0x08875C24u>(ctx, &aot_mem) && ctx.pc == 0x088816C8u) goto L_088816C8;
    return;
L_088816C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0888178C;
      }
      goto L_088816D0;
    }
L_088816D0:
    ctx.set_gpr(31, 0x088816D8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 299u, 0x08876204u>(ctx, &aot_mem) && ctx.pc == 0x088816D8u) goto L_088816D8;
    return;
L_088816D8:
    ctx.set_gpr(31, 0x088816E0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 280u, 0x08875C24u>(ctx, &aot_mem) && ctx.pc == 0x088816E0u) goto L_088816E0;
    return;
L_088816E0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0888177C;
      }
      goto L_088816EC;
    }
L_088816EC:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(152))))));
    goto L_088816F0;
L_088816F0:
    ctx.set_gpr(2, ctx.gpr[4] ^ 10u);
    ctx.set_gpr(8, ctx.gpr[4] ^ 20u);
    ctx.set_gpr(6, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(11));
      if (branch_taken) {
          goto L_0888173C;
      }
      goto L_0888170C;
    }
L_0888170C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0888173C;
      }
      goto L_08881714;
    }
L_08881714:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[9];
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(15));
      if (branch_taken) {
          goto L_0888173C;
      }
      goto L_0888171C;
    }
L_0888171C:
    if (ctx.gpr[4] == ctx.gpr[10]) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08881740;
    }
    goto L_08881724;
L_08881724:
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
L_0888173C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08881740;
L_08881740:
    ctx.set_gpr(31, 0x08881748u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 296u, 0x08875D34u>(ctx, &aot_mem) && ctx.pc == 0x08881748u) goto L_08881748;
    return;
L_08881748:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08881754u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 297u, 0x08875D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08881754u) goto L_08881754;
    return;
L_08881754:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(12, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(11, ctx.gpr[15] + ctx.gpr[17]);
    ctx.set_gpr(13, ctx.gpr[14] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[11]);
    goto L_08881724;
L_0888177C:
    ctx.set_gpr(31, 0x08881784u);
    // nop
    goto L_088809E0;
L_08881784:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(152))))));
    goto L_088816F0;
L_0888178C:
    ctx.set_gpr(31, 0x08881794u);
    // nop
    goto L_08880588;
L_08881794:
    // nop
    goto L_088816D0;
L_0888179C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[4]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(17, ctx.gpr[2] << 1u);
      if (branch_taken) {
          goto L_08881834;
      }
      goto L_088817D4;
    }
L_088817D4:
    ctx.set_gpr(16, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088817DC;
L_088817DC:
    ctx.set_gpr(12, 32767u << 16u);
    ctx.set_gpr(6, ctx.gpr[12] | 65535u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[10];
    ctx.set_gpr(31, 0x088817FCu);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088817FCu) goto L_088817FC;
    return;
L_088817FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[17]) ? ctx.gpr[7] : ctx.gpr[17]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x08881820u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08881820u) goto L_08881820;
    return;
L_08881820:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[4]))));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_088817DC;
    }
    goto L_08881834;
L_08881834:
    ctx.set_gpr(13, ctx.gpr[17] >> 31u);
    ctx.set_gpr(6, ctx.gpr[17] + ctx.gpr[13]);
    ctx.set_gpr(20, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.set_gpr(17, ctx.gpr[20] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[4]))));
      if (branch_taken) {
          goto L_088818C0;
      }
      goto L_0888184C;
    }
L_0888184C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[14]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_088818B4;
      }
      goto L_08881854;
    }
L_08881854:
    ctx.set_gpr(16, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0888185C;
L_0888185C:
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x08881878u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08881878u) goto L_08881878;
    return;
L_08881878:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08881888u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08881888u) goto L_08881888;
    return;
L_08881888:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[24];
    ctx.set_gpr(31, 0x088818A4u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088818A4u) goto L_088818A4;
    return;
L_088818A4:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0888185C;
    }
    goto L_088818B4;
L_088818B4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(16, ctx.gpr[17] - ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    goto L_088818C0;
L_088818C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
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
L_088818E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[4]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(17, ctx.gpr[2] << 1u);
      if (branch_taken) {
          goto L_08881978;
      }
      goto L_08881918;
    }
L_08881918:
    ctx.set_gpr(16, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08881920;
L_08881920:
    ctx.set_gpr(12, 32767u << 16u);
    ctx.set_gpr(6, ctx.gpr[12] | 65535u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[10];
    ctx.set_gpr(31, 0x08881940u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08881940u) goto L_08881940;
    return;
L_08881940:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[17]) ? ctx.gpr[7] : ctx.gpr[17]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x08881964u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08881964u) goto L_08881964;
    return;
L_08881964:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[4]))));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08881920;
    }
    goto L_08881978;
L_08881978:
    ctx.set_gpr(13, ctx.gpr[17] >> 31u);
    ctx.set_gpr(6, ctx.gpr[17] + ctx.gpr[13]);
    ctx.set_gpr(20, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.set_gpr(17, ctx.gpr[20] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[4]))));
      if (branch_taken) {
          goto L_088819F4;
      }
      goto L_08881990;
    }
L_08881990:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[14]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_088819E8;
      }
      goto L_08881998;
    }
L_08881998:
    ctx.set_gpr(16, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088819A0;
L_088819A0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x088819BCu);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088819BCu) goto L_088819BC;
    return;
L_088819BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[24];
    ctx.set_gpr(31, 0x088819D8u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088819D8u) goto L_088819D8;
    return;
L_088819D8:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_088819A0;
    }
    goto L_088819E8;
L_088819E8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(16, ctx.gpr[17] - ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(172), ctx.gpr[16]);
    goto L_088819F4;
L_088819F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
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
L_08881A14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08881A40u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 184u, 0x08891C84u>(ctx, &aot_mem) && ctx.pc == 0x08881A40u) goto L_08881A40;
    return;
L_08881A40:
    ctx.set_gpr(31, 0x08881A48u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_0888216C;
L_08881A48:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08881C98;
      }
      goto L_08881A58;
    }
L_08881A58:
    ctx.set_gpr(31, 0x08881A60u);
    // nop
    goto L_08882188;
L_08881A60:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[17];
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08881AD4;
      }
      goto L_08881A70;
    }
L_08881A70:
    ctx.set_gpr(31, 0x08881A78u);
    // nop
    goto L_0888216C;
L_08881A78:
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08881C88;
      }
      goto L_08881A84;
    }
L_08881A84:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.set_gpr(20, ctx.gpr[18] + static_cast<std::uint32_t>(40));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(31, 0x08881A98u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), 0u);
    goto L_08882188;
L_08881A98:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(72))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[15] == ctx.gpr[3]) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
        goto L_08881AD0;
    }
    goto L_08881AA8;
L_08881AA8:
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(76))))));
    if (ctx.gpr[24] == ctx.gpr[3]) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
        goto L_08881AD0;
    }
    goto L_08881AB4;
L_08881AB4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[25] != 0u;
    // nop
      if (branch_taken) {
          goto L_08881AF0;
      }
      goto L_08881AC0;
    }
L_08881AC0:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[19]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), 0u);
    goto L_08881AD0;
L_08881AD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08881AD4;
L_08881AD4:
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
L_08881AF0:
    if (ctx.gpr[19] == 0u) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
        goto L_08881B08;
    }
    goto L_08881AF8;
L_08881AF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
        goto L_08881B1C;
    }
    goto L_08881B04;
L_08881B04:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_08881B08;
L_08881B08:
    ctx.set_gpr(18, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26444)));
    ctx.set_gpr(17, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-26444), ctx.gpr[17]);
    goto L_08881AD0;
L_08881B1C:
    ctx.set_gpr(5, 0u + 0u);
    jump_target = ctx.gpr[16];
    ctx.set_gpr(31, 0x08881B28u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08881B28u) goto L_08881B28;
    return;
L_08881B28:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, ctx.gpr[8] - ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08881B48;
    }
    goto L_08881B40;
L_08881B40:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_08881AD0;
L_08881B48:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08881B60u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08881B60u) goto L_08881B60;
    return;
L_08881B60:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 31u));
    ctx.set_gpr(8, ctx.gpr[16] >> 21u);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 11u));
    ctx.set_gpr(25, ctx.gpr[4] - ctx.gpr[15]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[25]) < static_cast<std::int32_t>(ctx.gpr[24]) ? ctx.gpr[25] : ctx.gpr[24]);
    ctx.set_gpr(13, ctx.gpr[14] - ctx.gpr[15]);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[15]);
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[13] : ctx.gpr[12]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08881BACu);
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[10]) ? ctx.gpr[11] : ctx.gpr[10]);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 107u, 0x08891770u>(ctx, &aot_mem) && ctx.pc == 0x08881BACu) goto L_08881BAC;
    return;
L_08881BAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(9, 15u << 16u);
    ctx.set_gpr(3, ctx.gpr[9] | 65535u);
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_08881BE0;
    }
    goto L_08881BC0;
L_08881BC0:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 31u));
    ctx.set_gpr(2, ctx.gpr[14] >> 21u);
    ctx.set_gpr(12, ctx.gpr[13] + ctx.gpr[2]);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 11u));
    ctx.set_gpr(10, ctx.gpr[4] - ctx.gpr[11]);
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[16]) ? ctx.gpr[10] : ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_08881BE0;
L_08881BE0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08881BECu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 120u, 0x08891814u>(ctx, &aot_mem) && ctx.pc == 0x08881BECu) goto L_08881BEC;
    return;
L_08881BEC:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[24]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[15]);
      if (branch_taken) {
          goto L_08881AD0;
      }
      goto L_08881C04;
    }
L_08881C04:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08881C20u);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08881C20u) goto L_08881C20;
    return;
L_08881C20:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08881C34u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 184u, 0x08891C84u>(ctx, &aot_mem) && ctx.pc == 0x08881C34u) goto L_08881C34;
    return;
L_08881C34:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08881AD4;
      }
      goto L_08881C3C;
    }
L_08881C3C:
    ctx.set_gpr(31, 0x08881C44u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 200u, 0x088923FCu>(ctx, &aot_mem) && ctx.pc == 0x08881C44u) goto L_08881C44;
    return;
L_08881C44:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[17]));
        goto L_08881AD0;
    }
    goto L_08881C4C;
L_08881C4C:
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08881C70;
      }
      goto L_08881C5C;
    }
L_08881C5C:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(7, 32767u << 16u);
      if (branch_taken) {
          goto L_08881C74;
      }
      goto L_08881C68;
    }
L_08881C68:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08881AD0;
L_08881C70:
    ctx.set_gpr(7, 32767u << 16u);
    goto L_08881C74;
L_08881C74:
    ctx.set_gpr(17, ctx.gpr[7] | 65535u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08881AD0;
      }
      goto L_08881C80;
    }
L_08881C80:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), ctx.gpr[8]);
    goto L_08881AD0;
L_08881C88:
    ctx.set_gpr(31, 0x08881C90u);
    // nop
    goto L_08882188;
L_08881C90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08881AD4;
L_08881C98:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08881D20;
      }
      goto L_08881CA0;
    }
L_08881CA0:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08881A58;
      }
      goto L_08881CA8;
    }
L_08881CA8:
    ctx.set_gpr(31, 0x08881CB0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_08882188;
L_08881CB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x08881CC8u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08881CC8u) goto L_08881CC8;
    return;
L_08881CC8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x08881CD8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 200u, 0x088923FCu>(ctx, &aot_mem) && ctx.pc == 0x08881CD8u) goto L_08881CD8;
    return;
L_08881CD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08881D00;
      }
      goto L_08881CE0;
    }
L_08881CE0:
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08881D08;
      }
      goto L_08881CF0;
    }
L_08881CF0:
    ctx.set_gpr(20, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.set_gpr(11, 32767u << 16u);
      if (branch_taken) {
          goto L_08881D0C;
      }
      goto L_08881CFC;
    }
L_08881CFC:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    goto L_08881D00;
L_08881D00:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[9]));
    goto L_08881A60;
L_08881D08:
    ctx.set_gpr(11, 32767u << 16u);
    goto L_08881D0C;
L_08881D0C:
    ctx.set_gpr(10, ctx.gpr[11] | 65535u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[10];
    ctx.set_gpr(12, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08881A60;
      }
      goto L_08881D18;
    }
L_08881D18:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), ctx.gpr[12]);
    goto L_08881A60;
L_08881D20:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08881D2Cu);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08882188;
L_08881D2C:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(20, ctx.gpr[12] << 11u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08881D48u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x08881D48u) goto L_08881D48;
    return;
L_08881D48:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[10];
    ctx.set_gpr(31, 0x08881D60u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08881D60u) goto L_08881D60;
    return;
L_08881D60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[9];
    ctx.set_gpr(31, 0x08881D78u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08881D78u) goto L_08881D78;
    return;
L_08881D78:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, ctx.gpr[4] + ctx.gpr[20]);
    ctx.set_gpr(5, ctx.gpr[8] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08881DF4;
      }
      goto L_08881DA8;
    }
L_08881DA8:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    goto L_08881DAC;
L_08881DAC:
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08881DE8;
      }
      goto L_08881DB8;
    }
L_08881DB8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(16, ctx.gpr[17] >> 11u);
    ctx.set_gpr(15, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[15] != 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), 0u);
        goto L_08881A60;
    }
    goto L_08881DD0;
L_08881DD0:
    ctx.set_gpr(6, 15u << 16u);
    ctx.set_gpr(25, ctx.gpr[6] | 65534u);
    ctx.set_gpr(24, ctx.gpr[25] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[24] != 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), 0u);
        goto L_08881A60;
    }
    goto L_08881DE4;
L_08881DE4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    goto L_08881DE8;
L_08881DE8:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), 0u);
    goto L_08881A60;
L_08881DF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
        goto L_08881DAC;
    }
    goto L_08881E00;
L_08881E00:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08881E08u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08881E08u) goto L_08881E08;
    return;
L_08881E08:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    goto L_08881DAC;
L_08881E10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08881E84;
      }
      goto L_08881E34;
    }
L_08881E34:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(76))))));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[4]) {
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(75))))));
        goto L_0888215C;
    }
    goto L_08881E44;
L_08881E44:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(74))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[6]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08882128;
    }
    goto L_08881E54;
L_08881E54:
    ctx.set_gpr(31, 0x08881E5Cu);
    ctx.set_gpr(17, 0u + 0u);
    goto L_0888216C;
L_08881E5C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(73))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
        goto L_08881ED8;
    }
    goto L_08881E6C;
L_08881E6C:
    ctx.set_gpr(31, 0x08881E74u);
    // nop
    goto L_08882188;
L_08881E74:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(75))))));
    goto L_08881E78;
L_08881E78:
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[15] == ctx.gpr[14]) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
        goto L_08881E84;
    }
    goto L_08881E84;
L_08881E84:
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[24] == ctx.gpr[17]) {
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77))))));
        goto L_08881EB0;
    }
    goto L_08881E94;
L_08881E94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08881E98;
L_08881E98:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08881E9C;
L_08881E9C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08881EB0:
    ctx.set_gpr(25, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[25];
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08881E98;
      }
      goto L_08881EBC;
    }
L_08881EBC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(73))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08881E9C;
      }
      goto L_08881EC8;
    }
L_08881EC8:
    ctx.set_gpr(31, 0x08881ED0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08881A14;
L_08881ED0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08881E98;
L_08881ED8:
    ctx.set_gpr(12, 255u << 16u);
    ctx.set_gpr(11, ctx.gpr[12] | 65280u);
    ctx.set_gpr(9, 1u << 16u);
    ctx.set_gpr(8, ctx.gpr[10] & ctx.gpr[11]);
    ctx.set_gpr(7, ctx.gpr[9] | 256u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08881E98;
      }
      goto L_08881EF4;
    }
L_08881EF4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77)));
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[5]));
        goto L_088820E0;
    }
    goto L_08881F00;
L_08881F00:
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[18] != ctx.gpr[15]) {
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(75))))));
        goto L_08881E78;
    }
    goto L_08881F10;
L_08881F10:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088820D0;
      }
      goto L_08881F18;
    }
L_08881F18:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_08881F1C;
L_08881F1C:
    ctx.set_gpr(5, 255u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] | 65280u);
    ctx.set_gpr(24, 1u << 16u);
    ctx.set_gpr(19, ctx.gpr[25] & ctx.gpr[4]);
    ctx.set_gpr(17, ctx.gpr[24] | 256u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08881E98;
      }
      goto L_08881F38;
    }
L_08881F38:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08882094;
    }
    goto L_08881F44;
L_08881F44:
    ctx.set_gpr(31, 0x08881F4Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 815u, 0x0888FC84u>(ctx, &aot_mem) && ctx.pc == 0x08881F4Cu) goto L_08881F4C;
    return;
L_08881F4C:
    ctx.set_gpr(19, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08882080;
      }
      goto L_08881F58;
    }
L_08881F58:
    ctx.set_gpr(15, ctx.gpr[18] + static_cast<std::uint32_t>(2047));
    ctx.set_gpr(24, ctx.gpr[15] < static_cast<std::uint32_t>(2047) ? 1u : 0u);
    ctx.set_gpr(12, ctx.gpr[19] + ctx.gpr[24]);
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 31u));
    ctx.set_gpr(14, ctx.gpr[17] >> 21u);
    ctx.set_gpr(9, ctx.gpr[15] + ctx.gpr[14]);
    ctx.set_gpr(13, 0u + 0u);
    ctx.set_gpr(11, ctx.gpr[9] < ctx.gpr[14] ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[12] + ctx.gpr[13]);
    ctx.set_gpr(8, ctx.gpr[10] + ctx.gpr[11]);
    ctx.set_gpr(3, ctx.gpr[9] >> 11u);
    ctx.set_gpr(7, ctx.gpr[8] << 21u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[7]);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08881F94;
L_08881F94:
    ctx.set_gpr(6, 32767u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] | 63488u);
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08882068;
    }
    goto L_08881FA4;
L_08881FA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08881FA8;
L_08881FA8:
    ctx.set_gpr(18, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[18] == 0u) {
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08881FC0;
    }
    goto L_08881FB4;
L_08881FB4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08881FC0;
L_08881FC0:
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[4]);
    ctx.set_gpr(19, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.set_gpr(9, ctx.gpr[17] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08881FEC;
      }
      goto L_08881FD0;
    }
L_08881FD0:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(2048));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    ctx.set_gpr(11, ctx.hi);
    ctx.set_gpr(10, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    goto L_08881FEC;
L_08881FEC:
    ctx.set_gpr(31, 0x08881FF4u);
    // nop
    goto L_088821A4;
L_08881FF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), 0u);
      if (branch_taken) {
          goto L_08882060;
      }
      goto L_08882000;
    }
L_08882000:
    ctx.set_gpr(31, 0x08882008u);
    // nop
    goto L_088821C0;
L_08882008:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08882014u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 184u, 0x08891C84u>(ctx, &aot_mem) && ctx.pc == 0x08882014u) goto L_08882014;
    return;
L_08882014:
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] != ctx.gpr[12]) {
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(75))))));
        goto L_08881E78;
    }
    goto L_08882020;
L_08882020:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x08882030u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(15388));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 85u, 0x08879084u>(ctx, &aot_mem) && ctx.pc == 0x08882030u) goto L_08882030;
    return;
L_08882030:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882050;
      }
      goto L_0888203C;
    }
L_0888203C:
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(4));
    goto L_08882040;
L_08882040:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[13]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(0u));
    goto L_08881E94;
L_08882050:
    ctx.set_gpr(31, 0x08882058u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 82u, 0x0889163Cu>(ctx, &aot_mem) && ctx.pc == 0x08882058u) goto L_08882058;
    return;
L_08882058:
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(4));
    goto L_08882040;
L_08882060:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    goto L_08882000;
L_08882068:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08881FA8;
    }
    goto L_08882070;
L_08882070:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    goto L_08881FA4;
L_08882080:
    ctx.set_gpr(31, 0x08882088u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 815u, 0x0888FC84u>(ctx, &aot_mem) && ctx.pc == 0x08882088u) goto L_08882088;
    return;
L_08882088:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    goto L_08881F58;
L_08882094:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088820A0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 107u, 0x08891770u>(ctx, &aot_mem) && ctx.pc == 0x088820A0u) goto L_088820A0;
    return;
L_088820A0:
    ctx.set_gpr(31, 0x088820A8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 94u, 0x088916CCu>(ctx, &aot_mem) && ctx.pc == 0x088820A8u) goto L_088820A8;
    return;
L_088820A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, ctx.gpr[2] << 11u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[25] + 0u);
    ctx.set_gpr(31, 0x088820C8u);
    ctx.set_gpr(19, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[25]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 107u, 0x08891770u>(ctx, &aot_mem) && ctx.pc == 0x088820C8u) goto L_088820C8;
    return;
L_088820C8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08881F94;
L_088820D0:
    ctx.set_gpr(31, 0x088820D8u);
    // nop
    goto L_08882188;
L_088820D8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_08881F1C;
L_088820E0:
    ctx.set_gpr(31, 0x088820E8u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_08882188;
L_088820E8:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[13] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
        goto L_088820FC;
    }
    goto L_088820F4;
L_088820F4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77)));
    goto L_08881F00;
L_088820FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08882108u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 722u, 0x0888F6F4u>(ctx, &aot_mem) && ctx.pc == 0x08882108u) goto L_08882108;
    return;
L_08882108:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088820F4;
      }
      goto L_08882110;
    }
L_08882110:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(14, 2225u << 16u);
    ctx.set_gpr(31, 0x08882120u);
    ctx.set_gpr(4, ctx.gpr[14] + static_cast<std::uint32_t>(15432));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 85u, 0x08879084u>(ctx, &aot_mem) && ctx.pc == 0x08882120u) goto L_08882120;
    return;
L_08882120:
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(4));
    goto L_08882040;
L_08882128:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888214C;
      }
      goto L_08882130;
    }
L_08882130:
    ctx.set_gpr(31, 0x08882138u);
    // nop
    goto L_0888216C;
L_08882138:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08882144u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(0u));
    goto L_08882188;
L_08882144:
    // nop
    goto L_08881E54;
L_0888214C:
    ctx.set_gpr(31, 0x08882154u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 82u, 0x0889163Cu>(ctx, &aot_mem) && ctx.pc == 0x08882154u) goto L_08882154;
    return;
L_08882154:
    // nop
    goto L_08882130;
L_0888215C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08881E44;
      }
      goto L_08882164;
    }
L_08882164:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08881E44;
L_0888216C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888217Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x0888217Cu) goto L_0888217C;
    return;
L_0888217C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882188:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08882198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x08882198u) goto L_08882198;
    return;
L_08882198:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088821A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088821B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x088821B4u) goto L_088821B4;
    return;
L_088821B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088821C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088821D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x088821D0u) goto L_088821D0;
    return;
L_088821D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882204:
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-26460)));
    ctx.set_gpr(5, 2247u << 16u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(-1632));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4160));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[7];
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-26460), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08882244;
      }
      goto L_08882234;
    }
L_08882234:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08882238;
L_08882238:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882244:
    ctx.set_gpr(31, 0x0888224Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0888224Cu) goto L_0888224C;
    return;
L_0888224C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08882238;
L_0888225C:
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-26460)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1632));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4160));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-26460), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08882294;
      }
      goto L_08882288;
    }
L_08882288:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0888228C;
L_0888228C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882294:
    ctx.set_gpr(31, 0x0888229Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0888229Cu) goto L_0888229C;
    return;
L_0888229C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0888228C;
L_088822A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088822C0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    goto L_088821A4;
L_088822C0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 256 ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_08882300;
      }
      goto L_088822D8;
    }
L_088822D8:
    ctx.set_gpr(31, 0x088822E0u);
    // nop
    goto L_08883718;
L_088822E0:
    ctx.set_gpr(31, 0x088822E8u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_088821C0;
L_088822E8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882300:
    ctx.set_gpr(31, 0x08882308u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_0888394C;
L_08882308:
    // nop
    goto L_088822E0;
L_08882310:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(31, 0x0888232Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    goto L_088821A4;
L_0888232C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882520;
      }
      goto L_08882334;
    }
L_08882334:
    ctx.set_gpr(31, 0x0888233Cu);
    // nop
    goto L_088821A4;
L_0888233C:
    ctx.set_gpr(31, 0x08882344u);
    // nop
    goto L_088821A4;
L_08882344:
    ctx.set_gpr(31, 0x0888234Cu);
    // nop
    goto L_0888216C;
L_0888234C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 255u << 16u);
    ctx.set_gpr(2, ctx.gpr[7] | 65280u);
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[6] | 512u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08882578;
      }
      goto L_0888236C;
    }
L_0888236C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[10]));
    goto L_08882370;
L_08882370:
    ctx.set_gpr(31, 0x08882378u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_08882188;
L_08882378:
    ctx.set_gpr(31, 0x08882380u);
    ctx.set_gpr(17, 2245u << 16u);
    goto L_088821C0;
L_08882380:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    goto L_08882384;
L_08882384:
    if (ctx.gpr[11] == ctx.gpr[18]) {
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_088823B0;
    }
    goto L_0888238C;
L_0888238C:
    ctx.set_gpr(31, 0x08882394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 241u, 0x0887DAF4u>(ctx, &aot_mem) && ctx.pc == 0x08882394u) goto L_08882394;
    return;
L_08882394:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26664)));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08882380;
      }
      goto L_088823A0;
    }
L_088823A0:
    ctx.set_gpr(31, 0x088823A8u);
    // nop
    ctx.pc = 0x08B0DD34u;
    return;
L_088823A8:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    goto L_08882384;
L_088823B0:
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888238C;
      }
      goto L_088823B8;
    }
L_088823B8:
    ctx.set_gpr(31, 0x088823C0u);
    ctx.set_gpr(17, 1u << 16u);
    goto L_088821C0;
L_088823C0:
    ctx.set_gpr(31, 0x088823C8u);
    // nop
    goto L_088821A4;
L_088823C8:
    ctx.set_gpr(31, 0x088823D0u);
    // nop
    goto L_088821A4;
L_088823D0:
    ctx.set_gpr(31, 0x088823D8u);
    // nop
    goto L_088821A4;
L_088823D8:
    ctx.set_gpr(31, 0x088823E0u);
    // nop
    goto L_0888216C;
L_088823E0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, 255u << 16u);
    ctx.set_gpr(24, ctx.gpr[25] | 65280u);
    ctx.set_gpr(15, ctx.gpr[18] & ctx.gpr[24]);
    ctx.set_gpr(14, ctx.gpr[17] | 512u);
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[14];
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888255C;
      }
      goto L_088823FC;
    }
L_088823FC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08882400;
L_08882400:
    ctx.set_gpr(31, 0x08882408u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_08882188;
L_08882408:
    ctx.set_gpr(31, 0x08882410u);
    ctx.set_gpr(17, 2245u << 16u);
    goto L_088821C0;
L_08882410:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    goto L_08882414;
L_08882414:
    if (ctx.gpr[3] == ctx.gpr[18]) {
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_08882440;
    }
    goto L_0888241C;
L_0888241C:
    ctx.set_gpr(31, 0x08882424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 241u, 0x0887DAF4u>(ctx, &aot_mem) && ctx.pc == 0x08882424u) goto L_08882424;
    return;
L_08882424:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26664)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08882410;
      }
      goto L_08882430;
    }
L_08882430:
    ctx.set_gpr(31, 0x08882438u);
    // nop
    ctx.pc = 0x08B0DD34u;
    return;
L_08882438:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    goto L_08882414;
L_08882440:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888241C;
      }
      goto L_08882448;
    }
L_08882448:
    ctx.set_gpr(31, 0x08882450u);
    // nop
    goto L_088821C0;
L_08882450:
    ctx.set_gpr(31, 0x08882458u);
    // nop
    goto L_088821A4;
L_08882458:
    ctx.set_gpr(31, 0x08882460u);
    // nop
    goto L_088821A4;
L_08882460:
    ctx.set_gpr(31, 0x08882468u);
    // nop
    goto L_0888216C;
L_08882468:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, 255u << 16u);
    ctx.set_gpr(2, ctx.gpr[14] | 65280u);
    ctx.set_gpr(12, 1u << 16u);
    ctx.set_gpr(11, ctx.gpr[13] & ctx.gpr[2]);
    ctx.set_gpr(10, ctx.gpr[12] | 512u);
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[10];
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08882540;
      }
      goto L_08882488;
    }
L_08882488:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[24]));
    goto L_0888248C;
L_0888248C:
    ctx.set_gpr(31, 0x08882494u);
    // nop
    goto L_08882188;
L_08882494:
    ctx.set_gpr(31, 0x0888249Cu);
    // nop
    goto L_088821C0;
L_0888249C:
    ctx.set_gpr(31, 0x088824A4u);
    // nop
    goto L_0888216C;
L_088824A4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77))))));
    ctx.set_gpr(25, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[25]) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[3]));
        goto L_088824B4;
    }
    goto L_088824B4;
L_088824B4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x088824C0u);
    ctx.set_gpr(17, 2245u << 16u);
    goto L_08882188;
L_088824C0:
    ctx.set_gpr(31, 0x088824C8u);
    // nop
    goto L_088821C0;
L_088824C8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77))))));
    goto L_088824CC;
L_088824CC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088824E0;
      }
      goto L_088824D4;
    }
L_088824D4:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(74))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882504;
      }
      goto L_088824E0;
    }
L_088824E0:
    ctx.set_gpr(31, 0x088824E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 241u, 0x0887DAF4u>(ctx, &aot_mem) && ctx.pc == 0x088824E8u) goto L_088824E8;
    return;
L_088824E8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26664)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_088824C8;
      }
      goto L_088824F4;
    }
L_088824F4:
    ctx.set_gpr(31, 0x088824FCu);
    // nop
    ctx.pc = 0x08B0DD34u;
    return;
L_088824FC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77))))));
    goto L_088824CC;
L_08882504:
    ctx.set_gpr(31, 0x0888250Cu);
    // nop
    goto L_088821C0;
L_0888250C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08882520u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08882520u) goto L_08882520;
    return;
L_08882520:
    ctx.set_gpr(31, 0x08882528u);
    // nop
    goto L_088821C0;
L_08882528:
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
L_08882540:
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(75))))));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[15];
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_0888248C;
      }
      goto L_08882554;
    }
L_08882554:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
    goto L_0888248C;
L_0888255C:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(75))))));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08882400;
      }
      goto L_08882570;
    }
L_08882570:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
    goto L_08882400;
L_08882578:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(75))))));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[3];
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08882370;
      }
      goto L_0888258C;
    }
L_0888258C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
    goto L_08882370;
L_08882594:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[9] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x088825D0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_088821A4;
L_088825D0:
    ctx.set_gpr(31, 0x088825D8u);
    // nop
    goto L_0888216C;
L_088825D8:
    ctx.set_gpr(13, ctx.gpr[18] + static_cast<std::uint32_t>(2047));
    ctx.set_gpr(14, ctx.gpr[13] < static_cast<std::uint32_t>(2047) ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[19] + ctx.gpr[14]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 31u));
    ctx.set_gpr(12, ctx.gpr[4] >> 21u);
    ctx.set_gpr(6, ctx.gpr[13] + ctx.gpr[12]);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[6] < ctx.gpr[12] ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[10] + ctx.gpr[11]);
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[6] >> 11u);
    ctx.set_gpr(7, ctx.gpr[3] << 21u);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[7]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    ctx.set_gpr(31, 0x08882630u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    goto L_08882188;
L_08882630:
    ctx.set_gpr(31, 0x08882638u);
    // nop
    goto L_088821C0;
L_08882638:
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
L_0888265C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(31, 0x08882698u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    goto L_088821A4;
L_08882698:
    ctx.set_gpr(31, 0x088826A0u);
    // nop
    goto L_088821A4;
L_088826A0:
    ctx.set_gpr(31, 0x088826A8u);
    // nop
    goto L_0888216C;
L_088826A8:
    ctx.set_gpr(13, ctx.gpr[16] + static_cast<std::uint32_t>(2047));
    ctx.set_gpr(14, ctx.gpr[13] < static_cast<std::uint32_t>(2047) ? 1u : 0u);
    ctx.set_gpr(11, ctx.gpr[17] + ctx.gpr[14]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 31u));
    ctx.set_gpr(12, ctx.gpr[4] >> 21u);
    ctx.set_gpr(8, ctx.gpr[13] + ctx.gpr[12]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(10, ctx.gpr[8] < ctx.gpr[12] ? 1u : 0u);
    ctx.set_gpr(9, ctx.gpr[11] + ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[9] + ctx.gpr[10]);
    ctx.set_gpr(3, ctx.gpr[8] >> 11u);
    ctx.set_gpr(7, ctx.gpr[6] << 21u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[7]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(31, 0x08882704u);
    ctx.set_gpr(18, 2245u << 16u);
    goto L_08882188;
L_08882704:
    ctx.set_gpr(31, 0x0888270Cu);
    // nop
    goto L_088821C0;
L_0888270C:
    ctx.set_gpr(31, 0x08882714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 241u, 0x0887DAF4u>(ctx, &aot_mem) && ctx.pc == 0x08882714u) goto L_08882714;
    return;
L_08882714:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(73))))));
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_0888273C;
      }
      goto L_08882720;
    }
L_08882720:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26664)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888270C;
      }
      goto L_0888272C;
    }
L_0888272C:
    ctx.set_gpr(31, 0x08882734u);
    // nop
    ctx.pc = 0x08B0DD34u;
    return;
L_08882734:
    // nop
    goto L_0888270C;
L_0888273C:
    ctx.set_gpr(31, 0x08882744u);
    // nop
    goto L_088821C0;
L_08882744:
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
L_08882768:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888277Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_088821A4;
L_0888277C:
    ctx.set_gpr(31, 0x08882784u);
    // nop
    goto L_088821A4;
L_08882784:
    ctx.set_gpr(31, 0x0888278Cu);
    // nop
    goto L_0888216C;
L_0888278C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 255u << 16u);
    ctx.set_gpr(2, ctx.gpr[7] | 65280u);
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[6] | 512u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088827F8;
      }
      goto L_088827AC;
    }
L_088827AC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[10]));
    goto L_088827B0;
L_088827B0:
    ctx.set_gpr(31, 0x088827B8u);
    // nop
    goto L_08882188;
L_088827B8:
    ctx.set_gpr(31, 0x088827C0u);
    // nop
    goto L_088821C0;
L_088827C0:
    ctx.set_gpr(31, 0x088827C8u);
    // nop
    goto L_0888216C;
L_088827C8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77))))));
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[11]) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[3]));
        goto L_088827D8;
    }
    goto L_088827D8;
L_088827D8:
    ctx.set_gpr(31, 0x088827E0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    goto L_08882188;
L_088827E0:
    ctx.set_gpr(31, 0x088827E8u);
    // nop
    goto L_088821C0;
L_088827E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088827F8:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(75))))));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[3];
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_088827B0;
      }
      goto L_0888280C;
    }
L_0888280C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
    goto L_088827B0;
L_08882814:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(31, 0x08882830u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    goto L_088821A4;
L_08882830:
    ctx.set_gpr(31, 0x08882838u);
    // nop
    goto L_088821A4;
L_08882838:
    ctx.set_gpr(31, 0x08882840u);
    // nop
    goto L_088821A4;
L_08882840:
    ctx.set_gpr(31, 0x08882848u);
    // nop
    goto L_0888216C;
L_08882848:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 255u << 16u);
    ctx.set_gpr(2, ctx.gpr[7] | 65280u);
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[6] | 512u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08882920;
      }
      goto L_08882868;
    }
L_08882868:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[10]));
    goto L_0888286C;
L_0888286C:
    ctx.set_gpr(31, 0x08882874u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_08882188;
L_08882874:
    ctx.set_gpr(31, 0x0888287Cu);
    ctx.set_gpr(17, 2245u << 16u);
    goto L_088821C0;
L_0888287C:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    goto L_08882880;
L_08882880:
    if (ctx.gpr[11] == ctx.gpr[18]) {
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_088828AC;
    }
    goto L_08882888;
L_08882888:
    ctx.set_gpr(31, 0x08882890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 241u, 0x0887DAF4u>(ctx, &aot_mem) && ctx.pc == 0x08882890u) goto L_08882890;
    return;
L_08882890:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26664)));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_0888287C;
      }
      goto L_0888289C;
    }
L_0888289C:
    ctx.set_gpr(31, 0x088828A4u);
    // nop
    ctx.pc = 0x08B0DD34u;
    return;
L_088828A4:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    goto L_08882880;
L_088828AC:
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882888;
      }
      goto L_088828B4;
    }
L_088828B4:
    ctx.set_gpr(31, 0x088828BCu);
    ctx.set_gpr(17, 2245u << 16u);
    goto L_088821C0;
L_088828BC:
    ctx.set_gpr(31, 0x088828C4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08882768;
L_088828C4:
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77))))));
    goto L_088828C8;
L_088828C8:
    { const bool branch_taken = ctx.gpr[14] != 0u;
    // nop
      if (branch_taken) {
          goto L_088828DC;
      }
      goto L_088828D0;
    }
L_088828D0:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(74))))));
    { const bool branch_taken = ctx.gpr[15] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882900;
      }
      goto L_088828DC;
    }
L_088828DC:
    ctx.set_gpr(31, 0x088828E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 241u, 0x0887DAF4u>(ctx, &aot_mem) && ctx.pc == 0x088828E4u) goto L_088828E4;
    return;
L_088828E4:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26664)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_088828C4;
      }
      goto L_088828F0;
    }
L_088828F0:
    ctx.set_gpr(31, 0x088828F8u);
    // nop
    ctx.pc = 0x08B0DD34u;
    return;
L_088828F8:
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77))))));
    goto L_088828C8;
L_08882900:
    ctx.set_gpr(31, 0x08882908u);
    // nop
    goto L_088821C0;
L_08882908:
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
L_08882920:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(75))))));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[3];
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_0888286C;
      }
      goto L_08882934;
    }
L_08882934:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
    goto L_0888286C;
L_0888293C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(74))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888295C;
      }
      goto L_08882948;
    }
L_08882948:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(73))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0888295C;
      }
      goto L_08882954;
    }
L_08882954:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(77))))));
    ctx.set_gpr(3, 0u < ctx.gpr[6] ? 1u : 0u);
    goto L_0888295C;
L_0888295C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882964:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(73))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0888297C;
      }
      goto L_08882970;
    }
L_08882970:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(77))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882980;
      }
      goto L_0888297C;
    }
L_0888297C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08882980;
L_08882980:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882988:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088829A0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    goto L_088821A4;
L_088829A0:
    ctx.set_gpr(31, 0x088829A8u);
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    goto L_088821C0;
L_088829A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088829C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088829DCu);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_088821A4;
L_088829DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088829F0;
      }
      goto L_088829EC;
    }
L_088829EC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    goto L_088829F0;
L_088829F0:
    ctx.set_gpr(31, 0x088829F8u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    goto L_088821C0;
L_088829F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882A10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08882A2Cu);
    ctx.set_gpr(17, 0u + 0u);
    goto L_088821A4;
L_08882A2C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
        goto L_08882A38;
    }
    goto L_08882A38;
L_08882A38:
    ctx.set_gpr(31, 0x08882A40u);
    // nop
    goto L_088821C0;
L_08882A40:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882A8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08882AA0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_088821A4;
L_08882AA0:
    ctx.set_gpr(31, 0x08882AA8u);
    // nop
    goto L_0888216C;
L_08882AA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
      if (branch_taken) {
          goto L_08882AC0;
      }
      goto L_08882ABC;
    }
L_08882ABC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_08882AC0;
L_08882AC0:
    ctx.set_gpr(4, 15u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[4] | 65535u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(31, 0x08882AE8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    goto L_08882188;
L_08882AE8:
    ctx.set_gpr(31, 0x08882AF0u);
    // nop
    goto L_088821C0;
L_08882AF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882B04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(31, 0x08882B20u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    goto L_088821A4;
L_08882B20:
    ctx.set_gpr(31, 0x08882B28u);
    // nop
    goto L_0888216C;
L_08882B28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
      if (branch_taken) {
          goto L_08882B40;
      }
      goto L_08882B3C;
    }
L_08882B3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_08882B40;
L_08882B40:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(31, 0x08882B60u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    goto L_08882188;
L_08882B60:
    ctx.set_gpr(31, 0x08882B68u);
    // nop
    goto L_088821C0;
L_08882B68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882B80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08882B94u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_088821A4;
L_08882B94:
    ctx.set_gpr(31, 0x08882B9Cu);
    // nop
    goto L_0888216C;
L_08882B9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 255u << 16u);
    ctx.set_gpr(2, ctx.gpr[7] | 65280u);
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[6] | 512u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08882BE0;
      }
      goto L_08882BBC;
    }
L_08882BBC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[10]));
    goto L_08882BC0;
L_08882BC0:
    ctx.set_gpr(31, 0x08882BC8u);
    // nop
    goto L_08882188;
L_08882BC8:
    ctx.set_gpr(31, 0x08882BD0u);
    // nop
    goto L_088821C0;
L_08882BD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882BE0:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(75))))));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[3];
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08882BC0;
      }
      goto L_08882BF4;
    }
L_08882BF4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
    goto L_08882BC0;
L_08882BFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(31, 0x08882C18u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    goto L_088821A4;
L_08882C18:
    ctx.set_gpr(31, 0x08882C20u);
    // nop
    goto L_088821A4;
L_08882C20:
    ctx.set_gpr(31, 0x08882C28u);
    // nop
    goto L_0888216C;
L_08882C28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 255u << 16u);
    ctx.set_gpr(2, ctx.gpr[7] | 65280u);
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[6] | 512u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08882CB4;
      }
      goto L_08882C48;
    }
L_08882C48:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[10]));
    goto L_08882C4C;
L_08882C4C:
    ctx.set_gpr(31, 0x08882C54u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_08882188;
L_08882C54:
    ctx.set_gpr(31, 0x08882C5Cu);
    ctx.set_gpr(17, 2245u << 16u);
    goto L_088821C0;
L_08882C5C:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    goto L_08882C60;
L_08882C60:
    if (ctx.gpr[11] == ctx.gpr[18]) {
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_08882C8C;
    }
    goto L_08882C68;
L_08882C68:
    ctx.set_gpr(31, 0x08882C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 241u, 0x0887DAF4u>(ctx, &aot_mem) && ctx.pc == 0x08882C70u) goto L_08882C70;
    return;
L_08882C70:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26664)));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08882C5C;
      }
      goto L_08882C7C;
    }
L_08882C7C:
    ctx.set_gpr(31, 0x08882C84u);
    // nop
    ctx.pc = 0x08B0DD34u;
    return;
L_08882C84:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    goto L_08882C60;
L_08882C8C:
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882C68;
      }
      goto L_08882C94;
    }
L_08882C94:
    ctx.set_gpr(31, 0x08882C9Cu);
    // nop
    goto L_088821C0;
L_08882C9C:
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
L_08882CB4:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(75))))));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[3];
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08882C4C;
      }
      goto L_08882CC8;
    }
L_08882CC8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
    goto L_08882C4C;
L_08882CD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08882CF4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_088821A4;
L_08882CF4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.set_gpr(31, 0x08882D00u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    goto L_088821C0;
L_08882D00:
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
L_08882D18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08882D34u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_088821A4;
L_08882D34:
    if (static_cast<std::int32_t>(ctx.gpr[17]) < 0) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08882D5C;
    }
    goto L_08882D3C;
L_08882D3C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    goto L_08882D40;
L_08882D40:
    ctx.set_gpr(31, 0x08882D48u);
    // nop
    goto L_088821C0;
L_08882D48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882D5C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    goto L_08882D40;
L_08882D78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(31, 0x08882D98u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_088821A4;
L_08882D98:
    ctx.set_gpr(31, 0x08882DA0u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(-26452));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 640u, 0x088A3CFCu>(ctx, &aot_mem) && ctx.pc == 0x08882DA0u) goto L_08882DA0;
    return;
L_08882DA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 2247u << 16u);
      if (branch_taken) {
          goto L_08882E04;
      }
      goto L_08882DA8;
    }
L_08882DA8:
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(-1632));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(4160));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_08882DB8;
L_08882DB8:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08882E68;
      }
      goto L_08882DC0;
    }
L_08882DC0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(104))))));
    goto L_08882DC4;
L_08882DC4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_08882E58;
      }
      goto L_08882DCC;
    }
L_08882DCC:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(208))))));
    goto L_08882DD0;
L_08882DD0:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
      if (branch_taken) {
          goto L_08882E48;
      }
      goto L_08882DD8;
    }
L_08882DD8:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(312))))));
    goto L_08882DDC;
L_08882DDC:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(312));
      if (branch_taken) {
          goto L_08882E38;
      }
      goto L_08882DE4;
    }
L_08882DE4:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    goto L_08882DE8;
L_08882DE8:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(416));
      if (branch_taken) {
          goto L_08882E28;
      }
      goto L_08882DF0;
    }
L_08882DF0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(520));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    goto L_08882DF8;
L_08882DF8:
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_08882DB8;
    }
    goto L_08882E00;
L_08882E00:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-26452), 0u);
    goto L_08882E04;
L_08882E04:
    ctx.set_gpr(31, 0x08882E0Cu);
    // nop
    goto L_088821C0;
L_08882E0C:
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
L_08882E28:
    ctx.set_gpr(31, 0x08882E30u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(520));
    goto L_08881E10;
L_08882E30:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    goto L_08882DF8;
L_08882E38:
    ctx.set_gpr(31, 0x08882E40u);
    // nop
    goto L_08881E10;
L_08882E40:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    goto L_08882DE8;
L_08882E48:
    ctx.set_gpr(31, 0x08882E50u);
    // nop
    goto L_08881E10;
L_08882E50:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(312))))));
    goto L_08882DDC;
L_08882E58:
    ctx.set_gpr(31, 0x08882E60u);
    // nop
    goto L_08881E10;
L_08882E60:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(208))))));
    goto L_08882DD0;
L_08882E68:
    ctx.set_gpr(31, 0x08882E70u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08881E10;
L_08882E70:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(104))))));
    goto L_08882DC4;
L_08883080:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08883090u);
    // nop
    goto L_088821A4;
L_08883090:
    ctx.set_gpr(31, 0x08883098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 133u, 0x088919DCu>(ctx, &aot_mem) && ctx.pc == 0x08883098u) goto L_08883098;
    return;
L_08883098:
    ctx.set_gpr(31, 0x088830A0u);
    // nop
    goto L_088821C0;
L_088830A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088830AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883114:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(31, 0x08883138u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    goto L_088821A4;
L_08883138:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0888314Cu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_088821C0;
L_0888314C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088831A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088831C4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_088821A4;
L_088831C4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.set_gpr(31, 0x088831D0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    goto L_088821C0;
L_088831D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088831EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08883208u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_088821A4;
L_08883208:
    ctx.set_gpr(31, 0x08883210u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    goto L_088821C0;
L_08883210:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883230:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08883248u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    goto L_088821A4;
L_08883248:
    ctx.set_gpr(31, 0x08883250u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_088821C0;
L_08883250:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883268:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(31, 0x08883284u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_088821A4;
L_08883284:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08883290u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_088821C0;
L_08883290:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088832B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088832C8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    goto L_088821A4;
L_088832C8:
    ctx.set_gpr(31, 0x088832D0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_088821C0;
L_088832D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088832E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088832FCu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_088821A4;
L_088832FC:
    ctx.set_gpr(31, 0x08883304u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 2u, 0x088902B0u>(ctx, &aot_mem) && ctx.pc == 0x08883304u) goto L_08883304;
    return;
L_08883304:
    ctx.set_gpr(31, 0x0888330Cu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088821C0;
L_0888330C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883320:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08883334u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_088821A4;
L_08883334:
    ctx.set_gpr(31, 0x0888333Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 815u, 0x0888FC84u>(ctx, &aot_mem) && ctx.pc == 0x0888333Cu) goto L_0888333C;
    return;
L_0888333C:
    ctx.set_gpr(31, 0x08883344u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088821C0;
L_08883344:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883358:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08883370u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_088821A4;
L_08883370:
    ctx.set_gpr(31, 0x08883378u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 815u, 0x0888FC84u>(ctx, &aot_mem) && ctx.pc == 0x08883378u) goto L_08883378;
    return;
L_08883378:
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.set_gpr(31, 0x08883384u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088821C0;
L_08883384:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088833A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088833BCu);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_088821A4;
L_088833BC:
    ctx.set_gpr(31, 0x088833C4u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_088821C0;
L_088833C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883508:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08883528u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    goto L_088821A4;
L_08883528:
    ctx.set_gpr(31, 0x08883530u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_0888216C;
L_08883530:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x08883544u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08883544u) goto L_08883544;
    return;
L_08883544:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[16];
    ctx.set_gpr(31, 0x0888355Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888355Cu) goto L_0888355C;
    return;
L_0888355C:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08883568u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    goto L_08882188;
L_08883568:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.set_gpr(31, 0x08883578u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    goto L_088821C0;
L_08883578:
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
L_088836D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088836F0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    goto L_088821A4;
L_088836F0:
    ctx.set_gpr(31, 0x088836F8u);
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    goto L_088821C0;
L_088836F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883710:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(77))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883718:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(416)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_08883810;
      }
      goto L_0888375C;
    }
L_0888375C:
    ctx.set_gpr(10, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-26456)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(104));
    ctx.set_gpr(4, 2247u << 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-1632));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[8] & 3u);
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08883900;
      }
      goto L_0888378C;
    }
L_0888378C:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0888380C;
      }
      goto L_08883798;
    }
L_08883798:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(104));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_0888380C;
      }
      goto L_088837AC;
    }
L_088837AC:
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_088837B0;
L_088837B0:
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_0888380C;
      }
      goto L_088837BC;
    }
L_088837BC:
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(104));
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.set_gpr(17, ctx.gpr[5] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_0888380C;
      }
      goto L_088837D0;
    }
L_088837D0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(104));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_0888380C;
      }
      goto L_088837E4;
    }
L_088837E4:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(104));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_0888380C;
      }
      goto L_088837FC;
    }
L_088837FC:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
        goto L_088837B0;
    }
    goto L_0888380C;
L_0888380C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(416)));
    goto L_08883810;
L_08883810:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_088838D8;
      }
      goto L_08883818;
    }
L_08883818:
    ctx.set_gpr(31, 0x08883820u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    goto L_0888216C;
L_08883820:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    ctx.set_gpr(15, ctx.gpr[6] >> 21u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[15]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 11u));
    ctx.set_gpr(14, ctx.gpr[4] << 11u);
    ctx.set_gpr(13, ctx.gpr[16] - ctx.gpr[14]);
    ctx.set_gpr(12, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    ctx.set_gpr(11, 15u << 16u);
    ctx.set_gpr(9, ctx.gpr[4] + ctx.gpr[12]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[11] | 65535u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(512));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[19]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), 0u);
      if (branch_taken) {
          goto L_088838C4;
      }
      goto L_08883888;
    }
L_08883888:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[20];
    ctx.set_gpr(31, 0x0888389Cu);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888389Cu) goto L_0888389C;
    return;
L_0888389C:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[16];
    ctx.set_gpr(31, 0x088838B4u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088838B4u) goto L_088838B4;
    return;
L_088838B4:
    ctx.set_gpr(18, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    goto L_088838C4;
L_088838C4:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x088838D0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_08882188;
L_088838D0:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    goto L_088838D8;
L_088838D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08883900:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088837AC;
      }
      goto L_08883908;
    }
L_08883908:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888378C;
      }
      goto L_08883910;
    }
L_08883910:
    if (ctx.gpr[12] != 0u) {
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
        goto L_08883934;
    }
    goto L_08883918;
L_08883918:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0888380C;
      }
      goto L_08883924;
    }
L_08883924:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_08883934;
L_08883934:
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0888380C;
      }
      goto L_0888393C;
    }
L_0888393C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(104));
    goto L_0888378C;
L_0888394C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(424)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_08883A44;
      }
      goto L_08883990;
    }
L_08883990:
    ctx.set_gpr(10, 2227u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(104));
    ctx.set_gpr(4, 2247u << 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-1632));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[8] & 3u);
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08883B34;
      }
      goto L_088839C0;
    }
L_088839C0:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08883A40;
      }
      goto L_088839CC;
    }
L_088839CC:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(104));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_08883A40;
      }
      goto L_088839E0;
    }
L_088839E0:
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_088839E4;
L_088839E4:
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_08883A40;
      }
      goto L_088839F0;
    }
L_088839F0:
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(104));
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.set_gpr(17, ctx.gpr[5] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_08883A40;
      }
      goto L_08883A04;
    }
L_08883A04:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(104));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_08883A40;
      }
      goto L_08883A18;
    }
L_08883A18:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(104));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_08883A40;
      }
      goto L_08883A30;
    }
L_08883A30:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
        goto L_088839E4;
    }
    goto L_08883A40;
L_08883A40:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(424)));
    goto L_08883A44;
L_08883A44:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08883B0C;
      }
      goto L_08883A4C;
    }
L_08883A4C:
    ctx.set_gpr(31, 0x08883A54u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    goto L_0888216C;
L_08883A54:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    ctx.set_gpr(15, ctx.gpr[6] >> 21u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[15]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 11u));
    ctx.set_gpr(14, ctx.gpr[4] << 11u);
    ctx.set_gpr(13, ctx.gpr[16] - ctx.gpr[14]);
    ctx.set_gpr(12, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    ctx.set_gpr(11, 15u << 16u);
    ctx.set_gpr(9, ctx.gpr[4] + ctx.gpr[12]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[11] | 65535u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(512));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[19]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), 0u);
      if (branch_taken) {
          goto L_08883AF8;
      }
      goto L_08883ABC;
    }
L_08883ABC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[20];
    ctx.set_gpr(31, 0x08883AD0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08883AD0u) goto L_08883AD0;
    return;
L_08883AD0:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[16];
    ctx.set_gpr(31, 0x08883AE8u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08883AE8u) goto L_08883AE8;
    return;
L_08883AE8:
    ctx.set_gpr(18, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    goto L_08883AF8;
L_08883AF8:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.set_gpr(31, 0x08883B04u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    goto L_08882188;
L_08883B04:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    goto L_08883B0C;
L_08883B0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08883B34:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088839E0;
      }
      goto L_08883B3C;
    }
L_08883B3C:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088839C0;
      }
      goto L_08883B44;
    }
L_08883B44:
    if (ctx.gpr[12] != 0u) {
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
        goto L_08883B68;
    }
    goto L_08883B4C;
L_08883B4C:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08883A40;
      }
      goto L_08883B58;
    }
L_08883B58:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_08883B68;
L_08883B68:
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08883A40;
      }
      goto L_08883B70;
    }
L_08883B70:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(104));
    goto L_088839C0;
L_08883BDC:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26440)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08883C24;
      }
      goto L_08883C18;
    }
L_08883C18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    goto L_08883C1C;
L_08883C1C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883C24:
    ctx.set_gpr(31, 0x08883C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1u, 0x0881C004u>(ctx, &aot_mem) && ctx.pc == 0x08883C2Cu) goto L_08883C2C;
    return;
L_08883C2C:
    ctx.set_gpr(31, 0x08883C34u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 40u, 0x08814470u>(ctx, &aot_mem) && ctx.pc == 0x08883C34u) goto L_08883C34;
    return;
L_08883C34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    goto L_08883C1C;
L_08883C3C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26440)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[7]);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[7];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08883C8C;
      }
      goto L_08883C7C;
    }
L_08883C7C:
    ctx.set_gpr(31, 0x08883C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1u, 0x0881C004u>(ctx, &aot_mem) && ctx.pc == 0x08883C84u) goto L_08883C84;
    return;
L_08883C84:
    ctx.set_gpr(31, 0x08883C8Cu);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 40u, 0x08814470u>(ctx, &aot_mem) && ctx.pc == 0x08883C8Cu) goto L_08883C8C;
    return;
L_08883C8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883C98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08883CA8u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x08883CA8u) goto L_08883CA8;
    return;
L_08883CA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883CB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(5, 2184u << 16u);
    ctx.set_gpr(8, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + static_cast<std::uint32_t>(15512));
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(452));
    ctx.set_gpr(6, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-26436), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08883CECu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 197u, 0x088921DCu>(ctx, &aot_mem) && ctx.pc == 0x08883CECu) goto L_08883CEC;
    return;
L_08883CEC:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(4, 2185u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(26880));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08883D04u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(15476));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 647u, 0x0888F2CCu>(ctx, &aot_mem) && ctx.pc == 0x08883D04u) goto L_08883D04;
    return;
L_08883D04:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08883D10u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 197u, 0x088921DCu>(ctx, &aot_mem) && ctx.pc == 0x08883D10u) goto L_08883D10;
    return;
L_08883D10:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(15480));
    ctx.set_gpr(2, 2186u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-29380));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08883D2Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 647u, 0x0888F2CCu>(ctx, &aot_mem) && ctx.pc == 0x08883D2Cu) goto L_08883D2C;
    return;
L_08883D2C:
    ctx.set_gpr(31, 0x08883D34u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 47u, 0x08891474u>(ctx, &aot_mem) && ctx.pc == 0x08883D34u) goto L_08883D34;
    return;
L_08883D34:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_08883D64;
      }
      goto L_08883D3C;
    }
L_08883D3C:
    ctx.set_gpr(31, 0x08883D44u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 246u, 0x08898D90u>(ctx, &aot_mem) && ctx.pc == 0x08883D44u) goto L_08883D44;
    return;
L_08883D44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08883D48;
L_08883D48:
    ctx.set_gpr(31, 0x08883D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 253u, 0x08898E10u>(ctx, &aot_mem) && ctx.pc == 0x08883D50u) goto L_08883D50;
    return;
L_08883D50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883D64:
    ctx.set_gpr(31, 0x08883D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 246u, 0x08898D90u>(ctx, &aot_mem) && ctx.pc == 0x08883D6Cu) goto L_08883D6C;
    return;
L_08883D6C:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08883D48;
L_08883D74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08883DC4;
      }
      goto L_08883D98;
    }
L_08883D98:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08883DACu);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 389u, 0x088998ACu>(ctx, &aot_mem) && ctx.pc == 0x08883DACu) goto L_08883DAC;
    return;
L_08883DAC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08883DB4;
L_08883DB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883DC4:
    ctx.set_gpr(31, 0x08883DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 389u, 0x088998ACu>(ctx, &aot_mem) && ctx.pc == 0x08883DCCu) goto L_08883DCC;
    return;
L_08883DCC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08883DB4;
L_08883E98:
    ctx.set_gpr(10, 2227u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(484)));
    ctx.set_gpr(6, ctx.gpr[10] + static_cast<std::uint32_t>(484));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883ED4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 22u, 0x088840E0u>(ctx, &aot_mem); return;
      }
      goto L_08883EF8;
    }
L_08883EF8:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26384)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 20u, 0x088840D0u>(ctx, &aot_mem); return;
      }
      goto L_08883F08;
    }
L_08883F08:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    goto L_08883F0C;
L_08883F0C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 18u, 0x088840C0u>(ctx, &aot_mem); return;
      }
      goto L_08883F18;
    }
L_08883F18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08883F1C;
L_08883F1C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 16u, 0x088840B0u>(ctx, &aot_mem); return;
      }
      goto L_08883F24;
    }
L_08883F24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08883F28;
L_08883F28:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 14u, 0x088840A0u>(ctx, &aot_mem); return;
      }
      goto L_08883F30;
    }
L_08883F30:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08883F34;
L_08883F34:
    if (ctx.gpr[16] != 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 11u, 0x08884080u>(ctx, &aot_mem); return;
    }
    goto L_08883F3C;
L_08883F3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    goto L_08883F40;
L_08883F40:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 9u, 0x08884070u>(ctx, &aot_mem); return;
      }
      goto L_08883F48;
    }
L_08883F48:
    ctx.set_gpr(31, 0x08883F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x08883F50u) goto L_08883F50;
    return;
L_08883F50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 7u, 0x08884058u>(ctx, &aot_mem); return;
    }
    goto L_08883F5C;
L_08883F5C:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    goto L_08883F60;
L_08883F60:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08883FB0;
      }
      goto L_08883F68;
    }
L_08883F68:
    ctx.set_gpr(20, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(18, ctx.gpr[19] << 2u);
    goto L_08883F70;
L_08883F70:
    ctx.set_gpr(16, ctx.gpr[18] + ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 5u, 0x0888403Cu>(ctx, &aot_mem); return;
      }
      goto L_08883F84;
    }
L_08883F84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    goto L_08883F88;
L_08883F88:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 3u, 0x08884020u>(ctx, &aot_mem); return;
      }
      goto L_08883F90;
    }
L_08883F90:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    goto L_08883F94;
L_08883F94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 1u, 0x08884004u>(ctx, &aot_mem); return;
      }
      goto L_08883FA0;
    }
L_08883FA0:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    goto L_08883FA4;
L_08883FA4:
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.set_gpr(18, ctx.gpr[19] << 2u);
      if (branch_taken) {
          goto L_08883F70;
      }
      goto L_08883FB0;
    }
L_08883FB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08883FF4;
      }
      goto L_08883FBC;
    }
L_08883FBC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08883FC0;
L_08883FC0:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08883FCCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(196));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08883FCCu) goto L_08883FCC;
    return;
L_08883FCC:
    ctx.set_gpr(31, 0x08883FD4u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x08883FD4u) goto L_08883FD4;
    return;
L_08883FD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08883FD8;
L_08883FD8:
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
L_08883FF4:
    ctx.set_gpr(31, 0x08883FFCu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 628u, 0x08872500u>(ctx, &aot_mem) && ctx.pc == 0x08883FFCu) goto L_08883FFC;
    return;
L_08883FFC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08883FC0;
}

void recomp_unit_0031(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0031_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_31(Runtime &runtime) {
    runtime.register_generated_unit(31u, 0x08880000u, 16384u, &recomp_unit_0031, &recomp_unit_0031_entry);
    runtime.register_function(0x08880000u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888000Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888001Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888002Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888003Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888004Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880058u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880070u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888007Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880090u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088800B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088800C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088800D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088800E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088800F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880114u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880120u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880154u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088801ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088801D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088801E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088801E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088801F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880200u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880218u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880268u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880274u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880284u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880294u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088802A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088802A8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088802B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088802C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088802DCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088802F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880300u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880304u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880308u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880314u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888032Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888033Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880348u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880350u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880360u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880364u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880378u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088803A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088803ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088803B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088803C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088803CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088803D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088803E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088803E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880404u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880410u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880424u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888043Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880450u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880458u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888045Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880464u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880478u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888048Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880494u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888049Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088804A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088804B0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088804BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088804C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088804E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088804ECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088804F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088804FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880504u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880518u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880520u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880528u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880530u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880540u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880548u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880550u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880558u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880560u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888056Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880574u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880580u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880588u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088805C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088805D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088805DCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088805E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088805ECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088805F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880610u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880618u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880620u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880630u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880650u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880658u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880668u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880670u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888067Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880680u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880684u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880698u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088806A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088806A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088806C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088806CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088806D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088806DCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088806F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888070Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880710u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880724u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888072Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880738u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880740u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880748u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880750u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888075Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880760u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888076Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880774u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888077Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880790u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880798u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088807A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088807ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088807BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088807C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088807CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088807D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880800u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880820u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880838u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880840u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880848u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880854u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880860u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888086Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880880u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880888u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880894u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888089Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088808B0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088808C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088808DCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088808F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088808F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880900u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880908u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880924u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880930u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880938u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880940u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888094Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888095Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888096Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880984u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888099Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088809A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088809ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088809BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088809C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088809D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088809D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088809E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880A1Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880A28u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880A34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880A40u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880A4Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880A50u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880A5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880A70u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880A8Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880AA8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880AACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880AB4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880AD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880AD8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880AE4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880AE8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B1Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B24u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B80u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BB4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BBCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BC4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BD4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BE0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BF0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BFCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C04u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C14u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C20u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C54u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C70u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C78u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C8Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C94u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CC4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CC8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CD8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D1Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D54u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D74u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D7Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D84u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D98u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880DB4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880DC8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880DD4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880DE4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880DF0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880E34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880E4Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880E60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880EA8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880EB0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880ECCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880EE4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880EECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880EF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F38u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F40u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F4Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F78u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F90u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F98u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FA0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FA8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FB8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FC4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FC8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FD8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FE0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FE8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FF8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881000u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881008u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881010u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888103Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881068u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888106Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881080u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881088u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888108Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881094u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881098u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888109Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088810A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088810B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088810B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088810D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088810E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088810E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088810F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088810FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881104u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888110Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881110u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881118u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881120u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881124u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888112Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881134u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888113Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881144u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888114Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881154u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888115Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881164u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888116Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881174u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888117Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881184u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888118Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881190u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881198u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811DCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811ECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881200u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881208u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881210u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881220u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888122Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888123Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881250u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881264u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881274u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881280u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881290u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088812E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088812F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088812FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881318u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881320u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888132Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881334u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888134Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881358u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881364u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881370u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888137Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888138Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888139Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088813ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088813BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088813C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088813D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088813E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088813F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881400u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881410u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881454u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881464u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888148Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888149Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088814A8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088814B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088814C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088814CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088814DCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088814E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088814F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881520u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881538u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881540u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881558u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888155Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881568u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881570u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881578u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881598u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088815A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088815B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088815BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088815C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088815D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088815D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088815E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088815F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881600u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881618u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888161Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881628u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881630u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881638u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881640u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881650u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888165Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881664u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881674u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881680u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881690u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888169Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088816A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088816C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088816D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088816D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088816E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088816ECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088816F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888170Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881714u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888171Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881724u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888173Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881740u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881748u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881754u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888177Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881784u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888178Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881794u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888179Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088817D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088817DCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088817FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881820u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881834u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888184Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881854u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888185Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881878u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881888u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088818A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088818B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088818C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088818E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881918u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881920u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881940u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881964u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881978u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881990u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881998u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088819A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088819BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088819D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088819E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088819F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A14u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A40u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A48u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A70u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A78u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A84u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A98u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881AA8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881AB4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881AC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881AD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881AD4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881AF0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881AF8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B04u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B08u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B1Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B28u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B40u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B48u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881BACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881BC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881BE0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881BECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C04u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C20u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C4Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C68u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C70u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C74u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C80u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C88u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C90u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C98u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881CA0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881CA8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881CB0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881CC8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881CD8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881CE0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881CF0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881CFCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D08u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D18u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D20u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D2Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D48u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D78u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881DA8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881DACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881DB8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881DD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881DE4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881DE8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881DF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E08u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E10u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E54u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E74u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E78u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E84u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E94u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E98u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E9Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881EB0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881EBCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881EC8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881ED0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881ED8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881EF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F10u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F18u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F1Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F38u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F4Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F94u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FA4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FA8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FB4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882000u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882008u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882014u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882020u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882030u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888203Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882040u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882050u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882058u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882060u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882068u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882070u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882080u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882088u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882094u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088820A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088820A8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088820C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088820D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088820D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088820E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088820E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088820F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088820FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882108u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882110u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882120u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882128u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882130u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882138u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882144u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888214Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882154u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888215Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882164u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888216Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888217Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882188u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882198u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088821A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088821B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088821C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088821D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882204u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882234u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882238u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882244u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888224Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888225Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882288u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888228Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882294u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888229Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088822A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088822C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088822D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088822E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088822E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882300u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882308u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882310u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888232Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882334u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888233Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882344u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888234Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888236Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882370u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882378u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882380u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882384u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888238Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882394u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823A8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823B0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882400u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882408u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882410u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882414u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888241Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882424u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882430u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882438u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882440u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882448u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882450u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882458u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882460u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882468u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882488u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888248Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882494u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888249Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882504u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888250Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882520u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882528u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882540u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882554u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888255Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882570u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882578u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888258Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882594u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088825D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088825D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882630u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882638u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888265Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882698u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088826A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088826A8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882704u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888270Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882714u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882720u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888272Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882734u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888273Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882744u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882768u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888277Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882784u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888278Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088827ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088827B0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088827B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088827C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088827C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088827D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088827E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088827E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088827F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888280Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882814u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882830u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882838u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882840u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882848u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882868u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888286Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882874u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888287Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882880u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882888u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882890u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888289Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828DCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882900u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882908u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882920u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882934u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888293Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882948u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882954u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888295Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882964u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882970u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888297Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882980u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882988u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088829A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088829A8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088829C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088829DCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088829ECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088829F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088829F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882A10u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882A2Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882A38u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882A40u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882A8Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AA0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AA8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882ABCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AE8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AF0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B04u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B20u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B28u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B40u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B68u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B80u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B94u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B9Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BBCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BC8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BE0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BFCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C18u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C20u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C28u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C48u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C4Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C54u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C68u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C70u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C7Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C84u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C8Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C94u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C9Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882CB4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882CC8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882CD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882CF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D18u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D40u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D48u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D78u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D98u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882DA0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882DA8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882DB8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882DC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882DC4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882DCCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882DD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882DD8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882DDCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882DE4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882DE8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882DF0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882DF8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E04u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E28u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E38u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E40u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E48u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E50u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E68u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E70u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883080u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883090u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883098u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088830A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088830ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883114u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883138u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888314Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088831A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088831C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088831D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088831ECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883208u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883210u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883230u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883248u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883250u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883268u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883284u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883290u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088832B0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088832C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088832D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088832E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088832FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883304u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888330Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883320u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883334u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888333Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883344u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883358u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883370u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883378u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883384u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088833A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088833BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088833C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883508u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883528u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883530u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883544u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888355Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883568u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883578u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088836D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088836F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088836F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883710u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883718u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888375Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888378Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883798u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088837ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088837B0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088837BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088837D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088837E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088837FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888380Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883810u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883818u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883820u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883888u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888389Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088838B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088838C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088838D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088838D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883900u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883908u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883910u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883918u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883924u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883934u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888393Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888394Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883990u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088839C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088839CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088839E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088839E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088839F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883A04u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883A18u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883A30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883A40u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883A44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883A4Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883A54u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883ABCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883AD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883AE8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883AF8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B04u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B4Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B68u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B70u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883BDCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C18u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C1Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C24u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C2Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C7Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C84u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C8Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C98u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883CA8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883CB4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883CECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D04u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D10u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D2Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D48u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D50u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D64u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D74u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D98u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883DACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883DB4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883DC4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883DCCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883E98u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883ED4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883EF8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F08u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F18u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F1Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F24u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F28u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F40u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F48u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F50u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F68u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F70u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F84u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F88u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F90u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F94u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FA0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FA4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FB0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FBCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FCCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FD4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FD8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FFCu, &recomp_unit_0031, "recomp_unit_0031");
}
} // namespace psprecomp
