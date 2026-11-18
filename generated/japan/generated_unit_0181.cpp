#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0181[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0,
    0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0,
    0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65,
    0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 70, 0,
    71, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 83, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 0, 87,
    0, 0, 88, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 94, 0, 0, 95, 0, 96, 0, 97, 0, 98, 0,
    0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 106, 0,
    0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 115, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 129, 0,
    130, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 138, 0,
    0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 142, 0, 143, 0, 144, 0, 0, 145, 0, 146, 0, 147, 0,
    148, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 153, 154, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 160, 161, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0,
    167, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0, 173, 0, 174, 0, 175, 0, 0, 176, 0,
    0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 186, 0, 0, 187, 0, 188, 189, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 196, 0, 197, 0, 0, 198, 0, 199,
    0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 202, 203, 0, 0, 204, 205, 0, 0, 206, 0, 207, 0, 0, 0, 208, 0, 209, 0, 0, 210, 0, 211,
    0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219, 220, 0, 0, 221, 222, 0, 0, 223,
    0, 224, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 230, 0, 231, 0, 0, 232, 0, 233, 0, 234, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 238, 0, 0, 239, 0, 240, 0, 241, 0, 0, 242, 0, 243, 0, 244, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 0, 249, 250, 251, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 255, 0, 256, 0,
    257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0,
    0, 0, 265, 0, 266, 0, 267, 0, 268, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 274, 0, 0, 0, 0, 0, 275, 0, 276, 0, 277, 0, 278, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 281, 0, 282, 0,
    0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 286, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0,
    0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 295, 0, 296, 0, 297, 0, 0, 0, 0, 0, 298, 0, 299,
    0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 304, 0, 305, 0, 306, 0, 0, 0, 0,
    0, 307, 0, 308, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0,
    315, 0, 316, 0, 317, 0, 0, 0, 0, 318, 0, 319, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 324, 0,
    0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 331, 0,
    332, 0, 333, 0, 334, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0,
    0, 0, 0, 0, 341, 0, 342, 0, 343, 0, 344, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0,
    349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 352, 0, 353, 0, 354, 0, 0, 355, 0, 356, 0, 357, 0, 0, 358, 0, 359, 0, 360, 0, 0,
    0, 0, 361, 0, 0, 0, 362, 363, 0, 364, 0, 0, 0, 365, 0, 366, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369,
    0, 370, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 373, 0, 374, 0, 375, 0, 376, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0,
    0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 383, 0, 384, 0, 385, 0, 386, 0, 0, 0, 0,
    0, 387, 0, 388, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 394, 0, 395, 0,
    0, 396, 0, 397, 0, 0, 0, 0, 0, 398, 399, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 402, 0, 403, 0, 404, 0, 0, 0, 0, 405,
    0, 0, 0, 406, 0, 407, 0, 0, 408, 0, 409, 0, 410, 0, 0, 411, 0, 412, 0, 413, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 416,
    0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 419, 0, 420, 0, 421, 0, 0, 422, 0, 423, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426,
    0, 427, 0, 0, 428, 0, 429, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 433, 0, 0, 434, 0, 435, 0, 436, 0, 0, 437, 0,
    438, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 442, 0, 0, 443, 0, 444, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 447, 448, 0,
    0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 451, 0, 452, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 455, 0, 0, 456, 0, 457, 0, 458,
    0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 461, 0, 0, 462, 0, 463, 0, 464, 0, 0, 465, 0, 466, 0, 467, 0, 0, 0, 0, 468, 0, 469,
    0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 473, 0, 474, 0, 475, 0, 0, 476, 0, 477, 0, 478, 0, 0, 479, 0, 480,
    0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 485, 0, 0, 486, 0, 487, 0, 488, 0, 0, 0, 0, 489, 0, 0,
    0, 0, 490, 0, 491, 0, 0, 492, 0, 493, 0, 494, 0, 0, 495, 0, 496, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 499, 500, 0, 0, 0,
    501, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 505, 0, 506,
    0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510,
    0, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 515, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 529, 530, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 533, 534, 0, 535, 0, 0, 0, 0,
    536, 0, 0, 0, 537, 538, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 544, 0, 0,
    545, 546, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0,
    552, 0, 0, 553, 0, 554, 0, 555, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 559,
    0, 0, 560, 0, 561, 0, 0, 0, 0, 562, 0, 563, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 568, 0,
    569, 0, 0, 0, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 574, 0, 575, 0, 576, 0, 577,
    0, 0, 0, 578, 0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 585, 0, 586, 0, 587,
    0, 588, 589, 0, 0, 590, 0, 0, 591, 0, 0, 0, 592, 593, 0, 0, 0, 594, 0, 595, 0, 596, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0,
    598, 0, 599, 0, 600, 0, 601, 0, 602, 0, 0, 0, 0, 603, 0, 604, 0, 0, 605, 0, 0, 0, 606, 607, 0, 608, 0, 0, 0, 0, 609, 0,
    0, 0, 610, 0, 611, 0, 612, 613, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 616, 617, 0, 618, 0, 619, 0, 620, 0, 621, 0, 622, 0, 0,
    0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 0, 0, 628, 0, 629, 0, 630,
    0, 0, 0, 0, 0, 631, 0, 632, 0, 633, 0, 0, 0, 0, 0, 634, 635, 0, 0, 0, 0, 636, 0, 637, 0, 638, 0, 639, 0, 640, 0, 0,
    0, 0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 643, 0, 644, 645, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 647, 0, 0, 648, 0, 0, 649, 0, 650, 0, 651, 0, 0, 652, 0, 0, 0, 653, 0, 654, 655, 0, 656, 0, 657, 0, 0, 0, 658, 0,
    0, 659, 0, 660, 0, 661, 0, 662, 0, 663, 0, 664, 0, 0, 0, 665, 0, 0, 666, 667, 0, 668, 0, 669, 0, 0, 670, 0, 0, 671, 672, 0,
    673, 0, 0, 674, 0, 0, 675, 0, 676, 0, 677, 0, 678, 0, 679, 0, 680, 0, 681, 0, 682, 0, 683, 0, 684, 685, 0, 0, 0, 0, 0, 0,
    686, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 688, 0, 689, 0, 0, 0, 0, 690, 0, 0, 0, 691, 0, 692, 0, 0,
    0, 0, 693, 0, 694, 0, 0, 0, 0, 695, 0, 696, 0, 0, 0, 0, 697, 0, 698, 0, 0, 0, 0, 699, 0, 0, 700, 0, 701, 0, 0, 0,
    0, 702, 0, 703, 0, 0, 0, 0, 704, 0, 705, 0, 0, 0, 0, 706, 0, 707, 0, 0, 0, 0, 708, 0, 709, 0, 710, 0, 0, 0, 0, 711,
    0, 712, 0, 0, 0, 0, 713, 0, 714, 0, 0, 0, 0, 715, 0, 716, 0, 0, 0, 0, 717, 718, 0, 719, 0, 720, 0, 0, 0, 0, 721, 0,
    722, 0, 0, 0, 0, 723, 0, 724, 0, 0, 0, 0, 0, 0, 0, 725, 0, 726, 0, 0, 0, 0, 0, 0, 0, 727, 0, 728, 0, 0, 0, 0,
    0, 0, 0, 729, 730, 0, 731, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 733, 0, 734, 0, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0,
    737, 0, 0, 0, 0, 0, 0, 0, 738, 0, 739, 0, 0, 0, 0, 0, 0, 0, 740, 0, 741, 0, 0, 0, 0, 0, 0, 0, 742, 743, 0, 744,
    0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 746, 0, 747, 0, 0, 0, 0, 0, 0, 0, 748, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0,
    751, 0, 752, 0, 753, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 757, 0, 758, 0, 0, 0,
    0, 0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 0, 761, 0, 762, 0, 0, 0, 0, 0, 0, 763, 0, 764, 0, 765, 0, 766, 0, 767, 0, 0,
    0, 0, 768, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 771, 0, 772, 0, 0, 0, 0, 773, 0, 774,
    0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0,
    780, 0, 781, 782, 0, 783, 0, 0, 0, 0, 784, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 787, 0, 788, 0, 0,
    0, 0, 789, 0, 790, 0, 0, 0, 0, 791, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 795,
    0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 797, 798, 0, 0, 799, 800, 0, 801, 0, 0, 0, 0, 802, 0, 0, 0, 803, 0, 804, 0, 805, 806,
    0, 807, 0, 0, 0, 0, 808, 0, 0, 0, 809, 810, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0,
    813, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 815, 0, 816, 0, 0, 817, 0, 818, 0, 819, 0, 820, 821, 0, 822, 0, 0, 823, 0, 824, 0,
    825, 0, 826, 0, 827, 0, 828, 0, 0, 829, 0, 0, 830, 0, 831, 0, 832, 0, 833, 834, 0, 835, 0, 836, 0, 837, 0, 838, 0, 839, 0, 840,
    0, 0, 841, 0, 0, 842, 0, 843, 0, 844, 0, 845, 846, 0, 847, 0, 848, 0, 849, 0, 850, 0, 851, 0, 0, 852, 0, 0, 853, 0, 854, 0,
    855, 0, 856, 857, 0, 858, 0, 859, 0, 860, 0, 861, 0, 862, 0, 863, 0, 864, 0, 865, 0, 866, 0, 867, 0, 868, 0, 869, 0, 870, 0, 0,
    0, 871, 0, 872, 0, 0, 873, 0, 874, 0, 0, 875, 0, 876, 0, 0, 0, 0, 877, 0, 0, 0, 878, 0, 879, 0, 0, 0, 880, 0, 881, 0,
    882, 0, 0, 883, 0, 884, 0, 0, 885, 0, 0, 886, 0, 0, 887, 888, 0, 0, 889, 0, 0, 890, 0, 891, 0, 892, 0, 0, 893, 0, 0, 0,
    894, 0, 895, 0, 0, 0, 896, 0, 897, 0, 898, 0, 0, 0, 899, 0, 900, 0, 901, 0, 0, 902, 0, 0, 0, 903, 0, 904, 0, 905, 0, 906,
    0, 907, 0, 908, 0, 909, 0, 910, 911, 0, 0, 0, 0, 0, 0, 912, 0, 0, 0, 0, 913, 0, 0, 914, 0, 915, 0, 0, 916, 0, 917, 0,
    0, 0, 0, 918, 0, 0, 0, 919, 920, 0, 0, 0, 0, 921, 0, 0, 922, 0, 923, 0, 924, 0, 0, 0, 0, 925, 0, 926, 0, 0, 0, 0,
    927, 0, 928, 0, 929, 0, 930, 0, 931, 0, 932, 0, 0, 0, 0, 933, 0, 934, 0, 0, 0, 0, 935, 0, 936, 0, 937, 0, 938, 0, 939, 0,
    940, 0, 0, 0, 0, 0, 941, 0, 0, 0, 0, 942, 943, 0, 0, 944, 0, 945, 0, 0, 946, 0, 947, 0, 0, 948, 0, 0, 949, 0, 0, 0,
    0, 950, 0, 0, 0, 951, 0, 0, 952, 953, 0, 954, 0, 955, 0, 956, 0, 0, 0, 0, 957, 0, 0, 0, 958, 0, 959, 0, 0, 0, 960, 0,
    0, 961, 0, 0, 962, 963, 964, 965, 0, 0, 966, 0, 967, 0, 0, 0, 0, 968, 0, 0, 969, 970, 0, 971, 0, 972, 0, 973, 0, 974, 0, 975,
    0, 976, 0, 977, 0, 978, 979, 0, 980, 0, 981, 0, 0, 982, 0, 983, 0, 0, 0, 0, 984, 0, 985, 0, 0, 0, 0, 0, 0, 0, 986, 0,
    987, 0, 0, 0, 0, 0, 0, 0, 988, 0, 989, 990, 0, 0, 0, 991, 0, 0, 0, 0, 992, 0, 0, 993, 0, 994, 0, 995, 0, 0, 0, 0,
    996, 0, 0, 0, 997, 0, 0, 0, 998, 999, 0, 0, 0, 0, 1000, 0, 1001, 0, 0, 1002, 0, 1003, 0, 0, 0, 0, 1004, 0, 1005, 0, 0, 0,
    0, 0, 0, 0, 1006, 0, 1007, 0, 0, 0, 0, 0, 0, 0, 1008, 0, 1009, 0, 1010, 0, 0, 1011, 0, 1012, 0, 0, 1013, 0, 0, 0, 1014, 0,
    0, 0, 0, 1015, 0, 0, 1016, 0, 1017, 0, 1018, 0, 0, 0, 0, 1019, 0, 0, 0, 1020, 0, 0, 0, 1021, 0, 0, 1022, 1023, 0, 1024, 0, 0,
    1025, 0, 1026, 0, 0, 1027, 0, 1028, 0, 0, 0, 0, 1029, 0, 1030, 0, 0, 0, 0, 1031, 0, 1032, 0, 0, 0, 0, 0, 0, 0, 1033, 0, 1034,
    0, 0, 0, 0, 0, 0, 0, 1035, 0, 1036, 0, 1037, 0, 0, 1038, 0, 1039, 0, 1040, 0, 0, 0, 0, 1041, 0, 1042, 0, 0, 0, 0, 1043, 0,
    0, 1044, 0, 1045, 0, 0, 1046, 0, 1047, 0, 0, 0, 0, 1048, 0, 1049, 0, 0, 0, 0, 0, 0, 0, 1050, 0, 1051, 0, 0, 0, 0, 0, 0,
    0, 1052, 0, 0, 0, 0, 0, 0, 0, 1053, 0, 0, 0, 0, 1054, 0, 0, 1055, 0, 0, 0, 1056, 0, 0, 0, 0, 1057, 0, 0, 1058, 0, 1059,
    0, 0, 1060, 0, 1061, 0, 0, 0, 0, 1062, 0, 1063, 0, 0, 0, 0, 1064, 0, 1065, 0, 0, 0, 0, 1066, 0, 1067, 0, 0, 0, 0, 1068, 0,
    0, 0, 1069, 0, 1070, 0, 0, 1071, 0, 1072, 0, 0, 0, 0, 1073, 0, 1074, 0, 0, 0, 0, 0, 0, 0, 1075, 0, 1076, 0, 0, 0, 0, 0,
    0, 0, 1077, 0, 0, 0, 1078, 0, 1079, 0, 0, 1080, 0, 1081, 0, 0, 1082, 0, 1083, 0, 1084, 0, 0, 1085, 0, 1086, 0, 0, 0, 0, 1087, 0,
    1088, 0, 0, 0, 0, 0, 0, 0, 1089, 0, 1090, 0, 0, 0, 0, 0, 0, 0, 1091, 1092, 0, 0, 0, 1093, 0, 0, 0, 0, 1094, 0, 0, 1095,
    0, 1096, 0, 1097, 0, 0, 0, 0, 1098, 0, 1099, 0, 0, 0, 0, 1100, 0, 1101, 0, 0, 0, 0, 1102, 0, 0, 0, 0, 1103, 0, 1104, 0, 1105,
    0, 0, 1106, 0, 1107, 0, 0, 0, 0, 1108, 0, 1109, 0, 0, 0, 0, 0, 0, 0, 1110, 0, 1111, 0, 0, 0, 0, 0, 0, 0, 1112, 0, 1113,
};
void recomp_unit_0181_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AD8000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0181[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AD8000;
    case 2u: goto L_08AD8014;
    case 3u: goto L_08AD8028;
    case 4u: goto L_08AD8040;
    case 5u: goto L_08AD8048;
    case 6u: goto L_08AD8054;
    case 7u: goto L_08AD8074;
    case 8u: goto L_08AD8088;
    case 9u: goto L_08AD8098;
    case 10u: goto L_08AD80B8;
    case 11u: goto L_08AD80D0;
    case 12u: goto L_08AD80EC;
    case 13u: goto L_08AD8104;
    case 14u: goto L_08AD8114;
    case 15u: goto L_08AD811C;
    case 16u: goto L_08AD8130;
    case 17u: goto L_08AD8140;
    case 18u: goto L_08AD8154;
    case 19u: goto L_08AD8160;
    case 20u: goto L_08AD8188;
    case 21u: goto L_08AD8198;
    case 22u: goto L_08AD81C8;
    case 23u: goto L_08AD8204;
    case 24u: goto L_08AD820C;
    case 25u: goto L_08AD82F0;
    case 26u: goto L_08AD8300;
    case 27u: goto L_08AD8314;
    case 28u: goto L_08AD839C;
    case 29u: goto L_08AD83AC;
    case 30u: goto L_08AD83B8;
    case 31u: goto L_08AD83C8;
    case 32u: goto L_08AD83D4;
    case 33u: goto L_08AD83F0;
    case 34u: goto L_08AD8410;
    case 35u: goto L_08AD8420;
    case 36u: goto L_08AD8434;
    case 37u: goto L_08AD8468;
    case 38u: goto L_08AD848C;
    case 39u: goto L_08AD8498;
    case 40u: goto L_08AD84B8;
    case 41u: goto L_08AD84C8;
    case 42u: goto L_08AD84D4;
    case 43u: goto L_08AD84E8;
    case 44u: goto L_08AD84F0;
    case 45u: goto L_08AD852C;
    case 46u: goto L_08AD853C;
    case 47u: goto L_08AD8548;
    case 48u: goto L_08AD8558;
    case 49u: goto L_08AD8568;
    case 50u: goto L_08AD85D4;
    case 51u: goto L_08AD85E8;
    case 52u: goto L_08AD8600;
    case 53u: goto L_08AD86A0;
    case 54u: goto L_08AD86AC;
    case 55u: goto L_08AD86BC;
    case 56u: goto L_08AD8700;
    case 57u: goto L_08AD8708;
    case 58u: goto L_08AD8754;
    case 59u: goto L_08AD8764;
    case 60u: goto L_08AD876C;
    case 61u: goto L_08AD8784;
    case 62u: goto L_08AD87B4;
    case 63u: goto L_08AD87BC;
    case 64u: goto L_08AD87EC;
    case 65u: goto L_08AD87FC;
    case 66u: goto L_08AD8804;
    case 67u: goto L_08AD8838;
    case 68u: goto L_08AD8840;
    case 69u: goto L_08AD8874;
    case 70u: goto L_08AD8878;
    case 71u: goto L_08AD8880;
    case 72u: goto L_08AD8894;
    case 73u: goto L_08AD88A4;
    case 74u: goto L_08AD88BC;
    case 75u: goto L_08AD88CC;
    case 76u: goto L_08AD88D4;
    case 77u: goto L_08AD88E4;
    case 78u: goto L_08AD88F4;
    case 79u: goto L_08AD8904;
    case 80u: goto L_08AD8930;
    case 81u: goto L_08AD893C;
    case 82u: goto L_08AD8944;
    case 83u: goto L_08AD894C;
    case 84u: goto L_08AD895C;
    case 85u: goto L_08AD8964;
    case 86u: goto L_08AD896C;
    case 87u: goto L_08AD897C;
    case 88u: goto L_08AD8988;
    case 89u: goto L_08AD8994;
    case 90u: goto L_08AD899C;
    case 91u: goto L_08AD89A4;
    case 92u: goto L_08AD89C4;
    case 93u: goto L_08AD89CC;
    case 94u: goto L_08AD89D4;
    case 95u: goto L_08AD89E0;
    case 96u: goto L_08AD89E8;
    case 97u: goto L_08AD89F0;
    case 98u: goto L_08AD89F8;
    case 99u: goto L_08AD8A08;
    case 100u: goto L_08AD8A10;
    case 101u: goto L_08AD8A18;
    case 102u: goto L_08AD8A2C;
    case 103u: goto L_08AD8A34;
    case 104u: goto L_08AD8A60;
    case 105u: goto L_08AD8A70;
    case 106u: goto L_08AD8A78;
    case 107u: goto L_08AD8A94;
    case 108u: goto L_08AD8A9C;
    case 109u: goto L_08AD8AB8;
    case 110u: goto L_08AD8AC0;
    case 111u: goto L_08AD8AC8;
    case 112u: goto L_08AD8AD0;
    case 113u: goto L_08AD8AD8;
    case 114u: goto L_08AD8AEC;
    case 115u: goto L_08AD8AF4;
    case 116u: goto L_08AD8B2C;
    case 117u: goto L_08AD8B3C;
    case 118u: goto L_08AD8B44;
    case 119u: goto L_08AD8B58;
    case 120u: goto L_08AD8B60;
    case 121u: goto L_08AD8B84;
    case 122u: goto L_08AD8B8C;
    case 123u: goto L_08AD8BB0;
    case 124u: goto L_08AD8BB8;
    case 125u: goto L_08AD8BC0;
    case 126u: goto L_08AD8BC8;
    case 127u: goto L_08AD8BDC;
    case 128u: goto L_08AD8BE4;
    case 129u: goto L_08AD8BF8;
    case 130u: goto L_08AD8C00;
    case 131u: goto L_08AD8C08;
    case 132u: goto L_08AD8C10;
    case 133u: goto L_08AD8C18;
    case 134u: goto L_08AD8C2C;
    case 135u: goto L_08AD8C34;
    case 136u: goto L_08AD8C60;
    case 137u: goto L_08AD8C70;
    case 138u: goto L_08AD8C78;
    case 139u: goto L_08AD8C9C;
    case 140u: goto L_08AD8CA4;
    case 141u: goto L_08AD8CC8;
    case 142u: goto L_08AD8CCC;
    case 143u: goto L_08AD8CD4;
    case 144u: goto L_08AD8CDC;
    case 145u: goto L_08AD8CE8;
    case 146u: goto L_08AD8CF0;
    case 147u: goto L_08AD8CF8;
    case 148u: goto L_08AD8D00;
    case 149u: goto L_08AD8D10;
    case 150u: goto L_08AD8D18;
    case 151u: goto L_08AD8D30;
    case 152u: goto L_08AD8D38;
    case 153u: goto L_08AD8D50;
    case 154u: goto L_08AD8D54;
    case 155u: goto L_08AD8D58;
    case 156u: goto L_08AD8D70;
    case 157u: goto L_08AD8D80;
    case 158u: goto L_08AD8D88;
    case 159u: goto L_08AD8D9C;
    case 160u: goto L_08AD8DAC;
    case 161u: goto L_08AD8DB0;
    case 162u: goto L_08AD8DB8;
    case 163u: goto L_08AD8DCC;
    case 164u: goto L_08AD8DDC;
    case 165u: goto L_08AD8DE4;
    case 166u: goto L_08AD8DF8;
    case 167u: goto L_08AD8E00;
    case 168u: goto L_08AD8E14;
    case 169u: goto L_08AD8E24;
    case 170u: goto L_08AD8E40;
    case 171u: goto L_08AD8E4C;
    case 172u: goto L_08AD8E54;
    case 173u: goto L_08AD8E5C;
    case 174u: goto L_08AD8E64;
    case 175u: goto L_08AD8E6C;
    case 176u: goto L_08AD8E78;
    case 177u: goto L_08AD8E84;
    case 178u: goto L_08AD8E8C;
    case 179u: goto L_08AD8E94;
    case 180u: goto L_08AD8E9C;
    case 181u: goto L_08AD8EA8;
    case 182u: goto L_08AD8EB4;
    case 183u: goto L_08AD8EBC;
    case 184u: goto L_08AD8EC4;
    case 185u: goto L_08AD8ECC;
    case 186u: goto L_08AD8ED8;
    case 187u: goto L_08AD8EE4;
    case 188u: goto L_08AD8EEC;
    case 189u: goto L_08AD8EF0;
    case 190u: goto L_08AD8F00;
    case 191u: goto L_08AD8F18;
    case 192u: goto L_08AD8F20;
    case 193u: goto L_08AD8F28;
    case 194u: goto L_08AD8F4C;
    case 195u: goto L_08AD8F54;
    case 196u: goto L_08AD8F60;
    case 197u: goto L_08AD8F68;
    case 198u: goto L_08AD8F74;
    case 199u: goto L_08AD8F7C;
    case 200u: goto L_08AD8F8C;
    case 201u: goto L_08AD8F94;
    case 202u: goto L_08AD8FA8;
    case 203u: goto L_08AD8FAC;
    case 204u: goto L_08AD8FB8;
    case 205u: goto L_08AD8FBC;
    case 206u: goto L_08AD8FC8;
    case 207u: goto L_08AD8FD0;
    case 208u: goto L_08AD8FE0;
    case 209u: goto L_08AD8FE8;
    case 210u: goto L_08AD8FF4;
    case 211u: goto L_08AD8FFC;
    case 212u: goto L_08AD900C;
    case 213u: goto L_08AD9014;
    case 214u: goto L_08AD901C;
    case 215u: goto L_08AD9028;
    case 216u: goto L_08AD9030;
    case 217u: goto L_08AD9040;
    case 218u: goto L_08AD9048;
    case 219u: goto L_08AD905C;
    case 220u: goto L_08AD9060;
    case 221u: goto L_08AD906C;
    case 222u: goto L_08AD9070;
    case 223u: goto L_08AD907C;
    case 224u: goto L_08AD9084;
    case 225u: goto L_08AD9094;
    case 226u: goto L_08AD909C;
    case 227u: goto L_08AD90A8;
    case 228u: goto L_08AD90B0;
    case 229u: goto L_08AD90C0;
    case 230u: goto L_08AD90C8;
    case 231u: goto L_08AD90D0;
    case 232u: goto L_08AD90DC;
    case 233u: goto L_08AD90E4;
    case 234u: goto L_08AD90EC;
    case 235u: goto L_08AD9100;
    case 236u: goto L_08AD911C;
    case 237u: goto L_08AD912C;
    case 238u: goto L_08AD9134;
    case 239u: goto L_08AD9140;
    case 240u: goto L_08AD9148;
    case 241u: goto L_08AD9150;
    case 242u: goto L_08AD915C;
    case 243u: goto L_08AD9164;
    case 244u: goto L_08AD916C;
    case 245u: goto L_08AD9180;
    case 246u: goto L_08AD9194;
    case 247u: goto L_08AD91A8;
    case 248u: goto L_08AD91B0;
    case 249u: goto L_08AD91BC;
    case 250u: goto L_08AD91C0;
    case 251u: goto L_08AD91C4;
    case 252u: goto L_08AD91D0;
    case 253u: goto L_08AD91DC;
    case 254u: goto L_08AD91E8;
    case 255u: goto L_08AD91F0;
    case 256u: goto L_08AD91F8;
    case 257u: goto L_08AD9200;
    case 258u: goto L_08AD9208;
    case 259u: goto L_08AD9220;
    case 260u: goto L_08AD9228;
    case 261u: goto L_08AD9248;
    case 262u: goto L_08AD9250;
    case 263u: goto L_08AD9268;
    case 264u: goto L_08AD9270;
    case 265u: goto L_08AD9288;
    case 266u: goto L_08AD9290;
    case 267u: goto L_08AD9298;
    case 268u: goto L_08AD92A0;
    case 269u: goto L_08AD92B8;
    case 270u: goto L_08AD92C0;
    case 271u: goto L_08AD92D8;
    case 272u: goto L_08AD92E0;
    case 273u: goto L_08AD9300;
    case 274u: goto L_08AD9308;
    case 275u: goto L_08AD9320;
    case 276u: goto L_08AD9328;
    case 277u: goto L_08AD9330;
    case 278u: goto L_08AD9338;
    case 279u: goto L_08AD9350;
    case 280u: goto L_08AD9358;
    case 281u: goto L_08AD9370;
    case 282u: goto L_08AD9378;
    case 283u: goto L_08AD9390;
    case 284u: goto L_08AD9398;
    case 285u: goto L_08AD93B8;
    case 286u: goto L_08AD93BC;
    case 287u: goto L_08AD93C4;
    case 288u: goto L_08AD93CC;
    case 289u: goto L_08AD93EC;
    case 290u: goto L_08AD93F4;
    case 291u: goto L_08AD940C;
    case 292u: goto L_08AD9414;
    case 293u: goto L_08AD942C;
    case 294u: goto L_08AD9434;
    case 295u: goto L_08AD944C;
    case 296u: goto L_08AD9454;
    case 297u: goto L_08AD945C;
    case 298u: goto L_08AD9474;
    case 299u: goto L_08AD947C;
    case 300u: goto L_08AD949C;
    case 301u: goto L_08AD94A4;
    case 302u: goto L_08AD94BC;
    case 303u: goto L_08AD94C4;
    case 304u: goto L_08AD94DC;
    case 305u: goto L_08AD94E4;
    case 306u: goto L_08AD94EC;
    case 307u: goto L_08AD9504;
    case 308u: goto L_08AD950C;
    case 309u: goto L_08AD9524;
    case 310u: goto L_08AD952C;
    case 311u: goto L_08AD954C;
    case 312u: goto L_08AD9554;
    case 313u: goto L_08AD956C;
    case 314u: goto L_08AD9574;
    case 315u: goto L_08AD9580;
    case 316u: goto L_08AD9588;
    case 317u: goto L_08AD9590;
    case 318u: goto L_08AD95A4;
    case 319u: goto L_08AD95AC;
    case 320u: goto L_08AD95B4;
    case 321u: goto L_08AD95C0;
    case 322u: goto L_08AD95E0;
    case 323u: goto L_08AD95F0;
    case 324u: goto L_08AD95F8;
    case 325u: goto L_08AD9610;
    case 326u: goto L_08AD9618;
    case 327u: goto L_08AD9638;
    case 328u: goto L_08AD9640;
    case 329u: goto L_08AD9658;
    case 330u: goto L_08AD9660;
    case 331u: goto L_08AD9678;
    case 332u: goto L_08AD9680;
    case 333u: goto L_08AD9688;
    case 334u: goto L_08AD9690;
    case 335u: goto L_08AD96A8;
    case 336u: goto L_08AD96B0;
    case 337u: goto L_08AD96C8;
    case 338u: goto L_08AD96D0;
    case 339u: goto L_08AD96F0;
    case 340u: goto L_08AD96F8;
    case 341u: goto L_08AD9710;
    case 342u: goto L_08AD9718;
    case 343u: goto L_08AD9720;
    case 344u: goto L_08AD9728;
    case 345u: goto L_08AD9740;
    case 346u: goto L_08AD9748;
    case 347u: goto L_08AD9760;
    case 348u: goto L_08AD9768;
    case 349u: goto L_08AD9780;
    case 350u: goto L_08AD9788;
    case 351u: goto L_08AD97A8;
    case 352u: goto L_08AD97AC;
    case 353u: goto L_08AD97B4;
    case 354u: goto L_08AD97BC;
    case 355u: goto L_08AD97C8;
    case 356u: goto L_08AD97D0;
    case 357u: goto L_08AD97D8;
    case 358u: goto L_08AD97E4;
    case 359u: goto L_08AD97EC;
    case 360u: goto L_08AD97F4;
    case 361u: goto L_08AD9808;
    case 362u: goto L_08AD9818;
    case 363u: goto L_08AD981C;
    case 364u: goto L_08AD9824;
    case 365u: goto L_08AD9834;
    case 366u: goto L_08AD983C;
    case 367u: goto L_08AD9854;
    case 368u: goto L_08AD985C;
    case 369u: goto L_08AD987C;
    case 370u: goto L_08AD9884;
    case 371u: goto L_08AD989C;
    case 372u: goto L_08AD98A4;
    case 373u: goto L_08AD98BC;
    case 374u: goto L_08AD98C4;
    case 375u: goto L_08AD98CC;
    case 376u: goto L_08AD98D4;
    case 377u: goto L_08AD98EC;
    case 378u: goto L_08AD98F4;
    case 379u: goto L_08AD990C;
    case 380u: goto L_08AD9914;
    case 381u: goto L_08AD9934;
    case 382u: goto L_08AD993C;
    case 383u: goto L_08AD9954;
    case 384u: goto L_08AD995C;
    case 385u: goto L_08AD9964;
    case 386u: goto L_08AD996C;
    case 387u: goto L_08AD9984;
    case 388u: goto L_08AD998C;
    case 389u: goto L_08AD99A4;
    case 390u: goto L_08AD99AC;
    case 391u: goto L_08AD99C4;
    case 392u: goto L_08AD99CC;
    case 393u: goto L_08AD99EC;
    case 394u: goto L_08AD99F0;
    case 395u: goto L_08AD99F8;
    case 396u: goto L_08AD9A04;
    case 397u: goto L_08AD9A0C;
    case 398u: goto L_08AD9A24;
    case 399u: goto L_08AD9A28;
    case 400u: goto L_08AD9A38;
    case 401u: goto L_08AD9A4C;
    case 402u: goto L_08AD9A58;
    case 403u: goto L_08AD9A60;
    case 404u: goto L_08AD9A68;
    case 405u: goto L_08AD9A7C;
    case 406u: goto L_08AD9A8C;
    case 407u: goto L_08AD9A94;
    case 408u: goto L_08AD9AA0;
    case 409u: goto L_08AD9AA8;
    case 410u: goto L_08AD9AB0;
    case 411u: goto L_08AD9ABC;
    case 412u: goto L_08AD9AC4;
    case 413u: goto L_08AD9ACC;
    case 414u: goto L_08AD9AE0;
    case 415u: goto L_08AD9AE8;
    case 416u: goto L_08AD9AFC;
    case 417u: goto L_08AD9B14;
    case 418u: goto L_08AD9B1C;
    case 419u: goto L_08AD9B28;
    case 420u: goto L_08AD9B30;
    case 421u: goto L_08AD9B38;
    case 422u: goto L_08AD9B44;
    case 423u: goto L_08AD9B4C;
    case 424u: goto L_08AD9B54;
    case 425u: goto L_08AD9B68;
    case 426u: goto L_08AD9B7C;
    case 427u: goto L_08AD9B84;
    case 428u: goto L_08AD9B90;
    case 429u: goto L_08AD9B98;
    case 430u: goto L_08AD9BA0;
    case 431u: goto L_08AD9BB4;
    case 432u: goto L_08AD9BC8;
    case 433u: goto L_08AD9BD0;
    case 434u: goto L_08AD9BDC;
    case 435u: goto L_08AD9BE4;
    case 436u: goto L_08AD9BEC;
    case 437u: goto L_08AD9BF8;
    case 438u: goto L_08AD9C00;
    case 439u: goto L_08AD9C08;
    case 440u: goto L_08AD9C1C;
    case 441u: goto L_08AD9C2C;
    case 442u: goto L_08AD9C34;
    case 443u: goto L_08AD9C40;
    case 444u: goto L_08AD9C48;
    case 445u: goto L_08AD9C50;
    case 446u: goto L_08AD9C64;
    case 447u: goto L_08AD9C74;
    case 448u: goto L_08AD9C78;
    case 449u: goto L_08AD9C88;
    case 450u: goto L_08AD9CA0;
    case 451u: goto L_08AD9CA8;
    case 452u: goto L_08AD9CB0;
    case 453u: goto L_08AD9CD0;
    case 454u: goto L_08AD9CD8;
    case 455u: goto L_08AD9CE0;
    case 456u: goto L_08AD9CEC;
    case 457u: goto L_08AD9CF4;
    case 458u: goto L_08AD9CFC;
    case 459u: goto L_08AD9D10;
    case 460u: goto L_08AD9D20;
    case 461u: goto L_08AD9D28;
    case 462u: goto L_08AD9D34;
    case 463u: goto L_08AD9D3C;
    case 464u: goto L_08AD9D44;
    case 465u: goto L_08AD9D50;
    case 466u: goto L_08AD9D58;
    case 467u: goto L_08AD9D60;
    case 468u: goto L_08AD9D74;
    case 469u: goto L_08AD9D7C;
    case 470u: goto L_08AD9D90;
    case 471u: goto L_08AD9DA8;
    case 472u: goto L_08AD9DB0;
    case 473u: goto L_08AD9DBC;
    case 474u: goto L_08AD9DC4;
    case 475u: goto L_08AD9DCC;
    case 476u: goto L_08AD9DD8;
    case 477u: goto L_08AD9DE0;
    case 478u: goto L_08AD9DE8;
    case 479u: goto L_08AD9DF4;
    case 480u: goto L_08AD9DFC;
    case 481u: goto L_08AD9E04;
    case 482u: goto L_08AD9E18;
    case 483u: goto L_08AD9E28;
    case 484u: goto L_08AD9E3C;
    case 485u: goto L_08AD9E44;
    case 486u: goto L_08AD9E50;
    case 487u: goto L_08AD9E58;
    case 488u: goto L_08AD9E60;
    case 489u: goto L_08AD9E74;
    case 490u: goto L_08AD9E88;
    case 491u: goto L_08AD9E90;
    case 492u: goto L_08AD9E9C;
    case 493u: goto L_08AD9EA4;
    case 494u: goto L_08AD9EAC;
    case 495u: goto L_08AD9EB8;
    case 496u: goto L_08AD9EC0;
    case 497u: goto L_08AD9EC8;
    case 498u: goto L_08AD9EDC;
    case 499u: goto L_08AD9EEC;
    case 500u: goto L_08AD9EF0;
    case 501u: goto L_08AD9F00;
    case 502u: goto L_08AD9F1C;
    case 503u: goto L_08AD9F24;
    case 504u: goto L_08AD9F64;
    case 505u: goto L_08AD9F74;
    case 506u: goto L_08AD9F7C;
    case 507u: goto L_08AD9F94;
    case 508u: goto L_08AD9FC4;
    case 509u: goto L_08AD9FCC;
    case 510u: goto L_08AD9FFC;
    case 511u: goto L_08ADA00C;
    case 512u: goto L_08ADA014;
    case 513u: goto L_08ADA048;
    case 514u: goto L_08ADA050;
    case 515u: goto L_08ADA084;
    case 516u: goto L_08ADA08C;
    case 517u: goto L_08ADA094;
    case 518u: goto L_08ADA0D4;
    case 519u: goto L_08ADA0E4;
    case 520u: goto L_08ADA0EC;
    case 521u: goto L_08ADA120;
    case 522u: goto L_08ADA128;
    case 523u: goto L_08ADA15C;
    case 524u: goto L_08ADA164;
    case 525u: goto L_08ADA198;
    case 526u: goto L_08ADA1A0;
    case 527u: goto L_08ADA1D4;
    case 528u: goto L_08ADA1DC;
    case 529u: goto L_08ADA210;
    case 530u: goto L_08ADA214;
    case 531u: goto L_08ADA21C;
    case 532u: goto L_08ADA250;
    case 533u: goto L_08ADA260;
    case 534u: goto L_08ADA264;
    case 535u: goto L_08ADA26C;
    case 536u: goto L_08ADA280;
    case 537u: goto L_08ADA290;
    case 538u: goto L_08ADA294;
    case 539u: goto L_08ADA29C;
    case 540u: goto L_08ADA2B0;
    case 541u: goto L_08ADA2C0;
    case 542u: goto L_08ADA2D8;
    case 543u: goto L_08ADA2EC;
    case 544u: goto L_08ADA2F4;
    case 545u: goto L_08ADA300;
    case 546u: goto L_08ADA304;
    case 547u: goto L_08ADA314;
    case 548u: goto L_08ADA34C;
    case 549u: goto L_08ADA354;
    case 550u: goto L_08ADA368;
    case 551u: goto L_08ADA378;
    case 552u: goto L_08ADA380;
    case 553u: goto L_08ADA38C;
    case 554u: goto L_08ADA394;
    case 555u: goto L_08ADA39C;
    case 556u: goto L_08ADA3A8;
    case 557u: goto L_08ADA3D8;
    case 558u: goto L_08ADA3F4;
    case 559u: goto L_08ADA3FC;
    case 560u: goto L_08ADA408;
    case 561u: goto L_08ADA410;
    case 562u: goto L_08ADA424;
    case 563u: goto L_08ADA42C;
    case 564u: goto L_08ADA440;
    case 565u: goto L_08ADA448;
    case 566u: goto L_08ADA45C;
    case 567u: goto L_08ADA464;
    case 568u: goto L_08ADA478;
    case 569u: goto L_08ADA480;
    case 570u: goto L_08ADA4A0;
    case 571u: goto L_08ADA4A8;
    case 572u: goto L_08ADA4C8;
    case 573u: goto L_08ADA4D0;
    case 574u: goto L_08ADA4E4;
    case 575u: goto L_08ADA4EC;
    case 576u: goto L_08ADA4F4;
    case 577u: goto L_08ADA4FC;
    case 578u: goto L_08ADA50C;
    case 579u: goto L_08ADA514;
    case 580u: goto L_08ADA520;
    case 581u: goto L_08ADA52C;
    case 582u: goto L_08ADA53C;
    case 583u: goto L_08ADA54C;
    case 584u: goto L_08ADA560;
    case 585u: goto L_08ADA56C;
    case 586u: goto L_08ADA574;
    case 587u: goto L_08ADA57C;
    case 588u: goto L_08ADA584;
    case 589u: goto L_08ADA588;
    case 590u: goto L_08ADA594;
    case 591u: goto L_08ADA5A0;
    case 592u: goto L_08ADA5B0;
    case 593u: goto L_08ADA5B4;
    case 594u: goto L_08ADA5C4;
    case 595u: goto L_08ADA5CC;
    case 596u: goto L_08ADA5D4;
    case 597u: goto L_08ADA5F4;
    case 598u: goto L_08ADA600;
    case 599u: goto L_08ADA608;
    case 600u: goto L_08ADA610;
    case 601u: goto L_08ADA618;
    case 602u: goto L_08ADA620;
    case 603u: goto L_08ADA634;
    case 604u: goto L_08ADA63C;
    case 605u: goto L_08ADA648;
    case 606u: goto L_08ADA658;
    case 607u: goto L_08ADA65C;
    case 608u: goto L_08ADA664;
    case 609u: goto L_08ADA678;
    case 610u: goto L_08ADA688;
    case 611u: goto L_08ADA690;
    case 612u: goto L_08ADA698;
    case 613u: goto L_08ADA69C;
    case 614u: goto L_08ADA6A4;
    case 615u: goto L_08ADA6B8;
    case 616u: goto L_08ADA6C8;
    case 617u: goto L_08ADA6CC;
    case 618u: goto L_08ADA6D4;
    case 619u: goto L_08ADA6DC;
    case 620u: goto L_08ADA6E4;
    case 621u: goto L_08ADA6EC;
    case 622u: goto L_08ADA6F4;
    case 623u: goto L_08ADA714;
    case 624u: goto L_08ADA71C;
    case 625u: goto L_08ADA730;
    case 626u: goto L_08ADA744;
    case 627u: goto L_08ADA754;
    case 628u: goto L_08ADA76C;
    case 629u: goto L_08ADA774;
    case 630u: goto L_08ADA77C;
    case 631u: goto L_08ADA794;
    case 632u: goto L_08ADA79C;
    case 633u: goto L_08ADA7A4;
    case 634u: goto L_08ADA7BC;
    case 635u: goto L_08ADA7C0;
    case 636u: goto L_08ADA7D4;
    case 637u: goto L_08ADA7DC;
    case 638u: goto L_08ADA7E4;
    case 639u: goto L_08ADA7EC;
    case 640u: goto L_08ADA7F4;
    case 641u: goto L_08ADA814;
    case 642u: goto L_08ADA81C;
    case 643u: goto L_08ADA82C;
    case 644u: goto L_08ADA834;
    case 645u: goto L_08ADA838;
    case 646u: goto L_08ADA83C;
    case 647u: goto L_08ADA888;
    case 648u: goto L_08ADA894;
    case 649u: goto L_08ADA8A0;
    case 650u: goto L_08ADA8A8;
    case 651u: goto L_08ADA8B0;
    case 652u: goto L_08ADA8BC;
    case 653u: goto L_08ADA8CC;
    case 654u: goto L_08ADA8D4;
    case 655u: goto L_08ADA8D8;
    case 656u: goto L_08ADA8E0;
    case 657u: goto L_08ADA8E8;
    case 658u: goto L_08ADA8F8;
    case 659u: goto L_08ADA904;
    case 660u: goto L_08ADA90C;
    case 661u: goto L_08ADA914;
    case 662u: goto L_08ADA91C;
    case 663u: goto L_08ADA924;
    case 664u: goto L_08ADA92C;
    case 665u: goto L_08ADA93C;
    case 666u: goto L_08ADA948;
    case 667u: goto L_08ADA94C;
    case 668u: goto L_08ADA954;
    case 669u: goto L_08ADA95C;
    case 670u: goto L_08ADA968;
    case 671u: goto L_08ADA974;
    case 672u: goto L_08ADA978;
    case 673u: goto L_08ADA980;
    case 674u: goto L_08ADA98C;
    case 675u: goto L_08ADA998;
    case 676u: goto L_08ADA9A0;
    case 677u: goto L_08ADA9A8;
    case 678u: goto L_08ADA9B0;
    case 679u: goto L_08ADA9B8;
    case 680u: goto L_08ADA9C0;
    case 681u: goto L_08ADA9C8;
    case 682u: goto L_08ADA9D0;
    case 683u: goto L_08ADA9D8;
    case 684u: goto L_08ADA9E0;
    case 685u: goto L_08ADA9E4;
    case 686u: goto L_08ADAA00;
    case 687u: goto L_08ADAA24;
    case 688u: goto L_08ADAA40;
    case 689u: goto L_08ADAA48;
    case 690u: goto L_08ADAA5C;
    case 691u: goto L_08ADAA6C;
    case 692u: goto L_08ADAA74;
    case 693u: goto L_08ADAA88;
    case 694u: goto L_08ADAA90;
    case 695u: goto L_08ADAAA4;
    case 696u: goto L_08ADAAAC;
    case 697u: goto L_08ADAAC0;
    case 698u: goto L_08ADAAC8;
    case 699u: goto L_08ADAADC;
    case 700u: goto L_08ADAAE8;
    case 701u: goto L_08ADAAF0;
    case 702u: goto L_08ADAB04;
    case 703u: goto L_08ADAB0C;
    case 704u: goto L_08ADAB20;
    case 705u: goto L_08ADAB28;
    case 706u: goto L_08ADAB3C;
    case 707u: goto L_08ADAB44;
    case 708u: goto L_08ADAB58;
    case 709u: goto L_08ADAB60;
    case 710u: goto L_08ADAB68;
    case 711u: goto L_08ADAB7C;
    case 712u: goto L_08ADAB84;
    case 713u: goto L_08ADAB98;
    case 714u: goto L_08ADABA0;
    case 715u: goto L_08ADABB4;
    case 716u: goto L_08ADABBC;
    case 717u: goto L_08ADABD0;
    case 718u: goto L_08ADABD4;
    case 719u: goto L_08ADABDC;
    case 720u: goto L_08ADABE4;
    case 721u: goto L_08ADABF8;
    case 722u: goto L_08ADAC00;
    case 723u: goto L_08ADAC14;
    case 724u: goto L_08ADAC1C;
    case 725u: goto L_08ADAC3C;
    case 726u: goto L_08ADAC44;
    case 727u: goto L_08ADAC64;
    case 728u: goto L_08ADAC6C;
    case 729u: goto L_08ADAC8C;
    case 730u: goto L_08ADAC90;
    case 731u: goto L_08ADAC98;
    case 732u: goto L_08ADACB8;
    case 733u: goto L_08ADACC8;
    case 734u: goto L_08ADACD0;
    case 735u: goto L_08ADACF0;
    case 736u: goto L_08ADACF8;
    case 737u: goto L_08ADAD00;
    case 738u: goto L_08ADAD20;
    case 739u: goto L_08ADAD28;
    case 740u: goto L_08ADAD48;
    case 741u: goto L_08ADAD50;
    case 742u: goto L_08ADAD70;
    case 743u: goto L_08ADAD74;
    case 744u: goto L_08ADAD7C;
    case 745u: goto L_08ADAD9C;
    case 746u: goto L_08ADADAC;
    case 747u: goto L_08ADADB4;
    case 748u: goto L_08ADADD4;
    case 749u: goto L_08ADADDC;
    case 750u: goto L_08ADADF0;
    case 751u: goto L_08ADAE00;
    case 752u: goto L_08ADAE08;
    case 753u: goto L_08ADAE10;
    case 754u: goto L_08ADAE24;
    case 755u: goto L_08ADAE2C;
    case 756u: goto L_08ADAE58;
    case 757u: goto L_08ADAE68;
    case 758u: goto L_08ADAE70;
    case 759u: goto L_08ADAE8C;
    case 760u: goto L_08ADAE94;
    case 761u: goto L_08ADAEB0;
    case 762u: goto L_08ADAEB8;
    case 763u: goto L_08ADAED4;
    case 764u: goto L_08ADAEDC;
    case 765u: goto L_08ADAEE4;
    case 766u: goto L_08ADAEEC;
    case 767u: goto L_08ADAEF4;
    case 768u: goto L_08ADAF08;
    case 769u: goto L_08ADAF10;
    case 770u: goto L_08ADAF48;
    case 771u: goto L_08ADAF58;
    case 772u: goto L_08ADAF60;
    case 773u: goto L_08ADAF74;
    case 774u: goto L_08ADAF7C;
    case 775u: goto L_08ADAFA0;
    case 776u: goto L_08ADAFA8;
    case 777u: goto L_08ADAFCC;
    case 778u: goto L_08ADAFD4;
    case 779u: goto L_08ADAFF8;
    case 780u: goto L_08ADB000;
    case 781u: goto L_08ADB008;
    case 782u: goto L_08ADB00C;
    case 783u: goto L_08ADB014;
    case 784u: goto L_08ADB028;
    case 785u: goto L_08ADB030;
    case 786u: goto L_08ADB05C;
    case 787u: goto L_08ADB06C;
    case 788u: goto L_08ADB074;
    case 789u: goto L_08ADB088;
    case 790u: goto L_08ADB090;
    case 791u: goto L_08ADB0A4;
    case 792u: goto L_08ADB0AC;
    case 793u: goto L_08ADB0D0;
    case 794u: goto L_08ADB0D8;
    case 795u: goto L_08ADB0FC;
    case 796u: goto L_08ADB104;
    case 797u: goto L_08ADB128;
    case 798u: goto L_08ADB12C;
    case 799u: goto L_08ADB138;
    case 800u: goto L_08ADB13C;
    case 801u: goto L_08ADB144;
    case 802u: goto L_08ADB158;
    case 803u: goto L_08ADB168;
    case 804u: goto L_08ADB170;
    case 805u: goto L_08ADB178;
    case 806u: goto L_08ADB17C;
    case 807u: goto L_08ADB184;
    case 808u: goto L_08ADB198;
    case 809u: goto L_08ADB1A8;
    case 810u: goto L_08ADB1AC;
    case 811u: goto L_08ADB1C0;
    case 812u: goto L_08ADB1EC;
    case 813u: goto L_08ADB200;
    case 814u: goto L_08ADB210;
    case 815u: goto L_08ADB22C;
    case 816u: goto L_08ADB234;
    case 817u: goto L_08ADB240;
    case 818u: goto L_08ADB248;
    case 819u: goto L_08ADB250;
    case 820u: goto L_08ADB258;
    case 821u: goto L_08ADB25C;
    case 822u: goto L_08ADB264;
    case 823u: goto L_08ADB270;
    case 824u: goto L_08ADB278;
    case 825u: goto L_08ADB280;
    case 826u: goto L_08ADB288;
    case 827u: goto L_08ADB290;
    case 828u: goto L_08ADB298;
    case 829u: goto L_08ADB2A4;
    case 830u: goto L_08ADB2B0;
    case 831u: goto L_08ADB2B8;
    case 832u: goto L_08ADB2C0;
    case 833u: goto L_08ADB2C8;
    case 834u: goto L_08ADB2CC;
    case 835u: goto L_08ADB2D4;
    case 836u: goto L_08ADB2DC;
    case 837u: goto L_08ADB2E4;
    case 838u: goto L_08ADB2EC;
    case 839u: goto L_08ADB2F4;
    case 840u: goto L_08ADB2FC;
    case 841u: goto L_08ADB308;
    case 842u: goto L_08ADB314;
    case 843u: goto L_08ADB31C;
    case 844u: goto L_08ADB324;
    case 845u: goto L_08ADB32C;
    case 846u: goto L_08ADB330;
    case 847u: goto L_08ADB338;
    case 848u: goto L_08ADB340;
    case 849u: goto L_08ADB348;
    case 850u: goto L_08ADB350;
    case 851u: goto L_08ADB358;
    case 852u: goto L_08ADB364;
    case 853u: goto L_08ADB370;
    case 854u: goto L_08ADB378;
    case 855u: goto L_08ADB380;
    case 856u: goto L_08ADB388;
    case 857u: goto L_08ADB38C;
    case 858u: goto L_08ADB394;
    case 859u: goto L_08ADB39C;
    case 860u: goto L_08ADB3A4;
    case 861u: goto L_08ADB3AC;
    case 862u: goto L_08ADB3B4;
    case 863u: goto L_08ADB3BC;
    case 864u: goto L_08ADB3C4;
    case 865u: goto L_08ADB3CC;
    case 866u: goto L_08ADB3D4;
    case 867u: goto L_08ADB3DC;
    case 868u: goto L_08ADB3E4;
    case 869u: goto L_08ADB3EC;
    case 870u: goto L_08ADB3F4;
    case 871u: goto L_08ADB404;
    case 872u: goto L_08ADB40C;
    case 873u: goto L_08ADB418;
    case 874u: goto L_08ADB420;
    case 875u: goto L_08ADB42C;
    case 876u: goto L_08ADB434;
    case 877u: goto L_08ADB448;
    case 878u: goto L_08ADB458;
    case 879u: goto L_08ADB460;
    case 880u: goto L_08ADB470;
    case 881u: goto L_08ADB478;
    case 882u: goto L_08ADB480;
    case 883u: goto L_08ADB48C;
    case 884u: goto L_08ADB494;
    case 885u: goto L_08ADB4A0;
    case 886u: goto L_08ADB4AC;
    case 887u: goto L_08ADB4B8;
    case 888u: goto L_08ADB4BC;
    case 889u: goto L_08ADB4C8;
    case 890u: goto L_08ADB4D4;
    case 891u: goto L_08ADB4DC;
    case 892u: goto L_08ADB4E4;
    case 893u: goto L_08ADB4F0;
    case 894u: goto L_08ADB500;
    case 895u: goto L_08ADB508;
    case 896u: goto L_08ADB518;
    case 897u: goto L_08ADB520;
    case 898u: goto L_08ADB528;
    case 899u: goto L_08ADB538;
    case 900u: goto L_08ADB540;
    case 901u: goto L_08ADB548;
    case 902u: goto L_08ADB554;
    case 903u: goto L_08ADB564;
    case 904u: goto L_08ADB56C;
    case 905u: goto L_08ADB574;
    case 906u: goto L_08ADB57C;
    case 907u: goto L_08ADB584;
    case 908u: goto L_08ADB58C;
    case 909u: goto L_08ADB594;
    case 910u: goto L_08ADB59C;
    case 911u: goto L_08ADB5A0;
    case 912u: goto L_08ADB5BC;
    case 913u: goto L_08ADB5D0;
    case 914u: goto L_08ADB5DC;
    case 915u: goto L_08ADB5E4;
    case 916u: goto L_08ADB5F0;
    case 917u: goto L_08ADB5F8;
    case 918u: goto L_08ADB60C;
    case 919u: goto L_08ADB61C;
    case 920u: goto L_08ADB620;
    case 921u: goto L_08ADB634;
    case 922u: goto L_08ADB640;
    case 923u: goto L_08ADB648;
    case 924u: goto L_08ADB650;
    case 925u: goto L_08ADB664;
    case 926u: goto L_08ADB66C;
    case 927u: goto L_08ADB680;
    case 928u: goto L_08ADB688;
    case 929u: goto L_08ADB690;
    case 930u: goto L_08ADB698;
    case 931u: goto L_08ADB6A0;
    case 932u: goto L_08ADB6A8;
    case 933u: goto L_08ADB6BC;
    case 934u: goto L_08ADB6C4;
    case 935u: goto L_08ADB6D8;
    case 936u: goto L_08ADB6E0;
    case 937u: goto L_08ADB6E8;
    case 938u: goto L_08ADB6F0;
    case 939u: goto L_08ADB6F8;
    case 940u: goto L_08ADB700;
    case 941u: goto L_08ADB718;
    case 942u: goto L_08ADB72C;
    case 943u: goto L_08ADB730;
    case 944u: goto L_08ADB73C;
    case 945u: goto L_08ADB744;
    case 946u: goto L_08ADB750;
    case 947u: goto L_08ADB758;
    case 948u: goto L_08ADB764;
    case 949u: goto L_08ADB770;
    case 950u: goto L_08ADB784;
    case 951u: goto L_08ADB794;
    case 952u: goto L_08ADB7A0;
    case 953u: goto L_08ADB7A4;
    case 954u: goto L_08ADB7AC;
    case 955u: goto L_08ADB7B4;
    case 956u: goto L_08ADB7BC;
    case 957u: goto L_08ADB7D0;
    case 958u: goto L_08ADB7E0;
    case 959u: goto L_08ADB7E8;
    case 960u: goto L_08ADB7F8;
    case 961u: goto L_08ADB804;
    case 962u: goto L_08ADB810;
    case 963u: goto L_08ADB814;
    case 964u: goto L_08ADB818;
    case 965u: goto L_08ADB81C;
    case 966u: goto L_08ADB828;
    case 967u: goto L_08ADB830;
    case 968u: goto L_08ADB844;
    case 969u: goto L_08ADB850;
    case 970u: goto L_08ADB854;
    case 971u: goto L_08ADB85C;
    case 972u: goto L_08ADB864;
    case 973u: goto L_08ADB86C;
    case 974u: goto L_08ADB874;
    case 975u: goto L_08ADB87C;
    case 976u: goto L_08ADB884;
    case 977u: goto L_08ADB88C;
    case 978u: goto L_08ADB894;
    case 979u: goto L_08ADB898;
    case 980u: goto L_08ADB8A0;
    case 981u: goto L_08ADB8A8;
    case 982u: goto L_08ADB8B4;
    case 983u: goto L_08ADB8BC;
    case 984u: goto L_08ADB8D0;
    case 985u: goto L_08ADB8D8;
    case 986u: goto L_08ADB8F8;
    case 987u: goto L_08ADB900;
    case 988u: goto L_08ADB920;
    case 989u: goto L_08ADB928;
    case 990u: goto L_08ADB92C;
    case 991u: goto L_08ADB93C;
    case 992u: goto L_08ADB950;
    case 993u: goto L_08ADB95C;
    case 994u: goto L_08ADB964;
    case 995u: goto L_08ADB96C;
    case 996u: goto L_08ADB980;
    case 997u: goto L_08ADB990;
    case 998u: goto L_08ADB9A0;
    case 999u: goto L_08ADB9A4;
    case 1000u: goto L_08ADB9B8;
    case 1001u: goto L_08ADB9C0;
    case 1002u: goto L_08ADB9CC;
    case 1003u: goto L_08ADB9D4;
    case 1004u: goto L_08ADB9E8;
    case 1005u: goto L_08ADB9F0;
    case 1006u: goto L_08ADBA10;
    case 1007u: goto L_08ADBA18;
    case 1008u: goto L_08ADBA38;
    case 1009u: goto L_08ADBA40;
    case 1010u: goto L_08ADBA48;
    case 1011u: goto L_08ADBA54;
    case 1012u: goto L_08ADBA5C;
    case 1013u: goto L_08ADBA68;
    case 1014u: goto L_08ADBA78;
    case 1015u: goto L_08ADBA8C;
    case 1016u: goto L_08ADBA98;
    case 1017u: goto L_08ADBAA0;
    case 1018u: goto L_08ADBAA8;
    case 1019u: goto L_08ADBABC;
    case 1020u: goto L_08ADBACC;
    case 1021u: goto L_08ADBADC;
    case 1022u: goto L_08ADBAE8;
    case 1023u: goto L_08ADBAEC;
    case 1024u: goto L_08ADBAF4;
    case 1025u: goto L_08ADBB00;
    case 1026u: goto L_08ADBB08;
    case 1027u: goto L_08ADBB14;
    case 1028u: goto L_08ADBB1C;
    case 1029u: goto L_08ADBB30;
    case 1030u: goto L_08ADBB38;
    case 1031u: goto L_08ADBB4C;
    case 1032u: goto L_08ADBB54;
    case 1033u: goto L_08ADBB74;
    case 1034u: goto L_08ADBB7C;
    case 1035u: goto L_08ADBB9C;
    case 1036u: goto L_08ADBBA4;
    case 1037u: goto L_08ADBBAC;
    case 1038u: goto L_08ADBBB8;
    case 1039u: goto L_08ADBBC0;
    case 1040u: goto L_08ADBBC8;
    case 1041u: goto L_08ADBBDC;
    case 1042u: goto L_08ADBBE4;
    case 1043u: goto L_08ADBBF8;
    case 1044u: goto L_08ADBC04;
    case 1045u: goto L_08ADBC0C;
    case 1046u: goto L_08ADBC18;
    case 1047u: goto L_08ADBC20;
    case 1048u: goto L_08ADBC34;
    case 1049u: goto L_08ADBC3C;
    case 1050u: goto L_08ADBC5C;
    case 1051u: goto L_08ADBC64;
    case 1052u: goto L_08ADBC84;
    case 1053u: goto L_08ADBCA4;
    case 1054u: goto L_08ADBCB8;
    case 1055u: goto L_08ADBCC4;
    case 1056u: goto L_08ADBCD4;
    case 1057u: goto L_08ADBCE8;
    case 1058u: goto L_08ADBCF4;
    case 1059u: goto L_08ADBCFC;
    case 1060u: goto L_08ADBD08;
    case 1061u: goto L_08ADBD10;
    case 1062u: goto L_08ADBD24;
    case 1063u: goto L_08ADBD2C;
    case 1064u: goto L_08ADBD40;
    case 1065u: goto L_08ADBD48;
    case 1066u: goto L_08ADBD5C;
    case 1067u: goto L_08ADBD64;
    case 1068u: goto L_08ADBD78;
    case 1069u: goto L_08ADBD88;
    case 1070u: goto L_08ADBD90;
    case 1071u: goto L_08ADBD9C;
    case 1072u: goto L_08ADBDA4;
    case 1073u: goto L_08ADBDB8;
    case 1074u: goto L_08ADBDC0;
    case 1075u: goto L_08ADBDE0;
    case 1076u: goto L_08ADBDE8;
    case 1077u: goto L_08ADBE08;
    case 1078u: goto L_08ADBE18;
    case 1079u: goto L_08ADBE20;
    case 1080u: goto L_08ADBE2C;
    case 1081u: goto L_08ADBE34;
    case 1082u: goto L_08ADBE40;
    case 1083u: goto L_08ADBE48;
    case 1084u: goto L_08ADBE50;
    case 1085u: goto L_08ADBE5C;
    case 1086u: goto L_08ADBE64;
    case 1087u: goto L_08ADBE78;
    case 1088u: goto L_08ADBE80;
    case 1089u: goto L_08ADBEA0;
    case 1090u: goto L_08ADBEA8;
    case 1091u: goto L_08ADBEC8;
    case 1092u: goto L_08ADBECC;
    case 1093u: goto L_08ADBEDC;
    case 1094u: goto L_08ADBEF0;
    case 1095u: goto L_08ADBEFC;
    case 1096u: goto L_08ADBF04;
    case 1097u: goto L_08ADBF0C;
    case 1098u: goto L_08ADBF20;
    case 1099u: goto L_08ADBF28;
    case 1100u: goto L_08ADBF3C;
    case 1101u: goto L_08ADBF44;
    case 1102u: goto L_08ADBF58;
    case 1103u: goto L_08ADBF6C;
    case 1104u: goto L_08ADBF74;
    case 1105u: goto L_08ADBF7C;
    case 1106u: goto L_08ADBF88;
    case 1107u: goto L_08ADBF90;
    case 1108u: goto L_08ADBFA4;
    case 1109u: goto L_08ADBFAC;
    case 1110u: goto L_08ADBFCC;
    case 1111u: goto L_08ADBFD4;
    case 1112u: goto L_08ADBFF4;
    case 1113u: goto L_08ADBFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AD8000:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8014:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[7]);
    if (static_cast<std::int32_t>(ctx.gpr[6]) <= 0) {
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
        goto L_08AD8040;
    }
    goto L_08AD8028;
L_08AD8028:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, ctx.gpr[9] << 2u);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AD8040;
L_08AD8040:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8048:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD8074;
      }
      goto L_08AD8054;
    }
L_08AD8054:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[9] << 2u);
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[8]);
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8074:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23108)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[7]);
    goto L_08AD8054;
L_08AD8088:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8098:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AD80B8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B0DDECu;
    return;
L_08AD80B8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AD80D0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.pc = 0x08B0DDD4u;
    return;
L_08AD80D0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    if (ctx.gpr[5] == 0u) {
    ctx.pc = 0x08AD80E8u; rt.stop("Allegrex BREAK code 7 at 0x08AD80E8"); return;
        goto L_08AD80EC;
    }
    goto L_08AD80EC;
L_08AD80EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.hi);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8104:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8114:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD811C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AD8130u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0DD4Cu;
    return;
L_08AD8130:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8140:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AD8154u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0DD4Cu;
    return;
L_08AD8154:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8160:
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(8, ctx.gpr[5] << 2u);
    ctx.set_gpr(7, ctx.gpr[9] + static_cast<std::uint32_t>(652));
    ctx.set_gpr(3, ctx.gpr[7] - ctx.gpr[8]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[6] << 15u);
    ctx.set_gpr(2, ctx.gpr[5] >> 8u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8188:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8198:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08AD81C8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 82u, 0x088A4578u>(ctx, &aot_mem) && ctx.pc == 0x08AD81C8u) goto L_08AD81C8;
    return;
L_08AD81C8:
    ctx.set_gpr(2, ctx.gpr[16] << 7u);
    ctx.set_gpr(4, 0u | 44100u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23120)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
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
L_08AD8204:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD820C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD82F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AD8300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 719u, 0x08882988u>(ctx, &aot_mem) && ctx.pc == 0x08AD8300u) goto L_08AD8300;
    return;
L_08AD8300:
    ctx.set_gpr(3, ctx.gpr[2] ^ 4u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8314:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD839C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AD83ACu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 584u, 0x088822A4u>(ctx, &aot_mem) && ctx.pc == 0x08AD83ACu) goto L_08AD83AC;
    return;
L_08AD83AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD83B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AD83C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 591u, 0x08882310u>(ctx, &aot_mem) && ctx.pc == 0x08AD83C8u) goto L_08AD83C8;
    return;
L_08AD83C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD83D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AD83F0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 669u, 0x08882768u>(ctx, &aot_mem) && ctx.pc == 0x08AD83F0u) goto L_08AD83F0;
    return;
L_08AD83F0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(0));
    ctx.set_gpr(8, 32767u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] | 63488u);
    ctx.set_gpr(31, 0x08AD8410u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 652u, 0x08882594u>(ctx, &aot_mem) && ctx.pc == 0x08AD8410u) goto L_08AD8410;
    return;
L_08AD8410:
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AD8420u);
    ctx.set_gpr(5, ctx.gpr[2] | 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 775u, 0x08882D18u>(ctx, &aot_mem) && ctx.pc == 0x08AD8420u) goto L_08AD8420;
    return;
L_08AD8420:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8434:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AD8468u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 669u, 0x08882768u>(ctx, &aot_mem) && ctx.pc == 0x08AD8468u) goto L_08AD8468;
    return;
L_08AD8468:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2048));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.hi);
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(31, 0x08AD848Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 652u, 0x08882594u>(ctx, &aot_mem) && ctx.pc == 0x08AD848Cu) goto L_08AD848C;
    return;
L_08AD848C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AD8498u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 775u, 0x08882D18u>(ctx, &aot_mem) && ctx.pc == 0x08AD8498u) goto L_08AD8498;
    return;
L_08AD8498:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08AD84B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AD84C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 731u, 0x08882A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD84C8u) goto L_08AD84C8;
    return;
L_08AD84C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD84D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AD84E8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 745u, 0x08882B80u>(ctx, &aot_mem) && ctx.pc == 0x08AD84E8u) goto L_08AD84E8;
    return;
L_08AD84E8:
    ctx.set_gpr(31, 0x08AD84F0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 669u, 0x08882768u>(ctx, &aot_mem) && ctx.pc == 0x08AD84F0u) goto L_08AD84F0;
    return;
L_08AD84F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD852C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AD853Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 719u, 0x08882988u>(ctx, &aot_mem) && ctx.pc == 0x08AD853Cu) goto L_08AD853C;
    return;
L_08AD853C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8548:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AD8558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 857u, 0x08883710u>(ctx, &aot_mem) && ctx.pc == 0x08AD8558u) goto L_08AD8558;
    return;
L_08AD8558:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8568:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AD85D4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 266u, 0x08A9116Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD85D4u) goto L_08AD85D4;
    return;
L_08AD85D4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AD85E8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AD85E8u) goto L_08AD85E8;
    return;
L_08AD85E8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AD8600u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8600u) goto L_08AD8600;
    return;
L_08AD8600:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(328), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(178), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(177), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(179), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08AD86A0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD86A0u) goto L_08AD86A0;
    return;
L_08AD86A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD86ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1370));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 847u, 0x08AB31BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD86ACu) goto L_08AD86AC;
    return;
L_08AD86AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD86BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AD8700;
L_08AD8700:
    ctx.set_gpr(31, 0x08AD8708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8708u) goto L_08AD8708;
    return;
L_08AD8708:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17024u << 16u);
    ctx.set_gpr(3, 17182u << 16u);
    ctx.set_gpr(10, 16968u << 16u);
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AD8754u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AD8754u) goto L_08AD8754;
    return;
L_08AD8754:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08AD8700;
      }
      goto L_08AD8764;
    }
L_08AD8764:
    ctx.set_gpr(16, 0u + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    goto L_08AD876C;
L_08AD876C:
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17136u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x08AD8784u);
    ctx.fpr[20] = ctx.fpr[1] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8784u) goto L_08AD8784;
    return;
L_08AD8784:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(85));
    ctx.set_gpr(8, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AD87B4u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AD87B4u) goto L_08AD87B4;
    return;
L_08AD87B4:
    ctx.set_gpr(31, 0x08AD87BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD87BCu) goto L_08AD87BC;
    return;
L_08AD87BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(8, ctx.gpr[16] + static_cast<std::uint32_t>(27));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD87ECu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AD87ECu) goto L_08AD87EC;
    return;
L_08AD87EC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
        goto L_08AD876C;
    }
    goto L_08AD87FC;
L_08AD87FC:
    ctx.set_gpr(31, 0x08AD8804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8804u) goto L_08AD8804;
    return;
L_08AD8804:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17172u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08AD8838u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AD8838u) goto L_08AD8838;
    return;
L_08AD8838:
    ctx.set_gpr(31, 0x08AD8840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8840u) goto L_08AD8840;
    return;
L_08AD8840:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17172u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(91));
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AD8874u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AD8874u) goto L_08AD8874;
    return;
L_08AD8874:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AD8878;
L_08AD8878:
    ctx.set_gpr(31, 0x08AD8880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8880u) goto L_08AD8880;
    return;
L_08AD8880:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AD8894u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8894u) goto L_08AD8894;
    return;
L_08AD8894:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8878;
      }
      goto L_08AD88A4;
    }
L_08AD88A4:
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
L_08AD88BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AD88CC;
L_08AD88CC:
    ctx.set_gpr(31, 0x08AD88D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD88D4u) goto L_08AD88D4;
    return;
L_08AD88D4:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD88E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AD88E4u) goto L_08AD88E4;
    return;
L_08AD88E4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD88CC;
      }
      goto L_08AD88F4;
    }
L_08AD88F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8904:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD8D00;
      }
      goto L_08AD8930;
    }
L_08AD8930:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AD89F0;
      }
      goto L_08AD893C;
    }
L_08AD893C:
    if (ctx.gpr[5] == 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(152), ctx.gpr[3]);
        goto L_08AD894C;
    }
    goto L_08AD8944;
L_08AD8944:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AD8D58;
      }
      goto L_08AD894C;
    }
L_08AD894C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AD895Cu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD895Cu) goto L_08AD895C;
    return;
L_08AD895C:
    ctx.set_gpr(31, 0x08AD8964u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD8964u) goto L_08AD8964;
    return;
L_08AD8964:
    ctx.set_gpr(31, 0x08AD896Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD896Cu) goto L_08AD896C;
    return;
L_08AD896C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08AD897Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32128)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AD897Cu) goto L_08AD897C;
    return;
L_08AD897C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD899C;
      }
      goto L_08AD8988;
    }
L_08AD8988:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AD8994u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AD8994u) goto L_08AD8994;
    return;
L_08AD8994:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(0u));
    goto L_08AD899C;
L_08AD899C:
    ctx.set_gpr(31, 0x08AD89A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AD89A4u) goto L_08AD89A4;
    return;
L_08AD89A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32128));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AD89C4u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AD89C4u) goto L_08AD89C4;
    return;
L_08AD89C4:
    ctx.set_gpr(31, 0x08AD89CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AD89CCu) goto L_08AD89CC;
    return;
L_08AD89CC:
    ctx.set_gpr(31, 0x08AD89D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD89D4u) goto L_08AD89D4;
    return;
L_08AD89D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD89E0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD89E0u) goto L_08AD89E0;
    return;
L_08AD89E0:
    ctx.set_gpr(31, 0x08AD89E8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 396u, 0x08A81204u>(ctx, &aot_mem) && ctx.pc == 0x08AD89E8u) goto L_08AD89E8;
    return;
L_08AD89E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8D54;
      }
      goto L_08AD89F0;
    }
L_08AD89F0:
    ctx.set_gpr(31, 0x08AD89F8u);
    // nop
    goto L_08AD8D70;
L_08AD89F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08AD8AC0;
    }
    goto L_08AD8A08;
L_08AD8A08:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AD8A10;
L_08AD8A10:
    ctx.set_gpr(31, 0x08AD8A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8A18u) goto L_08AD8A18;
    return;
L_08AD8A18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AD8A2Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8A2Cu) goto L_08AD8A2C;
    return;
L_08AD8A2C:
    ctx.set_gpr(31, 0x08AD8A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8A34u) goto L_08AD8A34;
    return;
L_08AD8A34:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17024u << 16u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(2, 17182u << 16u);
    ctx.set_gpr(31, 0x08AD8A60u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AD8A60u) goto L_08AD8A60;
    return;
L_08AD8A60:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08AD8A10;
      }
      goto L_08AD8A70;
    }
L_08AD8A70:
    ctx.set_gpr(31, 0x08AD8A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8A78u) goto L_08AD8A78;
    return;
L_08AD8A78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(91));
    ctx.set_gpr(31, 0x08AD8A94u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8A94u) goto L_08AD8A94;
    return;
L_08AD8A94:
    ctx.set_gpr(31, 0x08AD8A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8A9Cu) goto L_08AD8A9C;
    return;
L_08AD8A9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08AD8AB8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8AB8u) goto L_08AD8AB8;
    return;
L_08AD8AB8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08AD8CCC;
      }
      goto L_08AD8AC0;
    }
L_08AD8AC0:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AD8BB8;
    }
    goto L_08AD8AC8;
L_08AD8AC8:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AD8AD0;
L_08AD8AD0:
    ctx.set_gpr(31, 0x08AD8AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8AD8u) goto L_08AD8AD8;
    return;
L_08AD8AD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AD8AECu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8AECu) goto L_08AD8AEC;
    return;
L_08AD8AEC:
    ctx.set_gpr(31, 0x08AD8AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8AF4u) goto L_08AD8AF4;
    return;
L_08AD8AF4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17024u << 16u);
    ctx.set_gpr(3, 16968u << 16u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(2, 17182u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08AD8B2Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AD8B2Cu) goto L_08AD8B2C;
    return;
L_08AD8B2C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08AD8AD0;
      }
      goto L_08AD8B3C;
    }
L_08AD8B3C:
    ctx.set_gpr(31, 0x08AD8B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8B44u) goto L_08AD8B44;
    return;
L_08AD8B44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08AD8B58u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8B58u) goto L_08AD8B58;
    return;
L_08AD8B58:
    ctx.set_gpr(31, 0x08AD8B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8B60u) goto L_08AD8B60;
    return;
L_08AD8B60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16204u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AD8B84u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(91));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8B84u) goto L_08AD8B84;
    return;
L_08AD8B84:
    ctx.set_gpr(31, 0x08AD8B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8B8Cu) goto L_08AD8B8C;
    return;
L_08AD8B8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16204u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AD8BB0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8BB0u) goto L_08AD8BB0;
    return;
L_08AD8BB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8CC8;
      }
      goto L_08AD8BB8;
    }
L_08AD8BB8:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AD8CC8;
      }
      goto L_08AD8BC0;
    }
L_08AD8BC0:
    ctx.set_gpr(31, 0x08AD8BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8BC8u) goto L_08AD8BC8;
    return;
L_08AD8BC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(81));
    ctx.set_gpr(31, 0x08AD8BDCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8BDCu) goto L_08AD8BDC;
    return;
L_08AD8BDC:
    ctx.set_gpr(31, 0x08AD8BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8BE4u) goto L_08AD8BE4;
    return;
L_08AD8BE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08AD8BF8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8BF8u) goto L_08AD8BF8;
    return;
L_08AD8BF8:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(100));
    goto L_08AD8C00;
L_08AD8C00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
      if (branch_taken) {
          goto L_08AD8C10;
      }
      goto L_08AD8C08;
    }
L_08AD8C08:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_08AD8C10;
L_08AD8C10:
    ctx.set_gpr(31, 0x08AD8C18u);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(82));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8C18u) goto L_08AD8C18;
    return;
L_08AD8C18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AD8C2Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8C2Cu) goto L_08AD8C2C;
    return;
L_08AD8C2C:
    ctx.set_gpr(31, 0x08AD8C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8C34u) goto L_08AD8C34;
    return;
L_08AD8C34:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17024u << 16u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(2, 17182u << 16u);
    ctx.set_gpr(31, 0x08AD8C60u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AD8C60u) goto L_08AD8C60;
    return;
L_08AD8C60:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08AD8C00;
      }
      goto L_08AD8C70;
    }
L_08AD8C70:
    ctx.set_gpr(31, 0x08AD8C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8C78u) goto L_08AD8C78;
    return;
L_08AD8C78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16140u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AD8C9Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(91));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8C9Cu) goto L_08AD8C9C;
    return;
L_08AD8C9C:
    ctx.set_gpr(31, 0x08AD8CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8CA4u) goto L_08AD8CA4;
    return;
L_08AD8CA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16140u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AD8CC8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8CC8u) goto L_08AD8CC8;
    return;
L_08AD8CC8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AD8CCC;
L_08AD8CCC:
    ctx.set_gpr(31, 0x08AD8CD4u);
    // nop
    goto L_08AD8E24;
L_08AD8CD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8CE8;
      }
      goto L_08AD8CDC;
    }
L_08AD8CDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    goto L_08AD8CE8;
L_08AD8CE8:
    ctx.set_gpr(31, 0x08AD8CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AD8CF0u) goto L_08AD8CF0;
    return;
L_08AD8CF0:
    ctx.set_gpr(31, 0x08AD8CF8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 800u, 0x08AF754Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8CF8u) goto L_08AD8CF8;
    return;
L_08AD8CF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8D54;
      }
      goto L_08AD8D00;
    }
L_08AD8D00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AD8D30;
      }
      goto L_08AD8D10;
    }
L_08AD8D10:
    ctx.set_gpr(31, 0x08AD8D18u);
    // nop
    goto L_08AD88BC;
L_08AD8D18:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(148), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(152), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AD8D54;
      }
      goto L_08AD8D30;
    }
L_08AD8D30:
    ctx.set_gpr(31, 0x08AD8D38u);
    // nop
    goto L_08AD88BC;
L_08AD8D38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(148), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(152), 0u);
    ctx.set_gpr(31, 0x08AD8D50u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 396u, 0x08A81204u>(ctx, &aot_mem) && ctx.pc == 0x08AD8D50u) goto L_08AD8D50;
    return;
L_08AD8D50:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    goto L_08AD8D54;
L_08AD8D54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AD8D58;
L_08AD8D58:
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
L_08AD8D70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AD8D80;
L_08AD8D80:
    ctx.set_gpr(31, 0x08AD8D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8D88u) goto L_08AD8D88;
    return;
L_08AD8D88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AD8D9Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8D9Cu) goto L_08AD8D9C;
    return;
L_08AD8D9C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8D80;
      }
      goto L_08AD8DAC;
    }
L_08AD8DAC:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AD8DB0;
L_08AD8DB0:
    ctx.set_gpr(31, 0x08AD8DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8DB8u) goto L_08AD8DB8;
    return;
L_08AD8DB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(85));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AD8DCCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8DCCu) goto L_08AD8DCC;
    return;
L_08AD8DCC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8DB0;
      }
      goto L_08AD8DDC;
    }
L_08AD8DDC:
    ctx.set_gpr(31, 0x08AD8DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8DE4u) goto L_08AD8DE4;
    return;
L_08AD8DE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(91));
    ctx.set_gpr(31, 0x08AD8DF8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8DF8u) goto L_08AD8DF8;
    return;
L_08AD8DF8:
    ctx.set_gpr(31, 0x08AD8E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8E00u) goto L_08AD8E00;
    return;
L_08AD8E00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08AD8E14u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8E14u) goto L_08AD8E14;
    return;
L_08AD8E14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8E24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD8EBC;
      }
      goto L_08AD8E40;
    }
L_08AD8E40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AD8E8C;
      }
      goto L_08AD8E4C;
    }
L_08AD8E4C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8E5C;
      }
      goto L_08AD8E54;
    }
L_08AD8E54:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AD8EF0;
      }
      goto L_08AD8E5C;
    }
L_08AD8E5C:
    ctx.set_gpr(31, 0x08AD8E64u);
    // nop
    goto L_08AD8F00;
L_08AD8E64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8EEC;
      }
      goto L_08AD8E6C;
    }
L_08AD8E6C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(162)));
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
        goto L_08AD8E84;
    }
    goto L_08AD8E78;
L_08AD8E78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD8EF0;
      }
      goto L_08AD8E84;
    }
L_08AD8E84:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD8EF0;
      }
      goto L_08AD8E8C;
    }
L_08AD8E8C:
    ctx.set_gpr(31, 0x08AD8E94u);
    // nop
    goto L_08AD9C88;
L_08AD8E94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8EEC;
      }
      goto L_08AD8E9C;
    }
L_08AD8E9C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(162)));
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
        goto L_08AD8EB4;
    }
    goto L_08AD8EA8;
L_08AD8EA8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD8EF0;
      }
      goto L_08AD8EB4;
    }
L_08AD8EB4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD8EF0;
      }
      goto L_08AD8EBC;
    }
L_08AD8EBC:
    ctx.set_gpr(31, 0x08AD8EC4u);
    // nop
    goto L_08AD9A38;
L_08AD8EC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8EEC;
      }
      goto L_08AD8ECC;
    }
L_08AD8ECC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(162)));
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
        goto L_08AD8EE4;
    }
    goto L_08AD8ED8;
L_08AD8ED8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD8EF0;
      }
      goto L_08AD8EE4;
    }
L_08AD8EE4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD8EF0;
      }
      goto L_08AD8EEC;
    }
L_08AD8EEC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AD8EF0;
L_08AD8EF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8F00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD8F54;
      }
      goto L_08AD8F18;
    }
L_08AD8F18:
    ctx.set_gpr(31, 0x08AD8F20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AD8F20u) goto L_08AD8F20;
    return;
L_08AD8F20:
    ctx.set_gpr(31, 0x08AD8F28u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD8F28u) goto L_08AD8F28;
    return;
L_08AD8F28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x08AD8F4Cu);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AD8F4Cu) goto L_08AD8F4C;
    return;
L_08AD8F4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AD8F54;
L_08AD8F54:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(141)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(141)));
        goto L_08AD981C;
    }
    goto L_08AD8F60;
L_08AD8F60:
    ctx.set_gpr(31, 0x08AD8F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD8F68u) goto L_08AD8F68;
    return;
L_08AD8F68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD8F74u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8F74u) goto L_08AD8F74;
    return;
L_08AD8F74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9014;
      }
      goto L_08AD8F7C;
    }
L_08AD8F7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
        goto L_08AD8FAC;
    }
    goto L_08AD8F8C;
L_08AD8F8C:
    ctx.set_gpr(31, 0x08AD8F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8F94u) goto L_08AD8F94;
    return;
L_08AD8F94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD8FA8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8FA8u) goto L_08AD8FA8;
    return;
L_08AD8FA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    goto L_08AD8FAC;
L_08AD8FAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AD8FBC;
      }
      goto L_08AD8FB8;
    }
L_08AD8FB8:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08AD8FBC;
L_08AD8FBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AD8FE8;
      }
      goto L_08AD8FC8;
    }
L_08AD8FC8:
    ctx.set_gpr(31, 0x08AD8FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AD8FD0u) goto L_08AD8FD0;
    return;
L_08AD8FD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08AD8FE0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32136)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AD8FE0u) goto L_08AD8FE0;
    return;
L_08AD8FE0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
      if (branch_taken) {
          goto L_08AD91C4;
      }
      goto L_08AD8FE8;
    }
L_08AD8FE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AD91C0;
      }
      goto L_08AD8FF4;
    }
L_08AD8FF4:
    ctx.set_gpr(31, 0x08AD8FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AD8FFCu) goto L_08AD8FFC;
    return;
L_08AD8FFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08AD900Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32140)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AD900Cu) goto L_08AD900C;
    return;
L_08AD900C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD91C0;
      }
      goto L_08AD9014;
    }
L_08AD9014:
    ctx.set_gpr(31, 0x08AD901Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD901Cu) goto L_08AD901C;
    return;
L_08AD901C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD9028u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9028u) goto L_08AD9028;
    return;
L_08AD9028:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD90C8;
      }
      goto L_08AD9030;
    }
L_08AD9030:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
        goto L_08AD9060;
    }
    goto L_08AD9040;
L_08AD9040:
    ctx.set_gpr(31, 0x08AD9048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9048u) goto L_08AD9048;
    return;
L_08AD9048:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD905Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD905Cu) goto L_08AD905C;
    return;
L_08AD905C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    goto L_08AD9060;
L_08AD9060:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AD9070;
      }
      goto L_08AD906C;
    }
L_08AD906C:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    goto L_08AD9070;
L_08AD9070:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AD909C;
      }
      goto L_08AD907C;
    }
L_08AD907C:
    ctx.set_gpr(31, 0x08AD9084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AD9084u) goto L_08AD9084;
    return;
L_08AD9084:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08AD9094u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32132)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AD9094u) goto L_08AD9094;
    return;
L_08AD9094:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD91C0;
      }
      goto L_08AD909C;
    }
L_08AD909C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AD91C0;
      }
      goto L_08AD90A8;
    }
L_08AD90A8:
    ctx.set_gpr(31, 0x08AD90B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AD90B0u) goto L_08AD90B0;
    return;
L_08AD90B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08AD90C0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32136)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AD90C0u) goto L_08AD90C0;
    return;
L_08AD90C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD91C0;
      }
      goto L_08AD90C8;
    }
L_08AD90C8:
    ctx.set_gpr(31, 0x08AD90D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD90D0u) goto L_08AD90D0;
    return;
L_08AD90D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD90DCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AD90DCu) goto L_08AD90DC;
    return;
L_08AD90DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9148;
      }
      goto L_08AD90E4;
    }
L_08AD90E4:
    ctx.set_gpr(31, 0x08AD90ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD90ECu) goto L_08AD90EC;
    return;
L_08AD90EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD9100u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9100u) goto L_08AD9100;
    return;
L_08AD9100:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AD911Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 456u, 0x08A898E4u>(ctx, &aot_mem) && ctx.pc == 0x08AD911Cu) goto L_08AD911C;
    return;
L_08AD911C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AD912Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AD912Cu) goto L_08AD912C;
    return;
L_08AD912C:
    ctx.set_gpr(31, 0x08AD9134u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9134u) goto L_08AD9134;
    return;
L_08AD9134:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x08AD9140u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9140u) goto L_08AD9140;
    return;
L_08AD9140:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AD91C0;
      }
      goto L_08AD9148;
    }
L_08AD9148:
    ctx.set_gpr(31, 0x08AD9150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9150u) goto L_08AD9150;
    return;
L_08AD9150:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD915Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD915Cu) goto L_08AD915C;
    return;
L_08AD915C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD91C0;
      }
      goto L_08AD9164;
    }
L_08AD9164:
    ctx.set_gpr(31, 0x08AD916Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD916Cu) goto L_08AD916C;
    return;
L_08AD916C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD9180u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9180u) goto L_08AD9180;
    return;
L_08AD9180:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AD9194u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 456u, 0x08A898E4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9194u) goto L_08AD9194;
    return;
L_08AD9194:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AD91A8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AD91A8u) goto L_08AD91A8;
    return;
L_08AD91A8:
    ctx.set_gpr(31, 0x08AD91B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD91B0u) goto L_08AD91B0;
    return;
L_08AD91B0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x08AD91BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD91BCu) goto L_08AD91BC;
    return;
L_08AD91BC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    goto L_08AD91C0;
L_08AD91C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    goto L_08AD91C4;
L_08AD91C4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD94E4;
      }
      goto L_08AD91D0;
    }
L_08AD91D0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD9454;
      }
      goto L_08AD91DC;
    }
L_08AD91DC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AD93C4;
      }
      goto L_08AD91E8;
    }
L_08AD91E8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08AD91F8;
    }
    goto L_08AD91F0;
L_08AD91F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD956C;
      }
      goto L_08AD91F8;
    }
L_08AD91F8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AD9290;
      }
      goto L_08AD9200;
    }
L_08AD9200:
    ctx.set_gpr(31, 0x08AD9208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9208u) goto L_08AD9208;
    return;
L_08AD9208:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(85));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD9220u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9220u) goto L_08AD9220;
    return;
L_08AD9220:
    ctx.set_gpr(31, 0x08AD9228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9228u) goto L_08AD9228;
    return;
L_08AD9228:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(85));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AD9248u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9248u) goto L_08AD9248;
    return;
L_08AD9248:
    ctx.set_gpr(31, 0x08AD9250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9250u) goto L_08AD9250;
    return;
L_08AD9250:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(86));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD9268u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(25));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9268u) goto L_08AD9268;
    return;
L_08AD9268:
    ctx.set_gpr(31, 0x08AD9270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9270u) goto L_08AD9270;
    return;
L_08AD9270:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD9288u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9288u) goto L_08AD9288;
    return;
L_08AD9288:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08AD93BC;
      }
      goto L_08AD9290;
    }
L_08AD9290:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD9328;
      }
      goto L_08AD9298;
    }
L_08AD9298:
    ctx.set_gpr(31, 0x08AD92A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD92A0u) goto L_08AD92A0;
    return;
L_08AD92A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(85));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD92B8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD92B8u) goto L_08AD92B8;
    return;
L_08AD92B8:
    ctx.set_gpr(31, 0x08AD92C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD92C0u) goto L_08AD92C0;
    return;
L_08AD92C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(86));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD92D8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD92D8u) goto L_08AD92D8;
    return;
L_08AD92D8:
    ctx.set_gpr(31, 0x08AD92E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD92E0u) goto L_08AD92E0;
    return;
L_08AD92E0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(86));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AD9300u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9300u) goto L_08AD9300;
    return;
L_08AD9300:
    ctx.set_gpr(31, 0x08AD9308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9308u) goto L_08AD9308;
    return;
L_08AD9308:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD9320u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9320u) goto L_08AD9320;
    return;
L_08AD9320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD93B8;
      }
      goto L_08AD9328;
    }
L_08AD9328:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD93B8;
      }
      goto L_08AD9330;
    }
L_08AD9330:
    ctx.set_gpr(31, 0x08AD9338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9338u) goto L_08AD9338;
    return;
L_08AD9338:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(85));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD9350u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9350u) goto L_08AD9350;
    return;
L_08AD9350:
    ctx.set_gpr(31, 0x08AD9358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9358u) goto L_08AD9358;
    return;
L_08AD9358:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(86));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD9370u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(25));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9370u) goto L_08AD9370;
    return;
L_08AD9370:
    ctx.set_gpr(31, 0x08AD9378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9378u) goto L_08AD9378;
    return;
L_08AD9378:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD9390u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9390u) goto L_08AD9390;
    return;
L_08AD9390:
    ctx.set_gpr(31, 0x08AD9398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9398u) goto L_08AD9398;
    return;
L_08AD9398:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AD93B8u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD93B8u) goto L_08AD93B8;
    return;
L_08AD93B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08AD93BC;
L_08AD93BC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD956C;
      }
      goto L_08AD93C4;
    }
L_08AD93C4:
    ctx.set_gpr(31, 0x08AD93CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD93CCu) goto L_08AD93CC;
    return;
L_08AD93CC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(85));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AD93ECu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD93ECu) goto L_08AD93EC;
    return;
L_08AD93EC:
    ctx.set_gpr(31, 0x08AD93F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD93F4u) goto L_08AD93F4;
    return;
L_08AD93F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(85));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD940Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD940Cu) goto L_08AD940C;
    return;
L_08AD940C:
    ctx.set_gpr(31, 0x08AD9414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9414u) goto L_08AD9414;
    return;
L_08AD9414:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(86));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD942Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(25));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD942Cu) goto L_08AD942C;
    return;
L_08AD942C:
    ctx.set_gpr(31, 0x08AD9434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9434u) goto L_08AD9434;
    return;
L_08AD9434:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD944Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD944Cu) goto L_08AD944C;
    return;
L_08AD944C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD956C;
      }
      goto L_08AD9454;
    }
L_08AD9454:
    ctx.set_gpr(31, 0x08AD945Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD945Cu) goto L_08AD945C;
    return;
L_08AD945C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(85));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD9474u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9474u) goto L_08AD9474;
    return;
L_08AD9474:
    ctx.set_gpr(31, 0x08AD947Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD947Cu) goto L_08AD947C;
    return;
L_08AD947C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(86));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AD949Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD949Cu) goto L_08AD949C;
    return;
L_08AD949C:
    ctx.set_gpr(31, 0x08AD94A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD94A4u) goto L_08AD94A4;
    return;
L_08AD94A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(86));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD94BCu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD94BCu) goto L_08AD94BC;
    return;
L_08AD94BC:
    ctx.set_gpr(31, 0x08AD94C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD94C4u) goto L_08AD94C4;
    return;
L_08AD94C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD94DCu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD94DCu) goto L_08AD94DC;
    return;
L_08AD94DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD956C;
      }
      goto L_08AD94E4;
    }
L_08AD94E4:
    ctx.set_gpr(31, 0x08AD94ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD94ECu) goto L_08AD94EC;
    return;
L_08AD94EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(85));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD9504u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9504u) goto L_08AD9504;
    return;
L_08AD9504:
    ctx.set_gpr(31, 0x08AD950Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD950Cu) goto L_08AD950C;
    return;
L_08AD950C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(86));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD9524u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(25));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9524u) goto L_08AD9524;
    return;
L_08AD9524:
    ctx.set_gpr(31, 0x08AD952Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD952Cu) goto L_08AD952C;
    return;
L_08AD952C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AD954Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD954Cu) goto L_08AD954C;
    return;
L_08AD954C:
    ctx.set_gpr(31, 0x08AD9554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9554u) goto L_08AD9554;
    return;
L_08AD9554:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD956Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD956Cu) goto L_08AD956C;
    return;
L_08AD956C:
    ctx.set_gpr(31, 0x08AD9574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9574u) goto L_08AD9574;
    return;
L_08AD9574:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD9580u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AD9580u) goto L_08AD9580;
    return;
L_08AD9580:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD97B4;
      }
      goto L_08AD9588;
    }
L_08AD9588:
    ctx.set_gpr(31, 0x08AD9590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9590u) goto L_08AD9590;
    return;
L_08AD9590:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD95A4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD95A4u) goto L_08AD95A4;
    return;
L_08AD95A4:
    ctx.set_gpr(31, 0x08AD95ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AD95ACu) goto L_08AD95AC;
    return;
L_08AD95AC:
    ctx.set_gpr(31, 0x08AD95B4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD95B4u) goto L_08AD95B4;
    return;
L_08AD95B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD95C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD95C0u) goto L_08AD95C0;
    return;
L_08AD95C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AD95E0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 456u, 0x08A898E4u>(ctx, &aot_mem) && ctx.pc == 0x08AD95E0u) goto L_08AD95E0;
    return;
L_08AD95E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08AD9680;
    }
    goto L_08AD95F0;
L_08AD95F0:
    ctx.set_gpr(31, 0x08AD95F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD95F8u) goto L_08AD95F8;
    return;
L_08AD95F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(85));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD9610u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9610u) goto L_08AD9610;
    return;
L_08AD9610:
    ctx.set_gpr(31, 0x08AD9618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9618u) goto L_08AD9618;
    return;
L_08AD9618:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(85));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AD9638u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9638u) goto L_08AD9638;
    return;
L_08AD9638:
    ctx.set_gpr(31, 0x08AD9640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9640u) goto L_08AD9640;
    return;
L_08AD9640:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(86));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD9658u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(25));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9658u) goto L_08AD9658;
    return;
L_08AD9658:
    ctx.set_gpr(31, 0x08AD9660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9660u) goto L_08AD9660;
    return;
L_08AD9660:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD9678u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9678u) goto L_08AD9678;
    return;
L_08AD9678:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD97AC;
      }
      goto L_08AD9680;
    }
L_08AD9680:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
        goto L_08AD9718;
    }
    goto L_08AD9688;
L_08AD9688:
    ctx.set_gpr(31, 0x08AD9690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9690u) goto L_08AD9690;
    return;
L_08AD9690:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(85));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD96A8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD96A8u) goto L_08AD96A8;
    return;
L_08AD96A8:
    ctx.set_gpr(31, 0x08AD96B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD96B0u) goto L_08AD96B0;
    return;
L_08AD96B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(86));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD96C8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD96C8u) goto L_08AD96C8;
    return;
L_08AD96C8:
    ctx.set_gpr(31, 0x08AD96D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD96D0u) goto L_08AD96D0;
    return;
L_08AD96D0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(86));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AD96F0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD96F0u) goto L_08AD96F0;
    return;
L_08AD96F0:
    ctx.set_gpr(31, 0x08AD96F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD96F8u) goto L_08AD96F8;
    return;
L_08AD96F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD9710u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9710u) goto L_08AD9710;
    return;
L_08AD9710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD97A8;
      }
      goto L_08AD9718;
    }
L_08AD9718:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AD97A8;
      }
      goto L_08AD9720;
    }
L_08AD9720:
    ctx.set_gpr(31, 0x08AD9728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9728u) goto L_08AD9728;
    return;
L_08AD9728:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(85));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD9740u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9740u) goto L_08AD9740;
    return;
L_08AD9740:
    ctx.set_gpr(31, 0x08AD9748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9748u) goto L_08AD9748;
    return;
L_08AD9748:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(86));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD9760u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(25));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9760u) goto L_08AD9760;
    return;
L_08AD9760:
    ctx.set_gpr(31, 0x08AD9768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9768u) goto L_08AD9768;
    return;
L_08AD9768:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD9780u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9780u) goto L_08AD9780;
    return;
L_08AD9780:
    ctx.set_gpr(31, 0x08AD9788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9788u) goto L_08AD9788;
    return;
L_08AD9788:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AD97A8u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD97A8u) goto L_08AD97A8;
    return;
L_08AD97A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD97AC;
L_08AD97AC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AD9818;
      }
      goto L_08AD97B4;
    }
L_08AD97B4:
    ctx.set_gpr(31, 0x08AD97BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD97BCu) goto L_08AD97BC;
    return;
L_08AD97BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD97C8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AD97C8u) goto L_08AD97C8;
    return;
L_08AD97C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD97EC;
      }
      goto L_08AD97D0;
    }
L_08AD97D0:
    ctx.set_gpr(31, 0x08AD97D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD97D8u) goto L_08AD97D8;
    return;
L_08AD97D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD97E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD97E4u) goto L_08AD97E4;
    return;
L_08AD97E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9818;
      }
      goto L_08AD97EC;
    }
L_08AD97EC:
    ctx.set_gpr(31, 0x08AD97F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD97F4u) goto L_08AD97F4;
    return;
L_08AD97F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD9808u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9808u) goto L_08AD9808;
    return;
L_08AD9808:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD9A28;
      }
      goto L_08AD9818;
    }
L_08AD9818:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(141)));
    goto L_08AD981C;
L_08AD981C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AD9A28;
    }
    goto L_08AD9824;
L_08AD9824:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08AD98C4;
    }
    goto L_08AD9834;
L_08AD9834:
    ctx.set_gpr(31, 0x08AD983Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD983Cu) goto L_08AD983C;
    return;
L_08AD983C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(85));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD9854u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9854u) goto L_08AD9854;
    return;
L_08AD9854:
    ctx.set_gpr(31, 0x08AD985Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD985Cu) goto L_08AD985C;
    return;
L_08AD985C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(85));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AD987Cu);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD987Cu) goto L_08AD987C;
    return;
L_08AD987C:
    ctx.set_gpr(31, 0x08AD9884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9884u) goto L_08AD9884;
    return;
L_08AD9884:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(86));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD989Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(25));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD989Cu) goto L_08AD989C;
    return;
L_08AD989C:
    ctx.set_gpr(31, 0x08AD98A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD98A4u) goto L_08AD98A4;
    return;
L_08AD98A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD98BCu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD98BCu) goto L_08AD98BC;
    return;
L_08AD98BC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
      if (branch_taken) {
          goto L_08AD99F0;
      }
      goto L_08AD98C4;
    }
L_08AD98C4:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
        goto L_08AD995C;
    }
    goto L_08AD98CC;
L_08AD98CC:
    ctx.set_gpr(31, 0x08AD98D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD98D4u) goto L_08AD98D4;
    return;
L_08AD98D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(85));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD98ECu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD98ECu) goto L_08AD98EC;
    return;
L_08AD98EC:
    ctx.set_gpr(31, 0x08AD98F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD98F4u) goto L_08AD98F4;
    return;
L_08AD98F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(86));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD990Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD990Cu) goto L_08AD990C;
    return;
L_08AD990C:
    ctx.set_gpr(31, 0x08AD9914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9914u) goto L_08AD9914;
    return;
L_08AD9914:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(86));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AD9934u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9934u) goto L_08AD9934;
    return;
L_08AD9934:
    ctx.set_gpr(31, 0x08AD993Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD993Cu) goto L_08AD993C;
    return;
L_08AD993C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD9954u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9954u) goto L_08AD9954;
    return;
L_08AD9954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD99EC;
      }
      goto L_08AD995C;
    }
L_08AD995C:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AD99EC;
      }
      goto L_08AD9964;
    }
L_08AD9964:
    ctx.set_gpr(31, 0x08AD996Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD996Cu) goto L_08AD996C;
    return;
L_08AD996C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(85));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD9984u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9984u) goto L_08AD9984;
    return;
L_08AD9984:
    ctx.set_gpr(31, 0x08AD998Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD998Cu) goto L_08AD998C;
    return;
L_08AD998C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(86));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD99A4u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(25));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD99A4u) goto L_08AD99A4;
    return;
L_08AD99A4:
    ctx.set_gpr(31, 0x08AD99ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD99ACu) goto L_08AD99AC;
    return;
L_08AD99AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AD99C4u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD99C4u) goto L_08AD99C4;
    return;
L_08AD99C4:
    ctx.set_gpr(31, 0x08AD99CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD99CCu) goto L_08AD99CC;
    return;
L_08AD99CC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AD99ECu);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD99ECu) goto L_08AD99EC;
    return;
L_08AD99EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    goto L_08AD99F0;
L_08AD99F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9A04;
      }
      goto L_08AD99F8;
    }
L_08AD99F8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD9A24;
      }
      goto L_08AD9A04;
    }
L_08AD9A04:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9A24;
      }
      goto L_08AD9A0C;
    }
L_08AD9A0C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AD9A28;
      }
      goto L_08AD9A24;
    }
L_08AD9A24:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AD9A28;
L_08AD9A28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9A38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AD9A4Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9A4Cu) goto L_08AD9A4C;
    return;
L_08AD9A4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD9A58u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9A58u) goto L_08AD9A58;
    return;
L_08AD9A58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9AA8;
      }
      goto L_08AD9A60;
    }
L_08AD9A60:
    ctx.set_gpr(31, 0x08AD9A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9A68u) goto L_08AD9A68;
    return;
L_08AD9A68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD9A7Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9A7Cu) goto L_08AD9A7C;
    return;
L_08AD9A7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AD9A8Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AD9A8Cu) goto L_08AD9A8C;
    return;
L_08AD9A8C:
    ctx.set_gpr(31, 0x08AD9A94u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9A94u) goto L_08AD9A94;
    return;
L_08AD9A94:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x08AD9AA0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9AA0u) goto L_08AD9AA0;
    return;
L_08AD9AA0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AD9C78;
      }
      goto L_08AD9AA8;
    }
L_08AD9AA8:
    ctx.set_gpr(31, 0x08AD9AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9AB0u) goto L_08AD9AB0;
    return;
L_08AD9AB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD9ABCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9ABCu) goto L_08AD9ABC;
    return;
L_08AD9ABC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9B30;
      }
      goto L_08AD9AC4;
    }
L_08AD9AC4:
    ctx.set_gpr(31, 0x08AD9ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9ACCu) goto L_08AD9ACC;
    return;
L_08AD9ACC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD9AE0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9AE0u) goto L_08AD9AE0;
    return;
L_08AD9AE0:
    ctx.set_gpr(31, 0x08AD9AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9AE8u) goto L_08AD9AE8;
    return;
L_08AD9AE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08AD9AFCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9AFCu) goto L_08AD9AFC;
    return;
L_08AD9AFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(31, 0x08AD9B14u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AD9B14u) goto L_08AD9B14;
    return;
L_08AD9B14:
    ctx.set_gpr(31, 0x08AD9B1Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9B1Cu) goto L_08AD9B1C;
    return;
L_08AD9B1C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x08AD9B28u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9B28u) goto L_08AD9B28;
    return;
L_08AD9B28:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AD9C74;
      }
      goto L_08AD9B30;
    }
L_08AD9B30:
    ctx.set_gpr(31, 0x08AD9B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9B38u) goto L_08AD9B38;
    return;
L_08AD9B38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD9B44u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9B44u) goto L_08AD9B44;
    return;
L_08AD9B44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9B7C;
      }
      goto L_08AD9B4C;
    }
L_08AD9B4C:
    ctx.set_gpr(31, 0x08AD9B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9B54u) goto L_08AD9B54;
    return;
L_08AD9B54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD9B68u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9B68u) goto L_08AD9B68;
    return;
L_08AD9B68:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD9C78;
      }
      goto L_08AD9B7C;
    }
L_08AD9B7C:
    ctx.set_gpr(31, 0x08AD9B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9B84u) goto L_08AD9B84;
    return;
L_08AD9B84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD9B90u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9B90u) goto L_08AD9B90;
    return;
L_08AD9B90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9BE4;
      }
      goto L_08AD9B98;
    }
L_08AD9B98:
    ctx.set_gpr(31, 0x08AD9BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9BA0u) goto L_08AD9BA0;
    return;
L_08AD9BA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD9BB4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9BB4u) goto L_08AD9BB4;
    return;
L_08AD9BB4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(31, 0x08AD9BC8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AD9BC8u) goto L_08AD9BC8;
    return;
L_08AD9BC8:
    ctx.set_gpr(31, 0x08AD9BD0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9BD0u) goto L_08AD9BD0;
    return;
L_08AD9BD0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x08AD9BDCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9BDCu) goto L_08AD9BDC;
    return;
L_08AD9BDC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AD9C74;
      }
      goto L_08AD9BE4;
    }
L_08AD9BE4:
    ctx.set_gpr(31, 0x08AD9BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9BECu) goto L_08AD9BEC;
    return;
L_08AD9BEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD9BF8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9BF8u) goto L_08AD9BF8;
    return;
L_08AD9BF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9C2C;
      }
      goto L_08AD9C00;
    }
L_08AD9C00:
    ctx.set_gpr(31, 0x08AD9C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9C08u) goto L_08AD9C08;
    return;
L_08AD9C08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD9C1Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9C1Cu) goto L_08AD9C1C;
    return;
L_08AD9C1C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD9C78;
      }
      goto L_08AD9C2C;
    }
L_08AD9C2C:
    ctx.set_gpr(31, 0x08AD9C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9C34u) goto L_08AD9C34;
    return;
L_08AD9C34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD9C40u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9C40u) goto L_08AD9C40;
    return;
L_08AD9C40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9C74;
      }
      goto L_08AD9C48;
    }
L_08AD9C48:
    ctx.set_gpr(31, 0x08AD9C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9C50u) goto L_08AD9C50;
    return;
L_08AD9C50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD9C64u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9C64u) goto L_08AD9C64;
    return;
L_08AD9C64:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AD9C78;
      }
      goto L_08AD9C74;
    }
L_08AD9C74:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AD9C78;
L_08AD9C78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9C88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD9CD8;
      }
      goto L_08AD9CA0;
    }
L_08AD9CA0:
    ctx.set_gpr(31, 0x08AD9CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AD9CA8u) goto L_08AD9CA8;
    return;
L_08AD9CA8:
    ctx.set_gpr(31, 0x08AD9CB0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9CB0u) goto L_08AD9CB0;
    return;
L_08AD9CB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x08AD9CD0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AD9CD0u) goto L_08AD9CD0;
    return;
L_08AD9CD0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AD9CD8;
L_08AD9CD8:
    ctx.set_gpr(31, 0x08AD9CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9CE0u) goto L_08AD9CE0;
    return;
L_08AD9CE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD9CECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9CECu) goto L_08AD9CEC;
    return;
L_08AD9CEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9D3C;
      }
      goto L_08AD9CF4;
    }
L_08AD9CF4:
    ctx.set_gpr(31, 0x08AD9CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9CFCu) goto L_08AD9CFC;
    return;
L_08AD9CFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD9D10u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9D10u) goto L_08AD9D10;
    return;
L_08AD9D10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AD9D20u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AD9D20u) goto L_08AD9D20;
    return;
L_08AD9D20:
    ctx.set_gpr(31, 0x08AD9D28u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9D28u) goto L_08AD9D28;
    return;
L_08AD9D28:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x08AD9D34u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9D34u) goto L_08AD9D34;
    return;
L_08AD9D34:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AD9EF0;
      }
      goto L_08AD9D3C;
    }
L_08AD9D3C:
    ctx.set_gpr(31, 0x08AD9D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9D44u) goto L_08AD9D44;
    return;
L_08AD9D44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD9D50u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9D50u) goto L_08AD9D50;
    return;
L_08AD9D50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9DC4;
      }
      goto L_08AD9D58;
    }
L_08AD9D58:
    ctx.set_gpr(31, 0x08AD9D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9D60u) goto L_08AD9D60;
    return;
L_08AD9D60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD9D74u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9D74u) goto L_08AD9D74;
    return;
L_08AD9D74:
    ctx.set_gpr(31, 0x08AD9D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9D7Cu) goto L_08AD9D7C;
    return;
L_08AD9D7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08AD9D90u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9D90u) goto L_08AD9D90;
    return;
L_08AD9D90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AD9DA8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AD9DA8u) goto L_08AD9DA8;
    return;
L_08AD9DA8:
    ctx.set_gpr(31, 0x08AD9DB0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9DB0u) goto L_08AD9DB0;
    return;
L_08AD9DB0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x08AD9DBCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9DBCu) goto L_08AD9DBC;
    return;
L_08AD9DBC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AD9EEC;
      }
      goto L_08AD9DC4;
    }
L_08AD9DC4:
    ctx.set_gpr(31, 0x08AD9DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9DCCu) goto L_08AD9DCC;
    return;
L_08AD9DCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD9DD8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9DD8u) goto L_08AD9DD8;
    return;
L_08AD9DD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9DFC;
      }
      goto L_08AD9DE0;
    }
L_08AD9DE0:
    ctx.set_gpr(31, 0x08AD9DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9DE8u) goto L_08AD9DE8;
    return;
L_08AD9DE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD9DF4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9DF4u) goto L_08AD9DF4;
    return;
L_08AD9DF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9E3C;
      }
      goto L_08AD9DFC;
    }
L_08AD9DFC:
    ctx.set_gpr(31, 0x08AD9E04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9E04u) goto L_08AD9E04;
    return;
L_08AD9E04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD9E18u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9E18u) goto L_08AD9E18;
    return;
L_08AD9E18:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AD9E28u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 456u, 0x08A898E4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9E28u) goto L_08AD9E28;
    return;
L_08AD9E28:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AD9EF0;
      }
      goto L_08AD9E3C;
    }
L_08AD9E3C:
    ctx.set_gpr(31, 0x08AD9E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9E44u) goto L_08AD9E44;
    return;
L_08AD9E44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD9E50u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9E50u) goto L_08AD9E50;
    return;
L_08AD9E50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9EA4;
      }
      goto L_08AD9E58;
    }
L_08AD9E58:
    ctx.set_gpr(31, 0x08AD9E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9E60u) goto L_08AD9E60;
    return;
L_08AD9E60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD9E74u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9E74u) goto L_08AD9E74;
    return;
L_08AD9E74:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AD9E88u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AD9E88u) goto L_08AD9E88;
    return;
L_08AD9E88:
    ctx.set_gpr(31, 0x08AD9E90u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9E90u) goto L_08AD9E90;
    return;
L_08AD9E90:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x08AD9E9Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9E9Cu) goto L_08AD9E9C;
    return;
L_08AD9E9C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AD9EEC;
      }
      goto L_08AD9EA4;
    }
L_08AD9EA4:
    ctx.set_gpr(31, 0x08AD9EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9EACu) goto L_08AD9EAC;
    return;
L_08AD9EAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD9EB8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9EB8u) goto L_08AD9EB8;
    return;
L_08AD9EB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9EEC;
      }
      goto L_08AD9EC0;
    }
L_08AD9EC0:
    ctx.set_gpr(31, 0x08AD9EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9EC8u) goto L_08AD9EC8;
    return;
L_08AD9EC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD9EDCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9EDCu) goto L_08AD9EDC;
    return;
L_08AD9EDC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD9EF0;
      }
      goto L_08AD9EEC;
    }
L_08AD9EEC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AD9EF0;
L_08AD9EF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9F00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AD9F1C;
L_08AD9F1C:
    ctx.set_gpr(31, 0x08AD9F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9F24u) goto L_08AD9F24;
    return;
L_08AD9F24:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17044u << 16u);
    ctx.set_gpr(3, 17270u << 16u);
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(89));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(2, 17086u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AD9F64u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AD9F64u) goto L_08AD9F64;
    return;
L_08AD9F64:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(30));
      if (branch_taken) {
          goto L_08AD9F1C;
      }
      goto L_08AD9F74;
    }
L_08AD9F74:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AD9F7C;
L_08AD9F7C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17044u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AD9F94u);
    ctx.fpr[20] = ctx.fpr[1] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9F94u) goto L_08AD9F94;
    return;
L_08AD9F94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17222u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17086u << 16u);
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(5));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AD9FC4u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AD9FC4u) goto L_08AD9FC4;
    return;
L_08AD9FC4:
    ctx.set_gpr(31, 0x08AD9FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9FCCu) goto L_08AD9FCC;
    return;
L_08AD9FCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17299u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17086u << 16u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08AD9FFCu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AD9FFCu) goto L_08AD9FFC;
    return;
L_08AD9FFC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(30));
      if (branch_taken) {
          goto L_08AD9F7C;
      }
      goto L_08ADA00C;
    }
L_08ADA00C:
    ctx.set_gpr(31, 0x08ADA014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA014u) goto L_08ADA014;
    return;
L_08ADA014:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17222u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17044u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08ADA048u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08ADA048u) goto L_08ADA048;
    return;
L_08ADA048:
    ctx.set_gpr(31, 0x08ADA050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA050u) goto L_08ADA050;
    return;
L_08ADA050:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17299u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17044u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(88));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08ADA084u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08ADA084u) goto L_08ADA084;
    return;
L_08ADA084:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ADA08C;
L_08ADA08C:
    ctx.set_gpr(31, 0x08ADA094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA094u) goto L_08ADA094;
    return;
L_08ADA094:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17024u << 16u);
    ctx.set_gpr(3, 17157u << 16u);
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(94));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(2, 17086u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(31, 0x08ADA0D4u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08ADA0D4u) goto L_08ADA0D4;
    return;
L_08ADA0D4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08ADA08C;
      }
      goto L_08ADA0E4;
    }
L_08ADA0E4:
    ctx.set_gpr(31, 0x08ADA0ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA0ECu) goto L_08ADA0EC;
    return;
L_08ADA0EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17270u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17044u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(31));
    ctx.set_gpr(31, 0x08ADA120u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08ADA120u) goto L_08ADA120;
    return;
L_08ADA120:
    ctx.set_gpr(31, 0x08ADA128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA128u) goto L_08ADA128;
    return;
L_08ADA128:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17016u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17180u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08ADA15Cu);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08ADA15Cu) goto L_08ADA15C;
    return;
L_08ADA15C:
    ctx.set_gpr(31, 0x08ADA164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA164u) goto L_08ADA164;
    return;
L_08ADA164:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17172u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17086u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08ADA198u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08ADA198u) goto L_08ADA198;
    return;
L_08ADA198:
    ctx.set_gpr(31, 0x08ADA1A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA1A0u) goto L_08ADA1A0;
    return;
L_08ADA1A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17174u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(99));
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08ADA1D4u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08ADA1D4u) goto L_08ADA1D4;
    return;
L_08ADA1D4:
    ctx.set_gpr(31, 0x08ADA1DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA1DCu) goto L_08ADA1DC;
    return;
L_08ADA1DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17172u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(46));
    ctx.set_gpr(31, 0x08ADA210u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08ADA210u) goto L_08ADA210;
    return;
L_08ADA210:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ADA214;
L_08ADA214:
    ctx.set_gpr(31, 0x08ADA21Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA21Cu) goto L_08ADA21C;
    return;
L_08ADA21C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17186u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(103));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08ADA250u);
    ctx.set_gpr(9, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08ADA250u) goto L_08ADA250;
    return;
L_08ADA250:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA214;
      }
      goto L_08ADA260;
    }
L_08ADA260:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ADA264;
L_08ADA264:
    ctx.set_gpr(31, 0x08ADA26Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA26Cu) goto L_08ADA26C;
    return;
L_08ADA26C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADA280u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA280u) goto L_08ADA280;
    return;
L_08ADA280:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA264;
      }
      goto L_08ADA290;
    }
L_08ADA290:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ADA294;
L_08ADA294:
    ctx.set_gpr(31, 0x08ADA29Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA29Cu) goto L_08ADA29C;
    return;
L_08ADA29C:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADA2B0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA2B0u) goto L_08ADA2B0;
    return;
L_08ADA2B0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA294;
      }
      goto L_08ADA2C0;
    }
L_08ADA2C0:
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
L_08ADA2D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08ADA2ECu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08ADA314;
L_08ADA2EC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08ADA304;
    }
    goto L_08ADA2F4;
L_08ADA2F4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08ADA300u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA300u) goto L_08ADA300;
    return;
L_08ADA300:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ADA304;
L_08ADA304:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA314:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08ADA34Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08ADA34Cu) goto L_08ADA34C;
    return;
L_08ADA34C:
    ctx.set_gpr(31, 0x08ADA354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADA354u) goto L_08ADA354;
    return;
L_08ADA354:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(31, 0x08ADA368u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1017u, 0x08A7F7C8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA368u) goto L_08ADA368;
    return;
L_08ADA368:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADA7EC;
      }
      goto L_08ADA378;
    }
L_08ADA378:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA5C4;
      }
      goto L_08ADA380;
    }
L_08ADA380:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08ADA394;
    }
    goto L_08ADA38C;
L_08ADA38C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ADA9E4;
      }
      goto L_08ADA394;
    }
L_08ADA394:
    ctx.set_gpr(31, 0x08ADA39Cu);
    // nop
    goto L_08AD9F00;
L_08ADA39C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(3, 50298u << 16u);
    goto L_08ADA3A8;
L_08ADA3A8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(208), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(228), ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08ADA3A8;
      }
      goto L_08ADA3D8;
    }
L_08ADA3D8:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(328), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(196), 0u);
    ctx.set_gpr(31, 0x08ADA3F4u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADA3F4u) goto L_08ADA3F4;
    return;
L_08ADA3F4:
    ctx.set_gpr(31, 0x08ADA3FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA3FCu) goto L_08ADA3FC;
    return;
L_08ADA3FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADA408u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA408u) goto L_08ADA408;
    return;
L_08ADA408:
    ctx.set_gpr(31, 0x08ADA410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA410u) goto L_08ADA410;
    return;
L_08ADA410:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(31, 0x08ADA424u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA424u) goto L_08ADA424;
    return;
L_08ADA424:
    ctx.set_gpr(31, 0x08ADA42Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA42Cu) goto L_08ADA42C;
    return;
L_08ADA42C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(39));
    ctx.set_gpr(31, 0x08ADA440u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA440u) goto L_08ADA440;
    return;
L_08ADA440:
    ctx.set_gpr(31, 0x08ADA448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA448u) goto L_08ADA448;
    return;
L_08ADA448:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08ADA45Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA45Cu) goto L_08ADA45C;
    return;
L_08ADA45C:
    ctx.set_gpr(31, 0x08ADA464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA464u) goto L_08ADA464;
    return;
L_08ADA464:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08ADA478u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA478u) goto L_08ADA478;
    return;
L_08ADA478:
    ctx.set_gpr(31, 0x08ADA480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA480u) goto L_08ADA480;
    return;
L_08ADA480:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADA4A0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADA4A0u) goto L_08ADA4A0;
    return;
L_08ADA4A0:
    ctx.set_gpr(31, 0x08ADA4A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA4A8u) goto L_08ADA4A8;
    return;
L_08ADA4A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADA4C8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADA4C8u) goto L_08ADA4C8;
    return;
L_08ADA4C8:
    ctx.set_gpr(31, 0x08ADA4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA4D0u) goto L_08ADA4D0;
    return;
L_08ADA4D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08ADA4E4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA4E4u) goto L_08ADA4E4;
    return;
L_08ADA4E4:
    ctx.set_gpr(31, 0x08ADA4ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA4ECu) goto L_08ADA4EC;
    return;
L_08ADA4EC:
    ctx.set_gpr(31, 0x08ADA4F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA4F4u) goto L_08ADA4F4;
    return;
L_08ADA4F4:
    ctx.set_gpr(31, 0x08ADA4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA4FCu) goto L_08ADA4FC;
    return;
L_08ADA4FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08ADA50Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32656)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08ADA50Cu) goto L_08ADA50C;
    return;
L_08ADA50C:
    ctx.set_gpr(31, 0x08ADA514u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 312u, 0x08855740u>(ctx, &aot_mem) && ctx.pc == 0x08ADA514u) goto L_08ADA514;
    return;
L_08ADA514:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08ADA520u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA520u) goto L_08ADA520;
    return;
L_08ADA520:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ADA52Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA52Cu) goto L_08ADA52C;
    return;
L_08ADA52C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08ADA53Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 266u, 0x08A9116Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA53Cu) goto L_08ADA53C;
    return;
L_08ADA53C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08ADA54Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08ADA54Cu) goto L_08ADA54C;
    return;
L_08ADA54C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08ADA560u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADA560u) goto L_08ADA560;
    return;
L_08ADA560:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ADA56Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 38u, 0x08A94354u>(ctx, &aot_mem) && ctx.pc == 0x08ADA56Cu) goto L_08ADA56C;
    return;
L_08ADA56C:
    ctx.set_gpr(31, 0x08ADA574u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 28u, 0x08864230u>(ctx, &aot_mem) && ctx.pc == 0x08ADA574u) goto L_08ADA574;
    return;
L_08ADA574:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ADA584;
    }
    goto L_08ADA57C;
L_08ADA57C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADA588;
      }
      goto L_08ADA584;
    }
L_08ADA584:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08ADA588;
L_08ADA588:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), 0u);
        goto L_08ADA5B4;
    }
    goto L_08ADA594;
L_08ADA594:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA5B0;
      }
      goto L_08ADA5A0;
    }
L_08ADA5A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(30));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    goto L_08ADA5B0;
L_08ADA5B0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), 0u);
    goto L_08ADA5B4;
L_08ADA5B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ADA9E0;
      }
      goto L_08ADA5C4;
    }
L_08ADA5C4:
    ctx.set_gpr(31, 0x08ADA5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADA5CCu) goto L_08ADA5CC;
    return;
L_08ADA5CC:
    ctx.set_gpr(31, 0x08ADA5D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA5D4u) goto L_08ADA5D4;
    return;
L_08ADA5D4:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(156));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(235));
    ctx.set_gpr(31, 0x08ADA5F4u);
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08ADA5F4u) goto L_08ADA5F4;
    return;
L_08ADA5F4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08ADA600u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA600u) goto L_08ADA600;
    return;
L_08ADA600:
    ctx.set_gpr(31, 0x08ADA608u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08ADAA24;
L_08ADA608:
    ctx.set_gpr(31, 0x08ADA610u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADC998u>(ctx, &aot_mem) && ctx.pc == 0x08ADA610u) goto L_08ADA610;
    return;
L_08ADA610:
    ctx.set_gpr(31, 0x08ADA618u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 468u, 0x08ADD9A0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA618u) goto L_08ADA618;
    return;
L_08ADA618:
    ctx.set_gpr(31, 0x08ADA620u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 711u, 0x08ADE65Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA620u) goto L_08ADA620;
    return;
L_08ADA620:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ADA634u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08ADB1C0;
L_08ADA634:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
        goto L_08ADA648;
    }
    goto L_08ADA63C;
L_08ADA63C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_08ADA648;
L_08ADA648:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08ADA690;
    }
    goto L_08ADA658;
L_08ADA658:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ADA65C;
L_08ADA65C:
    ctx.set_gpr(31, 0x08ADA664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA664u) goto L_08ADA664;
    return;
L_08ADA664:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(107));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADA678u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA678u) goto L_08ADA678;
    return;
L_08ADA678:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA65C;
      }
      goto L_08ADA688;
    }
L_08ADA688:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08ADA6CC;
      }
      goto L_08ADA690;
    }
L_08ADA690:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADA6C8;
      }
      goto L_08ADA698;
    }
L_08ADA698:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ADA69C;
L_08ADA69C:
    ctx.set_gpr(31, 0x08ADA6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA6A4u) goto L_08ADA6A4;
    return;
L_08ADA6A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(109));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADA6B8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA6B8u) goto L_08ADA6B8;
    return;
L_08ADA6B8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA69C;
      }
      goto L_08ADA6C8;
    }
L_08ADA6C8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08ADA6CC;
L_08ADA6CC:
    ctx.set_gpr(31, 0x08ADA6D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 732u, 0x08AE2794u>(ctx, &aot_mem) && ctx.pc == 0x08ADA6D4u) goto L_08ADA6D4;
    return;
L_08ADA6D4:
    ctx.set_gpr(31, 0x08ADA6DCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 38u, 0x08A94354u>(ctx, &aot_mem) && ctx.pc == 0x08ADA6DCu) goto L_08ADA6DC;
    return;
L_08ADA6DC:
    ctx.set_gpr(31, 0x08ADA6E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ADA6E4u) goto L_08ADA6E4;
    return;
L_08ADA6E4:
    ctx.set_gpr(31, 0x08ADA6ECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA6ECu) goto L_08ADA6EC;
    return;
L_08ADA6EC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08ADA71C;
    }
    goto L_08ADA6F4;
L_08ADA6F4:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADA714u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADA714u) goto L_08ADA714;
    return;
L_08ADA714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA730;
      }
      goto L_08ADA71C;
    }
L_08ADA71C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADA730u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADA730u) goto L_08ADA730;
    return;
L_08ADA730:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(325));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08ADA744u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6696));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA744u) goto L_08ADA744;
    return;
L_08ADA744:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 99 ? 1u : 0u);
        goto L_08ADA774;
    }
    goto L_08ADA754;
L_08ADA754:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(346));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08ADA76Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6712));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA76Cu) goto L_08ADA76C;
    return;
L_08ADA76C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16256u << 16u);
      if (branch_taken) {
          goto L_08ADA7C0;
      }
      goto L_08ADA774;
    }
L_08ADA774:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 200 ? 1u : 0u);
        goto L_08ADA79C;
    }
    goto L_08ADA77C;
L_08ADA77C:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(342));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08ADA794u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6712));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA794u) goto L_08ADA794;
    return;
L_08ADA794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA7BC;
      }
      goto L_08ADA79C;
    }
L_08ADA79C:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA7BC;
      }
      goto L_08ADA7A4;
    }
L_08ADA7A4:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(338));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08ADA7BCu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6712));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA7BCu) goto L_08ADA7BC;
    return;
L_08ADA7BC:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08ADA7C0;
L_08ADA7C0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADA7D4u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADA7D4u) goto L_08ADA7D4;
    return;
L_08ADA7D4:
    ctx.set_gpr(31, 0x08ADA7DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ADA7DCu) goto L_08ADA7DC;
    return;
L_08ADA7DC:
    ctx.set_gpr(31, 0x08ADA7E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 800u, 0x08AF754Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA7E4u) goto L_08ADA7E4;
    return;
L_08ADA7E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA9E0;
      }
      goto L_08ADA7EC;
    }
L_08ADA7EC:
    ctx.set_gpr(31, 0x08ADA7F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA7F4u) goto L_08ADA7F4;
    return;
L_08ADA7F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADA814u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADA814u) goto L_08ADA814;
    return;
L_08ADA814:
    ctx.set_gpr(31, 0x08ADA81Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA81Cu) goto L_08ADA81C;
    return;
L_08ADA81C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(5, ctx.gpr[3] & 3u);
      if (branch_taken) {
          goto L_08ADA838;
      }
      goto L_08ADA82C;
    }
L_08ADA82C:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
        goto L_08ADA83C;
    }
    goto L_08ADA834;
L_08ADA834:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    goto L_08ADA838;
L_08ADA838:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ADA83C;
L_08ADA83C:
    ctx.set_gpr(2, 17096u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(39));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, 16328u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] | 62915u);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.set_gpr(3, 17264u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08ADA888u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADA888u) goto L_08ADA888;
    return;
L_08ADA888:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA9B0;
      }
      goto L_08ADA894;
    }
L_08ADA894:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(165)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08ADA998;
    }
    goto L_08ADA8A0;
L_08ADA8A0:
    ctx.set_gpr(31, 0x08ADA8A8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 560u, 0x08AE5CFCu>(ctx, &aot_mem) && ctx.pc == 0x08ADA8A8u) goto L_08ADA8A8;
    return;
L_08ADA8A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA9E0;
      }
      goto L_08ADA8B0;
    }
L_08ADA8B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08ADA8BCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA8BCu) goto L_08ADA8BC;
    return;
L_08ADA8BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ADA8CCu);
    ctx.set_gpr(16, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADA8CCu) goto L_08ADA8CC;
    return;
L_08ADA8CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADA904;
      }
      goto L_08ADA8D4;
    }
L_08ADA8D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08ADA8D8;
L_08ADA8D8:
    ctx.set_gpr(31, 0x08ADA8E0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08ADA8E0u) goto L_08ADA8E0;
    return;
L_08ADA8E0:
    ctx.set_gpr(31, 0x08ADA8E8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08ADA8E8u) goto L_08ADA8E8;
    return;
L_08ADA8E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ADA8F8u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADA8F8u) goto L_08ADA8F8;
    return;
L_08ADA8F8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08ADA8D8;
    }
    goto L_08ADA904;
L_08ADA904:
    ctx.set_gpr(31, 0x08ADA90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADA90Cu) goto L_08ADA90C;
    return;
L_08ADA90C:
    ctx.set_gpr(31, 0x08ADA914u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA914u) goto L_08ADA914;
    return;
L_08ADA914:
    ctx.set_gpr(31, 0x08ADA91Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 400u, 0x08A918A4u>(ctx, &aot_mem) && ctx.pc == 0x08ADA91Cu) goto L_08ADA91C;
    return;
L_08ADA91C:
    ctx.set_gpr(31, 0x08ADA924u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08ADAA00;
L_08ADA924:
    ctx.set_gpr(31, 0x08ADA92Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 22u, 0x08ADC14Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA92Cu) goto L_08ADA92C;
    return;
L_08ADA92C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08ADA93Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 820u, 0x08866940u>(ctx, &aot_mem) && ctx.pc == 0x08ADA93Cu) goto L_08ADA93C;
    return;
L_08ADA93C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ADA9E4;
    }
    goto L_08ADA948;
L_08ADA948:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08ADA94C;
L_08ADA94C:
    ctx.set_gpr(31, 0x08ADA954u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA954u) goto L_08ADA954;
    return;
L_08ADA954:
    ctx.set_gpr(31, 0x08ADA95Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 770u, 0x08AA2978u>(ctx, &aot_mem) && ctx.pc == 0x08ADA95Cu) goto L_08ADA95C;
    return;
L_08ADA95C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[6]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08ADA978;
    }
    goto L_08ADA968;
L_08ADA968:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08ADA974u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADA974u) goto L_08ADA974;
    return;
L_08ADA974:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08ADA978;
L_08ADA978:
    ctx.set_gpr(31, 0x08ADA980u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 820u, 0x08866940u>(ctx, &aot_mem) && ctx.pc == 0x08ADA980u) goto L_08ADA980;
    return;
L_08ADA980:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08ADA94C;
    }
    goto L_08ADA98C;
L_08ADA98C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA9E4;
      }
      goto L_08ADA998;
    }
L_08ADA998:
    ctx.set_gpr(31, 0x08ADA9A0u);
    // nop
    goto L_08ADAA00;
L_08ADA9A0:
    ctx.set_gpr(31, 0x08ADA9A8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 22u, 0x08ADC14Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA9A8u) goto L_08ADA9A8;
    return;
L_08ADA9A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADA9E4;
      }
      goto L_08ADA9B0;
    }
L_08ADA9B0:
    ctx.set_gpr(31, 0x08ADA9B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADA9B8u) goto L_08ADA9B8;
    return;
L_08ADA9B8:
    ctx.set_gpr(31, 0x08ADA9C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA9C0u) goto L_08ADA9C0;
    return;
L_08ADA9C0:
    ctx.set_gpr(31, 0x08ADA9C8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 400u, 0x08A918A4u>(ctx, &aot_mem) && ctx.pc == 0x08ADA9C8u) goto L_08ADA9C8;
    return;
L_08ADA9C8:
    ctx.set_gpr(31, 0x08ADA9D0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08ADAA00;
L_08ADA9D0:
    ctx.set_gpr(31, 0x08ADA9D8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 22u, 0x08ADC14Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA9D8u) goto L_08ADA9D8;
    return;
L_08ADA9D8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADA9E4;
      }
      goto L_08ADA9E0;
    }
L_08ADA9E0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08ADA9E4;
L_08ADA9E4:
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
L_08ADAA00:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADAA24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ADAA40;
L_08ADAA40:
    ctx.set_gpr(31, 0x08ADAA48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAA48u) goto L_08ADAA48;
    return;
L_08ADAA48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADAA5Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAA5Cu) goto L_08ADAA5C;
    return;
L_08ADAA5C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAA40;
      }
      goto L_08ADAA6C;
    }
L_08ADAA6C:
    ctx.set_gpr(31, 0x08ADAA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAA74u) goto L_08ADAA74;
    return;
L_08ADAA74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08ADAA88u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAA88u) goto L_08ADAA88;
    return;
L_08ADAA88:
    ctx.set_gpr(31, 0x08ADAA90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAA90u) goto L_08ADAA90;
    return;
L_08ADAA90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08ADAAA4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAAA4u) goto L_08ADAAA4;
    return;
L_08ADAAA4:
    ctx.set_gpr(31, 0x08ADAAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAAACu) goto L_08ADAAAC;
    return;
L_08ADAAAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(31, 0x08ADAAC0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAAC0u) goto L_08ADAAC0;
    return;
L_08ADAAC0:
    ctx.set_gpr(31, 0x08ADAAC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAAC8u) goto L_08ADAAC8;
    return;
L_08ADAAC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08ADAADCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAADCu) goto L_08ADAADC;
    return;
L_08ADAADC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAB60;
      }
      goto L_08ADAAE8;
    }
L_08ADAAE8:
    ctx.set_gpr(31, 0x08ADAAF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAAF0u) goto L_08ADAAF0;
    return;
L_08ADAAF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08ADAB04u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAB04u) goto L_08ADAB04;
    return;
L_08ADAB04:
    ctx.set_gpr(31, 0x08ADAB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAB0Cu) goto L_08ADAB0C;
    return;
L_08ADAB0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(83));
    ctx.set_gpr(31, 0x08ADAB20u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAB20u) goto L_08ADAB20;
    return;
L_08ADAB20:
    ctx.set_gpr(31, 0x08ADAB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAB28u) goto L_08ADAB28;
    return;
L_08ADAB28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(85));
    ctx.set_gpr(31, 0x08ADAB3Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAB3Cu) goto L_08ADAB3C;
    return;
L_08ADAB3C:
    ctx.set_gpr(31, 0x08ADAB44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAB44u) goto L_08ADAB44;
    return;
L_08ADAB44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(86));
    ctx.set_gpr(31, 0x08ADAB58u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAB58u) goto L_08ADAB58;
    return;
L_08ADAB58:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08ADABD4;
      }
      goto L_08ADAB60;
    }
L_08ADAB60:
    ctx.set_gpr(31, 0x08ADAB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAB68u) goto L_08ADAB68;
    return;
L_08ADAB68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08ADAB7Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAB7Cu) goto L_08ADAB7C;
    return;
L_08ADAB7C:
    ctx.set_gpr(31, 0x08ADAB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAB84u) goto L_08ADAB84;
    return;
L_08ADAB84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(83));
    ctx.set_gpr(31, 0x08ADAB98u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAB98u) goto L_08ADAB98;
    return;
L_08ADAB98:
    ctx.set_gpr(31, 0x08ADABA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADABA0u) goto L_08ADABA0;
    return;
L_08ADABA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(85));
    ctx.set_gpr(31, 0x08ADABB4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADABB4u) goto L_08ADABB4;
    return;
L_08ADABB4:
    ctx.set_gpr(31, 0x08ADABBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADABBCu) goto L_08ADABBC;
    return;
L_08ADABBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(86));
    ctx.set_gpr(31, 0x08ADABD0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADABD0u) goto L_08ADABD0;
    return;
L_08ADABD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    goto L_08ADABD4;
L_08ADABD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADACF8;
      }
      goto L_08ADABDC;
    }
L_08ADABDC:
    ctx.set_gpr(31, 0x08ADABE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADABE4u) goto L_08ADABE4;
    return;
L_08ADABE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(81));
    ctx.set_gpr(31, 0x08ADABF8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADABF8u) goto L_08ADABF8;
    return;
L_08ADABF8:
    ctx.set_gpr(31, 0x08ADAC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAC00u) goto L_08ADAC00;
    return;
L_08ADAC00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08ADAC14u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAC14u) goto L_08ADAC14;
    return;
L_08ADAC14:
    ctx.set_gpr(31, 0x08ADAC1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAC1Cu) goto L_08ADAC1C;
    return;
L_08ADAC1C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08ADAC3Cu);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAC3Cu) goto L_08ADAC3C;
    return;
L_08ADAC3C:
    ctx.set_gpr(31, 0x08ADAC44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAC44u) goto L_08ADAC44;
    return;
L_08ADAC44:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08ADAC64u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAC64u) goto L_08ADAC64;
    return;
L_08ADAC64:
    ctx.set_gpr(31, 0x08ADAC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAC6Cu) goto L_08ADAC6C;
    return;
L_08ADAC6C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08ADAC8Cu);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAC8Cu) goto L_08ADAC8C;
    return;
L_08ADAC8C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ADAC90;
L_08ADAC90:
    ctx.set_gpr(31, 0x08ADAC98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAC98u) goto L_08ADAC98;
    return;
L_08ADAC98:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(94));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08ADACB8u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADACB8u) goto L_08ADACB8;
    return;
L_08ADACB8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAC90;
      }
      goto L_08ADACC8;
    }
L_08ADACC8:
    ctx.set_gpr(31, 0x08ADACD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADACD0u) goto L_08ADACD0;
    return;
L_08ADACD0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(89));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08ADACF0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADACF0u) goto L_08ADACF0;
    return;
L_08ADACF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADADD4;
      }
      goto L_08ADACF8;
    }
L_08ADACF8:
    ctx.set_gpr(31, 0x08ADAD00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAD00u) goto L_08ADAD00;
    return;
L_08ADAD00:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08ADAD20u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAD20u) goto L_08ADAD20;
    return;
L_08ADAD20:
    ctx.set_gpr(31, 0x08ADAD28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAD28u) goto L_08ADAD28;
    return;
L_08ADAD28:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08ADAD48u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAD48u) goto L_08ADAD48;
    return;
L_08ADAD48:
    ctx.set_gpr(31, 0x08ADAD50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAD50u) goto L_08ADAD50;
    return;
L_08ADAD50:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08ADAD70u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAD70u) goto L_08ADAD70;
    return;
L_08ADAD70:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ADAD74;
L_08ADAD74:
    ctx.set_gpr(31, 0x08ADAD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAD7Cu) goto L_08ADAD7C;
    return;
L_08ADAD7C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(94));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08ADAD9Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAD9Cu) goto L_08ADAD9C;
    return;
L_08ADAD9C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAD74;
      }
      goto L_08ADADAC;
    }
L_08ADADAC:
    ctx.set_gpr(31, 0x08ADADB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADADB4u) goto L_08ADADB4;
    return;
L_08ADADB4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(89));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08ADADD4u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADADD4u) goto L_08ADADD4;
    return;
L_08ADADD4:
    ctx.set_gpr(31, 0x08ADADDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADADDCu) goto L_08ADADDC;
    return;
L_08ADADDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08ADADF0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADADF0u) goto L_08ADADF0;
    return;
L_08ADADF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
        goto L_08ADAEDC;
    }
    goto L_08ADAE00;
L_08ADAE00:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ADAE08;
L_08ADAE08:
    ctx.set_gpr(31, 0x08ADAE10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAE10u) goto L_08ADAE10;
    return;
L_08ADAE10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(94));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADAE24u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAE24u) goto L_08ADAE24;
    return;
L_08ADAE24:
    ctx.set_gpr(31, 0x08ADAE2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAE2Cu) goto L_08ADAE2C;
    return;
L_08ADAE2C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17024u << 16u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(94));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(2, 17182u << 16u);
    ctx.set_gpr(31, 0x08ADAE58u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADAE58u) goto L_08ADAE58;
    return;
L_08ADAE58:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08ADAE08;
      }
      goto L_08ADAE68;
    }
L_08ADAE68:
    ctx.set_gpr(31, 0x08ADAE70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAE70u) goto L_08ADAE70;
    return;
L_08ADAE70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(99));
    ctx.set_gpr(31, 0x08ADAE8Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAE8Cu) goto L_08ADAE8C;
    return;
L_08ADAE8C:
    ctx.set_gpr(31, 0x08ADAE94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAE94u) goto L_08ADAE94;
    return;
L_08ADAE94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(31, 0x08ADAEB0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAEB0u) goto L_08ADAEB0;
    return;
L_08ADAEB0:
    ctx.set_gpr(31, 0x08ADAEB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAEB8u) goto L_08ADAEB8;
    return;
L_08ADAEB8:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08ADAED4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAED4u) goto L_08ADAED4;
    return;
L_08ADAED4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08ADB12C;
      }
      goto L_08ADAEDC;
    }
L_08ADAEDC:
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
        goto L_08ADB000;
    }
    goto L_08ADAEE4;
L_08ADAEE4:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ADAEEC;
L_08ADAEEC:
    ctx.set_gpr(31, 0x08ADAEF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAEF4u) goto L_08ADAEF4;
    return;
L_08ADAEF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(94));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADAF08u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAF08u) goto L_08ADAF08;
    return;
L_08ADAF08:
    ctx.set_gpr(31, 0x08ADAF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAF10u) goto L_08ADAF10;
    return;
L_08ADAF10:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17024u << 16u);
    ctx.set_gpr(3, 16968u << 16u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(94));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(2, 17182u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08ADAF48u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADAF48u) goto L_08ADAF48;
    return;
L_08ADAF48:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08ADAEEC;
      }
      goto L_08ADAF58;
    }
L_08ADAF58:
    ctx.set_gpr(31, 0x08ADAF60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAF60u) goto L_08ADAF60;
    return;
L_08ADAF60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08ADAF74u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAF74u) goto L_08ADAF74;
    return;
L_08ADAF74:
    ctx.set_gpr(31, 0x08ADAF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAF7Cu) goto L_08ADAF7C;
    return;
L_08ADAF7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16204u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADAFA0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(99));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAFA0u) goto L_08ADAFA0;
    return;
L_08ADAFA0:
    ctx.set_gpr(31, 0x08ADAFA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAFA8u) goto L_08ADAFA8;
    return;
L_08ADAFA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16204u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADAFCCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAFCCu) goto L_08ADAFCC;
    return;
L_08ADAFCC:
    ctx.set_gpr(31, 0x08ADAFD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAFD4u) goto L_08ADAFD4;
    return;
L_08ADAFD4:
    ctx.set_gpr(3, 16204u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADAFF8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAFF8u) goto L_08ADAFF8;
    return;
L_08ADAFF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB128;
      }
      goto L_08ADB000;
    }
L_08ADB000:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08ADB128;
      }
      goto L_08ADB008;
    }
L_08ADB008:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(100));
    goto L_08ADB00C;
L_08ADB00C:
    ctx.set_gpr(31, 0x08ADB014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB014u) goto L_08ADB014;
    return;
L_08ADB014:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(94));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADB028u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB028u) goto L_08ADB028;
    return;
L_08ADB028:
    ctx.set_gpr(31, 0x08ADB030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB030u) goto L_08ADB030;
    return;
L_08ADB030:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17024u << 16u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(94));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(2, 17182u << 16u);
    ctx.set_gpr(31, 0x08ADB05Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADB05Cu) goto L_08ADB05C;
    return;
L_08ADB05C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08ADB00C;
      }
      goto L_08ADB06C;
    }
L_08ADB06C:
    ctx.set_gpr(31, 0x08ADB074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB074u) goto L_08ADB074;
    return;
L_08ADB074:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08ADB088u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB088u) goto L_08ADB088;
    return;
L_08ADB088:
    ctx.set_gpr(31, 0x08ADB090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB090u) goto L_08ADB090;
    return;
L_08ADB090:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08ADB0A4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB0A4u) goto L_08ADB0A4;
    return;
L_08ADB0A4:
    ctx.set_gpr(31, 0x08ADB0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB0ACu) goto L_08ADB0AC;
    return;
L_08ADB0AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16140u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADB0D0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(99));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB0D0u) goto L_08ADB0D0;
    return;
L_08ADB0D0:
    ctx.set_gpr(31, 0x08ADB0D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB0D8u) goto L_08ADB0D8;
    return;
L_08ADB0D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16140u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADB0FCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB0FCu) goto L_08ADB0FC;
    return;
L_08ADB0FC:
    ctx.set_gpr(31, 0x08ADB104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB104u) goto L_08ADB104;
    return;
L_08ADB104:
    ctx.set_gpr(3, 16140u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADB128u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB128u) goto L_08ADB128;
    return;
L_08ADB128:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    goto L_08ADB12C;
L_08ADB12C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
        goto L_08ADB170;
    }
    goto L_08ADB138;
L_08ADB138:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ADB13C;
L_08ADB13C:
    ctx.set_gpr(31, 0x08ADB144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB144u) goto L_08ADB144;
    return;
L_08ADB144:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(107));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADB158u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB158u) goto L_08ADB158;
    return;
L_08ADB158:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB13C;
      }
      goto L_08ADB168;
    }
L_08ADB168:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ADB1AC;
      }
      goto L_08ADB170;
    }
L_08ADB170:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ADB1A8;
      }
      goto L_08ADB178;
    }
L_08ADB178:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ADB17C;
L_08ADB17C:
    ctx.set_gpr(31, 0x08ADB184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB184u) goto L_08ADB184;
    return;
L_08ADB184:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(109));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADB198u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB198u) goto L_08ADB198;
    return;
L_08ADB198:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB17C;
      }
      goto L_08ADB1A8;
    }
L_08ADB1A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ADB1AC;
L_08ADB1AC:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADB1C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08ADB1ECu);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADB1ECu) goto L_08ADB1EC;
    return;
L_08ADB1EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(31, 0x08ADB200u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1017u, 0x08A7F7C8u>(ctx, &aot_mem) && ctx.pc == 0x08ADB200u) goto L_08ADB200;
    return;
L_08ADB200:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08ADB5A0;
    }
    goto L_08ADB210;
L_08ADB210:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3188));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADB22C:
    ctx.set_gpr(31, 0x08ADB234u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 727u, 0x08AE2748u>(ctx, &aot_mem) && ctx.pc == 0x08ADB234u) goto L_08ADB234;
    return;
L_08ADB234:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08ADB250;
    }
    goto L_08ADB240;
L_08ADB240:
    ctx.set_gpr(31, 0x08ADB248u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08ADBCD4;
L_08ADB248:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08ADB25C;
      }
      goto L_08ADB250;
    }
L_08ADB250:
    ctx.set_gpr(31, 0x08ADB258u);
    // nop
    goto L_08ADB5BC;
L_08ADB258:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08ADB25C;
L_08ADB25C:
    ctx.set_gpr(31, 0x08ADB264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 47u, 0x08ADC2C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB264u) goto L_08ADB264;
    return;
L_08ADB264:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(178)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB270;
    }
L_08ADB270:
    ctx.set_gpr(31, 0x08ADB278u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 497u, 0x08AE1A20u>(ctx, &aot_mem) && ctx.pc == 0x08ADB278u) goto L_08ADB278;
    return;
L_08ADB278:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB280;
    }
L_08ADB280:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADB5A0;
      }
      goto L_08ADB288;
    }
L_08ADB288:
    ctx.set_gpr(31, 0x08ADB290u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 727u, 0x08AE2748u>(ctx, &aot_mem) && ctx.pc == 0x08ADB290u) goto L_08ADB290;
    return;
L_08ADB290:
    ctx.set_gpr(31, 0x08ADB298u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 533u, 0x08AE1C00u>(ctx, &aot_mem) && ctx.pc == 0x08ADB298u) goto L_08ADB298;
    return;
L_08ADB298:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(170)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
        goto L_08ADB2CC;
    }
    goto L_08ADB2A4;
L_08ADB2A4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08ADB2C0;
    }
    goto L_08ADB2B0;
L_08ADB2B0:
    ctx.set_gpr(31, 0x08ADB2B8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08ADB93C;
L_08ADB2B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB2C8;
      }
      goto L_08ADB2C0;
    }
L_08ADB2C0:
    ctx.set_gpr(31, 0x08ADB2C8u);
    // nop
    goto L_08ADB5BC;
L_08ADB2C8:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08ADB2CC;
L_08ADB2CC:
    ctx.set_gpr(31, 0x08ADB2D4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 328u, 0x08ADD298u>(ctx, &aot_mem) && ctx.pc == 0x08ADB2D4u) goto L_08ADB2D4;
    return;
L_08ADB2D4:
    ctx.set_gpr(31, 0x08ADB2DCu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 497u, 0x08AE1A20u>(ctx, &aot_mem) && ctx.pc == 0x08ADB2DCu) goto L_08ADB2DC;
    return;
L_08ADB2DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB2E4;
    }
L_08ADB2E4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADB5A0;
      }
      goto L_08ADB2EC;
    }
L_08ADB2EC:
    ctx.set_gpr(31, 0x08ADB2F4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 727u, 0x08AE2748u>(ctx, &aot_mem) && ctx.pc == 0x08ADB2F4u) goto L_08ADB2F4;
    return;
L_08ADB2F4:
    ctx.set_gpr(31, 0x08ADB2FCu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 533u, 0x08AE1C00u>(ctx, &aot_mem) && ctx.pc == 0x08ADB2FCu) goto L_08ADB2FC;
    return;
L_08ADB2FC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(170)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08ADB330;
    }
    goto L_08ADB308;
L_08ADB308:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08ADB324;
    }
    goto L_08ADB314;
L_08ADB314:
    ctx.set_gpr(31, 0x08ADB31Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08ADBA78;
L_08ADB31C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB32C;
      }
      goto L_08ADB324;
    }
L_08ADB324:
    ctx.set_gpr(31, 0x08ADB32Cu);
    // nop
    goto L_08ADB5BC;
L_08ADB32C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08ADB330;
L_08ADB330:
    ctx.set_gpr(31, 0x08ADB338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 507u, 0x08ADDBE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADB338u) goto L_08ADB338;
    return;
L_08ADB338:
    ctx.set_gpr(31, 0x08ADB340u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 497u, 0x08AE1A20u>(ctx, &aot_mem) && ctx.pc == 0x08ADB340u) goto L_08ADB340;
    return;
L_08ADB340:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB348;
    }
L_08ADB348:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADB5A0;
      }
      goto L_08ADB350;
    }
L_08ADB350:
    ctx.set_gpr(31, 0x08ADB358u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 533u, 0x08AE1C00u>(ctx, &aot_mem) && ctx.pc == 0x08ADB358u) goto L_08ADB358;
    return;
L_08ADB358:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(170)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08ADB38C;
    }
    goto L_08ADB364;
L_08ADB364:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08ADB380;
    }
    goto L_08ADB370;
L_08ADB370:
    ctx.set_gpr(31, 0x08ADB378u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08ADBEDC;
L_08ADB378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB388;
      }
      goto L_08ADB380;
    }
L_08ADB380:
    ctx.set_gpr(31, 0x08ADB388u);
    // nop
    goto L_08ADB5BC;
L_08ADB388:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08ADB38C;
L_08ADB38C:
    ctx.set_gpr(31, 0x08ADB394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 734u, 0x08ADE810u>(ctx, &aot_mem) && ctx.pc == 0x08ADB394u) goto L_08ADB394;
    return;
L_08ADB394:
    ctx.set_gpr(31, 0x08ADB39Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 497u, 0x08AE1A20u>(ctx, &aot_mem) && ctx.pc == 0x08ADB39Cu) goto L_08ADB39C;
    return;
L_08ADB39C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB3A4;
    }
L_08ADB3A4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADB5A0;
      }
      goto L_08ADB3AC;
    }
L_08ADB3AC:
    ctx.set_gpr(31, 0x08ADB3B4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 533u, 0x08AE1C00u>(ctx, &aot_mem) && ctx.pc == 0x08ADB3B4u) goto L_08ADB3B4;
    return;
L_08ADB3B4:
    ctx.set_gpr(31, 0x08ADB3BCu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 1101u, 0x08ADFF50u>(ctx, &aot_mem) && ctx.pc == 0x08ADB3BCu) goto L_08ADB3BC;
    return;
L_08ADB3BC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08ADB3CC;
    }
    goto L_08ADB3C4;
L_08ADB3C4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADB5A0;
      }
      goto L_08ADB3CC;
    }
L_08ADB3CC:
    ctx.set_gpr(31, 0x08ADB3D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 497u, 0x08AE1A20u>(ctx, &aot_mem) && ctx.pc == 0x08ADB3D4u) goto L_08ADB3D4;
    return;
L_08ADB3D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB3DC;
    }
L_08ADB3DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADB5A0;
      }
      goto L_08ADB3E4;
    }
L_08ADB3E4:
    ctx.set_gpr(31, 0x08ADB3ECu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 91u, 0x08AE049Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB3ECu) goto L_08ADB3EC;
    return;
L_08ADB3EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB3F4;
    }
L_08ADB3F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB404;
    }
L_08ADB404:
    ctx.set_gpr(31, 0x08ADB40Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 533u, 0x08AE1C00u>(ctx, &aot_mem) && ctx.pc == 0x08ADB40Cu) goto L_08ADB40C;
    return;
L_08ADB40C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08ADB418u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 471u, 0x08AE1870u>(ctx, &aot_mem) && ctx.pc == 0x08ADB418u) goto L_08ADB418;
    return;
L_08ADB418:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08ADB460;
    }
    goto L_08ADB420;
L_08ADB420:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08ADB42Cu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(172), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 366u, 0x08AE1334u>(ctx, &aot_mem) && ctx.pc == 0x08ADB42Cu) goto L_08ADB42C;
    return;
L_08ADB42C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08ADB448;
    }
    goto L_08ADB434;
L_08ADB434:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(172), 0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08ADB448;
L_08ADB448:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ADB458u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 488u, 0x08AE1954u>(ctx, &aot_mem) && ctx.pc == 0x08ADB458u) goto L_08ADB458;
    return;
L_08ADB458:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB460;
    }
L_08ADB460:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ADB470u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 488u, 0x08AE1954u>(ctx, &aot_mem) && ctx.pc == 0x08ADB470u) goto L_08ADB470;
    return;
L_08ADB470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB478;
    }
L_08ADB478:
    ctx.set_gpr(31, 0x08ADB480u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 533u, 0x08AE1C00u>(ctx, &aot_mem) && ctx.pc == 0x08ADB480u) goto L_08ADB480;
    return;
L_08ADB480:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08ADB48Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 399u, 0x08ADD61Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB48Cu) goto L_08ADB48C;
    return;
L_08ADB48C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB494;
    }
L_08ADB494:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ADB4C8;
    }
    goto L_08ADB4A0;
L_08ADB4A0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(165)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ADB4B8;
    }
    goto L_08ADB4AC;
L_08ADB4AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ADB4BC;
      }
      goto L_08ADB4B8;
    }
L_08ADB4B8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    goto L_08ADB4BC;
L_08ADB4BC:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB4C8;
    }
L_08ADB4C8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB4D4;
    }
L_08ADB4D4:
    ctx.set_gpr(31, 0x08ADB4DCu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 604u, 0x08ADE114u>(ctx, &aot_mem) && ctx.pc == 0x08ADB4DCu) goto L_08ADB4DC;
    return;
L_08ADB4DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB4E4;
    }
L_08ADB4E4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB500;
      }
      goto L_08ADB4F0;
    }
L_08ADB4F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB500;
    }
L_08ADB500:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB508;
    }
L_08ADB508:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB518;
    }
L_08ADB518:
    ctx.set_gpr(31, 0x08ADB520u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 150u, 0x08AE07B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADB520u) goto L_08ADB520;
    return;
L_08ADB520:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB528;
    }
L_08ADB528:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB538;
    }
L_08ADB538:
    ctx.set_gpr(31, 0x08ADB540u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 206u, 0x08AE0AD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADB540u) goto L_08ADB540;
    return;
L_08ADB540:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB548;
    }
L_08ADB548:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(165)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
        goto L_08ADB564;
    }
    goto L_08ADB554;
L_08ADB554:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB564;
    }
L_08ADB564:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB56C;
    }
L_08ADB56C:
    ctx.set_gpr(31, 0x08ADB574u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 286u, 0x08AE0F00u>(ctx, &aot_mem) && ctx.pc == 0x08ADB574u) goto L_08ADB574;
    return;
L_08ADB574:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB57C;
    }
L_08ADB57C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), 0u);
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB584;
    }
L_08ADB584:
    ctx.set_gpr(31, 0x08ADB58Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 387u, 0x08AE1420u>(ctx, &aot_mem) && ctx.pc == 0x08ADB58Cu) goto L_08ADB58C;
    return;
L_08ADB58C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB59C;
      }
      goto L_08ADB594;
    }
L_08ADB594:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    goto L_08ADB59C;
L_08ADB59C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08ADB5A0;
L_08ADB5A0:
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
L_08ADB5BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08ADB5D0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADB5D0u) goto L_08ADB5D0;
    return;
L_08ADB5D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADB5DCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB5DCu) goto L_08ADB5DC;
    return;
L_08ADB5DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB73C;
      }
      goto L_08ADB5E4;
    }
L_08ADB5E4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB73C;
      }
      goto L_08ADB5F0;
    }
L_08ADB5F0:
    ctx.set_gpr(31, 0x08ADB5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB5F8u) goto L_08ADB5F8;
    return;
L_08ADB5F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADB60Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB60Cu) goto L_08ADB60C;
    return;
L_08ADB60C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(60));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADB620;
      }
      goto L_08ADB61C;
    }
L_08ADB61C:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(30));
    goto L_08ADB620;
L_08ADB620:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_08ADB640;
    }
    goto L_08ADB634;
L_08ADB634:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08ADB640;
L_08ADB640:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ADB690;
    }
    goto L_08ADB648;
L_08ADB648:
    ctx.set_gpr(31, 0x08ADB650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB650u) goto L_08ADB650;
    return;
L_08ADB650:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(31, 0x08ADB664u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB664u) goto L_08ADB664;
    return;
L_08ADB664:
    ctx.set_gpr(31, 0x08ADB66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB66Cu) goto L_08ADB66C;
    return;
L_08ADB66C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08ADB680u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB680u) goto L_08ADB680;
    return;
L_08ADB680:
    ctx.set_gpr(31, 0x08ADB688u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADC998u>(ctx, &aot_mem) && ctx.pc == 0x08ADB688u) goto L_08ADB688;
    return;
L_08ADB688:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADB730;
      }
      goto L_08ADB690;
    }
L_08ADB690:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08ADB6E0;
    }
    goto L_08ADB698;
L_08ADB698:
    ctx.set_gpr(31, 0x08ADB6A0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 468u, 0x08ADD9A0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB6A0u) goto L_08ADB6A0;
    return;
L_08ADB6A0:
    ctx.set_gpr(31, 0x08ADB6A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB6A8u) goto L_08ADB6A8;
    return;
L_08ADB6A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(31, 0x08ADB6BCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB6BCu) goto L_08ADB6BC;
    return;
L_08ADB6BC:
    ctx.set_gpr(31, 0x08ADB6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB6C4u) goto L_08ADB6C4;
    return;
L_08ADB6C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08ADB6D8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB6D8u) goto L_08ADB6D8;
    return;
L_08ADB6D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB72C;
      }
      goto L_08ADB6E0;
    }
L_08ADB6E0:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
        goto L_08ADB6F8;
    }
    goto L_08ADB6E8;
L_08ADB6E8:
    ctx.set_gpr(31, 0x08ADB6F0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 711u, 0x08ADE65Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB6F0u) goto L_08ADB6F0;
    return;
L_08ADB6F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB72C;
      }
      goto L_08ADB6F8;
    }
L_08ADB6F8:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADB72C;
      }
      goto L_08ADB700;
    }
L_08ADB700:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADB718u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADB718u) goto L_08ADB718;
    return;
L_08ADB718:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(427));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(229));
    ctx.set_gpr(31, 0x08ADB72Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6716));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADB72Cu) goto L_08ADB72C;
    return;
L_08ADB72C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    goto L_08ADB730;
L_08ADB730:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADB92C;
      }
      goto L_08ADB73C;
    }
L_08ADB73C:
    ctx.set_gpr(31, 0x08ADB744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADB744u) goto L_08ADB744;
    return;
L_08ADB744:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADB750u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB750u) goto L_08ADB750;
    return;
L_08ADB750:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08ADB92C;
    }
    goto L_08ADB758;
L_08ADB758:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB928;
      }
      goto L_08ADB764;
    }
L_08ADB764:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB928;
      }
      goto L_08ADB770;
    }
L_08ADB770:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB7E0;
      }
      goto L_08ADB784;
    }
L_08ADB784:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_08ADB7AC;
    }
    goto L_08ADB794;
L_08ADB794:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB7A4;
      }
      goto L_08ADB7A0;
    }
L_08ADB7A0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30));
    goto L_08ADB7A4;
L_08ADB7A4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08ADB7AC;
L_08ADB7AC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_08ADB854;
    }
    goto L_08ADB7B4;
L_08ADB7B4:
    ctx.set_gpr(31, 0x08ADB7BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB7BCu) goto L_08ADB7BC;
    return;
L_08ADB7BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADB7D0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB7D0u) goto L_08ADB7D0;
    return;
L_08ADB7D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ADB850;
      }
      goto L_08ADB7E0;
    }
L_08ADB7E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB850;
      }
      goto L_08ADB7E8;
    }
L_08ADB7E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_08ADB81C;
    }
    goto L_08ADB7F8;
L_08ADB7F8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB818;
      }
      goto L_08ADB804;
    }
L_08ADB804:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB814;
      }
      goto L_08ADB810;
    }
L_08ADB810:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30));
    goto L_08ADB814;
L_08ADB814:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    goto L_08ADB818;
L_08ADB818:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08ADB81C;
L_08ADB81C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(ctx.gpr[2]));
        goto L_08ADB850;
    }
    goto L_08ADB828;
L_08ADB828:
    ctx.set_gpr(31, 0x08ADB830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB830u) goto L_08ADB830;
    return;
L_08ADB830:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADB844u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB844u) goto L_08ADB844;
    return;
L_08ADB844:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    goto L_08ADB850;
L_08ADB850:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08ADB854;
L_08ADB854:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ADB86C;
    }
    goto L_08ADB85C;
L_08ADB85C:
    ctx.set_gpr(31, 0x08ADB864u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADC998u>(ctx, &aot_mem) && ctx.pc == 0x08ADB864u) goto L_08ADB864;
    return;
L_08ADB864:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
      if (branch_taken) {
          goto L_08ADB898;
      }
      goto L_08ADB86C;
    }
L_08ADB86C:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08ADB884;
    }
    goto L_08ADB874;
L_08ADB874:
    ctx.set_gpr(31, 0x08ADB87Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 468u, 0x08ADD9A0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB87Cu) goto L_08ADB87C;
    return;
L_08ADB87C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB894;
      }
      goto L_08ADB884;
    }
L_08ADB884:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADB894;
      }
      goto L_08ADB88C;
    }
L_08ADB88C:
    ctx.set_gpr(31, 0x08ADB894u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 711u, 0x08ADE65Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB894u) goto L_08ADB894;
    return;
L_08ADB894:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    goto L_08ADB898;
L_08ADB898:
    ctx.set_gpr(31, 0x08ADB8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADB8A0u) goto L_08ADB8A0;
    return;
L_08ADB8A0:
    ctx.set_gpr(31, 0x08ADB8A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADB8A8u) goto L_08ADB8A8;
    return;
L_08ADB8A8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08ADB8B4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB8B4u) goto L_08ADB8B4;
    return;
L_08ADB8B4:
    ctx.set_gpr(31, 0x08ADB8BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB8BCu) goto L_08ADB8BC;
    return;
L_08ADB8BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08ADB8D0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB8D0u) goto L_08ADB8D0;
    return;
L_08ADB8D0:
    ctx.set_gpr(31, 0x08ADB8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB8D8u) goto L_08ADB8D8;
    return;
L_08ADB8D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADB8F8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADB8F8u) goto L_08ADB8F8;
    return;
L_08ADB8F8:
    ctx.set_gpr(31, 0x08ADB900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB900u) goto L_08ADB900;
    return;
L_08ADB900:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADB920u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADB920u) goto L_08ADB920;
    return;
L_08ADB920:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADB92C;
      }
      goto L_08ADB928;
    }
L_08ADB928:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08ADB92C;
L_08ADB92C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADB93C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08ADB950u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADB950u) goto L_08ADB950;
    return;
L_08ADB950:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADB95Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB95Cu) goto L_08ADB95C;
    return;
L_08ADB95C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBA40;
      }
      goto L_08ADB964;
    }
L_08ADB964:
    ctx.set_gpr(31, 0x08ADB96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB96Cu) goto L_08ADB96C;
    return;
L_08ADB96C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADB980u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB980u) goto L_08ADB980;
    return;
L_08ADB980:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ADB990u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 711u, 0x08ADE65Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB990u) goto L_08ADB990;
    return;
L_08ADB990:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(60));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADB9A4;
      }
      goto L_08ADB9A0;
    }
L_08ADB9A0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(30));
    goto L_08ADB9A4;
L_08ADB9A4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08ADB9B8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADB9B8u) goto L_08ADB9B8;
    return;
L_08ADB9B8:
    ctx.set_gpr(31, 0x08ADB9C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADB9C0u) goto L_08ADB9C0;
    return;
L_08ADB9C0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08ADB9CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB9CCu) goto L_08ADB9CC;
    return;
L_08ADB9CC:
    ctx.set_gpr(31, 0x08ADB9D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB9D4u) goto L_08ADB9D4;
    return;
L_08ADB9D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08ADB9E8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB9E8u) goto L_08ADB9E8;
    return;
L_08ADB9E8:
    ctx.set_gpr(31, 0x08ADB9F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB9F0u) goto L_08ADB9F0;
    return;
L_08ADB9F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADBA10u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADBA10u) goto L_08ADBA10;
    return;
L_08ADBA10:
    ctx.set_gpr(31, 0x08ADBA18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBA18u) goto L_08ADBA18;
    return;
L_08ADBA18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADBA38u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADBA38u) goto L_08ADBA38;
    return;
L_08ADBA38:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADBA68;
      }
      goto L_08ADBA40;
    }
L_08ADBA40:
    ctx.set_gpr(31, 0x08ADBA48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADBA48u) goto L_08ADBA48;
    return;
L_08ADBA48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADBA54u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADBA54u) goto L_08ADBA54;
    return;
L_08ADBA54:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08ADBA68;
    }
    goto L_08ADBA5C;
L_08ADBA5C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    goto L_08ADBA68;
L_08ADBA68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADBA78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08ADBA8Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADBA8Cu) goto L_08ADBA8C;
    return;
L_08ADBA8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADBA98u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBA98u) goto L_08ADBA98;
    return;
L_08ADBA98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBBA4;
      }
      goto L_08ADBAA0;
    }
L_08ADBAA0:
    ctx.set_gpr(31, 0x08ADBAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBAA8u) goto L_08ADBAA8;
    return;
L_08ADBAA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADBABCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBABCu) goto L_08ADBABC;
    return;
L_08ADBABC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ADBACCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 468u, 0x08ADD9A0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBACCu) goto L_08ADBACC;
    return;
L_08ADBACC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
        goto L_08ADBAF4;
    }
    goto L_08ADBADC;
L_08ADBADC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBAEC;
      }
      goto L_08ADBAE8;
    }
L_08ADBAE8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30));
    goto L_08ADBAEC;
L_08ADBAEC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    goto L_08ADBAF4;
L_08ADBAF4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08ADBB00u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADBB00u) goto L_08ADBB00;
    return;
L_08ADBB00:
    ctx.set_gpr(31, 0x08ADBB08u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADBB08u) goto L_08ADBB08;
    return;
L_08ADBB08:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08ADBB14u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBB14u) goto L_08ADBB14;
    return;
L_08ADBB14:
    ctx.set_gpr(31, 0x08ADBB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBB1Cu) goto L_08ADBB1C;
    return;
L_08ADBB1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08ADBB30u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBB30u) goto L_08ADBB30;
    return;
L_08ADBB30:
    ctx.set_gpr(31, 0x08ADBB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBB38u) goto L_08ADBB38;
    return;
L_08ADBB38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08ADBB4Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBB4Cu) goto L_08ADBB4C;
    return;
L_08ADBB4C:
    ctx.set_gpr(31, 0x08ADBB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBB54u) goto L_08ADBB54;
    return;
L_08ADBB54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADBB74u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADBB74u) goto L_08ADBB74;
    return;
L_08ADBB74:
    ctx.set_gpr(31, 0x08ADBB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBB7Cu) goto L_08ADBB7C;
    return;
L_08ADBB7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADBB9Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADBB9Cu) goto L_08ADBB9C;
    return;
L_08ADBB9C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADBCC4;
      }
      goto L_08ADBBA4;
    }
L_08ADBBA4:
    ctx.set_gpr(31, 0x08ADBBACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADBBACu) goto L_08ADBBAC;
    return;
L_08ADBBAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADBBB8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBBB8u) goto L_08ADBBB8;
    return;
L_08ADBBB8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08ADBCC4;
    }
    goto L_08ADBBC0;
L_08ADBBC0:
    ctx.set_gpr(31, 0x08ADBBC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBBC8u) goto L_08ADBBC8;
    return;
L_08ADBBC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADBBDCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBBDCu) goto L_08ADBBDC;
    return;
L_08ADBBDC:
    ctx.set_gpr(31, 0x08ADBBE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBBE4u) goto L_08ADBBE4;
    return;
L_08ADBBE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08ADBBF8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBBF8u) goto L_08ADBBF8;
    return;
L_08ADBBF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ADBC04u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADBC04u) goto L_08ADBC04;
    return;
L_08ADBC04:
    ctx.set_gpr(31, 0x08ADBC0Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADBC0Cu) goto L_08ADBC0C;
    return;
L_08ADBC0C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08ADBC18u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBC18u) goto L_08ADBC18;
    return;
L_08ADBC18:
    ctx.set_gpr(31, 0x08ADBC20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBC20u) goto L_08ADBC20;
    return;
L_08ADBC20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08ADBC34u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBC34u) goto L_08ADBC34;
    return;
L_08ADBC34:
    ctx.set_gpr(31, 0x08ADBC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBC3Cu) goto L_08ADBC3C;
    return;
L_08ADBC3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADBC5Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADBC5Cu) goto L_08ADBC5C;
    return;
L_08ADBC5C:
    ctx.set_gpr(31, 0x08ADBC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBC64u) goto L_08ADBC64;
    return;
L_08ADBC64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADBC84u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADBC84u) goto L_08ADBC84;
    return;
L_08ADBC84:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADBCA4u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADBCA4u) goto L_08ADBCA4;
    return;
L_08ADBCA4:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(427));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(229));
    ctx.set_gpr(31, 0x08ADBCB8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6716));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADBCB8u) goto L_08ADBCB8;
    return;
L_08ADBCB8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ADBCC4;
L_08ADBCC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADBCD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08ADBCE8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADBCE8u) goto L_08ADBCE8;
    return;
L_08ADBCE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADBCF4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBCF4u) goto L_08ADBCF4;
    return;
L_08ADBCF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBE18;
      }
      goto L_08ADBCFC;
    }
L_08ADBCFC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBE18;
      }
      goto L_08ADBD08;
    }
L_08ADBD08:
    ctx.set_gpr(31, 0x08ADBD10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBD10u) goto L_08ADBD10;
    return;
L_08ADBD10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADBD24u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBD24u) goto L_08ADBD24;
    return;
L_08ADBD24:
    ctx.set_gpr(31, 0x08ADBD2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBD2Cu) goto L_08ADBD2C;
    return;
L_08ADBD2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08ADBD40u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBD40u) goto L_08ADBD40;
    return;
L_08ADBD40:
    ctx.set_gpr(31, 0x08ADBD48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBD48u) goto L_08ADBD48;
    return;
L_08ADBD48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(31, 0x08ADBD5Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBD5Cu) goto L_08ADBD5C;
    return;
L_08ADBD5C:
    ctx.set_gpr(31, 0x08ADBD64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBD64u) goto L_08ADBD64;
    return;
L_08ADBD64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08ADBD78u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBD78u) goto L_08ADBD78;
    return;
L_08ADBD78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ADBD88u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADBD88u) goto L_08ADBD88;
    return;
L_08ADBD88:
    ctx.set_gpr(31, 0x08ADBD90u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADBD90u) goto L_08ADBD90;
    return;
L_08ADBD90:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08ADBD9Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBD9Cu) goto L_08ADBD9C;
    return;
L_08ADBD9C:
    ctx.set_gpr(31, 0x08ADBDA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBDA4u) goto L_08ADBDA4;
    return;
L_08ADBDA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08ADBDB8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBDB8u) goto L_08ADBDB8;
    return;
L_08ADBDB8:
    ctx.set_gpr(31, 0x08ADBDC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBDC0u) goto L_08ADBDC0;
    return;
L_08ADBDC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADBDE0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADBDE0u) goto L_08ADBDE0;
    return;
L_08ADBDE0:
    ctx.set_gpr(31, 0x08ADBDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBDE8u) goto L_08ADBDE8;
    return;
L_08ADBDE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADBE08u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADBE08u) goto L_08ADBE08;
    return;
L_08ADBE08:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADBECC;
      }
      goto L_08ADBE18;
    }
L_08ADBE18:
    ctx.set_gpr(31, 0x08ADBE20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADBE20u) goto L_08ADBE20;
    return;
L_08ADBE20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADBE2Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBE2Cu) goto L_08ADBE2C;
    return;
L_08ADBE2C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08ADBECC;
    }
    goto L_08ADBE34;
L_08ADBE34:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ADBE40u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADC998u>(ctx, &aot_mem) && ctx.pc == 0x08ADBE40u) goto L_08ADBE40;
    return;
L_08ADBE40:
    ctx.set_gpr(31, 0x08ADBE48u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADBE48u) goto L_08ADBE48;
    return;
L_08ADBE48:
    ctx.set_gpr(31, 0x08ADBE50u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADBE50u) goto L_08ADBE50;
    return;
L_08ADBE50:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08ADBE5Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBE5Cu) goto L_08ADBE5C;
    return;
L_08ADBE5C:
    ctx.set_gpr(31, 0x08ADBE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBE64u) goto L_08ADBE64;
    return;
L_08ADBE64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08ADBE78u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBE78u) goto L_08ADBE78;
    return;
L_08ADBE78:
    ctx.set_gpr(31, 0x08ADBE80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBE80u) goto L_08ADBE80;
    return;
L_08ADBE80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADBEA0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADBEA0u) goto L_08ADBEA0;
    return;
L_08ADBEA0:
    ctx.set_gpr(31, 0x08ADBEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBEA8u) goto L_08ADBEA8;
    return;
L_08ADBEA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADBEC8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADBEC8u) goto L_08ADBEC8;
    return;
L_08ADBEC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ADBECC;
L_08ADBECC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADBEDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08ADBEF0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADBEF0u) goto L_08ADBEF0;
    return;
L_08ADBEF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADBEFCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBEFCu) goto L_08ADBEFC;
    return;
L_08ADBEFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBFFC;
      }
      goto L_08ADBF04;
    }
L_08ADBF04:
    ctx.set_gpr(31, 0x08ADBF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBF0Cu) goto L_08ADBF0C;
    return;
L_08ADBF0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADBF20u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBF20u) goto L_08ADBF20;
    return;
L_08ADBF20:
    ctx.set_gpr(31, 0x08ADBF28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBF28u) goto L_08ADBF28;
    return;
L_08ADBF28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08ADBF3Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBF3Cu) goto L_08ADBF3C;
    return;
L_08ADBF3C:
    ctx.set_gpr(31, 0x08ADBF44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBF44u) goto L_08ADBF44;
    return;
L_08ADBF44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08ADBF58u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBF58u) goto L_08ADBF58;
    return;
L_08ADBF58:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ADBF6Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADC998u>(ctx, &aot_mem) && ctx.pc == 0x08ADBF6Cu) goto L_08ADBF6C;
    return;
L_08ADBF6C:
    ctx.set_gpr(31, 0x08ADBF74u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADBF74u) goto L_08ADBF74;
    return;
L_08ADBF74:
    ctx.set_gpr(31, 0x08ADBF7Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADBF7Cu) goto L_08ADBF7C;
    return;
L_08ADBF7C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08ADBF88u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBF88u) goto L_08ADBF88;
    return;
L_08ADBF88:
    ctx.set_gpr(31, 0x08ADBF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBF90u) goto L_08ADBF90;
    return;
L_08ADBF90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08ADBFA4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBFA4u) goto L_08ADBFA4;
    return;
L_08ADBFA4:
    ctx.set_gpr(31, 0x08ADBFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBFACu) goto L_08ADBFAC;
    return;
L_08ADBFAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADBFCCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADBFCCu) goto L_08ADBFCC;
    return;
L_08ADBFCC:
    ctx.set_gpr(31, 0x08ADBFD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBFD4u) goto L_08ADBFD4;
    return;
L_08ADBFD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADBFF4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADBFF4u) goto L_08ADBFF4;
    return;
L_08ADBFF4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 20u, 0x08ADC138u>(ctx, &aot_mem); return;
      }
      goto L_08ADBFFC;
    }
L_08ADBFFC:
    ctx.set_gpr(31, 0x08ADC004u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0181(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0181_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_181(Runtime &runtime) {
    runtime.register_generated_unit(181u, 0x08AD8000u, 16384u, &recomp_unit_0181, &recomp_unit_0181_entry);
    runtime.register_function(0x08AD8000u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8014u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8028u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8040u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8048u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8054u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8074u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8088u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8098u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8104u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8114u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD811Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8130u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8140u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8154u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8160u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8188u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8198u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD81C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8204u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD820Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD82F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8300u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8314u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD839Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD83ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD83B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD83C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD83D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD83F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8410u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8420u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8434u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8468u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD848Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8498u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD852Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD853Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8548u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8558u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8568u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD85D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD85E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8600u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD86A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD86ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD86BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8700u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8708u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8754u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8764u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD876Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8784u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8804u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8838u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8840u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8874u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8878u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8880u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8894u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8904u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8930u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD893Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8944u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD894Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD895Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8964u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD896Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD897Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8988u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8994u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD899Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8AB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8AC0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8AC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8AD0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8AD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8AECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8AF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B84u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8BB0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8BB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8BC0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8BC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8BDCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8BE4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8BF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8CA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8CC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8CCCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8CD4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8CDCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8CE8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8CF0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8CF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D30u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D38u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D80u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8DACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8DB0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8DB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8DCCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8DDCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8DE4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8DF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E14u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E4Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E5Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E6Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E84u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8EA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8EB4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8EBCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8EC4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8ECCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8ED8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8EE4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8EECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8EF0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F4Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F68u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FBCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FD0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FE0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FE8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD900Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9014u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD901Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9028u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9030u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9040u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9048u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD905Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9060u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD906Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9070u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD907Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9084u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9094u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD909Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9100u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD911Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD912Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9134u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9140u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9148u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9150u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD915Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9164u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD916Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9180u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9194u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9200u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9208u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9220u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9228u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9248u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9250u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9268u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9270u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9288u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9290u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9298u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9300u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9308u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9320u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9328u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9330u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9338u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9350u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9358u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9370u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9378u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9390u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9398u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD940Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9414u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD942Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9434u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD944Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9454u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD945Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9474u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD947Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD949Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9504u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD950Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9524u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD952Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD954Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9554u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD956Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9574u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9580u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9588u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9590u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9610u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9618u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9638u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9640u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9658u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9660u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9678u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9680u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9688u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9690u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9710u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9718u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9720u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9728u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9740u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9748u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9760u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9768u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9780u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9788u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9808u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9818u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD981Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9824u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9834u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD983Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9854u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD985Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD987Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9884u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD989Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD990Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9914u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9934u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD993Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9954u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD995Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9964u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD996Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9984u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD998Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A0Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A38u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A4Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A68u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AA0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AB0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9ABCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AC4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9ACCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AE0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AE8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B14u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B1Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B30u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B38u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B4Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B68u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B84u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B90u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B98u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BA0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BB4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BD0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BDCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BE4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C1Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CA0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CB0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CD0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CE0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D90u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DB0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DBCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DC4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DCCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DE0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DE8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E90u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EC0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EDCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EF0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F1Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9FC4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9FCCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9FFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA00Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA014u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA048u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA050u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA084u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA08Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA094u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA120u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA128u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA15Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA164u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA198u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA1A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA1D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA1DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA210u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA214u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA21Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA250u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA260u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA264u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA26Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA280u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA290u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA294u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA29Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA2B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA2C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA2D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA2ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA2F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA300u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA304u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA314u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA34Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA354u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA368u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA378u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA380u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA38Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA394u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA39Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA408u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA410u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA424u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA42Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA440u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA448u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA45Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA464u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA478u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA480u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA50Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA514u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA520u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA52Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA53Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA54Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA560u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA56Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA574u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA57Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA584u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA588u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA594u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA600u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA608u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA610u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA618u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA620u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA634u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA63Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA648u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA658u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA65Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA664u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA678u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA688u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA690u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA698u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA69Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA714u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA71Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA730u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA744u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA754u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA76Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA774u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA77Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA794u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA79Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA814u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA81Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA82Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA834u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA838u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA83Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA888u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA894u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA904u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA90Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA914u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA91Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA924u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA92Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA93Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA948u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA94Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA954u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA95Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA968u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA974u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA978u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA980u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA98Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA998u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA5Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA6Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA90u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAAA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAAACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAAC0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAAC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAADCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAAE8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAAF0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB0Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB68u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB84u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB98u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABA0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABB4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABBCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABD0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABD4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABDCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABE4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC14u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC1Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC6Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC90u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC98u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADACB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADACC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADACD0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADACF0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADACF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADADACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADADB4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADADD4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADADDCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADADF0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAE00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAE08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAE10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAE24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAE2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAE58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAE68u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAE70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAE8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAE94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAEB0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAEB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAED4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAEDCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAEE4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAEECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAEF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAFA0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAFA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAFCCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAFD4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAFF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB000u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB008u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB00Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB014u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB028u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB030u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB05Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB06Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB074u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB088u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB090u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB104u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB128u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB12Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB138u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB13Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB144u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB158u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB168u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB170u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB178u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB17Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB184u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB198u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB1A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB1ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB1C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB1ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB200u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB210u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB22Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB234u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB240u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB248u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB250u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB258u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB25Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB264u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB270u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB278u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB280u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB288u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB290u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB298u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB2A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB2B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB2B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB2C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB2C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB2CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB2D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB2DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB2E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB2ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB2F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB2FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB308u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB314u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB31Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB324u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB32Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB330u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB338u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB340u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB348u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB350u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB358u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB364u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB370u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB378u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB380u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB388u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB38Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB394u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB39Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB404u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB40Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB418u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB420u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB42Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB434u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB448u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB458u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB460u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB470u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB478u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB480u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB48Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB494u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB500u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB508u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB518u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB520u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB528u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB538u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB540u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB548u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB554u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB564u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB56Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB574u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB57Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB584u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB58Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB594u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB59Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB5A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB5BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB5D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB5DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB5E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB5F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB5F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB60Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB61Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB620u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB634u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB640u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB648u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB650u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB664u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB66Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB680u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB688u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB690u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB698u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB6A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB6A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB6BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB6C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB6D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB6E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB6E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB6F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB6F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB700u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB718u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB72Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB730u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB73Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB744u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB750u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB758u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB764u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB770u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB784u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB794u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB804u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB810u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB814u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB818u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB81Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB828u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB830u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB844u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB850u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB854u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB85Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB864u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB86Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB874u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB87Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB884u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB88Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB894u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB898u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB900u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB920u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB928u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB92Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB93Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB950u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB95Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB964u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB96Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB980u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB990u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA38u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA5Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA68u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA98u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBAA0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBAA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBABCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBACCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBADCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBAE8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBAECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBAF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB14u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB1Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB30u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB38u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB4Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBC0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBDCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBE4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC0Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC5Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC84u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCC4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCD4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCE8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD5Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD90u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDC0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDE0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDE8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE5Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE80u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEA0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBECCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEDCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEF0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF0Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF6Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF90u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFCCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFD4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFFCu, &recomp_unit_0181, "recomp_unit_0181");
}
} // namespace psprecomp
