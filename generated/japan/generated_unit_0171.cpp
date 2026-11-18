#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0171[3976] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 9,
    0, 10, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 18, 19, 0, 20, 0, 21, 0,
    0, 22, 0, 0, 23, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0,
    30, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 38, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 45, 0, 0, 46, 0, 47,
    0, 48, 0, 49, 0, 50, 51, 0, 52, 0, 53, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60,
    0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 74,
    0, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 85, 0, 0, 0, 86, 0, 87, 0, 0, 88, 0, 0,
    0, 89, 0, 0, 0, 90, 0, 91, 92, 0, 0, 93, 0, 94, 0, 95, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98,
    99, 0, 0, 100, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 107, 0, 0, 108, 0, 109, 0, 110,
    0, 0, 0, 111, 112, 113, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 121,
    0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 128, 129, 0, 0, 0, 0, 130, 0, 131, 0,
    0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 136, 0, 137, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0,
    154, 0, 155, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0,
    0, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 172, 0, 173, 0, 174, 0, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179,
    0, 180, 0, 181, 0, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 0, 186, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 194,
    0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 203, 0, 0, 204, 205, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 210, 0, 211, 0, 212,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 220,
    221, 0, 222, 0, 0, 223, 0, 224, 225, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 231, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 238, 0, 239, 0, 0,
    240, 241, 0, 242, 0, 0, 0, 0, 243, 0, 0, 244, 245, 0, 246, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 249, 250, 0, 251, 0, 0, 0, 0, 0, 252, 253, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 256, 257, 0, 0, 0,
    258, 0, 259, 0, 260, 0, 0, 261, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 269, 270, 0, 0, 271, 0, 0, 0, 272, 0, 273, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 278, 279, 0, 0, 280, 0, 0, 0, 281, 0, 282, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 289, 0, 290, 0, 0, 291, 0, 292, 0,
    293, 0, 294, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 298, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301,
    0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 312, 0, 0, 313, 0, 314, 0, 0, 0, 315,
    316, 0, 317, 0, 318, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 326, 0, 327, 0, 328, 0, 0, 329, 0, 330, 0,
    331, 0, 332, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0,
    338, 0, 0, 0, 339, 0, 0, 340, 341, 0, 342, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 347, 0,
    348, 349, 0, 350, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 355, 0, 356, 357, 0,
    358, 0, 0, 0, 359, 0, 360, 0, 361, 0, 362, 363, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0,
    0, 0, 0, 367, 0, 368, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 373, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 378, 0, 0, 0, 379, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 383,
    0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 386, 387, 0, 388, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 0,
    393, 0, 0, 0, 394, 395, 0, 0, 396, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 401, 0, 0,
    0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 406, 0, 0, 407, 0, 408, 0, 0, 409, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 411, 412, 0, 0, 413, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 417, 418, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0,
    0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0,
    0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 429, 0, 430, 0, 431, 0, 432, 433, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0,
    435, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 439, 440, 441, 0, 0, 442, 0, 443, 0, 444, 445, 446, 0, 0, 0, 0, 447,
    0, 0, 0, 0, 0, 0, 0, 448, 0, 449, 0, 450, 0, 451, 0, 452, 0, 453, 0, 0, 0, 0, 454, 0, 0, 455, 0, 456, 0, 457, 0, 458,
    0, 459, 0, 0, 0, 460, 0, 0, 461, 0, 462, 0, 0, 463, 0, 464, 0, 0, 0, 465, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 471, 0, 472, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 476, 477, 0, 478, 0, 479, 0, 0, 480, 481, 482,
    483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0,
    490, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 493, 0, 494, 0, 0, 0, 0, 495, 0, 0, 496, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0,
    0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 503, 0, 504,
    505, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 510, 0, 0, 0, 511, 0, 512, 513, 514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 518, 0, 519,
    0, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0,
    527, 0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0,
    534, 0, 535, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 539, 0, 0, 0, 0, 540, 0, 0, 541, 542, 0, 0, 0, 543, 0, 0, 0,
    0, 0, 0, 544, 0, 545, 0, 546, 0, 0, 547, 0, 548, 0, 0, 0, 0, 549, 0, 550, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0,
    554, 0, 0, 0, 0, 555, 0, 0, 556, 557, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0, 561, 0, 0, 562, 0, 563, 0, 0,
    0, 0, 564, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 567, 568, 0, 569, 570, 0, 571, 0, 0, 0, 0, 0, 572, 0, 573, 0, 574, 0,
    575, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 579, 580, 0, 0, 581, 0, 582, 0, 0, 0, 583, 584, 0, 585, 0, 0, 586,
    587, 0, 0, 0, 0, 588, 0, 589, 0, 590, 591, 0, 592, 0, 0, 0, 0, 0, 593, 0, 594, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 0,
    0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 600, 0, 601, 0, 602, 0, 0, 0, 0, 0, 603, 0,
    0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 606, 0, 607, 608, 0, 0, 0, 609, 0, 0, 0, 0,
    0, 610, 0, 0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 614, 0, 615, 0, 0, 616, 617, 0, 0, 618, 0, 0, 619, 0, 620, 0, 0,
    0, 0, 0, 0, 621, 0, 622, 0, 623, 0, 0, 624, 0, 625, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0,
    628, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 0, 632, 0, 633, 0, 634, 0, 635, 0, 636, 0, 637, 0, 638, 0, 0,
    0, 639, 0, 640, 0, 641, 0, 0, 0, 642, 0, 0, 0, 0, 643, 0, 0, 0, 644, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0,
    0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 0,
    0, 0, 652, 0, 0, 653, 0, 654, 0, 655, 0, 656, 0, 657, 0, 658, 0, 659, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0,
    0, 663, 0, 0, 0, 0, 664, 665, 0, 666, 0, 0, 667, 0, 0, 668, 0, 669, 0, 670, 0, 671, 0, 672, 673, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 676, 0, 0, 677, 0, 0, 678, 0, 0, 0, 679, 680, 0, 0, 0, 0, 681, 0, 0,
    0, 0, 0, 0, 682, 0, 683, 0, 0, 684, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 688,
    0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 691, 692, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 694,
    0, 695, 0, 696, 0, 0, 0, 0, 697, 698, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 702, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 704, 705, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 708, 0, 709,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 0, 0, 712, 0, 0, 0, 713, 714, 0, 0, 0, 0, 0, 0, 715, 0,
    0, 0, 0, 0, 0, 0, 716, 0, 717, 0, 0, 0, 0, 0, 718, 0, 719, 0, 720, 0, 0, 721, 0, 722, 0, 723, 0, 724, 0, 725, 0, 726,
    0, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 729, 0, 730, 0, 0, 0, 0, 731, 0, 732, 0, 0, 0, 0, 0, 733,
    0, 0, 0, 734, 0, 735, 0, 0, 736, 0, 0, 0, 737, 0, 738, 0, 0, 739, 0, 740, 0, 741, 0, 742, 0, 0, 0, 743, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 745, 0, 746, 0, 747, 0, 748, 0, 0, 0, 0, 0, 749, 0, 0, 750, 0, 751, 0, 752,
    0, 0, 753, 0, 754, 0, 0, 755, 0, 0, 756, 0, 0, 757, 0, 0, 758, 0, 759, 0, 760, 0, 761, 0, 762, 763, 0, 764, 0, 0, 0, 0,
    0, 765, 0, 766, 0, 767, 768, 0, 769, 0, 0, 770, 0, 771, 0, 772, 0, 773, 0, 774, 0, 775, 0, 0, 0, 776, 0, 0, 777, 0, 0, 0,
    0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 780, 0, 781, 0, 782, 0, 783, 0, 0, 0, 0,
    784, 0, 0, 785, 0, 786, 0, 787, 0, 0, 788, 0, 789, 0, 0, 790, 0, 0, 791, 0, 0, 792, 0, 0, 793, 0, 794, 0, 795, 0, 796, 0,
    797, 798, 0, 799, 0, 0, 0, 0, 0, 800, 0, 801, 0, 802, 803, 0, 804, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 806, 0,
    807, 0, 808, 0, 0, 0, 809, 0, 810, 0, 0, 811, 812, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 814, 0, 815, 0, 0, 0, 0, 816, 0,
    0, 0, 817, 0, 818, 0, 0, 0, 819, 0, 820, 0, 821, 822, 0, 0, 0, 0, 823, 0, 824, 0, 0, 0, 0, 0, 825, 0, 826, 0, 827, 0,
    0, 828, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0, 830, 0, 831, 0, 0, 0, 832, 0, 0, 0, 0, 833, 0, 0, 834, 0, 835, 0, 836,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 837, 0, 0, 838, 839, 840, 841, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 843,
    0, 0, 0, 844, 0, 0, 0, 0, 0, 845, 0, 0, 0, 846, 0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0, 0, 849, 0, 850,
    851, 0, 0, 852, 0, 853, 0, 0, 854, 0, 0, 855, 0, 856, 0, 0, 857, 0, 0, 858, 0, 0, 0, 859, 0, 860, 861, 0, 0, 862, 0, 863,
    0, 0, 0, 864, 0, 865, 0, 866, 0, 0, 0, 867, 0, 868, 0, 869, 0, 870, 0, 871, 0, 872, 0, 0, 0, 873, 874, 0, 0, 0, 0, 0,
    875, 0, 876, 0, 0, 0, 0, 0, 0, 0, 877, 0, 878, 0, 0, 0, 0, 0, 0, 0, 0, 0, 879, 0, 880, 0, 0, 881, 0, 882, 0, 883,
    0, 884, 0, 0, 0, 0, 0, 885, 886, 0, 0, 0, 0, 0, 0, 0, 0, 887, 0, 0, 0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0, 889,
    0, 890, 0, 891, 0, 892, 0, 893, 0, 0, 0, 0, 0, 0, 0, 894, 895, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 896, 0,
    0, 0, 0, 0, 0, 897, 0, 0, 0, 0, 898, 0, 0, 0, 0, 899, 0, 0, 0, 900, 0, 0, 901, 0, 0, 0, 0, 0, 902, 0, 0, 0,
    0, 0, 0, 903, 904, 0, 0, 905, 0, 0, 0, 906, 907, 0, 908, 909, 0, 910, 0, 0, 0, 911, 0, 0, 0, 0, 0, 0, 0, 0, 0, 912,
    0, 0, 0, 913, 0, 914, 0, 915, 0, 916, 0, 0, 0, 917, 0, 0, 0, 918, 919, 0, 0, 0, 920, 0, 0, 0, 921, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 922, 0, 923, 0, 924, 0, 0, 925, 0, 926, 927, 0, 0, 928, 0, 0, 929, 0, 930, 0, 0, 0, 931, 0, 932, 0, 0, 933,
    934, 0, 0, 0, 0, 0, 0, 0, 935, 0, 0, 0, 936, 0, 0, 0, 0, 0, 0, 0, 0, 937, 0, 0, 0, 0, 0, 0, 0, 0, 0, 938,
    0, 0, 0, 0, 0, 939, 0, 0, 0, 0, 940, 0, 0, 0, 941, 0, 0, 942, 0, 0, 943, 0, 944, 0, 945, 0, 946, 0, 947, 0, 948, 0,
    949, 0, 950, 951, 0, 0, 952, 0, 0, 0, 0, 0, 0, 0, 0, 953, 0, 0, 0, 0, 0, 954, 0, 0, 0, 0, 955, 0, 0, 0, 956, 0,
    0, 957, 0, 0, 958, 0, 959, 0, 960, 0, 961, 0, 962, 0, 963, 0, 964, 0, 965, 966, 0, 0, 967, 0, 0, 0, 0, 968, 0, 969, 0, 970,
    0, 971, 972, 0, 973, 0, 0, 0, 0, 0, 0, 0, 0, 974, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 975, 0, 0, 0, 0, 976, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 977, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 978, 0, 0, 0, 0, 0, 0, 979, 0,
    0, 0, 0, 0, 980, 0, 0, 0, 0, 0, 0, 981, 0, 0, 0, 0, 0, 982, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 983, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 984, 0, 0, 0, 0, 985, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 986, 0, 987, 0,
    0, 0, 988, 0, 0, 989, 0, 0, 0, 0, 0, 0, 0, 990, 0, 0, 0, 991, 0, 992, 0, 0, 0, 0, 0, 0, 0, 0, 993, 0, 0, 0,
    0, 0, 0, 0, 0, 994, 0, 995,
};
void recomp_unit_0171_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AB0000u;
        entry_id = (entry_delta < 15904u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0171[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AB0000;
    case 2u: goto L_08AB0008;
    case 3u: goto L_08AB001C;
    case 4u: goto L_08AB0044;
    case 5u: goto L_08AB004C;
    case 6u: goto L_08AB005C;
    case 7u: goto L_08AB006C;
    case 8u: goto L_08AB0074;
    case 9u: goto L_08AB007C;
    case 10u: goto L_08AB0084;
    case 11u: goto L_08AB0094;
    case 12u: goto L_08AB009C;
    case 13u: goto L_08AB00A8;
    case 14u: goto L_08AB00B8;
    case 15u: goto L_08AB00C0;
    case 16u: goto L_08AB00D4;
    case 17u: goto L_08AB00DC;
    case 18u: goto L_08AB00E4;
    case 19u: goto L_08AB00E8;
    case 20u: goto L_08AB00F0;
    case 21u: goto L_08AB00F8;
    case 22u: goto L_08AB0104;
    case 23u: goto L_08AB0110;
    case 24u: goto L_08AB011C;
    case 25u: goto L_08AB0124;
    case 26u: goto L_08AB012C;
    case 27u: goto L_08AB0148;
    case 28u: goto L_08AB0164;
    case 29u: goto L_08AB0174;
    case 30u: goto L_08AB0180;
    case 31u: goto L_08AB018C;
    case 32u: goto L_08AB0194;
    case 33u: goto L_08AB01AC;
    case 34u: goto L_08AB01C8;
    case 35u: goto L_08AB01D8;
    case 36u: goto L_08AB01E4;
    case 37u: goto L_08AB01F0;
    case 38u: goto L_08AB01F8;
    case 39u: goto L_08AB0210;
    case 40u: goto L_08AB0234;
    case 41u: goto L_08AB023C;
    case 42u: goto L_08AB0244;
    case 43u: goto L_08AB0254;
    case 44u: goto L_08AB025C;
    case 45u: goto L_08AB0268;
    case 46u: goto L_08AB0274;
    case 47u: goto L_08AB027C;
    case 48u: goto L_08AB0284;
    case 49u: goto L_08AB028C;
    case 50u: goto L_08AB0294;
    case 51u: goto L_08AB0298;
    case 52u: goto L_08AB02A0;
    case 53u: goto L_08AB02A8;
    case 54u: goto L_08AB02B4;
    case 55u: goto L_08AB02BC;
    case 56u: goto L_08AB02C4;
    case 57u: goto L_08AB02CC;
    case 58u: goto L_08AB02D4;
    case 59u: goto L_08AB02E0;
    case 60u: goto L_08AB02FC;
    case 61u: goto L_08AB0304;
    case 62u: goto L_08AB0324;
    case 63u: goto L_08AB0330;
    case 64u: goto L_08AB033C;
    case 65u: goto L_08AB0344;
    case 66u: goto L_08AB0350;
    case 67u: goto L_08AB0364;
    case 68u: goto L_08AB0380;
    case 69u: goto L_08AB03C0;
    case 70u: goto L_08AB03CC;
    case 71u: goto L_08AB03D8;
    case 72u: goto L_08AB03EC;
    case 73u: goto L_08AB03F4;
    case 74u: goto L_08AB03FC;
    case 75u: goto L_08AB040C;
    case 76u: goto L_08AB0414;
    case 77u: goto L_08AB0424;
    case 78u: goto L_08AB0440;
    case 79u: goto L_08AB0480;
    case 80u: goto L_08AB048C;
    case 81u: goto L_08AB0498;
    case 82u: goto L_08AB04B4;
    case 83u: goto L_08AB04C0;
    case 84u: goto L_08AB04C8;
    case 85u: goto L_08AB04D0;
    case 86u: goto L_08AB04E0;
    case 87u: goto L_08AB04E8;
    case 88u: goto L_08AB04F4;
    case 89u: goto L_08AB0504;
    case 90u: goto L_08AB0514;
    case 91u: goto L_08AB051C;
    case 92u: goto L_08AB0520;
    case 93u: goto L_08AB052C;
    case 94u: goto L_08AB0534;
    case 95u: goto L_08AB053C;
    case 96u: goto L_08AB0540;
    case 97u: goto L_08AB0554;
    case 98u: goto L_08AB057C;
    case 99u: goto L_08AB0580;
    case 100u: goto L_08AB058C;
    case 101u: goto L_08AB059C;
    case 102u: goto L_08AB05A4;
    case 103u: goto L_08AB05AC;
    case 104u: goto L_08AB05C8;
    case 105u: goto L_08AB05D0;
    case 106u: goto L_08AB05D8;
    case 107u: goto L_08AB05E0;
    case 108u: goto L_08AB05EC;
    case 109u: goto L_08AB05F4;
    case 110u: goto L_08AB05FC;
    case 111u: goto L_08AB060C;
    case 112u: goto L_08AB0610;
    case 113u: goto L_08AB0614;
    case 114u: goto L_08AB0628;
    case 115u: goto L_08AB0630;
    case 116u: goto L_08AB0650;
    case 117u: goto L_08AB0658;
    case 118u: goto L_08AB0664;
    case 119u: goto L_08AB066C;
    case 120u: goto L_08AB0674;
    case 121u: goto L_08AB067C;
    case 122u: goto L_08AB0684;
    case 123u: goto L_08AB0698;
    case 124u: goto L_08AB06A0;
    case 125u: goto L_08AB06A8;
    case 126u: goto L_08AB06BC;
    case 127u: goto L_08AB06C4;
    case 128u: goto L_08AB06D8;
    case 129u: goto L_08AB06DC;
    case 130u: goto L_08AB06F0;
    case 131u: goto L_08AB06F8;
    case 132u: goto L_08AB0710;
    case 133u: goto L_08AB0718;
    case 134u: goto L_08AB0720;
    case 135u: goto L_08AB0728;
    case 136u: goto L_08AB0734;
    case 137u: goto L_08AB073C;
    case 138u: goto L_08AB0744;
    case 139u: goto L_08AB0750;
    case 140u: goto L_08AB07C0;
    case 141u: goto L_08AB07C8;
    case 142u: goto L_08AB07D0;
    case 143u: goto L_08AB07E0;
    case 144u: goto L_08AB0838;
    case 145u: goto L_08AB0840;
    case 146u: goto L_08AB0848;
    case 147u: goto L_08AB0850;
    case 148u: goto L_08AB086C;
    case 149u: goto L_08AB0898;
    case 150u: goto L_08AB08AC;
    case 151u: goto L_08AB08C8;
    case 152u: goto L_08AB08DC;
    case 153u: goto L_08AB08F4;
    case 154u: goto L_08AB0900;
    case 155u: goto L_08AB0908;
    case 156u: goto L_08AB090C;
    case 157u: goto L_08AB091C;
    case 158u: goto L_08AB0940;
    case 159u: goto L_08AB094C;
    case 160u: goto L_08AB0958;
    case 161u: goto L_08AB0960;
    case 162u: goto L_08AB0968;
    case 163u: goto L_08AB0980;
    case 164u: goto L_08AB0994;
    case 165u: goto L_08AB09CC;
    case 166u: goto L_08AB09E8;
    case 167u: goto L_08AB09F4;
    case 168u: goto L_08AB0A0C;
    case 169u: goto L_08AB0A1C;
    case 170u: goto L_08AB0A24;
    case 171u: goto L_08AB0A3C;
    case 172u: goto L_08AB0A40;
    case 173u: goto L_08AB0A48;
    case 174u: goto L_08AB0A50;
    case 175u: goto L_08AB0A5C;
    case 176u: goto L_08AB0A64;
    case 177u: goto L_08AB0A6C;
    case 178u: goto L_08AB0A74;
    case 179u: goto L_08AB0A7C;
    case 180u: goto L_08AB0A84;
    case 181u: goto L_08AB0A8C;
    case 182u: goto L_08AB0A9C;
    case 183u: goto L_08AB0AA4;
    case 184u: goto L_08AB0AAC;
    case 185u: goto L_08AB0AB4;
    case 186u: goto L_08AB0AC4;
    case 187u: goto L_08AB0AC8;
    case 188u: goto L_08AB0AE8;
    case 189u: goto L_08AB0B1C;
    case 190u: goto L_08AB0B28;
    case 191u: goto L_08AB0B44;
    case 192u: goto L_08AB0B50;
    case 193u: goto L_08AB0B78;
    case 194u: goto L_08AB0B7C;
    case 195u: goto L_08AB0B88;
    case 196u: goto L_08AB0B94;
    case 197u: goto L_08AB0BA8;
    case 198u: goto L_08AB0BBC;
    case 199u: goto L_08AB0BC4;
    case 200u: goto L_08AB0BCC;
    case 201u: goto L_08AB0BD4;
    case 202u: goto L_08AB0BE8;
    case 203u: goto L_08AB0C14;
    case 204u: goto L_08AB0C20;
    case 205u: goto L_08AB0C24;
    case 206u: goto L_08AB0C30;
    case 207u: goto L_08AB0C3C;
    case 208u: goto L_08AB0C50;
    case 209u: goto L_08AB0C64;
    case 210u: goto L_08AB0C6C;
    case 211u: goto L_08AB0C74;
    case 212u: goto L_08AB0C7C;
    case 213u: goto L_08AB0C90;
    case 214u: goto L_08AB0CBC;
    case 215u: goto L_08AB0CC8;
    case 216u: goto L_08AB0CCC;
    case 217u: goto L_08AB0CD8;
    case 218u: goto L_08AB0CE4;
    case 219u: goto L_08AB0CF0;
    case 220u: goto L_08AB0CFC;
    case 221u: goto L_08AB0D00;
    case 222u: goto L_08AB0D08;
    case 223u: goto L_08AB0D14;
    case 224u: goto L_08AB0D1C;
    case 225u: goto L_08AB0D20;
    case 226u: goto L_08AB0D28;
    case 227u: goto L_08AB0D38;
    case 228u: goto L_08AB0D44;
    case 229u: goto L_08AB0D54;
    case 230u: goto L_08AB0D88;
    case 231u: goto L_08AB0D90;
    case 232u: goto L_08AB0D94;
    case 233u: goto L_08AB0DA0;
    case 234u: goto L_08AB0DAC;
    case 235u: goto L_08AB0DC0;
    case 236u: goto L_08AB0DD4;
    case 237u: goto L_08AB0DE8;
    case 238u: goto L_08AB0DEC;
    case 239u: goto L_08AB0DF4;
    case 240u: goto L_08AB0E00;
    case 241u: goto L_08AB0E04;
    case 242u: goto L_08AB0E0C;
    case 243u: goto L_08AB0E20;
    case 244u: goto L_08AB0E2C;
    case 245u: goto L_08AB0E30;
    case 246u: goto L_08AB0E38;
    case 247u: goto L_08AB0E3C;
    case 248u: goto L_08AB0E44;
    case 249u: goto L_08AB0E94;
    case 250u: goto L_08AB0E98;
    case 251u: goto L_08AB0EA0;
    case 252u: goto L_08AB0EB8;
    case 253u: goto L_08AB0EBC;
    case 254u: goto L_08AB0ED0;
    case 255u: goto L_08AB0EDC;
    case 256u: goto L_08AB0EEC;
    case 257u: goto L_08AB0EF0;
    case 258u: goto L_08AB0F00;
    case 259u: goto L_08AB0F08;
    case 260u: goto L_08AB0F10;
    case 261u: goto L_08AB0F1C;
    case 262u: goto L_08AB0F20;
    case 263u: goto L_08AB0F40;
    case 264u: goto L_08AB0F4C;
    case 265u: goto L_08AB0F50;
    case 266u: goto L_08AB0F70;
    case 267u: goto L_08AB0F94;
    case 268u: goto L_08AB0FA4;
    case 269u: goto L_08AB0FAC;
    case 270u: goto L_08AB0FB0;
    case 271u: goto L_08AB0FBC;
    case 272u: goto L_08AB0FCC;
    case 273u: goto L_08AB0FD4;
    case 274u: goto L_08AB0FD8;
    case 275u: goto L_08AB0FF8;
    case 276u: goto L_08AB101C;
    case 277u: goto L_08AB102C;
    case 278u: goto L_08AB1034;
    case 279u: goto L_08AB1038;
    case 280u: goto L_08AB1044;
    case 281u: goto L_08AB1054;
    case 282u: goto L_08AB105C;
    case 283u: goto L_08AB1060;
    case 284u: goto L_08AB1088;
    case 285u: goto L_08AB10B0;
    case 286u: goto L_08AB10B8;
    case 287u: goto L_08AB10C8;
    case 288u: goto L_08AB10D4;
    case 289u: goto L_08AB10DC;
    case 290u: goto L_08AB10E4;
    case 291u: goto L_08AB10F0;
    case 292u: goto L_08AB10F8;
    case 293u: goto L_08AB1100;
    case 294u: goto L_08AB1108;
    case 295u: goto L_08AB1110;
    case 296u: goto L_08AB1124;
    case 297u: goto L_08AB1138;
    case 298u: goto L_08AB113C;
    case 299u: goto L_08AB1144;
    case 300u: goto L_08AB1164;
    case 301u: goto L_08AB117C;
    case 302u: goto L_08AB1188;
    case 303u: goto L_08AB1194;
    case 304u: goto L_08AB11A0;
    case 305u: goto L_08AB11AC;
    case 306u: goto L_08AB11B8;
    case 307u: goto L_08AB11C4;
    case 308u: goto L_08AB11D4;
    case 309u: goto L_08AB1238;
    case 310u: goto L_08AB1244;
    case 311u: goto L_08AB1250;
    case 312u: goto L_08AB1258;
    case 313u: goto L_08AB1264;
    case 314u: goto L_08AB126C;
    case 315u: goto L_08AB127C;
    case 316u: goto L_08AB1280;
    case 317u: goto L_08AB1288;
    case 318u: goto L_08AB1290;
    case 319u: goto L_08AB1298;
    case 320u: goto L_08AB12A0;
    case 321u: goto L_08AB12C8;
    case 322u: goto L_08AB12D0;
    case 323u: goto L_08AB1304;
    case 324u: goto L_08AB1340;
    case 325u: goto L_08AB134C;
    case 326u: goto L_08AB1354;
    case 327u: goto L_08AB135C;
    case 328u: goto L_08AB1364;
    case 329u: goto L_08AB1370;
    case 330u: goto L_08AB1378;
    case 331u: goto L_08AB1380;
    case 332u: goto L_08AB1388;
    case 333u: goto L_08AB1390;
    case 334u: goto L_08AB13A8;
    case 335u: goto L_08AB13B4;
    case 336u: goto L_08AB13D4;
    case 337u: goto L_08AB13F8;
    case 338u: goto L_08AB1400;
    case 339u: goto L_08AB1410;
    case 340u: goto L_08AB141C;
    case 341u: goto L_08AB1420;
    case 342u: goto L_08AB1428;
    case 343u: goto L_08AB142C;
    case 344u: goto L_08AB1444;
    case 345u: goto L_08AB1460;
    case 346u: goto L_08AB1468;
    case 347u: goto L_08AB1478;
    case 348u: goto L_08AB1480;
    case 349u: goto L_08AB1484;
    case 350u: goto L_08AB148C;
    case 351u: goto L_08AB1494;
    case 352u: goto L_08AB14AC;
    case 353u: goto L_08AB14CC;
    case 354u: goto L_08AB14DC;
    case 355u: goto L_08AB14EC;
    case 356u: goto L_08AB14F4;
    case 357u: goto L_08AB14F8;
    case 358u: goto L_08AB1500;
    case 359u: goto L_08AB1510;
    case 360u: goto L_08AB1518;
    case 361u: goto L_08AB1520;
    case 362u: goto L_08AB1528;
    case 363u: goto L_08AB152C;
    case 364u: goto L_08AB1534;
    case 365u: goto L_08AB1554;
    case 366u: goto L_08AB1578;
    case 367u: goto L_08AB158C;
    case 368u: goto L_08AB1594;
    case 369u: goto L_08AB159C;
    case 370u: goto L_08AB15A4;
    case 371u: goto L_08AB15C0;
    case 372u: goto L_08AB15C8;
    case 373u: goto L_08AB15D0;
    case 374u: goto L_08AB15D4;
    case 375u: goto L_08AB15EC;
    case 376u: goto L_08AB1620;
    case 377u: goto L_08AB1628;
    case 378u: goto L_08AB1634;
    case 379u: goto L_08AB1644;
    case 380u: goto L_08AB164C;
    case 381u: goto L_08AB1658;
    case 382u: goto L_08AB1670;
    case 383u: goto L_08AB167C;
    case 384u: goto L_08AB1688;
    case 385u: goto L_08AB1698;
    case 386u: goto L_08AB16AC;
    case 387u: goto L_08AB16B0;
    case 388u: goto L_08AB16B8;
    case 389u: goto L_08AB16C4;
    case 390u: goto L_08AB16D8;
    case 391u: goto L_08AB16E8;
    case 392u: goto L_08AB16F4;
    case 393u: goto L_08AB1700;
    case 394u: goto L_08AB1710;
    case 395u: goto L_08AB1714;
    case 396u: goto L_08AB1720;
    case 397u: goto L_08AB1724;
    case 398u: goto L_08AB1744;
    case 399u: goto L_08AB1760;
    case 400u: goto L_08AB1768;
    case 401u: goto L_08AB1774;
    case 402u: goto L_08AB178C;
    case 403u: goto L_08AB179C;
    case 404u: goto L_08AB17C4;
    case 405u: goto L_08AB17CC;
    case 406u: goto L_08AB17D4;
    case 407u: goto L_08AB17E0;
    case 408u: goto L_08AB17E8;
    case 409u: goto L_08AB17F4;
    case 410u: goto L_08AB1824;
    case 411u: goto L_08AB182C;
    case 412u: goto L_08AB1830;
    case 413u: goto L_08AB183C;
    case 414u: goto L_08AB1844;
    case 415u: goto L_08AB1850;
    case 416u: goto L_08AB1868;
    case 417u: goto L_08AB1870;
    case 418u: goto L_08AB1874;
    case 419u: goto L_08AB18EC;
    case 420u: goto L_08AB18F4;
    case 421u: goto L_08AB1908;
    case 422u: goto L_08AB1920;
    case 423u: goto L_08AB1940;
    case 424u: goto L_08AB1950;
    case 425u: goto L_08AB196C;
    case 426u: goto L_08AB198C;
    case 427u: goto L_08AB19A4;
    case 428u: goto L_08AB19B0;
    case 429u: goto L_08AB19B8;
    case 430u: goto L_08AB19C0;
    case 431u: goto L_08AB19C8;
    case 432u: goto L_08AB19D0;
    case 433u: goto L_08AB19D4;
    case 434u: goto L_08AB19DC;
    case 435u: goto L_08AB1A00;
    case 436u: goto L_08AB1A0C;
    case 437u: goto L_08AB1A28;
    case 438u: goto L_08AB1A34;
    case 439u: goto L_08AB1A3C;
    case 440u: goto L_08AB1A40;
    case 441u: goto L_08AB1A44;
    case 442u: goto L_08AB1A50;
    case 443u: goto L_08AB1A58;
    case 444u: goto L_08AB1A60;
    case 445u: goto L_08AB1A64;
    case 446u: goto L_08AB1A68;
    case 447u: goto L_08AB1A7C;
    case 448u: goto L_08AB1A9C;
    case 449u: goto L_08AB1AA4;
    case 450u: goto L_08AB1AAC;
    case 451u: goto L_08AB1AB4;
    case 452u: goto L_08AB1ABC;
    case 453u: goto L_08AB1AC4;
    case 454u: goto L_08AB1AD8;
    case 455u: goto L_08AB1AE4;
    case 456u: goto L_08AB1AEC;
    case 457u: goto L_08AB1AF4;
    case 458u: goto L_08AB1AFC;
    case 459u: goto L_08AB1B04;
    case 460u: goto L_08AB1B14;
    case 461u: goto L_08AB1B20;
    case 462u: goto L_08AB1B28;
    case 463u: goto L_08AB1B34;
    case 464u: goto L_08AB1B3C;
    case 465u: goto L_08AB1B4C;
    case 466u: goto L_08AB1B50;
    case 467u: goto L_08AB1B58;
    case 468u: goto L_08AB1B9C;
    case 469u: goto L_08AB1BCC;
    case 470u: goto L_08AB1BE0;
    case 471u: goto L_08AB1C08;
    case 472u: goto L_08AB1C10;
    case 473u: goto L_08AB1C1C;
    case 474u: goto L_08AB1C30;
    case 475u: goto L_08AB1C44;
    case 476u: goto L_08AB1C54;
    case 477u: goto L_08AB1C58;
    case 478u: goto L_08AB1C60;
    case 479u: goto L_08AB1C68;
    case 480u: goto L_08AB1C74;
    case 481u: goto L_08AB1C78;
    case 482u: goto L_08AB1C7C;
    case 483u: goto L_08AB1C80;
    case 484u: goto L_08AB1CB8;
    case 485u: goto L_08AB1CC4;
    case 486u: goto L_08AB1CD0;
    case 487u: goto L_08AB1D08;
    case 488u: goto L_08AB1D4C;
    case 489u: goto L_08AB1D6C;
    case 490u: goto L_08AB1D80;
    case 491u: goto L_08AB1D98;
    case 492u: goto L_08AB1DA4;
    case 493u: goto L_08AB1DAC;
    case 494u: goto L_08AB1DB4;
    case 495u: goto L_08AB1DC8;
    case 496u: goto L_08AB1DD4;
    case 497u: goto L_08AB1DDC;
    case 498u: goto L_08AB1DF0;
    case 499u: goto L_08AB1E04;
    case 500u: goto L_08AB1E28;
    case 501u: goto L_08AB1E34;
    case 502u: goto L_08AB1E68;
    case 503u: goto L_08AB1E74;
    case 504u: goto L_08AB1E7C;
    case 505u: goto L_08AB1E80;
    case 506u: goto L_08AB1E84;
    case 507u: goto L_08AB1E98;
    case 508u: goto L_08AB1EC0;
    case 509u: goto L_08AB1ED4;
    case 510u: goto L_08AB1F08;
    case 511u: goto L_08AB1F18;
    case 512u: goto L_08AB1F20;
    case 513u: goto L_08AB1F24;
    case 514u: goto L_08AB1F28;
    case 515u: goto L_08AB1F40;
    case 516u: goto L_08AB1F64;
    case 517u: goto L_08AB1F6C;
    case 518u: goto L_08AB1F74;
    case 519u: goto L_08AB1F7C;
    case 520u: goto L_08AB1F88;
    case 521u: goto L_08AB1FA4;
    case 522u: goto L_08AB1FB4;
    case 523u: goto L_08AB1FC4;
    case 524u: goto L_08AB1FD4;
    case 525u: goto L_08AB1FE0;
    case 526u: goto L_08AB1FF4;
    case 527u: goto L_08AB2000;
    case 528u: goto L_08AB2014;
    case 529u: goto L_08AB2020;
    case 530u: goto L_08AB202C;
    case 531u: goto L_08AB2050;
    case 532u: goto L_08AB2070;
    case 533u: goto L_08AB2078;
    case 534u: goto L_08AB2080;
    case 535u: goto L_08AB2088;
    case 536u: goto L_08AB2090;
    case 537u: goto L_08AB20A8;
    case 538u: goto L_08AB20B4;
    case 539u: goto L_08AB20BC;
    case 540u: goto L_08AB20D0;
    case 541u: goto L_08AB20DC;
    case 542u: goto L_08AB20E0;
    case 543u: goto L_08AB20F0;
    case 544u: goto L_08AB210C;
    case 545u: goto L_08AB2114;
    case 546u: goto L_08AB211C;
    case 547u: goto L_08AB2128;
    case 548u: goto L_08AB2130;
    case 549u: goto L_08AB2144;
    case 550u: goto L_08AB214C;
    case 551u: goto L_08AB2154;
    case 552u: goto L_08AB216C;
    case 553u: goto L_08AB2178;
    case 554u: goto L_08AB2180;
    case 555u: goto L_08AB2194;
    case 556u: goto L_08AB21A0;
    case 557u: goto L_08AB21A4;
    case 558u: goto L_08AB21B4;
    case 559u: goto L_08AB21D0;
    case 560u: goto L_08AB21D8;
    case 561u: goto L_08AB21E0;
    case 562u: goto L_08AB21EC;
    case 563u: goto L_08AB21F4;
    case 564u: goto L_08AB2208;
    case 565u: goto L_08AB2214;
    case 566u: goto L_08AB2228;
    case 567u: goto L_08AB2238;
    case 568u: goto L_08AB223C;
    case 569u: goto L_08AB2244;
    case 570u: goto L_08AB2248;
    case 571u: goto L_08AB2250;
    case 572u: goto L_08AB2268;
    case 573u: goto L_08AB2270;
    case 574u: goto L_08AB2278;
    case 575u: goto L_08AB2280;
    case 576u: goto L_08AB2290;
    case 577u: goto L_08AB2298;
    case 578u: goto L_08AB22B0;
    case 579u: goto L_08AB22BC;
    case 580u: goto L_08AB22C0;
    case 581u: goto L_08AB22CC;
    case 582u: goto L_08AB22D4;
    case 583u: goto L_08AB22E4;
    case 584u: goto L_08AB22E8;
    case 585u: goto L_08AB22F0;
    case 586u: goto L_08AB22FC;
    case 587u: goto L_08AB2300;
    case 588u: goto L_08AB2314;
    case 589u: goto L_08AB231C;
    case 590u: goto L_08AB2324;
    case 591u: goto L_08AB2328;
    case 592u: goto L_08AB2330;
    case 593u: goto L_08AB2348;
    case 594u: goto L_08AB2350;
    case 595u: goto L_08AB2358;
    case 596u: goto L_08AB2370;
    case 597u: goto L_08AB2390;
    case 598u: goto L_08AB23BC;
    case 599u: goto L_08AB23C4;
    case 600u: goto L_08AB23D0;
    case 601u: goto L_08AB23D8;
    case 602u: goto L_08AB23E0;
    case 603u: goto L_08AB23F8;
    case 604u: goto L_08AB2414;
    case 605u: goto L_08AB2444;
    case 606u: goto L_08AB2450;
    case 607u: goto L_08AB2458;
    case 608u: goto L_08AB245C;
    case 609u: goto L_08AB246C;
    case 610u: goto L_08AB2484;
    case 611u: goto L_08AB2490;
    case 612u: goto L_08AB2498;
    case 613u: goto L_08AB24B4;
    case 614u: goto L_08AB24BC;
    case 615u: goto L_08AB24C4;
    case 616u: goto L_08AB24D0;
    case 617u: goto L_08AB24D4;
    case 618u: goto L_08AB24E0;
    case 619u: goto L_08AB24EC;
    case 620u: goto L_08AB24F4;
    case 621u: goto L_08AB2510;
    case 622u: goto L_08AB2518;
    case 623u: goto L_08AB2520;
    case 624u: goto L_08AB252C;
    case 625u: goto L_08AB2534;
    case 626u: goto L_08AB2540;
    case 627u: goto L_08AB2578;
    case 628u: goto L_08AB2580;
    case 629u: goto L_08AB258C;
    case 630u: goto L_08AB259C;
    case 631u: goto L_08AB25B8;
    case 632u: goto L_08AB25C4;
    case 633u: goto L_08AB25CC;
    case 634u: goto L_08AB25D4;
    case 635u: goto L_08AB25DC;
    case 636u: goto L_08AB25E4;
    case 637u: goto L_08AB25EC;
    case 638u: goto L_08AB25F4;
    case 639u: goto L_08AB2604;
    case 640u: goto L_08AB260C;
    case 641u: goto L_08AB2614;
    case 642u: goto L_08AB2624;
    case 643u: goto L_08AB2638;
    case 644u: goto L_08AB2648;
    case 645u: goto L_08AB264C;
    case 646u: goto L_08AB2664;
    case 647u: goto L_08AB2688;
    case 648u: goto L_08AB26C8;
    case 649u: goto L_08AB26D0;
    case 650u: goto L_08AB26DC;
    case 651u: goto L_08AB26EC;
    case 652u: goto L_08AB2708;
    case 653u: goto L_08AB2714;
    case 654u: goto L_08AB271C;
    case 655u: goto L_08AB2724;
    case 656u: goto L_08AB272C;
    case 657u: goto L_08AB2734;
    case 658u: goto L_08AB273C;
    case 659u: goto L_08AB2744;
    case 660u: goto L_08AB2750;
    case 661u: goto L_08AB2760;
    case 662u: goto L_08AB2774;
    case 663u: goto L_08AB2784;
    case 664u: goto L_08AB2798;
    case 665u: goto L_08AB279C;
    case 666u: goto L_08AB27A4;
    case 667u: goto L_08AB27B0;
    case 668u: goto L_08AB27BC;
    case 669u: goto L_08AB27C4;
    case 670u: goto L_08AB27CC;
    case 671u: goto L_08AB27D4;
    case 672u: goto L_08AB27DC;
    case 673u: goto L_08AB27E0;
    case 674u: goto L_08AB2808;
    case 675u: goto L_08AB282C;
    case 676u: goto L_08AB2834;
    case 677u: goto L_08AB2840;
    case 678u: goto L_08AB284C;
    case 679u: goto L_08AB285C;
    case 680u: goto L_08AB2860;
    case 681u: goto L_08AB2874;
    case 682u: goto L_08AB2890;
    case 683u: goto L_08AB2898;
    case 684u: goto L_08AB28A4;
    case 685u: goto L_08AB28C0;
    case 686u: goto L_08AB28D0;
    case 687u: goto L_08AB28F4;
    case 688u: goto L_08AB28FC;
    case 689u: goto L_08AB2904;
    case 690u: goto L_08AB2930;
    case 691u: goto L_08AB2940;
    case 692u: goto L_08AB2944;
    case 693u: goto L_08AB2958;
    case 694u: goto L_08AB297C;
    case 695u: goto L_08AB2984;
    case 696u: goto L_08AB298C;
    case 697u: goto L_08AB29A0;
    case 698u: goto L_08AB29A4;
    case 699u: goto L_08AB29B8;
    case 700u: goto L_08AB29DC;
    case 701u: goto L_08AB29E4;
    case 702u: goto L_08AB29EC;
    case 703u: goto L_08AB2A18;
    case 704u: goto L_08AB2A28;
    case 705u: goto L_08AB2A2C;
    case 706u: goto L_08AB2A40;
    case 707u: goto L_08AB2A6C;
    case 708u: goto L_08AB2A74;
    case 709u: goto L_08AB2A7C;
    case 710u: goto L_08AB2AA8;
    case 711u: goto L_08AB2AB4;
    case 712u: goto L_08AB2AC8;
    case 713u: goto L_08AB2AD8;
    case 714u: goto L_08AB2ADC;
    case 715u: goto L_08AB2AF8;
    case 716u: goto L_08AB2B18;
    case 717u: goto L_08AB2B20;
    case 718u: goto L_08AB2B38;
    case 719u: goto L_08AB2B40;
    case 720u: goto L_08AB2B48;
    case 721u: goto L_08AB2B54;
    case 722u: goto L_08AB2B5C;
    case 723u: goto L_08AB2B64;
    case 724u: goto L_08AB2B6C;
    case 725u: goto L_08AB2B74;
    case 726u: goto L_08AB2B7C;
    case 727u: goto L_08AB2B90;
    case 728u: goto L_08AB2BA0;
    case 729u: goto L_08AB2BC0;
    case 730u: goto L_08AB2BC8;
    case 731u: goto L_08AB2BDC;
    case 732u: goto L_08AB2BE4;
    case 733u: goto L_08AB2BFC;
    case 734u: goto L_08AB2C0C;
    case 735u: goto L_08AB2C14;
    case 736u: goto L_08AB2C20;
    case 737u: goto L_08AB2C30;
    case 738u: goto L_08AB2C38;
    case 739u: goto L_08AB2C44;
    case 740u: goto L_08AB2C4C;
    case 741u: goto L_08AB2C54;
    case 742u: goto L_08AB2C5C;
    case 743u: goto L_08AB2C6C;
    case 744u: goto L_08AB2CA8;
    case 745u: goto L_08AB2CB0;
    case 746u: goto L_08AB2CB8;
    case 747u: goto L_08AB2CC0;
    case 748u: goto L_08AB2CC8;
    case 749u: goto L_08AB2CE0;
    case 750u: goto L_08AB2CEC;
    case 751u: goto L_08AB2CF4;
    case 752u: goto L_08AB2CFC;
    case 753u: goto L_08AB2D08;
    case 754u: goto L_08AB2D10;
    case 755u: goto L_08AB2D1C;
    case 756u: goto L_08AB2D28;
    case 757u: goto L_08AB2D34;
    case 758u: goto L_08AB2D40;
    case 759u: goto L_08AB2D48;
    case 760u: goto L_08AB2D50;
    case 761u: goto L_08AB2D58;
    case 762u: goto L_08AB2D60;
    case 763u: goto L_08AB2D64;
    case 764u: goto L_08AB2D6C;
    case 765u: goto L_08AB2D84;
    case 766u: goto L_08AB2D8C;
    case 767u: goto L_08AB2D94;
    case 768u: goto L_08AB2D98;
    case 769u: goto L_08AB2DA0;
    case 770u: goto L_08AB2DAC;
    case 771u: goto L_08AB2DB4;
    case 772u: goto L_08AB2DBC;
    case 773u: goto L_08AB2DC4;
    case 774u: goto L_08AB2DCC;
    case 775u: goto L_08AB2DD4;
    case 776u: goto L_08AB2DE4;
    case 777u: goto L_08AB2DF0;
    case 778u: goto L_08AB2E14;
    case 779u: goto L_08AB2E4C;
    case 780u: goto L_08AB2E54;
    case 781u: goto L_08AB2E5C;
    case 782u: goto L_08AB2E64;
    case 783u: goto L_08AB2E6C;
    case 784u: goto L_08AB2E80;
    case 785u: goto L_08AB2E8C;
    case 786u: goto L_08AB2E94;
    case 787u: goto L_08AB2E9C;
    case 788u: goto L_08AB2EA8;
    case 789u: goto L_08AB2EB0;
    case 790u: goto L_08AB2EBC;
    case 791u: goto L_08AB2EC8;
    case 792u: goto L_08AB2ED4;
    case 793u: goto L_08AB2EE0;
    case 794u: goto L_08AB2EE8;
    case 795u: goto L_08AB2EF0;
    case 796u: goto L_08AB2EF8;
    case 797u: goto L_08AB2F00;
    case 798u: goto L_08AB2F04;
    case 799u: goto L_08AB2F0C;
    case 800u: goto L_08AB2F24;
    case 801u: goto L_08AB2F2C;
    case 802u: goto L_08AB2F34;
    case 803u: goto L_08AB2F38;
    case 804u: goto L_08AB2F40;
    case 805u: goto L_08AB2F60;
    case 806u: goto L_08AB2F78;
    case 807u: goto L_08AB2F80;
    case 808u: goto L_08AB2F88;
    case 809u: goto L_08AB2F98;
    case 810u: goto L_08AB2FA0;
    case 811u: goto L_08AB2FAC;
    case 812u: goto L_08AB2FB0;
    case 813u: goto L_08AB2FBC;
    case 814u: goto L_08AB2FDC;
    case 815u: goto L_08AB2FE4;
    case 816u: goto L_08AB2FF8;
    case 817u: goto L_08AB3008;
    case 818u: goto L_08AB3010;
    case 819u: goto L_08AB3020;
    case 820u: goto L_08AB3028;
    case 821u: goto L_08AB3030;
    case 822u: goto L_08AB3034;
    case 823u: goto L_08AB3048;
    case 824u: goto L_08AB3050;
    case 825u: goto L_08AB3068;
    case 826u: goto L_08AB3070;
    case 827u: goto L_08AB3078;
    case 828u: goto L_08AB3084;
    case 829u: goto L_08AB3094;
    case 830u: goto L_08AB30B4;
    case 831u: goto L_08AB30BC;
    case 832u: goto L_08AB30CC;
    case 833u: goto L_08AB30E0;
    case 834u: goto L_08AB30EC;
    case 835u: goto L_08AB30F4;
    case 836u: goto L_08AB30FC;
    case 837u: goto L_08AB3124;
    case 838u: goto L_08AB3130;
    case 839u: goto L_08AB3134;
    case 840u: goto L_08AB3138;
    case 841u: goto L_08AB313C;
    case 842u: goto L_08AB314C;
    case 843u: goto L_08AB317C;
    case 844u: goto L_08AB318C;
    case 845u: goto L_08AB31A4;
    case 846u: goto L_08AB31B4;
    case 847u: goto L_08AB31BC;
    case 848u: goto L_08AB31E8;
    case 849u: goto L_08AB31F4;
    case 850u: goto L_08AB31FC;
    case 851u: goto L_08AB3200;
    case 852u: goto L_08AB320C;
    case 853u: goto L_08AB3214;
    case 854u: goto L_08AB3220;
    case 855u: goto L_08AB322C;
    case 856u: goto L_08AB3234;
    case 857u: goto L_08AB3240;
    case 858u: goto L_08AB324C;
    case 859u: goto L_08AB325C;
    case 860u: goto L_08AB3264;
    case 861u: goto L_08AB3268;
    case 862u: goto L_08AB3274;
    case 863u: goto L_08AB327C;
    case 864u: goto L_08AB328C;
    case 865u: goto L_08AB3294;
    case 866u: goto L_08AB329C;
    case 867u: goto L_08AB32AC;
    case 868u: goto L_08AB32B4;
    case 869u: goto L_08AB32BC;
    case 870u: goto L_08AB32C4;
    case 871u: goto L_08AB32CC;
    case 872u: goto L_08AB32D4;
    case 873u: goto L_08AB32E4;
    case 874u: goto L_08AB32E8;
    case 875u: goto L_08AB3300;
    case 876u: goto L_08AB3308;
    case 877u: goto L_08AB3328;
    case 878u: goto L_08AB3330;
    case 879u: goto L_08AB3358;
    case 880u: goto L_08AB3360;
    case 881u: goto L_08AB336C;
    case 882u: goto L_08AB3374;
    case 883u: goto L_08AB337C;
    case 884u: goto L_08AB3384;
    case 885u: goto L_08AB339C;
    case 886u: goto L_08AB33A0;
    case 887u: goto L_08AB33C4;
    case 888u: goto L_08AB33EC;
    case 889u: goto L_08AB33FC;
    case 890u: goto L_08AB3404;
    case 891u: goto L_08AB340C;
    case 892u: goto L_08AB3414;
    case 893u: goto L_08AB341C;
    case 894u: goto L_08AB343C;
    case 895u: goto L_08AB3440;
    case 896u: goto L_08AB3478;
    case 897u: goto L_08AB3494;
    case 898u: goto L_08AB34A8;
    case 899u: goto L_08AB34BC;
    case 900u: goto L_08AB34CC;
    case 901u: goto L_08AB34D8;
    case 902u: goto L_08AB34F0;
    case 903u: goto L_08AB350C;
    case 904u: goto L_08AB3510;
    case 905u: goto L_08AB351C;
    case 906u: goto L_08AB352C;
    case 907u: goto L_08AB3530;
    case 908u: goto L_08AB3538;
    case 909u: goto L_08AB353C;
    case 910u: goto L_08AB3544;
    case 911u: goto L_08AB3554;
    case 912u: goto L_08AB357C;
    case 913u: goto L_08AB358C;
    case 914u: goto L_08AB3594;
    case 915u: goto L_08AB359C;
    case 916u: goto L_08AB35A4;
    case 917u: goto L_08AB35B4;
    case 918u: goto L_08AB35C4;
    case 919u: goto L_08AB35C8;
    case 920u: goto L_08AB35D8;
    case 921u: goto L_08AB35E8;
    case 922u: goto L_08AB3610;
    case 923u: goto L_08AB3618;
    case 924u: goto L_08AB3620;
    case 925u: goto L_08AB362C;
    case 926u: goto L_08AB3634;
    case 927u: goto L_08AB3638;
    case 928u: goto L_08AB3644;
    case 929u: goto L_08AB3650;
    case 930u: goto L_08AB3658;
    case 931u: goto L_08AB3668;
    case 932u: goto L_08AB3670;
    case 933u: goto L_08AB367C;
    case 934u: goto L_08AB3680;
    case 935u: goto L_08AB36A0;
    case 936u: goto L_08AB36B0;
    case 937u: goto L_08AB36D4;
    case 938u: goto L_08AB36FC;
    case 939u: goto L_08AB3714;
    case 940u: goto L_08AB3728;
    case 941u: goto L_08AB3738;
    case 942u: goto L_08AB3744;
    case 943u: goto L_08AB3750;
    case 944u: goto L_08AB3758;
    case 945u: goto L_08AB3760;
    case 946u: goto L_08AB3768;
    case 947u: goto L_08AB3770;
    case 948u: goto L_08AB3778;
    case 949u: goto L_08AB3780;
    case 950u: goto L_08AB3788;
    case 951u: goto L_08AB378C;
    case 952u: goto L_08AB3798;
    case 953u: goto L_08AB37BC;
    case 954u: goto L_08AB37D4;
    case 955u: goto L_08AB37E8;
    case 956u: goto L_08AB37F8;
    case 957u: goto L_08AB3804;
    case 958u: goto L_08AB3810;
    case 959u: goto L_08AB3818;
    case 960u: goto L_08AB3820;
    case 961u: goto L_08AB3828;
    case 962u: goto L_08AB3830;
    case 963u: goto L_08AB3838;
    case 964u: goto L_08AB3840;
    case 965u: goto L_08AB3848;
    case 966u: goto L_08AB384C;
    case 967u: goto L_08AB3858;
    case 968u: goto L_08AB386C;
    case 969u: goto L_08AB3874;
    case 970u: goto L_08AB387C;
    case 971u: goto L_08AB3884;
    case 972u: goto L_08AB3888;
    case 973u: goto L_08AB3890;
    case 974u: goto L_08AB38B4;
    case 975u: goto L_08AB39AC;
    case 976u: goto L_08AB39C0;
    case 977u: goto L_08AB3A0C;
    case 978u: goto L_08AB3A5C;
    case 979u: goto L_08AB3A78;
    case 980u: goto L_08AB3A90;
    case 981u: goto L_08AB3AAC;
    case 982u: goto L_08AB3AC4;
    case 983u: goto L_08AB3AF8;
    case 984u: goto L_08AB3D10;
    case 985u: goto L_08AB3D24;
    case 986u: goto L_08AB3D70;
    case 987u: goto L_08AB3D78;
    case 988u: goto L_08AB3D88;
    case 989u: goto L_08AB3D94;
    case 990u: goto L_08AB3DB4;
    case 991u: goto L_08AB3DC4;
    case 992u: goto L_08AB3DCC;
    case 993u: goto L_08AB3DF0;
    case 994u: goto L_08AB3E14;
    case 995u: goto L_08AB3E1C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AB0000:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1044u, 0x08AAFF94u>(ctx, &aot_mem); return;
L_08AB0008:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1027u, 0x08AAFEB8u>(ctx, &aot_mem); return;
L_08AB001C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AB0044u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1044u, 0x08AAFF94u>(ctx, &aot_mem) && ctx.pc == 0x08AB0044u) goto L_08AB0044;
    return;
L_08AB0044:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08AB0124;
    }
    goto L_08AB004C;
L_08AB004C:
    ctx.set_gpr(16, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08AB005Cu);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(22828));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 551u, 0x08B062CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB005Cu) goto L_08AB005C;
    return;
L_08AB005C:
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AB006Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_08AB0630;
L_08AB006C:
    ctx.set_gpr(31, 0x08AB0074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 951u, 0x08843EA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB0074u) goto L_08AB0074;
    return;
L_08AB0074:
    ctx.set_gpr(31, 0x08AB007Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 950u, 0x08843E98u>(ctx, &aot_mem) && ctx.pc == 0x08AB007Cu) goto L_08AB007C;
    return;
L_08AB007C:
    ctx.set_gpr(31, 0x08AB0084u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 951u, 0x08843EA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB0084u) goto L_08AB0084;
    return;
L_08AB0084:
    ctx.set_gpr(5, 2180u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB0094u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16012));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 948u, 0x08843E84u>(ctx, &aot_mem) && ctx.pc == 0x08AB0094u) goto L_08AB0094;
    return;
L_08AB0094:
    ctx.set_gpr(31, 0x08AB009Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB009Cu) goto L_08AB009C;
    return;
L_08AB009C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB00A8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 976u, 0x08AAFC48u>(ctx, &aot_mem) && ctx.pc == 0x08AB00A8u) goto L_08AB00A8;
    return;
L_08AB00A8:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB00B8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 118u, 0x0892C874u>(ctx, &aot_mem) && ctx.pc == 0x08AB00B8u) goto L_08AB00B8;
    return;
L_08AB00B8:
    ctx.set_gpr(31, 0x08AB00C0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 244u, 0x0883D3C4u>(ctx, &aot_mem) && ctx.pc == 0x08AB00C0u) goto L_08AB00C0;
    return;
L_08AB00C0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AB00D4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB00D4u) goto L_08AB00D4;
    return;
L_08AB00D4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AB00E8;
    }
    goto L_08AB00DC;
L_08AB00DC:
    ctx.set_gpr(31, 0x08AB00E4u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 215u, 0x08810BD8u>(ctx, &aot_mem) && ctx.pc == 0x08AB00E4u) goto L_08AB00E4;
    return;
L_08AB00E4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AB00E8;
L_08AB00E8:
    ctx.set_gpr(31, 0x08AB00F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x08AB00F0u) goto L_08AB00F0;
    return;
L_08AB00F0:
    ctx.set_gpr(31, 0x08AB00F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 951u, 0x08843EA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB00F8u) goto L_08AB00F8;
    return;
L_08AB00F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB0104u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 948u, 0x08843E84u>(ctx, &aot_mem) && ctx.pc == 0x08AB0104u) goto L_08AB0104;
    return;
L_08AB0104:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AB0110u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 931u, 0x08843D54u>(ctx, &aot_mem) && ctx.pc == 0x08AB0110u) goto L_08AB0110;
    return;
L_08AB0110:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08AB011Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 247u, 0x0883D3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB011Cu) goto L_08AB011C;
    return;
L_08AB011C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB012C;
      }
      goto L_08AB0124;
    }
L_08AB0124:
    ctx.set_gpr(31, 0x08AB012Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 268u, 0x0883D530u>(ctx, &aot_mem) && ctx.pc == 0x08AB012Cu) goto L_08AB012C;
    return;
L_08AB012C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB0148:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB0180;
      }
      goto L_08AB0164;
    }
L_08AB0164:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08AB0174u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1027u, 0x08AAFEB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB0174u) goto L_08AB0174;
    return;
L_08AB0174:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB0194;
      }
      goto L_08AB0180;
    }
L_08AB0180:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08AB018Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1027u, 0x08AAFEB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB018Cu) goto L_08AB018C;
    return;
L_08AB018C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    goto L_08AB0194;
L_08AB0194:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB01AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB01E4;
      }
      goto L_08AB01C8;
    }
L_08AB01C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08AB01D8u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1027u, 0x08AAFEB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB01D8u) goto L_08AB01D8;
    return;
L_08AB01D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB01F8;
      }
      goto L_08AB01E4;
    }
L_08AB01E4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08AB01F0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1027u, 0x08AAFEB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB01F0u) goto L_08AB01F0;
    return;
L_08AB01F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    goto L_08AB01F8;
L_08AB01F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB0210:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AB0234u);
    ctx.set_gpr(18, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 951u, 0x08843EA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB0234u) goto L_08AB0234;
    return;
L_08AB0234:
    ctx.set_gpr(31, 0x08AB023Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 950u, 0x08843E98u>(ctx, &aot_mem) && ctx.pc == 0x08AB023Cu) goto L_08AB023C;
    return;
L_08AB023C:
    ctx.set_gpr(31, 0x08AB0244u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 951u, 0x08843EA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB0244u) goto L_08AB0244;
    return;
L_08AB0244:
    ctx.set_gpr(5, 2180u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB0254u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16012));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 948u, 0x08843E84u>(ctx, &aot_mem) && ctx.pc == 0x08AB0254u) goto L_08AB0254;
    return;
L_08AB0254:
    ctx.set_gpr(31, 0x08AB025Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08AB025Cu) goto L_08AB025C;
    return;
L_08AB025C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB0268u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 707u, 0x08956F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB0268u) goto L_08AB0268;
    return;
L_08AB0268:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB0274u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 73u, 0x08844420u>(ctx, &aot_mem) && ctx.pc == 0x08AB0274u) goto L_08AB0274;
    return;
L_08AB0274:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AB0284;
    }
    goto L_08AB027C;
L_08AB027C:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AB0284;
L_08AB0284:
    ctx.set_gpr(31, 0x08AB028Cu);
    // nop
    goto L_08AB02FC;
L_08AB028C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0298;
      }
      goto L_08AB0294;
    }
L_08AB0294:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB0298;
L_08AB0298:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB02CC;
      }
      goto L_08AB02A0;
    }
L_08AB02A0:
    ctx.set_gpr(31, 0x08AB02A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08AB02A8u) goto L_08AB02A8;
    return;
L_08AB02A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB02B4u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 806u, 0x089574D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB02B4u) goto L_08AB02B4;
    return;
L_08AB02B4:
    ctx.set_gpr(31, 0x08AB02BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB02BCu) goto L_08AB02BC;
    return;
L_08AB02BC:
    ctx.set_gpr(31, 0x08AB02C4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08AB02C4u) goto L_08AB02C4;
    return;
L_08AB02C4:
    ctx.set_gpr(31, 0x08AB02CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 589u, 0x08B0646Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB02CCu) goto L_08AB02CC;
    return;
L_08AB02CC:
    ctx.set_gpr(31, 0x08AB02D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 951u, 0x08843EA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB02D4u) goto L_08AB02D4;
    return;
L_08AB02D4:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB02E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 948u, 0x08843E84u>(ctx, &aot_mem) && ctx.pc == 0x08AB02E0u) goto L_08AB02E0;
    return;
L_08AB02E0:
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
L_08AB02FC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(316)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB0304:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-2064));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB04C0;
      }
      goto L_08AB0324;
    }
L_08AB0324:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB03EC;
      }
      goto L_08AB0330;
    }
L_08AB0330:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
        goto L_08AB0344;
    }
    goto L_08AB033C;
L_08AB033C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB052C;
      }
      goto L_08AB0344;
    }
L_08AB0344:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AB0350u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2048));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB0350u) goto L_08AB0350;
    return;
L_08AB0350:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08AB0364u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22840));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08AB0364u) goto L_08AB0364;
    return;
L_08AB0364:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AB0380u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(2104));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 910u, 0x08AAF8F8u>(ctx, &aot_mem) && ctx.pc == 0x08AB0380u) goto L_08AB0380;
    return;
L_08AB0380:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2104), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AB03C0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(2108));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AB03C0u) goto L_08AB03C0;
    return;
L_08AB03C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_08AB03D8;
    }
    goto L_08AB03CC;
L_08AB03CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_08AB03D8;
L_08AB03D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB052C;
      }
      goto L_08AB03EC;
    }
L_08AB03EC:
    ctx.set_gpr(31, 0x08AB03F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1044u, 0x08AAFF94u>(ctx, &aot_mem) && ctx.pc == 0x08AB03F4u) goto L_08AB03F4;
    return;
L_08AB03F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB052C;
      }
      goto L_08AB03FC;
    }
L_08AB03FC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AB040Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2048));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB040Cu) goto L_08AB040C;
    return;
L_08AB040C:
    ctx.set_gpr(31, 0x08AB0414u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB0414u) goto L_08AB0414;
    return;
L_08AB0414:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08AB0424u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2048));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AB0424u) goto L_08AB0424;
    return;
L_08AB0424:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AB0440u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(2104));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 910u, 0x08AAF8F8u>(ctx, &aot_mem) && ctx.pc == 0x08AB0440u) goto L_08AB0440;
    return;
L_08AB0440:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2104), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AB0480u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(2108));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AB0480u) goto L_08AB0480;
    return;
L_08AB0480:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_08AB0498;
    }
    goto L_08AB048C;
L_08AB048C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_08AB0498;
L_08AB0498:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08AB04B4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1027u, 0x08AAFEB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB04B4u) goto L_08AB04B4;
    return;
L_08AB04B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB052C;
      }
      goto L_08AB04C0;
    }
L_08AB04C0:
    ctx.set_gpr(31, 0x08AB04C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1044u, 0x08AAFF94u>(ctx, &aot_mem) && ctx.pc == 0x08AB04C8u) goto L_08AB04C8;
    return;
L_08AB04C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB052C;
      }
      goto L_08AB04D0;
    }
L_08AB04D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AB04E0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    goto L_08AB0630;
L_08AB04E0:
    ctx.set_gpr(31, 0x08AB04E8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB04E8u) goto L_08AB04E8;
    return;
L_08AB04E8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB04F4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 976u, 0x08AAFC48u>(ctx, &aot_mem) && ctx.pc == 0x08AB04F4u) goto L_08AB04F4;
    return;
L_08AB04F4:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB0504u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 118u, 0x0892C874u>(ctx, &aot_mem) && ctx.pc == 0x08AB0504u) goto L_08AB0504;
    return;
L_08AB0504:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
        goto L_08AB0520;
    }
    goto L_08AB0514;
L_08AB0514:
    ctx.set_gpr(31, 0x08AB051Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB0210;
L_08AB051C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    goto L_08AB0520;
L_08AB0520:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB0540;
      }
      goto L_08AB052C;
    }
L_08AB052C:
    ctx.set_gpr(31, 0x08AB0534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 895u, 0x08AAF7C8u>(ctx, &aot_mem) && ctx.pc == 0x08AB0534u) goto L_08AB0534;
    return;
L_08AB0534:
    ctx.set_gpr(31, 0x08AB053Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 977u, 0x08AAFC50u>(ctx, &aot_mem) && ctx.pc == 0x08AB053Cu) goto L_08AB053C;
    return;
L_08AB053C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB0540;
L_08AB0540:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(2064));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB0554:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AB059C;
      }
      goto L_08AB057C;
    }
L_08AB057C:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08AB0580;
L_08AB0580:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2104)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AB059C;
      }
      goto L_08AB058C;
    }
L_08AB058C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08AB0580;
      }
      goto L_08AB059C;
    }
L_08AB059C:
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AB0614;
    }
    goto L_08AB05A4;
L_08AB05A4:
    ctx.set_gpr(31, 0x08AB05ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08AB05ACu) goto L_08AB05AC;
    return;
L_08AB05AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AB05C8u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(2108));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 806u, 0x089574D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB05C8u) goto L_08AB05C8;
    return;
L_08AB05C8:
    ctx.set_gpr(31, 0x08AB05D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB05D0u) goto L_08AB05D0;
    return;
L_08AB05D0:
    ctx.set_gpr(31, 0x08AB05D8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08AB05D8u) goto L_08AB05D8;
    return;
L_08AB05D8:
    ctx.set_gpr(31, 0x08AB05E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 589u, 0x08B0646Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB05E0u) goto L_08AB05E0;
    return;
L_08AB05E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AB0610;
      }
      goto L_08AB05EC;
    }
L_08AB05EC:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_08AB05F4;
L_08AB05F4:
    ctx.set_gpr(31, 0x08AB05FCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(2104));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 910u, 0x08AAF8F8u>(ctx, &aot_mem) && ctx.pc == 0x08AB05FCu) goto L_08AB05FC;
    return;
L_08AB05FC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08AB05F4;
      }
      goto L_08AB060C;
    }
L_08AB060C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), 0u);
    goto L_08AB0610;
L_08AB0610:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB0614;
L_08AB0614:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB0628:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(56));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB0630:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08AB0650u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08AB0650u) goto L_08AB0650;
    return;
L_08AB0650:
    ctx.set_gpr(31, 0x08AB0658u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AB06F0;
L_08AB0658:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB066C;
      }
      goto L_08AB0664;
    }
L_08AB0664:
    ctx.set_gpr(31, 0x08AB066Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08AB066Cu) goto L_08AB066C;
    return;
L_08AB066C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB067C;
      }
      goto L_08AB0674;
    }
L_08AB0674:
    ctx.set_gpr(31, 0x08AB067Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08AB067Cu) goto L_08AB067C;
    return;
L_08AB067C:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_08AB06A0;
    }
    goto L_08AB0684;
L_08AB0684:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AB0698u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22848));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08AB0698u) goto L_08AB0698;
    return;
L_08AB0698:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB06DC;
      }
      goto L_08AB06A0;
    }
L_08AB06A0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, 2230u << 16u);
        goto L_08AB06C4;
    }
    goto L_08AB06A8;
L_08AB06A8:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AB06BCu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22848));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08AB06BCu) goto L_08AB06BC;
    return;
L_08AB06BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB06D8;
      }
      goto L_08AB06C4;
    }
L_08AB06C4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AB06D8u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22852));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08AB06D8u) goto L_08AB06D8;
    return;
L_08AB06D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB06DC;
L_08AB06DC:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB06F0:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28));
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 61u, 0x08844370u>(ctx, &aot_mem); return;
L_08AB06F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-19036)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB073C;
      }
      goto L_08AB0710;
    }
L_08AB0710:
    ctx.set_gpr(31, 0x08AB0718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 37u, 0x088A41E4u>(ctx, &aot_mem) && ctx.pc == 0x08AB0718u) goto L_08AB0718;
    return;
L_08AB0718:
    ctx.set_gpr(31, 0x08AB0720u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 55u, 0x088A432Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB0720u) goto L_08AB0720;
    return;
L_08AB0720:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB0734;
    }
    goto L_08AB0728;
L_08AB0728:
    ctx.set_gpr(2, 2246u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-19036)));
      if (branch_taken) {
          goto L_08AB0744;
      }
      goto L_08AB0734;
    }
L_08AB0734:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-19036), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08AB073C;
L_08AB073C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-19036)));
    goto L_08AB0744;
L_08AB0744:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB0750:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1004), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1008), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1012), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1016), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1020), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1024), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1028), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1084), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1088), 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1864), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(824));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AB07C0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB07C0u) goto L_08AB07C0;
    return;
L_08AB07C0:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08AB07C8;
L_08AB07C8:
    ctx.set_gpr(31, 0x08AB07D0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1092));
    goto L_08AB08C8;
L_08AB07D0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AB07C8;
      }
      goto L_08AB07E0;
    }
L_08AB07E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(70));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(888), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(880), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(864), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(892), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(884), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(100));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(896), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(900), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(904), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(972), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(976), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(980), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(984), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(988), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(992), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(996), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1000), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AB0838u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(908));
    goto L_08AB08AC;
L_08AB0838:
    ctx.set_gpr(31, 0x08AB0840u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(932));
    goto L_08AB08AC;
L_08AB0840:
    ctx.set_gpr(31, 0x08AB0848u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(956));
    goto L_08AB0898;
L_08AB0848:
    ctx.set_gpr(31, 0x08AB0850u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1032));
    goto L_08AB086C;
L_08AB0850:
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
L_08AB086C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(3, 16448u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB0898:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB08AC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB08C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB08DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AB090C;
    }
    goto L_08AB08F4;
L_08AB08F4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AB0908;
      }
      goto L_08AB0900;
    }
L_08AB0900:
    ctx.set_gpr(31, 0x08AB0908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AB0908u) goto L_08AB0908;
    return;
L_08AB0908:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AB090C;
L_08AB090C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB091C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AB0940u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AB06F8;
L_08AB0940:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB0A48;
    }
    goto L_08AB094C;
L_08AB094C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1864)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB0A40;
    }
    goto L_08AB0958;
L_08AB0958:
    ctx.set_gpr(31, 0x08AB0960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AB0960u) goto L_08AB0960;
    return;
L_08AB0960:
    ctx.set_gpr(31, 0x08AB0968u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AB0968u) goto L_08AB0968;
    return;
L_08AB0968:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AB0980u);
    ctx.set_gpr(5, ctx.gpr[3] | 1808u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB0980u) goto L_08AB0980;
    return;
L_08AB0980:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1864), ctx.gpr[2]);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[16] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AB0994;
L_08AB0994:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1864)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1864)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u | 33216u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(31, 0x08AB09CCu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB09CCu) goto L_08AB09CC;
    return;
L_08AB09CC:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(449));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB0994;
      }
      goto L_08AB09E8;
    }
L_08AB09E8:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AB09F4;
L_08AB09F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1864)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u | 33216u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(31, 0x08AB0A0Cu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 122u, 0x088847C4u>(ctx, &aot_mem) && ctx.pc == 0x08AB0A0Cu) goto L_08AB0A0C;
    return;
L_08AB0A0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1864)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0A24;
      }
      goto L_08AB0A1C;
    }
L_08AB0A1C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB0AC8;
      }
      goto L_08AB0A24;
    }
L_08AB0A24:
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(449));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB09F4;
      }
      goto L_08AB0A3C;
    }
L_08AB0A3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB0A40;
L_08AB0A40:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB0A48;
L_08AB0A48:
    ctx.set_gpr(31, 0x08AB0A50u);
    ctx.set_gpr(5, 8u << 16u);
    goto L_08AB1088;
L_08AB0A50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB0A5Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB0F70;
L_08AB0A5C:
    ctx.set_gpr(31, 0x08AB0A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AB0A64u) goto L_08AB0A64;
    return;
L_08AB0A64:
    ctx.set_gpr(31, 0x08AB0A6Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08AB0A6Cu) goto L_08AB0A6C;
    return;
L_08AB0A6C:
    ctx.set_gpr(31, 0x08AB0A74u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 268u, 0x08860F00u>(ctx, &aot_mem) && ctx.pc == 0x08AB0A74u) goto L_08AB0A74;
    return;
L_08AB0A74:
    ctx.set_gpr(31, 0x08AB0A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AB0A7Cu) goto L_08AB0A7C;
    return;
L_08AB0A7C:
    ctx.set_gpr(31, 0x08AB0A84u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08AB0A84u) goto L_08AB0A84;
    return;
L_08AB0A84:
    ctx.set_gpr(31, 0x08AB0A8Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 305u, 0x088A54C4u>(ctx, &aot_mem) && ctx.pc == 0x08AB0A8Cu) goto L_08AB0A8C;
    return;
L_08AB0A8C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB0A9Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AB3554;
L_08AB0A9C:
    ctx.set_gpr(31, 0x08AB0AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AB0AA4u) goto L_08AB0AA4;
    return;
L_08AB0AA4:
    ctx.set_gpr(31, 0x08AB0AACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08AB0AACu) goto L_08AB0AAC;
    return;
L_08AB0AAC:
    ctx.set_gpr(31, 0x08AB0AB4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 304u, 0x088A54BCu>(ctx, &aot_mem) && ctx.pc == 0x08AB0AB4u) goto L_08AB0AB4;
    return;
L_08AB0AB4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB0AC4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB3554;
L_08AB0AC4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB0AC8;
L_08AB0AC8:
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
L_08AB0AE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(956)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB0B78;
      }
      goto L_08AB0B1C;
    }
L_08AB0B1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(872)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(928)));
        goto L_08AB0B7C;
    }
    goto L_08AB0B28;
L_08AB0B28:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(960)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(960), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08AB0B78;
      }
      goto L_08AB0B44;
    }
L_08AB0B44:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(952), ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AB0B50u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AB35D8;
L_08AB0B50:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(932), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(936), 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(964)));
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(956));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(940), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(964)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(944), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(968)));
    ctx.set_gpr(31, 0x08AB0B78u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(948), ctx.gpr[2]);
    goto L_08AB0898;
L_08AB0B78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(928)));
    goto L_08AB0B7C;
L_08AB0B7C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(952)));
        goto L_08AB0C24;
    }
    goto L_08AB0B88;
L_08AB0B88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(872)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0C20;
      }
      goto L_08AB0B94;
    }
L_08AB0B94:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(920)));
    ctx.fpr[21] = ctx.fpr[0] - ctx.fpr[20];
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08AB0BA8u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(920), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AB0BA8u) goto L_08AB0BA8;
    return;
L_08AB0BA8:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AB0BBCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 104u, 0x0883CC30u>(ctx, &aot_mem) && ctx.pc == 0x08AB0BBCu) goto L_08AB0BBC;
    return;
L_08AB0BBC:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(916)));
        goto L_08AB0BD4;
    }
    goto L_08AB0BC4;
L_08AB0BC4:
    ctx.set_gpr(31, 0x08AB0BCCu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08AB36FC;
L_08AB0BCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0C20;
      }
      goto L_08AB0BD4;
    }
L_08AB0BD4:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(912)));
      if (branch_taken) {
          goto L_08AB0C14;
      }
      goto L_08AB0BE8;
    }
L_08AB0BE8:
    ctx.fpr[0] = ctx.fpr[21] / ctx.fpr[1];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(908)));
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AB0C14;
L_08AB0C14:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AB0C20u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AB35E8;
L_08AB0C20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(952)));
    goto L_08AB0C24;
L_08AB0C24:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(25)));
        goto L_08AB0CCC;
    }
    goto L_08AB0C30;
L_08AB0C30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(872)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0CC8;
      }
      goto L_08AB0C3C;
    }
L_08AB0C3C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(944)));
    ctx.fpr[20] = ctx.fpr[0] - ctx.fpr[20];
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AB0C50u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(944), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AB0C50u) goto L_08AB0C50;
    return;
L_08AB0C50:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AB0C64u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 104u, 0x0883CC30u>(ctx, &aot_mem) && ctx.pc == 0x08AB0C64u) goto L_08AB0C64;
    return;
L_08AB0C64:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(940)));
        goto L_08AB0C7C;
    }
    goto L_08AB0C6C;
L_08AB0C6C:
    ctx.set_gpr(31, 0x08AB0C74u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08AB37BC;
L_08AB0C74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0CC8;
      }
      goto L_08AB0C7C;
    }
L_08AB0C7C:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(936)));
      if (branch_taken) {
          goto L_08AB0CBC;
      }
      goto L_08AB0C90;
    }
L_08AB0C90:
    ctx.fpr[0] = ctx.fpr[20] / ctx.fpr[1];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AB0CBC;
L_08AB0CBC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AB0CC8u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AB35E8;
L_08AB0CC8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(25)));
    goto L_08AB0CCC;
L_08AB0CCC:
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(18, 0u + 0u);
        goto L_08AB0D20;
    }
    goto L_08AB0CD8;
L_08AB0CD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(31, 0x08AB0CE4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x08AB0CE4u) goto L_08AB0CE4;
    return;
L_08AB0CE4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1860)));
        goto L_08AB0D00;
    }
    goto L_08AB0CF0;
L_08AB0CF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(31, 0x08AB0CFCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 226u, 0x08884E90u>(ctx, &aot_mem) && ctx.pc == 0x08AB0CFCu) goto L_08AB0CFC;
    return;
L_08AB0CFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1860)));
    goto L_08AB0D00;
L_08AB0D00:
    ctx.set_gpr(31, 0x08AB0D08u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 739u, 0x0888B954u>(ctx, &aot_mem) && ctx.pc == 0x08AB0D08u) goto L_08AB0D08;
    return;
L_08AB0D08:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AB0D1C;
      }
      goto L_08AB0D14;
    }
L_08AB0D14:
    ctx.set_gpr(31, 0x08AB0D1Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08AB3858;
L_08AB0D1C:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08AB0D20;
L_08AB0D20:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    goto L_08AB0D28;
L_08AB0D28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1864)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(31, 0x08AB0D38u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x08AB0D38u) goto L_08AB0D38;
    return;
L_08AB0D38:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08AB0EF0;
    }
    goto L_08AB0D44;
L_08AB0D44:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AB0D90;
    }
    goto L_08AB0D54;
L_08AB0D54:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1864)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1084)));
    ctx.set_gpr(4, ctx.gpr[5] << 1u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1100)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1096)));
    ctx.set_gpr(31, 0x08AB0D88u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 520u, 0x08887C34u>(ctx, &aot_mem) && ctx.pc == 0x08AB0D88u) goto L_08AB0D88;
    return;
L_08AB0D88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0EEC;
      }
      goto L_08AB0D90;
    }
L_08AB0D90:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[2]);
    goto L_08AB0D94;
L_08AB0D94:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(20))))));
    if (ctx.gpr[3] != ctx.gpr[18]) {
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_08AB0ED0;
    }
    goto L_08AB0DA0;
L_08AB0DA0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AB0EBC;
    }
    goto L_08AB0DAC;
L_08AB0DAC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
        goto L_08AB0E98;
    }
    goto L_08AB0DC0;
L_08AB0DC0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08AB0DEC;
      }
      goto L_08AB0DD4;
    }
L_08AB0DD4:
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0DEC;
      }
      goto L_08AB0DE8;
    }
L_08AB0DE8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB0DEC;
L_08AB0DEC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0E04;
      }
      goto L_08AB0DF4;
    }
L_08AB0DF4:
    ctx.set_gpr(3, 32768u << 16u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AB0E04;
      }
      goto L_08AB0E00;
    }
L_08AB0E00:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB0E04;
L_08AB0E04:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0E3C;
      }
      goto L_08AB0E0C;
    }
L_08AB0E0C:
    ctx.set_gpr(3, 0u - ctx.gpr[2]);
    ctx.set_gpr(4, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB0E30;
      }
      goto L_08AB0E20;
    }
L_08AB0E20:
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0E30;
      }
      goto L_08AB0E2C;
    }
L_08AB0E2C:
    ctx.set_gpr(6, 0u + 0u);
    goto L_08AB0E30;
L_08AB0E30:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0E3C;
      }
      goto L_08AB0E38;
    }
L_08AB0E38:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB0E3C;
L_08AB0E3C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0E94;
      }
      goto L_08AB0E44;
    }
L_08AB0E44:
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21))))));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < -5 ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(22))))));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(23))))));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24))))));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25))))));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26))))));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27))))));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AB0E44;
      }
      goto L_08AB0E94;
    }
L_08AB0E94:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    goto L_08AB0E98;
L_08AB0E98:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0EB8;
      }
      goto L_08AB0EA0;
    }
L_08AB0EA0:
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21))))));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AB0EA0;
      }
      goto L_08AB0EB8;
    }
L_08AB0EB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AB0EBC;
L_08AB0EBC:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AB0EDC;
      }
      goto L_08AB0ED0;
    }
L_08AB0ED0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[2]);
        goto L_08AB0D94;
    }
    goto L_08AB0EDC;
L_08AB0EDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1864)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(31, 0x08AB0EECu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 226u, 0x08884E90u>(ctx, &aot_mem) && ctx.pc == 0x08AB0EECu) goto L_08AB0EEC;
    return;
L_08AB0EEC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AB0EF0;
L_08AB0EF0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB0D28;
      }
      goto L_08AB0F00;
    }
L_08AB0F00:
    ctx.set_gpr(31, 0x08AB0F08u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08AB1F40;
L_08AB0F08:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08AB0F50;
    }
    goto L_08AB0F10;
L_08AB0F10:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1004)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB0F4C;
      }
      goto L_08AB0F1C;
    }
L_08AB0F1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1004)));
    goto L_08AB0F20;
L_08AB0F20:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1004), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(972)));
    ctx.set_gpr(31, 0x08AB0F40u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08AB33C4;
L_08AB0F40:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1004)));
    if (static_cast<std::int32_t>(ctx.gpr[3]) >= 0) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1004)));
        goto L_08AB0F20;
    }
    goto L_08AB0F4C;
L_08AB0F4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08AB0F50;
L_08AB0F50:
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
L_08AB0F70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB0FAC;
      }
      goto L_08AB0F94;
    }
L_08AB0F94:
    ctx.set_gpr(2, ctx.gpr[16] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
        goto L_08AB0FB0;
    }
    goto L_08AB0FA4;
L_08AB0FA4:
    ctx.set_gpr(31, 0x08AB0FACu);
    // nop
    goto L_08AB2330;
L_08AB0FAC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    goto L_08AB0FB0;
L_08AB0FB0:
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
        goto L_08AB0FD8;
    }
    goto L_08AB0FBC;
L_08AB0FBC:
    ctx.set_gpr(2, ctx.gpr[16] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0FD4;
      }
      goto L_08AB0FCC;
    }
L_08AB0FCC:
    ctx.set_gpr(31, 0x08AB0FD4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AB2AF8;
L_08AB0FD4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    goto L_08AB0FD8;
L_08AB0FD8:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB0FF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB1034;
      }
      goto L_08AB101C;
    }
L_08AB101C:
    ctx.set_gpr(3, ctx.gpr[16] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
        goto L_08AB1038;
    }
    goto L_08AB102C;
L_08AB102C:
    ctx.set_gpr(31, 0x08AB1034u);
    // nop
    goto L_08AB246C;
L_08AB1034:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    goto L_08AB1038;
L_08AB1038:
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, ctx.gpr[16] & 255u);
        goto L_08AB1060;
    }
    goto L_08AB1044;
L_08AB1044:
    ctx.set_gpr(3, ctx.gpr[16] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB105C;
      }
      goto L_08AB1054;
    }
L_08AB1054:
    ctx.set_gpr(31, 0x08AB105Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AB2BA0;
L_08AB105C:
    ctx.set_gpr(3, ctx.gpr[16] & 255u);
    goto L_08AB1060;
L_08AB1060:
    ctx.set_gpr(3, ~(ctx.gpr[3] | 0u));
    ctx.set_gpr(4, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1088:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    goto L_08AB10B0;
L_08AB10B0:
    ctx.set_gpr(31, 0x08AB10B8u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1092));
    goto L_08AB08C8;
L_08AB10B8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AB10B0;
      }
      goto L_08AB10C8;
    }
L_08AB10C8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1084)));
    if (ctx.gpr[18] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1084)));
        goto L_08AB10F8;
    }
    goto L_08AB10D4;
L_08AB10D4:
    ctx.set_gpr(31, 0x08AB10DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AB10DCu) goto L_08AB10DC;
    return;
L_08AB10DC:
    ctx.set_gpr(31, 0x08AB10E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AB10E4u) goto L_08AB10E4;
    return;
L_08AB10E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB10F0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB10F0u) goto L_08AB10F0;
    return;
L_08AB10F0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1084), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1084)));
    goto L_08AB10F8;
L_08AB10F8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AB113C;
    }
    goto L_08AB1100;
L_08AB1100:
    ctx.set_gpr(31, 0x08AB1108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AB1108u) goto L_08AB1108;
    return;
L_08AB1108:
    ctx.set_gpr(31, 0x08AB1110u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AB1110u) goto L_08AB1110;
    return;
L_08AB1110:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AB1124u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB1124u) goto L_08AB1124;
    return;
L_08AB1124:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1084), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AB1138u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB1138u) goto L_08AB1138;
    return;
L_08AB1138:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AB113C;
L_08AB113C:
    ctx.set_gpr(31, 0x08AB1144u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1088), ctx.gpr[16]);
    goto L_08AB1164;
L_08AB1144:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1164:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AB117Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AB31BC;
L_08AB117C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB1188u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB31BC;
L_08AB1188:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB1194u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    goto L_08AB31BC;
L_08AB1194:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB11A0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    goto L_08AB31BC;
L_08AB11A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB11ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    goto L_08AB31BC;
L_08AB11AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB11B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    goto L_08AB31BC;
L_08AB11B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB11C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    goto L_08AB31BC;
L_08AB11C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB11D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_fpr_bits(23, ctx.fpr_bits(12));
    ctx.set_fpr_bits(22, ctx.fpr_bits(13));
    ctx.set_fpr_bits(21, ctx.fpr_bits(14));
    ctx.set_fpr_bits(20, ctx.fpr_bits(15));
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08AB1238u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AB35E8;
L_08AB1238:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[20] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08AB126C;
    }
    goto L_08AB1244;
L_08AB1244:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[20] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08AB1258;
    }
    goto L_08AB1250;
L_08AB1250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1280;
      }
      goto L_08AB1258;
    }
L_08AB1258:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AB1264u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    goto L_08AB2540;
L_08AB1264:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AB1280;
      }
      goto L_08AB126C;
    }
L_08AB126C:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.set_gpr(31, 0x08AB127Cu);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_08AB2C6C;
L_08AB127C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB1280;
L_08AB1280:
    if (static_cast<std::int32_t>(ctx.gpr[16]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08AB1290;
    }
    goto L_08AB1288;
L_08AB1288:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-7));
      if (branch_taken) {
          goto L_08AB12D0;
      }
      goto L_08AB1290;
    }
L_08AB1290:
    ctx.set_gpr(31, 0x08AB1298u);
    // nop
    goto L_08AB2250;
L_08AB1298:
    ctx.set_gpr(31, 0x08AB12A0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AB2290;
L_08AB12A0:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.set_fpr_bits(13, ctx.fpr_bits(22));
    ctx.set_fpr_bits(14, ctx.fpr_bits(21));
    ctx.set_fpr_bits(15, ctx.fpr_bits(20));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AB12C8u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AB1D08;
L_08AB12C8:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(872), 0u);
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB12D0;
L_08AB12D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1304:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[3];
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB1364;
      }
      goto L_08AB1340;
    }
L_08AB1340:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[19] == ctx.gpr[3]) {
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
        goto L_08AB1354;
    }
    goto L_08AB134C;
L_08AB134C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1370;
      }
      goto L_08AB1354;
    }
L_08AB1354:
    ctx.set_gpr(31, 0x08AB135Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08AB2688;
L_08AB135C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1370;
      }
      goto L_08AB1364;
    }
L_08AB1364:
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AB1370u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_08AB2E14;
L_08AB1370:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB1380;
    }
    goto L_08AB1378;
L_08AB1378:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-6));
      if (branch_taken) {
          goto L_08AB13B4;
      }
      goto L_08AB1380;
    }
L_08AB1380:
    ctx.set_gpr(31, 0x08AB1388u);
    // nop
    goto L_08AB2250;
L_08AB1388:
    ctx.set_gpr(31, 0x08AB1390u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB2290;
L_08AB1390:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AB13A8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB1DF0;
L_08AB13A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB13B4;
L_08AB13B4:
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
L_08AB13D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AB1400;
      }
      goto L_08AB13F8;
    }
L_08AB13F8:
    ctx.set_gpr(31, 0x08AB1400u);
    // nop
    goto L_08AB2808;
L_08AB1400:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB1420;
    }
    goto L_08AB1410;
L_08AB1410:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AB141Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AB2F60;
L_08AB141C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB1420;
L_08AB1420:
    if (ctx.gpr[16] != ctx.gpr[2]) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(872), 0u);
        goto L_08AB142C;
    }
    goto L_08AB1428;
L_08AB1428:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(872), ctx.gpr[2]);
    goto L_08AB142C;
L_08AB142C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1444:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB1468;
      }
      goto L_08AB1460;
    }
L_08AB1460:
    ctx.set_gpr(31, 0x08AB1468u);
    // nop
    goto L_08AB2874;
L_08AB1468:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB1484;
    }
    goto L_08AB1478;
L_08AB1478:
    ctx.set_gpr(31, 0x08AB1480u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB2FBC;
L_08AB1480:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB1484;
L_08AB1484:
    ctx.set_gpr(31, 0x08AB148Cu);
    // nop
    goto L_08AB2250;
L_08AB148C:
    ctx.set_gpr(31, 0x08AB1494u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB2290;
L_08AB1494:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB14AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AB14CCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08AB1AD8;
L_08AB14CC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[18] & 1u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[18] & 2u);
        goto L_08AB14F8;
    }
    goto L_08AB14DC;
L_08AB14DC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB14F4;
      }
      goto L_08AB14EC;
    }
L_08AB14EC:
    ctx.set_gpr(31, 0x08AB14F4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AB2874;
L_08AB14F4:
    ctx.set_gpr(2, ctx.gpr[18] & 2u);
    goto L_08AB14F8;
L_08AB14F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1518;
      }
      goto L_08AB1500;
    }
L_08AB1500:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1518;
      }
      goto L_08AB1510;
    }
L_08AB1510:
    ctx.set_gpr(31, 0x08AB1518u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AB2FBC;
L_08AB1518:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AB152C;
    }
    goto L_08AB1520;
L_08AB1520:
    ctx.set_gpr(31, 0x08AB1528u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AB2250;
L_08AB1528:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AB152C;
L_08AB152C:
    ctx.set_gpr(31, 0x08AB1534u);
    // nop
    goto L_08AB2290;
L_08AB1534:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(872), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1554:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AB1578u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    goto L_08AB2250;
L_08AB1578:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[20])) && ctx.fpr[0] == ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AB159C;
    }
    goto L_08AB158C;
L_08AB158C:
    ctx.set_gpr(31, 0x08AB1594u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AB1444;
L_08AB1594:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB15D4;
      }
      goto L_08AB159C;
    }
L_08AB159C:
    ctx.set_gpr(31, 0x08AB15A4u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AB35D8;
L_08AB15A4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(932), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(936), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(940), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(944), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(952), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB15C8;
      }
      goto L_08AB15C0;
    }
L_08AB15C0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(948), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB15D0;
      }
      goto L_08AB15C8;
    }
L_08AB15C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(948), ctx.gpr[2]);
    goto L_08AB15D0;
L_08AB15D0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB15D4;
L_08AB15D4:
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
L_08AB15EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB1628;
      }
      goto L_08AB1620;
    }
L_08AB1620:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08AB1724;
      }
      goto L_08AB1628;
    }
L_08AB1628:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(31, 0x08AB1634u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x08AB1634u) goto L_08AB1634;
    return;
L_08AB1634:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(31, 0x08AB1644u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 284u, 0x08886364u>(ctx, &aot_mem) && ctx.pc == 0x08AB1644u) goto L_08AB1644;
    return;
L_08AB1644:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AB16AC;
      }
      goto L_08AB164C;
    }
L_08AB164C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < 5 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1080)));
        goto L_08AB16B0;
    }
    goto L_08AB1658;
L_08AB1658:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2536)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AB16AC;
      }
      goto L_08AB1670;
    }
L_08AB1670:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB16AC;
      }
      goto L_08AB167C;
    }
L_08AB167C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AB1688u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 440u, 0x0887ECC0u>(ctx, &aot_mem) && ctx.pc == 0x08AB1688u) goto L_08AB1688;
    return;
L_08AB1688:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AB1698u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 280u, 0x08886320u>(ctx, &aot_mem) && ctx.pc == 0x08AB1698u) goto L_08AB1698;
    return;
L_08AB1698:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2536), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB1720;
      }
      goto L_08AB16AC;
    }
L_08AB16AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1080)));
    goto L_08AB16B0;
L_08AB16B0:
    ctx.set_gpr(31, 0x08AB16B8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 226u, 0x08884E90u>(ctx, &aot_mem) && ctx.pc == 0x08AB16B8u) goto L_08AB16B8;
    return;
L_08AB16B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(31, 0x08AB16C4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 447u, 0x0887F1E8u>(ctx, &aot_mem) && ctx.pc == 0x08AB16C4u) goto L_08AB16C4;
    return;
L_08AB16C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AB16D8u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 413u, 0x0887EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB16D8u) goto L_08AB16D8;
    return;
L_08AB16D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AB16E8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 440u, 0x0887ECC0u>(ctx, &aot_mem) && ctx.pc == 0x08AB16E8u) goto L_08AB16E8;
    return;
L_08AB16E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(31, 0x08AB16F4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 426u, 0x0887EC08u>(ctx, &aot_mem) && ctx.pc == 0x08AB16F4u) goto L_08AB16F4;
    return;
L_08AB16F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1080)));
        goto L_08AB1714;
    }
    goto L_08AB1700;
L_08AB1700:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AB1710u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 280u, 0x08886320u>(ctx, &aot_mem) && ctx.pc == 0x08AB1710u) goto L_08AB1710;
    return;
L_08AB1710:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1080)));
    goto L_08AB1714;
L_08AB1714:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2536), ctx.gpr[18]);
    goto L_08AB1720;
L_08AB1720:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB1724;
L_08AB1724:
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
L_08AB1744:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB1768;
      }
      goto L_08AB1760;
    }
L_08AB1760:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08AB178C;
      }
      goto L_08AB1768;
    }
L_08AB1768:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(31, 0x08AB1774u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 226u, 0x08884E90u>(ctx, &aot_mem) && ctx.pc == 0x08AB1774u) goto L_08AB1774;
    return;
L_08AB1774:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2536), ctx.gpr[4]);
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB178C;
L_08AB178C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB179C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB17CC;
      }
      goto L_08AB17C4;
    }
L_08AB17C4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB1908;
      }
      goto L_08AB17CC;
    }
L_08AB17CC:
    ctx.set_gpr(31, 0x08AB17D4u);
    // nop
    goto L_08AB350C;
L_08AB17D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
        goto L_08AB17E8;
    }
    goto L_08AB17E0;
L_08AB17E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08AB1908;
      }
      goto L_08AB17E8;
    }
L_08AB17E8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(6, 0u + 0u);
        goto L_08AB1824;
    }
    goto L_08AB17F4;
L_08AB17F4:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(21))))));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(22))))));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(23))))));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08AB1874;
      }
      goto L_08AB1824;
    }
L_08AB1824:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08AB1850;
      }
      goto L_08AB182C;
    }
L_08AB182C:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[6]);
    goto L_08AB1830;
L_08AB1830:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(20))))));
    if (ctx.gpr[3] != ctx.gpr[5]) {
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_08AB1844;
    }
    goto L_08AB183C;
L_08AB183C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    goto L_08AB1844;
L_08AB1844:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[6]);
        goto L_08AB1830;
    }
    goto L_08AB1850;
L_08AB1850:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    if (static_cast<std::int32_t>(ctx.gpr[3]) >= 0) {
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
        goto L_08AB1870;
    }
    goto L_08AB1868;
L_08AB1868:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB1908;
      }
      goto L_08AB1870;
    }
L_08AB1870:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AB1874;
L_08AB1874:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, 0u < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[18]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1864)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1084)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[18]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1096)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1100)));
    ctx.set_gpr(31, 0x08AB18ECu);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 520u, 0x08887C34u>(ctx, &aot_mem) && ctx.pc == 0x08AB18ECu) goto L_08AB18EC;
    return;
L_08AB18EC:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AB1908;
    }
    goto L_08AB18F4;
L_08AB18F4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(20))))));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB1908;
L_08AB1908:
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
L_08AB1920:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AB1940;
L_08AB1940:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1864)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AB1950u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 226u, 0x08884E90u>(ctx, &aot_mem) && ctx.pc == 0x08AB1950u) goto L_08AB1950;
    return;
L_08AB1950:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB1940;
      }
      goto L_08AB196C;
    }
L_08AB196C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB198C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08AB19C8;
      }
      goto L_08AB19A4;
    }
L_08AB19A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB19B8;
      }
      goto L_08AB19B0;
    }
L_08AB19B0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB19D4;
      }
      goto L_08AB19B8;
    }
L_08AB19B8:
    ctx.set_gpr(31, 0x08AB19C0u);
    // nop
    goto L_08AB202C;
L_08AB19C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB19D0;
      }
      goto L_08AB19C8;
    }
L_08AB19C8:
    ctx.set_gpr(31, 0x08AB19D0u);
    // nop
    goto L_08AB3050;
L_08AB19D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB19D4;
L_08AB19D4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB19DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB1A40;
      }
      goto L_08AB1A00;
    }
L_08AB1A00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(31, 0x08AB1A0Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 739u, 0x0888B954u>(ctx, &aot_mem) && ctx.pc == 0x08AB1A0Cu) goto L_08AB1A0C;
    return;
L_08AB1A0C:
    ctx.set_gpr(3, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 2u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
        goto L_08AB1A44;
    }
    goto L_08AB1A28;
L_08AB1A28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(31, 0x08AB1A34u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 760u, 0x0888BF24u>(ctx, &aot_mem) && ctx.pc == 0x08AB1A34u) goto L_08AB1A34;
    return;
L_08AB1A34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1A40;
      }
      goto L_08AB1A3C;
    }
L_08AB1A3C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AB1A40;
L_08AB1A40:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    goto L_08AB1A44;
L_08AB1A44:
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AB1A68;
    }
    goto L_08AB1A50;
L_08AB1A50:
    ctx.set_gpr(31, 0x08AB1A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 764u, 0x08AB7188u>(ctx, &aot_mem) && ctx.pc == 0x08AB1A58u) goto L_08AB1A58;
    return;
L_08AB1A58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1A64;
      }
      goto L_08AB1A60;
    }
L_08AB1A60:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AB1A64;
L_08AB1A64:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AB1A68;
L_08AB1A68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1A7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AB1A9Cu);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AB1AD8;
L_08AB1A9C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AB1AAC;
    }
    goto L_08AB1AA4;
L_08AB1AA4:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AB1AAC;
L_08AB1AAC:
    ctx.set_gpr(31, 0x08AB1AB4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    goto L_08AB1AD8;
L_08AB1AB4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AB1AC4;
    }
    goto L_08AB1ABC;
L_08AB1ABC:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AB1AC4;
L_08AB1AC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1AD8:
    ctx.set_gpr(2, ctx.gpr[5] & 1u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[5] & 2u);
        goto L_08AB1AEC;
    }
    goto L_08AB1AE4;
L_08AB1AE4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1024)));
      if (branch_taken) {
          goto L_08AB1AFC;
      }
      goto L_08AB1AEC;
    }
L_08AB1AEC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AB1AFC;
    }
    goto L_08AB1AF4;
L_08AB1AF4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1028)));
      if (branch_taken) {
          goto L_08AB1AFC;
      }
      goto L_08AB1AFC;
    }
L_08AB1AFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1B04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08AB1B3C;
      }
      goto L_08AB1B14;
    }
L_08AB1B14:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[5] == ctx.gpr[2]) {
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
        goto L_08AB1B28;
    }
    goto L_08AB1B20;
L_08AB1B20:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB1B4C;
      }
      goto L_08AB1B28;
    }
L_08AB1B28:
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AB1B34u);
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
    goto L_08AB2070;
L_08AB1B34:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB1B50;
      }
      goto L_08AB1B3C;
    }
L_08AB1B3C:
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AB1B4Cu);
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
    goto L_08AB3084;
L_08AB1B4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB1B50;
L_08AB1B50:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1B58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-19032));
    goto L_08AB1B9C;
L_08AB1B9C:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 1600 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AB1B9C;
      }
      goto L_08AB1BCC;
    }
L_08AB1BCC:
    ctx.set_gpr(2, 17008u << 16u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(3));
    ctx.fpr[23] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AB1BE0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 921u, 0x08AB7E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB1BE0u) goto L_08AB1BE0;
    return;
L_08AB1BE0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, 2246u << 16u);
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
    ctx.set_gpr(17, 0u + 0u);
    ctx.fpr[21] = std::bit_cast<float>(0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19032), 0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-19028));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB1C08;
L_08AB1C08:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 17008u << 16u);
        goto L_08AB1C80;
    }
    goto L_08AB1C10;
L_08AB1C10:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AB1C1Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 853u, 0x08A8AE30u>(ctx, &aot_mem) && ctx.pc == 0x08AB1C1Cu) goto L_08AB1C1C;
    return;
L_08AB1C1C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AB1C30u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 853u, 0x08A8AE30u>(ctx, &aot_mem) && ctx.pc == 0x08AB1C30u) goto L_08AB1C30;
    return;
L_08AB1C30:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) || ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB1C58;
      }
      goto L_08AB1C44;
    }
L_08AB1C44:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[23]) || std::isnan(ctx.fpr[20])) && ctx.fpr[23] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB1C58;
      }
      goto L_08AB1C54;
    }
L_08AB1C54:
    ctx.set_fpr_bits(23, ctx.fpr_bits(20));
    goto L_08AB1C58;
L_08AB1C58:
    if (static_cast<std::int32_t>(ctx.gpr[18]) <= 0) {
    ctx.set_gpr(3, 0u + 0u);
        goto L_08AB1C7C;
    }
    goto L_08AB1C60;
L_08AB1C60:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB1C78;
      }
      goto L_08AB1C68;
    }
L_08AB1C68:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB1C74u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 921u, 0x08AB7E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB1C74u) goto L_08AB1C74;
    return;
L_08AB1C74:
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
    goto L_08AB1C78;
L_08AB1C78:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08AB1C7C;
L_08AB1C7C:
    ctx.set_gpr(2, 17008u << 16u);
    goto L_08AB1C80;
L_08AB1C80:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[23];
    ctx.set_gpr(2, 16384u << 16u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[21] = ctx.fpr[21] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[22])) || ctx.fpr[0] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB1CC4;
      }
      goto L_08AB1CB8;
    }
L_08AB1CB8:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB1CC4;
L_08AB1CC4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 200 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB1C08;
    }
    goto L_08AB1CD0;
L_08AB1CD0:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1D08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1032), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1036), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1040), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1044), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1048), ctx.gpr[17]);
    ctx.fpr[0] = std::bit_cast<float>(0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1056), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1052), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[0])) || ctx.fpr[14] <= ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1060), ctx.gpr[8]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB1D6C;
      }
      goto L_08AB1D4C;
    }
L_08AB1D4C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(908), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(100));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(916), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(920), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(928), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(924), 0u);
    goto L_08AB1D6C;
L_08AB1D6C:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[0])) || ctx.fpr[13] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB1DAC;
    }
    goto L_08AB1D80;
L_08AB1D80:
    ctx.fpr[0] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(956), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(960), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(964), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08AB1DA4;
      }
      goto L_08AB1D98;
    }
L_08AB1D98:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(968), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB1DDC;
      }
      goto L_08AB1DA4;
    }
L_08AB1DA4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(968), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB1DDC;
      }
      goto L_08AB1DAC;
    }
L_08AB1DAC:
    ctx.set_gpr(31, 0x08AB1DB4u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AB35D8;
L_08AB1DB4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(932), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(936), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(940), 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(944), 0u);
      if (branch_taken) {
          goto L_08AB1DD4;
      }
      goto L_08AB1DC8;
    }
L_08AB1DC8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(948), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB1DDC;
      }
      goto L_08AB1DD4;
    }
L_08AB1DD4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(948), ctx.gpr[3]);
    goto L_08AB1DDC;
L_08AB1DDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1DF0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1064), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1068), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1076), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1E04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB1E80;
      }
      goto L_08AB1E28;
    }
L_08AB1E28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(31, 0x08AB1E34u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x08AB1E34u) goto L_08AB1E34;
    return;
L_08AB1E34:
    ctx.set_gpr(3, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(4, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] ^ 2u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] ^ 3u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 4u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AB1E84;
    }
    goto L_08AB1E68;
L_08AB1E68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(31, 0x08AB1E74u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 284u, 0x08886364u>(ctx, &aot_mem) && ctx.pc == 0x08AB1E74u) goto L_08AB1E74;
    return;
L_08AB1E74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1E80;
      }
      goto L_08AB1E7C;
    }
L_08AB1E7C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AB1E80;
L_08AB1E80:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AB1E84;
L_08AB1E84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1E98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB1F24;
      }
      goto L_08AB1EC0;
    }
L_08AB1EC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1864)));
    ctx.set_gpr(16, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AB1ED4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x08AB1ED4u) goto L_08AB1ED4;
    return;
L_08AB1ED4:
    ctx.set_gpr(3, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(4, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] ^ 2u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] ^ 3u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 4u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AB1F28;
    }
    goto L_08AB1F08;
L_08AB1F08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1864)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AB1F18u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 284u, 0x08886364u>(ctx, &aot_mem) && ctx.pc == 0x08AB1F18u) goto L_08AB1F18;
    return;
L_08AB1F18:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1F24;
      }
      goto L_08AB1F20;
    }
L_08AB1F20:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AB1F24;
L_08AB1F24:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AB1F28;
L_08AB1F28:
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
L_08AB1F40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AB1F64;
L_08AB1F64:
    ctx.set_gpr(31, 0x08AB1F6Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AB1E98;
L_08AB1F6C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08AB1F7C;
    }
    goto L_08AB1F74;
L_08AB1F74:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AB1F88;
      }
      goto L_08AB1F7C;
    }
L_08AB1F7C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AB1F64;
    }
    goto L_08AB1F88;
L_08AB1F88:
    ctx.set_gpr(2, ctx.gpr[17] & 255u);
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
L_08AB1FA4:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(864)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1FB4:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(872)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1FC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-960));
      if (branch_taken) {
          goto L_08AB2020;
      }
      goto L_08AB1FD4;
    }
L_08AB1FD4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_gpr(31, 0x08AB1FE0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AB1FE0u) goto L_08AB1FE0;
    return;
L_08AB1FE0:
    ctx.set_gpr(7, 16473u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AB1FF4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB1FF4u) goto L_08AB1FF4;
    return;
L_08AB1FF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB2000u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 460u, 0x0880E430u>(ctx, &aot_mem) && ctx.pc == 0x08AB2000u) goto L_08AB2000;
    return;
L_08AB2000:
    ctx.set_gpr(5, 16489u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB2014u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB2014u) goto L_08AB2014;
    return;
L_08AB2014:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AB2020u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08AB2020u) goto L_08AB2020;
    return;
L_08AB2020:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB202C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AB2050u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 746u, 0x0888B9B0u>(ctx, &aot_mem) && ctx.pc == 0x08AB2050u) goto L_08AB2050;
    return;
L_08AB2050:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2070:
    // nop
    goto L_08AB1B58;
L_08AB2078:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(824));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2080:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2088:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2090:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB20DC;
      }
      goto L_08AB20A8;
    }
L_08AB20A8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(31, 0x08AB20B4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AB20B4u) goto L_08AB20B4;
    return;
L_08AB20B4:
    ctx.set_gpr(31, 0x08AB20BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AB20BCu) goto L_08AB20BC;
    return;
L_08AB20BC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AB20D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB20D0u) goto L_08AB20D0;
    return;
L_08AB20D0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB20E0;
      }
      goto L_08AB20DC;
    }
L_08AB20DC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB20E0;
L_08AB20E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB20F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB2130;
      }
      goto L_08AB210C;
    }
L_08AB210C:
    ctx.set_gpr(31, 0x08AB2114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AB2114u) goto L_08AB2114;
    return;
L_08AB2114:
    ctx.set_gpr(31, 0x08AB211Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AB211Cu) goto L_08AB211C;
    return;
L_08AB211C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB2128u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB2128u) goto L_08AB2128;
    return;
L_08AB2128:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    goto L_08AB2130;
L_08AB2130:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2144:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB214C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2154:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB21A0;
      }
      goto L_08AB216C;
    }
L_08AB216C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9216));
    ctx.set_gpr(31, 0x08AB2178u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AB2178u) goto L_08AB2178;
    return;
L_08AB2178:
    ctx.set_gpr(31, 0x08AB2180u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AB2180u) goto L_08AB2180;
    return;
L_08AB2180:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AB2194u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB2194u) goto L_08AB2194;
    return;
L_08AB2194:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB21A4;
      }
      goto L_08AB21A0;
    }
L_08AB21A0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB21A4;
L_08AB21A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB21B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB21F4;
      }
      goto L_08AB21D0;
    }
L_08AB21D0:
    ctx.set_gpr(31, 0x08AB21D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AB21D8u) goto L_08AB21D8;
    return;
L_08AB21D8:
    ctx.set_gpr(31, 0x08AB21E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AB21E0u) goto L_08AB21E0;
    return;
L_08AB21E0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB21ECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB21ECu) goto L_08AB21EC;
    return;
L_08AB21EC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), 0u);
    goto L_08AB21F4;
L_08AB21F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2208:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19032));
    goto L_08AB2214;
L_08AB2214:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) || ctx.fpr[0] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 1600 ? 1u : 0u);
        goto L_08AB223C;
    }
    goto L_08AB2228;
L_08AB2228:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 1600 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB2214;
      }
      goto L_08AB2238;
    }
L_08AB2238:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 1600 ? 1u : 0u);
    goto L_08AB223C;
L_08AB223C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2248;
      }
      goto L_08AB2244;
    }
L_08AB2244:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AB2248;
L_08AB2248:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2250:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AB2268u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(908));
    goto L_08AB08AC;
L_08AB2268:
    ctx.set_gpr(31, 0x08AB2270u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(932));
    goto L_08AB08AC;
L_08AB2270:
    ctx.set_gpr(31, 0x08AB2278u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(956));
    goto L_08AB0898;
L_08AB2278:
    ctx.set_gpr(31, 0x08AB2280u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1032));
    goto L_08AB086C;
L_08AB2280:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2290:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1064));
    goto L_08AB2298;
L_08AB2298:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB22B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1064)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB22C0;
      }
      goto L_08AB22BC;
    }
L_08AB22BC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB22C0;
L_08AB22C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1068)));
    if (ctx.gpr[3] == ctx.gpr[6]) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1072)));
        goto L_08AB22D4;
    }
    goto L_08AB22CC;
L_08AB22CC:
    ctx.set_gpr(2, 0u + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1072)));
    goto L_08AB22D4;
L_08AB22D4:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) && ctx.fpr[0] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB22E8;
      }
      goto L_08AB22E4;
    }
L_08AB22E4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB22E8;
L_08AB22E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB22F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1064)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB2300;
      }
      goto L_08AB22FC;
    }
L_08AB22FC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB2300;
L_08AB2300:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1072)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) && ctx.fpr[0] == ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1076)));
        goto L_08AB231C;
    }
    goto L_08AB2314;
L_08AB2314:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1076)));
    goto L_08AB231C;
L_08AB231C:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AB2328;
      }
      goto L_08AB2324;
    }
L_08AB2324:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB2328;
L_08AB2328:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2330:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1080)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB23C4;
      }
      goto L_08AB2348;
    }
L_08AB2348:
    ctx.set_gpr(31, 0x08AB2350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AB2350u) goto L_08AB2350;
    return;
L_08AB2350:
    ctx.set_gpr(31, 0x08AB2358u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AB2358u) goto L_08AB2358;
    return;
L_08AB2358:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AB2370u);
    ctx.set_gpr(5, ctx.gpr[3] | 2540u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB2370u) goto L_08AB2370;
    return;
L_08AB2370:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1080), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AB2390u);
    ctx.set_gpr(6, ctx.gpr[2] | 2532u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB2390u) goto L_08AB2390;
    return;
L_08AB2390:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2536), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, ctx.gpr[2] | 2532u);
    ctx.set_gpr(31, 0x08AB23BCu);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 122u, 0x088847C4u>(ctx, &aot_mem) && ctx.pc == 0x08AB23BCu) goto L_08AB23BC;
    return;
L_08AB23BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1080)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AB23C4;
L_08AB23C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1860)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AB245C;
    }
    goto L_08AB23D0;
L_08AB23D0:
    ctx.set_gpr(31, 0x08AB23D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AB23D8u) goto L_08AB23D8;
    return;
L_08AB23D8:
    ctx.set_gpr(31, 0x08AB23E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AB23E0u) goto L_08AB23E0;
    return;
L_08AB23E0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 8u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AB23F8u);
    ctx.set_gpr(5, ctx.gpr[3] | 9944u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB23F8u) goto L_08AB23F8;
    return;
L_08AB23F8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1860), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AB2414u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB2414u) goto L_08AB2414;
    return;
L_08AB2414:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(2, 8u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(9940), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(2, 8u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AB2444u);
    ctx.set_gpr(7, ctx.gpr[2] | 9936u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 721u, 0x0888B478u>(ctx, &aot_mem) && ctx.pc == 0x08AB2444u) goto L_08AB2444;
    return;
L_08AB2444:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1860)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB2458;
      }
      goto L_08AB2450;
    }
L_08AB2450:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB245C;
      }
      goto L_08AB2458;
    }
L_08AB2458:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB245C;
L_08AB245C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB246C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1080)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB24D4;
      }
      goto L_08AB2484;
    }
L_08AB2484:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB24B4;
      }
      goto L_08AB2490;
    }
L_08AB2490:
    ctx.set_gpr(31, 0x08AB2498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 130u, 0x08884898u>(ctx, &aot_mem) && ctx.pc == 0x08AB2498u) goto L_08AB2498;
    return;
L_08AB2498:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2536), ctx.gpr[4]);
    goto L_08AB24B4;
L_08AB24B4:
    ctx.set_gpr(31, 0x08AB24BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AB24BCu) goto L_08AB24BC;
    return;
L_08AB24BC:
    ctx.set_gpr(31, 0x08AB24C4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AB24C4u) goto L_08AB24C4;
    return;
L_08AB24C4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(31, 0x08AB24D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB24D0u) goto L_08AB24D0;
    return;
L_08AB24D0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1080), 0u);
    goto L_08AB24D4;
L_08AB24D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1860)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AB2534;
    }
    goto L_08AB24E0;
L_08AB24E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2510;
      }
      goto L_08AB24EC;
    }
L_08AB24EC:
    ctx.set_gpr(31, 0x08AB24F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 727u, 0x0888B56Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB24F4u) goto L_08AB24F4;
    return;
L_08AB24F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(2, 8u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(9940), ctx.gpr[4]);
    goto L_08AB2510;
L_08AB2510:
    ctx.set_gpr(31, 0x08AB2518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AB2518u) goto L_08AB2518;
    return;
L_08AB2518:
    ctx.set_gpr(31, 0x08AB2520u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AB2520u) goto L_08AB2520;
    return;
L_08AB2520:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(31, 0x08AB252Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB252Cu) goto L_08AB252C;
    return;
L_08AB252C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1860), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB2534;
L_08AB2534:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2540:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB2580;
      }
      goto L_08AB2578;
    }
L_08AB2578:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08AB2664;
      }
      goto L_08AB2580;
    }
L_08AB2580:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(31, 0x08AB258Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 739u, 0x0888B954u>(ctx, &aot_mem) && ctx.pc == 0x08AB258Cu) goto L_08AB258C;
    return;
L_08AB258C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(31, 0x08AB259Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 760u, 0x0888BF24u>(ctx, &aot_mem) && ctx.pc == 0x08AB259Cu) goto L_08AB259C;
    return;
L_08AB259C:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AB25B8u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08AB22B0;
L_08AB25B8:
    ctx.set_gpr(3, ctx.gpr[18] + 0u);
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08AB25CC;
    }
    goto L_08AB25C4;
L_08AB25C4:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_08AB25CC;
L_08AB25CC:
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB25DC;
    }
    goto L_08AB25D4;
L_08AB25D4:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB25DC;
L_08AB25DC:
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB25EC;
    }
    goto L_08AB25E4;
L_08AB25E4:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB25EC;
L_08AB25EC:
    if (ctx.gpr[18] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1860)));
        goto L_08AB260C;
    }
    goto L_08AB25F4;
L_08AB25F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AB2604u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 750u, 0x0888BEA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB2604u) goto L_08AB2604;
    return;
L_08AB2604:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1860)));
      if (branch_taken) {
          goto L_08AB264C;
      }
      goto L_08AB260C;
    }
L_08AB260C:
    ctx.set_gpr(31, 0x08AB2614u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 735u, 0x0888B920u>(ctx, &aot_mem) && ctx.pc == 0x08AB2614u) goto L_08AB2614;
    return;
L_08AB2614:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AB2624u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 24u, 0x0888C77Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB2624u) goto L_08AB2624;
    return;
L_08AB2624:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AB2638u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 731u, 0x0888B774u>(ctx, &aot_mem) && ctx.pc == 0x08AB2638u) goto L_08AB2638;
    return;
L_08AB2638:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AB2648u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 750u, 0x0888BEA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB2648u) goto L_08AB2648;
    return;
L_08AB2648:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1860)));
    goto L_08AB264C;
L_08AB264C:
    ctx.set_gpr(2, 8u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(9940), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1024), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB2664;
L_08AB2664:
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
L_08AB2688:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB26D0;
      }
      goto L_08AB26C8;
    }
L_08AB26C8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08AB27E0;
      }
      goto L_08AB26D0;
    }
L_08AB26D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(31, 0x08AB26DCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 739u, 0x0888B954u>(ctx, &aot_mem) && ctx.pc == 0x08AB26DCu) goto L_08AB26DC;
    return;
L_08AB26DC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(31, 0x08AB26ECu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 760u, 0x0888BF24u>(ctx, &aot_mem) && ctx.pc == 0x08AB26ECu) goto L_08AB26EC;
    return;
L_08AB26EC:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AB2708u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08AB22B0;
L_08AB2708:
    ctx.set_gpr(3, ctx.gpr[18] + 0u);
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08AB271C;
    }
    goto L_08AB2714;
L_08AB2714:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_08AB271C;
L_08AB271C:
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB272C;
    }
    goto L_08AB2724;
L_08AB2724:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB272C;
L_08AB272C:
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB273C;
    }
    goto L_08AB2734;
L_08AB2734:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB273C;
L_08AB273C:
    if (ctx.gpr[18] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AB27E0;
    }
    goto L_08AB2744;
L_08AB2744:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(31, 0x08AB2750u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 735u, 0x0888B920u>(ctx, &aot_mem) && ctx.pc == 0x08AB2750u) goto L_08AB2750;
    return;
L_08AB2750:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AB2760u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 24u, 0x0888C77Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB2760u) goto L_08AB2760;
    return;
L_08AB2760:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AB2774u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 731u, 0x0888B774u>(ctx, &aot_mem) && ctx.pc == 0x08AB2774u) goto L_08AB2774;
    return;
L_08AB2774:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AB2784u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 750u, 0x0888BEA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB2784u) goto L_08AB2784;
    return;
L_08AB2784:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(2, 8u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(9940), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AB27DC;
      }
      goto L_08AB2798;
    }
L_08AB2798:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1860)));
    goto L_08AB279C;
L_08AB279C:
    ctx.set_gpr(31, 0x08AB27A4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 739u, 0x0888B954u>(ctx, &aot_mem) && ctx.pc == 0x08AB27A4u) goto L_08AB27A4;
    return;
L_08AB27A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AB27DC;
      }
      goto L_08AB27B0;
    }
L_08AB27B0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AB27DC;
      }
      goto L_08AB27BC;
    }
L_08AB27BC:
    ctx.set_gpr(31, 0x08AB27C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 895u, 0x08AAF7C8u>(ctx, &aot_mem) && ctx.pc == 0x08AB27C4u) goto L_08AB27C4;
    return;
L_08AB27C4:
    ctx.set_gpr(31, 0x08AB27CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AB27CCu) goto L_08AB27CC;
    return;
L_08AB27CC:
    ctx.set_gpr(31, 0x08AB27D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 977u, 0x08AAFC50u>(ctx, &aot_mem) && ctx.pc == 0x08AB27D4u) goto L_08AB27D4;
    return;
L_08AB27D4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1860)));
      if (branch_taken) {
          goto L_08AB279C;
      }
      goto L_08AB27DC;
    }
L_08AB27DC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB27E0;
L_08AB27E0:
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
L_08AB2808:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB2834;
      }
      goto L_08AB282C;
    }
L_08AB282C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08AB2860;
      }
      goto L_08AB2834;
    }
L_08AB2834:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(31, 0x08AB2840u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 739u, 0x0888B954u>(ctx, &aot_mem) && ctx.pc == 0x08AB2840u) goto L_08AB2840;
    return;
L_08AB2840:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AB2860;
    }
    goto L_08AB284C;
L_08AB284C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AB285Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 750u, 0x0888BEA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB285Cu) goto L_08AB285C;
    return;
L_08AB285C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB2860;
L_08AB2860:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2874:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB2898;
      }
      goto L_08AB2890;
    }
L_08AB2890:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08AB28C0;
      }
      goto L_08AB2898;
    }
L_08AB2898:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(31, 0x08AB28A4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 735u, 0x0888B920u>(ctx, &aot_mem) && ctx.pc == 0x08AB28A4u) goto L_08AB28A4;
    return;
L_08AB28A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(3, 8u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(9940), ctx.gpr[5]);
    ctx.set_gpr(2, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1024), 0u);
    goto L_08AB28C0;
L_08AB28C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB28D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB28FC;
      }
      goto L_08AB28F4;
    }
L_08AB28F4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08AB2944;
      }
      goto L_08AB28FC;
    }
L_08AB28FC:
    ctx.set_gpr(31, 0x08AB2904u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AB3544;
L_08AB2904:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 20971u << 16u);
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] | 34079u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 5u));
    ctx.set_gpr(31, 0x08AB2930u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08AB1FC4;
L_08AB2930:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AB2940u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 1u, 0x0888C40Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB2940u) goto L_08AB2940;
    return;
L_08AB2940:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB2944;
L_08AB2944:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2958:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB2984;
      }
      goto L_08AB297C;
    }
L_08AB297C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08AB29A4;
      }
      goto L_08AB2984;
    }
L_08AB2984:
    ctx.set_gpr(31, 0x08AB298Cu);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    goto L_08AB1FC4;
L_08AB298C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1860)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AB29A0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 13u, 0x0888C550u>(ctx, &aot_mem) && ctx.pc == 0x08AB29A0u) goto L_08AB29A0;
    return;
L_08AB29A0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB29A4;
L_08AB29A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB29B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB29E4;
      }
      goto L_08AB29DC;
    }
L_08AB29DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08AB2A2C;
      }
      goto L_08AB29E4;
    }
L_08AB29E4:
    ctx.set_gpr(31, 0x08AB29ECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB3544;
L_08AB29EC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 20971u << 16u);
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] | 34079u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 5u));
    ctx.set_gpr(31, 0x08AB2A18u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08AB1FC4;
L_08AB2A18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1080)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AB2A28u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x08885644u>(ctx, &aot_mem) && ctx.pc == 0x08AB2A28u) goto L_08AB2A28;
    return;
L_08AB2A28:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB2A2C;
L_08AB2A2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2A40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB2A74;
      }
      goto L_08AB2A6C;
    }
L_08AB2A6C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08AB2ADC;
      }
      goto L_08AB2A74;
    }
L_08AB2A74:
    ctx.set_gpr(31, 0x08AB2A7Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB3544;
L_08AB2A7C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 20971u << 16u);
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] | 34079u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 5u));
    ctx.set_gpr(31, 0x08AB2AA8u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08AB1FC4;
L_08AB2AA8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AB2AB4;
L_08AB2AB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1864)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AB2AC8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x08885644u>(ctx, &aot_mem) && ctx.pc == 0x08AB2AC8u) goto L_08AB2AC8;
    return;
L_08AB2AC8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB2AB4;
      }
      goto L_08AB2AD8;
    }
L_08AB2AD8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB2ADC;
L_08AB2ADC:
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
L_08AB2AF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12632)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB2B20;
      }
      goto L_08AB2B18;
    }
L_08AB2B18:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AB2B90;
      }
      goto L_08AB2B20;
    }
L_08AB2B20:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22880)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AB2B38u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.pc = 0x08B0DDF4u;
    return;
L_08AB2B38:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(3, 2230u << 16u);
        goto L_08AB2B48;
    }
    goto L_08AB2B40;
L_08AB2B40:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB2B90;
      }
      goto L_08AB2B48;
    }
L_08AB2B48:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(22884), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AB2B54u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB2090;
L_08AB2B54:
    ctx.set_gpr(31, 0x08AB2B5Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB2154;
L_08AB2B5C:
    ctx.set_gpr(31, 0x08AB2B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 891u, 0x08AB7BF0u>(ctx, &aot_mem) && ctx.pc == 0x08AB2B64u) goto L_08AB2B64;
    return;
L_08AB2B64:
    ctx.set_gpr(31, 0x08AB2B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 513u, 0x08AB62ECu>(ctx, &aot_mem) && ctx.pc == 0x08AB2B6Cu) goto L_08AB2B6C;
    return;
L_08AB2B6C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 2246u << 16u);
        goto L_08AB2B7C;
    }
    goto L_08AB2B74;
L_08AB2B74:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB2B90;
      }
      goto L_08AB2B7C;
    }
L_08AB2B7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12632)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 2u);
    ctx.set_gpr(2, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-12632), ctx.gpr[4]);
    goto L_08AB2B90;
L_08AB2B90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2BA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12632)));
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB2C5C;
      }
      goto L_08AB2BC0;
    }
L_08AB2BC0:
    ctx.set_gpr(31, 0x08AB2BC8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    goto L_08AB14AC;
L_08AB2BC8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12632)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2BFC;
      }
      goto L_08AB2BDC;
    }
L_08AB2BDC:
    ctx.set_gpr(31, 0x08AB2BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 531u, 0x08AB6420u>(ctx, &aot_mem) && ctx.pc == 0x08AB2BE4u) goto L_08AB2BE4;
    return;
L_08AB2BE4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12632)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-12632), ctx.gpr[3]);
    goto L_08AB2BFC;
L_08AB2BFC:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB2C20;
      }
      goto L_08AB2C0C;
    }
L_08AB2C0C:
    ctx.set_gpr(31, 0x08AB2C14u);
    // nop
    ctx.pc = 0x08B0DD74u;
    return;
L_08AB2C14:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2230u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(22884), ctx.gpr[3]);
    goto L_08AB2C20;
L_08AB2C20:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22892)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB2C44;
      }
      goto L_08AB2C30;
    }
L_08AB2C30:
    ctx.set_gpr(31, 0x08AB2C38u);
    // nop
    ctx.pc = 0x08B0DD6Cu;
    return;
L_08AB2C38:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2230u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(22892), ctx.gpr[3]);
    goto L_08AB2C44;
L_08AB2C44:
    ctx.set_gpr(31, 0x08AB2C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 899u, 0x08AB7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AB2C4Cu) goto L_08AB2C4C;
    return;
L_08AB2C4C:
    ctx.set_gpr(31, 0x08AB2C54u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB20F0;
L_08AB2C54:
    ctx.set_gpr(31, 0x08AB2C5Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB21B4;
L_08AB2C5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2C6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB2CB0;
      }
      goto L_08AB2CA8;
    }
L_08AB2CA8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08AB2DF0;
      }
      goto L_08AB2CB0;
    }
L_08AB2CB0:
    ctx.set_gpr(31, 0x08AB2CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 520u, 0x08AB9BE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB2CB8u) goto L_08AB2CB8;
    return;
L_08AB2CB8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08AB2CC8;
    }
    goto L_08AB2CC0;
L_08AB2CC0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB2DF0;
      }
      goto L_08AB2CC8;
    }
L_08AB2CC8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(31, 0x08AB2CE0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB22F0;
L_08AB2CE0:
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB2CF4;
    }
    goto L_08AB2CEC;
L_08AB2CEC:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB2CF4;
L_08AB2CF4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB2DB4;
      }
      goto L_08AB2CFC;
    }
L_08AB2CFC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AB2D08u);
    ctx.set_gpr(16, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 934u, 0x08AB7F04u>(ctx, &aot_mem) && ctx.pc == 0x08AB2D08u) goto L_08AB2D08;
    return;
L_08AB2D08:
    if (ctx.gpr[18] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB2D64;
    }
    goto L_08AB2D10;
L_08AB2D10:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AB2D1Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AB2208;
L_08AB2D1C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (static_cast<std::int32_t>(ctx.gpr[16]) < 0) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AB2DF0;
    }
    goto L_08AB2D28;
L_08AB2D28:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 1600 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2D40;
      }
      goto L_08AB2D34;
    }
L_08AB2D34:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2DF0;
      }
      goto L_08AB2D40;
    }
L_08AB2D40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AB2D60;
      }
      goto L_08AB2D48;
    }
L_08AB2D48:
    ctx.set_gpr(31, 0x08AB2D50u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 931u, 0x08AB7ED8u>(ctx, &aot_mem) && ctx.pc == 0x08AB2D50u) goto L_08AB2D50;
    return;
L_08AB2D50:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB2D60;
      }
      goto L_08AB2D58;
    }
L_08AB2D58:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB2DF0;
      }
      goto L_08AB2D60;
    }
L_08AB2D60:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB2D64;
L_08AB2D64:
    ctx.set_gpr(31, 0x08AB2D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 890u, 0x08AB7BE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB2D6Cu) goto L_08AB2D6C;
    return;
L_08AB2D6C:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AB2D84u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.pc = 0x08B0DDA4u;
    return;
L_08AB2D84:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08AB2D98;
    }
    goto L_08AB2D8C;
L_08AB2D8C:
    ctx.set_gpr(31, 0x08AB2D94u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AB2FBC;
L_08AB2D94:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AB2D98;
L_08AB2D98:
    ctx.set_gpr(31, 0x08AB2DA0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB3094;
L_08AB2DA0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB2DB4;
      }
      goto L_08AB2DAC;
    }
L_08AB2DAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2DF0;
      }
      goto L_08AB2DB4;
    }
L_08AB2DB4:
    if (ctx.gpr[19] == 0u) {
    ctx.set_gpr(4, 0u + 0u);
        goto L_08AB2DCC;
    }
    goto L_08AB2DBC;
L_08AB2DBC:
    ctx.set_gpr(31, 0x08AB2DC4u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 763u, 0x08AB7178u>(ctx, &aot_mem) && ctx.pc == 0x08AB2DC4u) goto L_08AB2DC4;
    return;
L_08AB2DC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2DD4;
      }
      goto L_08AB2DCC;
    }
L_08AB2DCC:
    ctx.set_gpr(31, 0x08AB2DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 763u, 0x08AB7178u>(ctx, &aot_mem) && ctx.pc == 0x08AB2DD4u) goto L_08AB2DD4;
    return;
L_08AB2DD4:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(31, 0x08AB2DE4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4096));
    ctx.pc = 0x08B0DD4Cu;
    return;
L_08AB2DE4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1028), ctx.gpr[3]);
    goto L_08AB2DF0;
L_08AB2DF0:
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
L_08AB2E14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB2E54;
      }
      goto L_08AB2E4C;
    }
L_08AB2E4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08AB2F40;
      }
      goto L_08AB2E54;
    }
L_08AB2E54:
    ctx.set_gpr(31, 0x08AB2E5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 520u, 0x08AB9BE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB2E5Cu) goto L_08AB2E5C;
    return;
L_08AB2E5C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AB2E6C;
    }
    goto L_08AB2E64;
L_08AB2E64:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB2F40;
      }
      goto L_08AB2E6C;
    }
L_08AB2E6C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB2E80u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB22F0;
L_08AB2E80:
    ctx.set_gpr(3, ctx.gpr[19] + 0u);
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB2E94;
    }
    goto L_08AB2E8C;
L_08AB2E8C:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB2E94;
L_08AB2E94:
    if (ctx.gpr[19] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AB2F40;
    }
    goto L_08AB2E9C;
L_08AB2E9C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB2EA8u);
    ctx.set_gpr(19, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 934u, 0x08AB7F04u>(ctx, &aot_mem) && ctx.pc == 0x08AB2EA8u) goto L_08AB2EA8;
    return;
L_08AB2EA8:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08AB2F04;
    }
    goto L_08AB2EB0;
L_08AB2EB0:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AB2EBCu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AB2208;
L_08AB2EBC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (static_cast<std::int32_t>(ctx.gpr[19]) < 0) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AB2F40;
    }
    goto L_08AB2EC8;
L_08AB2EC8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 1600 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2EE0;
      }
      goto L_08AB2ED4;
    }
L_08AB2ED4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2F40;
      }
      goto L_08AB2EE0;
    }
L_08AB2EE0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB2F00;
      }
      goto L_08AB2EE8;
    }
L_08AB2EE8:
    ctx.set_gpr(31, 0x08AB2EF0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 931u, 0x08AB7ED8u>(ctx, &aot_mem) && ctx.pc == 0x08AB2EF0u) goto L_08AB2EF0;
    return;
L_08AB2EF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB2F00;
      }
      goto L_08AB2EF8;
    }
L_08AB2EF8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB2F40;
      }
      goto L_08AB2F00;
    }
L_08AB2F00:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08AB2F04;
L_08AB2F04:
    ctx.set_gpr(31, 0x08AB2F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 890u, 0x08AB7BE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB2F0Cu) goto L_08AB2F0C;
    return;
L_08AB2F0C:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AB2F24u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.pc = 0x08B0DDA4u;
    return;
L_08AB2F24:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AB2F38;
    }
    goto L_08AB2F2C;
L_08AB2F2C:
    ctx.set_gpr(31, 0x08AB2F34u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AB2FBC;
L_08AB2F34:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AB2F38;
L_08AB2F38:
    ctx.set_gpr(31, 0x08AB2F40u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08AB3094;
L_08AB2F40:
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
L_08AB2F60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB2F80;
    }
    goto L_08AB2F78;
L_08AB2F78:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08AB2FB0;
      }
      goto L_08AB2F80;
    }
L_08AB2F80:
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(2, 2230u << 16u);
        goto L_08AB2FA0;
    }
    goto L_08AB2F88;
L_08AB2F88:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(31, 0x08AB2F98u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-4097));
    ctx.pc = 0x08B0DE3Cu;
    return;
L_08AB2F98:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB2FB0;
      }
      goto L_08AB2FA0;
    }
L_08AB2FA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(31, 0x08AB2FACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4096));
    ctx.pc = 0x08B0DD4Cu;
    return;
L_08AB2FAC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB2FB0;
L_08AB2FB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2FBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB2FE4;
      }
      goto L_08AB2FDC;
    }
L_08AB2FDC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08AB3034;
      }
      goto L_08AB2FE4;
    }
L_08AB2FE4:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-257));
    ctx.set_gpr(31, 0x08AB2FF8u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.pc = 0x08B0DE3Cu;
    return;
L_08AB2FF8:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(31, 0x08AB3008u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4096));
    ctx.pc = 0x08B0DD4Cu;
    return;
L_08AB3008:
    ctx.set_gpr(31, 0x08AB3010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 724u, 0x08ABA6B0u>(ctx, &aot_mem) && ctx.pc == 0x08AB3010u) goto L_08AB3010;
    return;
L_08AB3010:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22888)));
    ctx.set_gpr(31, 0x08AB3020u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = 0x08B0DD8Cu;
    return;
L_08AB3020:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1028), 0u);
        goto L_08AB3030;
    }
    goto L_08AB3028;
L_08AB3028:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1028), 0u);
    goto L_08AB3030;
L_08AB3030:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AB3034;
L_08AB3034:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3048:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3050:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3070;
      }
      goto L_08AB3068;
    }
L_08AB3068:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08AB3078;
      }
      goto L_08AB3070;
    }
L_08AB3070:
    ctx.set_gpr(31, 0x08AB3078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 753u, 0x08AB70CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB3078u) goto L_08AB3078;
    return;
L_08AB3078:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3084:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 768u, 0x08AB71C8u>(ctx, &aot_mem); return;
L_08AB3094:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AB30BC;
      }
      goto L_08AB30B4;
    }
L_08AB30B4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08AB3138;
      }
      goto L_08AB30BC;
    }
L_08AB30BC:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(31, 0x08AB30CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-4097));
    ctx.pc = 0x08B0DE3Cu;
    return;
L_08AB30CC:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22888)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AB30E0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = 0x08B0DD7Cu;
    return;
L_08AB30E0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (static_cast<std::int32_t>(ctx.gpr[16]) >= 0) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB30F4;
    }
    goto L_08AB30EC;
L_08AB30EC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB313C;
      }
      goto L_08AB30F4;
    }
L_08AB30F4:
    if (ctx.gpr[17] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AB3138;
    }
    goto L_08AB30FC;
L_08AB30FC:
    ctx.set_gpr(2, 7u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 41248u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AB3124u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.pc = 0x08B0DDDCu;
    return;
L_08AB3124:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3134;
      }
      goto L_08AB3130;
    }
L_08AB3130:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AB3134;
L_08AB3134:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AB3138;
L_08AB3138:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB313C;
L_08AB313C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB314C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AB317Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(773));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB317Cu) goto L_08AB317C;
    return;
L_08AB317C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AB318Cu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AB318Cu) goto L_08AB318C;
    return;
L_08AB318C:
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
L_08AB31A4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(773));
    (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem); return;
L_08AB31B4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(44));
    (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem); return;
L_08AB31BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AB31E8u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_08AB350C;
L_08AB31E8:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[21]) {
    ctx.set_gpr(4, 0u + 0u);
        goto L_08AB31FC;
    }
    goto L_08AB31F4;
L_08AB31F4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB33A0;
      }
      goto L_08AB31FC;
    }
L_08AB31FC:
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    goto L_08AB3200;
L_08AB3200:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1092)));
    if (ctx.gpr[2] != ctx.gpr[21]) {
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AB3214;
    }
    goto L_08AB320C;
L_08AB320C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB3220;
      }
      goto L_08AB3214;
    }
L_08AB3214:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AB3200;
      }
      goto L_08AB3220;
    }
L_08AB3220:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[21] != ctx.gpr[3]) {
    ctx.set_gpr(18, 0u + 0u);
        goto L_08AB3234;
    }
    goto L_08AB322C;
L_08AB322C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08AB33A0;
      }
      goto L_08AB3234;
    }
L_08AB3234:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AB3240;
L_08AB3240:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1092)));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_08AB3268;
    }
    goto L_08AB324C;
L_08AB324C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1096)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3264;
      }
      goto L_08AB325C;
    }
L_08AB325C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    goto L_08AB3264;
L_08AB3264:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08AB3268;
L_08AB3268:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AB3240;
      }
      goto L_08AB3274;
    }
L_08AB3274:
    ctx.set_gpr(31, 0x08AB327Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AB327Cu) goto L_08AB327C;
    return;
L_08AB327C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AB328Cu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1050u, 0x08AAFFF0u>(ctx, &aot_mem) && ctx.pc == 0x08AB328Cu) goto L_08AB328C;
    return;
L_08AB328C:
    ctx.set_gpr(31, 0x08AB3294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AB3294u) goto L_08AB3294;
    return;
L_08AB3294:
    ctx.set_gpr(31, 0x08AB329Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AB0000;
L_08AB329C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
        goto L_08AB32E8;
    }
    goto L_08AB32AC;
L_08AB32AC:
    ctx.set_gpr(31, 0x08AB32B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 895u, 0x08AAF7C8u>(ctx, &aot_mem) && ctx.pc == 0x08AB32B4u) goto L_08AB32B4;
    return;
L_08AB32B4:
    ctx.set_gpr(31, 0x08AB32BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AB32BCu) goto L_08AB32BC;
    return;
L_08AB32BC:
    ctx.set_gpr(31, 0x08AB32C4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 977u, 0x08AAFC50u>(ctx, &aot_mem) && ctx.pc == 0x08AB32C4u) goto L_08AB32C4;
    return;
L_08AB32C4:
    ctx.set_gpr(31, 0x08AB32CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AB32CCu) goto L_08AB32CC;
    return;
L_08AB32CC:
    ctx.set_gpr(31, 0x08AB32D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AB0000;
L_08AB32D4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB32AC;
      }
      goto L_08AB32E4;
    }
L_08AB32E4:
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    goto L_08AB32E8;
L_08AB32E8:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(1100));
    ctx.set_gpr(31, 0x08AB3300u);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(1096));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AB3300u) goto L_08AB3300;
    return;
L_08AB3300:
    ctx.set_gpr(31, 0x08AB3308u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 976u, 0x08AAFC48u>(ctx, &aot_mem) && ctx.pc == 0x08AB3308u) goto L_08AB3308;
    return;
L_08AB3308:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1088)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[21] << 1u);
        goto L_08AB3330;
    }
    goto L_08AB3328;
L_08AB3328:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_08AB33A0;
      }
      goto L_08AB3330;
    }
L_08AB3330:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(18, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1092), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[4] + static_cast<std::uint32_t>(1096));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AB3358u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1096), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AB3358u) goto L_08AB3358;
    return;
L_08AB3358:
    ctx.set_gpr(31, 0x08AB3360u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 976u, 0x08AAFC48u>(ctx, &aot_mem) && ctx.pc == 0x08AB3360u) goto L_08AB3360;
    return;
L_08AB3360:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(31, 0x08AB336Cu);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(1100), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AB336Cu) goto L_08AB336C;
    return;
L_08AB336C:
    ctx.set_gpr(31, 0x08AB3374u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB3374u) goto L_08AB3374;
    return;
L_08AB3374:
    ctx.set_gpr(31, 0x08AB337Cu);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AB337Cu) goto L_08AB337C;
    return;
L_08AB337C:
    ctx.set_gpr(31, 0x08AB3384u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 976u, 0x08AAFC48u>(ctx, &aot_mem) && ctx.pc == 0x08AB3384u) goto L_08AB3384;
    return;
L_08AB3384:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1084)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB339Cu);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AB339Cu) goto L_08AB339C;
    return;
L_08AB339C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB33A0;
L_08AB33A0:
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
L_08AB33C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AB33ECu);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_08AB350C;
L_08AB33EC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[17] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB3404;
    }
    goto L_08AB33FC;
L_08AB33FC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AB34F0;
      }
      goto L_08AB3404;
    }
L_08AB3404:
    if (ctx.gpr[18] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
        goto L_08AB3440;
    }
    goto L_08AB340C;
L_08AB340C:
    ctx.set_gpr(31, 0x08AB3414u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08AB1F40;
L_08AB3414:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB343C;
      }
      goto L_08AB341C;
    }
L_08AB341C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1004)));
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1004), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(972), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AB34F0;
      }
      goto L_08AB343C;
    }
L_08AB343C:
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    goto L_08AB3440;
L_08AB3440:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[19]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1100)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1096)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1084)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1088)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(1100));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(1096));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AB3478u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AB3478u) goto L_08AB3478;
    return;
L_08AB3478:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1088)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1084)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[6]);
    ctx.set_gpr(31, 0x08AB3494u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB3494u) goto L_08AB3494;
    return;
L_08AB3494:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[18]);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1096));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1100));
    goto L_08AB34A8;
L_08AB34A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1096)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
        goto L_08AB34CC;
    }
    goto L_08AB34BC;
L_08AB34BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1096), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08AB34CC;
L_08AB34CC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AB34A8;
      }
      goto L_08AB34D8;
    }
L_08AB34D8:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[19]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1092), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB34F0;
L_08AB34F0:
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
L_08AB350C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB3510;
L_08AB3510:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1092)));
    if (ctx.gpr[3] == ctx.gpr[5]) {
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 64 ? 1u : 0u);
        goto L_08AB3530;
    }
    goto L_08AB351C;
L_08AB351C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AB3510;
      }
      goto L_08AB352C;
    }
L_08AB352C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 64 ? 1u : 0u);
    goto L_08AB3530;
L_08AB3530:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB353C;
      }
      goto L_08AB3538;
    }
L_08AB3538:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AB353C;
L_08AB353C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3544:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(888)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3554:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(31, 0x08AB357Cu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(888), ctx.gpr[6]);
    goto L_08AB35D8;
L_08AB357C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB358Cu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08AB35E8;
L_08AB358C:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AB35C8;
    }
    goto L_08AB3594;
L_08AB3594:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AB359C;
L_08AB359C:
    ctx.set_gpr(31, 0x08AB35A4u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AB36A0;
L_08AB35A4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB35B4u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08AB36B0;
L_08AB35B4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AB359C;
    }
    goto L_08AB35C4;
L_08AB35C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB35C8;
L_08AB35C8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB35D8:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(880)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB35E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[3];
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB3658;
      }
      goto L_08AB3610;
    }
L_08AB3610:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
        goto L_08AB3620;
    }
    goto L_08AB3618;
L_08AB3618:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
      if (branch_taken) {
          goto L_08AB3680;
      }
      goto L_08AB3620;
    }
L_08AB3620:
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
        goto L_08AB3638;
    }
    goto L_08AB362C;
L_08AB362C:
    ctx.set_gpr(31, 0x08AB3634u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AB28D0;
L_08AB3634:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    goto L_08AB3638;
L_08AB3638:
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB367C;
      }
      goto L_08AB3644;
    }
L_08AB3644:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AB3650u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AB3048;
L_08AB3650:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB367C;
      }
      goto L_08AB3658;
    }
L_08AB3658:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB367C;
      }
      goto L_08AB3668;
    }
L_08AB3668:
    ctx.set_gpr(31, 0x08AB3670u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AB29B8;
L_08AB3670:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AB367Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AB2A40;
L_08AB367C:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    goto L_08AB3680;
L_08AB3680:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(880), ctx.gpr[16]);
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
L_08AB36A0:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(896)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB36B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AB36D4u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    goto L_08AB2958;
L_08AB36D4:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(896), ctx.gpr[16]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB36FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(928)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB3788;
      }
      goto L_08AB3714;
    }
L_08AB3714:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(928), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(920), 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.set_gpr(31, 0x08AB3728u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AB35E8;
L_08AB3728:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(924)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB3780;
    }
    goto L_08AB3738;
L_08AB3738:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB3770;
    }
    goto L_08AB3744;
L_08AB3744:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB3760;
    }
    goto L_08AB3750;
L_08AB3750:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AB378C;
    }
    goto L_08AB3758;
L_08AB3758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3788;
      }
      goto L_08AB3760;
    }
L_08AB3760:
    ctx.set_gpr(31, 0x08AB3768u);
    // nop
    goto L_08AB3798;
L_08AB3768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3788;
      }
      goto L_08AB3770;
    }
L_08AB3770:
    ctx.set_gpr(31, 0x08AB3778u);
    // nop
    goto L_08AB1444;
L_08AB3778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3788;
      }
      goto L_08AB3780;
    }
L_08AB3780:
    ctx.set_gpr(31, 0x08AB3788u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB13D4;
L_08AB3788:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB378C;
L_08AB378C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3798:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1032)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1036)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1048)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1040)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1044)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1052)));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1056)));
    ctx.set_gpr(8, 0u + 0u);
    goto L_08AB11D4;
L_08AB37BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(952)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB3848;
      }
      goto L_08AB37D4;
    }
L_08AB37D4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(952), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(944), 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(936)));
    ctx.set_gpr(31, 0x08AB37E8u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AB35E8;
L_08AB37E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(948)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB3840;
    }
    goto L_08AB37F8;
L_08AB37F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB3830;
    }
    goto L_08AB3804;
L_08AB3804:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB3820;
    }
    goto L_08AB3810;
L_08AB3810:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AB384C;
    }
    goto L_08AB3818;
L_08AB3818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3848;
      }
      goto L_08AB3820;
    }
L_08AB3820:
    ctx.set_gpr(31, 0x08AB3828u);
    // nop
    goto L_08AB3798;
L_08AB3828:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3848;
      }
      goto L_08AB3830;
    }
L_08AB3830:
    ctx.set_gpr(31, 0x08AB3838u);
    // nop
    goto L_08AB1444;
L_08AB3838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3848;
      }
      goto L_08AB3840;
    }
L_08AB3840:
    ctx.set_gpr(31, 0x08AB3848u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB13D4;
L_08AB3848:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB384C;
L_08AB384C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3858:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1048)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB387C;
      }
      goto L_08AB386C;
    }
L_08AB386C:
    ctx.set_gpr(31, 0x08AB3874u);
    // nop
    goto L_08AB3798;
L_08AB3874:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB3888;
      }
      goto L_08AB387C;
    }
L_08AB387C:
    ctx.set_gpr(31, 0x08AB3884u);
    // nop
    goto L_08AB1444;
L_08AB3884:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB3888;
L_08AB3888:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3890:
    ctx.set_gpr(2, ctx.gpr[4] << 5u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29688));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB38B4:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(13, (ctx.gpr[8] >> 24u) & 0x000000FFu);
    ctx.set_gpr(14, (ctx.gpr[9] >> 24u) & 0x000000FFu);
    ctx.set_gpr(15, (ctx.gpr[10] >> 24u) & 0x000000FFu);
    ctx.set_gpr(12, ctx.gpr[8] << 8u);
    ctx.set_gpr(13, (ctx.gpr[13] & ~0xFFFFFF00u) | ((ctx.gpr[9] & 0x00FFFFFFu) << 8u));
    ctx.set_gpr(14, (ctx.gpr[14] & ~0xFFFFFF00u) | ((ctx.gpr[10] & 0x00FFFFFFu) << 8u));
    ctx.set_gpr(15, (ctx.gpr[15] & ~0xFFFFFF00u) | ((ctx.gpr[11] & 0x00FFFFFFu) << 8u));
    ctx.set_gpr(8, ctx.gpr[8] ^ ctx.gpr[12]);
    ctx.set_gpr(9, ctx.gpr[9] ^ ctx.gpr[13]);
    ctx.set_gpr(10, ctx.gpr[10] ^ ctx.gpr[14]);
    ctx.set_gpr(11, ctx.gpr[11] ^ ctx.gpr[15]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(12, ctx.gpr[12] >> 11u);
    ctx.set_gpr(13, ctx.gpr[13] >> 11u);
    ctx.set_gpr(14, ctx.gpr[14] >> 11u);
    ctx.set_gpr(15, ctx.gpr[15] >> 11u);
    ctx.set_gpr(12, ctx.gpr[12] & ctx.gpr[24]);
    ctx.set_gpr(13, ctx.gpr[13] & ctx.gpr[25]);
    ctx.set_gpr(14, ctx.gpr[14] & ctx.gpr[3]);
    ctx.set_gpr(15, ctx.gpr[15] & ctx.gpr[1]);
    ctx.set_gpr(8, ctx.gpr[8] ^ ctx.gpr[12]);
    ctx.set_gpr(9, ctx.gpr[9] ^ ctx.gpr[13]);
    ctx.set_gpr(10, ctx.gpr[10] ^ ctx.gpr[14]);
    ctx.set_gpr(11, ctx.gpr[11] ^ ctx.gpr[15]);
    ctx.set_gpr(12, rt.memory().aot_load_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(1), ctx.gpr[12]));
    ctx.set_gpr(12, rt.memory().aot_load_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[12]));
    ctx.set_gpr(13, rt.memory().aot_load_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(5), ctx.gpr[13]));
    ctx.set_gpr(13, rt.memory().aot_load_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[13]));
    ctx.set_gpr(14, rt.memory().aot_load_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(9), ctx.gpr[14]));
    ctx.set_gpr(14, rt.memory().aot_load_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[14]));
    ctx.set_gpr(15, rt.memory().aot_load_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(13), ctx.gpr[15]));
    ctx.set_gpr(15, (ctx.gpr[15] & ~0xFF000000u) | ((0u & 0x000000FFu) << 24u));
    ctx.set_gpr(8, ctx.gpr[8] ^ ctx.gpr[12]);
    ctx.set_gpr(9, ctx.gpr[9] ^ ctx.gpr[13]);
    ctx.set_gpr(10, ctx.gpr[10] ^ ctx.gpr[14]);
    ctx.set_gpr(11, ctx.gpr[11] ^ ctx.gpr[15]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(12, ctx.gpr[12] << 18u);
    ctx.set_gpr(8, ctx.gpr[8] ^ ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(13, ctx.gpr[13] << 18u);
    ctx.set_gpr(9, ctx.gpr[9] ^ ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.set_gpr(14, ctx.gpr[14] << 18u);
    ctx.set_gpr(10, ctx.gpr[10] ^ ctx.gpr[14]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.set_gpr(15, ctx.gpr[15] << 18u);
    ctx.set_gpr(11, ctx.gpr[11] ^ ctx.gpr[15]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB39AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[2] < static_cast<std::uint32_t>(624) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB3A0C;
      }
      goto L_08AB39C0;
    }
L_08AB39C0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3A0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(5, ctx.gpr[4] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.set_gpr(24, 57343u << 16u);
    ctx.set_gpr(24, ctx.gpr[24] | 65519u);
    ctx.set_gpr(25, 56830u << 16u);
    ctx.set_gpr(25, ctx.gpr[25] | 52095u);
    ctx.set_gpr(3, 49146u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65535u);
    ctx.set_gpr(1, 49151u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65526u);
    ctx.set_gpr(16, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(2464));
    ctx.set_gpr(19, ctx.gpr[16] + static_cast<std::uint32_t>(2480));
    goto L_08AB3A5C;
L_08AB3A5C:
    ctx.set_gpr(2, ctx.gpr[17] << 4u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(1952));
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AB3A78u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    goto L_08AB38B4;
L_08AB3A78:
    ctx.set_gpr(18, ctx.gpr[19] + 0u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[17] < static_cast<std::uint32_t>(34) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3A5C;
      }
      goto L_08AB3A90;
    }
L_08AB3A90:
    ctx.set_gpr(2, ctx.gpr[17] << 4u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(-544));
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AB3AACu);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    goto L_08AB38B4;
L_08AB3AAC:
    ctx.set_gpr(18, ctx.gpr[19] + 0u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[17] < static_cast<std::uint32_t>(156) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3A90;
      }
      goto L_08AB3AC4;
    }
L_08AB3AC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(4, (ctx.gpr[4] & ~0x00000001u) | ((0u & 0x00000001u) << 0u));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08AB3AF8;
    }
    goto L_08AB3AF8;
L_08AB3AF8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3D10:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, 2226u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-23496));
    goto L_08AB3D24;
L_08AB3D24:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(11, ctx.gpr[11] & ctx.gpr[12]);
    ctx.set_gpr(12, ctx.gpr[11] >> 16u);
    ctx.set_gpr(11, ctx.gpr[11] ^ ctx.gpr[12]);
    ctx.set_gpr(12, ctx.gpr[11] >> 8u);
    ctx.set_gpr(11, ctx.gpr[11] ^ ctx.gpr[12]);
    ctx.set_gpr(12, ctx.gpr[11] >> 4u);
    ctx.set_gpr(11, ctx.gpr[11] ^ ctx.gpr[12]);
    ctx.set_gpr(12, ctx.gpr[11] >> 2u);
    ctx.set_gpr(11, ctx.gpr[11] ^ ctx.gpr[12]);
    ctx.set_gpr(12, ctx.gpr[11] >> 1u);
    ctx.set_gpr(11, ctx.gpr[11] ^ ctx.gpr[12]);
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[11]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
      if (branch_taken) {
          goto L_08AB3D24;
      }
      goto L_08AB3D70;
    }
L_08AB3D70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3DC4;
      }
      goto L_08AB3D78;
    }
L_08AB3D78:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, 2226u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-23496));
    goto L_08AB3D88;
L_08AB3D88:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(12, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB3DB4;
      }
      goto L_08AB3D94;
    }
L_08AB3D94:
    ctx.set_gpr(11, ctx.gpr[11] ^ ctx.gpr[12]);
    ctx.set_gpr(11, static_cast<std::uint32_t>(std::countl_zero(ctx.gpr[11])));
    ctx.set_gpr(12, 32768u << 16u);
    ctx.set_gpr(11, ctx.gpr[12] >> (ctx.gpr[11] & 31u));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[12] ^ ctx.gpr[11]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3DB4:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB3D88;
      }
      goto L_08AB3DC4;
    }
L_08AB3DC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3DCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(8, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(624));
    ctx.set_gpr(11, 27655u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] | 35173u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_08AB3DF0;
L_08AB3DF0:
    ctx.set_gpr(12, ctx.gpr[5] >> 30u);
    ctx.set_gpr(12, ctx.gpr[5] ^ ctx.gpr[12]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[12] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB3DF0;
      }
      goto L_08AB3E14;
    }
L_08AB3E14:
    ctx.set_gpr(31, 0x08AB3E1Cu);
    // nop
    goto L_08AB3D10;
L_08AB3E1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0171(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0171_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_171(Runtime &runtime) {
    runtime.register_generated_unit(171u, 0x08AB0000u, 16384u, &recomp_unit_0171, &recomp_unit_0171_entry);
    runtime.register_function(0x08AB0000u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0008u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB001Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0044u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB004Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB005Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB006Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0074u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB007Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0084u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0094u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB009Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB00A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB00B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB00C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB00D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB00DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB00E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB00E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB00F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB00F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0104u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0110u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB011Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0124u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB012Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0148u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0164u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0174u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0180u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB018Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0194u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB01ACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB01C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB01D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB01E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB01F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB01F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0210u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0234u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB023Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0244u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0254u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB025Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0268u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0274u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB027Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0284u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB028Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0294u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0298u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB02A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB02A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB02B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB02BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB02C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB02CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB02D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB02E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB02FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0304u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0324u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0330u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB033Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0344u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0350u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0364u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0380u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB03C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB03CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB03D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB03ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB03F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB03FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB040Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0414u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0424u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0440u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0480u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB048Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0498u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB04B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB04C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB04C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB04D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB04E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB04E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB04F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0504u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0514u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB051Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0520u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB052Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0534u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB053Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0540u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0554u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB057Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0580u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB058Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB059Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB05A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB05ACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB05C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB05D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB05D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB05E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB05ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB05F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB05FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB060Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0610u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0614u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0628u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0630u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0650u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0658u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0664u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB066Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0674u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB067Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0684u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0698u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB06A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB06A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB06BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB06C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB06D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB06DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB06F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB06F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0710u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0718u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0720u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0728u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0734u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB073Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0744u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0750u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB07C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB07C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB07D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB07E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0838u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0840u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0848u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0850u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB086Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0898u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB08ACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB08C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB08DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB08F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0900u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0908u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB090Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB091Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0940u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB094Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0958u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0960u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0968u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0980u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0994u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB09CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB09E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB09F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A48u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A50u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A84u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AA4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AC8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AE8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B28u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B50u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B78u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B94u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BA8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BCCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BE8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C20u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C30u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C50u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C90u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CC8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CCCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CD8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D00u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D08u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D20u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D28u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D38u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D90u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D94u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DC0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DE8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DF4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E00u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E20u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E2Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E30u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E38u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E94u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E98u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EB8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0ED0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F00u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F08u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F10u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F20u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F50u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F70u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F94u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FA4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FCCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FD8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FF8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB101Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB102Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1034u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1038u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1044u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1054u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB105Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1060u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1088u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1100u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1108u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1110u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1124u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1138u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB113Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1144u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1164u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB117Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1188u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1194u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB11A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB11ACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB11B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB11C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB11D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1238u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1244u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1250u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1258u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1264u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB126Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB127Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1280u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1288u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1290u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1298u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB12A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB12C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB12D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1304u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1340u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB134Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1354u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB135Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1364u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1370u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1378u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1380u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1388u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1390u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB13A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB13B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB13D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB13F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1400u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1410u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB141Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1420u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1428u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB142Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1444u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1460u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1468u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1478u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1480u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1484u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB148Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1494u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB14ACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB14CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB14DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB14ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB14F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB14F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1500u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1510u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1518u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1520u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1528u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB152Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1534u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1554u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1578u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB158Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1594u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB159Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB15A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB15C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB15C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB15D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB15D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB15ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1620u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1628u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1634u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1644u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB164Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1658u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1670u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB167Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1688u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1698u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB16ACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB16B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB16B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB16C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB16D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB16E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB16F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1700u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1710u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1714u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1720u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1724u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1744u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1760u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1768u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1774u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB178Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB179Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB17C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB17CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB17D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB17E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB17E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB17F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1824u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB182Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1830u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB183Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1844u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1850u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1868u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1870u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1874u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB18ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB18F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1908u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1920u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1940u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1950u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB196Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB198Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB19A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB19B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB19B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB19C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB19C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB19D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB19D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB19DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A00u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A28u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A34u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A50u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A58u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A60u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A68u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AA4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1ABCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AD8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AF4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B20u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B28u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B34u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B50u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B58u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1BCCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1BE0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C08u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C10u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C30u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C58u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C60u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C68u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C78u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1CB8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1CC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1CD0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D08u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D98u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DA4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DC8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1E04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1E28u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1E34u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1E68u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1E74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1E7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1E80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1E84u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1E98u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1EC0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1ED4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F08u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F18u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F20u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F28u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1FA4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1FB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1FC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1FD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1FE0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1FF4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2000u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2014u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2020u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB202Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2050u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2070u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2078u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2080u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2088u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2090u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB20A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB20B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB20BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB20D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB20DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB20E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB20F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB210Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2114u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB211Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2128u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2130u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2144u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB214Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2154u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB216Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2178u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2180u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2194u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB21A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB21A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB21B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB21D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB21D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB21E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB21ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB21F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2208u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2214u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2228u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2238u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB223Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2244u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2248u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2250u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2268u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2270u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2278u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2280u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2290u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2298u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2300u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2314u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB231Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2324u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2328u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2330u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2348u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2350u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2358u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2370u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2390u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB23BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB23C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB23D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB23D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB23E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB23F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2414u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2444u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2450u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2458u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB245Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB246Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2484u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2490u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2498u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2510u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2518u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2520u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB252Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2534u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2540u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2578u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2580u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB258Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB259Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB25B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB25C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB25CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB25D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB25DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB25E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB25ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB25F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2604u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB260Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2614u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2624u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2638u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2648u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB264Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2664u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2688u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB26C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB26D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB26DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB26ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2708u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2714u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB271Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2724u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB272Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2734u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB273Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2744u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2750u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2760u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2774u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2784u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2798u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB279Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB27A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB27B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB27BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB27C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB27CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB27D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB27DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB27E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2808u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB282Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2834u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2840u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB284Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB285Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2860u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2874u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2890u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2898u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB28A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB28C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB28D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB28F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB28FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2904u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2930u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2940u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2944u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2958u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB297Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2984u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB298Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB29A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB29A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB29B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB29DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB29E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB29ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A18u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A28u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A2Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2AA8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2AB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2AC8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2AD8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2ADCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2AF8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B18u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B20u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B38u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B48u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B90u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2BA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2BC0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2BC8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2BDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2BE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2BFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C20u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C30u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C38u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CA8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CB8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CC0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CC8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CE0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CF4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D08u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D10u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D28u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D34u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D48u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D50u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D58u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D60u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D84u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D94u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D98u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DCCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E94u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2EA8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2EB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2EBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2EC8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2ED4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2EE0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2EE8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2EF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2EF8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F00u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F2Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F34u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F38u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F60u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F78u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F98u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FF8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3008u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3010u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3020u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3028u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3030u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3034u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3048u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3050u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3068u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3070u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3078u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3084u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3094u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB30B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB30BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB30CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB30E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB30ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB30F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB30FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3124u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3130u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3134u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3138u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB313Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB314Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB317Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB318Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB31A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB31B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB31BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB31E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB31F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB31FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3200u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB320Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3214u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3220u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB322Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3234u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3240u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB324Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB325Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3264u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3268u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3274u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB327Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB328Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3294u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB329Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB32ACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB32B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB32BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB32C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB32CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB32D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB32E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB32E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3300u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3308u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3328u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3330u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3358u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3360u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB336Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3374u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB337Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3384u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB339Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB33A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB33C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB33ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB33FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3404u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB340Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3414u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB341Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB343Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3440u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3478u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3494u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB34A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB34BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB34CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB34D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB34F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB350Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3510u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB351Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB352Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3530u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3538u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB353Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3544u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3554u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB357Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB358Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3594u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB359Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB35A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB35B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB35C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB35C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB35D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB35E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3610u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3618u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3620u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB362Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3634u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3638u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3644u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3650u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3658u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3668u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3670u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB367Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3680u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB36A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB36B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB36D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB36FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3714u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3728u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3738u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3744u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3750u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3758u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3760u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3768u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3770u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3778u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3780u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3788u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB378Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3798u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB37BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB37D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB37E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB37F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3804u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3810u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3818u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3820u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3828u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3830u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3838u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3840u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3848u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB384Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3858u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB386Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3874u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB387Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3884u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3888u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3890u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB38B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB39ACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB39C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3A0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3A5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3A78u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3A90u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3AACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3AC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3AF8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D10u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D70u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D78u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D94u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3DB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3DC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3DCCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3DF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E1Cu, &recomp_unit_0171, "recomp_unit_0171");
}
} // namespace psprecomp
