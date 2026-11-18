#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0167[4093] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 9, 0, 10, 0, 11,
    0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0,
    0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0,
    0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 39, 0, 40, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 64, 0, 65,
    0, 0, 0, 0, 66, 0, 0, 0, 67, 68, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 73, 0, 74, 0, 0,
    0, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 83, 0, 84, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0,
    0, 92, 0, 93, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 100, 0, 0, 101,
    0, 0, 102, 0, 103, 0, 104, 105, 0, 106, 0, 107, 0, 108, 0, 0, 109, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 114,
    0, 115, 0, 0, 116, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 133, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138,
    0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 144, 0, 145, 0, 0, 146, 0, 0, 0, 0,
    0, 0, 147, 0, 148, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 153, 0, 154, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0,
    161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 167, 168, 0, 169, 0, 0, 0, 0, 170, 0, 0,
    0, 171, 172, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0, 179, 0, 0, 0, 0, 180, 0, 0,
    0, 181, 0, 182, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 189, 0,
    190, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 198, 0, 0, 0, 199, 200, 0,
    0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 205, 206, 0, 207, 0, 0, 0, 0, 208, 0, 209,
    0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 221, 0, 222, 0, 223, 0, 0, 224, 0, 225, 0, 226, 0,
    227, 0, 228, 0, 229, 0, 230, 0, 0, 0, 231, 0, 232, 0, 0, 233, 234, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0,
    237, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 244, 0, 245, 0,
    246, 0, 0, 247, 0, 0, 248, 249, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 255, 256, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0,
    261, 0, 0, 262, 0, 0, 0, 263, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 268, 0, 269, 0, 270,
    0, 0, 0, 0, 0, 0, 0, 0, 271, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 0, 277, 0, 278, 0, 0, 0, 279, 0, 280, 0, 0, 281,
    0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 288, 0, 289, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 291, 292, 0, 0, 293, 0, 294, 0, 0, 0, 0, 295, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 299, 0, 300, 0,
    301, 302, 0, 303, 0, 0, 304, 0, 305, 0, 0, 306, 0, 307, 0, 0, 308, 0, 309, 0, 310, 311, 0, 0, 312, 0, 313, 0, 314, 0, 0, 0,
    0, 315, 0, 316, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 319, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322,
    0, 323, 0, 324, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 328, 0, 329, 0, 330, 0, 331, 0, 0, 332, 0, 333, 0, 0, 0,
    0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 337, 0, 0, 0, 0, 338, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 342, 0,
    0, 343, 0, 344, 0, 0, 0, 0, 345, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 350, 0, 351, 0, 0, 0, 352,
    0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 356, 0, 0, 357, 0, 358, 359, 0, 360, 0, 0, 361, 0, 362, 0, 0, 363, 0, 364,
    0, 0, 365, 0, 366, 0, 0, 367, 0, 368, 0, 0, 369, 0, 370, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0,
    375, 0, 0, 376, 0, 377, 378, 0, 379, 0, 0, 380, 0, 381, 0, 0, 382, 0, 383, 0, 0, 384, 0, 385, 0, 0, 386, 0, 387, 0, 0, 388,
    0, 389, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 393, 394, 395, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0,
    398, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 401, 0, 402, 0, 0, 0, 403, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 407, 0,
    408, 0, 409, 0, 0, 410, 0, 411, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 415, 416, 417, 0, 0, 418, 0, 0, 0, 0,
    0, 0, 419, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 423, 0, 424, 0, 0, 0, 425, 426, 0, 0, 0, 427, 0, 0,
    0, 428, 0, 429, 0, 430, 0, 431, 0, 0, 0, 432, 0, 433, 0, 0, 434, 0, 435, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0,
    439, 440, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 444, 0, 445, 0, 446, 447, 0, 448, 0, 0, 0, 449, 0, 450, 0, 0,
    451, 0, 452, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 456, 457, 0, 0, 0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0,
    461, 0, 462, 0, 463, 0, 464, 0, 0, 465, 0, 466, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 469, 470, 0, 471, 0, 0, 0, 0, 0, 472,
    0, 473, 0, 0, 0, 0, 0, 474, 475, 0, 0, 0, 476, 0, 477, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0,
    0, 481, 0, 482, 0, 0, 0, 0, 483, 0, 484, 0, 485, 0, 0, 486, 0, 487, 0, 0, 488, 0, 0, 489, 0, 490, 491, 0, 492, 0, 0, 493,
    0, 494, 0, 0, 495, 0, 496, 0, 0, 497, 0, 498, 0, 499, 0, 500, 0, 501, 0, 502, 0, 503, 0, 0, 504, 0, 505, 0, 506, 0, 0, 0,
    0, 507, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 514, 515, 0, 516, 0,
    0, 0, 0, 0, 517, 0, 518, 0, 0, 519, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0, 0, 0, 0, 524,
    0, 525, 0, 526, 0, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 529, 0, 530, 0, 531, 0, 532, 0, 533, 0, 0, 0, 0, 534, 0, 535, 0,
    0, 0, 0, 536, 0, 537, 0, 538, 539, 540, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 542, 0, 543, 0, 0, 0, 0, 544, 0, 545, 0,
    0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 548, 0, 0, 549, 0, 550, 0, 551, 0, 552, 0, 0, 553, 0, 554, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 557, 0, 0, 558, 0, 559, 0, 0, 0, 560, 0, 0, 561, 0, 562, 0, 0, 0, 563, 0, 0, 0,
    0, 0, 0, 0, 564, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 567, 0, 568, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0,
    570, 0, 571, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 0, 575, 0, 0, 0, 576, 0, 577, 0, 0, 578, 0, 579, 0,
    0, 0, 580, 0, 581, 0, 0, 582, 0, 0, 583, 0, 0, 584, 0, 585, 0, 0, 586, 0, 0, 587, 0, 588, 0, 0, 0, 589, 0, 0, 590, 0,
    591, 0, 592, 0, 0, 593, 0, 594, 0, 595, 0, 0, 0, 596, 0, 597, 0, 598, 0, 0, 599, 0, 0, 0, 600, 0, 0, 601, 0, 0, 602, 603,
    0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 606, 0, 0, 0, 0, 607, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 611,
    0, 0, 612, 0, 613, 0, 614, 0, 615, 0, 0, 616, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 619, 0, 0, 0, 620,
    0, 0, 621, 0, 622, 0, 0, 0, 623, 0, 0, 624, 0, 625, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 627, 0, 628, 0, 0, 0, 629,
    0, 0, 0, 0, 0, 0, 0, 630, 0, 631, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 635, 0, 0, 0, 0,
    0, 0, 0, 636, 0, 637, 0, 0, 638, 0, 0, 0, 639, 0, 640, 0, 0, 641, 0, 642, 0, 0, 0, 643, 0, 644, 0, 0, 645, 0, 0, 646,
    0, 0, 647, 0, 648, 0, 0, 649, 0, 0, 650, 0, 651, 0, 0, 0, 652, 0, 0, 653, 0, 654, 0, 655, 0, 0, 656, 0, 657, 0, 658, 0,
    0, 0, 659, 0, 660, 0, 661, 0, 0, 662, 0, 0, 0, 663, 0, 0, 664, 0, 0, 665, 666, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 668, 0, 669, 0, 0, 670, 671, 0, 672, 0, 0, 0, 0, 0, 673, 0, 674, 0, 675, 0, 0, 676, 0, 677, 0, 0, 0, 678, 0,
    679, 0, 680, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 683, 0, 684, 0, 0, 685, 0, 686, 0, 0, 0, 0, 687, 0, 0,
    0, 0, 0, 688, 0, 689, 0, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0, 692, 0, 0, 0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 0, 0,
    695, 0, 696, 0, 0, 0, 0, 0, 697, 0, 698, 0, 0, 0, 0, 0, 699, 700, 0, 0, 701, 0, 702, 0, 703, 0, 0, 0, 0, 0, 0, 704,
    0, 0, 705, 0, 706, 0, 707, 0, 708, 709, 0, 0, 710, 0, 0, 0, 711, 0, 0, 712, 0, 0, 713, 0, 0, 714, 715, 0, 0, 0, 0, 0,
    0, 0, 716, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 0, 0, 0, 721, 0, 722, 0, 0, 0, 0, 0, 0, 0,
    723, 0, 0, 0, 0, 0, 0, 0, 0, 724, 725, 0, 0, 726, 0, 727, 0, 728, 0, 0, 729, 0, 730, 0, 731, 0, 0, 732, 0, 733, 734, 0,
    0, 0, 0, 735, 0, 736, 0, 0, 737, 0, 738, 0, 0, 0, 739, 0, 740, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 743,
    0, 0, 744, 0, 745, 0, 746, 0, 747, 748, 0, 0, 749, 0, 0, 0, 750, 0, 0, 751, 0, 0, 752, 0, 0, 753, 754, 0, 0, 0, 0, 0,
    0, 0, 755, 0, 0, 756, 0, 757, 0, 0, 0, 0, 0, 0, 0, 758, 0, 759, 0, 0, 0, 0, 760, 0, 761, 0, 0, 0, 0, 0, 0, 0,
    762, 0, 0, 0, 0, 0, 0, 0, 0, 763, 764, 0, 0, 765, 0, 0, 0, 766, 0, 767, 0, 0, 768, 769, 0, 0, 0, 0, 0, 0, 770, 0,
    0, 0, 0, 0, 0, 0, 771, 0, 0, 772, 0, 0, 773, 774, 0, 775, 0, 0, 0, 0, 0, 776, 0, 777, 0, 0, 0, 778, 0, 779, 0, 780,
    0, 0, 781, 0, 0, 782, 0, 783, 0, 784, 0, 0, 785, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 788, 0, 0,
    0, 0, 789, 0, 790, 0, 791, 0, 0, 0, 792, 0, 0, 793, 794, 0, 795, 0, 796, 0, 0, 797, 0, 0, 0, 798, 0, 799, 0, 0, 800, 0,
    801, 0, 802, 803, 0, 0, 0, 804, 0, 0, 805, 0, 806, 0, 807, 0, 0, 808, 809, 0, 810, 0, 811, 0, 812, 0, 813, 814, 0, 0, 0, 815,
    0, 816, 0, 817, 0, 0, 818, 0, 0, 0, 819, 0, 0, 820, 0, 0, 821, 822, 0, 0, 823, 0, 0, 0, 0, 0, 824, 0, 825, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 827, 0, 0, 0, 0, 828, 0, 829, 0, 830, 0, 0, 0, 0, 0, 0, 0,
    831, 0, 832, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 835, 0, 0, 0, 0, 836, 0, 0, 0, 837, 0, 838, 0,
    839, 0, 0, 0, 840, 841, 0, 842, 0, 843, 0, 0, 844, 0, 0, 0, 845, 0, 846, 0, 0, 847, 0, 848, 0, 849, 850, 0, 0, 0, 851, 0,
    0, 852, 0, 853, 0, 854, 0, 0, 0, 0, 0, 855, 0, 0, 856, 0, 857, 0, 858, 0, 0, 859, 860, 0, 861, 0, 862, 0, 863, 0, 864, 865,
    0, 0, 0, 866, 0, 867, 0, 868, 0, 0, 0, 0, 869, 0, 870, 0, 0, 871, 0, 0, 872, 873, 0, 0, 874, 0, 0, 0, 0, 0, 875, 0,
    876, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0, 0, 0, 878, 0, 0, 0, 0, 879, 0, 880, 0, 881, 0, 0, 0,
    0, 0, 0, 0, 882, 0, 883, 0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 0, 885, 0, 886, 0, 887, 0, 0, 0, 0, 0, 888, 0, 889, 0,
    0, 0, 890, 0, 891, 0, 892, 0, 893, 0, 0, 0, 0, 894, 0, 895, 0, 0, 0, 0, 896, 0, 897, 0, 0, 0, 0, 898, 0, 899, 0, 0,
    0, 0, 900, 0, 901, 0, 0, 902, 0, 903, 0, 904, 0, 0, 905, 0, 906, 0, 907, 0, 0, 0, 0, 908, 0, 909, 0, 910, 0, 911, 0, 912,
    0, 913, 0, 914, 0, 915, 916, 0, 917, 0, 0, 0, 918, 0, 0, 919, 0, 920, 0, 0, 921, 0, 922, 0, 923, 0, 0, 924, 0, 925, 0, 926,
    0, 0, 0, 0, 927, 0, 0, 0, 0, 928, 0, 929, 0, 0, 0, 0, 930, 0, 931, 0, 0, 0, 0, 932, 0, 933, 934, 0, 0, 0, 935, 0,
    0, 0, 0, 0, 936, 0, 0, 937, 0, 938, 0, 939, 0, 0, 0, 0, 940, 0, 941, 0, 0, 0, 0, 942, 0, 943, 0, 0, 0, 0, 944, 0,
    945, 0, 946, 0, 0, 947, 948, 0, 949, 0, 0, 0, 0, 0, 950, 0, 951, 0, 0, 0, 0, 0, 952, 953, 0, 0, 0, 954, 0, 955, 0, 956,
    0, 957, 0, 958, 0, 959, 0, 960, 0, 961, 962, 0, 0, 963, 0, 0, 0, 964, 965, 0, 0, 0, 0, 966, 0, 0, 0, 967, 0, 968, 0, 0,
    0, 969, 0, 0, 0, 970, 971, 0, 972, 0, 0, 0, 973, 0, 0, 0, 974, 0, 975, 0, 0, 0, 976, 0, 977, 0, 0, 0, 978, 0, 979, 0,
    0, 0, 980, 0, 981, 0, 0, 0, 982, 0, 983, 0, 0, 0, 984, 0, 985, 0, 0, 0, 986, 0, 987, 0, 0, 0, 988, 0, 989, 0, 0, 0,
    990, 0, 991, 0, 992, 0, 993, 0, 994, 0, 0, 0, 995, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 996, 0, 997, 0, 0, 0,
    998, 0, 0, 0, 0, 0, 0, 999, 0, 0, 1000, 0, 1001, 0, 1002, 0, 1003, 0, 1004, 0, 0, 0, 1005, 0, 1006, 0, 1007, 0, 1008, 0, 1009, 0,
    0, 0, 1010, 0, 1011, 0, 0, 1012, 0, 0, 0, 0, 0, 0, 0, 1013, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1014, 0, 0, 1015, 0, 0,
    1016, 0, 1017, 0, 0, 1018, 0, 1019, 0, 1020, 0, 1021, 0, 0, 0, 0, 0, 0, 1022, 0, 0, 1023, 0, 0, 1024, 0, 1025, 0, 1026, 0, 1027, 0,
    0, 1028, 0, 0, 1029, 0, 1030, 0, 0, 0, 1031, 0, 0, 1032, 0, 1033, 0, 0, 0, 0, 0, 1034, 0, 1035, 0, 1036, 0, 0, 0, 0, 1037, 0,
    1038, 0, 0, 0, 0, 0, 1039, 0, 1040, 0, 0, 0, 0, 0, 1041, 0, 1042, 0, 1043, 0, 0, 0, 0, 1044, 1045, 0, 1046, 0, 0, 0, 0, 1047,
    0, 0, 0, 1048, 0, 1049, 0, 0, 0, 0, 1050, 0, 1051, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1052, 0, 0, 0,
    1053, 0, 1054, 0, 0, 0, 0, 1055, 0, 1056, 0, 0, 0, 0, 1057, 0, 0, 1058, 0, 1059, 0, 1060, 0, 0, 1061, 0, 0, 1062, 0, 0, 1063, 0,
    0, 0, 1064, 0, 0, 0, 1065, 0, 0, 0, 0, 0, 1066, 0, 0, 0, 0, 0, 1067, 1068, 0, 0, 0, 0, 1069, 0, 0, 0, 0, 0, 1070, 0,
    0, 0, 0, 1071, 0, 1072, 0, 1073, 0, 0, 1074, 0, 0, 1075, 0, 0, 1076, 0, 0, 0, 1077, 0, 0, 0, 1078, 0, 0, 0, 0, 0, 1079, 0,
    0, 0, 0, 0, 1080, 1081, 0, 0, 0, 0, 1082, 0, 0, 0, 0, 0, 1083, 0, 0, 0, 0, 1084, 0, 1085, 0, 0, 0, 1086, 0, 0, 0, 0,
    0, 0, 1087, 0, 0, 0, 0, 0, 1088, 0, 0, 0, 1089, 0, 1090, 0, 1091, 0, 0, 1092, 0, 0, 1093, 0, 1094, 0, 0, 0, 1095, 0, 0, 0,
    1096, 0, 0, 0, 0, 0, 1097, 0, 0, 0, 0, 0, 1098, 1099, 0, 0, 0, 0, 1100, 0, 0, 0, 0, 0, 1101, 0, 0, 0, 0, 1102, 0, 1103,
    0, 0, 0, 1104, 0, 0, 0, 0, 0, 0, 1105, 0, 0, 0, 0, 0, 1106, 0, 0, 0, 1107, 1108, 0, 0, 0, 0, 1109, 0, 0, 0, 1110, 0,
    1111, 0, 0, 1112, 0, 1113, 0, 0, 0, 1114, 0, 0, 1115, 0, 1116, 1117, 0, 1118, 0, 0, 1119, 0, 1120, 0, 0, 0, 0, 1121, 0, 1122, 0, 1123,
    0, 0, 1124, 0, 1125, 0, 0, 1126, 0, 1127, 0, 1128, 0, 0, 1129, 0, 0, 1130, 0, 0, 0, 1131, 1132, 0, 0, 1133, 0, 0, 1134, 0, 1135, 0,
    0, 0, 0, 1136, 1137, 0, 0, 1138, 0, 0, 1139, 0, 1140, 0, 0, 1141, 0, 0, 1142, 0, 0, 0, 1143, 1144, 0, 0, 1145, 0, 0, 1146, 0, 1147,
    0, 0, 0, 0, 1148, 1149, 0, 0, 1150, 0, 0, 1151, 0, 1152, 0, 0, 1153, 0, 0, 1154, 0, 0, 0, 1155, 1156, 0, 0, 1157, 0, 0, 1158, 0,
    1159, 0, 0, 0, 0, 1160, 1161, 0, 0, 1162, 0, 1163, 0, 1164, 0, 0, 1165, 0, 1166, 0, 1167, 0, 0, 0, 0, 0, 1168, 0, 0, 0, 1169, 0,
    1170, 0, 0, 0, 0, 1171, 0, 1172, 0, 0, 0, 0, 1173, 0, 0, 0, 0, 1174, 0, 0, 0, 0, 0, 1175, 0, 1176, 0, 1177, 0, 0, 0, 0,
    1178, 0, 0, 0, 0, 1179, 0, 1180, 0, 1181, 0, 0, 0, 0, 1182, 0, 1183, 0, 0, 0, 0, 1184, 0, 1185, 0, 1186, 0, 0, 1187, 0, 1188, 0,
    1189, 0, 0, 0, 0, 1190, 0, 1191, 0, 0, 0, 0, 1192, 0, 1193, 0, 0, 0, 0, 0, 1194, 0, 0, 0, 0, 0, 1195, 0, 1196, 0, 1197, 0,
    1198, 0, 0, 1199, 0, 1200, 0, 1201, 0, 0, 0, 0, 1202, 0, 0, 0, 0, 0, 0, 1203, 0, 1204, 0, 0, 0, 0, 1205, 0, 1206, 0, 0, 0,
    0, 1207, 0, 1208, 0, 1209, 0, 1210, 0, 0, 1211, 0, 1212, 0, 1213, 0, 0, 0, 0, 1214, 0, 1215, 0, 0, 0, 0, 1216, 0, 1217,
};
void recomp_unit_0167_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AA0000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0167[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AA0000;
    case 2u: goto L_08AA0008;
    case 3u: goto L_08AA0010;
    case 4u: goto L_08AA0028;
    case 5u: goto L_08AA0030;
    case 6u: goto L_08AA0048;
    case 7u: goto L_08AA0050;
    case 8u: goto L_08AA0064;
    case 9u: goto L_08AA006C;
    case 10u: goto L_08AA0074;
    case 11u: goto L_08AA007C;
    case 12u: goto L_08AA0094;
    case 13u: goto L_08AA009C;
    case 14u: goto L_08AA00C0;
    case 15u: goto L_08AA00C8;
    case 16u: goto L_08AA00EC;
    case 17u: goto L_08AA00F4;
    case 18u: goto L_08AA0118;
    case 19u: goto L_08AA0120;
    case 20u: goto L_08AA0128;
    case 21u: goto L_08AA0140;
    case 22u: goto L_08AA0148;
    case 23u: goto L_08AA016C;
    case 24u: goto L_08AA0174;
    case 25u: goto L_08AA0198;
    case 26u: goto L_08AA01A0;
    case 27u: goto L_08AA01C4;
    case 28u: goto L_08AA01C8;
    case 29u: goto L_08AA01D4;
    case 30u: goto L_08AA01F4;
    case 31u: goto L_08AA01FC;
    case 32u: goto L_08AA023C;
    case 33u: goto L_08AA0244;
    case 34u: goto L_08AA0284;
    case 35u: goto L_08AA0298;
    case 36u: goto L_08AA02A0;
    case 37u: goto L_08AA02D4;
    case 38u: goto L_08AA02DC;
    case 39u: goto L_08AA02F0;
    case 40u: goto L_08AA02F8;
    case 41u: goto L_08AA032C;
    case 42u: goto L_08AA0334;
    case 43u: goto L_08AA0354;
    case 44u: goto L_08AA035C;
    case 45u: goto L_08AA0390;
    case 46u: goto L_08AA0398;
    case 47u: goto L_08AA03B8;
    case 48u: goto L_08AA03C0;
    case 49u: goto L_08AA03F4;
    case 50u: goto L_08AA03FC;
    case 51u: goto L_08AA0430;
    case 52u: goto L_08AA0438;
    case 53u: goto L_08AA046C;
    case 54u: goto L_08AA0474;
    case 55u: goto L_08AA04A0;
    case 56u: goto L_08AA04A8;
    case 57u: goto L_08AA04D4;
    case 58u: goto L_08AA04DC;
    case 59u: goto L_08AA0508;
    case 60u: goto L_08AA0510;
    case 61u: goto L_08AA053C;
    case 62u: goto L_08AA0544;
    case 63u: goto L_08AA0570;
    case 64u: goto L_08AA0574;
    case 65u: goto L_08AA057C;
    case 66u: goto L_08AA0590;
    case 67u: goto L_08AA05A0;
    case 68u: goto L_08AA05A4;
    case 69u: goto L_08AA05AC;
    case 70u: goto L_08AA05C0;
    case 71u: goto L_08AA05D0;
    case 72u: goto L_08AA05D8;
    case 73u: goto L_08AA05EC;
    case 74u: goto L_08AA05F4;
    case 75u: goto L_08AA0608;
    case 76u: goto L_08AA0610;
    case 77u: goto L_08AA0624;
    case 78u: goto L_08AA063C;
    case 79u: goto L_08AA0678;
    case 80u: goto L_08AA0690;
    case 81u: goto L_08AA069C;
    case 82u: goto L_08AA06A4;
    case 83u: goto L_08AA06B0;
    case 84u: goto L_08AA06B8;
    case 85u: goto L_08AA06C0;
    case 86u: goto L_08AA06D0;
    case 87u: goto L_08AA0740;
    case 88u: goto L_08AA074C;
    case 89u: goto L_08AA0754;
    case 90u: goto L_08AA0768;
    case 91u: goto L_08AA0770;
    case 92u: goto L_08AA0784;
    case 93u: goto L_08AA078C;
    case 94u: goto L_08AA07A0;
    case 95u: goto L_08AA07A8;
    case 96u: goto L_08AA07BC;
    case 97u: goto L_08AA07C4;
    case 98u: goto L_08AA07D8;
    case 99u: goto L_08AA07E0;
    case 100u: goto L_08AA07F0;
    case 101u: goto L_08AA07FC;
    case 102u: goto L_08AA0808;
    case 103u: goto L_08AA0810;
    case 104u: goto L_08AA0818;
    case 105u: goto L_08AA081C;
    case 106u: goto L_08AA0824;
    case 107u: goto L_08AA082C;
    case 108u: goto L_08AA0834;
    case 109u: goto L_08AA0840;
    case 110u: goto L_08AA0848;
    case 111u: goto L_08AA0858;
    case 112u: goto L_08AA0868;
    case 113u: goto L_08AA0874;
    case 114u: goto L_08AA087C;
    case 115u: goto L_08AA0884;
    case 116u: goto L_08AA0890;
    case 117u: goto L_08AA0894;
    case 118u: goto L_08AA089C;
    case 119u: goto L_08AA08A4;
    case 120u: goto L_08AA08AC;
    case 121u: goto L_08AA08B4;
    case 122u: goto L_08AA08BC;
    case 123u: goto L_08AA08C4;
    case 124u: goto L_08AA08CC;
    case 125u: goto L_08AA08D8;
    case 126u: goto L_08AA08E0;
    case 127u: goto L_08AA0900;
    case 128u: goto L_08AA090C;
    case 129u: goto L_08AA0914;
    case 130u: goto L_08AA091C;
    case 131u: goto L_08AA0924;
    case 132u: goto L_08AA092C;
    case 133u: goto L_08AA0930;
    case 134u: goto L_08AA0944;
    case 135u: goto L_08AA094C;
    case 136u: goto L_08AA0954;
    case 137u: goto L_08AA0974;
    case 138u: goto L_08AA097C;
    case 139u: goto L_08AA0990;
    case 140u: goto L_08AA0998;
    case 141u: goto L_08AA09AC;
    case 142u: goto L_08AA09B8;
    case 143u: goto L_08AA09C4;
    case 144u: goto L_08AA09D8;
    case 145u: goto L_08AA09E0;
    case 146u: goto L_08AA09EC;
    case 147u: goto L_08AA0A08;
    case 148u: goto L_08AA0A10;
    case 149u: goto L_08AA0A18;
    case 150u: goto L_08AA0A24;
    case 151u: goto L_08AA0A2C;
    case 152u: goto L_08AA0A3C;
    case 153u: goto L_08AA0A44;
    case 154u: goto L_08AA0A4C;
    case 155u: goto L_08AA0A50;
    case 156u: goto L_08AA0A58;
    case 157u: goto L_08AA0A60;
    case 158u: goto L_08AA0A68;
    case 159u: goto L_08AA0A70;
    case 160u: goto L_08AA0A78;
    case 161u: goto L_08AA0A80;
    case 162u: goto L_08AA0A88;
    case 163u: goto L_08AA0AA8;
    case 164u: goto L_08AA0AB0;
    case 165u: goto L_08AA0AC4;
    case 166u: goto L_08AA0ACC;
    case 167u: goto L_08AA0AD4;
    case 168u: goto L_08AA0AD8;
    case 169u: goto L_08AA0AE0;
    case 170u: goto L_08AA0AF4;
    case 171u: goto L_08AA0B04;
    case 172u: goto L_08AA0B08;
    case 173u: goto L_08AA0B10;
    case 174u: goto L_08AA0B24;
    case 175u: goto L_08AA0B34;
    case 176u: goto L_08AA0B48;
    case 177u: goto L_08AA0B50;
    case 178u: goto L_08AA0B58;
    case 179u: goto L_08AA0B60;
    case 180u: goto L_08AA0B74;
    case 181u: goto L_08AA0B84;
    case 182u: goto L_08AA0B8C;
    case 183u: goto L_08AA0BA0;
    case 184u: goto L_08AA0BA8;
    case 185u: goto L_08AA0BBC;
    case 186u: goto L_08AA0BC4;
    case 187u: goto L_08AA0BD8;
    case 188u: goto L_08AA0BF0;
    case 189u: goto L_08AA0BF8;
    case 190u: goto L_08AA0C00;
    case 191u: goto L_08AA0C14;
    case 192u: goto L_08AA0C1C;
    case 193u: goto L_08AA0C30;
    case 194u: goto L_08AA0C38;
    case 195u: goto L_08AA0C4C;
    case 196u: goto L_08AA0C54;
    case 197u: goto L_08AA0C5C;
    case 198u: goto L_08AA0C64;
    case 199u: goto L_08AA0C74;
    case 200u: goto L_08AA0C78;
    case 201u: goto L_08AA0C98;
    case 202u: goto L_08AA0CA8;
    case 203u: goto L_08AA0CB0;
    case 204u: goto L_08AA0CC4;
    case 205u: goto L_08AA0CD4;
    case 206u: goto L_08AA0CD8;
    case 207u: goto L_08AA0CE0;
    case 208u: goto L_08AA0CF4;
    case 209u: goto L_08AA0CFC;
    case 210u: goto L_08AA0D10;
    case 211u: goto L_08AA0D20;
    case 212u: goto L_08AA0D28;
    case 213u: goto L_08AA0D3C;
    case 214u: goto L_08AA0D44;
    case 215u: goto L_08AA0D58;
    case 216u: goto L_08AA0D68;
    case 217u: goto L_08AA0D94;
    case 218u: goto L_08AA0DA8;
    case 219u: goto L_08AA0DB8;
    case 220u: goto L_08AA0DC4;
    case 221u: goto L_08AA0DCC;
    case 222u: goto L_08AA0DD4;
    case 223u: goto L_08AA0DDC;
    case 224u: goto L_08AA0DE8;
    case 225u: goto L_08AA0DF0;
    case 226u: goto L_08AA0DF8;
    case 227u: goto L_08AA0E00;
    case 228u: goto L_08AA0E08;
    case 229u: goto L_08AA0E10;
    case 230u: goto L_08AA0E18;
    case 231u: goto L_08AA0E28;
    case 232u: goto L_08AA0E30;
    case 233u: goto L_08AA0E3C;
    case 234u: goto L_08AA0E40;
    case 235u: goto L_08AA0E5C;
    case 236u: goto L_08AA0E64;
    case 237u: goto L_08AA0E80;
    case 238u: goto L_08AA0E88;
    case 239u: goto L_08AA0E9C;
    case 240u: goto L_08AA0EAC;
    case 241u: goto L_08AA0ED0;
    case 242u: goto L_08AA0EDC;
    case 243u: goto L_08AA0EE8;
    case 244u: goto L_08AA0EF0;
    case 245u: goto L_08AA0EF8;
    case 246u: goto L_08AA0F00;
    case 247u: goto L_08AA0F0C;
    case 248u: goto L_08AA0F18;
    case 249u: goto L_08AA0F1C;
    case 250u: goto L_08AA0F28;
    case 251u: goto L_08AA0F40;
    case 252u: goto L_08AA0F48;
    case 253u: goto L_08AA0F84;
    case 254u: goto L_08AA0F94;
    case 255u: goto L_08AA0FA8;
    case 256u: goto L_08AA0FAC;
    case 257u: goto L_08AA0FC8;
    case 258u: goto L_08AA0FD0;
    case 259u: goto L_08AA0FE4;
    case 260u: goto L_08AA0FEC;
    case 261u: goto L_08AA1000;
    case 262u: goto L_08AA100C;
    case 263u: goto L_08AA101C;
    case 264u: goto L_08AA1024;
    case 265u: goto L_08AA102C;
    case 266u: goto L_08AA105C;
    case 267u: goto L_08AA1064;
    case 268u: goto L_08AA106C;
    case 269u: goto L_08AA1074;
    case 270u: goto L_08AA107C;
    case 271u: goto L_08AA10A0;
    case 272u: goto L_08AA10A4;
    case 273u: goto L_08AA10AC;
    case 274u: goto L_08AA10B4;
    case 275u: goto L_08AA10BC;
    case 276u: goto L_08AA10C4;
    case 277u: goto L_08AA10D0;
    case 278u: goto L_08AA10D8;
    case 279u: goto L_08AA10E8;
    case 280u: goto L_08AA10F0;
    case 281u: goto L_08AA10FC;
    case 282u: goto L_08AA1104;
    case 283u: goto L_08AA1124;
    case 284u: goto L_08AA112C;
    case 285u: goto L_08AA1134;
    case 286u: goto L_08AA1144;
    case 287u: goto L_08AA114C;
    case 288u: goto L_08AA1160;
    case 289u: goto L_08AA1168;
    case 290u: goto L_08AA1170;
    case 291u: goto L_08AA1190;
    case 292u: goto L_08AA1194;
    case 293u: goto L_08AA11A0;
    case 294u: goto L_08AA11A8;
    case 295u: goto L_08AA11BC;
    case 296u: goto L_08AA11C4;
    case 297u: goto L_08AA11CC;
    case 298u: goto L_08AA11EC;
    case 299u: goto L_08AA11F0;
    case 300u: goto L_08AA11F8;
    case 301u: goto L_08AA1200;
    case 302u: goto L_08AA1204;
    case 303u: goto L_08AA120C;
    case 304u: goto L_08AA1218;
    case 305u: goto L_08AA1220;
    case 306u: goto L_08AA122C;
    case 307u: goto L_08AA1234;
    case 308u: goto L_08AA1240;
    case 309u: goto L_08AA1248;
    case 310u: goto L_08AA1250;
    case 311u: goto L_08AA1254;
    case 312u: goto L_08AA1260;
    case 313u: goto L_08AA1268;
    case 314u: goto L_08AA1270;
    case 315u: goto L_08AA1284;
    case 316u: goto L_08AA128C;
    case 317u: goto L_08AA12A0;
    case 318u: goto L_08AA12AC;
    case 319u: goto L_08AA12BC;
    case 320u: goto L_08AA12C4;
    case 321u: goto L_08AA12CC;
    case 322u: goto L_08AA12FC;
    case 323u: goto L_08AA1304;
    case 324u: goto L_08AA130C;
    case 325u: goto L_08AA1314;
    case 326u: goto L_08AA131C;
    case 327u: goto L_08AA1340;
    case 328u: goto L_08AA1344;
    case 329u: goto L_08AA134C;
    case 330u: goto L_08AA1354;
    case 331u: goto L_08AA135C;
    case 332u: goto L_08AA1368;
    case 333u: goto L_08AA1370;
    case 334u: goto L_08AA1390;
    case 335u: goto L_08AA139C;
    case 336u: goto L_08AA13A8;
    case 337u: goto L_08AA13B0;
    case 338u: goto L_08AA13C4;
    case 339u: goto L_08AA13CC;
    case 340u: goto L_08AA13D4;
    case 341u: goto L_08AA13F4;
    case 342u: goto L_08AA13F8;
    case 343u: goto L_08AA1404;
    case 344u: goto L_08AA140C;
    case 345u: goto L_08AA1420;
    case 346u: goto L_08AA1428;
    case 347u: goto L_08AA1430;
    case 348u: goto L_08AA1450;
    case 349u: goto L_08AA1458;
    case 350u: goto L_08AA1464;
    case 351u: goto L_08AA146C;
    case 352u: goto L_08AA147C;
    case 353u: goto L_08AA1484;
    case 354u: goto L_08AA14A4;
    case 355u: goto L_08AA14AC;
    case 356u: goto L_08AA14B4;
    case 357u: goto L_08AA14C0;
    case 358u: goto L_08AA14C8;
    case 359u: goto L_08AA14CC;
    case 360u: goto L_08AA14D4;
    case 361u: goto L_08AA14E0;
    case 362u: goto L_08AA14E8;
    case 363u: goto L_08AA14F4;
    case 364u: goto L_08AA14FC;
    case 365u: goto L_08AA1508;
    case 366u: goto L_08AA1510;
    case 367u: goto L_08AA151C;
    case 368u: goto L_08AA1524;
    case 369u: goto L_08AA1530;
    case 370u: goto L_08AA1538;
    case 371u: goto L_08AA1548;
    case 372u: goto L_08AA1550;
    case 373u: goto L_08AA1570;
    case 374u: goto L_08AA1578;
    case 375u: goto L_08AA1580;
    case 376u: goto L_08AA158C;
    case 377u: goto L_08AA1594;
    case 378u: goto L_08AA1598;
    case 379u: goto L_08AA15A0;
    case 380u: goto L_08AA15AC;
    case 381u: goto L_08AA15B4;
    case 382u: goto L_08AA15C0;
    case 383u: goto L_08AA15C8;
    case 384u: goto L_08AA15D4;
    case 385u: goto L_08AA15DC;
    case 386u: goto L_08AA15E8;
    case 387u: goto L_08AA15F0;
    case 388u: goto L_08AA15FC;
    case 389u: goto L_08AA1604;
    case 390u: goto L_08AA160C;
    case 391u: goto L_08AA1620;
    case 392u: goto L_08AA1634;
    case 393u: goto L_08AA1640;
    case 394u: goto L_08AA1644;
    case 395u: goto L_08AA1648;
    case 396u: goto L_08AA1654;
    case 397u: goto L_08AA1678;
    case 398u: goto L_08AA1680;
    case 399u: goto L_08AA1688;
    case 400u: goto L_08AA16B0;
    case 401u: goto L_08AA16B4;
    case 402u: goto L_08AA16BC;
    case 403u: goto L_08AA16CC;
    case 404u: goto L_08AA16D0;
    case 405u: goto L_08AA16E0;
    case 406u: goto L_08AA16F0;
    case 407u: goto L_08AA16F8;
    case 408u: goto L_08AA1700;
    case 409u: goto L_08AA1708;
    case 410u: goto L_08AA1714;
    case 411u: goto L_08AA171C;
    case 412u: goto L_08AA1724;
    case 413u: goto L_08AA1738;
    case 414u: goto L_08AA174C;
    case 415u: goto L_08AA1758;
    case 416u: goto L_08AA175C;
    case 417u: goto L_08AA1760;
    case 418u: goto L_08AA176C;
    case 419u: goto L_08AA1788;
    case 420u: goto L_08AA1790;
    case 421u: goto L_08AA179C;
    case 422u: goto L_08AA17C4;
    case 423u: goto L_08AA17C8;
    case 424u: goto L_08AA17D0;
    case 425u: goto L_08AA17E0;
    case 426u: goto L_08AA17E4;
    case 427u: goto L_08AA17F4;
    case 428u: goto L_08AA1804;
    case 429u: goto L_08AA180C;
    case 430u: goto L_08AA1814;
    case 431u: goto L_08AA181C;
    case 432u: goto L_08AA182C;
    case 433u: goto L_08AA1834;
    case 434u: goto L_08AA1840;
    case 435u: goto L_08AA1848;
    case 436u: goto L_08AA1850;
    case 437u: goto L_08AA1864;
    case 438u: goto L_08AA1874;
    case 439u: goto L_08AA1880;
    case 440u: goto L_08AA1884;
    case 441u: goto L_08AA1894;
    case 442u: goto L_08AA18A0;
    case 443u: goto L_08AA18B8;
    case 444u: goto L_08AA18C0;
    case 445u: goto L_08AA18C8;
    case 446u: goto L_08AA18D0;
    case 447u: goto L_08AA18D4;
    case 448u: goto L_08AA18DC;
    case 449u: goto L_08AA18EC;
    case 450u: goto L_08AA18F4;
    case 451u: goto L_08AA1900;
    case 452u: goto L_08AA1908;
    case 453u: goto L_08AA1910;
    case 454u: goto L_08AA1924;
    case 455u: goto L_08AA1934;
    case 456u: goto L_08AA1940;
    case 457u: goto L_08AA1944;
    case 458u: goto L_08AA1954;
    case 459u: goto L_08AA1960;
    case 460u: goto L_08AA1978;
    case 461u: goto L_08AA1980;
    case 462u: goto L_08AA1988;
    case 463u: goto L_08AA1990;
    case 464u: goto L_08AA1998;
    case 465u: goto L_08AA19A4;
    case 466u: goto L_08AA19AC;
    case 467u: goto L_08AA19B4;
    case 468u: goto L_08AA19C8;
    case 469u: goto L_08AA19D8;
    case 470u: goto L_08AA19DC;
    case 471u: goto L_08AA19E4;
    case 472u: goto L_08AA19FC;
    case 473u: goto L_08AA1A04;
    case 474u: goto L_08AA1A1C;
    case 475u: goto L_08AA1A20;
    case 476u: goto L_08AA1A30;
    case 477u: goto L_08AA1A38;
    case 478u: goto L_08AA1A4C;
    case 479u: goto L_08AA1A54;
    case 480u: goto L_08AA1A68;
    case 481u: goto L_08AA1A84;
    case 482u: goto L_08AA1A8C;
    case 483u: goto L_08AA1AA0;
    case 484u: goto L_08AA1AA8;
    case 485u: goto L_08AA1AB0;
    case 486u: goto L_08AA1ABC;
    case 487u: goto L_08AA1AC4;
    case 488u: goto L_08AA1AD0;
    case 489u: goto L_08AA1ADC;
    case 490u: goto L_08AA1AE4;
    case 491u: goto L_08AA1AE8;
    case 492u: goto L_08AA1AF0;
    case 493u: goto L_08AA1AFC;
    case 494u: goto L_08AA1B04;
    case 495u: goto L_08AA1B10;
    case 496u: goto L_08AA1B18;
    case 497u: goto L_08AA1B24;
    case 498u: goto L_08AA1B2C;
    case 499u: goto L_08AA1B34;
    case 500u: goto L_08AA1B3C;
    case 501u: goto L_08AA1B44;
    case 502u: goto L_08AA1B4C;
    case 503u: goto L_08AA1B54;
    case 504u: goto L_08AA1B60;
    case 505u: goto L_08AA1B68;
    case 506u: goto L_08AA1B70;
    case 507u: goto L_08AA1B84;
    case 508u: goto L_08AA1B98;
    case 509u: goto L_08AA1BA0;
    case 510u: goto L_08AA1BB4;
    case 511u: goto L_08AA1BBC;
    case 512u: goto L_08AA1BD0;
    case 513u: goto L_08AA1BE0;
    case 514u: goto L_08AA1BEC;
    case 515u: goto L_08AA1BF0;
    case 516u: goto L_08AA1BF8;
    case 517u: goto L_08AA1C10;
    case 518u: goto L_08AA1C18;
    case 519u: goto L_08AA1C24;
    case 520u: goto L_08AA1C2C;
    case 521u: goto L_08AA1C40;
    case 522u: goto L_08AA1C5C;
    case 523u: goto L_08AA1C68;
    case 524u: goto L_08AA1C7C;
    case 525u: goto L_08AA1C84;
    case 526u: goto L_08AA1C8C;
    case 527u: goto L_08AA1CA0;
    case 528u: goto L_08AA1CA8;
    case 529u: goto L_08AA1CBC;
    case 530u: goto L_08AA1CC4;
    case 531u: goto L_08AA1CCC;
    case 532u: goto L_08AA1CD4;
    case 533u: goto L_08AA1CDC;
    case 534u: goto L_08AA1CF0;
    case 535u: goto L_08AA1CF8;
    case 536u: goto L_08AA1D0C;
    case 537u: goto L_08AA1D14;
    case 538u: goto L_08AA1D1C;
    case 539u: goto L_08AA1D20;
    case 540u: goto L_08AA1D24;
    case 541u: goto L_08AA1D38;
    case 542u: goto L_08AA1D54;
    case 543u: goto L_08AA1D5C;
    case 544u: goto L_08AA1D70;
    case 545u: goto L_08AA1D78;
    case 546u: goto L_08AA1D8C;
    case 547u: goto L_08AA1D9C;
    case 548u: goto L_08AA1DA8;
    case 549u: goto L_08AA1DB4;
    case 550u: goto L_08AA1DBC;
    case 551u: goto L_08AA1DC4;
    case 552u: goto L_08AA1DCC;
    case 553u: goto L_08AA1DD8;
    case 554u: goto L_08AA1DE0;
    case 555u: goto L_08AA1E10;
    case 556u: goto L_08AA1E18;
    case 557u: goto L_08AA1E28;
    case 558u: goto L_08AA1E34;
    case 559u: goto L_08AA1E3C;
    case 560u: goto L_08AA1E4C;
    case 561u: goto L_08AA1E58;
    case 562u: goto L_08AA1E60;
    case 563u: goto L_08AA1E70;
    case 564u: goto L_08AA1E90;
    case 565u: goto L_08AA1E98;
    case 566u: goto L_08AA1EA8;
    case 567u: goto L_08AA1EC8;
    case 568u: goto L_08AA1ED0;
    case 569u: goto L_08AA1EE0;
    case 570u: goto L_08AA1F00;
    case 571u: goto L_08AA1F08;
    case 572u: goto L_08AA1F18;
    case 573u: goto L_08AA1F38;
    case 574u: goto L_08AA1F40;
    case 575u: goto L_08AA1F4C;
    case 576u: goto L_08AA1F5C;
    case 577u: goto L_08AA1F64;
    case 578u: goto L_08AA1F70;
    case 579u: goto L_08AA1F78;
    case 580u: goto L_08AA1F88;
    case 581u: goto L_08AA1F90;
    case 582u: goto L_08AA1F9C;
    case 583u: goto L_08AA1FA8;
    case 584u: goto L_08AA1FB4;
    case 585u: goto L_08AA1FBC;
    case 586u: goto L_08AA1FC8;
    case 587u: goto L_08AA1FD4;
    case 588u: goto L_08AA1FDC;
    case 589u: goto L_08AA1FEC;
    case 590u: goto L_08AA1FF8;
    case 591u: goto L_08AA2000;
    case 592u: goto L_08AA2008;
    case 593u: goto L_08AA2014;
    case 594u: goto L_08AA201C;
    case 595u: goto L_08AA2024;
    case 596u: goto L_08AA2034;
    case 597u: goto L_08AA203C;
    case 598u: goto L_08AA2044;
    case 599u: goto L_08AA2050;
    case 600u: goto L_08AA2060;
    case 601u: goto L_08AA206C;
    case 602u: goto L_08AA2078;
    case 603u: goto L_08AA207C;
    case 604u: goto L_08AA208C;
    case 605u: goto L_08AA20A8;
    case 606u: goto L_08AA20B0;
    case 607u: goto L_08AA20C4;
    case 608u: goto L_08AA20CC;
    case 609u: goto L_08AA20E0;
    case 610u: goto L_08AA20F0;
    case 611u: goto L_08AA20FC;
    case 612u: goto L_08AA2108;
    case 613u: goto L_08AA2110;
    case 614u: goto L_08AA2118;
    case 615u: goto L_08AA2120;
    case 616u: goto L_08AA212C;
    case 617u: goto L_08AA2134;
    case 618u: goto L_08AA2164;
    case 619u: goto L_08AA216C;
    case 620u: goto L_08AA217C;
    case 621u: goto L_08AA2188;
    case 622u: goto L_08AA2190;
    case 623u: goto L_08AA21A0;
    case 624u: goto L_08AA21AC;
    case 625u: goto L_08AA21B4;
    case 626u: goto L_08AA21C4;
    case 627u: goto L_08AA21E4;
    case 628u: goto L_08AA21EC;
    case 629u: goto L_08AA21FC;
    case 630u: goto L_08AA221C;
    case 631u: goto L_08AA2224;
    case 632u: goto L_08AA2234;
    case 633u: goto L_08AA2254;
    case 634u: goto L_08AA225C;
    case 635u: goto L_08AA226C;
    case 636u: goto L_08AA228C;
    case 637u: goto L_08AA2294;
    case 638u: goto L_08AA22A0;
    case 639u: goto L_08AA22B0;
    case 640u: goto L_08AA22B8;
    case 641u: goto L_08AA22C4;
    case 642u: goto L_08AA22CC;
    case 643u: goto L_08AA22DC;
    case 644u: goto L_08AA22E4;
    case 645u: goto L_08AA22F0;
    case 646u: goto L_08AA22FC;
    case 647u: goto L_08AA2308;
    case 648u: goto L_08AA2310;
    case 649u: goto L_08AA231C;
    case 650u: goto L_08AA2328;
    case 651u: goto L_08AA2330;
    case 652u: goto L_08AA2340;
    case 653u: goto L_08AA234C;
    case 654u: goto L_08AA2354;
    case 655u: goto L_08AA235C;
    case 656u: goto L_08AA2368;
    case 657u: goto L_08AA2370;
    case 658u: goto L_08AA2378;
    case 659u: goto L_08AA2388;
    case 660u: goto L_08AA2390;
    case 661u: goto L_08AA2398;
    case 662u: goto L_08AA23A4;
    case 663u: goto L_08AA23B4;
    case 664u: goto L_08AA23C0;
    case 665u: goto L_08AA23CC;
    case 666u: goto L_08AA23D0;
    case 667u: goto L_08AA23E0;
    case 668u: goto L_08AA240C;
    case 669u: goto L_08AA2414;
    case 670u: goto L_08AA2420;
    case 671u: goto L_08AA2424;
    case 672u: goto L_08AA242C;
    case 673u: goto L_08AA2444;
    case 674u: goto L_08AA244C;
    case 675u: goto L_08AA2454;
    case 676u: goto L_08AA2460;
    case 677u: goto L_08AA2468;
    case 678u: goto L_08AA2478;
    case 679u: goto L_08AA2480;
    case 680u: goto L_08AA2488;
    case 681u: goto L_08AA2494;
    case 682u: goto L_08AA24B8;
    case 683u: goto L_08AA24C4;
    case 684u: goto L_08AA24CC;
    case 685u: goto L_08AA24D8;
    case 686u: goto L_08AA24E0;
    case 687u: goto L_08AA24F4;
    case 688u: goto L_08AA250C;
    case 689u: goto L_08AA2514;
    case 690u: goto L_08AA2530;
    case 691u: goto L_08AA253C;
    case 692u: goto L_08AA2544;
    case 693u: goto L_08AA2564;
    case 694u: goto L_08AA256C;
    case 695u: goto L_08AA2580;
    case 696u: goto L_08AA2588;
    case 697u: goto L_08AA25A0;
    case 698u: goto L_08AA25A8;
    case 699u: goto L_08AA25C0;
    case 700u: goto L_08AA25C4;
    case 701u: goto L_08AA25D0;
    case 702u: goto L_08AA25D8;
    case 703u: goto L_08AA25E0;
    case 704u: goto L_08AA25FC;
    case 705u: goto L_08AA2608;
    case 706u: goto L_08AA2610;
    case 707u: goto L_08AA2618;
    case 708u: goto L_08AA2620;
    case 709u: goto L_08AA2624;
    case 710u: goto L_08AA2630;
    case 711u: goto L_08AA2640;
    case 712u: goto L_08AA264C;
    case 713u: goto L_08AA2658;
    case 714u: goto L_08AA2664;
    case 715u: goto L_08AA2668;
    case 716u: goto L_08AA2688;
    case 717u: goto L_08AA2694;
    case 718u: goto L_08AA269C;
    case 719u: goto L_08AA26BC;
    case 720u: goto L_08AA26C4;
    case 721u: goto L_08AA26D8;
    case 722u: goto L_08AA26E0;
    case 723u: goto L_08AA2700;
    case 724u: goto L_08AA2724;
    case 725u: goto L_08AA2728;
    case 726u: goto L_08AA2734;
    case 727u: goto L_08AA273C;
    case 728u: goto L_08AA2744;
    case 729u: goto L_08AA2750;
    case 730u: goto L_08AA2758;
    case 731u: goto L_08AA2760;
    case 732u: goto L_08AA276C;
    case 733u: goto L_08AA2774;
    case 734u: goto L_08AA2778;
    case 735u: goto L_08AA278C;
    case 736u: goto L_08AA2794;
    case 737u: goto L_08AA27A0;
    case 738u: goto L_08AA27A8;
    case 739u: goto L_08AA27B8;
    case 740u: goto L_08AA27C0;
    case 741u: goto L_08AA27C8;
    case 742u: goto L_08AA27DC;
    case 743u: goto L_08AA27FC;
    case 744u: goto L_08AA2808;
    case 745u: goto L_08AA2810;
    case 746u: goto L_08AA2818;
    case 747u: goto L_08AA2820;
    case 748u: goto L_08AA2824;
    case 749u: goto L_08AA2830;
    case 750u: goto L_08AA2840;
    case 751u: goto L_08AA284C;
    case 752u: goto L_08AA2858;
    case 753u: goto L_08AA2864;
    case 754u: goto L_08AA2868;
    case 755u: goto L_08AA2888;
    case 756u: goto L_08AA2894;
    case 757u: goto L_08AA289C;
    case 758u: goto L_08AA28BC;
    case 759u: goto L_08AA28C4;
    case 760u: goto L_08AA28D8;
    case 761u: goto L_08AA28E0;
    case 762u: goto L_08AA2900;
    case 763u: goto L_08AA2924;
    case 764u: goto L_08AA2928;
    case 765u: goto L_08AA2934;
    case 766u: goto L_08AA2944;
    case 767u: goto L_08AA294C;
    case 768u: goto L_08AA2958;
    case 769u: goto L_08AA295C;
    case 770u: goto L_08AA2978;
    case 771u: goto L_08AA2998;
    case 772u: goto L_08AA29A4;
    case 773u: goto L_08AA29B0;
    case 774u: goto L_08AA29B4;
    case 775u: goto L_08AA29BC;
    case 776u: goto L_08AA29D4;
    case 777u: goto L_08AA29DC;
    case 778u: goto L_08AA29EC;
    case 779u: goto L_08AA29F4;
    case 780u: goto L_08AA29FC;
    case 781u: goto L_08AA2A08;
    case 782u: goto L_08AA2A14;
    case 783u: goto L_08AA2A1C;
    case 784u: goto L_08AA2A24;
    case 785u: goto L_08AA2A30;
    case 786u: goto L_08AA2A48;
    case 787u: goto L_08AA2A6C;
    case 788u: goto L_08AA2A74;
    case 789u: goto L_08AA2A88;
    case 790u: goto L_08AA2A90;
    case 791u: goto L_08AA2A98;
    case 792u: goto L_08AA2AA8;
    case 793u: goto L_08AA2AB4;
    case 794u: goto L_08AA2AB8;
    case 795u: goto L_08AA2AC0;
    case 796u: goto L_08AA2AC8;
    case 797u: goto L_08AA2AD4;
    case 798u: goto L_08AA2AE4;
    case 799u: goto L_08AA2AEC;
    case 800u: goto L_08AA2AF8;
    case 801u: goto L_08AA2B00;
    case 802u: goto L_08AA2B08;
    case 803u: goto L_08AA2B0C;
    case 804u: goto L_08AA2B1C;
    case 805u: goto L_08AA2B28;
    case 806u: goto L_08AA2B30;
    case 807u: goto L_08AA2B38;
    case 808u: goto L_08AA2B44;
    case 809u: goto L_08AA2B48;
    case 810u: goto L_08AA2B50;
    case 811u: goto L_08AA2B58;
    case 812u: goto L_08AA2B60;
    case 813u: goto L_08AA2B68;
    case 814u: goto L_08AA2B6C;
    case 815u: goto L_08AA2B7C;
    case 816u: goto L_08AA2B84;
    case 817u: goto L_08AA2B8C;
    case 818u: goto L_08AA2B98;
    case 819u: goto L_08AA2BA8;
    case 820u: goto L_08AA2BB4;
    case 821u: goto L_08AA2BC0;
    case 822u: goto L_08AA2BC4;
    case 823u: goto L_08AA2BD0;
    case 824u: goto L_08AA2BE8;
    case 825u: goto L_08AA2BF0;
    case 826u: goto L_08AA2C2C;
    case 827u: goto L_08AA2C3C;
    case 828u: goto L_08AA2C50;
    case 829u: goto L_08AA2C58;
    case 830u: goto L_08AA2C60;
    case 831u: goto L_08AA2C80;
    case 832u: goto L_08AA2C88;
    case 833u: goto L_08AA2CA0;
    case 834u: goto L_08AA2CC4;
    case 835u: goto L_08AA2CCC;
    case 836u: goto L_08AA2CE0;
    case 837u: goto L_08AA2CF0;
    case 838u: goto L_08AA2CF8;
    case 839u: goto L_08AA2D00;
    case 840u: goto L_08AA2D10;
    case 841u: goto L_08AA2D14;
    case 842u: goto L_08AA2D1C;
    case 843u: goto L_08AA2D24;
    case 844u: goto L_08AA2D30;
    case 845u: goto L_08AA2D40;
    case 846u: goto L_08AA2D48;
    case 847u: goto L_08AA2D54;
    case 848u: goto L_08AA2D5C;
    case 849u: goto L_08AA2D64;
    case 850u: goto L_08AA2D68;
    case 851u: goto L_08AA2D78;
    case 852u: goto L_08AA2D84;
    case 853u: goto L_08AA2D8C;
    case 854u: goto L_08AA2D94;
    case 855u: goto L_08AA2DAC;
    case 856u: goto L_08AA2DB8;
    case 857u: goto L_08AA2DC0;
    case 858u: goto L_08AA2DC8;
    case 859u: goto L_08AA2DD4;
    case 860u: goto L_08AA2DD8;
    case 861u: goto L_08AA2DE0;
    case 862u: goto L_08AA2DE8;
    case 863u: goto L_08AA2DF0;
    case 864u: goto L_08AA2DF8;
    case 865u: goto L_08AA2DFC;
    case 866u: goto L_08AA2E0C;
    case 867u: goto L_08AA2E14;
    case 868u: goto L_08AA2E1C;
    case 869u: goto L_08AA2E30;
    case 870u: goto L_08AA2E38;
    case 871u: goto L_08AA2E44;
    case 872u: goto L_08AA2E50;
    case 873u: goto L_08AA2E54;
    case 874u: goto L_08AA2E60;
    case 875u: goto L_08AA2E78;
    case 876u: goto L_08AA2E80;
    case 877u: goto L_08AA2EBC;
    case 878u: goto L_08AA2ECC;
    case 879u: goto L_08AA2EE0;
    case 880u: goto L_08AA2EE8;
    case 881u: goto L_08AA2EF0;
    case 882u: goto L_08AA2F10;
    case 883u: goto L_08AA2F18;
    case 884u: goto L_08AA2F30;
    case 885u: goto L_08AA2F48;
    case 886u: goto L_08AA2F50;
    case 887u: goto L_08AA2F58;
    case 888u: goto L_08AA2F70;
    case 889u: goto L_08AA2F78;
    case 890u: goto L_08AA2F88;
    case 891u: goto L_08AA2F90;
    case 892u: goto L_08AA2F98;
    case 893u: goto L_08AA2FA0;
    case 894u: goto L_08AA2FB4;
    case 895u: goto L_08AA2FBC;
    case 896u: goto L_08AA2FD0;
    case 897u: goto L_08AA2FD8;
    case 898u: goto L_08AA2FEC;
    case 899u: goto L_08AA2FF4;
    case 900u: goto L_08AA3008;
    case 901u: goto L_08AA3010;
    case 902u: goto L_08AA301C;
    case 903u: goto L_08AA3024;
    case 904u: goto L_08AA302C;
    case 905u: goto L_08AA3038;
    case 906u: goto L_08AA3040;
    case 907u: goto L_08AA3048;
    case 908u: goto L_08AA305C;
    case 909u: goto L_08AA3064;
    case 910u: goto L_08AA306C;
    case 911u: goto L_08AA3074;
    case 912u: goto L_08AA307C;
    case 913u: goto L_08AA3084;
    case 914u: goto L_08AA308C;
    case 915u: goto L_08AA3094;
    case 916u: goto L_08AA3098;
    case 917u: goto L_08AA30A0;
    case 918u: goto L_08AA30B0;
    case 919u: goto L_08AA30BC;
    case 920u: goto L_08AA30C4;
    case 921u: goto L_08AA30D0;
    case 922u: goto L_08AA30D8;
    case 923u: goto L_08AA30E0;
    case 924u: goto L_08AA30EC;
    case 925u: goto L_08AA30F4;
    case 926u: goto L_08AA30FC;
    case 927u: goto L_08AA3110;
    case 928u: goto L_08AA3124;
    case 929u: goto L_08AA312C;
    case 930u: goto L_08AA3140;
    case 931u: goto L_08AA3148;
    case 932u: goto L_08AA315C;
    case 933u: goto L_08AA3164;
    case 934u: goto L_08AA3168;
    case 935u: goto L_08AA3178;
    case 936u: goto L_08AA3190;
    case 937u: goto L_08AA319C;
    case 938u: goto L_08AA31A4;
    case 939u: goto L_08AA31AC;
    case 940u: goto L_08AA31C0;
    case 941u: goto L_08AA31C8;
    case 942u: goto L_08AA31DC;
    case 943u: goto L_08AA31E4;
    case 944u: goto L_08AA31F8;
    case 945u: goto L_08AA3200;
    case 946u: goto L_08AA3208;
    case 947u: goto L_08AA3214;
    case 948u: goto L_08AA3218;
    case 949u: goto L_08AA3220;
    case 950u: goto L_08AA3238;
    case 951u: goto L_08AA3240;
    case 952u: goto L_08AA3258;
    case 953u: goto L_08AA325C;
    case 954u: goto L_08AA326C;
    case 955u: goto L_08AA3274;
    case 956u: goto L_08AA327C;
    case 957u: goto L_08AA3284;
    case 958u: goto L_08AA328C;
    case 959u: goto L_08AA3294;
    case 960u: goto L_08AA329C;
    case 961u: goto L_08AA32A4;
    case 962u: goto L_08AA32A8;
    case 963u: goto L_08AA32B4;
    case 964u: goto L_08AA32C4;
    case 965u: goto L_08AA32C8;
    case 966u: goto L_08AA32DC;
    case 967u: goto L_08AA32EC;
    case 968u: goto L_08AA32F4;
    case 969u: goto L_08AA3304;
    case 970u: goto L_08AA3314;
    case 971u: goto L_08AA3318;
    case 972u: goto L_08AA3320;
    case 973u: goto L_08AA3330;
    case 974u: goto L_08AA3340;
    case 975u: goto L_08AA3348;
    case 976u: goto L_08AA3358;
    case 977u: goto L_08AA3360;
    case 978u: goto L_08AA3370;
    case 979u: goto L_08AA3378;
    case 980u: goto L_08AA3388;
    case 981u: goto L_08AA3390;
    case 982u: goto L_08AA33A0;
    case 983u: goto L_08AA33A8;
    case 984u: goto L_08AA33B8;
    case 985u: goto L_08AA33C0;
    case 986u: goto L_08AA33D0;
    case 987u: goto L_08AA33D8;
    case 988u: goto L_08AA33E8;
    case 989u: goto L_08AA33F0;
    case 990u: goto L_08AA3400;
    case 991u: goto L_08AA3408;
    case 992u: goto L_08AA3410;
    case 993u: goto L_08AA3418;
    case 994u: goto L_08AA3420;
    case 995u: goto L_08AA3430;
    case 996u: goto L_08AA3468;
    case 997u: goto L_08AA3470;
    case 998u: goto L_08AA3480;
    case 999u: goto L_08AA349C;
    case 1000u: goto L_08AA34A8;
    case 1001u: goto L_08AA34B0;
    case 1002u: goto L_08AA34B8;
    case 1003u: goto L_08AA34C0;
    case 1004u: goto L_08AA34C8;
    case 1005u: goto L_08AA34D8;
    case 1006u: goto L_08AA34E0;
    case 1007u: goto L_08AA34E8;
    case 1008u: goto L_08AA34F0;
    case 1009u: goto L_08AA34F8;
    case 1010u: goto L_08AA3508;
    case 1011u: goto L_08AA3510;
    case 1012u: goto L_08AA351C;
    case 1013u: goto L_08AA353C;
    case 1014u: goto L_08AA3568;
    case 1015u: goto L_08AA3574;
    case 1016u: goto L_08AA3580;
    case 1017u: goto L_08AA3588;
    case 1018u: goto L_08AA3594;
    case 1019u: goto L_08AA359C;
    case 1020u: goto L_08AA35A4;
    case 1021u: goto L_08AA35AC;
    case 1022u: goto L_08AA35C8;
    case 1023u: goto L_08AA35D4;
    case 1024u: goto L_08AA35E0;
    case 1025u: goto L_08AA35E8;
    case 1026u: goto L_08AA35F0;
    case 1027u: goto L_08AA35F8;
    case 1028u: goto L_08AA3604;
    case 1029u: goto L_08AA3610;
    case 1030u: goto L_08AA3618;
    case 1031u: goto L_08AA3628;
    case 1032u: goto L_08AA3634;
    case 1033u: goto L_08AA363C;
    case 1034u: goto L_08AA3654;
    case 1035u: goto L_08AA365C;
    case 1036u: goto L_08AA3664;
    case 1037u: goto L_08AA3678;
    case 1038u: goto L_08AA3680;
    case 1039u: goto L_08AA3698;
    case 1040u: goto L_08AA36A0;
    case 1041u: goto L_08AA36B8;
    case 1042u: goto L_08AA36C0;
    case 1043u: goto L_08AA36C8;
    case 1044u: goto L_08AA36DC;
    case 1045u: goto L_08AA36E0;
    case 1046u: goto L_08AA36E8;
    case 1047u: goto L_08AA36FC;
    case 1048u: goto L_08AA370C;
    case 1049u: goto L_08AA3714;
    case 1050u: goto L_08AA3728;
    case 1051u: goto L_08AA3730;
    case 1052u: goto L_08AA3770;
    case 1053u: goto L_08AA3780;
    case 1054u: goto L_08AA3788;
    case 1055u: goto L_08AA379C;
    case 1056u: goto L_08AA37A4;
    case 1057u: goto L_08AA37B8;
    case 1058u: goto L_08AA37C4;
    case 1059u: goto L_08AA37CC;
    case 1060u: goto L_08AA37D4;
    case 1061u: goto L_08AA37E0;
    case 1062u: goto L_08AA37EC;
    case 1063u: goto L_08AA37F8;
    case 1064u: goto L_08AA3808;
    case 1065u: goto L_08AA3818;
    case 1066u: goto L_08AA3830;
    case 1067u: goto L_08AA3848;
    case 1068u: goto L_08AA384C;
    case 1069u: goto L_08AA3860;
    case 1070u: goto L_08AA3878;
    case 1071u: goto L_08AA388C;
    case 1072u: goto L_08AA3894;
    case 1073u: goto L_08AA389C;
    case 1074u: goto L_08AA38A8;
    case 1075u: goto L_08AA38B4;
    case 1076u: goto L_08AA38C0;
    case 1077u: goto L_08AA38D0;
    case 1078u: goto L_08AA38E0;
    case 1079u: goto L_08AA38F8;
    case 1080u: goto L_08AA3910;
    case 1081u: goto L_08AA3914;
    case 1082u: goto L_08AA3928;
    case 1083u: goto L_08AA3940;
    case 1084u: goto L_08AA3954;
    case 1085u: goto L_08AA395C;
    case 1086u: goto L_08AA396C;
    case 1087u: goto L_08AA3988;
    case 1088u: goto L_08AA39A0;
    case 1089u: goto L_08AA39B0;
    case 1090u: goto L_08AA39B8;
    case 1091u: goto L_08AA39C0;
    case 1092u: goto L_08AA39CC;
    case 1093u: goto L_08AA39D8;
    case 1094u: goto L_08AA39E0;
    case 1095u: goto L_08AA39F0;
    case 1096u: goto L_08AA3A00;
    case 1097u: goto L_08AA3A18;
    case 1098u: goto L_08AA3A30;
    case 1099u: goto L_08AA3A34;
    case 1100u: goto L_08AA3A48;
    case 1101u: goto L_08AA3A60;
    case 1102u: goto L_08AA3A74;
    case 1103u: goto L_08AA3A7C;
    case 1104u: goto L_08AA3A8C;
    case 1105u: goto L_08AA3AA8;
    case 1106u: goto L_08AA3AC0;
    case 1107u: goto L_08AA3AD0;
    case 1108u: goto L_08AA3AD4;
    case 1109u: goto L_08AA3AE8;
    case 1110u: goto L_08AA3AF8;
    case 1111u: goto L_08AA3B00;
    case 1112u: goto L_08AA3B0C;
    case 1113u: goto L_08AA3B14;
    case 1114u: goto L_08AA3B24;
    case 1115u: goto L_08AA3B30;
    case 1116u: goto L_08AA3B38;
    case 1117u: goto L_08AA3B3C;
    case 1118u: goto L_08AA3B44;
    case 1119u: goto L_08AA3B50;
    case 1120u: goto L_08AA3B58;
    case 1121u: goto L_08AA3B6C;
    case 1122u: goto L_08AA3B74;
    case 1123u: goto L_08AA3B7C;
    case 1124u: goto L_08AA3B88;
    case 1125u: goto L_08AA3B90;
    case 1126u: goto L_08AA3B9C;
    case 1127u: goto L_08AA3BA4;
    case 1128u: goto L_08AA3BAC;
    case 1129u: goto L_08AA3BB8;
    case 1130u: goto L_08AA3BC4;
    case 1131u: goto L_08AA3BD4;
    case 1132u: goto L_08AA3BD8;
    case 1133u: goto L_08AA3BE4;
    case 1134u: goto L_08AA3BF0;
    case 1135u: goto L_08AA3BF8;
    case 1136u: goto L_08AA3C0C;
    case 1137u: goto L_08AA3C10;
    case 1138u: goto L_08AA3C1C;
    case 1139u: goto L_08AA3C28;
    case 1140u: goto L_08AA3C30;
    case 1141u: goto L_08AA3C3C;
    case 1142u: goto L_08AA3C48;
    case 1143u: goto L_08AA3C58;
    case 1144u: goto L_08AA3C5C;
    case 1145u: goto L_08AA3C68;
    case 1146u: goto L_08AA3C74;
    case 1147u: goto L_08AA3C7C;
    case 1148u: goto L_08AA3C90;
    case 1149u: goto L_08AA3C94;
    case 1150u: goto L_08AA3CA0;
    case 1151u: goto L_08AA3CAC;
    case 1152u: goto L_08AA3CB4;
    case 1153u: goto L_08AA3CC0;
    case 1154u: goto L_08AA3CCC;
    case 1155u: goto L_08AA3CDC;
    case 1156u: goto L_08AA3CE0;
    case 1157u: goto L_08AA3CEC;
    case 1158u: goto L_08AA3CF8;
    case 1159u: goto L_08AA3D00;
    case 1160u: goto L_08AA3D14;
    case 1161u: goto L_08AA3D18;
    case 1162u: goto L_08AA3D24;
    case 1163u: goto L_08AA3D2C;
    case 1164u: goto L_08AA3D34;
    case 1165u: goto L_08AA3D40;
    case 1166u: goto L_08AA3D48;
    case 1167u: goto L_08AA3D50;
    case 1168u: goto L_08AA3D68;
    case 1169u: goto L_08AA3D78;
    case 1170u: goto L_08AA3D80;
    case 1171u: goto L_08AA3D94;
    case 1172u: goto L_08AA3D9C;
    case 1173u: goto L_08AA3DB0;
    case 1174u: goto L_08AA3DC4;
    case 1175u: goto L_08AA3DDC;
    case 1176u: goto L_08AA3DE4;
    case 1177u: goto L_08AA3DEC;
    case 1178u: goto L_08AA3E00;
    case 1179u: goto L_08AA3E14;
    case 1180u: goto L_08AA3E1C;
    case 1181u: goto L_08AA3E24;
    case 1182u: goto L_08AA3E38;
    case 1183u: goto L_08AA3E40;
    case 1184u: goto L_08AA3E54;
    case 1185u: goto L_08AA3E5C;
    case 1186u: goto L_08AA3E64;
    case 1187u: goto L_08AA3E70;
    case 1188u: goto L_08AA3E78;
    case 1189u: goto L_08AA3E80;
    case 1190u: goto L_08AA3E94;
    case 1191u: goto L_08AA3E9C;
    case 1192u: goto L_08AA3EB0;
    case 1193u: goto L_08AA3EB8;
    case 1194u: goto L_08AA3ED0;
    case 1195u: goto L_08AA3EE8;
    case 1196u: goto L_08AA3EF0;
    case 1197u: goto L_08AA3EF8;
    case 1198u: goto L_08AA3F00;
    case 1199u: goto L_08AA3F0C;
    case 1200u: goto L_08AA3F14;
    case 1201u: goto L_08AA3F1C;
    case 1202u: goto L_08AA3F30;
    case 1203u: goto L_08AA3F4C;
    case 1204u: goto L_08AA3F54;
    case 1205u: goto L_08AA3F68;
    case 1206u: goto L_08AA3F70;
    case 1207u: goto L_08AA3F84;
    case 1208u: goto L_08AA3F8C;
    case 1209u: goto L_08AA3F94;
    case 1210u: goto L_08AA3F9C;
    case 1211u: goto L_08AA3FA8;
    case 1212u: goto L_08AA3FB0;
    case 1213u: goto L_08AA3FB8;
    case 1214u: goto L_08AA3FCC;
    case 1215u: goto L_08AA3FD4;
    case 1216u: goto L_08AA3FE8;
    case 1217u: goto L_08AA3FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AA0000:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AA006C;
    }
    goto L_08AA0008;
L_08AA0008:
    ctx.set_gpr(31, 0x08AA0010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0010u) goto L_08AA0010;
    return;
L_08AA0010:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(99));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AA0028u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0028u) goto L_08AA0028;
    return;
L_08AA0028:
    ctx.set_gpr(31, 0x08AA0030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0030u) goto L_08AA0030;
    return;
L_08AA0030:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AA0048u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0048u) goto L_08AA0048;
    return;
L_08AA0048:
    ctx.set_gpr(31, 0x08AA0050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0050u) goto L_08AA0050;
    return;
L_08AA0050:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08AA0064u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0064u) goto L_08AA0064;
    return;
L_08AA0064:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA01C8;
      }
      goto L_08AA006C;
    }
L_08AA006C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA0120;
      }
      goto L_08AA0074;
    }
L_08AA0074:
    ctx.set_gpr(31, 0x08AA007Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA007Cu) goto L_08AA007C;
    return;
L_08AA007C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AA0094u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0094u) goto L_08AA0094;
    return;
L_08AA0094:
    ctx.set_gpr(31, 0x08AA009Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA009Cu) goto L_08AA009C;
    return;
L_08AA009C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17324u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17242u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA00C0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(99));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA00C0u) goto L_08AA00C0;
    return;
L_08AA00C0:
    ctx.set_gpr(31, 0x08AA00C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA00C8u) goto L_08AA00C8;
    return;
L_08AA00C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17364u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17242u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA00ECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA00ECu) goto L_08AA00EC;
    return;
L_08AA00EC:
    ctx.set_gpr(31, 0x08AA00F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA00F4u) goto L_08AA00F4;
    return;
L_08AA00F4:
    ctx.set_gpr(3, 17364u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17242u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA0118u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA0118u) goto L_08AA0118;
    return;
L_08AA0118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA01C4;
      }
      goto L_08AA0120;
    }
L_08AA0120:
    ctx.set_gpr(31, 0x08AA0128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0128u) goto L_08AA0128;
    return;
L_08AA0128:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AA0140u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0140u) goto L_08AA0140;
    return;
L_08AA0140:
    ctx.set_gpr(31, 0x08AA0148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0148u) goto L_08AA0148;
    return;
L_08AA0148:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17364u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17242u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA016Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(99));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA016Cu) goto L_08AA016C;
    return;
L_08AA016C:
    ctx.set_gpr(31, 0x08AA0174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0174u) goto L_08AA0174;
    return;
L_08AA0174:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17324u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17242u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA0198u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA0198u) goto L_08AA0198;
    return;
L_08AA0198:
    ctx.set_gpr(31, 0x08AA01A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA01A0u) goto L_08AA01A0;
    return;
L_08AA01A0:
    ctx.set_gpr(3, 17324u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17242u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA01C4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA01C4u) goto L_08AA01C4;
    return;
L_08AA01C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AA01C8;
L_08AA01C8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA01D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AA01F4;
L_08AA01F4:
    ctx.set_gpr(31, 0x08AA01FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA01FCu) goto L_08AA01FC;
    return;
L_08AA01FC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17064u << 16u);
    ctx.set_gpr(3, 17080u << 16u);
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(8, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(2, 17096u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(9, 0u + 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AA023Cu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AA023Cu) goto L_08AA023C;
    return;
L_08AA023C:
    ctx.set_gpr(31, 0x08AA0244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0244u) goto L_08AA0244;
    return;
L_08AA0244:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16816u << 16u);
    ctx.set_gpr(3, 17233u << 16u);
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(69));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(2, 17076u << 16u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AA0284u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AA0284u) goto L_08AA0284;
    return;
L_08AA0284:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA01F4;
      }
      goto L_08AA0298;
    }
L_08AA0298:
    ctx.set_gpr(31, 0x08AA02A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA02A0u) goto L_08AA02A0;
    return;
L_08AA02A0:
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
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AA02D4u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AA02D4u) goto L_08AA02D4;
    return;
L_08AA02D4:
    ctx.set_gpr(31, 0x08AA02DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA02DCu) goto L_08AA02DC;
    return;
L_08AA02DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08AA02F0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 708u, 0x0885EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA02F0u) goto L_08AA02F0;
    return;
L_08AA02F0:
    ctx.set_gpr(31, 0x08AA02F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA02F8u) goto L_08AA02F8;
    return;
L_08AA02F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(89));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08AA032Cu);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AA032Cu) goto L_08AA032C;
    return;
L_08AA032C:
    ctx.set_gpr(31, 0x08AA0334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0334u) goto L_08AA0334;
    return;
L_08AA0334:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(89));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AA0354u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0354u) goto L_08AA0354;
    return;
L_08AA0354:
    ctx.set_gpr(31, 0x08AA035Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA035Cu) goto L_08AA035C;
    return;
L_08AA035C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17382u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(90));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AA0390u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AA0390u) goto L_08AA0390;
    return;
L_08AA0390:
    ctx.set_gpr(31, 0x08AA0398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0398u) goto L_08AA0398;
    return;
L_08AA0398:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(90));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AA03B8u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA03B8u) goto L_08AA03B8;
    return;
L_08AA03B8:
    ctx.set_gpr(31, 0x08AA03C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA03C0u) goto L_08AA03C0;
    return;
L_08AA03C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17064u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17080u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08AA03F4u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AA03F4u) goto L_08AA03F4;
    return;
L_08AA03F4:
    ctx.set_gpr(31, 0x08AA03FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA03FCu) goto L_08AA03FC;
    return;
L_08AA03FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AA0430u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AA0430u) goto L_08AA0430;
    return;
L_08AA0430:
    ctx.set_gpr(31, 0x08AA0438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0438u) goto L_08AA0438;
    return;
L_08AA0438:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16792u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AA046Cu);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AA046Cu) goto L_08AA046C;
    return;
L_08AA046C:
    ctx.set_gpr(31, 0x08AA0474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0474u) goto L_08AA0474;
    return;
L_08AA0474:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08AA04A0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 402u, 0x08A7DA20u>(ctx, &aot_mem) && ctx.pc == 0x08AA04A0u) goto L_08AA04A0;
    return;
L_08AA04A0:
    ctx.set_gpr(31, 0x08AA04A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA04A8u) goto L_08AA04A8;
    return;
L_08AA04A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08AA04D4u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 402u, 0x08A7DA20u>(ctx, &aot_mem) && ctx.pc == 0x08AA04D4u) goto L_08AA04D4;
    return;
L_08AA04D4:
    ctx.set_gpr(31, 0x08AA04DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA04DCu) goto L_08AA04DC;
    return;
L_08AA04DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08AA0508u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 402u, 0x08A7DA20u>(ctx, &aot_mem) && ctx.pc == 0x08AA0508u) goto L_08AA0508;
    return;
L_08AA0508:
    ctx.set_gpr(31, 0x08AA0510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0510u) goto L_08AA0510;
    return;
L_08AA0510:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08AA053Cu);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 402u, 0x08A7DA20u>(ctx, &aot_mem) && ctx.pc == 0x08AA053Cu) goto L_08AA053C;
    return;
L_08AA053C:
    ctx.set_gpr(31, 0x08AA0544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0544u) goto L_08AA0544;
    return;
L_08AA0544:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08AA0570u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 402u, 0x08A7DA20u>(ctx, &aot_mem) && ctx.pc == 0x08AA0570u) goto L_08AA0570;
    return;
L_08AA0570:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AA0574;
L_08AA0574:
    ctx.set_gpr(31, 0x08AA057Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA057Cu) goto L_08AA057C;
    return;
L_08AA057C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA0590u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0590u) goto L_08AA0590;
    return;
L_08AA0590:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0574;
      }
      goto L_08AA05A0;
    }
L_08AA05A0:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AA05A4;
L_08AA05A4:
    ctx.set_gpr(31, 0x08AA05ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA05ACu) goto L_08AA05AC;
    return;
L_08AA05AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(69));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA05C0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA05C0u) goto L_08AA05C0;
    return;
L_08AA05C0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA05A4;
      }
      goto L_08AA05D0;
    }
L_08AA05D0:
    ctx.set_gpr(31, 0x08AA05D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA05D8u) goto L_08AA05D8;
    return;
L_08AA05D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08AA05ECu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA05ECu) goto L_08AA05EC;
    return;
L_08AA05EC:
    ctx.set_gpr(31, 0x08AA05F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA05F4u) goto L_08AA05F4;
    return;
L_08AA05F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AA0608u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0608u) goto L_08AA0608;
    return;
L_08AA0608:
    ctx.set_gpr(31, 0x08AA0610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0610u) goto L_08AA0610;
    return;
L_08AA0610:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08AA0624u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0624u) goto L_08AA0624;
    return;
L_08AA0624:
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
L_08AA063C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AA0678u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA0678u) goto L_08AA0678;
    return;
L_08AA0678:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15280), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15284), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15352)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(16, 0u + 0u);
        goto L_08AA0B58;
    }
    goto L_08AA0690;
L_08AA0690:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA0A78;
      }
      goto L_08AA069C;
    }
L_08AA069C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0944;
      }
      goto L_08AA06A4;
    }
L_08AA06A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AA06B8;
    }
    goto L_08AA06B0;
L_08AA06B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0C5C;
      }
      goto L_08AA06B8;
    }
L_08AA06B8:
    ctx.set_gpr(31, 0x08AA06C0u);
    // nop
    goto L_08AA01D4;
L_08AA06C0:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, 50298u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1000));
    goto L_08AA06D0;
L_08AA06D0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15684), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15716), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(15556), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15688), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15720), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(15560), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15692), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15724), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(15564), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15696), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15728), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(15568), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15700), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15732), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(15572), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15704), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15736), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(15576), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15708), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15740), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(15580), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15712), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15744), ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(15584), ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AA06D0;
      }
      goto L_08AA0740;
    }
L_08AA0740:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AA074Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 920u, 0x08AA74B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA074Cu) goto L_08AA074C;
    return;
L_08AA074C:
    ctx.set_gpr(31, 0x08AA0754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0754u) goto L_08AA0754;
    return;
L_08AA0754:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(31, 0x08AA0768u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0768u) goto L_08AA0768;
    return;
L_08AA0768:
    ctx.set_gpr(31, 0x08AA0770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0770u) goto L_08AA0770;
    return;
L_08AA0770:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(39));
    ctx.set_gpr(31, 0x08AA0784u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0784u) goto L_08AA0784;
    return;
L_08AA0784:
    ctx.set_gpr(31, 0x08AA078Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA078Cu) goto L_08AA078C;
    return;
L_08AA078C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08AA07A0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA07A0u) goto L_08AA07A0;
    return;
L_08AA07A0:
    ctx.set_gpr(31, 0x08AA07A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA07A8u) goto L_08AA07A8;
    return;
L_08AA07A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AA07BCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA07BCu) goto L_08AA07BC;
    return;
L_08AA07BC:
    ctx.set_gpr(31, 0x08AA07C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA07C4u) goto L_08AA07C4;
    return;
L_08AA07C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08AA07D8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA07D8u) goto L_08AA07D8;
    return;
L_08AA07D8:
    ctx.set_gpr(31, 0x08AA07E0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA07E0u) goto L_08AA07E0;
    return;
L_08AA07E0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15364), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA07F0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA07F0u) goto L_08AA07F0;
    return;
L_08AA07F0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15384), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA07FCu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA2978;
L_08AA07FC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
        goto L_08AA0810;
    }
    goto L_08AA0808;
L_08AA0808:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15368), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AA081C;
      }
      goto L_08AA0810;
    }
L_08AA0810:
    ctx.set_gpr(31, 0x08AA0818u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 449u, 0x08A85954u>(ctx, &aot_mem) && ctx.pc == 0x08AA0818u) goto L_08AA0818;
    return;
L_08AA0818:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    goto L_08AA081C;
L_08AA081C:
    ctx.set_gpr(31, 0x08AA0824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0824u) goto L_08AA0824;
    return;
L_08AA0824:
    ctx.set_gpr(31, 0x08AA082Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA082Cu) goto L_08AA082C;
    return;
L_08AA082C:
    ctx.set_gpr(31, 0x08AA0834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0834u) goto L_08AA0834;
    return;
L_08AA0834:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA0840u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 237u, 0x08A9D8F4u>(ctx, &aot_mem) && ctx.pc == 0x08AA0840u) goto L_08AA0840;
    return;
L_08AA0840:
    ctx.set_gpr(31, 0x08AA0848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0848u) goto L_08AA0848;
    return;
L_08AA0848:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08AA0858u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32560)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AA0858u) goto L_08AA0858;
    return;
L_08AA0858:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AA0894;
    }
    goto L_08AA0868;
L_08AA0868:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA0890;
      }
      goto L_08AA0874;
    }
L_08AA0874:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
      if (branch_taken) {
          goto L_08AA0884;
      }
      goto L_08AA087C;
    }
L_08AA087C:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08AA0884;
L_08AA0884:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15400), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA08B4;
      }
      goto L_08AA0890;
    }
L_08AA0890:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AA0894;
L_08AA0894:
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
        goto L_08AA08A4;
    }
    goto L_08AA089C;
L_08AA089C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15400), 0u);
      if (branch_taken) {
          goto L_08AA08B4;
      }
      goto L_08AA08A4;
    }
L_08AA08A4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA08B4;
      }
      goto L_08AA08AC;
    }
L_08AA08AC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15368), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15400), 0u);
    goto L_08AA08B4;
L_08AA08B4:
    ctx.set_gpr(31, 0x08AA08BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AA08BCu) goto L_08AA08BC;
    return;
L_08AA08BC:
    ctx.set_gpr(31, 0x08AA08C4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA08C4u) goto L_08AA08C4;
    return;
L_08AA08C4:
    ctx.set_gpr(31, 0x08AA08CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AA08CCu) goto L_08AA08CC;
    return;
L_08AA08CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA08D8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 236u, 0x08A9D8ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA08D8u) goto L_08AA08D8;
    return;
L_08AA08D8:
    ctx.set_gpr(31, 0x08AA08E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AA08E0u) goto L_08AA08E0;
    return;
L_08AA08E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15400)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32564));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AA0900u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AA0900u) goto L_08AA0900;
    return;
L_08AA0900:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15384)));
    ctx.set_gpr(31, 0x08AA090Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 580u, 0x08AA629Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA090Cu) goto L_08AA090C;
    return;
L_08AA090C:
    ctx.set_gpr(31, 0x08AA0914u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 598u, 0x08AA63B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0914u) goto L_08AA0914;
    return;
L_08AA0914:
    ctx.set_gpr(31, 0x08AA091Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 28u, 0x08864230u>(ctx, &aot_mem) && ctx.pc == 0x08AA091Cu) goto L_08AA091C;
    return;
L_08AA091C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AA092C;
    }
    goto L_08AA0924;
L_08AA0924:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15751), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AA0930;
      }
      goto L_08AA092C;
    }
L_08AA092C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15751), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AA0930;
L_08AA0930:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15376), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15352)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15352), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA0C5C;
      }
      goto L_08AA0944;
    }
L_08AA0944:
    ctx.set_gpr(31, 0x08AA094Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA094Cu) goto L_08AA094C;
    return;
L_08AA094C:
    ctx.set_gpr(31, 0x08AA0954u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA0954u) goto L_08AA0954;
    return;
L_08AA0954:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(167));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(218));
    ctx.set_gpr(31, 0x08AA0974u);
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08AA0974u) goto L_08AA0974;
    return;
L_08AA0974:
    ctx.set_gpr(31, 0x08AA097Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA097Cu) goto L_08AA097C;
    return;
L_08AA097C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08AA0990u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 708u, 0x0885EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0990u) goto L_08AA0990;
    return;
L_08AA0990:
    ctx.set_gpr(31, 0x08AA0998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0998u) goto L_08AA0998;
    return;
L_08AA0998:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08AA09ACu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA09ACu) goto L_08AA09AC;
    return;
L_08AA09AC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(31, 0x08AA09B8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA09B8u) goto L_08AA09B8;
    return;
L_08AA09B8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15384), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA09C4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA0C98;
L_08AA09C4:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA09D8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA0D68;
L_08AA09D8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15384)));
        goto L_08AA0A50;
    }
    goto L_08AA09E0;
L_08AA09E0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(15388)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15352)));
        goto L_08AA0A44;
    }
    goto L_08AA09EC;
L_08AA09EC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15360), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15304), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15352)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AA0A08u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15352), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0A08u) goto L_08AA0A08;
    return;
L_08AA0A08:
    ctx.set_gpr(31, 0x08AA0A10u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA0A10u) goto L_08AA0A10;
    return;
L_08AA0A10:
    ctx.set_gpr(31, 0x08AA0A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0A18u) goto L_08AA0A18;
    return;
L_08AA0A18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA0A24u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 237u, 0x08A9D8F4u>(ctx, &aot_mem) && ctx.pc == 0x08AA0A24u) goto L_08AA0A24;
    return;
L_08AA0A24:
    ctx.set_gpr(31, 0x08AA0A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0A2Cu) goto L_08AA0A2C;
    return;
L_08AA0A2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08AA0A3Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32608)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AA0A3Cu) goto L_08AA0A3C;
    return;
L_08AA0A3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0A4C;
      }
      goto L_08AA0A44;
    }
L_08AA0A44:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15352), ctx.gpr[2]);
    goto L_08AA0A4C;
L_08AA0A4C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15384)));
    goto L_08AA0A50;
L_08AA0A50:
    ctx.set_gpr(31, 0x08AA0A58u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 580u, 0x08AA629Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0A58u) goto L_08AA0A58;
    return;
L_08AA0A58:
    ctx.set_gpr(31, 0x08AA0A60u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 598u, 0x08AA63B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0A60u) goto L_08AA0A60;
    return;
L_08AA0A60:
    ctx.set_gpr(31, 0x08AA0A68u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 615u, 0x08AA64ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA0A68u) goto L_08AA0A68;
    return;
L_08AA0A68:
    ctx.set_gpr(31, 0x08AA0A70u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 633u, 0x08AA65B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA0A70u) goto L_08AA0A70;
    return;
L_08AA0A70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0C5C;
      }
      goto L_08AA0A78;
    }
L_08AA0A78:
    ctx.set_gpr(31, 0x08AA0A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA0A80u) goto L_08AA0A80;
    return;
L_08AA0A80:
    ctx.set_gpr(31, 0x08AA0A88u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA0A88u) goto L_08AA0A88;
    return;
L_08AA0A88:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(167));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(218));
    ctx.set_gpr(31, 0x08AA0AA8u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08AA0AA8u) goto L_08AA0AA8;
    return;
L_08AA0AA8:
    ctx.set_gpr(31, 0x08AA0AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0AB0u) goto L_08AA0AB0;
    return;
L_08AA0AB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08AA0AC4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0AC4u) goto L_08AA0AC4;
    return;
L_08AA0AC4:
    ctx.set_gpr(31, 0x08AA0ACCu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 615u, 0x08AA64ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA0ACCu) goto L_08AA0ACC;
    return;
L_08AA0ACC:
    ctx.set_gpr(31, 0x08AA0AD4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 633u, 0x08AA65B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA0AD4u) goto L_08AA0AD4;
    return;
L_08AA0AD4:
    ctx.set_gpr(19, 0u + 0u);
    goto L_08AA0AD8;
L_08AA0AD8:
    ctx.set_gpr(31, 0x08AA0AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0AE0u) goto L_08AA0AE0;
    return;
L_08AA0AE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA0AF4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0AF4u) goto L_08AA0AF4;
    return;
L_08AA0AF4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0AD8;
      }
      goto L_08AA0B04;
    }
L_08AA0B04:
    ctx.set_gpr(19, 0u + 0u);
    goto L_08AA0B08;
L_08AA0B08:
    ctx.set_gpr(31, 0x08AA0B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0B10u) goto L_08AA0B10;
    return;
L_08AA0B10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(98));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA0B24u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0B24u) goto L_08AA0B24;
    return;
L_08AA0B24:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0B08;
      }
      goto L_08AA0B34;
    }
L_08AA0B34:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA0B48u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA0E5C;
L_08AA0B48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0C5C;
      }
      goto L_08AA0B50;
    }
L_08AA0B50:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15352), 0u);
      if (branch_taken) {
          goto L_08AA0C5C;
      }
      goto L_08AA0B58;
    }
L_08AA0B58:
    ctx.set_gpr(31, 0x08AA0B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0B60u) goto L_08AA0B60;
    return;
L_08AA0B60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(98));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA0B74u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0B74u) goto L_08AA0B74;
    return;
L_08AA0B74:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0B58;
      }
      goto L_08AA0B84;
    }
L_08AA0B84:
    ctx.set_gpr(31, 0x08AA0B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0B8Cu) goto L_08AA0B8C;
    return;
L_08AA0B8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(31, 0x08AA0BA0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0BA0u) goto L_08AA0BA0;
    return;
L_08AA0BA0:
    ctx.set_gpr(31, 0x08AA0BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0BA8u) goto L_08AA0BA8;
    return;
L_08AA0BA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(39));
    ctx.set_gpr(31, 0x08AA0BBCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0BBCu) goto L_08AA0BBC;
    return;
L_08AA0BBC:
    ctx.set_gpr(31, 0x08AA0BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0BC4u) goto L_08AA0BC4;
    return;
L_08AA0BC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08AA0BD8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0BD8u) goto L_08AA0BD8;
    return;
L_08AA0BD8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15352), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15356), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15360), 0u);
    ctx.set_gpr(31, 0x08AA0BF0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15388), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA0BF0u) goto L_08AA0BF0;
    return;
L_08AA0BF0:
    ctx.set_gpr(31, 0x08AA0BF8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x08AA0BF8u) goto L_08AA0BF8;
    return;
L_08AA0BF8:
    ctx.set_gpr(31, 0x08AA0C00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0C00u) goto L_08AA0C00;
    return;
L_08AA0C00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(31, 0x08AA0C14u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0C14u) goto L_08AA0C14;
    return;
L_08AA0C14:
    ctx.set_gpr(31, 0x08AA0C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0C1Cu) goto L_08AA0C1C;
    return;
L_08AA0C1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(39));
    ctx.set_gpr(31, 0x08AA0C30u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0C30u) goto L_08AA0C30;
    return;
L_08AA0C30:
    ctx.set_gpr(31, 0x08AA0C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0C38u) goto L_08AA0C38;
    return;
L_08AA0C38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08AA0C4Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0C4Cu) goto L_08AA0C4C;
    return;
L_08AA0C4C:
    ctx.set_gpr(31, 0x08AA0C54u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA32DC;
L_08AA0C54:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA0C78;
      }
      goto L_08AA0C5C;
    }
L_08AA0C5C:
    ctx.set_gpr(31, 0x08AA0C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA0C64u) goto L_08AA0C64;
    return;
L_08AA0C64:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15280)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15284)));
    ctx.set_gpr(31, 0x08AA0C74u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 271u, 0x0885936Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0C74u) goto L_08AA0C74;
    return;
L_08AA0C74:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AA0C78;
L_08AA0C78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
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
L_08AA0C98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AA0CA8;
L_08AA0CA8:
    ctx.set_gpr(31, 0x08AA0CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0CB0u) goto L_08AA0CB0;
    return;
L_08AA0CB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA0CC4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0CC4u) goto L_08AA0CC4;
    return;
L_08AA0CC4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0CA8;
      }
      goto L_08AA0CD4;
    }
L_08AA0CD4:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AA0CD8;
L_08AA0CD8:
    ctx.set_gpr(31, 0x08AA0CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0CE0u) goto L_08AA0CE0;
    return;
L_08AA0CE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(69));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA0CF4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0CF4u) goto L_08AA0CF4;
    return;
L_08AA0CF4:
    ctx.set_gpr(31, 0x08AA0CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0CFCu) goto L_08AA0CFC;
    return;
L_08AA0CFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA0D10u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0D10u) goto L_08AA0D10;
    return;
L_08AA0D10:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0CD8;
      }
      goto L_08AA0D20;
    }
L_08AA0D20:
    ctx.set_gpr(31, 0x08AA0D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0D28u) goto L_08AA0D28;
    return;
L_08AA0D28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08AA0D3Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0D3Cu) goto L_08AA0D3C;
    return;
L_08AA0D3C:
    ctx.set_gpr(31, 0x08AA0D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0D44u) goto L_08AA0D44;
    return;
L_08AA0D44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08AA0D58u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0D58u) goto L_08AA0D58;
    return;
L_08AA0D58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA0D68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08AA0D94u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA0D94u) goto L_08AA0D94;
    return;
L_08AA0D94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(31, 0x08AA0DA8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1017u, 0x08A7F7C8u>(ctx, &aot_mem) && ctx.pc == 0x08AA0DA8u) goto L_08AA0DA8;
    return;
L_08AA0DA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15356)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
        goto L_08AA0E18;
    }
    goto L_08AA0DB8;
L_08AA0DB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AA0E00;
    }
    goto L_08AA0DC4;
L_08AA0DC4:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AA0DD4;
    }
    goto L_08AA0DCC;
L_08AA0DCC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AA0E40;
      }
      goto L_08AA0DD4;
    }
L_08AA0DD4:
    ctx.set_gpr(31, 0x08AA0DDCu);
    // nop
    goto L_08AA0EAC;
L_08AA0DDC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(15760)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0E3C;
      }
      goto L_08AA0DE8;
    }
L_08AA0DE8:
    ctx.set_gpr(31, 0x08AA0DF0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA3178;
L_08AA0DF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0E3C;
      }
      goto L_08AA0DF8;
    }
L_08AA0DF8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA0E40;
      }
      goto L_08AA0E00;
    }
L_08AA0E00:
    ctx.set_gpr(31, 0x08AA0E08u);
    // nop
    goto L_08AA2F30;
L_08AA0E08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0E3C;
      }
      goto L_08AA0E10;
    }
L_08AA0E10:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA0E40;
      }
      goto L_08AA0E18;
    }
L_08AA0E18:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AA0E28u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA0E64;
L_08AA0E28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0E3C;
      }
      goto L_08AA0E30;
    }
L_08AA0E30:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15388), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AA0E40;
      }
      goto L_08AA0E3C;
    }
L_08AA0E3C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AA0E40;
L_08AA0E40:
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
L_08AA0E5C:
    // nop
    goto L_08AA3430;
L_08AA0E64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15288), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15756), 0u);
    ctx.set_gpr(31, 0x08AA0E80u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 920u, 0x08AA74B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0E80u) goto L_08AA0E80;
    return;
L_08AA0E80:
    ctx.set_gpr(31, 0x08AA0E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0E88u) goto L_08AA0E88;
    return;
L_08AA0E88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AA0E9Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0E9Cu) goto L_08AA0E9C;
    return;
L_08AA0E9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA0EAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15376)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AA1CD4;
      }
      goto L_08AA0ED0;
    }
L_08AA0ED0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AA1C84;
      }
      goto L_08AA0EDC;
    }
L_08AA0EDC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(5, 0u + 0u);
        goto L_08AA1260;
    }
    goto L_08AA0EE8;
L_08AA0EE8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0EF8;
      }
      goto L_08AA0EF0;
    }
L_08AA0EF0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AA1D24;
      }
      goto L_08AA0EF8;
    }
L_08AA0EF8:
    ctx.set_gpr(31, 0x08AA0F00u);
    // nop
    goto L_08AA2978;
L_08AA0F00:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
        goto L_08AA0FAC;
    }
    goto L_08AA0F0C;
L_08AA0F0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15384)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AA0FA8;
      }
      goto L_08AA0F18;
    }
L_08AA0F18:
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_08AA0F1C;
L_08AA0F1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA0F28u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA0F28u) goto L_08AA0F28;
    return;
L_08AA0F28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08AA0F40u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA0F40u) goto L_08AA0F40;
    return;
L_08AA0F40:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1000));
        goto L_08AA0F84;
    }
    goto L_08AA0F48;
L_08AA0F48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15556), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15588), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15620), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15652), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA0F94;
      }
      goto L_08AA0F84;
    }
L_08AA0F84:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15556), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15588), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15620), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15652), ctx.gpr[2]);
    goto L_08AA0F94;
L_08AA0F94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15384)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA0F1C;
      }
      goto L_08AA0FA8;
    }
L_08AA0FA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    goto L_08AA0FAC;
L_08AA0FAC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15372), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15400)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15404), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA0FC8u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15756), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 920u, 0x08AA74B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0FC8u) goto L_08AA0FC8;
    return;
L_08AA0FC8:
    ctx.set_gpr(31, 0x08AA0FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0FD0u) goto L_08AA0FD0;
    return;
L_08AA0FD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AA0FE4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0FE4u) goto L_08AA0FE4;
    return;
L_08AA0FE4:
    ctx.set_gpr(31, 0x08AA0FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0FECu) goto L_08AA0FEC;
    return;
L_08AA0FEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08AA1000u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1000u) goto L_08AA1000;
    return;
L_08AA1000:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(15389)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(15391)));
        goto L_08AA10AC;
    }
    goto L_08AA100C;
L_08AA100C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA1064;
      }
      goto L_08AA101C;
    }
L_08AA101C:
    ctx.set_gpr(31, 0x08AA1024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA1024u) goto L_08AA1024;
    return;
L_08AA1024:
    ctx.set_gpr(31, 0x08AA102Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA102Cu) goto L_08AA102C;
    return;
L_08AA102C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(27));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08AA105Cu);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(19));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AA105Cu) goto L_08AA105C;
    return;
L_08AA105C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA10A4;
      }
      goto L_08AA1064;
    }
L_08AA1064:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA10A0;
      }
      goto L_08AA106C;
    }
L_08AA106C:
    ctx.set_gpr(31, 0x08AA1074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA1074u) goto L_08AA1074;
    return;
L_08AA1074:
    ctx.set_gpr(31, 0x08AA107Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA107Cu) goto L_08AA107C;
    return;
L_08AA107C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08AA10A0u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AA10A0u) goto L_08AA10A0;
    return;
L_08AA10A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AA10A4;
L_08AA10A4:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(15391)));
    goto L_08AA10AC;
L_08AA10AC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AA112C;
    }
    goto L_08AA10B4;
L_08AA10B4:
    ctx.set_gpr(31, 0x08AA10BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA10BCu) goto L_08AA10BC;
    return;
L_08AA10BC:
    ctx.set_gpr(31, 0x08AA10C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA10C4u) goto L_08AA10C4;
    return;
L_08AA10C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA10D0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 237u, 0x08A9D8F4u>(ctx, &aot_mem) && ctx.pc == 0x08AA10D0u) goto L_08AA10D0;
    return;
L_08AA10D0:
    ctx.set_gpr(31, 0x08AA10D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA10D8u) goto L_08AA10D8;
    return;
L_08AA10D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08AA10E8u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32560)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AA10E8u) goto L_08AA10E8;
    return;
L_08AA10E8:
    ctx.set_gpr(31, 0x08AA10F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AA10F0u) goto L_08AA10F0;
    return;
L_08AA10F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA10FCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 236u, 0x08A9D8ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA10FCu) goto L_08AA10FC;
    return;
L_08AA10FC:
    ctx.set_gpr(31, 0x08AA1104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AA1104u) goto L_08AA1104;
    return;
L_08AA1104:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15400)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32564));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AA1124u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AA1124u) goto L_08AA1124;
    return;
L_08AA1124:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15391), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA112C;
L_08AA112C:
    ctx.set_gpr(31, 0x08AA1134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 633u, 0x08AA65B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA1134u) goto L_08AA1134;
    return;
L_08AA1134:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA1168;
      }
      goto L_08AA1144;
    }
L_08AA1144:
    ctx.set_gpr(31, 0x08AA114Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA114Cu) goto L_08AA114C;
    return;
L_08AA114C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(89));
    ctx.set_gpr(31, 0x08AA1160u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1160u) goto L_08AA1160;
    return;
L_08AA1160:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
      if (branch_taken) {
          goto L_08AA1194;
      }
      goto L_08AA1168;
    }
L_08AA1168:
    ctx.set_gpr(31, 0x08AA1170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1170u) goto L_08AA1170;
    return;
L_08AA1170:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(89));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AA1190u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1190u) goto L_08AA1190;
    return;
L_08AA1190:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    goto L_08AA1194;
L_08AA1194:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(199));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA11C4;
      }
      goto L_08AA11A0;
    }
L_08AA11A0:
    ctx.set_gpr(31, 0x08AA11A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA11A8u) goto L_08AA11A8;
    return;
L_08AA11A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(89));
    ctx.set_gpr(31, 0x08AA11BCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA11BCu) goto L_08AA11BC;
    return;
L_08AA11BC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
      if (branch_taken) {
          goto L_08AA11F0;
      }
      goto L_08AA11C4;
    }
L_08AA11C4:
    ctx.set_gpr(31, 0x08AA11CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA11CCu) goto L_08AA11CC;
    return;
L_08AA11CC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(90));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AA11ECu);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA11ECu) goto L_08AA11EC;
    return;
L_08AA11EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    goto L_08AA11F0;
L_08AA11F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(6, ctx.gpr[3] & 3u);
      if (branch_taken) {
          goto L_08AA1204;
      }
      goto L_08AA11F8;
    }
L_08AA11F8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1204;
      }
      goto L_08AA1200;
    }
L_08AA1200:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    goto L_08AA1204;
L_08AA1204:
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
        goto L_08AA1218;
    }
    goto L_08AA120C;
L_08AA120C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), 0u);
      if (branch_taken) {
          goto L_08AA1250;
      }
      goto L_08AA1218;
    }
L_08AA1218:
    if (ctx.gpr[6] != ctx.gpr[5]) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
        goto L_08AA122C;
    }
    goto L_08AA1220;
L_08AA1220:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), 0u);
      if (branch_taken) {
          goto L_08AA1250;
      }
      goto L_08AA122C;
    }
L_08AA122C:
    if (ctx.gpr[6] != ctx.gpr[4]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
        goto L_08AA1240;
    }
    goto L_08AA1234;
L_08AA1234:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA1250;
      }
      goto L_08AA1240;
    }
L_08AA1240:
    if (ctx.gpr[6] != ctx.gpr[3]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15376)));
        goto L_08AA1254;
    }
    goto L_08AA1248;
L_08AA1248:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), ctx.gpr[4]);
    goto L_08AA1250;
L_08AA1250:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15376)));
    goto L_08AA1254;
L_08AA1254:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15376), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA1260;
    }
L_08AA1260:
    ctx.set_gpr(31, 0x08AA1268u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15756), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 920u, 0x08AA74B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1268u) goto L_08AA1268;
    return;
L_08AA1268:
    ctx.set_gpr(31, 0x08AA1270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1270u) goto L_08AA1270;
    return;
L_08AA1270:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AA1284u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1284u) goto L_08AA1284;
    return;
L_08AA1284:
    ctx.set_gpr(31, 0x08AA128Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA128Cu) goto L_08AA128C;
    return;
L_08AA128C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08AA12A0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA12A0u) goto L_08AA12A0;
    return;
L_08AA12A0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(15389)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(15390)));
        goto L_08AA134C;
    }
    goto L_08AA12AC;
L_08AA12AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA1304;
      }
      goto L_08AA12BC;
    }
L_08AA12BC:
    ctx.set_gpr(31, 0x08AA12C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA12C4u) goto L_08AA12C4;
    return;
L_08AA12C4:
    ctx.set_gpr(31, 0x08AA12CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA12CCu) goto L_08AA12CC;
    return;
L_08AA12CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(27));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08AA12FCu);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(19));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AA12FCu) goto L_08AA12FC;
    return;
L_08AA12FC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA1344;
      }
      goto L_08AA1304;
    }
L_08AA1304:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA1340;
      }
      goto L_08AA130C;
    }
L_08AA130C:
    ctx.set_gpr(31, 0x08AA1314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA1314u) goto L_08AA1314;
    return;
L_08AA1314:
    ctx.set_gpr(31, 0x08AA131Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA131Cu) goto L_08AA131C;
    return;
L_08AA131C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08AA1340u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AA1340u) goto L_08AA1340;
    return;
L_08AA1340:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AA1344;
L_08AA1344:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(15390)));
    goto L_08AA134C;
L_08AA134C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
        goto L_08AA139C;
    }
    goto L_08AA1354;
L_08AA1354:
    ctx.set_gpr(31, 0x08AA135Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AA135Cu) goto L_08AA135C;
    return;
L_08AA135C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA1368u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 236u, 0x08A9D8ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA1368u) goto L_08AA1368;
    return;
L_08AA1368:
    ctx.set_gpr(31, 0x08AA1370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AA1370u) goto L_08AA1370;
    return;
L_08AA1370:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15400)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32564));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AA1390u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AA1390u) goto L_08AA1390;
    return;
L_08AA1390:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    goto L_08AA139C;
L_08AA139C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA13CC;
      }
      goto L_08AA13A8;
    }
L_08AA13A8:
    ctx.set_gpr(31, 0x08AA13B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA13B0u) goto L_08AA13B0;
    return;
L_08AA13B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(89));
    ctx.set_gpr(31, 0x08AA13C4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA13C4u) goto L_08AA13C4;
    return;
L_08AA13C4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
      if (branch_taken) {
          goto L_08AA13F8;
      }
      goto L_08AA13CC;
    }
L_08AA13CC:
    ctx.set_gpr(31, 0x08AA13D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA13D4u) goto L_08AA13D4;
    return;
L_08AA13D4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(89));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AA13F4u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA13F4u) goto L_08AA13F4;
    return;
L_08AA13F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    goto L_08AA13F8;
L_08AA13F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(199));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA1428;
      }
      goto L_08AA1404;
    }
L_08AA1404:
    ctx.set_gpr(31, 0x08AA140Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA140Cu) goto L_08AA140C;
    return;
L_08AA140C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(89));
    ctx.set_gpr(31, 0x08AA1420u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1420u) goto L_08AA1420;
    return;
L_08AA1420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1450;
      }
      goto L_08AA1428;
    }
L_08AA1428:
    ctx.set_gpr(31, 0x08AA1430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1430u) goto L_08AA1430;
    return;
L_08AA1430:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(90));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AA1450u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1450u) goto L_08AA1450;
    return;
L_08AA1450:
    ctx.set_gpr(31, 0x08AA1458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA1458u) goto L_08AA1458;
    return;
L_08AA1458:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA1464u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1464u) goto L_08AA1464;
    return;
L_08AA1464:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA151C;
      }
      goto L_08AA146C;
    }
L_08AA146C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AA14AC;
    }
    goto L_08AA147C;
L_08AA147C:
    ctx.set_gpr(31, 0x08AA1484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1484u) goto L_08AA1484;
    return;
L_08AA1484:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(89));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AA14A4u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA14A4u) goto L_08AA14A4;
    return;
L_08AA14A4:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA14AC;
L_08AA14AC:
    ctx.set_gpr(31, 0x08AA14B4u);
    // nop
    goto L_08AA2A48;
L_08AA14B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(6, ctx.gpr[3] & 3u);
      if (branch_taken) {
          goto L_08AA14CC;
      }
      goto L_08AA14C0;
    }
L_08AA14C0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA14CC;
      }
      goto L_08AA14C8;
    }
L_08AA14C8:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    goto L_08AA14CC;
L_08AA14CC:
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
        goto L_08AA14E0;
    }
    goto L_08AA14D4;
L_08AA14D4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), 0u);
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA14E0;
    }
L_08AA14E0:
    if (ctx.gpr[6] != ctx.gpr[5]) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
        goto L_08AA14F4;
    }
    goto L_08AA14E8;
L_08AA14E8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), 0u);
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA14F4;
    }
L_08AA14F4:
    if (ctx.gpr[6] != ctx.gpr[4]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
        goto L_08AA1508;
    }
    goto L_08AA14FC;
L_08AA14FC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA1508;
    }
L_08AA1508:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA1510;
    }
L_08AA1510:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA151C;
    }
L_08AA151C:
    ctx.set_gpr(31, 0x08AA1524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA1524u) goto L_08AA1524;
    return;
L_08AA1524:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA1530u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1530u) goto L_08AA1530;
    return;
L_08AA1530:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA15E8;
      }
      goto L_08AA1538;
    }
L_08AA1538:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 199 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AA1578;
    }
    goto L_08AA1548;
L_08AA1548:
    ctx.set_gpr(31, 0x08AA1550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1550u) goto L_08AA1550;
    return;
L_08AA1550:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(90));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AA1570u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1570u) goto L_08AA1570;
    return;
L_08AA1570:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA1578;
L_08AA1578:
    ctx.set_gpr(31, 0x08AA1580u);
    // nop
    goto L_08AA2CA0;
L_08AA1580:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(6, ctx.gpr[3] & 3u);
      if (branch_taken) {
          goto L_08AA1598;
      }
      goto L_08AA158C;
    }
L_08AA158C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1598;
      }
      goto L_08AA1594;
    }
L_08AA1594:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    goto L_08AA1598;
L_08AA1598:
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
        goto L_08AA15AC;
    }
    goto L_08AA15A0;
L_08AA15A0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), 0u);
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA15AC;
    }
L_08AA15AC:
    if (ctx.gpr[6] != ctx.gpr[5]) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
        goto L_08AA15C0;
    }
    goto L_08AA15B4;
L_08AA15B4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), 0u);
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA15C0;
    }
L_08AA15C0:
    if (ctx.gpr[6] != ctx.gpr[4]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
        goto L_08AA15D4;
    }
    goto L_08AA15C8;
L_08AA15C8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA15D4;
    }
L_08AA15D4:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA15DC;
    }
L_08AA15DC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA15E8;
    }
L_08AA15E8:
    ctx.set_gpr(31, 0x08AA15F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA15F0u) goto L_08AA15F0;
    return;
L_08AA15F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA15FCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AA15FCu) goto L_08AA15FC;
    return;
L_08AA15FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1700;
      }
      goto L_08AA1604;
    }
L_08AA1604:
    ctx.set_gpr(31, 0x08AA160Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA160Cu) goto L_08AA160C;
    return;
L_08AA160C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA1620u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1620u) goto L_08AA1620;
    return;
L_08AA1620:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 4 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
        goto L_08AA1644;
    }
    goto L_08AA1634;
L_08AA1634:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
        goto L_08AA1648;
    }
    goto L_08AA1640;
L_08AA1640:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    goto L_08AA1644;
L_08AA1644:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    goto L_08AA1648;
L_08AA1648:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 33 ? 1u : 0u);
        goto L_08AA1678;
    }
    goto L_08AA1654;
L_08AA1654:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15400), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26136));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA16CC;
      }
      goto L_08AA1678;
    }
L_08AA1678:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 4 ? 1u : 0u);
        goto L_08AA16B4;
    }
    goto L_08AA1680;
L_08AA1680:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AA16B0;
      }
      goto L_08AA1688;
    }
L_08AA1688:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15400)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26136));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15400), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA16CC;
      }
      goto L_08AA16B0;
    }
L_08AA16B0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 4 ? 1u : 0u);
    goto L_08AA16B4;
L_08AA16B4:
    if (ctx.gpr[1] == 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), 0u);
        goto L_08AA16D0;
    }
    goto L_08AA16BC;
L_08AA16BC:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26136)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15400), 0u);
    goto L_08AA16CC;
L_08AA16CC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), 0u);
    goto L_08AA16D0;
L_08AA16D0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15384)));
    ctx.set_gpr(31, 0x08AA16E0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA23E0;
L_08AA16E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(31, 0x08AA16F0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19612), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA16F0u) goto L_08AA16F0;
    return;
L_08AA16F0:
    ctx.set_gpr(31, 0x08AA16F8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x08AA16F8u) goto L_08AA16F8;
    return;
L_08AA16F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA1700;
    }
L_08AA1700:
    ctx.set_gpr(31, 0x08AA1708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA1708u) goto L_08AA1708;
    return;
L_08AA1708:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA1714u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1714u) goto L_08AA1714;
    return;
L_08AA1714:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(15748)));
        goto L_08AA1814;
    }
    goto L_08AA171C;
L_08AA171C:
    ctx.set_gpr(31, 0x08AA1724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1724u) goto L_08AA1724;
    return;
L_08AA1724:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA1738u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1738u) goto L_08AA1738;
    return;
L_08AA1738:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 28 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
        goto L_08AA175C;
    }
    goto L_08AA174C;
L_08AA174C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
        goto L_08AA1760;
    }
    goto L_08AA1758;
L_08AA1758:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    goto L_08AA175C;
L_08AA175C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    goto L_08AA1760;
L_08AA1760:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA1788;
      }
      goto L_08AA176C;
    }
L_08AA176C:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26132)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15400)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15400), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA17E0;
      }
      goto L_08AA1788;
    }
L_08AA1788:
    if (static_cast<std::int32_t>(ctx.gpr[3]) < 0) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 28 ? 1u : 0u);
        goto L_08AA17C8;
    }
    goto L_08AA1790;
L_08AA1790:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 28 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA17C4;
      }
      goto L_08AA179C;
    }
L_08AA179C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15400)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26136));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15400), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA17E0;
      }
      goto L_08AA17C4;
    }
L_08AA17C4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 28 ? 1u : 0u);
    goto L_08AA17C8;
L_08AA17C8:
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), 0u);
        goto L_08AA17E4;
    }
    goto L_08AA17D0;
L_08AA17D0:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26136)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15400), 0u);
    goto L_08AA17E0;
L_08AA17E0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), 0u);
    goto L_08AA17E4;
L_08AA17E4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15384)));
    ctx.set_gpr(31, 0x08AA17F4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA23E0;
L_08AA17F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(31, 0x08AA1804u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19612), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA1804u) goto L_08AA1804;
    return;
L_08AA1804:
    ctx.set_gpr(31, 0x08AA180Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x08AA180Cu) goto L_08AA180C;
    return;
L_08AA180C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA1814;
    }
L_08AA1814:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(15748)));
        goto L_08AA18D4;
    }
    goto L_08AA181C;
L_08AA181C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA18D0;
      }
      goto L_08AA182C;
    }
L_08AA182C:
    ctx.set_gpr(31, 0x08AA1834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA1834u) goto L_08AA1834;
    return;
L_08AA1834:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA1840u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA1840u) goto L_08AA1840;
    return;
L_08AA1840:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA18D0;
      }
      goto L_08AA1848;
    }
L_08AA1848:
    ctx.set_gpr(31, 0x08AA1850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1850u) goto L_08AA1850;
    return;
L_08AA1850:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA1864u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1864u) goto L_08AA1864;
    return;
L_08AA1864:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15392)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
        goto L_08AA1880;
    }
    goto L_08AA1874;
L_08AA1874:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA1884;
      }
      goto L_08AA1880;
    }
L_08AA1880:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), ctx.gpr[2]);
    goto L_08AA1884;
L_08AA1884:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15392)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
        goto L_08AA18A0;
    }
    goto L_08AA1894;
L_08AA1894:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    goto L_08AA18A0;
L_08AA18A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15392)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15384)));
    ctx.set_gpr(31, 0x08AA18B8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA23E0;
L_08AA18B8:
    ctx.set_gpr(31, 0x08AA18C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA18C0u) goto L_08AA18C0;
    return;
L_08AA18C0:
    ctx.set_gpr(31, 0x08AA18C8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x08AA18C8u) goto L_08AA18C8;
    return;
L_08AA18C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA18D0;
    }
L_08AA18D0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(15748)));
    goto L_08AA18D4;
L_08AA18D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1990;
      }
      goto L_08AA18DC;
    }
L_08AA18DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA1990;
      }
      goto L_08AA18EC;
    }
L_08AA18EC:
    ctx.set_gpr(31, 0x08AA18F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA18F4u) goto L_08AA18F4;
    return;
L_08AA18F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA1900u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA1900u) goto L_08AA1900;
    return;
L_08AA1900:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1990;
      }
      goto L_08AA1908;
    }
L_08AA1908:
    ctx.set_gpr(31, 0x08AA1910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1910u) goto L_08AA1910;
    return;
L_08AA1910:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA1924u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1924u) goto L_08AA1924;
    return;
L_08AA1924:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15396)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(2));
        goto L_08AA1940;
    }
    goto L_08AA1934;
L_08AA1934:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA1944;
      }
      goto L_08AA1940;
    }
L_08AA1940:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), ctx.gpr[2]);
    goto L_08AA1944;
L_08AA1944:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15396)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
        goto L_08AA1960;
    }
    goto L_08AA1954;
L_08AA1954:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    goto L_08AA1960;
L_08AA1960:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15396)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15384)));
    ctx.set_gpr(31, 0x08AA1978u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA23E0;
L_08AA1978:
    ctx.set_gpr(31, 0x08AA1980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA1980u) goto L_08AA1980;
    return;
L_08AA1980:
    ctx.set_gpr(31, 0x08AA1988u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x08AA1988u) goto L_08AA1988;
    return;
L_08AA1988:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA1990;
    }
L_08AA1990:
    ctx.set_gpr(31, 0x08AA1998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA1998u) goto L_08AA1998;
    return;
L_08AA1998:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA19A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AA19A4u) goto L_08AA19A4;
    return;
L_08AA19A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1AA8;
      }
      goto L_08AA19AC;
    }
L_08AA19AC:
    ctx.set_gpr(31, 0x08AA19B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA19B4u) goto L_08AA19B4;
    return;
L_08AA19B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA19C8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA19C8u) goto L_08AA19C8;
    return;
L_08AA19C8:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15384)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AA1A30;
      }
      goto L_08AA19D8;
    }
L_08AA19D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AA19DC;
L_08AA19DC:
    ctx.set_gpr(31, 0x08AA19E4u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA19E4u) goto L_08AA19E4;
    return;
L_08AA19E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08AA19FCu);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA19FCu) goto L_08AA19FC;
    return;
L_08AA19FC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15384)));
        goto L_08AA1A20;
    }
    goto L_08AA1A04;
L_08AA1A04:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08AA1A1Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA1A1Cu) goto L_08AA1A1C;
    return;
L_08AA1A1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15384)));
    goto L_08AA1A20;
L_08AA1A20:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA19DC;
    }
    goto L_08AA1A30;
L_08AA1A30:
    ctx.set_gpr(31, 0x08AA1A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1A38u) goto L_08AA1A38;
    return;
L_08AA1A38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(89));
    ctx.set_gpr(31, 0x08AA1A4Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1A4Cu) goto L_08AA1A4C;
    return;
L_08AA1A4C:
    ctx.set_gpr(31, 0x08AA1A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1A54u) goto L_08AA1A54;
    return;
L_08AA1A54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(90));
    ctx.set_gpr(31, 0x08AA1A68u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1A68u) goto L_08AA1A68;
    return;
L_08AA1A68:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15356), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15376), 0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15756), ctx.gpr[5]);
    ctx.set_gpr(31, 0x08AA1A84u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 920u, 0x08AA74B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1A84u) goto L_08AA1A84;
    return;
L_08AA1A84:
    ctx.set_gpr(31, 0x08AA1A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1A8Cu) goto L_08AA1A8C;
    return;
L_08AA1A8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AA1AA0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1AA0u) goto L_08AA1AA0;
    return;
L_08AA1AA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA1AA8;
    }
L_08AA1AA8:
    ctx.set_gpr(31, 0x08AA1AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA1AB0u) goto L_08AA1AB0;
    return;
L_08AA1AB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA1ABCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA1ABCu) goto L_08AA1ABC;
    return;
L_08AA1ABC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1B4C;
      }
      goto L_08AA1AC4;
    }
L_08AA1AC4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15384)));
    ctx.set_gpr(31, 0x08AA1AD0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA23E0;
L_08AA1AD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(5, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08AA1AE8;
      }
      goto L_08AA1ADC;
    }
L_08AA1ADC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1AE8;
      }
      goto L_08AA1AE4;
    }
L_08AA1AE4:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    goto L_08AA1AE8;
L_08AA1AE8:
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
        goto L_08AA1AFC;
    }
    goto L_08AA1AF0;
L_08AA1AF0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), 0u);
      if (branch_taken) {
          goto L_08AA1B34;
      }
      goto L_08AA1AFC;
    }
L_08AA1AFC:
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
        goto L_08AA1B10;
    }
    goto L_08AA1B04;
L_08AA1B04:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), 0u);
      if (branch_taken) {
          goto L_08AA1B34;
      }
      goto L_08AA1B10;
    }
L_08AA1B10:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
        goto L_08AA1B24;
    }
    goto L_08AA1B18;
L_08AA1B18:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AA1B34;
      }
      goto L_08AA1B24;
    }
L_08AA1B24:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA1B34;
      }
      goto L_08AA1B2C;
    }
L_08AA1B2C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15392), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15396), ctx.gpr[3]);
    goto L_08AA1B34;
L_08AA1B34:
    ctx.set_gpr(31, 0x08AA1B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA1B3Cu) goto L_08AA1B3C;
    return;
L_08AA1B3C:
    ctx.set_gpr(31, 0x08AA1B44u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x08AA1B44u) goto L_08AA1B44;
    return;
L_08AA1B44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA1B4C;
    }
L_08AA1B4C:
    ctx.set_gpr(31, 0x08AA1B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA1B54u) goto L_08AA1B54;
    return;
L_08AA1B54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA1B60u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA1B60u) goto L_08AA1B60;
    return;
L_08AA1B60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA1B68;
    }
L_08AA1B68:
    ctx.set_gpr(31, 0x08AA1B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1B70u) goto L_08AA1B70;
    return;
L_08AA1B70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA1B84u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1B84u) goto L_08AA1B84;
    return;
L_08AA1B84:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA1B98u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15756), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 920u, 0x08AA74B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1B98u) goto L_08AA1B98;
    return;
L_08AA1B98:
    ctx.set_gpr(31, 0x08AA1BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1BA0u) goto L_08AA1BA0;
    return;
L_08AA1BA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AA1BB4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1BB4u) goto L_08AA1BB4;
    return;
L_08AA1BB4:
    ctx.set_gpr(31, 0x08AA1BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1BBCu) goto L_08AA1BBC;
    return;
L_08AA1BBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08AA1BD0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1BD0u) goto L_08AA1BD0;
    return;
L_08AA1BD0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(31, 0x08AA1BE0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA1BE0u) goto L_08AA1BE0;
    return;
L_08AA1BE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15384)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA1BEC;
    }
L_08AA1BEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AA1BF0;
L_08AA1BF0:
    ctx.set_gpr(31, 0x08AA1BF8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA1BF8u) goto L_08AA1BF8;
    return;
L_08AA1BF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08AA1C10u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA1C10u) goto L_08AA1C10;
    return;
L_08AA1C10:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15388), static_cast<std::uint8_t>(0u));
        goto L_08AA1C5C;
    }
    goto L_08AA1C18;
L_08AA1C18:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AA1C24u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 948u, 0x08A9FD20u>(ctx, &aot_mem) && ctx.pc == 0x08AA1C24u) goto L_08AA1C24;
    return;
L_08AA1C24:
    ctx.set_gpr(31, 0x08AA1C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1C2Cu) goto L_08AA1C2C;
    return;
L_08AA1C2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08AA1C40u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1C40u) goto L_08AA1C40;
    return;
L_08AA1C40:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15356), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15388), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AA1C68;
      }
      goto L_08AA1C5C;
    }
L_08AA1C5C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15376), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
    goto L_08AA1C68;
L_08AA1C68:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15384)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA1BF0;
    }
    goto L_08AA1C7C;
L_08AA1C7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA1C84;
    }
L_08AA1C84:
    ctx.set_gpr(31, 0x08AA1C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1C8Cu) goto L_08AA1C8C;
    return;
L_08AA1C8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(89));
    ctx.set_gpr(31, 0x08AA1CA0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1CA0u) goto L_08AA1CA0;
    return;
L_08AA1CA0:
    ctx.set_gpr(31, 0x08AA1CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1CA8u) goto L_08AA1CA8;
    return;
L_08AA1CA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(90));
    ctx.set_gpr(31, 0x08AA1CBCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1CBCu) goto L_08AA1CBC;
    return;
L_08AA1CBC:
    ctx.set_gpr(31, 0x08AA1CC4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA1D38;
L_08AA1CC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA1CCC;
    }
L_08AA1CCC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15376), 0u);
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA1CD4;
    }
L_08AA1CD4:
    ctx.set_gpr(31, 0x08AA1CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1CDCu) goto L_08AA1CDC;
    return;
L_08AA1CDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(89));
    ctx.set_gpr(31, 0x08AA1CF0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1CF0u) goto L_08AA1CF0;
    return;
L_08AA1CF0:
    ctx.set_gpr(31, 0x08AA1CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1CF8u) goto L_08AA1CF8;
    return;
L_08AA1CF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(90));
    ctx.set_gpr(31, 0x08AA1D0Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1D0Cu) goto L_08AA1D0C;
    return;
L_08AA1D0C:
    ctx.set_gpr(31, 0x08AA1D14u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA208C;
L_08AA1D14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA1D1C;
    }
L_08AA1D1C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15376), 0u);
    goto L_08AA1D20;
L_08AA1D20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AA1D24;
L_08AA1D24:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA1D38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15756), 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AA1D54u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 920u, 0x08AA74B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1D54u) goto L_08AA1D54;
    return;
L_08AA1D54:
    ctx.set_gpr(31, 0x08AA1D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1D5Cu) goto L_08AA1D5C;
    return;
L_08AA1D5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AA1D70u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1D70u) goto L_08AA1D70;
    return;
L_08AA1D70:
    ctx.set_gpr(31, 0x08AA1D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1D78u) goto L_08AA1D78;
    return;
L_08AA1D78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08AA1D8Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1D8Cu) goto L_08AA1D8C;
    return;
L_08AA1D8C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15380)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA2000;
      }
      goto L_08AA1D9C;
    }
L_08AA1D9C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA1F88;
      }
      goto L_08AA1DA8;
    }
L_08AA1DA8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA1F5C;
      }
      goto L_08AA1DB4;
    }
L_08AA1DB4:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15760), static_cast<std::uint8_t>(ctx.gpr[2]));
        goto L_08AA1DC4;
    }
    goto L_08AA1DBC;
L_08AA1DBC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AA207C;
      }
      goto L_08AA1DC4;
    }
L_08AA1DC4:
    ctx.set_gpr(31, 0x08AA1DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA1DCCu) goto L_08AA1DCC;
    return;
L_08AA1DCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA1DD8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AA1DD8u) goto L_08AA1DD8;
    return;
L_08AA1DD8:
    ctx.set_gpr(31, 0x08AA1DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA1DE0u) goto L_08AA1DE0;
    return;
L_08AA1DE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(300));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(150));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08AA1E10u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08AA1E10u) goto L_08AA1E10;
    return;
L_08AA1E10:
    ctx.set_gpr(31, 0x08AA1E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA1E18u) goto L_08AA1E18;
    return;
L_08AA1E18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA1E28u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1E28u) goto L_08AA1E28;
    return;
L_08AA1E28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA1E34u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1E34u) goto L_08AA1E34;
    return;
L_08AA1E34:
    ctx.set_gpr(31, 0x08AA1E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA1E3Cu) goto L_08AA1E3C;
    return;
L_08AA1E3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA1E4Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1E4Cu) goto L_08AA1E4C;
    return;
L_08AA1E4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA1E58u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08AA1E58u) goto L_08AA1E58;
    return;
L_08AA1E58:
    ctx.set_gpr(31, 0x08AA1E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA1E60u) goto L_08AA1E60;
    return;
L_08AA1E60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA1E70u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1E70u) goto L_08AA1E70;
    return;
L_08AA1E70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19860));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA1E90u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AA1E90u) goto L_08AA1E90;
    return;
L_08AA1E90:
    ctx.set_gpr(31, 0x08AA1E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA1E98u) goto L_08AA1E98;
    return;
L_08AA1E98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA1EA8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1EA8u) goto L_08AA1EA8;
    return;
L_08AA1EA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19900));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA1EC8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AA1EC8u) goto L_08AA1EC8;
    return;
L_08AA1EC8:
    ctx.set_gpr(31, 0x08AA1ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA1ED0u) goto L_08AA1ED0;
    return;
L_08AA1ED0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA1EE0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1EE0u) goto L_08AA1EE0;
    return;
L_08AA1EE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19940));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA1F00u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AA1F00u) goto L_08AA1F00;
    return;
L_08AA1F00:
    ctx.set_gpr(31, 0x08AA1F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA1F08u) goto L_08AA1F08;
    return;
L_08AA1F08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA1F18u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1F18u) goto L_08AA1F18;
    return;
L_08AA1F18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19980));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA1F38u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AA1F38u) goto L_08AA1F38;
    return;
L_08AA1F38:
    ctx.set_gpr(31, 0x08AA1F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA1F40u) goto L_08AA1F40;
    return;
L_08AA1F40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA1F4Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08AA1F4Cu) goto L_08AA1F4C;
    return;
L_08AA1F4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15380)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15380), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA2078;
      }
      goto L_08AA1F5C;
    }
L_08AA1F5C:
    ctx.set_gpr(31, 0x08AA1F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA1F64u) goto L_08AA1F64;
    return;
L_08AA1F64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA1F70u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AA1F70u) goto L_08AA1F70;
    return;
L_08AA1F70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2078;
      }
      goto L_08AA1F78;
    }
L_08AA1F78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15380)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15380), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA2078;
      }
      goto L_08AA1F88;
    }
L_08AA1F88:
    ctx.set_gpr(31, 0x08AA1F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA1F90u) goto L_08AA1F90;
    return;
L_08AA1F90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA1F9Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AA1F9Cu) goto L_08AA1F9C;
    return;
L_08AA1F9C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15340), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA1FDC;
      }
      goto L_08AA1FA8;
    }
L_08AA1FA8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15380)));
        goto L_08AA1FBC;
    }
    goto L_08AA1FB4;
L_08AA1FB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2078;
      }
      goto L_08AA1FBC;
    }
L_08AA1FBC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AA1FC8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15380), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA1FC8u) goto L_08AA1FC8;
    return;
L_08AA1FC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA1FD4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AA1FD4u) goto L_08AA1FD4;
    return;
L_08AA1FD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2078;
      }
      goto L_08AA1FDC;
    }
L_08AA1FDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15380)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AA1FECu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15380), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA1FECu) goto L_08AA1FEC;
    return;
L_08AA1FEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA1FF8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AA1FF8u) goto L_08AA1FF8;
    return;
L_08AA1FF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2078;
      }
      goto L_08AA2000;
    }
L_08AA2000:
    ctx.set_gpr(31, 0x08AA2008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA2008u) goto L_08AA2008;
    return;
L_08AA2008:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA2014u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2014u) goto L_08AA2014;
    return;
L_08AA2014:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2078;
      }
      goto L_08AA201C;
    }
L_08AA201C:
    ctx.set_gpr(31, 0x08AA2024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA2024u) goto L_08AA2024;
    return;
L_08AA2024:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA2034u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2034u) goto L_08AA2034;
    return;
L_08AA2034:
    ctx.set_gpr(31, 0x08AA203Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AA203Cu) goto L_08AA203C;
    return;
L_08AA203C:
    ctx.set_gpr(31, 0x08AA2044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA2044u) goto L_08AA2044;
    return;
L_08AA2044:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA2050u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2050u) goto L_08AA2050;
    return;
L_08AA2050:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15380), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AA2060u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA2060u) goto L_08AA2060;
    return;
L_08AA2060:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA206Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AA206Cu) goto L_08AA206C;
    return;
L_08AA206C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15760), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA207C;
      }
      goto L_08AA2078;
    }
L_08AA2078:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AA207C;
L_08AA207C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA208C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15756), 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AA20A8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 920u, 0x08AA74B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA20A8u) goto L_08AA20A8;
    return;
L_08AA20A8:
    ctx.set_gpr(31, 0x08AA20B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA20B0u) goto L_08AA20B0;
    return;
L_08AA20B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AA20C4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA20C4u) goto L_08AA20C4;
    return;
L_08AA20C4:
    ctx.set_gpr(31, 0x08AA20CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA20CCu) goto L_08AA20CC;
    return;
L_08AA20CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08AA20E0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA20E0u) goto L_08AA20E0;
    return;
L_08AA20E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15380)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA2354;
      }
      goto L_08AA20F0;
    }
L_08AA20F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA22DC;
      }
      goto L_08AA20FC;
    }
L_08AA20FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA22B0;
      }
      goto L_08AA2108;
    }
L_08AA2108:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15760), static_cast<std::uint8_t>(ctx.gpr[2]));
        goto L_08AA2118;
    }
    goto L_08AA2110;
L_08AA2110:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AA23D0;
      }
      goto L_08AA2118;
    }
L_08AA2118:
    ctx.set_gpr(31, 0x08AA2120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA2120u) goto L_08AA2120;
    return;
L_08AA2120:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA212Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AA212Cu) goto L_08AA212C;
    return;
L_08AA212C:
    ctx.set_gpr(31, 0x08AA2134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA2134u) goto L_08AA2134;
    return;
L_08AA2134:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(300));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(150));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08AA2164u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08AA2164u) goto L_08AA2164;
    return;
L_08AA2164:
    ctx.set_gpr(31, 0x08AA216Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA216Cu) goto L_08AA216C;
    return;
L_08AA216C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA217Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA217Cu) goto L_08AA217C;
    return;
L_08AA217C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA2188u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2188u) goto L_08AA2188;
    return;
L_08AA2188:
    ctx.set_gpr(31, 0x08AA2190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA2190u) goto L_08AA2190;
    return;
L_08AA2190:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA21A0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA21A0u) goto L_08AA21A0;
    return;
L_08AA21A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA21ACu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08AA21ACu) goto L_08AA21AC;
    return;
L_08AA21AC:
    ctx.set_gpr(31, 0x08AA21B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA21B4u) goto L_08AA21B4;
    return;
L_08AA21B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA21C4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA21C4u) goto L_08AA21C4;
    return;
L_08AA21C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19860));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA21E4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AA21E4u) goto L_08AA21E4;
    return;
L_08AA21E4:
    ctx.set_gpr(31, 0x08AA21ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA21ECu) goto L_08AA21EC;
    return;
L_08AA21EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA21FCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA21FCu) goto L_08AA21FC;
    return;
L_08AA21FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19996));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA221Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AA221Cu) goto L_08AA221C;
    return;
L_08AA221C:
    ctx.set_gpr(31, 0x08AA2224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA2224u) goto L_08AA2224;
    return;
L_08AA2224:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA2234u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2234u) goto L_08AA2234;
    return;
L_08AA2234:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19940));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA2254u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AA2254u) goto L_08AA2254;
    return;
L_08AA2254:
    ctx.set_gpr(31, 0x08AA225Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA225Cu) goto L_08AA225C;
    return;
L_08AA225C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA226Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA226Cu) goto L_08AA226C;
    return;
L_08AA226C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19980));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA228Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AA228Cu) goto L_08AA228C;
    return;
L_08AA228C:
    ctx.set_gpr(31, 0x08AA2294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA2294u) goto L_08AA2294;
    return;
L_08AA2294:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA22A0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08AA22A0u) goto L_08AA22A0;
    return;
L_08AA22A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15380)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15380), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA23CC;
      }
      goto L_08AA22B0;
    }
L_08AA22B0:
    ctx.set_gpr(31, 0x08AA22B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA22B8u) goto L_08AA22B8;
    return;
L_08AA22B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA22C4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AA22C4u) goto L_08AA22C4;
    return;
L_08AA22C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA23CC;
      }
      goto L_08AA22CC;
    }
L_08AA22CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15380)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15380), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA23CC;
      }
      goto L_08AA22DC;
    }
L_08AA22DC:
    ctx.set_gpr(31, 0x08AA22E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA22E4u) goto L_08AA22E4;
    return;
L_08AA22E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA22F0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AA22F0u) goto L_08AA22F0;
    return;
L_08AA22F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15340), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA2330;
      }
      goto L_08AA22FC;
    }
L_08AA22FC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15380)));
        goto L_08AA2310;
    }
    goto L_08AA2308;
L_08AA2308:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA23CC;
      }
      goto L_08AA2310;
    }
L_08AA2310:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AA231Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15380), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA231Cu) goto L_08AA231C;
    return;
L_08AA231C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA2328u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AA2328u) goto L_08AA2328;
    return;
L_08AA2328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA23CC;
      }
      goto L_08AA2330;
    }
L_08AA2330:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15380)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AA2340u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15380), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA2340u) goto L_08AA2340;
    return;
L_08AA2340:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA234Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AA234Cu) goto L_08AA234C;
    return;
L_08AA234C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA23CC;
      }
      goto L_08AA2354;
    }
L_08AA2354:
    ctx.set_gpr(31, 0x08AA235Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA235Cu) goto L_08AA235C;
    return;
L_08AA235C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA2368u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2368u) goto L_08AA2368;
    return;
L_08AA2368:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA23CC;
      }
      goto L_08AA2370;
    }
L_08AA2370:
    ctx.set_gpr(31, 0x08AA2378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA2378u) goto L_08AA2378;
    return;
L_08AA2378:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA2388u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2388u) goto L_08AA2388;
    return;
L_08AA2388:
    ctx.set_gpr(31, 0x08AA2390u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AA2390u) goto L_08AA2390;
    return;
L_08AA2390:
    ctx.set_gpr(31, 0x08AA2398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA2398u) goto L_08AA2398;
    return;
L_08AA2398:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA23A4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA23A4u) goto L_08AA23A4;
    return;
L_08AA23A4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15380), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AA23B4u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AA23B4u) goto L_08AA23B4;
    return;
L_08AA23B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA23C0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AA23C0u) goto L_08AA23C0;
    return;
L_08AA23C0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15760), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA23D0;
      }
      goto L_08AA23CC;
    }
L_08AA23CC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AA23D0;
L_08AA23D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA23E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AA240Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08AA240Cu) goto L_08AA240C;
    return;
L_08AA240C:
    ctx.set_gpr(31, 0x08AA2414u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08AA2414u) goto L_08AA2414;
    return;
L_08AA2414:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_08AA2460;
      }
      goto L_08AA2420;
    }
L_08AA2420:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA2424;
L_08AA2424:
    ctx.set_gpr(31, 0x08AA242Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA242Cu) goto L_08AA242C;
    return;
L_08AA242C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x08AA2444u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA2444u) goto L_08AA2444;
    return;
L_08AA2444:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08AA2454;
    }
    goto L_08AA244C;
L_08AA244C:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AA2454;
L_08AA2454:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA2424;
    }
    goto L_08AA2460;
L_08AA2460:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AA273C;
      }
      goto L_08AA2468;
    }
L_08AA2468:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 0 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AA25D8;
    }
    goto L_08AA2478;
L_08AA2478:
    ctx.set_gpr(31, 0x08AA2480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA2480u) goto L_08AA2480;
    return;
L_08AA2480:
    ctx.set_gpr(31, 0x08AA2488u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x08AA2488u) goto L_08AA2488;
    return;
L_08AA2488:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(31, 0x08AA2494u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 862u, 0x08A8AE94u>(ctx, &aot_mem) && ctx.pc == 0x08AA2494u) goto L_08AA2494;
    return;
L_08AA2494:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49736u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA24B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA24B8u) goto L_08AA24B8;
    return;
L_08AA24B8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x08AA24C4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AA24C4u) goto L_08AA24C4;
    return;
L_08AA24C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_08AA278C;
      }
      goto L_08AA24CC;
    }
L_08AA24CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA24D8u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA24D8u) goto L_08AA24D8;
    return;
L_08AA24D8:
    ctx.set_gpr(31, 0x08AA24E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA24E0u) goto L_08AA24E0;
    return;
L_08AA24E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA24F4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA24F4u) goto L_08AA24F4;
    return;
L_08AA24F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x08AA250Cu);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA250Cu) goto L_08AA250C;
    return;
L_08AA250C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08AA25C4;
    }
    goto L_08AA2514;
L_08AA2514:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AA2530u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2530u) goto L_08AA2530;
    return;
L_08AA2530:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AA253Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AA253Cu) goto L_08AA253C;
    return;
L_08AA253C:
    ctx.set_gpr(31, 0x08AA2544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA2544u) goto L_08AA2544;
    return;
L_08AA2544:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AA2564u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 312u, 0x088595D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA2564u) goto L_08AA2564;
    return;
L_08AA2564:
    ctx.set_gpr(31, 0x08AA256Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA256Cu) goto L_08AA256C;
    return;
L_08AA256C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA2580u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2580u) goto L_08AA2580;
    return;
L_08AA2580:
    ctx.set_gpr(31, 0x08AA2588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2588u) goto L_08AA2588;
    return;
L_08AA2588:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(31, 0x08AA25A0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA25A0u) goto L_08AA25A0;
    return;
L_08AA25A0:
    ctx.set_gpr(31, 0x08AA25A8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08AA25A8u) goto L_08AA25A8;
    return;
L_08AA25A8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AA25C0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA25C0u) goto L_08AA25C0;
    return;
L_08AA25C0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AA25C4;
L_08AA25C4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AA24CC;
      }
      goto L_08AA25D0;
    }
L_08AA25D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA278C;
      }
      goto L_08AA25D8;
    }
L_08AA25D8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA278C;
      }
      goto L_08AA25E0;
    }
L_08AA25E0:
    ctx.set_gpr(2, 49736u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08AA25FCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA25FCu) goto L_08AA25FC;
    return;
L_08AA25FC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x08AA2608u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AA2608u) goto L_08AA2608;
    return;
L_08AA2608:
    ctx.set_gpr(31, 0x08AA2610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA2610u) goto L_08AA2610;
    return;
L_08AA2610:
    ctx.set_gpr(31, 0x08AA2618u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x08AA2618u) goto L_08AA2618;
    return;
L_08AA2618:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08AA278C;
      }
      goto L_08AA2620;
    }
L_08AA2620:
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    goto L_08AA2624;
L_08AA2624:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA2630u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2630u) goto L_08AA2630;
    return;
L_08AA2630:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15556)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1000));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15588)));
        goto L_08AA2668;
    }
    goto L_08AA2640;
L_08AA2640:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15588)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AA2664;
      }
      goto L_08AA264C;
    }
L_08AA264C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15620)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AA2664;
      }
      goto L_08AA2658;
    }
L_08AA2658:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15652)));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08AA2728;
    }
    goto L_08AA2664;
L_08AA2664:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15588)));
    goto L_08AA2668;
L_08AA2668:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15620)));
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08AA2688u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2688u) goto L_08AA2688;
    return;
L_08AA2688:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AA2694u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AA2694u) goto L_08AA2694;
    return;
L_08AA2694:
    ctx.set_gpr(31, 0x08AA269Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA269Cu) goto L_08AA269C;
    return;
L_08AA269C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15556)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AA26BCu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 312u, 0x088595D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA26BCu) goto L_08AA26BC;
    return;
L_08AA26BC:
    ctx.set_gpr(31, 0x08AA26C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA26C4u) goto L_08AA26C4;
    return;
L_08AA26C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA26D8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA26D8u) goto L_08AA26D8;
    return;
L_08AA26D8:
    ctx.set_gpr(31, 0x08AA26E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA26E0u) goto L_08AA26E0;
    return;
L_08AA26E0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15588)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15620)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA2700u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA2700u) goto L_08AA2700;
    return;
L_08AA2700:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15588)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15620)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15652)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15556)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(31, 0x08AA2724u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA2724u) goto L_08AA2724;
    return;
L_08AA2724:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08AA2728;
L_08AA2728:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA2624;
      }
      goto L_08AA2734;
    }
L_08AA2734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA278C;
      }
      goto L_08AA273C;
    }
L_08AA273C:
    ctx.set_gpr(31, 0x08AA2744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2744u) goto L_08AA2744;
    return;
L_08AA2744:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA2750u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA2750u) goto L_08AA2750;
    return;
L_08AA2750:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AA2778;
    }
    goto L_08AA2758;
L_08AA2758:
    ctx.set_gpr(31, 0x08AA2760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2760u) goto L_08AA2760;
    return;
L_08AA2760:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA276Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA276Cu) goto L_08AA276C;
    return;
L_08AA276C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA278C;
      }
      goto L_08AA2774;
    }
L_08AA2774:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AA2778;
L_08AA2778:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15400), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15376), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15380), 0u);
    goto L_08AA278C;
L_08AA278C:
    ctx.set_gpr(31, 0x08AA2794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2794u) goto L_08AA2794;
    return;
L_08AA2794:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA27A0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA27A0u) goto L_08AA27A0;
    return;
L_08AA27A0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AA295C;
    }
    goto L_08AA27A8;
L_08AA27A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AA2958;
      }
      goto L_08AA27B8;
    }
L_08AA27B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AA2958;
      }
      goto L_08AA27C0;
    }
L_08AA27C0:
    ctx.set_gpr(31, 0x08AA27C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA27C8u) goto L_08AA27C8;
    return;
L_08AA27C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA27DCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA27DCu) goto L_08AA27DC;
    return;
L_08AA27DC:
    ctx.set_gpr(2, 49736u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA27FCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA27FCu) goto L_08AA27FC;
    return;
L_08AA27FC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x08AA2808u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AA2808u) goto L_08AA2808;
    return;
L_08AA2808:
    ctx.set_gpr(31, 0x08AA2810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA2810u) goto L_08AA2810;
    return;
L_08AA2810:
    ctx.set_gpr(31, 0x08AA2818u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x08AA2818u) goto L_08AA2818;
    return;
L_08AA2818:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08AA2934;
      }
      goto L_08AA2820;
    }
L_08AA2820:
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    goto L_08AA2824;
L_08AA2824:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA2830u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2830u) goto L_08AA2830;
    return;
L_08AA2830:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15556)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1000));
    if (ctx.gpr[3] != ctx.gpr[4]) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15588)));
        goto L_08AA2868;
    }
    goto L_08AA2840;
L_08AA2840:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15588)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA2864;
      }
      goto L_08AA284C;
    }
L_08AA284C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15620)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA2864;
      }
      goto L_08AA2858;
    }
L_08AA2858:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15652)));
    if (ctx.gpr[3] == ctx.gpr[4]) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08AA2928;
    }
    goto L_08AA2864;
L_08AA2864:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15588)));
    goto L_08AA2868;
L_08AA2868:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15620)));
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08AA2888u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2888u) goto L_08AA2888;
    return;
L_08AA2888:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AA2894u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AA2894u) goto L_08AA2894;
    return;
L_08AA2894:
    ctx.set_gpr(31, 0x08AA289Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA289Cu) goto L_08AA289C;
    return;
L_08AA289C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15556)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AA28BCu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 312u, 0x088595D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA28BCu) goto L_08AA28BC;
    return;
L_08AA28BC:
    ctx.set_gpr(31, 0x08AA28C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA28C4u) goto L_08AA28C4;
    return;
L_08AA28C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA28D8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA28D8u) goto L_08AA28D8;
    return;
L_08AA28D8:
    ctx.set_gpr(31, 0x08AA28E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA28E0u) goto L_08AA28E0;
    return;
L_08AA28E0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15588)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15620)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA2900u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA2900u) goto L_08AA2900;
    return;
L_08AA2900:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15588)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15620)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15652)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15556)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(31, 0x08AA2924u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA2924u) goto L_08AA2924;
    return;
L_08AA2924:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08AA2928;
L_08AA2928:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA2824;
      }
      goto L_08AA2934;
    }
L_08AA2934:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15400)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15404)));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15372)));
        goto L_08AA294C;
    }
    goto L_08AA2944;
L_08AA2944:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15372)));
    goto L_08AA294C;
L_08AA294C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15368), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15404)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15400), ctx.gpr[3]);
    goto L_08AA2958;
L_08AA2958:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AA295C;
L_08AA295C:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA2978:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AA2998u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2998u) goto L_08AA2998;
    return;
L_08AA2998:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA29A4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA29A4u) goto L_08AA29A4;
    return;
L_08AA29A4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AA29EC;
      }
      goto L_08AA29B0;
    }
L_08AA29B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AA29B4;
L_08AA29B4:
    ctx.set_gpr(31, 0x08AA29BCu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA29BCu) goto L_08AA29BC;
    return;
L_08AA29BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08AA29D4u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA29D4u) goto L_08AA29D4;
    return;
L_08AA29D4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA29F4;
    }
    goto L_08AA29DC;
L_08AA29DC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA29B4;
    }
    goto L_08AA29EC;
L_08AA29EC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA2A30;
      }
      goto L_08AA29F4;
    }
L_08AA29F4:
    ctx.set_gpr(31, 0x08AA29FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA29FCu) goto L_08AA29FC;
    return;
L_08AA29FC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AA2A08u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 449u, 0x08A85954u>(ctx, &aot_mem) && ctx.pc == 0x08AA2A08u) goto L_08AA2A08;
    return;
L_08AA2A08:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AA2A1C;
    }
    goto L_08AA2A14;
L_08AA2A14:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AA2A30;
      }
      goto L_08AA2A1C;
    }
L_08AA2A1C:
    ctx.set_gpr(31, 0x08AA2A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2A24u) goto L_08AA2A24;
    return;
L_08AA2A24:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AA2A30u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 449u, 0x08A85954u>(ctx, &aot_mem) && ctx.pc == 0x08AA2A30u) goto L_08AA2A30;
    return;
L_08AA2A30:
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
L_08AA2A48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AA2C50;
      }
      goto L_08AA2A6C;
    }
L_08AA2A6C:
    ctx.set_gpr(31, 0x08AA2A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2A74u) goto L_08AA2A74;
    return;
L_08AA2A74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA2A88u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2A88u) goto L_08AA2A88;
    return;
L_08AA2A88:
    ctx.set_gpr(31, 0x08AA2A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA2A90u) goto L_08AA2A90;
    return;
L_08AA2A90:
    ctx.set_gpr(31, 0x08AA2A98u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x08AA2A98u) goto L_08AA2A98;
    return;
L_08AA2A98:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(31, 0x08AA2AA8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA2AA8u) goto L_08AA2AA8;
    return;
L_08AA2AA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2AB8;
      }
      goto L_08AA2AB4;
    }
L_08AA2AB4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_08AA2AB8;
L_08AA2AB8:
    ctx.set_gpr(31, 0x08AA2AC0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15364), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA2AC0u) goto L_08AA2AC0;
    return;
L_08AA2AC0:
    ctx.set_gpr(31, 0x08AA2AC8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x08AA2AC8u) goto L_08AA2AC8;
    return;
L_08AA2AC8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(31, 0x08AA2AD4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA2AD4u) goto L_08AA2AD4;
    return;
L_08AA2AD4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15384), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(31, 0x08AA2AE4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AA2AE4u) goto L_08AA2AE4;
    return;
L_08AA2AE4:
    ctx.set_gpr(31, 0x08AA2AECu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA2978;
L_08AA2AEC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
        goto L_08AA2B00;
    }
    goto L_08AA2AF8;
L_08AA2AF8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15368), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AA2B0C;
      }
      goto L_08AA2B00;
    }
L_08AA2B00:
    ctx.set_gpr(31, 0x08AA2B08u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 449u, 0x08A85954u>(ctx, &aot_mem) && ctx.pc == 0x08AA2B08u) goto L_08AA2B08;
    return;
L_08AA2B08:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    goto L_08AA2B0C;
L_08AA2B0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AA2B48;
    }
    goto L_08AA2B1C;
L_08AA2B1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA2B44;
      }
      goto L_08AA2B28;
    }
L_08AA2B28:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
      if (branch_taken) {
          goto L_08AA2B38;
      }
      goto L_08AA2B30;
    }
L_08AA2B30:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08AA2B38;
L_08AA2B38:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15400), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA2B68;
      }
      goto L_08AA2B44;
    }
L_08AA2B44:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AA2B48;
L_08AA2B48:
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
        goto L_08AA2B58;
    }
    goto L_08AA2B50;
L_08AA2B50:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15400), 0u);
      if (branch_taken) {
          goto L_08AA2B68;
      }
      goto L_08AA2B58;
    }
L_08AA2B58:
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
        goto L_08AA2B6C;
    }
    goto L_08AA2B60;
L_08AA2B60:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15368), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15400), 0u);
    goto L_08AA2B68;
L_08AA2B68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    goto L_08AA2B6C;
L_08AA2B6C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AA2B7Cu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 449u, 0x08A85954u>(ctx, &aot_mem) && ctx.pc == 0x08AA2B7Cu) goto L_08AA2B7C;
    return;
L_08AA2B7C:
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
        goto L_08AA2B8C;
    }
    goto L_08AA2B84;
L_08AA2B84:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    goto L_08AA2B8C;
L_08AA2B8C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(31, 0x08AA2B98u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA2B98u) goto L_08AA2B98;
    return;
L_08AA2B98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15376), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA2BA8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA2978;
L_08AA2BA8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AA2C50;
      }
      goto L_08AA2BB4;
    }
L_08AA2BB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15384)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AA2C50;
      }
      goto L_08AA2BC0;
    }
L_08AA2BC0:
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_08AA2BC4;
L_08AA2BC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA2BD0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2BD0u) goto L_08AA2BD0;
    return;
L_08AA2BD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08AA2BE8u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA2BE8u) goto L_08AA2BE8;
    return;
L_08AA2BE8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1000));
        goto L_08AA2C2C;
    }
    goto L_08AA2BF0;
L_08AA2BF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15556), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15588), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15620), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15652), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA2C3C;
      }
      goto L_08AA2C2C;
    }
L_08AA2C2C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15556), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15588), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15620), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15652), ctx.gpr[2]);
    goto L_08AA2C3C;
L_08AA2C3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15384)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA2BC4;
      }
      goto L_08AA2C50;
    }
L_08AA2C50:
    ctx.set_gpr(31, 0x08AA2C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA2C58u) goto L_08AA2C58;
    return;
L_08AA2C58:
    ctx.set_gpr(31, 0x08AA2C60u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA2C60u) goto L_08AA2C60;
    return;
L_08AA2C60:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(167));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(218));
    ctx.set_gpr(31, 0x08AA2C80u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08AA2C80u) goto L_08AA2C80;
    return;
L_08AA2C80:
    ctx.set_gpr(31, 0x08AA2C88u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 633u, 0x08AA65B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2C88u) goto L_08AA2C88;
    return;
L_08AA2C88:
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
L_08AA2CA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 199 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AA2EE0;
      }
      goto L_08AA2CC4;
    }
L_08AA2CC4:
    ctx.set_gpr(31, 0x08AA2CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2CCCu) goto L_08AA2CCC;
    return;
L_08AA2CCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA2CE0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2CE0u) goto L_08AA2CE0;
    return;
L_08AA2CE0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(31, 0x08AA2CF0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA2CF0u) goto L_08AA2CF0;
    return;
L_08AA2CF0:
    ctx.set_gpr(31, 0x08AA2CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA2CF8u) goto L_08AA2CF8;
    return;
L_08AA2CF8:
    ctx.set_gpr(31, 0x08AA2D00u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x08AA2D00u) goto L_08AA2D00;
    return;
L_08AA2D00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(200));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA2D14;
      }
      goto L_08AA2D10;
    }
L_08AA2D10:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08AA2D14;
L_08AA2D14:
    ctx.set_gpr(31, 0x08AA2D1Cu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15364), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA2D1Cu) goto L_08AA2D1C;
    return;
L_08AA2D1C:
    ctx.set_gpr(31, 0x08AA2D24u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x08AA2D24u) goto L_08AA2D24;
    return;
L_08AA2D24:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(31, 0x08AA2D30u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA2D30u) goto L_08AA2D30;
    return;
L_08AA2D30:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15384), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(31, 0x08AA2D40u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AA2D40u) goto L_08AA2D40;
    return;
L_08AA2D40:
    ctx.set_gpr(31, 0x08AA2D48u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA2978;
L_08AA2D48:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
        goto L_08AA2D5C;
    }
    goto L_08AA2D54;
L_08AA2D54:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15368), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AA2D68;
      }
      goto L_08AA2D5C;
    }
L_08AA2D5C:
    ctx.set_gpr(31, 0x08AA2D64u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 449u, 0x08A85954u>(ctx, &aot_mem) && ctx.pc == 0x08AA2D64u) goto L_08AA2D64;
    return;
L_08AA2D64:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    goto L_08AA2D68;
L_08AA2D68:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
        goto L_08AA2D84;
    }
    goto L_08AA2D78;
L_08AA2D78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    goto L_08AA2D84;
L_08AA2D84:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
      if (branch_taken) {
          goto L_08AA2D94;
      }
      goto L_08AA2D8C;
    }
L_08AA2D8C:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08AA2D94;
L_08AA2D94:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15400), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AA2DD8;
    }
    goto L_08AA2DAC;
L_08AA2DAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA2DD4;
      }
      goto L_08AA2DB8;
    }
L_08AA2DB8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
      if (branch_taken) {
          goto L_08AA2DC8;
      }
      goto L_08AA2DC0;
    }
L_08AA2DC0:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08AA2DC8;
L_08AA2DC8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15400), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA2DF8;
      }
      goto L_08AA2DD4;
    }
L_08AA2DD4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AA2DD8;
L_08AA2DD8:
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
        goto L_08AA2DE8;
    }
    goto L_08AA2DE0;
L_08AA2DE0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15400), 0u);
      if (branch_taken) {
          goto L_08AA2DF8;
      }
      goto L_08AA2DE8;
    }
L_08AA2DE8:
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
        goto L_08AA2DFC;
    }
    goto L_08AA2DF0;
L_08AA2DF0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15368), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15400), 0u);
    goto L_08AA2DF8;
L_08AA2DF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    goto L_08AA2DFC;
L_08AA2DFC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AA2E0Cu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 449u, 0x08A85954u>(ctx, &aot_mem) && ctx.pc == 0x08AA2E0Cu) goto L_08AA2E0C;
    return;
L_08AA2E0C:
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AA2E1C;
    }
    goto L_08AA2E14;
L_08AA2E14:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AA2E1C;
L_08AA2E1C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(15376), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(31, 0x08AA2E30u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA2E30u) goto L_08AA2E30;
    return;
L_08AA2E30:
    ctx.set_gpr(31, 0x08AA2E38u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AA2978;
L_08AA2E38:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AA2EE0;
      }
      goto L_08AA2E44;
    }
L_08AA2E44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15384)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AA2EE0;
      }
      goto L_08AA2E50;
    }
L_08AA2E50:
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_08AA2E54;
L_08AA2E54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA2E60u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2E60u) goto L_08AA2E60;
    return;
L_08AA2E60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08AA2E78u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA2E78u) goto L_08AA2E78;
    return;
L_08AA2E78:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1000));
        goto L_08AA2EBC;
    }
    goto L_08AA2E80;
L_08AA2E80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15556), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15588), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15620), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15652), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA2ECC;
      }
      goto L_08AA2EBC;
    }
L_08AA2EBC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15556), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15588), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15620), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15652), ctx.gpr[2]);
    goto L_08AA2ECC;
L_08AA2ECC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15384)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA2E54;
      }
      goto L_08AA2EE0;
    }
L_08AA2EE0:
    ctx.set_gpr(31, 0x08AA2EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA2EE8u) goto L_08AA2EE8;
    return;
L_08AA2EE8:
    ctx.set_gpr(31, 0x08AA2EF0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA2EF0u) goto L_08AA2EF0;
    return;
L_08AA2EF0:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15364)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(167));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(218));
    ctx.set_gpr(31, 0x08AA2F10u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08AA2F10u) goto L_08AA2F10;
    return;
L_08AA2F10:
    ctx.set_gpr(31, 0x08AA2F18u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 633u, 0x08AA65B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2F18u) goto L_08AA2F18;
    return;
L_08AA2F18:
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
L_08AA2F30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(15389)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AA2F90;
      }
      goto L_08AA2F48;
    }
L_08AA2F48:
    ctx.set_gpr(31, 0x08AA2F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA2F50u) goto L_08AA2F50;
    return;
L_08AA2F50:
    ctx.set_gpr(31, 0x08AA2F58u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA2F58u) goto L_08AA2F58;
    return;
L_08AA2F58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08AA2F70u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AA2F70u) goto L_08AA2F70;
    return;
L_08AA2F70:
    ctx.set_gpr(31, 0x08AA2F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AA2F78u) goto L_08AA2F78;
    return;
L_08AA2F78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08AA2F88u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32600)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AA2F88u) goto L_08AA2F88;
    return;
L_08AA2F88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AA2F90;
L_08AA2F90:
    ctx.set_gpr(31, 0x08AA2F98u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 633u, 0x08AA65B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2F98u) goto L_08AA2F98;
    return;
L_08AA2F98:
    ctx.set_gpr(31, 0x08AA2FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2FA0u) goto L_08AA2FA0;
    return;
L_08AA2FA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08AA2FB4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2FB4u) goto L_08AA2FB4;
    return;
L_08AA2FB4:
    ctx.set_gpr(31, 0x08AA2FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2FBCu) goto L_08AA2FBC;
    return;
L_08AA2FBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(89));
    ctx.set_gpr(31, 0x08AA2FD0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2FD0u) goto L_08AA2FD0;
    return;
L_08AA2FD0:
    ctx.set_gpr(31, 0x08AA2FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2FD8u) goto L_08AA2FD8;
    return;
L_08AA2FD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(90));
    ctx.set_gpr(31, 0x08AA2FECu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2FECu) goto L_08AA2FEC;
    return;
L_08AA2FEC:
    ctx.set_gpr(31, 0x08AA2FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2FF4u) goto L_08AA2FF4;
    return;
L_08AA2FF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AA3008u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3008u) goto L_08AA3008;
    return;
L_08AA3008:
    ctx.set_gpr(31, 0x08AA3010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3010u) goto L_08AA3010;
    return;
L_08AA3010:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA301Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA301Cu) goto L_08AA301C;
    return;
L_08AA301C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3040;
      }
      goto L_08AA3024;
    }
L_08AA3024:
    ctx.set_gpr(31, 0x08AA302Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA302Cu) goto L_08AA302C;
    return;
L_08AA302C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA3038u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA3038u) goto L_08AA3038;
    return;
L_08AA3038:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA30BC;
      }
      goto L_08AA3040;
    }
L_08AA3040:
    ctx.set_gpr(31, 0x08AA3048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3048u) goto L_08AA3048;
    return;
L_08AA3048:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA305Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA305Cu) goto L_08AA305C;
    return;
L_08AA305C:
    ctx.set_gpr(31, 0x08AA3064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AA3064u) goto L_08AA3064;
    return;
L_08AA3064:
    ctx.set_gpr(31, 0x08AA306Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08AA306Cu) goto L_08AA306C;
    return;
L_08AA306C:
    ctx.set_gpr(31, 0x08AA3074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AA3074u) goto L_08AA3074;
    return;
L_08AA3074:
    ctx.set_gpr(31, 0x08AA307Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 505u, 0x08B026F8u>(ctx, &aot_mem) && ctx.pc == 0x08AA307Cu) goto L_08AA307C;
    return;
L_08AA307C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA3098;
    }
    goto L_08AA3084;
L_08AA3084:
    ctx.set_gpr(31, 0x08AA308Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AA308Cu) goto L_08AA308C;
    return;
L_08AA308C:
    ctx.set_gpr(31, 0x08AA3094u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AA3094u) goto L_08AA3094;
    return;
L_08AA3094:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AA3098;
L_08AA3098:
    ctx.set_gpr(31, 0x08AA30A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA30A0u) goto L_08AA30A0;
    return;
L_08AA30A0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA30B0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA30B0u) goto L_08AA30B0;
    return;
L_08AA30B0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA3168;
      }
      goto L_08AA30BC;
    }
L_08AA30BC:
    ctx.set_gpr(31, 0x08AA30C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA30C4u) goto L_08AA30C4;
    return;
L_08AA30C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA30D0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA30D0u) goto L_08AA30D0;
    return;
L_08AA30D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA30F4;
      }
      goto L_08AA30D8;
    }
L_08AA30D8:
    ctx.set_gpr(31, 0x08AA30E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA30E0u) goto L_08AA30E0;
    return;
L_08AA30E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA30ECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA30ECu) goto L_08AA30EC;
    return;
L_08AA30EC:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
        goto L_08AA3164;
    }
    goto L_08AA30F4;
L_08AA30F4:
    ctx.set_gpr(31, 0x08AA30FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA30FCu) goto L_08AA30FC;
    return;
L_08AA30FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA3110u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3110u) goto L_08AA3110;
    return;
L_08AA3110:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA3124u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15756), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 920u, 0x08AA74B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3124u) goto L_08AA3124;
    return;
L_08AA3124:
    ctx.set_gpr(31, 0x08AA312Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA312Cu) goto L_08AA312C;
    return;
L_08AA312C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AA3140u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3140u) goto L_08AA3140;
    return;
L_08AA3140:
    ctx.set_gpr(31, 0x08AA3148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3148u) goto L_08AA3148;
    return;
L_08AA3148:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08AA315Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA315Cu) goto L_08AA315C;
    return;
L_08AA315C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15356), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    goto L_08AA3164;
L_08AA3164:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AA3168;
L_08AA3168:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3178:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AA3190u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3190u) goto L_08AA3190;
    return;
L_08AA3190:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA319Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA319Cu) goto L_08AA319C;
    return;
L_08AA319C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AA32C8;
    }
    goto L_08AA31A4;
L_08AA31A4:
    ctx.set_gpr(31, 0x08AA31ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA31ACu) goto L_08AA31AC;
    return;
L_08AA31AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA31C0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA31C0u) goto L_08AA31C0;
    return;
L_08AA31C0:
    ctx.set_gpr(31, 0x08AA31C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA31C8u) goto L_08AA31C8;
    return;
L_08AA31C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(89));
    ctx.set_gpr(31, 0x08AA31DCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA31DCu) goto L_08AA31DC;
    return;
L_08AA31DC:
    ctx.set_gpr(31, 0x08AA31E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA31E4u) goto L_08AA31E4;
    return;
L_08AA31E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(90));
    ctx.set_gpr(31, 0x08AA31F8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA31F8u) goto L_08AA31F8;
    return;
L_08AA31F8:
    ctx.set_gpr(31, 0x08AA3200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA3200u) goto L_08AA3200;
    return;
L_08AA3200:
    ctx.set_gpr(31, 0x08AA3208u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x08AA3208u) goto L_08AA3208;
    return;
L_08AA3208:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15384)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AA326C;
      }
      goto L_08AA3214;
    }
L_08AA3214:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA3218;
L_08AA3218:
    ctx.set_gpr(31, 0x08AA3220u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3220u) goto L_08AA3220;
    return;
L_08AA3220:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08AA3238u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA3238u) goto L_08AA3238;
    return;
L_08AA3238:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15384)));
        goto L_08AA325C;
    }
    goto L_08AA3240;
L_08AA3240:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08AA3258u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA3258u) goto L_08AA3258;
    return;
L_08AA3258:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15384)));
    goto L_08AA325C;
L_08AA325C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA3218;
    }
    goto L_08AA326C;
L_08AA326C:
    ctx.set_gpr(31, 0x08AA3274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AA3274u) goto L_08AA3274;
    return;
L_08AA3274:
    ctx.set_gpr(31, 0x08AA327Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08AA327Cu) goto L_08AA327C;
    return;
L_08AA327C:
    ctx.set_gpr(31, 0x08AA3284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AA3284u) goto L_08AA3284;
    return;
L_08AA3284:
    ctx.set_gpr(31, 0x08AA328Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 505u, 0x08B026F8u>(ctx, &aot_mem) && ctx.pc == 0x08AA328Cu) goto L_08AA328C;
    return;
L_08AA328C:
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15376), 0u);
        goto L_08AA32A8;
    }
    goto L_08AA3294;
L_08AA3294:
    ctx.set_gpr(31, 0x08AA329Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AA329Cu) goto L_08AA329C;
    return;
L_08AA329C:
    ctx.set_gpr(31, 0x08AA32A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AA32A4u) goto L_08AA32A4;
    return;
L_08AA32A4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(15376), 0u);
    goto L_08AA32A8;
L_08AA32A8:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08AA32B4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA32B4u) goto L_08AA32B4;
    return;
L_08AA32B4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA32C4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA32C4u) goto L_08AA32C4;
    return;
L_08AA32C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AA32C8;
L_08AA32C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA32DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AA32EC;
L_08AA32EC:
    ctx.set_gpr(31, 0x08AA32F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA32F4u) goto L_08AA32F4;
    return;
L_08AA32F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(31, 0x08AA3304u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3304u) goto L_08AA3304;
    return;
L_08AA3304:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA32EC;
      }
      goto L_08AA3314;
    }
L_08AA3314:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AA3318;
L_08AA3318:
    ctx.set_gpr(31, 0x08AA3320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3320u) goto L_08AA3320;
    return;
L_08AA3320:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(69));
    ctx.set_gpr(31, 0x08AA3330u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3330u) goto L_08AA3330;
    return;
L_08AA3330:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3318;
      }
      goto L_08AA3340;
    }
L_08AA3340:
    ctx.set_gpr(31, 0x08AA3348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3348u) goto L_08AA3348;
    return;
L_08AA3348:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA3358u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3358u) goto L_08AA3358;
    return;
L_08AA3358:
    ctx.set_gpr(31, 0x08AA3360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3360u) goto L_08AA3360;
    return;
L_08AA3360:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA3370u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3370u) goto L_08AA3370;
    return;
L_08AA3370:
    ctx.set_gpr(31, 0x08AA3378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3378u) goto L_08AA3378;
    return;
L_08AA3378:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA3388u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3388u) goto L_08AA3388;
    return;
L_08AA3388:
    ctx.set_gpr(31, 0x08AA3390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3390u) goto L_08AA3390;
    return;
L_08AA3390:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA33A0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(89));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA33A0u) goto L_08AA33A0;
    return;
L_08AA33A0:
    ctx.set_gpr(31, 0x08AA33A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA33A8u) goto L_08AA33A8;
    return;
L_08AA33A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA33B8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(90));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA33B8u) goto L_08AA33B8;
    return;
L_08AA33B8:
    ctx.set_gpr(31, 0x08AA33C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA33C0u) goto L_08AA33C0;
    return;
L_08AA33C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA33D0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA33D0u) goto L_08AA33D0;
    return;
L_08AA33D0:
    ctx.set_gpr(31, 0x08AA33D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA33D8u) goto L_08AA33D8;
    return;
L_08AA33D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA33E8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA33E8u) goto L_08AA33E8;
    return;
L_08AA33E8:
    ctx.set_gpr(31, 0x08AA33F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA33F0u) goto L_08AA33F0;
    return;
L_08AA33F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA3400u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3400u) goto L_08AA3400;
    return;
L_08AA3400:
    ctx.set_gpr(31, 0x08AA3408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AA3408u) goto L_08AA3408;
    return;
L_08AA3408:
    ctx.set_gpr(31, 0x08AA3410u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA3410u) goto L_08AA3410;
    return;
L_08AA3410:
    ctx.set_gpr(31, 0x08AA3418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3418u) goto L_08AA3418;
    return;
L_08AA3418:
    ctx.set_gpr(31, 0x08AA3420u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA3420u) goto L_08AA3420;
    return;
L_08AA3420:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3430:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AA3468u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA3468u) goto L_08AA3468;
    return;
L_08AA3468:
    ctx.set_gpr(31, 0x08AA3470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3470u) goto L_08AA3470;
    return;
L_08AA3470:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16000u << 16u);
    ctx.set_gpr(31, 0x08AA3480u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1017u, 0x08A7F7C8u>(ctx, &aot_mem) && ctx.pc == 0x08AA3480u) goto L_08AA3480;
    return;
L_08AA3480:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15272), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15280), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15284), ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15324)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AA34E8;
    }
    goto L_08AA349C;
L_08AA349C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AA34D8;
    }
    goto L_08AA34A8;
L_08AA34A8:
    if (ctx.gpr[3] == 0u) {
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
        goto L_08AA34B8;
    }
    goto L_08AA34B0;
L_08AA34B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA34F0;
      }
      goto L_08AA34B8;
    }
L_08AA34B8:
    ctx.set_gpr(31, 0x08AA34C0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AA353C;
L_08AA34C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA34F0;
      }
      goto L_08AA34C8;
    }
L_08AA34C8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15388), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15352), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15356), 0u);
      if (branch_taken) {
          goto L_08AA34F0;
      }
      goto L_08AA34D8;
    }
L_08AA34D8:
    ctx.set_gpr(31, 0x08AA34E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 110u, 0x08AA4610u>(ctx, &aot_mem) && ctx.pc == 0x08AA34E0u) goto L_08AA34E0;
    return;
L_08AA34E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA34F0;
      }
      goto L_08AA34E8;
    }
L_08AA34E8:
    ctx.set_gpr(31, 0x08AA34F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 386u, 0x08AA55C8u>(ctx, &aot_mem) && ctx.pc == 0x08AA34F0u) goto L_08AA34F0;
    return;
L_08AA34F0:
    ctx.set_gpr(31, 0x08AA34F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08AA34F8u) goto L_08AA34F8;
    return;
L_08AA34F8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15280)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15284)));
    ctx.set_gpr(31, 0x08AA3508u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 271u, 0x0885936Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3508u) goto L_08AA3508;
    return;
L_08AA3508:
    ctx.set_gpr(31, 0x08AA3510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3510u) goto L_08AA3510;
    return;
L_08AA3510:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA351Cu);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1017u, 0x08A7F7C8u>(ctx, &aot_mem) && ctx.pc == 0x08AA351Cu) goto L_08AA351C;
    return;
L_08AA351C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA353C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AA3568u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA3568u) goto L_08AA3568;
    return;
L_08AA3568:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15288)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15389)));
        goto L_08AA3594;
    }
    goto L_08AA3574;
L_08AA3574:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    ctx.set_gpr(31, 0x08AA3580u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 580u, 0x08AA629Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3580u) goto L_08AA3580;
    return;
L_08AA3580:
    ctx.set_gpr(31, 0x08AA3588u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 598u, 0x08AA63B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3588u) goto L_08AA3588;
    return;
L_08AA3588:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15332), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15288), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15389)));
    goto L_08AA3594;
L_08AA3594:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15332)));
        goto L_08AA35D4;
    }
    goto L_08AA359C;
L_08AA359C:
    ctx.set_gpr(31, 0x08AA35A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AA35A4u) goto L_08AA35A4;
    return;
L_08AA35A4:
    ctx.set_gpr(31, 0x08AA35ACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA35ACu) goto L_08AA35AC;
    return;
L_08AA35AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AA35C8u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AA35C8u) goto L_08AA35C8;
    return;
L_08AA35C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15332)));
    goto L_08AA35D4;
L_08AA35D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15390)));
        (void)rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 12u, 0x08AA40A0u>(ctx, &aot_mem); return;
    }
    goto L_08AA35E0;
L_08AA35E0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA35F0;
      }
      goto L_08AA35E8;
    }
L_08AA35E8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 109u, 0x08AA45F4u>(ctx, &aot_mem); return;
      }
      goto L_08AA35F0;
    }
L_08AA35F0:
    ctx.set_gpr(31, 0x08AA35F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA35F8u) goto L_08AA35F8;
    return;
L_08AA35F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA3604u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 237u, 0x08A9D8F4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3604u) goto L_08AA3604;
    return;
L_08AA3604:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15390)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA3634;
    }
    goto L_08AA3610;
L_08AA3610:
    ctx.set_gpr(31, 0x08AA3618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AA3618u) goto L_08AA3618;
    return;
L_08AA3618:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08AA3628u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32612)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AA3628u) goto L_08AA3628;
    return;
L_08AA3628:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AA3634;
L_08AA3634:
    ctx.set_gpr(31, 0x08AA363Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA363Cu) goto L_08AA363C;
    return;
L_08AA363C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08AA3654u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA3654u) goto L_08AA3654;
    return;
L_08AA3654:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA36C0;
      }
      goto L_08AA365C;
    }
L_08AA365C:
    ctx.set_gpr(31, 0x08AA3664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3664u) goto L_08AA3664;
    return;
L_08AA3664:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08AA3678u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3678u) goto L_08AA3678;
    return;
L_08AA3678:
    ctx.set_gpr(31, 0x08AA3680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3680u) goto L_08AA3680;
    return;
L_08AA3680:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AA3698u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3698u) goto L_08AA3698;
    return;
L_08AA3698:
    ctx.set_gpr(31, 0x08AA36A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA36A0u) goto L_08AA36A0;
    return;
L_08AA36A0:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA36B8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA36B8u) goto L_08AA36B8;
    return;
L_08AA36B8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AA36E0;
      }
      goto L_08AA36C0;
    }
L_08AA36C0:
    ctx.set_gpr(31, 0x08AA36C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA36C8u) goto L_08AA36C8;
    return;
L_08AA36C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08AA36DCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA36DCu) goto L_08AA36DC;
    return;
L_08AA36DC:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AA36E0;
L_08AA36E0:
    ctx.set_gpr(31, 0x08AA36E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA36E8u) goto L_08AA36E8;
    return;
L_08AA36E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(69));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AA36FCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA36FCu) goto L_08AA36FC;
    return;
L_08AA36FC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA36E0;
      }
      goto L_08AA370C;
    }
L_08AA370C:
    ctx.set_gpr(31, 0x08AA3714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3714u) goto L_08AA3714;
    return;
L_08AA3714:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08AA3728u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3728u) goto L_08AA3728;
    return;
L_08AA3728:
    ctx.set_gpr(31, 0x08AA3730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3730u) goto L_08AA3730;
    return;
L_08AA3730:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16784u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, 17230u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08AA3770u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AA3770u) goto L_08AA3770;
    return;
L_08AA3770:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA3780u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15756), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 920u, 0x08AA74B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3780u) goto L_08AA3780;
    return;
L_08AA3780:
    ctx.set_gpr(31, 0x08AA3788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3788u) goto L_08AA3788;
    return;
L_08AA3788:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AA379Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA379Cu) goto L_08AA379C;
    return;
L_08AA379C:
    ctx.set_gpr(31, 0x08AA37A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA37A4u) goto L_08AA37A4;
    return;
L_08AA37A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08AA37B8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA37B8u) goto L_08AA37B8;
    return;
L_08AA37B8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15384)));
    ctx.set_gpr(31, 0x08AA37C4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 580u, 0x08AA629Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA37C4u) goto L_08AA37C4;
    return;
L_08AA37C4:
    ctx.set_gpr(31, 0x08AA37CCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 598u, 0x08AA63B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA37CCu) goto L_08AA37CC;
    return;
L_08AA37CC:
    ctx.set_gpr(31, 0x08AA37D4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA37D4u) goto L_08AA37D4;
    return;
L_08AA37D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA37E0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA37E0u) goto L_08AA37E0;
    return;
L_08AA37E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA3894;
    }
    goto L_08AA37EC;
L_08AA37EC:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(34));
    goto L_08AA37F8;
L_08AA37F8:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA3808u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA3808u) goto L_08AA3808;
    return;
L_08AA3808:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AA384C;
    }
    goto L_08AA3818;
L_08AA3818:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA3830u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA3830u) goto L_08AA3830;
    return;
L_08AA3830:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(213));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA3848u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA3848u) goto L_08AA3848;
    return;
L_08AA3848:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AA384C;
L_08AA384C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA3860u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA3860u) goto L_08AA3860;
    return;
L_08AA3860:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA3878u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA3878u) goto L_08AA3878;
    return;
L_08AA3878:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA37F8;
      }
      goto L_08AA388C;
    }
L_08AA388C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16256u << 16u);
      if (branch_taken) {
          goto L_08AA3AD4;
      }
      goto L_08AA3894;
    }
L_08AA3894:
    ctx.set_gpr(31, 0x08AA389Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA389Cu) goto L_08AA389C;
    return;
L_08AA389C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA38A8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA38A8u) goto L_08AA38A8;
    return;
L_08AA38A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA39B8;
    }
    goto L_08AA38B4;
L_08AA38B4:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(34));
    goto L_08AA38C0;
L_08AA38C0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA38D0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA38D0u) goto L_08AA38D0;
    return;
L_08AA38D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AA3914;
    }
    goto L_08AA38E0;
L_08AA38E0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA38F8u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA38F8u) goto L_08AA38F8;
    return;
L_08AA38F8:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(213));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA3910u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA3910u) goto L_08AA3910;
    return;
L_08AA3910:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AA3914;
L_08AA3914:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA3928u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA3928u) goto L_08AA3928;
    return;
L_08AA3928:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA3940u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA3940u) goto L_08AA3940;
    return;
L_08AA3940:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA38C0;
      }
      goto L_08AA3954;
    }
L_08AA3954:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(256));
    goto L_08AA395C;
L_08AA395C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA396Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA396Cu) goto L_08AA396C;
    return;
L_08AA396C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA3988u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA3988u) goto L_08AA3988;
    return;
L_08AA3988:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA39A0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA39A0u) goto L_08AA39A0;
    return;
L_08AA39A0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA395C;
      }
      goto L_08AA39B0;
    }
L_08AA39B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3AD0;
      }
      goto L_08AA39B8;
    }
L_08AA39B8:
    ctx.set_gpr(31, 0x08AA39C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA39C0u) goto L_08AA39C0;
    return;
L_08AA39C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA39CCu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA39CCu) goto L_08AA39CC;
    return;
L_08AA39CC:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AA3AD0;
      }
      goto L_08AA39D8;
    }
L_08AA39D8:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(34));
    goto L_08AA39E0;
L_08AA39E0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA39F0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA39F0u) goto L_08AA39F0;
    return;
L_08AA39F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AA3A34;
    }
    goto L_08AA3A00;
L_08AA3A00:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA3A18u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA3A18u) goto L_08AA3A18;
    return;
L_08AA3A18:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(213));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA3A30u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA3A30u) goto L_08AA3A30;
    return;
L_08AA3A30:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AA3A34;
L_08AA3A34:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA3A48u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA3A48u) goto L_08AA3A48;
    return;
L_08AA3A48:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA3A60u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA3A60u) goto L_08AA3A60;
    return;
L_08AA3A60:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA39E0;
      }
      goto L_08AA3A74;
    }
L_08AA3A74:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(182));
    goto L_08AA3A7C;
L_08AA3A7C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA3A8Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA3A8Cu) goto L_08AA3A8C;
    return;
L_08AA3A8C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA3AA8u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA3AA8u) goto L_08AA3AA8;
    return;
L_08AA3AA8:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(31, 0x08AA3AC0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA3AC0u) goto L_08AA3AC0;
    return;
L_08AA3AC0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08AA3A7C;
      }
      goto L_08AA3AD0;
    }
L_08AA3AD0:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AA3AD4;
L_08AA3AD4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AA3AE8u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AA3AE8u) goto L_08AA3AE8;
    return;
L_08AA3AE8:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA3AF8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AA3AF8u) goto L_08AA3AF8;
    return;
L_08AA3AF8:
    ctx.set_gpr(31, 0x08AA3B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3B00u) goto L_08AA3B00;
    return;
L_08AA3B00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA3B0Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3B0Cu) goto L_08AA3B0C;
    return;
L_08AA3B0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3B74;
      }
      goto L_08AA3B14;
    }
L_08AA3B14:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15764), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
        goto L_08AA3B30;
    }
    goto L_08AA3B24;
L_08AA3B24:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15764), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    goto L_08AA3B30;
L_08AA3B30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3B3C;
      }
      goto L_08AA3B38;
    }
L_08AA3B38:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_08AA3B3C;
L_08AA3B3C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15360), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA3D2C;
      }
      goto L_08AA3B44;
    }
L_08AA3B44:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15764)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3D2C;
      }
      goto L_08AA3B50;
    }
L_08AA3B50:
    ctx.set_gpr(31, 0x08AA3B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3B58u) goto L_08AA3B58;
    return;
L_08AA3B58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA3B6Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3B6Cu) goto L_08AA3B6C;
    return;
L_08AA3B6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3D2C;
      }
      goto L_08AA3B74;
    }
L_08AA3B74:
    ctx.set_gpr(31, 0x08AA3B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3B7Cu) goto L_08AA3B7C;
    return;
L_08AA3B7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA3B88u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3B88u) goto L_08AA3B88;
    return;
L_08AA3B88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3D2C;
      }
      goto L_08AA3B90;
    }
L_08AA3B90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA3BA4;
    }
    goto L_08AA3B9C;
L_08AA3B9C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15764), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AA3BA4;
L_08AA3BA4:
    ctx.set_gpr(31, 0x08AA3BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3BACu) goto L_08AA3BAC;
    return;
L_08AA3BAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA3BB8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA3BB8u) goto L_08AA3BB8;
    return;
L_08AA3BB8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA3C28;
    }
    goto L_08AA3BC4;
L_08AA3BC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA3BD8;
      }
      goto L_08AA3BD4;
    }
L_08AA3BD4:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08AA3BD8;
L_08AA3BD8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15360), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AA3C0C;
      }
      goto L_08AA3BE4;
    }
L_08AA3BE4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15764)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
        goto L_08AA3C10;
    }
    goto L_08AA3BF0;
L_08AA3BF0:
    ctx.set_gpr(31, 0x08AA3BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3BF8u) goto L_08AA3BF8;
    return;
L_08AA3BF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA3C0Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3C0Cu) goto L_08AA3C0C;
    return;
L_08AA3C0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    goto L_08AA3C10;
L_08AA3C10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA3D2C;
      }
      goto L_08AA3C1C;
    }
L_08AA3C1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15764), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AA3D2C;
      }
      goto L_08AA3C28;
    }
L_08AA3C28:
    ctx.set_gpr(31, 0x08AA3C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3C30u) goto L_08AA3C30;
    return;
L_08AA3C30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA3C3Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA3C3Cu) goto L_08AA3C3C;
    return;
L_08AA3C3C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA3CAC;
    }
    goto L_08AA3C48;
L_08AA3C48:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA3C5C;
      }
      goto L_08AA3C58;
    }
L_08AA3C58:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08AA3C5C;
L_08AA3C5C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15360), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AA3C90;
      }
      goto L_08AA3C68;
    }
L_08AA3C68:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15764)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
        goto L_08AA3C94;
    }
    goto L_08AA3C74;
L_08AA3C74:
    ctx.set_gpr(31, 0x08AA3C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3C7Cu) goto L_08AA3C7C;
    return;
L_08AA3C7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA3C90u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3C90u) goto L_08AA3C90;
    return;
L_08AA3C90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    goto L_08AA3C94;
L_08AA3C94:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA3D2C;
      }
      goto L_08AA3CA0;
    }
L_08AA3CA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15764), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AA3D2C;
      }
      goto L_08AA3CAC;
    }
L_08AA3CAC:
    ctx.set_gpr(31, 0x08AA3CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3CB4u) goto L_08AA3CB4;
    return;
L_08AA3CB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AA3CC0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AA3CC0u) goto L_08AA3CC0;
    return;
L_08AA3CC0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AA3D2C;
      }
      goto L_08AA3CCC;
    }
L_08AA3CCC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA3CE0;
      }
      goto L_08AA3CDC;
    }
L_08AA3CDC:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08AA3CE0;
L_08AA3CE0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15360), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AA3D14;
      }
      goto L_08AA3CEC;
    }
L_08AA3CEC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15764)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
        goto L_08AA3D18;
    }
    goto L_08AA3CF8;
L_08AA3CF8:
    ctx.set_gpr(31, 0x08AA3D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3D00u) goto L_08AA3D00;
    return;
L_08AA3D00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA3D14u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3D14u) goto L_08AA3D14;
    return;
L_08AA3D14:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    goto L_08AA3D18;
L_08AA3D18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA3D2C;
      }
      goto L_08AA3D24;
    }
L_08AA3D24:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15764), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AA3D2C;
L_08AA3D2C:
    ctx.set_gpr(31, 0x08AA3D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3D34u) goto L_08AA3D34;
    return;
L_08AA3D34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA3D40u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA3D40u) goto L_08AA3D40;
    return;
L_08AA3D40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3E5C;
      }
      goto L_08AA3D48;
    }
L_08AA3D48:
    ctx.set_gpr(31, 0x08AA3D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3D50u) goto L_08AA3D50;
    return;
L_08AA3D50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AA3D68u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3D68u) goto L_08AA3D68;
    return;
L_08AA3D68:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AA3D78u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15756), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 920u, 0x08AA74B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3D78u) goto L_08AA3D78;
    return;
L_08AA3D78:
    ctx.set_gpr(31, 0x08AA3D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3D80u) goto L_08AA3D80;
    return;
L_08AA3D80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AA3D94u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3D94u) goto L_08AA3D94;
    return;
L_08AA3D94:
    ctx.set_gpr(31, 0x08AA3D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3D9Cu) goto L_08AA3D9C;
    return;
L_08AA3D9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08AA3DB0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3DB0u) goto L_08AA3DB0;
    return;
L_08AA3DB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15308), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.set_gpr(31, 0x08AA3DC4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3DC4u) goto L_08AA3DC4;
    return;
L_08AA3DC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08AA3DDCu);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AA3DDCu) goto L_08AA3DDC;
    return;
L_08AA3DDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3E1C;
      }
      goto L_08AA3DE4;
    }
L_08AA3DE4:
    ctx.set_gpr(31, 0x08AA3DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3DECu) goto L_08AA3DEC;
    return;
L_08AA3DEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA3E00u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3E00u) goto L_08AA3E00;
    return;
L_08AA3E00:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AA3E14u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 647u, 0x08AA6690u>(ctx, &aot_mem) && ctx.pc == 0x08AA3E14u) goto L_08AA3E14;
    return;
L_08AA3E14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 108u, 0x08AA45F0u>(ctx, &aot_mem); return;
      }
      goto L_08AA3E1C;
    }
L_08AA3E1C:
    ctx.set_gpr(31, 0x08AA3E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3E24u) goto L_08AA3E24;
    return;
L_08AA3E24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA3E38u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3E38u) goto L_08AA3E38;
    return;
L_08AA3E38:
    ctx.set_gpr(31, 0x08AA3E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3E40u) goto L_08AA3E40;
    return;
L_08AA3E40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08AA3E54u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3E54u) goto L_08AA3E54;
    return;
L_08AA3E54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 108u, 0x08AA45F0u>(ctx, &aot_mem); return;
      }
      goto L_08AA3E5C;
    }
L_08AA3E5C:
    ctx.set_gpr(31, 0x08AA3E64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3E64u) goto L_08AA3E64;
    return;
L_08AA3E64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA3E70u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA3E70u) goto L_08AA3E70;
    return;
L_08AA3E70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3EF8;
      }
      goto L_08AA3E78;
    }
L_08AA3E78:
    ctx.set_gpr(31, 0x08AA3E80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3E80u) goto L_08AA3E80;
    return;
L_08AA3E80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA3E94u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3E94u) goto L_08AA3E94;
    return;
L_08AA3E94:
    ctx.set_gpr(31, 0x08AA3E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3E9Cu) goto L_08AA3E9C;
    return;
L_08AA3E9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08AA3EB0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3EB0u) goto L_08AA3EB0;
    return;
L_08AA3EB0:
    ctx.set_gpr(31, 0x08AA3EB8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3EB8u) goto L_08AA3EB8;
    return;
L_08AA3EB8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15364), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15308), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15360)));
    ctx.set_gpr(31, 0x08AA3ED0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3ED0u) goto L_08AA3ED0;
    return;
L_08AA3ED0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15376), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AA3EE8u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15391), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3EE8u) goto L_08AA3EE8;
    return;
L_08AA3EE8:
    ctx.set_gpr(31, 0x08AA3EF0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AA3EF0u) goto L_08AA3EF0;
    return;
L_08AA3EF0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 109u, 0x08AA45F4u>(ctx, &aot_mem); return;
      }
      goto L_08AA3EF8;
    }
L_08AA3EF8:
    ctx.set_gpr(31, 0x08AA3F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3F00u) goto L_08AA3F00;
    return;
L_08AA3F00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA3F0Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA3F0Cu) goto L_08AA3F0C;
    return;
L_08AA3F0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3F94;
      }
      goto L_08AA3F14;
    }
L_08AA3F14:
    ctx.set_gpr(31, 0x08AA3F1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3F1Cu) goto L_08AA3F1C;
    return;
L_08AA3F1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA3F30u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3F30u) goto L_08AA3F30;
    return;
L_08AA3F30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15332)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15332), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AA3F4Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15756), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 920u, 0x08AA74B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3F4Cu) goto L_08AA3F4C;
    return;
L_08AA3F4C:
    ctx.set_gpr(31, 0x08AA3F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3F54u) goto L_08AA3F54;
    return;
L_08AA3F54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AA3F68u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3F68u) goto L_08AA3F68;
    return;
L_08AA3F68:
    ctx.set_gpr(31, 0x08AA3F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3F70u) goto L_08AA3F70;
    return;
L_08AA3F70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08AA3F84u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3F84u) goto L_08AA3F84;
    return;
L_08AA3F84:
    ctx.set_gpr(31, 0x08AA3F8Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 633u, 0x08AA65B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3F8Cu) goto L_08AA3F8C;
    return;
L_08AA3F8C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 108u, 0x08AA45F0u>(ctx, &aot_mem); return;
      }
      goto L_08AA3F94;
    }
L_08AA3F94:
    ctx.set_gpr(31, 0x08AA3F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3F9Cu) goto L_08AA3F9C;
    return;
L_08AA3F9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AA3FA8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AA3FA8u) goto L_08AA3FA8;
    return;
L_08AA3FA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 108u, 0x08AA45F0u>(ctx, &aot_mem); return;
      }
      goto L_08AA3FB0;
    }
L_08AA3FB0:
    ctx.set_gpr(31, 0x08AA3FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3FB8u) goto L_08AA3FB8;
    return;
L_08AA3FB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AA3FCCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3FCCu) goto L_08AA3FCC;
    return;
L_08AA3FCC:
    ctx.set_gpr(31, 0x08AA3FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3FD4u) goto L_08AA3FD4;
    return;
L_08AA3FD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08AA3FE8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3FE8u) goto L_08AA3FE8;
    return;
L_08AA3FE8:
    ctx.set_gpr(31, 0x08AA3FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3FF0u) goto L_08AA3FF0;
    return;
L_08AA3FF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08AA4004u);
    ctx.set_gpr(7, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0167(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0167_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_167(Runtime &runtime) {
    runtime.register_generated_unit(167u, 0x08AA0000u, 16384u, &recomp_unit_0167, &recomp_unit_0167_entry);
    runtime.register_function(0x08AA0000u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0008u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0010u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0028u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0030u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0048u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0050u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0064u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA006Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0074u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA007Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0094u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA009Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0118u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0120u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0128u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0140u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0148u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA016Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0174u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0198u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA023Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0244u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0284u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0298u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA032Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0334u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0354u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA035Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0390u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0398u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0430u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0438u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA046Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0474u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0508u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0510u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA053Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0544u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0570u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0574u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA057Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0590u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0608u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0610u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0624u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA063Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0678u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0690u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA069Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0740u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA074Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0754u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0768u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0770u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0784u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA078Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0808u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0810u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0818u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA081Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0824u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA082Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0834u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0840u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0848u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0858u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0868u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0874u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA087Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0884u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0890u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0894u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA089Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0900u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA090Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0914u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA091Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0924u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA092Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0930u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0944u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA094Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0954u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0974u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA097Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0990u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0998u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0ACCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AD8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BD8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CD8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D20u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DCCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0EACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0ED0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0EDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0EE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0EF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0EF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1000u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA100Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA101Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1024u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA102Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA105Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1064u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA106Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1074u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA107Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1104u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1124u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA112Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1134u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1144u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA114Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1160u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1168u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1170u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1190u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1194u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1200u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1204u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA120Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1218u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1220u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA122Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1234u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1240u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1248u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1250u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1254u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1260u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1268u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1270u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1284u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA128Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1304u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA130Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1314u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA131Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1340u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1344u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA134Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1354u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA135Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1368u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1370u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1390u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA139Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1404u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA140Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1420u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1428u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1430u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1450u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1458u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1464u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA146Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA147Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1484u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1508u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1510u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA151Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1524u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1530u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1538u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1548u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1550u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1570u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1578u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1580u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA158Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1594u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1598u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1604u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA160Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1620u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1634u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1640u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1644u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1648u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1654u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1678u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1680u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1688u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1700u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1708u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1714u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA171Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1724u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1738u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA174Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1758u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA175Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1760u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA176Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1788u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1790u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA179Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1804u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA180Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1814u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA181Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA182Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1834u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1840u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1848u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1850u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1864u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1874u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1880u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1884u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1894u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1900u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1908u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1910u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1924u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1934u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1940u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1944u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1954u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1960u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1978u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1980u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1988u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1990u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1998u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA19A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA19ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA19B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA19C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA19D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA19DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA19E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA19FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A20u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1ABCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1ADCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CCCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D20u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1DA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1DB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1DBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1DC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1DCCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1DD8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1DE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1ED0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1FA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1FB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1FBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1FC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1FD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1FDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1FECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1FF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2000u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2008u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2014u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA201Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2024u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2034u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA203Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2044u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2050u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2060u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA206Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2078u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA207Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA208Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2108u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2110u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2118u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2120u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA212Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2134u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2164u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA216Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA217Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2188u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2190u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA221Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2224u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2234u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2254u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA225Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA226Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA228Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2294u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2308u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2310u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA231Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2328u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2330u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2340u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA234Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2354u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA235Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2368u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2370u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2378u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2388u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2390u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2398u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA240Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2414u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2420u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2424u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA242Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2444u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA244Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2454u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2460u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2468u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2478u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2480u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2488u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2494u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA250Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2514u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2530u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA253Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2544u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2564u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA256Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2580u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2588u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2608u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2610u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2618u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2620u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2624u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2630u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2640u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA264Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2658u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2664u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2668u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2688u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2694u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA269Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2700u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2724u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2728u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2734u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA273Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2744u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2750u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2758u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2760u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA276Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2774u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2778u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA278Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2794u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2808u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2810u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2818u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2820u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2824u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2830u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2840u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA284Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2858u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2864u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2868u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2888u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2894u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA289Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2900u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2924u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2928u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2934u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2944u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA294Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2958u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA295Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2978u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2998u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CCCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DD8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2ECCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FD8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3008u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3010u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA301Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3024u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA302Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3038u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3040u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3048u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA305Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3064u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA306Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3074u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA307Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3084u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA308Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3094u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3098u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3110u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3124u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA312Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3140u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3148u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA315Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3164u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3168u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3178u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3190u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA319Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3200u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3208u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3214u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3218u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3220u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3238u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3240u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3258u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA325Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA326Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3274u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA327Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3284u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA328Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3294u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA329Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3304u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3314u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3318u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3320u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3330u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3340u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3348u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3358u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3360u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3370u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3378u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3388u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3390u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3400u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3408u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3410u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3418u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3420u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3430u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3468u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3470u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3480u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA349Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3508u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3510u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA351Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA353Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3568u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3574u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3580u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3588u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3594u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA359Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3604u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3610u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3618u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3628u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3634u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA363Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3654u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA365Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3664u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3678u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3680u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3698u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA370Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3714u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3728u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3730u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3770u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3780u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3788u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA379Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3808u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3818u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3830u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3848u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA384Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3860u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3878u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA388Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3894u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA389Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3910u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3914u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3928u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3940u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3954u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA395Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA396Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3988u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3AA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3AC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3AD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3AD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3AE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3AF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BD8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CCCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3ED0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FCCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FF0u, &recomp_unit_0167, "recomp_unit_0167");
}
} // namespace psprecomp
