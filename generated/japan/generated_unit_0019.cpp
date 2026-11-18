#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0019[4094] = {
    1, 2, 0, 3, 0, 0, 4, 0, 5, 0, 0, 6, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 12, 0,
    13, 0, 0, 14, 0, 0, 15, 0, 16, 17, 0, 18, 0, 0, 19, 0, 20, 0, 0, 21, 0, 22, 0, 0, 23, 24, 0, 25, 0, 0, 26, 0,
    0, 27, 28, 0, 29, 30, 31, 0, 0, 0, 0, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 0,
    53, 0, 0, 54, 0, 55, 0, 0, 56, 0, 0, 57, 0, 58, 0, 0, 59, 0, 0, 60, 0, 61, 0, 0, 62, 0, 63, 0, 0, 64, 0, 65,
    0, 66, 0, 0, 67, 0, 0, 68, 0, 69, 0, 0, 70, 0, 0, 71, 0, 72, 0, 0, 73, 0, 74, 0, 0, 75, 0, 76, 0, 77, 0, 78,
    0, 79, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 83, 0, 84, 0, 0, 85, 0, 86, 0, 87, 0, 0, 88, 0, 89, 0, 0, 90, 91, 0,
    92, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 112, 0, 0,
    0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 0, 121, 122, 0, 123, 0, 0, 124, 0,
    125, 0, 126, 0, 0, 127, 0, 128, 0, 129, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 134, 135, 0, 136, 137, 138, 0, 139,
    0, 140, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0,
    0, 149, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 153, 154, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 159, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0, 0, 163, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 165, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 173, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 177, 0, 178, 179,
    0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 183, 184, 0, 0, 185, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188,
    0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194,
    0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 205,
    206, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 213, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 219, 0, 0, 220,
    0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0,
    229, 0, 230, 0, 231, 232, 0, 0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 238, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 243, 0, 244, 0, 0, 0, 245, 0, 246, 247, 0, 0, 248, 0, 249, 0, 250, 0, 0,
    251, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 256, 0, 257, 0, 0, 0, 0, 258, 0, 259, 0,
    0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 264, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0,
    0, 0, 0, 267, 0, 268, 0, 0, 269, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 274, 0, 0,
    0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 280, 0, 0, 0, 281, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0,
    0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 289, 0, 290, 0, 0, 0, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0,
    296, 0, 297, 0, 298, 0, 0, 299, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0,
    305, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0,
    313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0,
    320, 0, 321, 322, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 0,
    329, 0, 0, 0, 330, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 338,
    0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 342, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 347, 0, 348, 0, 0, 349, 0, 350, 0, 0, 0, 0, 351, 0, 352, 0, 0, 353, 0, 0, 0,
    354, 0, 355, 0, 0, 356, 0, 357, 0, 0, 358, 0, 0, 359, 0, 360, 0, 0, 361, 0, 362, 0, 0, 363, 0, 0, 364, 0, 365, 0, 0, 366,
    0, 367, 0, 0, 368, 0, 0, 369, 0, 370, 0, 0, 371, 0, 372, 0, 0, 373, 0, 0, 374, 0, 375, 0, 0, 376, 0, 377, 0, 0, 378, 0,
    0, 379, 0, 380, 0, 0, 381, 0, 382, 0, 0, 383, 0, 0, 384, 0, 385, 0, 0, 386, 0, 387, 0, 0, 388, 0, 0, 389, 0, 390, 0, 391,
    0, 0, 392, 0, 393, 0, 0, 0, 394, 0, 395, 0, 0, 396, 0, 397, 0, 398, 0, 0, 399, 0, 400, 0, 0, 0, 401, 0, 402, 0, 0, 403,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 407, 0, 0, 0, 408, 0,
    0, 409, 0, 410, 0, 411, 0, 412, 0, 413, 0, 414, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0,
    419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 425,
    0, 426, 0, 0, 0, 427, 0, 428, 0, 0, 429, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0,
    0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 437, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 440, 0, 0, 0, 441, 0,
    0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0,
    0, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 451, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 455, 0,
    0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 460, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 467, 0, 0, 468, 0, 469, 0, 0, 470, 0, 471, 0,
    0, 472, 0, 473, 0, 0, 474, 0, 475, 0, 0, 476, 0, 477, 0, 0, 478, 0, 479, 0, 0, 480, 0, 481, 0, 0, 482, 483, 0, 484, 0, 0,
    485, 0, 0, 486, 0, 487, 0, 0, 488, 489, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0,
    0, 0, 0, 0, 0, 494, 0, 0, 495, 0, 496, 0, 0, 497, 0, 498, 0, 0, 499, 0, 500, 0, 0, 501, 0, 502, 0, 0, 503, 0, 504, 0,
    0, 505, 0, 506, 0, 0, 507, 0, 508, 0, 0, 509, 0, 510, 0, 0, 511, 512, 0, 513, 0, 0, 514, 0, 0, 515, 0, 516, 0, 0, 517, 518,
    0, 519, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0,
    0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 530, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 534, 0, 535,
    0, 0, 536, 0, 0, 0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 543, 544, 0,
    545, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0,
    550, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0,
    555, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 558, 0, 0, 0, 0, 559, 560, 0, 561, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0,
    0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572, 573, 0, 574, 0, 0, 0, 0, 575, 576, 0,
    577, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 579, 580, 0, 581, 582, 0, 583, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 586,
    0, 587, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0, 0, 595, 596,
    0, 597, 0, 0, 0, 0, 598, 599, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 603, 0, 604, 605, 0, 606, 0, 0, 0, 0,
    0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 609, 0, 610, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 612,
    0, 0, 613, 0, 0, 0, 0, 614, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 623, 0, 624, 0, 0, 0,
    0, 625, 626, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 629, 630, 0, 631, 632, 0, 633, 0, 0, 0, 0, 0, 0, 0, 634, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 636, 0, 637, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 0, 640, 0, 0,
    0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 643, 0, 0, 644, 0, 645, 0, 0, 0, 0, 0, 0, 646, 0, 0, 647, 0, 648, 0, 0, 0, 0,
    0, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 656, 0, 657, 0, 0, 0, 0,
    658, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    661, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 665, 0, 666, 667, 0, 0, 0, 0, 668, 0,
    669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 0, 0, 672, 0, 673, 0, 0, 674, 0, 0, 0, 0, 0, 0,
    0, 675, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 679, 0, 680, 0, 681, 0, 682, 0, 683, 0, 0, 684, 0, 0, 0, 0, 685, 0, 0, 686, 0, 687, 0, 0, 0,
    0, 688, 0, 0, 689, 0, 0, 690, 0, 691, 0, 0, 692, 0, 693, 0, 694, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 697, 698, 0, 0,
    699, 0, 0, 700, 0, 701, 0, 0, 0, 702, 0, 703, 704, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0,
    707, 0, 708, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 713, 0, 714, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716, 0, 717, 0, 0, 0,
    718, 0, 719, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 723, 0, 0, 0, 724, 0, 0, 0, 0, 725,
    0, 726, 0, 727, 0, 728, 0, 729, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 731, 0, 732, 0, 733, 0, 734, 0, 0, 0, 0, 0, 0, 0,
    0, 735, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 738, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 740,
    0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0,
    0, 0, 0, 0, 0, 0, 743, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746,
    0, 747, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 750, 0, 0, 0, 751, 0, 752, 0, 753, 0, 754, 0, 0, 0, 755, 0,
    756, 0, 0, 0, 757, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 0, 761, 0, 0, 762, 0, 0, 763, 0,
    0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 765, 0, 766, 0, 767, 0, 768, 769, 0, 0, 770, 0, 0, 0, 0, 0, 771, 0, 772, 0, 0, 773,
    774, 0, 0, 775, 0, 0, 0, 776, 0, 0, 777, 0, 0, 0, 0, 0, 778, 0, 779, 0, 0, 780, 0, 781, 0, 0, 0, 0, 782, 0, 0, 0,
    0, 0, 783, 0, 784, 0, 785, 0, 786, 0, 787, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 790,
    0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 792, 0, 793, 0, 0, 0, 0, 0, 794, 0, 795, 0, 796, 797, 0, 0, 798, 0, 799, 0, 0, 0,
    800, 0, 0, 801, 0, 0, 0, 802, 0, 803, 0, 804, 0, 805, 0, 806, 0, 807, 0, 0, 0, 808, 0, 0, 809, 0, 810, 0, 811, 0, 812, 0,
    0, 0, 813, 0, 814, 0, 815, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 818, 0, 0, 0, 819, 0, 0, 820,
    0, 821, 0, 822, 0, 0, 0, 823, 0, 0, 0, 824, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    826, 0, 0, 0, 0, 0, 0, 0, 0, 0, 827, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0,
    0, 0, 0, 0, 830, 0, 0, 0, 0, 831, 0, 0, 0, 832, 0, 0, 0, 0, 833, 0, 834, 0, 0, 835, 0, 836, 0, 837, 0, 0, 0, 838,
    0, 839, 0, 0, 0, 840, 0, 0, 841, 842, 0, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 844, 0, 845, 0, 0, 0, 846, 0, 0, 847, 0, 848, 0, 849, 0, 850, 0, 0, 0, 0, 0, 851, 0, 852, 0, 853, 854, 0, 0,
    0, 0, 0, 0, 855, 0, 0, 0, 856, 0, 0, 0, 0, 0, 0, 0, 857, 0, 858, 0, 0, 0, 859, 0, 860, 0, 861, 0, 0, 0, 0, 862,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 863, 0, 0, 0, 0, 0, 0, 864, 0, 0, 865, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 866, 0, 0, 867, 868, 0, 0, 0, 0, 0, 0, 0, 0, 869, 870, 0, 0, 0, 0, 0, 0, 0, 871, 0, 872, 0, 873, 0, 874, 875, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 878, 0, 0, 879, 0, 880, 0, 881, 0, 0, 0, 882, 0, 883, 0, 884, 0, 0, 885, 886, 0, 0, 887, 0, 888, 0, 889,
    0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 891, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 892, 0, 893, 0, 0, 894, 0, 0, 895, 0, 0, 0, 0, 0, 0, 896, 0, 897, 0, 0, 0, 0, 0, 0, 0, 898,
    0, 0, 0, 0, 0, 899, 0, 900, 0, 0, 0, 0, 0, 0, 901, 0, 0, 902, 903, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    904, 0, 905, 0, 0, 0, 0, 0, 0, 0, 906, 0, 0, 0, 907, 908, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 909, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 910, 0, 0, 0, 911, 0, 0, 912, 913, 0, 0, 0, 914, 0, 915, 0, 916, 0, 0, 0, 917, 0, 918,
    0, 919, 0, 0, 920, 921, 922, 0, 0, 0, 0, 923, 0, 0, 0, 0, 0, 0, 0, 924, 0, 925, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    926, 0, 927, 0, 0, 0, 0, 0, 928, 0, 0, 0, 0, 0, 929, 0, 930, 0, 0, 0, 0, 931, 0, 0, 932, 933, 0, 0, 934, 935, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 936, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 937, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    938, 939, 0, 940, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 941, 0, 0, 0, 0, 0, 0, 0, 942, 0, 0, 0, 0, 0, 943,
    0, 0, 0, 0, 0, 944, 0, 0, 0, 0, 0, 945, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 946, 0, 0, 0, 0, 0, 947, 0, 0,
    0, 0, 0, 0, 948, 0, 0, 0, 0, 0, 949, 0, 0, 950, 0, 951, 952, 0, 0, 0, 953, 0, 954, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 955, 0, 0, 956, 0, 957, 0, 958, 0, 959, 0, 960, 0, 961, 0, 962, 0, 0, 963, 0, 0, 964, 0, 965, 0,
    966, 0, 967, 0, 968, 0, 969, 0, 0, 0, 970, 971, 0, 972, 0, 973, 0, 0, 0, 974, 0, 0, 0, 975, 0, 976, 0, 0, 977, 0, 0, 978,
    0, 979, 0, 0, 0, 980, 0, 981, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 982, 0,
    0, 0, 983, 984, 0, 0, 0, 0, 0, 0, 0, 0, 985, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 986, 0, 987,
};
void recomp_unit_0019_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08850000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0019[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08850000;
    case 2u: goto L_08850004;
    case 3u: goto L_0885000C;
    case 4u: goto L_08850018;
    case 5u: goto L_08850020;
    case 6u: goto L_0885002C;
    case 7u: goto L_08850034;
    case 8u: goto L_08850044;
    case 9u: goto L_0885004C;
    case 10u: goto L_08850064;
    case 11u: goto L_0885006C;
    case 12u: goto L_08850078;
    case 13u: goto L_08850080;
    case 14u: goto L_0885008C;
    case 15u: goto L_08850098;
    case 16u: goto L_088500A0;
    case 17u: goto L_088500A4;
    case 18u: goto L_088500AC;
    case 19u: goto L_088500B8;
    case 20u: goto L_088500C0;
    case 21u: goto L_088500CC;
    case 22u: goto L_088500D4;
    case 23u: goto L_088500E0;
    case 24u: goto L_088500E4;
    case 25u: goto L_088500EC;
    case 26u: goto L_088500F8;
    case 27u: goto L_08850104;
    case 28u: goto L_08850108;
    case 29u: goto L_08850110;
    case 30u: goto L_08850114;
    case 31u: goto L_08850118;
    case 32u: goto L_08850130;
    case 33u: goto L_08850138;
    case 34u: goto L_08850140;
    case 35u: goto L_08850148;
    case 36u: goto L_08850150;
    case 37u: goto L_08850170;
    case 38u: goto L_0885017C;
    case 39u: goto L_088501A0;
    case 40u: goto L_088501B8;
    case 41u: goto L_088501CC;
    case 42u: goto L_088501E4;
    case 43u: goto L_088501F8;
    case 44u: goto L_08850214;
    case 45u: goto L_08850228;
    case 46u: goto L_08850244;
    case 47u: goto L_0885024C;
    case 48u: goto L_08850254;
    case 49u: goto L_0885025C;
    case 50u: goto L_08850264;
    case 51u: goto L_0885026C;
    case 52u: goto L_08850274;
    case 53u: goto L_08850280;
    case 54u: goto L_0885028C;
    case 55u: goto L_08850294;
    case 56u: goto L_088502A0;
    case 57u: goto L_088502AC;
    case 58u: goto L_088502B4;
    case 59u: goto L_088502C0;
    case 60u: goto L_088502CC;
    case 61u: goto L_088502D4;
    case 62u: goto L_088502E0;
    case 63u: goto L_088502E8;
    case 64u: goto L_088502F4;
    case 65u: goto L_088502FC;
    case 66u: goto L_08850304;
    case 67u: goto L_08850310;
    case 68u: goto L_0885031C;
    case 69u: goto L_08850324;
    case 70u: goto L_08850330;
    case 71u: goto L_0885033C;
    case 72u: goto L_08850344;
    case 73u: goto L_08850350;
    case 74u: goto L_08850358;
    case 75u: goto L_08850364;
    case 76u: goto L_0885036C;
    case 77u: goto L_08850374;
    case 78u: goto L_0885037C;
    case 79u: goto L_08850384;
    case 80u: goto L_08850390;
    case 81u: goto L_0885039C;
    case 82u: goto L_088503A4;
    case 83u: goto L_088503B0;
    case 84u: goto L_088503B8;
    case 85u: goto L_088503C4;
    case 86u: goto L_088503CC;
    case 87u: goto L_088503D4;
    case 88u: goto L_088503E0;
    case 89u: goto L_088503E8;
    case 90u: goto L_088503F4;
    case 91u: goto L_088503F8;
    case 92u: goto L_08850400;
    case 93u: goto L_0885040C;
    case 94u: goto L_08850418;
    case 95u: goto L_08850424;
    case 96u: goto L_08850430;
    case 97u: goto L_0885043C;
    case 98u: goto L_08850440;
    case 99u: goto L_08850450;
    case 100u: goto L_08850494;
    case 101u: goto L_088504A0;
    case 102u: goto L_088504A8;
    case 103u: goto L_088504B0;
    case 104u: goto L_088504B8;
    case 105u: goto L_088504C0;
    case 106u: goto L_088504C8;
    case 107u: goto L_088504D0;
    case 108u: goto L_088504D8;
    case 109u: goto L_088504E0;
    case 110u: goto L_088504E8;
    case 111u: goto L_088504F0;
    case 112u: goto L_088504F4;
    case 113u: goto L_08850508;
    case 114u: goto L_08850514;
    case 115u: goto L_08850528;
    case 116u: goto L_08850534;
    case 117u: goto L_0885053C;
    case 118u: goto L_08850544;
    case 119u: goto L_0885054C;
    case 120u: goto L_08850554;
    case 121u: goto L_08850560;
    case 122u: goto L_08850564;
    case 123u: goto L_0885056C;
    case 124u: goto L_08850578;
    case 125u: goto L_08850580;
    case 126u: goto L_08850588;
    case 127u: goto L_08850594;
    case 128u: goto L_0885059C;
    case 129u: goto L_088505A4;
    case 130u: goto L_088505B0;
    case 131u: goto L_088505B8;
    case 132u: goto L_088505CC;
    case 133u: goto L_088505D8;
    case 134u: goto L_088505E0;
    case 135u: goto L_088505E4;
    case 136u: goto L_088505EC;
    case 137u: goto L_088505F0;
    case 138u: goto L_088505F4;
    case 139u: goto L_088505FC;
    case 140u: goto L_08850604;
    case 141u: goto L_08850610;
    case 142u: goto L_08850624;
    case 143u: goto L_08850630;
    case 144u: goto L_08850640;
    case 145u: goto L_08850654;
    case 146u: goto L_0885065C;
    case 147u: goto L_0885066C;
    case 148u: goto L_08850678;
    case 149u: goto L_08850684;
    case 150u: goto L_0885068C;
    case 151u: goto L_08850698;
    case 152u: goto L_088506A4;
    case 153u: goto L_088506B0;
    case 154u: goto L_088506B4;
    case 155u: goto L_088506CC;
    case 156u: goto L_088506D8;
    case 157u: goto L_088506E4;
    case 158u: goto L_088506F0;
    case 159u: goto L_088506F4;
    case 160u: goto L_08850710;
    case 161u: goto L_08850720;
    case 162u: goto L_0885072C;
    case 163u: goto L_08850738;
    case 164u: goto L_0885073C;
    case 165u: goto L_08850784;
    case 166u: goto L_08850788;
    case 167u: goto L_08850790;
    case 168u: goto L_08850798;
    case 169u: goto L_088507A0;
    case 170u: goto L_088507A8;
    case 171u: goto L_088507B0;
    case 172u: goto L_088507BC;
    case 173u: goto L_088507C4;
    case 174u: goto L_088507D0;
    case 175u: goto L_088507D8;
    case 176u: goto L_088507E0;
    case 177u: goto L_088507F0;
    case 178u: goto L_088507F8;
    case 179u: goto L_088507FC;
    case 180u: goto L_08850804;
    case 181u: goto L_08850814;
    case 182u: goto L_08850820;
    case 183u: goto L_0885082C;
    case 184u: goto L_08850830;
    case 185u: goto L_0885083C;
    case 186u: goto L_08850840;
    case 187u: goto L_08850874;
    case 188u: goto L_0885087C;
    case 189u: goto L_08850884;
    case 190u: goto L_0885089C;
    case 191u: goto L_088508CC;
    case 192u: goto L_088508DC;
    case 193u: goto L_088508EC;
    case 194u: goto L_088508FC;
    case 195u: goto L_0885090C;
    case 196u: goto L_0885091C;
    case 197u: goto L_0885092C;
    case 198u: goto L_08850944;
    case 199u: goto L_0885094C;
    case 200u: goto L_08850954;
    case 201u: goto L_0885095C;
    case 202u: goto L_08850964;
    case 203u: goto L_0885096C;
    case 204u: goto L_08850974;
    case 205u: goto L_0885097C;
    case 206u: goto L_08850980;
    case 207u: goto L_08850988;
    case 208u: goto L_08850990;
    case 209u: goto L_088509B4;
    case 210u: goto L_088509BC;
    case 211u: goto L_088509DC;
    case 212u: goto L_088509F0;
    case 213u: goto L_088509F8;
    case 214u: goto L_08850A18;
    case 215u: goto L_08850A2C;
    case 216u: goto L_08850A48;
    case 217u: goto L_08850A58;
    case 218u: goto L_08850A68;
    case 219u: goto L_08850A70;
    case 220u: goto L_08850A7C;
    case 221u: goto L_08850A98;
    case 222u: goto L_08850AA0;
    case 223u: goto L_08850AA8;
    case 224u: goto L_08850AB8;
    case 225u: goto L_08850AC0;
    case 226u: goto L_08850AD4;
    case 227u: goto L_08850AEC;
    case 228u: goto L_08850AF4;
    case 229u: goto L_08850B00;
    case 230u: goto L_08850B08;
    case 231u: goto L_08850B10;
    case 232u: goto L_08850B14;
    case 233u: goto L_08850B24;
    case 234u: goto L_08850B30;
    case 235u: goto L_08850B38;
    case 236u: goto L_08850B54;
    case 237u: goto L_08850B60;
    case 238u: goto L_08850B6C;
    case 239u: goto L_08850B70;
    case 240u: goto L_08850B94;
    case 241u: goto L_08850B9C;
    case 242u: goto L_08850BA4;
    case 243u: goto L_08850BB4;
    case 244u: goto L_08850BBC;
    case 245u: goto L_08850BCC;
    case 246u: goto L_08850BD4;
    case 247u: goto L_08850BD8;
    case 248u: goto L_08850BE4;
    case 249u: goto L_08850BEC;
    case 250u: goto L_08850BF4;
    case 251u: goto L_08850C00;
    case 252u: goto L_08850C08;
    case 253u: goto L_08850C18;
    case 254u: goto L_08850C30;
    case 255u: goto L_08850C50;
    case 256u: goto L_08850C54;
    case 257u: goto L_08850C5C;
    case 258u: goto L_08850C70;
    case 259u: goto L_08850C78;
    case 260u: goto L_08850C9C;
    case 261u: goto L_08850CA4;
    case 262u: goto L_08850CB8;
    case 263u: goto L_08850CC0;
    case 264u: goto L_08850CD0;
    case 265u: goto L_08850CD8;
    case 266u: goto L_08850CE8;
    case 267u: goto L_08850D0C;
    case 268u: goto L_08850D14;
    case 269u: goto L_08850D20;
    case 270u: goto L_08850D28;
    case 271u: goto L_08850D38;
    case 272u: goto L_08850D50;
    case 273u: goto L_08850D70;
    case 274u: goto L_08850D74;
    case 275u: goto L_08850D88;
    case 276u: goto L_08850DB0;
    case 277u: goto L_08850DB8;
    case 278u: goto L_08850DD0;
    case 279u: goto L_08850DDC;
    case 280u: goto L_08850DE4;
    case 281u: goto L_08850DF4;
    case 282u: goto L_08850E0C;
    case 283u: goto L_08850E2C;
    case 284u: goto L_08850E30;
    case 285u: goto L_08850E44;
    case 286u: goto L_08850E78;
    case 287u: goto L_08850E98;
    case 288u: goto L_08850EB8;
    case 289u: goto L_08850EBC;
    case 290u: goto L_08850EC4;
    case 291u: goto L_08850ED8;
    case 292u: goto L_08850EE0;
    case 293u: goto L_08850EE8;
    case 294u: goto L_08850EF0;
    case 295u: goto L_08850EF8;
    case 296u: goto L_08850F00;
    case 297u: goto L_08850F08;
    case 298u: goto L_08850F10;
    case 299u: goto L_08850F1C;
    case 300u: goto L_08850F28;
    case 301u: goto L_08850F38;
    case 302u: goto L_08850F4C;
    case 303u: goto L_08850F68;
    case 304u: goto L_08850F74;
    case 305u: goto L_08850F80;
    case 306u: goto L_08850F8C;
    case 307u: goto L_08850F98;
    case 308u: goto L_08850FA4;
    case 309u: goto L_08850FB0;
    case 310u: goto L_08850FBC;
    case 311u: goto L_08850FD8;
    case 312u: goto L_08850FEC;
    case 313u: goto L_08851000;
    case 314u: goto L_08851014;
    case 315u: goto L_08851028;
    case 316u: goto L_0885103C;
    case 317u: goto L_08851050;
    case 318u: goto L_0885106C;
    case 319u: goto L_08851074;
    case 320u: goto L_08851080;
    case 321u: goto L_08851088;
    case 322u: goto L_0885108C;
    case 323u: goto L_088510A0;
    case 324u: goto L_088510AC;
    case 325u: goto L_088510D0;
    case 326u: goto L_088510D8;
    case 327u: goto L_088510E4;
    case 328u: goto L_088510F0;
    case 329u: goto L_08851100;
    case 330u: goto L_08851110;
    case 331u: goto L_0885111C;
    case 332u: goto L_08851128;
    case 333u: goto L_08851134;
    case 334u: goto L_08851140;
    case 335u: goto L_0885114C;
    case 336u: goto L_08851158;
    case 337u: goto L_08851164;
    case 338u: goto L_0885117C;
    case 339u: goto L_08851194;
    case 340u: goto L_088511AC;
    case 341u: goto L_088511B8;
    case 342u: goto L_088511C0;
    case 343u: goto L_088511C4;
    case 344u: goto L_088511E0;
    case 345u: goto L_08851218;
    case 346u: goto L_08851220;
    case 347u: goto L_0885122C;
    case 348u: goto L_08851234;
    case 349u: goto L_08851240;
    case 350u: goto L_08851248;
    case 351u: goto L_0885125C;
    case 352u: goto L_08851264;
    case 353u: goto L_08851270;
    case 354u: goto L_08851280;
    case 355u: goto L_08851288;
    case 356u: goto L_08851294;
    case 357u: goto L_0885129C;
    case 358u: goto L_088512A8;
    case 359u: goto L_088512B4;
    case 360u: goto L_088512BC;
    case 361u: goto L_088512C8;
    case 362u: goto L_088512D0;
    case 363u: goto L_088512DC;
    case 364u: goto L_088512E8;
    case 365u: goto L_088512F0;
    case 366u: goto L_088512FC;
    case 367u: goto L_08851304;
    case 368u: goto L_08851310;
    case 369u: goto L_0885131C;
    case 370u: goto L_08851324;
    case 371u: goto L_08851330;
    case 372u: goto L_08851338;
    case 373u: goto L_08851344;
    case 374u: goto L_08851350;
    case 375u: goto L_08851358;
    case 376u: goto L_08851364;
    case 377u: goto L_0885136C;
    case 378u: goto L_08851378;
    case 379u: goto L_08851384;
    case 380u: goto L_0885138C;
    case 381u: goto L_08851398;
    case 382u: goto L_088513A0;
    case 383u: goto L_088513AC;
    case 384u: goto L_088513B8;
    case 385u: goto L_088513C0;
    case 386u: goto L_088513CC;
    case 387u: goto L_088513D4;
    case 388u: goto L_088513E0;
    case 389u: goto L_088513EC;
    case 390u: goto L_088513F4;
    case 391u: goto L_088513FC;
    case 392u: goto L_08851408;
    case 393u: goto L_08851410;
    case 394u: goto L_08851420;
    case 395u: goto L_08851428;
    case 396u: goto L_08851434;
    case 397u: goto L_0885143C;
    case 398u: goto L_08851444;
    case 399u: goto L_08851450;
    case 400u: goto L_08851458;
    case 401u: goto L_08851468;
    case 402u: goto L_08851470;
    case 403u: goto L_0885147C;
    case 404u: goto L_088514B0;
    case 405u: goto L_088514D8;
    case 406u: goto L_088514E0;
    case 407u: goto L_088514E8;
    case 408u: goto L_088514F8;
    case 409u: goto L_08851504;
    case 410u: goto L_0885150C;
    case 411u: goto L_08851514;
    case 412u: goto L_0885151C;
    case 413u: goto L_08851524;
    case 414u: goto L_0885152C;
    case 415u: goto L_08851540;
    case 416u: goto L_0885154C;
    case 417u: goto L_08851560;
    case 418u: goto L_08851574;
    case 419u: goto L_08851580;
    case 420u: goto L_08851594;
    case 421u: goto L_088515C8;
    case 422u: goto L_088515D0;
    case 423u: goto L_088515DC;
    case 424u: goto L_088515E4;
    case 425u: goto L_088515FC;
    case 426u: goto L_08851604;
    case 427u: goto L_08851614;
    case 428u: goto L_0885161C;
    case 429u: goto L_08851628;
    case 430u: goto L_0885163C;
    case 431u: goto L_08851644;
    case 432u: goto L_08851654;
    case 433u: goto L_08851668;
    case 434u: goto L_0885168C;
    case 435u: goto L_088516AC;
    case 436u: goto L_088516B4;
    case 437u: goto L_088516BC;
    case 438u: goto L_088516D4;
    case 439u: goto L_088516DC;
    case 440u: goto L_088516E8;
    case 441u: goto L_088516F8;
    case 442u: goto L_0885171C;
    case 443u: goto L_0885172C;
    case 444u: goto L_08851734;
    case 445u: goto L_08851760;
    case 446u: goto L_0885176C;
    case 447u: goto L_08851778;
    case 448u: goto L_08851790;
    case 449u: goto L_08851798;
    case 450u: goto L_088517B8;
    case 451u: goto L_088517BC;
    case 452u: goto L_088517CC;
    case 453u: goto L_088517E0;
    case 454u: goto L_088517F4;
    case 455u: goto L_088517F8;
    case 456u: goto L_08851808;
    case 457u: goto L_08851814;
    case 458u: goto L_08851828;
    case 459u: goto L_0885183C;
    case 460u: goto L_08851840;
    case 461u: goto L_0885184C;
    case 462u: goto L_0885186C;
    case 463u: goto L_08851894;
    case 464u: goto L_088518A0;
    case 465u: goto L_088518BC;
    case 466u: goto L_088518C8;
    case 467u: goto L_088518D0;
    case 468u: goto L_088518DC;
    case 469u: goto L_088518E4;
    case 470u: goto L_088518F0;
    case 471u: goto L_088518F8;
    case 472u: goto L_08851904;
    case 473u: goto L_0885190C;
    case 474u: goto L_08851918;
    case 475u: goto L_08851920;
    case 476u: goto L_0885192C;
    case 477u: goto L_08851934;
    case 478u: goto L_08851940;
    case 479u: goto L_08851948;
    case 480u: goto L_08851954;
    case 481u: goto L_0885195C;
    case 482u: goto L_08851968;
    case 483u: goto L_0885196C;
    case 484u: goto L_08851974;
    case 485u: goto L_08851980;
    case 486u: goto L_0885198C;
    case 487u: goto L_08851994;
    case 488u: goto L_088519A0;
    case 489u: goto L_088519A4;
    case 490u: goto L_088519AC;
    case 491u: goto L_088519C4;
    case 492u: goto L_088519EC;
    case 493u: goto L_088519F8;
    case 494u: goto L_08851A14;
    case 495u: goto L_08851A20;
    case 496u: goto L_08851A28;
    case 497u: goto L_08851A34;
    case 498u: goto L_08851A3C;
    case 499u: goto L_08851A48;
    case 500u: goto L_08851A50;
    case 501u: goto L_08851A5C;
    case 502u: goto L_08851A64;
    case 503u: goto L_08851A70;
    case 504u: goto L_08851A78;
    case 505u: goto L_08851A84;
    case 506u: goto L_08851A8C;
    case 507u: goto L_08851A98;
    case 508u: goto L_08851AA0;
    case 509u: goto L_08851AAC;
    case 510u: goto L_08851AB4;
    case 511u: goto L_08851AC0;
    case 512u: goto L_08851AC4;
    case 513u: goto L_08851ACC;
    case 514u: goto L_08851AD8;
    case 515u: goto L_08851AE4;
    case 516u: goto L_08851AEC;
    case 517u: goto L_08851AF8;
    case 518u: goto L_08851AFC;
    case 519u: goto L_08851B04;
    case 520u: goto L_08851B1C;
    case 521u: goto L_08851B24;
    case 522u: goto L_08851B3C;
    case 523u: goto L_08851B54;
    case 524u: goto L_08851B78;
    case 525u: goto L_08851B98;
    case 526u: goto L_08851CC8;
    case 527u: goto L_08851CD8;
    case 528u: goto L_08851D2C;
    case 529u: goto L_08851D3C;
    case 530u: goto L_08851D44;
    case 531u: goto L_08851D4C;
    case 532u: goto L_08851D60;
    case 533u: goto L_08851DD4;
    case 534u: goto L_08851DF4;
    case 535u: goto L_08851DFC;
    case 536u: goto L_08851E08;
    case 537u: goto L_08851E1C;
    case 538u: goto L_08851E24;
    case 539u: goto L_08851E3C;
    case 540u: goto L_08851E44;
    case 541u: goto L_08851E58;
    case 542u: goto L_08851E60;
    case 543u: goto L_08851E74;
    case 544u: goto L_08851E78;
    case 545u: goto L_08851E80;
    case 546u: goto L_08851E88;
    case 547u: goto L_08851EB8;
    case 548u: goto L_08851ECC;
    case 549u: goto L_08851EEC;
    case 550u: goto L_08851F00;
    case 551u: goto L_08851F14;
    case 552u: goto L_08851F50;
    case 553u: goto L_08851F5C;
    case 554u: goto L_08851F6C;
    case 555u: goto L_08851F80;
    case 556u: goto L_08851F98;
    case 557u: goto L_08851FA4;
    case 558u: goto L_08851FAC;
    case 559u: goto L_08851FC0;
    case 560u: goto L_08851FC4;
    case 561u: goto L_08851FCC;
    case 562u: goto L_08851FD4;
    case 563u: goto L_08852004;
    case 564u: goto L_08852018;
    case 565u: goto L_08852038;
    case 566u: goto L_0885204C;
    case 567u: goto L_08852060;
    case 568u: goto L_08852084;
    case 569u: goto L_08852098;
    case 570u: goto L_088520AC;
    case 571u: goto L_088520C0;
    case 572u: goto L_088520D4;
    case 573u: goto L_088520D8;
    case 574u: goto L_088520E0;
    case 575u: goto L_088520F4;
    case 576u: goto L_088520F8;
    case 577u: goto L_08852100;
    case 578u: goto L_0885211C;
    case 579u: goto L_08852130;
    case 580u: goto L_08852134;
    case 581u: goto L_0885213C;
    case 582u: goto L_08852140;
    case 583u: goto L_08852148;
    case 584u: goto L_08852168;
    case 585u: goto L_088521F8;
    case 586u: goto L_088521FC;
    case 587u: goto L_08852204;
    case 588u: goto L_08852224;
    case 589u: goto L_08852244;
    case 590u: goto L_08852268;
    case 591u: goto L_088522A8;
    case 592u: goto L_088522BC;
    case 593u: goto L_088522D0;
    case 594u: goto L_088522E4;
    case 595u: goto L_088522F8;
    case 596u: goto L_088522FC;
    case 597u: goto L_08852304;
    case 598u: goto L_08852318;
    case 599u: goto L_0885231C;
    case 600u: goto L_08852324;
    case 601u: goto L_08852340;
    case 602u: goto L_08852354;
    case 603u: goto L_08852358;
    case 604u: goto L_08852360;
    case 605u: goto L_08852364;
    case 606u: goto L_0885236C;
    case 607u: goto L_0885238C;
    case 608u: goto L_088523BC;
    case 609u: goto L_088523C0;
    case 610u: goto L_088523C8;
    case 611u: goto L_088523E8;
    case 612u: goto L_088523FC;
    case 613u: goto L_08852408;
    case 614u: goto L_0885241C;
    case 615u: goto L_08852424;
    case 616u: goto L_08852434;
    case 617u: goto L_08852464;
    case 618u: goto L_08852494;
    case 619u: goto L_088524A8;
    case 620u: goto L_088524BC;
    case 621u: goto L_088524D0;
    case 622u: goto L_088524E4;
    case 623u: goto L_088524E8;
    case 624u: goto L_088524F0;
    case 625u: goto L_08852504;
    case 626u: goto L_08852508;
    case 627u: goto L_08852510;
    case 628u: goto L_0885252C;
    case 629u: goto L_08852540;
    case 630u: goto L_08852544;
    case 631u: goto L_0885254C;
    case 632u: goto L_08852550;
    case 633u: goto L_08852558;
    case 634u: goto L_08852578;
    case 635u: goto L_088525A8;
    case 636u: goto L_088525AC;
    case 637u: goto L_088525B4;
    case 638u: goto L_088525D4;
    case 639u: goto L_088525E8;
    case 640u: goto L_088525F4;
    case 641u: goto L_0885260C;
    case 642u: goto L_08852614;
    case 643u: goto L_08852628;
    case 644u: goto L_08852634;
    case 645u: goto L_0885263C;
    case 646u: goto L_08852658;
    case 647u: goto L_08852664;
    case 648u: goto L_0885266C;
    case 649u: goto L_08852690;
    case 650u: goto L_088526A4;
    case 651u: goto L_088526C4;
    case 652u: goto L_088526E4;
    case 653u: goto L_0885272C;
    case 654u: goto L_0885274C;
    case 655u: goto L_08852754;
    case 656u: goto L_08852764;
    case 657u: goto L_0885276C;
    case 658u: goto L_08852780;
    case 659u: goto L_088527A4;
    case 660u: goto L_088527C4;
    case 661u: goto L_08852800;
    case 662u: goto L_0885281C;
    case 663u: goto L_08852834;
    case 664u: goto L_0885284C;
    case 665u: goto L_08852858;
    case 666u: goto L_08852860;
    case 667u: goto L_08852864;
    case 668u: goto L_08852878;
    case 669u: goto L_08852880;
    case 670u: goto L_088528B8;
    case 671u: goto L_088528C0;
    case 672u: goto L_088528D0;
    case 673u: goto L_088528D8;
    case 674u: goto L_088528E4;
    case 675u: goto L_08852904;
    case 676u: goto L_08852920;
    case 677u: goto L_08852930;
    case 678u: goto L_0885295C;
    case 679u: goto L_0885299C;
    case 680u: goto L_088529A4;
    case 681u: goto L_088529AC;
    case 682u: goto L_088529B4;
    case 683u: goto L_088529BC;
    case 684u: goto L_088529C8;
    case 685u: goto L_088529DC;
    case 686u: goto L_088529E8;
    case 687u: goto L_088529F0;
    case 688u: goto L_08852A04;
    case 689u: goto L_08852A10;
    case 690u: goto L_08852A1C;
    case 691u: goto L_08852A24;
    case 692u: goto L_08852A30;
    case 693u: goto L_08852A38;
    case 694u: goto L_08852A40;
    case 695u: goto L_08852A50;
    case 696u: goto L_08852A60;
    case 697u: goto L_08852A70;
    case 698u: goto L_08852A74;
    case 699u: goto L_08852A80;
    case 700u: goto L_08852A8C;
    case 701u: goto L_08852A94;
    case 702u: goto L_08852AA4;
    case 703u: goto L_08852AAC;
    case 704u: goto L_08852AB0;
    case 705u: goto L_08852AC4;
    case 706u: goto L_08852AF8;
    case 707u: goto L_08852B00;
    case 708u: goto L_08852B08;
    case 709u: goto L_08852B14;
    case 710u: goto L_08852B44;
    case 711u: goto L_08852C0C;
    case 712u: goto L_08852C2C;
    case 713u: goto L_08852C38;
    case 714u: goto L_08852C40;
    case 715u: goto L_08852C4C;
    case 716u: goto L_08852C68;
    case 717u: goto L_08852C70;
    case 718u: goto L_08852C80;
    case 719u: goto L_08852C88;
    case 720u: goto L_08852C94;
    case 721u: goto L_08852CB4;
    case 722u: goto L_08852CD0;
    case 723u: goto L_08852CD8;
    case 724u: goto L_08852CE8;
    case 725u: goto L_08852CFC;
    case 726u: goto L_08852D04;
    case 727u: goto L_08852D0C;
    case 728u: goto L_08852D14;
    case 729u: goto L_08852D1C;
    case 730u: goto L_08852D3C;
    case 731u: goto L_08852D48;
    case 732u: goto L_08852D50;
    case 733u: goto L_08852D58;
    case 734u: goto L_08852D60;
    case 735u: goto L_08852D84;
    case 736u: goto L_08852D94;
    case 737u: goto L_08852DC8;
    case 738u: goto L_08852DD0;
    case 739u: goto L_08852DE0;
    case 740u: goto L_08852DFC;
    case 741u: goto L_08852E0C;
    case 742u: goto L_08852E74;
    case 743u: goto L_08852E98;
    case 744u: goto L_08852EA4;
    case 745u: goto L_08852F40;
    case 746u: goto L_08852F7C;
    case 747u: goto L_08852F84;
    case 748u: goto L_08852FA0;
    case 749u: goto L_08852FB4;
    case 750u: goto L_08852FC0;
    case 751u: goto L_08852FD0;
    case 752u: goto L_08852FD8;
    case 753u: goto L_08852FE0;
    case 754u: goto L_08852FE8;
    case 755u: goto L_08852FF8;
    case 756u: goto L_08853000;
    case 757u: goto L_08853010;
    case 758u: goto L_08853014;
    case 759u: goto L_0885303C;
    case 760u: goto L_08853044;
    case 761u: goto L_08853060;
    case 762u: goto L_0885306C;
    case 763u: goto L_08853078;
    case 764u: goto L_08853094;
    case 765u: goto L_088530A8;
    case 766u: goto L_088530B0;
    case 767u: goto L_088530B8;
    case 768u: goto L_088530C0;
    case 769u: goto L_088530C4;
    case 770u: goto L_088530D0;
    case 771u: goto L_088530E8;
    case 772u: goto L_088530F0;
    case 773u: goto L_088530FC;
    case 774u: goto L_08853100;
    case 775u: goto L_0885310C;
    case 776u: goto L_0885311C;
    case 777u: goto L_08853128;
    case 778u: goto L_08853140;
    case 779u: goto L_08853148;
    case 780u: goto L_08853154;
    case 781u: goto L_0885315C;
    case 782u: goto L_08853170;
    case 783u: goto L_08853188;
    case 784u: goto L_08853190;
    case 785u: goto L_08853198;
    case 786u: goto L_088531A0;
    case 787u: goto L_088531A8;
    case 788u: goto L_088531BC;
    case 789u: goto L_088531F4;
    case 790u: goto L_088531FC;
    case 791u: goto L_0885320C;
    case 792u: goto L_08853228;
    case 793u: goto L_08853230;
    case 794u: goto L_08853248;
    case 795u: goto L_08853250;
    case 796u: goto L_08853258;
    case 797u: goto L_0885325C;
    case 798u: goto L_08853268;
    case 799u: goto L_08853270;
    case 800u: goto L_08853280;
    case 801u: goto L_0885328C;
    case 802u: goto L_0885329C;
    case 803u: goto L_088532A4;
    case 804u: goto L_088532AC;
    case 805u: goto L_088532B4;
    case 806u: goto L_088532BC;
    case 807u: goto L_088532C4;
    case 808u: goto L_088532D4;
    case 809u: goto L_088532E0;
    case 810u: goto L_088532E8;
    case 811u: goto L_088532F0;
    case 812u: goto L_088532F8;
    case 813u: goto L_08853308;
    case 814u: goto L_08853310;
    case 815u: goto L_08853318;
    case 816u: goto L_08853320;
    case 817u: goto L_08853358;
    case 818u: goto L_08853360;
    case 819u: goto L_08853370;
    case 820u: goto L_0885337C;
    case 821u: goto L_08853384;
    case 822u: goto L_0885338C;
    case 823u: goto L_0885339C;
    case 824u: goto L_088533AC;
    case 825u: goto L_088533BC;
    case 826u: goto L_08853400;
    case 827u: goto L_08853428;
    case 828u: goto L_08853434;
    case 829u: goto L_08853474;
    case 830u: goto L_08853490;
    case 831u: goto L_088534A4;
    case 832u: goto L_088534B4;
    case 833u: goto L_088534C8;
    case 834u: goto L_088534D0;
    case 835u: goto L_088534DC;
    case 836u: goto L_088534E4;
    case 837u: goto L_088534EC;
    case 838u: goto L_088534FC;
    case 839u: goto L_08853504;
    case 840u: goto L_08853514;
    case 841u: goto L_08853520;
    case 842u: goto L_08853524;
    case 843u: goto L_08853544;
    case 844u: goto L_0885358C;
    case 845u: goto L_08853594;
    case 846u: goto L_088535A4;
    case 847u: goto L_088535B0;
    case 848u: goto L_088535B8;
    case 849u: goto L_088535C0;
    case 850u: goto L_088535C8;
    case 851u: goto L_088535E0;
    case 852u: goto L_088535E8;
    case 853u: goto L_088535F0;
    case 854u: goto L_088535F4;
    case 855u: goto L_08853610;
    case 856u: goto L_08853620;
    case 857u: goto L_08853640;
    case 858u: goto L_08853648;
    case 859u: goto L_08853658;
    case 860u: goto L_08853660;
    case 861u: goto L_08853668;
    case 862u: goto L_0885367C;
    case 863u: goto L_088536B4;
    case 864u: goto L_088536D0;
    case 865u: goto L_088536DC;
    case 866u: goto L_08853704;
    case 867u: goto L_08853710;
    case 868u: goto L_08853714;
    case 869u: goto L_08853738;
    case 870u: goto L_0885373C;
    case 871u: goto L_0885375C;
    case 872u: goto L_08853764;
    case 873u: goto L_0885376C;
    case 874u: goto L_08853774;
    case 875u: goto L_08853778;
    case 876u: goto L_088537A8;
    case 877u: goto L_088537EC;
    case 878u: goto L_08853814;
    case 879u: goto L_08853820;
    case 880u: goto L_08853828;
    case 881u: goto L_08853830;
    case 882u: goto L_08853840;
    case 883u: goto L_08853848;
    case 884u: goto L_08853850;
    case 885u: goto L_0885385C;
    case 886u: goto L_08853860;
    case 887u: goto L_0885386C;
    case 888u: goto L_08853874;
    case 889u: goto L_0885387C;
    case 890u: goto L_08853898;
    case 891u: goto L_088538C4;
    case 892u: goto L_08853918;
    case 893u: goto L_08853920;
    case 894u: goto L_0885392C;
    case 895u: goto L_08853938;
    case 896u: goto L_08853954;
    case 897u: goto L_0885395C;
    case 898u: goto L_0885397C;
    case 899u: goto L_08853994;
    case 900u: goto L_0885399C;
    case 901u: goto L_088539B8;
    case 902u: goto L_088539C4;
    case 903u: goto L_088539C8;
    case 904u: goto L_08853A00;
    case 905u: goto L_08853A08;
    case 906u: goto L_08853A28;
    case 907u: goto L_08853A38;
    case 908u: goto L_08853A3C;
    case 909u: goto L_08853A68;
    case 910u: goto L_08853AA4;
    case 911u: goto L_08853AB4;
    case 912u: goto L_08853AC0;
    case 913u: goto L_08853AC4;
    case 914u: goto L_08853AD4;
    case 915u: goto L_08853ADC;
    case 916u: goto L_08853AE4;
    case 917u: goto L_08853AF4;
    case 918u: goto L_08853AFC;
    case 919u: goto L_08853B04;
    case 920u: goto L_08853B10;
    case 921u: goto L_08853B14;
    case 922u: goto L_08853B18;
    case 923u: goto L_08853B2C;
    case 924u: goto L_08853B4C;
    case 925u: goto L_08853B54;
    case 926u: goto L_08853B80;
    case 927u: goto L_08853B88;
    case 928u: goto L_08853BA0;
    case 929u: goto L_08853BB8;
    case 930u: goto L_08853BC0;
    case 931u: goto L_08853BD4;
    case 932u: goto L_08853BE0;
    case 933u: goto L_08853BE4;
    case 934u: goto L_08853BF0;
    case 935u: goto L_08853BF4;
    case 936u: goto L_08853C20;
    case 937u: goto L_08853C50;
    case 938u: goto L_08853C80;
    case 939u: goto L_08853C84;
    case 940u: goto L_08853C8C;
    case 941u: goto L_08853CC4;
    case 942u: goto L_08853CE4;
    case 943u: goto L_08853CFC;
    case 944u: goto L_08853D14;
    case 945u: goto L_08853D2C;
    case 946u: goto L_08853D5C;
    case 947u: goto L_08853D74;
    case 948u: goto L_08853D90;
    case 949u: goto L_08853DA8;
    case 950u: goto L_08853DB4;
    case 951u: goto L_08853DBC;
    case 952u: goto L_08853DC0;
    case 953u: goto L_08853DD0;
    case 954u: goto L_08853DD8;
    case 955u: goto L_08853E1C;
    case 956u: goto L_08853E28;
    case 957u: goto L_08853E30;
    case 958u: goto L_08853E38;
    case 959u: goto L_08853E40;
    case 960u: goto L_08853E48;
    case 961u: goto L_08853E50;
    case 962u: goto L_08853E58;
    case 963u: goto L_08853E64;
    case 964u: goto L_08853E70;
    case 965u: goto L_08853E78;
    case 966u: goto L_08853E80;
    case 967u: goto L_08853E88;
    case 968u: goto L_08853E90;
    case 969u: goto L_08853E98;
    case 970u: goto L_08853EA8;
    case 971u: goto L_08853EAC;
    case 972u: goto L_08853EB4;
    case 973u: goto L_08853EBC;
    case 974u: goto L_08853ECC;
    case 975u: goto L_08853EDC;
    case 976u: goto L_08853EE4;
    case 977u: goto L_08853EF0;
    case 978u: goto L_08853EFC;
    case 979u: goto L_08853F04;
    case 980u: goto L_08853F14;
    case 981u: goto L_08853F1C;
    case 982u: goto L_08853F78;
    case 983u: goto L_08853F88;
    case 984u: goto L_08853F8C;
    case 985u: goto L_08853FB0;
    case 986u: goto L_08853FEC;
    case 987u: goto L_08853FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08850000:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_08850004;
L_08850004:
    ctx.set_gpr(31, 0x0885000Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 937u, 0x0884F200u>(ctx, &aot_mem) && ctx.pc == 0x0885000Cu) goto L_0885000C;
    return;
L_0885000C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08850018u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x08850018u) goto L_08850018;
    return;
L_08850018:
    ctx.set_gpr(31, 0x08850020u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 319u, 0x0884D16Cu>(ctx, &aot_mem) && ctx.pc == 0x08850020u) goto L_08850020;
    return;
L_08850020:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0885002Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0885002Cu) goto L_0885002C;
    return;
L_0885002C:
    ctx.set_gpr(31, 0x08850034u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 937u, 0x0884F200u>(ctx, &aot_mem) && ctx.pc == 0x08850034u) goto L_08850034;
    return;
L_08850034:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(31, 0x08850044u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 935u, 0x0884F1E8u>(ctx, &aot_mem) && ctx.pc == 0x08850044u) goto L_08850044;
    return;
L_08850044:
    ctx.set_gpr(31, 0x0885004Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 937u, 0x0884F200u>(ctx, &aot_mem) && ctx.pc == 0x0885004Cu) goto L_0885004C;
    return;
L_0885004C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(2, 0u - ctx.gpr[16]);
    ctx.set_gpr(6, 0u - ctx.gpr[17]);
    ctx.set_gpr(31, 0x08850064u);
    ctx.set_gpr(7, ctx.gpr[2] - ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 934u, 0x0884F1D8u>(ctx, &aot_mem) && ctx.pc == 0x08850064u) goto L_08850064;
    return;
L_08850064:
    ctx.set_gpr(31, 0x0885006Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 325u, 0x0884D1B8u>(ctx, &aot_mem) && ctx.pc == 0x0885006Cu) goto L_0885006C;
    return;
L_0885006C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08850078u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 950u, 0x0884F2A8u>(ctx, &aot_mem) && ctx.pc == 0x08850078u) goto L_08850078;
    return;
L_08850078:
    ctx.set_gpr(31, 0x08850080u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x08850080u) goto L_08850080;
    return;
L_08850080:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885008Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 933u, 0x0884F1D0u>(ctx, &aot_mem) && ctx.pc == 0x0885008Cu) goto L_0885008C;
    return;
L_0885008C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08850098u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x08850098u) goto L_08850098;
    return;
L_08850098:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088500E0;
      }
      goto L_088500A0;
    }
L_088500A0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_088500A4;
L_088500A4:
    ctx.set_gpr(31, 0x088500ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 325u, 0x0884D1B8u>(ctx, &aot_mem) && ctx.pc == 0x088500ACu) goto L_088500AC;
    return;
L_088500AC:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x088500B8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 950u, 0x0884F2A8u>(ctx, &aot_mem) && ctx.pc == 0x088500B8u) goto L_088500B8;
    return;
L_088500B8:
    ctx.set_gpr(31, 0x088500C0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x088500C0u) goto L_088500C0;
    return;
L_088500C0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088500CCu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x088500CCu) goto L_088500CC;
    return;
L_088500CC:
    ctx.set_gpr(31, 0x088500D4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 319u, 0x0884D16Cu>(ctx, &aot_mem) && ctx.pc == 0x088500D4u) goto L_088500D4;
    return;
L_088500D4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088500E0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x088500E0u) goto L_088500E0;
    return;
L_088500E0:
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_088500E4;
L_088500E4:
    if (ctx.gpr[1] != 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
        goto L_08850114;
    }
    goto L_088500EC;
L_088500EC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), 0u);
        goto L_08850108;
    }
    goto L_088500F8;
L_088500F8:
    ctx.set_gpr(1, ctx.gpr[17] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08850110;
      }
      goto L_08850104;
    }
L_08850104:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), 0u);
    goto L_08850108;
L_08850108:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), 0u);
      if (branch_taken) {
          goto L_08850118;
      }
      goto L_08850110;
    }
L_08850110:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    goto L_08850114;
L_08850114:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    goto L_08850118;
L_08850118:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08850130u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x08850130u) goto L_08850130;
    return;
L_08850130:
    ctx.set_gpr(31, 0x08850138u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 560u, 0x0884A250u>(ctx, &aot_mem) && ctx.pc == 0x08850138u) goto L_08850138;
    return;
L_08850138:
    ctx.set_gpr(31, 0x08850140u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08850140u) goto L_08850140;
    return;
L_08850140:
    ctx.set_gpr(31, 0x08850148u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 318u, 0x0884D15Cu>(ctx, &aot_mem) && ctx.pc == 0x08850148u) goto L_08850148;
    return;
L_08850148:
    ctx.set_gpr(31, 0x08850150u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 318u, 0x0884D15Cu>(ctx, &aot_mem) && ctx.pc == 0x08850150u) goto L_08850150;
    return;
L_08850150:
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08850170u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 316u, 0x0884D128u>(ctx, &aot_mem) && ctx.pc == 0x08850170u) goto L_08850170;
    return;
L_08850170:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x0885017Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 751u, 0x0884E910u>(ctx, &aot_mem) && ctx.pc == 0x0885017Cu) goto L_0885017C;
    return;
L_0885017C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088501A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088501B8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088501B8u) goto L_088501B8;
    return;
L_088501B8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088501CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088501E4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088501E4u) goto L_088501E4;
    return;
L_088501E4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088501F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08850214u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 270u, 0x0883D560u>(ctx, &aot_mem) && ctx.pc == 0x08850214u) goto L_08850214;
    return;
L_08850214:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850228:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08850244u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08850244u) goto L_08850244;
    return;
L_08850244:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08850440;
    }
    goto L_0885024C;
L_0885024C:
    ctx.set_gpr(31, 0x08850254u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 936u, 0x0884F1F8u>(ctx, &aot_mem) && ctx.pc == 0x08850254u) goto L_08850254;
    return;
L_08850254:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
        goto L_0885036C;
    }
    goto L_0885025C;
L_0885025C:
    ctx.set_gpr(31, 0x08850264u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 933u, 0x0884F1D0u>(ctx, &aot_mem) && ctx.pc == 0x08850264u) goto L_08850264;
    return;
L_08850264:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
        goto L_088502FC;
    }
    goto L_0885026C;
L_0885026C:
    ctx.set_gpr(31, 0x08850274u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x08850274u) goto L_08850274;
    return;
L_08850274:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08850280u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 933u, 0x0884F1D0u>(ctx, &aot_mem) && ctx.pc == 0x08850280u) goto L_08850280;
    return;
L_08850280:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885028Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x0885028Cu) goto L_0885028C;
    return;
L_0885028C:
    ctx.set_gpr(31, 0x08850294u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 937u, 0x0884F200u>(ctx, &aot_mem) && ctx.pc == 0x08850294u) goto L_08850294;
    return;
L_08850294:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088502A0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 936u, 0x0884F1F8u>(ctx, &aot_mem) && ctx.pc == 0x088502A0u) goto L_088502A0;
    return;
L_088502A0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088502ACu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x088502ACu) goto L_088502AC;
    return;
L_088502AC:
    ctx.set_gpr(31, 0x088502B4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 944u, 0x0884F258u>(ctx, &aot_mem) && ctx.pc == 0x088502B4u) goto L_088502B4;
    return;
L_088502B4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088502C0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088502C0u) goto L_088502C0;
    return;
L_088502C0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088502CCu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x088502CCu) goto L_088502CC;
    return;
L_088502CC:
    ctx.set_gpr(31, 0x088502D4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x088502D4u) goto L_088502D4;
    return;
L_088502D4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088502E0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x088502E0u) goto L_088502E0;
    return;
L_088502E0:
    ctx.set_gpr(31, 0x088502E8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 319u, 0x0884D16Cu>(ctx, &aot_mem) && ctx.pc == 0x088502E8u) goto L_088502E8;
    return;
L_088502E8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088502F4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x088502F4u) goto L_088502F4;
    return;
L_088502F4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_088503F8;
      }
      goto L_088502FC;
    }
L_088502FC:
    ctx.set_gpr(31, 0x08850304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x08850304u) goto L_08850304;
    return;
L_08850304:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08850310u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 936u, 0x0884F1F8u>(ctx, &aot_mem) && ctx.pc == 0x08850310u) goto L_08850310;
    return;
L_08850310:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885031Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x0885031Cu) goto L_0885031C;
    return;
L_0885031C:
    ctx.set_gpr(31, 0x08850324u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 944u, 0x0884F258u>(ctx, &aot_mem) && ctx.pc == 0x08850324u) goto L_08850324;
    return;
L_08850324:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08850330u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08850330u) goto L_08850330;
    return;
L_08850330:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885033Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x0885033Cu) goto L_0885033C;
    return;
L_0885033C:
    ctx.set_gpr(31, 0x08850344u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x08850344u) goto L_08850344;
    return;
L_08850344:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08850350u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x08850350u) goto L_08850350;
    return;
L_08850350:
    ctx.set_gpr(31, 0x08850358u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 319u, 0x0884D16Cu>(ctx, &aot_mem) && ctx.pc == 0x08850358u) goto L_08850358;
    return;
L_08850358:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08850364u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x08850364u) goto L_08850364;
    return;
L_08850364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088503F4;
      }
      goto L_0885036C;
    }
L_0885036C:
    ctx.set_gpr(31, 0x08850374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 933u, 0x0884F1D0u>(ctx, &aot_mem) && ctx.pc == 0x08850374u) goto L_08850374;
    return;
L_08850374:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
        goto L_088503CC;
    }
    goto L_0885037C;
L_0885037C:
    ctx.set_gpr(31, 0x08850384u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x08850384u) goto L_08850384;
    return;
L_08850384:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08850390u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 933u, 0x0884F1D0u>(ctx, &aot_mem) && ctx.pc == 0x08850390u) goto L_08850390;
    return;
L_08850390:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885039Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x0885039Cu) goto L_0885039C;
    return;
L_0885039C:
    ctx.set_gpr(31, 0x088503A4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 937u, 0x0884F200u>(ctx, &aot_mem) && ctx.pc == 0x088503A4u) goto L_088503A4;
    return;
L_088503A4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088503B0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x088503B0u) goto L_088503B0;
    return;
L_088503B0:
    ctx.set_gpr(31, 0x088503B8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 319u, 0x0884D16Cu>(ctx, &aot_mem) && ctx.pc == 0x088503B8u) goto L_088503B8;
    return;
L_088503B8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088503C4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x088503C4u) goto L_088503C4;
    return;
L_088503C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088503F4;
      }
      goto L_088503CC;
    }
L_088503CC:
    ctx.set_gpr(31, 0x088503D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x088503D4u) goto L_088503D4;
    return;
L_088503D4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088503E0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x088503E0u) goto L_088503E0;
    return;
L_088503E0:
    ctx.set_gpr(31, 0x088503E8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 319u, 0x0884D16Cu>(ctx, &aot_mem) && ctx.pc == 0x088503E8u) goto L_088503E8;
    return;
L_088503E8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088503F4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x088503F4u) goto L_088503F4;
    return;
L_088503F4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    goto L_088503F8;
L_088503F8:
    ctx.set_gpr(31, 0x08850400u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 769u, 0x0884EA00u>(ctx, &aot_mem) && ctx.pc == 0x08850400u) goto L_08850400;
    return;
L_08850400:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0885040Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x0885040Cu) goto L_0885040C;
    return;
L_0885040C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08850418u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 773u, 0x0884EA50u>(ctx, &aot_mem) && ctx.pc == 0x08850418u) goto L_08850418;
    return;
L_08850418:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08850424u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 771u, 0x0884EA28u>(ctx, &aot_mem) && ctx.pc == 0x08850424u) goto L_08850424;
    return;
L_08850424:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08850430u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x08850430u) goto L_08850430;
    return;
L_08850430:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0885043Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 301u, 0x08849424u>(ctx, &aot_mem) && ctx.pc == 0x0885043Cu) goto L_0885043C;
    return;
L_0885043C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08850440;
L_08850440:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850450:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08850494u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08850494u) goto L_08850494;
    return;
L_08850494:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088504A0u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 355u, 0x088496F4u>(ctx, &aot_mem) && ctx.pc == 0x088504A0u) goto L_088504A0;
    return;
L_088504A0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
        goto L_088504B0;
    }
    goto L_088504A8;
L_088504A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08850840;
      }
      goto L_088504B0;
    }
L_088504B0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
        goto L_088505F4;
    }
    goto L_088504B8;
L_088504B8:
    ctx.set_gpr(31, 0x088504C0u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 936u, 0x0884F1F8u>(ctx, &aot_mem) && ctx.pc == 0x088504C0u) goto L_088504C0;
    return;
L_088504C0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(20));
        goto L_088504E0;
    }
    goto L_088504C8;
L_088504C8:
    ctx.set_gpr(31, 0x088504D0u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x088504D0u) goto L_088504D0;
    return;
L_088504D0:
    ctx.set_gpr(31, 0x088504D8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 560u, 0x0884A250u>(ctx, &aot_mem) && ctx.pc == 0x088504D8u) goto L_088504D8;
    return;
L_088504D8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088504F4;
      }
      goto L_088504E0;
    }
L_088504E0:
    ctx.set_gpr(31, 0x088504E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x088504E8u) goto L_088504E8;
    return;
L_088504E8:
    ctx.set_gpr(31, 0x088504F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 560u, 0x0884A250u>(ctx, &aot_mem) && ctx.pc == 0x088504F0u) goto L_088504F0;
    return;
L_088504F0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088504F4;
L_088504F4:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08850508u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08850508u) goto L_08850508;
    return;
L_08850508:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08850514u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 752u, 0x089FFE94u>(ctx, &aot_mem) && ctx.pc == 0x08850514u) goto L_08850514;
    return;
L_08850514:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08850528u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 675u, 0x0884E45Cu>(ctx, &aot_mem) && ctx.pc == 0x08850528u) goto L_08850528;
    return;
L_08850528:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08850534u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 737u, 0x089FFB18u>(ctx, &aot_mem) && ctx.pc == 0x08850534u) goto L_08850534;
    return;
L_08850534:
    ctx.set_gpr(31, 0x0885053Cu);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 936u, 0x0884F1F8u>(ctx, &aot_mem) && ctx.pc == 0x0885053Cu) goto L_0885053C;
    return;
L_0885053C:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
        goto L_08850564;
    }
    goto L_08850544;
L_08850544:
    ctx.set_gpr(31, 0x0885054Cu);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0885054Cu) goto L_0885054C;
    return;
L_0885054C:
    ctx.set_gpr(31, 0x08850554u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 560u, 0x0884A250u>(ctx, &aot_mem) && ctx.pc == 0x08850554u) goto L_08850554;
    return;
L_08850554:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08850560u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08850560u) goto L_08850560;
    return;
L_08850560:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    goto L_08850564;
L_08850564:
    ctx.set_gpr(31, 0x0885056Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0885056Cu) goto L_0885056C;
    return;
L_0885056C:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08850578u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 254u, 0x0880D4DCu>(ctx, &aot_mem) && ctx.pc == 0x08850578u) goto L_08850578;
    return;
L_08850578:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(72));
        goto L_088505E4;
    }
    goto L_08850580;
L_08850580:
    ctx.set_gpr(31, 0x08850588u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08850588u) goto L_08850588;
    return;
L_08850588:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08850594u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 254u, 0x0880D4DCu>(ctx, &aot_mem) && ctx.pc == 0x08850594u) goto L_08850594;
    return;
L_08850594:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088505E0;
      }
      goto L_0885059C;
    }
L_0885059C:
    ctx.set_gpr(31, 0x088505A4u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x088505A4u) goto L_088505A4;
    return;
L_088505A4:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088505B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 254u, 0x0880D4DCu>(ctx, &aot_mem) && ctx.pc == 0x088505B0u) goto L_088505B0;
    return;
L_088505B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088505E0;
      }
      goto L_088505B8;
    }
L_088505B8:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x088505CCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x088505CCu) goto L_088505CC;
    return;
L_088505CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088505D8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 751u, 0x089FFD6Cu>(ctx, &aot_mem) && ctx.pc == 0x088505D8u) goto L_088505D8;
    return;
L_088505D8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088505F0;
      }
      goto L_088505E0;
    }
L_088505E0:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(72));
    goto L_088505E4;
L_088505E4:
    ctx.set_gpr(31, 0x088505ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 318u, 0x0884D15Cu>(ctx, &aot_mem) && ctx.pc == 0x088505ECu) goto L_088505EC;
    return;
L_088505EC:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    goto L_088505F0;
L_088505F0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    goto L_088505F4;
L_088505F4:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
        goto L_08850604;
    }
    goto L_088505FC;
L_088505FC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08850840;
      }
      goto L_08850604;
    }
L_08850604:
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08850610u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08850610u) goto L_08850610;
    return;
L_08850610:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08850624u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08850624u) goto L_08850624;
    return;
L_08850624:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08850630u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08850630u) goto L_08850630;
    return;
L_08850630:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08850640u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08850640u) goto L_08850640;
    return;
L_08850640:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08850654u);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08850654u) goto L_08850654;
    return;
L_08850654:
    ctx.set_gpr(31, 0x0885065Cu);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x0885065Cu) goto L_0885065C;
    return;
L_0885065C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08850710;
      }
      goto L_0885066C;
    }
L_0885066C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
        goto L_088506CC;
    }
    goto L_08850678;
L_08850678:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
        goto L_0885068C;
    }
    goto L_08850684;
L_08850684:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08850788;
      }
      goto L_0885068C;
    }
L_0885068C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_08850698;
    }
L_08850698:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), 0u);
        goto L_088506B4;
    }
    goto L_088506A4;
L_088506A4:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_088506B0;
    }
L_088506B0:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), 0u);
    goto L_088506B4;
L_088506B4:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_088506CC;
    }
L_088506CC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_088506D8;
    }
L_088506D8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), 0u);
        goto L_088506F4;
    }
    goto L_088506E4;
L_088506E4:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_088506F0;
    }
L_088506F0:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), 0u);
    goto L_088506F4;
L_088506F4:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_08850710;
    }
L_08850710:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_08850720;
    }
L_08850720:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), 0u);
        goto L_0885073C;
    }
    goto L_0885072C;
L_0885072C:
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_08850738;
    }
L_08850738:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), 0u);
    goto L_0885073C;
L_0885073C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[19] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] - ctx.gpr[6]);
    ctx.set_gpr(18, ctx.gpr[4] - ctx.gpr[5]);
    ctx.set_gpr(19, ctx.gpr[19] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    goto L_08850784;
L_08850784:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(24));
    goto L_08850788;
L_08850788:
    ctx.set_gpr(31, 0x08850790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 960u, 0x0884F334u>(ctx, &aot_mem) && ctx.pc == 0x08850790u) goto L_08850790;
    return;
L_08850790:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[23] + 0u);
        goto L_08850840;
    }
    goto L_08850798;
L_08850798:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885083C;
      }
      goto L_088507A0;
    }
L_088507A0:
    ctx.set_gpr(31, 0x088507A8u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 954u, 0x0884F2E4u>(ctx, &aot_mem) && ctx.pc == 0x088507A8u) goto L_088507A8;
    return;
L_088507A8:
    ctx.set_gpr(31, 0x088507B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 73u, 0x08844420u>(ctx, &aot_mem) && ctx.pc == 0x088507B0u) goto L_088507B0;
    return;
L_088507B0:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_0885083C;
      }
      goto L_088507BC;
    }
L_088507BC:
    ctx.set_gpr(31, 0x088507C4u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 954u, 0x0884F2E4u>(ctx, &aot_mem) && ctx.pc == 0x088507C4u) goto L_088507C4;
    return;
L_088507C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088507D0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_0885087C;
L_088507D0:
    ctx.set_gpr(31, 0x088507D8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 964u, 0x0884F36Cu>(ctx, &aot_mem) && ctx.pc == 0x088507D8u) goto L_088507D8;
    return;
L_088507D8:
    ctx.set_gpr(31, 0x088507E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 183u, 0x08A78E64u>(ctx, &aot_mem) && ctx.pc == 0x088507E0u) goto L_088507E0;
    return;
L_088507E0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088507F0u);
    ctx.set_gpr(16, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 73u, 0x08844420u>(ctx, &aot_mem) && ctx.pc == 0x088507F0u) goto L_088507F0;
    return;
L_088507F0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08850830;
    }
    goto L_088507F8;
L_088507F8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_088507FC;
L_088507FC:
    ctx.set_gpr(31, 0x08850804u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08850874;
L_08850804:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08850814u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 129u, 0x08A78A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08850814u) goto L_08850814;
    return;
L_08850814:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08850820u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 73u, 0x08844420u>(ctx, &aot_mem) && ctx.pc == 0x08850820u) goto L_08850820;
    return;
L_08850820:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_088507FC;
    }
    goto L_0885082C;
L_0885082C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08850830;
L_08850830:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088507BC;
      }
      goto L_0885083C;
    }
L_0885083C:
    ctx.set_gpr(2, ctx.gpr[23] + 0u);
    goto L_08850840;
L_08850840:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850874:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem); return;
L_0885087C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem); return;
L_08850884:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885089C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[13];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[14];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088508CC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088508DC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088508EC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088508FC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885090C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885091C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885092C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08850944u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x08850944u) goto L_08850944;
    return;
L_08850944:
    ctx.set_gpr(31, 0x0885094Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 560u, 0x0884A250u>(ctx, &aot_mem) && ctx.pc == 0x0885094Cu) goto L_0885094C;
    return;
L_0885094C:
    ctx.set_gpr(31, 0x08850954u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08850954u) goto L_08850954;
    return;
L_08850954:
    ctx.set_gpr(31, 0x0885095Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 936u, 0x0884F1F8u>(ctx, &aot_mem) && ctx.pc == 0x0885095Cu) goto L_0885095C;
    return;
L_0885095C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(72));
        goto L_08850980;
    }
    goto L_08850964;
L_08850964:
    ctx.set_gpr(31, 0x0885096Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0885096Cu) goto L_0885096C;
    return;
L_0885096C:
    ctx.set_gpr(31, 0x08850974u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 560u, 0x0884A250u>(ctx, &aot_mem) && ctx.pc == 0x08850974u) goto L_08850974;
    return;
L_08850974:
    ctx.set_gpr(31, 0x0885097Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x0885097Cu) goto L_0885097C;
    return;
L_0885097C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    goto L_08850980;
L_08850980:
    ctx.set_gpr(31, 0x08850988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 318u, 0x0884D15Cu>(ctx, &aot_mem) && ctx.pc == 0x08850988u) goto L_08850988;
    return;
L_08850988:
    ctx.set_gpr(31, 0x08850990u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 318u, 0x0884D15Cu>(ctx, &aot_mem) && ctx.pc == 0x08850990u) goto L_08850990;
    return;
L_08850990:
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088509B4:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_088509BC;
L_088509BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088509DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 270u, 0x0883D560u>(ctx, &aot_mem) && ctx.pc == 0x088509DCu) goto L_088509DC;
    return;
L_088509DC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088509F0:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24));
    goto L_088509F8;
L_088509F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08850A18u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 270u, 0x0883D560u>(ctx, &aot_mem) && ctx.pc == 0x08850A18u) goto L_08850A18;
    return;
L_08850A18:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850A2C:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850A48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08850A58u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 936u, 0x0884F1F8u>(ctx, &aot_mem) && ctx.pc == 0x08850A58u) goto L_08850A58;
    return;
L_08850A58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850A68:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850A70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850A7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08850A98u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x08850A98u) goto L_08850A98;
    return;
L_08850A98:
    ctx.set_gpr(31, 0x08850AA0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 1173u, 0x0884FD58u>(ctx, &aot_mem) && ctx.pc == 0x08850AA0u) goto L_08850AA0;
    return;
L_08850AA0:
    ctx.set_gpr(31, 0x08850AA8u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08850B24;
L_08850AA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08850AB8u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 223u, 0x08A59124u>(ctx, &aot_mem) && ctx.pc == 0x08850AB8u) goto L_08850AB8;
    return;
L_08850AB8:
    ctx.set_gpr(31, 0x08850AC0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08850AD4;
L_08850AC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850AD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08850B14;
    }
    goto L_08850AEC;
L_08850AEC:
    ctx.set_gpr(31, 0x08850AF4u);
    // nop
    goto L_08850B24;
L_08850AF4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08850B00u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08850B00u) goto L_08850B00;
    return;
L_08850B00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08850B10;
      }
      goto L_08850B08;
    }
L_08850B08:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08850B14;
      }
      goto L_08850B10;
    }
L_08850B10:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08850B14;
L_08850B14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850B24:
    ctx.set_gpr(2, 2246u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26360)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850B30:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 316u, 0x0884D128u>(ctx, &aot_mem); return;
L_08850B38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08850BD4;
      }
      goto L_08850B54;
    }
L_08850B54:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08850B70;
    }
    goto L_08850B60;
L_08850B60:
    ctx.set_gpr(1, ctx.gpr[6] < 0u ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
        goto L_08850BD8;
    }
    goto L_08850B6C;
L_08850B6C:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08850B70;
L_08850B70:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08850B94u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 933u, 0x0884F1D0u>(ctx, &aot_mem) && ctx.pc == 0x08850B94u) goto L_08850B94;
    return;
L_08850B94:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08850C54;
    }
    goto L_08850B9C;
L_08850B9C:
    ctx.set_gpr(31, 0x08850BA4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 937u, 0x0884F200u>(ctx, &aot_mem) && ctx.pc == 0x08850BA4u) goto L_08850BA4;
    return;
L_08850BA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(31, 0x08850BB4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 935u, 0x0884F1E8u>(ctx, &aot_mem) && ctx.pc == 0x08850BB4u) goto L_08850BB4;
    return;
L_08850BB4:
    ctx.set_gpr(31, 0x08850BBCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 937u, 0x0884F200u>(ctx, &aot_mem) && ctx.pc == 0x08850BBCu) goto L_08850BBC;
    return;
L_08850BBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08850BCCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 934u, 0x0884F1D8u>(ctx, &aot_mem) && ctx.pc == 0x08850BCCu) goto L_08850BCC;
    return;
L_08850BCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08850C50;
      }
      goto L_08850BD4;
    }
L_08850BD4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    goto L_08850BD8;
L_08850BD8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.set_gpr(31, 0x08850BE4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 933u, 0x0884F1D0u>(ctx, &aot_mem) && ctx.pc == 0x08850BE4u) goto L_08850BE4;
    return;
L_08850BE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08850C50;
      }
      goto L_08850BEC;
    }
L_08850BEC:
    ctx.set_gpr(31, 0x08850BF4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 937u, 0x0884F200u>(ctx, &aot_mem) && ctx.pc == 0x08850BF4u) goto L_08850BF4;
    return;
L_08850BF4:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08850C00u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 935u, 0x0884F1E8u>(ctx, &aot_mem) && ctx.pc == 0x08850C00u) goto L_08850C00;
    return;
L_08850C00:
    ctx.set_gpr(31, 0x08850C08u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 937u, 0x0884F200u>(ctx, &aot_mem) && ctx.pc == 0x08850C08u) goto L_08850C08;
    return;
L_08850C08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08850C18u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08850C18u) goto L_08850C18;
    return;
L_08850C18:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x08850C30u);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08850C30u) goto L_08850C30;
    return;
L_08850C30:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(31, 0x08850C50u);
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 934u, 0x0884F1D8u>(ctx, &aot_mem) && ctx.pc == 0x08850C50u) goto L_08850C50;
    return;
L_08850C50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08850C54;
L_08850C54:
    ctx.set_gpr(31, 0x08850C5Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08850C70;
L_08850C5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850C70:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850C78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08850C9Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 933u, 0x0884F1D0u>(ctx, &aot_mem) && ctx.pc == 0x08850C9Cu) goto L_08850C9C;
    return;
L_08850C9C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08850D74;
    }
    goto L_08850CA4;
L_08850CA4:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
        goto L_08850D0C;
    }
    goto L_08850CB8;
L_08850CB8:
    ctx.set_gpr(31, 0x08850CC0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 937u, 0x0884F200u>(ctx, &aot_mem) && ctx.pc == 0x08850CC0u) goto L_08850CC0;
    return;
L_08850CC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(31, 0x08850CD0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 935u, 0x0884F1E8u>(ctx, &aot_mem) && ctx.pc == 0x08850CD0u) goto L_08850CD0;
    return;
L_08850CD0:
    ctx.set_gpr(31, 0x08850CD8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 937u, 0x0884F200u>(ctx, &aot_mem) && ctx.pc == 0x08850CD8u) goto L_08850CD8;
    return;
L_08850CD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08850CE8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 934u, 0x0884F1D8u>(ctx, &aot_mem) && ctx.pc == 0x08850CE8u) goto L_08850CE8;
    return;
L_08850CE8:
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), 0u);
      if (branch_taken) {
          goto L_08850D70;
      }
      goto L_08850D0C;
    }
L_08850D0C:
    ctx.set_gpr(31, 0x08850D14u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 937u, 0x0884F200u>(ctx, &aot_mem) && ctx.pc == 0x08850D14u) goto L_08850D14;
    return;
L_08850D14:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08850D20u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 935u, 0x0884F1E8u>(ctx, &aot_mem) && ctx.pc == 0x08850D20u) goto L_08850D20;
    return;
L_08850D20:
    ctx.set_gpr(31, 0x08850D28u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 937u, 0x0884F200u>(ctx, &aot_mem) && ctx.pc == 0x08850D28u) goto L_08850D28;
    return;
L_08850D28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08850D38u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08850D38u) goto L_08850D38;
    return;
L_08850D38:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x08850D50u);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08850D50u) goto L_08850D50;
    return;
L_08850D50:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(31, 0x08850D70u);
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 934u, 0x0884F1D8u>(ctx, &aot_mem) && ctx.pc == 0x08850D70u) goto L_08850D70;
    return;
L_08850D70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08850D74;
L_08850D74:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850D88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08850DB0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 933u, 0x0884F1D0u>(ctx, &aot_mem) && ctx.pc == 0x08850DB0u) goto L_08850DB0;
    return;
L_08850DB0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08850E30;
    }
    goto L_08850DB8;
L_08850DB8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08850DD0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 937u, 0x0884F200u>(ctx, &aot_mem) && ctx.pc == 0x08850DD0u) goto L_08850DD0;
    return;
L_08850DD0:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08850DDCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 935u, 0x0884F1E8u>(ctx, &aot_mem) && ctx.pc == 0x08850DDCu) goto L_08850DDC;
    return;
L_08850DDC:
    ctx.set_gpr(31, 0x08850DE4u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 937u, 0x0884F200u>(ctx, &aot_mem) && ctx.pc == 0x08850DE4u) goto L_08850DE4;
    return;
L_08850DE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08850DF4u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08850DF4u) goto L_08850DF4;
    return;
L_08850DF4:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x08850E0Cu);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08850E0Cu) goto L_08850E0C;
    return;
L_08850E0C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(31, 0x08850E2Cu);
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 934u, 0x0884F1D8u>(ctx, &aot_mem) && ctx.pc == 0x08850E2Cu) goto L_08850E2C;
    return;
L_08850E2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08850E30;
L_08850E30:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850E44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(5, 2180u << 16u);
    ctx.set_gpr(6, 2180u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2444));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1696));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08850E78u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 179u, 0x08804B94u>(ctx, &aot_mem) && ctx.pc == 0x08850E78u) goto L_08850E78;
    return;
L_08850E78:
    ctx.set_gpr(5, 2180u << 16u);
    ctx.set_gpr(6, 2180u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2432));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1616));
    ctx.set_gpr(31, 0x08850E98u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 179u, 0x08804B94u>(ctx, &aot_mem) && ctx.pc == 0x08850E98u) goto L_08850E98;
    return;
L_08850E98:
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 2181u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4256));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4176));
    ctx.set_gpr(31, 0x08850EB8u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 179u, 0x08804B94u>(ctx, &aot_mem) && ctx.pc == 0x08850EB8u) goto L_08850EB8;
    return;
L_08850EB8:
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(64));
    goto L_08850EBC;
L_08850EBC:
    ctx.set_gpr(31, 0x08850EC4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08850EC4u) goto L_08850EC4;
    return;
L_08850EC4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08850EBC;
      }
      goto L_08850ED8;
    }
L_08850ED8:
    ctx.set_gpr(31, 0x08850EE0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 164u, 0x0884098Cu>(ctx, &aot_mem) && ctx.pc == 0x08850EE0u) goto L_08850EE0;
    return;
L_08850EE0:
    ctx.set_gpr(31, 0x08850EE8u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(204));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 164u, 0x0884098Cu>(ctx, &aot_mem) && ctx.pc == 0x08850EE8u) goto L_08850EE8;
    return;
L_08850EE8:
    ctx.set_gpr(31, 0x08850EF0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 164u, 0x0884098Cu>(ctx, &aot_mem) && ctx.pc == 0x08850EF0u) goto L_08850EF0;
    return;
L_08850EF0:
    ctx.set_gpr(31, 0x08850EF8u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 164u, 0x0884098Cu>(ctx, &aot_mem) && ctx.pc == 0x08850EF8u) goto L_08850EF8;
    return;
L_08850EF8:
    ctx.set_gpr(31, 0x08850F00u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(216));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 164u, 0x0884098Cu>(ctx, &aot_mem) && ctx.pc == 0x08850F00u) goto L_08850F00;
    return;
L_08850F00:
    ctx.set_gpr(31, 0x08850F08u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 164u, 0x0884098Cu>(ctx, &aot_mem) && ctx.pc == 0x08850F08u) goto L_08850F08;
    return;
L_08850F08:
    ctx.set_gpr(31, 0x08850F10u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(224));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 164u, 0x0884098Cu>(ctx, &aot_mem) && ctx.pc == 0x08850F10u) goto L_08850F10;
    return;
L_08850F10:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(192), 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08850F1C;
L_08850F1C:
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08850F28u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08851028;
L_08850F28:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08850F38u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08851000;
L_08850F38:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08850F4Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08850FD8;
L_08850F4C:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08850F1C;
      }
      goto L_08850F68;
    }
L_08850F68:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(31, 0x08850F74u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08851028;
L_08850F74:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x08850F80u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08851028;
L_08850F80:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(31, 0x08850F8Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08851028;
L_08850F8C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x08850F98u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08851028;
L_08850F98:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(31, 0x08850FA4u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08851028;
L_08850FA4:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x08850FB0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08851028;
L_08850FB0:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x08850FBCu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08851028;
L_08850FBC:
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
L_08850FD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08850FECu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08850FECu) goto L_08850FEC;
    return;
L_08850FEC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851000:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08851014u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08851014u) goto L_08851014;
    return;
L_08851014:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851028:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0885103Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0885103Cu) goto L_0885103C;
    return;
L_0885103C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851050:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08851088;
      }
      goto L_0885106C;
    }
L_0885106C:
    ctx.set_gpr(31, 0x08851074u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08851074u) goto L_08851074;
    return;
L_08851074:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0885108C;
    }
    goto L_08851080;
L_08851080:
    ctx.set_gpr(31, 0x08851088u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08851088u) goto L_08851088;
    return;
L_08851088:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0885108C;
L_0885108C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088510A0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088510AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_088511C0;
      }
      goto L_088510D0;
    }
L_088510D0:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    goto L_088510D8;
L_088510D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088510E4u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08851028;
L_088510E4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088510F0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08851000;
L_088510F0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08851100u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    goto L_08850FD8;
L_08851100:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088510D8;
      }
      goto L_08851110;
    }
L_08851110:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x0885111Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 111u, 0x088406A0u>(ctx, &aot_mem) && ctx.pc == 0x0885111Cu) goto L_0885111C;
    return;
L_0885111C:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x08851128u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 111u, 0x088406A0u>(ctx, &aot_mem) && ctx.pc == 0x08851128u) goto L_08851128;
    return;
L_08851128:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(31, 0x08851134u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 111u, 0x088406A0u>(ctx, &aot_mem) && ctx.pc == 0x08851134u) goto L_08851134;
    return;
L_08851134:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x08851140u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 111u, 0x088406A0u>(ctx, &aot_mem) && ctx.pc == 0x08851140u) goto L_08851140;
    return;
L_08851140:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(31, 0x0885114Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 111u, 0x088406A0u>(ctx, &aot_mem) && ctx.pc == 0x0885114Cu) goto L_0885114C;
    return;
L_0885114C:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x08851158u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 111u, 0x088406A0u>(ctx, &aot_mem) && ctx.pc == 0x08851158u) goto L_08851158;
    return;
L_08851158:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(31, 0x08851164u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 111u, 0x088406A0u>(ctx, &aot_mem) && ctx.pc == 0x08851164u) goto L_08851164;
    return;
L_08851164:
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4176));
    ctx.set_gpr(31, 0x0885117Cu);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 174u, 0x08804B28u>(ctx, &aot_mem) && ctx.pc == 0x0885117Cu) goto L_0885117C;
    return;
L_0885117C:
    ctx.set_gpr(5, 2180u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1616));
    ctx.set_gpr(31, 0x08851194u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 174u, 0x08804B28u>(ctx, &aot_mem) && ctx.pc == 0x08851194u) goto L_08851194;
    return;
L_08851194:
    ctx.set_gpr(5, 2180u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1696));
    ctx.set_gpr(31, 0x088511ACu);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 174u, 0x08804B28u>(ctx, &aot_mem) && ctx.pc == 0x088511ACu) goto L_088511AC;
    return;
L_088511AC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[18]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
        goto L_088511C4;
    }
    goto L_088511B8;
L_088511B8:
    ctx.set_gpr(31, 0x088511C0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088511C0u) goto L_088511C0;
    return;
L_088511C0:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_088511C4;
L_088511C4:
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
L_088511E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_fpr_bits(20, ctx.fpr_bits(13));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08851218;
L_08851218:
    ctx.set_gpr(31, 0x08851220u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 501u, 0x08841C68u>(ctx, &aot_mem) && ctx.pc == 0x08851220u) goto L_08851220;
    return;
L_08851220:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885122Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    goto L_08851560;
L_0885122C:
    ctx.set_gpr(31, 0x08851234u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 589u, 0x088423A0u>(ctx, &aot_mem) && ctx.pc == 0x08851234u) goto L_08851234;
    return;
L_08851234:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08851240u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    goto L_0885152C;
L_08851240:
    ctx.set_gpr(31, 0x08851248u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 584u, 0x0884235Cu>(ctx, &aot_mem) && ctx.pc == 0x08851248u) goto L_08851248;
    return;
L_08851248:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885125Cu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885125Cu) goto L_0885125C;
    return;
L_0885125C:
    ctx.set_gpr(31, 0x08851264u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 584u, 0x0884235Cu>(ctx, &aot_mem) && ctx.pc == 0x08851264u) goto L_08851264;
    return;
L_08851264:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08851270u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08851524;
L_08851270:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08851218;
      }
      goto L_08851280;
    }
L_08851280:
    ctx.set_gpr(31, 0x08851288u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 501u, 0x08841C68u>(ctx, &aot_mem) && ctx.pc == 0x08851288u) goto L_08851288;
    return;
L_08851288:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(31, 0x08851294u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    goto L_08851560;
L_08851294:
    ctx.set_gpr(31, 0x0885129Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 358u, 0x088413B0u>(ctx, &aot_mem) && ctx.pc == 0x0885129Cu) goto L_0885129C;
    return;
L_0885129C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088512A8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 859u, 0x088439DCu>(ctx, &aot_mem) && ctx.pc == 0x088512A8u) goto L_088512A8;
    return;
L_088512A8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088512B4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x088512B4u) goto L_088512B4;
    return;
L_088512B4:
    ctx.set_gpr(31, 0x088512BCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 501u, 0x08841C68u>(ctx, &aot_mem) && ctx.pc == 0x088512BCu) goto L_088512BC;
    return;
L_088512BC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x088512C8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_08851560;
L_088512C8:
    ctx.set_gpr(31, 0x088512D0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 358u, 0x088413B0u>(ctx, &aot_mem) && ctx.pc == 0x088512D0u) goto L_088512D0;
    return;
L_088512D0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088512DCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(204));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 859u, 0x088439DCu>(ctx, &aot_mem) && ctx.pc == 0x088512DCu) goto L_088512DC;
    return;
L_088512DC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088512E8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x088512E8u) goto L_088512E8;
    return;
L_088512E8:
    ctx.set_gpr(31, 0x088512F0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 501u, 0x08841C68u>(ctx, &aot_mem) && ctx.pc == 0x088512F0u) goto L_088512F0;
    return;
L_088512F0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(31, 0x088512FCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_08851560;
L_088512FC:
    ctx.set_gpr(31, 0x08851304u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 358u, 0x088413B0u>(ctx, &aot_mem) && ctx.pc == 0x08851304u) goto L_08851304;
    return;
L_08851304:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08851310u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 859u, 0x088439DCu>(ctx, &aot_mem) && ctx.pc == 0x08851310u) goto L_08851310;
    return;
L_08851310:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885131Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0885131Cu) goto L_0885131C;
    return;
L_0885131C:
    ctx.set_gpr(31, 0x08851324u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 501u, 0x08841C68u>(ctx, &aot_mem) && ctx.pc == 0x08851324u) goto L_08851324;
    return;
L_08851324:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x08851330u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    goto L_08851560;
L_08851330:
    ctx.set_gpr(31, 0x08851338u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 358u, 0x088413B0u>(ctx, &aot_mem) && ctx.pc == 0x08851338u) goto L_08851338;
    return;
L_08851338:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08851344u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 859u, 0x088439DCu>(ctx, &aot_mem) && ctx.pc == 0x08851344u) goto L_08851344;
    return;
L_08851344:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08851350u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x08851350u) goto L_08851350;
    return;
L_08851350:
    ctx.set_gpr(31, 0x08851358u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 501u, 0x08841C68u>(ctx, &aot_mem) && ctx.pc == 0x08851358u) goto L_08851358;
    return;
L_08851358:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(31, 0x08851364u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    goto L_08851560;
L_08851364:
    ctx.set_gpr(31, 0x0885136Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 358u, 0x088413B0u>(ctx, &aot_mem) && ctx.pc == 0x0885136Cu) goto L_0885136C;
    return;
L_0885136C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08851378u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(216));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 859u, 0x088439DCu>(ctx, &aot_mem) && ctx.pc == 0x08851378u) goto L_08851378;
    return;
L_08851378:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08851384u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x08851384u) goto L_08851384;
    return;
L_08851384:
    ctx.set_gpr(31, 0x0885138Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 501u, 0x08841C68u>(ctx, &aot_mem) && ctx.pc == 0x0885138Cu) goto L_0885138C;
    return;
L_0885138C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x08851398u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_08851560;
L_08851398:
    ctx.set_gpr(31, 0x088513A0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 358u, 0x088413B0u>(ctx, &aot_mem) && ctx.pc == 0x088513A0u) goto L_088513A0;
    return;
L_088513A0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088513ACu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(220));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 859u, 0x088439DCu>(ctx, &aot_mem) && ctx.pc == 0x088513ACu) goto L_088513AC;
    return;
L_088513AC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088513B8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x088513B8u) goto L_088513B8;
    return;
L_088513B8:
    ctx.set_gpr(31, 0x088513C0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 501u, 0x08841C68u>(ctx, &aot_mem) && ctx.pc == 0x088513C0u) goto L_088513C0;
    return;
L_088513C0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x088513CCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08851560;
L_088513CC:
    ctx.set_gpr(31, 0x088513D4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 358u, 0x088413B0u>(ctx, &aot_mem) && ctx.pc == 0x088513D4u) goto L_088513D4;
    return;
L_088513D4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088513E0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(224));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 859u, 0x088439DCu>(ctx, &aot_mem) && ctx.pc == 0x088513E0u) goto L_088513E0;
    return;
L_088513E0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088513ECu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x088513ECu) goto L_088513EC;
    return;
L_088513EC:
    ctx.set_gpr(31, 0x088513F4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 584u, 0x0884235Cu>(ctx, &aot_mem) && ctx.pc == 0x088513F4u) goto L_088513F4;
    return;
L_088513F4:
    ctx.set_gpr(31, 0x088513FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08851514;
L_088513FC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08851408u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    goto L_08850FD8;
L_08851408:
    ctx.set_gpr(31, 0x08851410u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    goto L_0885150C;
L_08851410:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08851420u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_088514E0;
L_08851420:
    ctx.set_gpr(31, 0x08851428u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    goto L_0885150C;
L_08851428:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08851434u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_088514D8;
L_08851434:
    ctx.set_gpr(31, 0x0885143Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 584u, 0x0884235Cu>(ctx, &aot_mem) && ctx.pc == 0x0885143Cu) goto L_0885143C;
    return;
L_0885143C:
    ctx.set_gpr(31, 0x08851444u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08851514;
L_08851444:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08851450u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    goto L_08850FD8;
L_08851450:
    ctx.set_gpr(31, 0x08851458u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    goto L_0885150C;
L_08851458:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08851468u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_088514E0;
L_08851468:
    ctx.set_gpr(31, 0x08851470u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    goto L_0885150C;
L_08851470:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885147Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_088514D8;
L_0885147C:
    ctx.fpr[14] = ctx.fpr[21] / ctx.fpr[20];
    ctx.set_gpr(2, 16985u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 47186u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 52429u);
    ctx.set_gpr(5, 49024u << 16u);
    ctx.set_gpr(2, 17402u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(31, 0x088514B0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 427u, 0x08849A60u>(ctx, &aot_mem) && ctx.pc == 0x088514B0u) goto L_088514B0;
    return;
L_088514B0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088514D8:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088514E0:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_088514F8;
    }
    goto L_088514E8;
L_088514E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08851504;
      }
      goto L_088514F8;
    }
L_088514F8:
    ctx.set_gpr(5, ~(ctx.gpr[5] | 0u));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    goto L_08851504;
L_08851504:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885150C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851514:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(68));
    goto L_0885151C;
L_0885151C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851524:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885152C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08851540u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 588u, 0x08842398u>(ctx, &aot_mem) && ctx.pc == 0x08851540u) goto L_08851540;
    return;
L_08851540:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885154Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0885154Cu) goto L_0885154C;
    return;
L_0885154C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851560:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08851574u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 500u, 0x08841C60u>(ctx, &aot_mem) && ctx.pc == 0x08851574u) goto L_08851574;
    return;
L_08851574:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08851580u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08851580u) goto L_08851580;
    return;
L_08851580:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851594:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(21, 0u + 0u);
    goto L_088515C8;
L_088515C8:
    ctx.set_gpr(31, 0x088515D0u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 584u, 0x0884235Cu>(ctx, &aot_mem) && ctx.pc == 0x088515D0u) goto L_088515D0;
    return;
L_088515D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088515DCu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 444u, 0x08A36694u>(ctx, &aot_mem) && ctx.pc == 0x088515DCu) goto L_088515DC;
    return;
L_088515DC:
    ctx.set_gpr(31, 0x088515E4u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 584u, 0x0884235Cu>(ctx, &aot_mem) && ctx.pc == 0x088515E4u) goto L_088515E4;
    return;
L_088515E4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088515FCu);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088515FCu) goto L_088515FC;
    return;
L_088515FC:
    ctx.set_gpr(31, 0x08851604u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 584u, 0x0884235Cu>(ctx, &aot_mem) && ctx.pc == 0x08851604u) goto L_08851604;
    return;
L_08851604:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08851614u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08851614u) goto L_08851614;
    return;
L_08851614:
    ctx.set_gpr(31, 0x0885161Cu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 584u, 0x0884235Cu>(ctx, &aot_mem) && ctx.pc == 0x0885161Cu) goto L_0885161C;
    return;
L_0885161C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08851628u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 859u, 0x088439DCu>(ctx, &aot_mem) && ctx.pc == 0x08851628u) goto L_08851628;
    return;
L_08851628:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885163Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885163Cu) goto L_0885163C;
    return;
L_0885163C:
    ctx.set_gpr(31, 0x08851644u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 584u, 0x0884235Cu>(ctx, &aot_mem) && ctx.pc == 0x08851644u) goto L_08851644;
    return;
L_08851644:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08851654u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08851654u) goto L_08851654;
    return;
L_08851654:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088515C8;
      }
      goto L_08851668;
    }
L_08851668:
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
L_0885168C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.set_gpr(31, 0x088516ACu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(240));
    goto L_0885172C;
L_088516AC:
    ctx.set_gpr(31, 0x088516B4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885171C;
L_088516B4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(240));
        goto L_088516D4;
    }
    goto L_088516BC;
L_088516BC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088516E8;
      }
      goto L_088516D4;
    }
L_088516D4:
    ctx.set_gpr(31, 0x088516DCu);
    // nop
    goto L_0885172C;
L_088516DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088516E8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_088516F8;
L_088516E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088516F8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-8), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885171C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] ^ 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885172C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851734:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    goto L_08851760;
L_08851760:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08851840;
    }
    goto L_0885176C;
L_0885176C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[17] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(192)));
        goto L_08851798;
    }
    goto L_08851778;
L_08851778:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08851790u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08851790u) goto L_08851790;
    return;
L_08851790:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_088517BC;
      }
      goto L_08851798;
    }
L_08851798:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    ctx.set_gpr(5, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088517B8u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088517B8u) goto L_088517B8;
    return;
L_088517B8:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[17]);
    goto L_088517BC;
L_088517BC:
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(196)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_088517F8;
    }
    goto L_088517CC;
L_088517CC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(940)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088517E0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088517E0u) goto L_088517E0;
    return;
L_088517E0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(956)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088517F4u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088517F4u) goto L_088517F4;
    return;
L_088517F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_088517F8;
L_088517F8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08851808u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08851808u) goto L_08851808;
    return;
L_08851808:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885183C;
      }
      goto L_08851814;
    }
L_08851814:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(956)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08851828u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08851828u) goto L_08851828;
    return;
L_08851828:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(940)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885183Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885183Cu) goto L_0885183C;
    return;
L_0885183C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08851840;
L_08851840:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08851760;
      }
      goto L_0885184C;
    }
L_0885184C:
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
L_0885186C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08851894u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 164u, 0x0884098Cu>(ctx, &aot_mem) && ctx.pc == 0x08851894u) goto L_08851894;
    return;
L_08851894:
    ctx.set_gpr(1, ctx.gpr[18] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
        goto L_0885196C;
    }
    goto L_088518A0;
L_088518A0:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8476));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088518BC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(31, 0x088518C8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 590u, 0x088423ACu>(ctx, &aot_mem) && ctx.pc == 0x088518C8u) goto L_088518C8;
    return;
L_088518C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851968;
      }
      goto L_088518D0;
    }
L_088518D0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x088518DCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 590u, 0x088423ACu>(ctx, &aot_mem) && ctx.pc == 0x088518DCu) goto L_088518DC;
    return;
L_088518DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851968;
      }
      goto L_088518E4;
    }
L_088518E4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(31, 0x088518F0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 590u, 0x088423ACu>(ctx, &aot_mem) && ctx.pc == 0x088518F0u) goto L_088518F0;
    return;
L_088518F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851968;
      }
      goto L_088518F8;
    }
L_088518F8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08851904u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 590u, 0x088423ACu>(ctx, &aot_mem) && ctx.pc == 0x08851904u) goto L_08851904;
    return;
L_08851904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851968;
      }
      goto L_0885190C;
    }
L_0885190C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08851918u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 590u, 0x088423ACu>(ctx, &aot_mem) && ctx.pc == 0x08851918u) goto L_08851918;
    return;
L_08851918:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851968;
      }
      goto L_08851920;
    }
L_08851920:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x0885192Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 590u, 0x088423ACu>(ctx, &aot_mem) && ctx.pc == 0x0885192Cu) goto L_0885192C;
    return;
L_0885192C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851968;
      }
      goto L_08851934;
    }
L_08851934:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(31, 0x08851940u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 590u, 0x088423ACu>(ctx, &aot_mem) && ctx.pc == 0x08851940u) goto L_08851940;
    return;
L_08851940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851968;
      }
      goto L_08851948;
    }
L_08851948:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x08851954u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 590u, 0x088423ACu>(ctx, &aot_mem) && ctx.pc == 0x08851954u) goto L_08851954;
    return;
L_08851954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851968;
      }
      goto L_0885195C;
    }
L_0885195C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x08851968u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 590u, 0x088423ACu>(ctx, &aot_mem) && ctx.pc == 0x08851968u) goto L_08851968;
    return;
L_08851968:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_0885196C;
L_0885196C:
    ctx.set_gpr(31, 0x08851974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 358u, 0x088413B0u>(ctx, &aot_mem) && ctx.pc == 0x08851974u) goto L_08851974;
    return;
L_08851974:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08851980u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 456u, 0x0884D828u>(ctx, &aot_mem) && ctx.pc == 0x08851980u) goto L_08851980;
    return;
L_08851980:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
        goto L_088519A4;
    }
    goto L_0885198C;
L_0885198C:
    ctx.set_gpr(31, 0x08851994u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 358u, 0x088413B0u>(ctx, &aot_mem) && ctx.pc == 0x08851994u) goto L_08851994;
    return;
L_08851994:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088519A0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x088519A0u) goto L_088519A0;
    return;
L_088519A0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_088519A4;
L_088519A4:
    ctx.set_gpr(31, 0x088519ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 111u, 0x088406A0u>(ctx, &aot_mem) && ctx.pc == 0x088519ACu) goto L_088519AC;
    return;
L_088519AC:
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
L_088519C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088519ECu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 164u, 0x0884098Cu>(ctx, &aot_mem) && ctx.pc == 0x088519ECu) goto L_088519EC;
    return;
L_088519EC:
    ctx.set_gpr(1, ctx.gpr[18] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
        goto L_08851AC4;
    }
    goto L_088519F8;
L_088519F8:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8512));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851A14:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(31, 0x08851A20u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 590u, 0x088423ACu>(ctx, &aot_mem) && ctx.pc == 0x08851A20u) goto L_08851A20;
    return;
L_08851A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851AC0;
      }
      goto L_08851A28;
    }
L_08851A28:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x08851A34u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 590u, 0x088423ACu>(ctx, &aot_mem) && ctx.pc == 0x08851A34u) goto L_08851A34;
    return;
L_08851A34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851AC0;
      }
      goto L_08851A3C;
    }
L_08851A3C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(31, 0x08851A48u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 590u, 0x088423ACu>(ctx, &aot_mem) && ctx.pc == 0x08851A48u) goto L_08851A48;
    return;
L_08851A48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851AC0;
      }
      goto L_08851A50;
    }
L_08851A50:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08851A5Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 590u, 0x088423ACu>(ctx, &aot_mem) && ctx.pc == 0x08851A5Cu) goto L_08851A5C;
    return;
L_08851A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851AC0;
      }
      goto L_08851A64;
    }
L_08851A64:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08851A70u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 590u, 0x088423ACu>(ctx, &aot_mem) && ctx.pc == 0x08851A70u) goto L_08851A70;
    return;
L_08851A70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851AC0;
      }
      goto L_08851A78;
    }
L_08851A78:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x08851A84u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 590u, 0x088423ACu>(ctx, &aot_mem) && ctx.pc == 0x08851A84u) goto L_08851A84;
    return;
L_08851A84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851AC0;
      }
      goto L_08851A8C;
    }
L_08851A8C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(31, 0x08851A98u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 590u, 0x088423ACu>(ctx, &aot_mem) && ctx.pc == 0x08851A98u) goto L_08851A98;
    return;
L_08851A98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851AC0;
      }
      goto L_08851AA0;
    }
L_08851AA0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x08851AACu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 590u, 0x088423ACu>(ctx, &aot_mem) && ctx.pc == 0x08851AACu) goto L_08851AAC;
    return;
L_08851AAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851AC0;
      }
      goto L_08851AB4;
    }
L_08851AB4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x08851AC0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 590u, 0x088423ACu>(ctx, &aot_mem) && ctx.pc == 0x08851AC0u) goto L_08851AC0;
    return;
L_08851AC0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_08851AC4;
L_08851AC4:
    ctx.set_gpr(31, 0x08851ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 358u, 0x088413B0u>(ctx, &aot_mem) && ctx.pc == 0x08851ACCu) goto L_08851ACC;
    return;
L_08851ACC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08851AD8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 456u, 0x0884D828u>(ctx, &aot_mem) && ctx.pc == 0x08851AD8u) goto L_08851AD8;
    return;
L_08851AD8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
        goto L_08851AFC;
    }
    goto L_08851AE4;
L_08851AE4:
    ctx.set_gpr(31, 0x08851AECu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 358u, 0x088413B0u>(ctx, &aot_mem) && ctx.pc == 0x08851AECu) goto L_08851AEC;
    return;
L_08851AEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08851AF8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x08851AF8u) goto L_08851AF8;
    return;
L_08851AF8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_08851AFC;
L_08851AFC:
    ctx.set_gpr(31, 0x08851B04u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 111u, 0x088406A0u>(ctx, &aot_mem) && ctx.pc == 0x08851B04u) goto L_08851B04;
    return;
L_08851B04:
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
L_08851B1C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851B24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08851B3Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 872u, 0x08843A88u>(ctx, &aot_mem) && ctx.pc == 0x08851B3Cu) goto L_08851B3C;
    return;
L_08851B3C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851B54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27936));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08851B78u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1024));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08851B78u) goto L_08851B78;
    return;
L_08851B78:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, 2244u << 16u);
    ctx.set_gpr(4, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26912), 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24288));
    ctx.set_gpr(5, 16256u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27936));
    goto L_08851B98;
L_08851B98:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(136), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(184), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(192), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(200), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(224), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(228), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(232), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(236), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(240), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(244), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(248), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(252), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(272), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(276), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(280), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(284), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(288), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(292), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(300), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(324), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(328), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(332), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(336), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(340), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(344), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(348), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(352), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(356), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(376), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(380), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(384), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(388), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(392), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(396), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(400), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(416));
      if (branch_taken) {
          goto L_08851B98;
      }
      goto L_08851CC8;
    }
L_08851CC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851CD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[11]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26912)));
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, 2244u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24288));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(31, 0x08851D2Cu);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08852408;
L_08851D2C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
        goto L_08851D44;
    }
    goto L_08851D3C;
L_08851D3C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08851D4C;
      }
      goto L_08851D44;
    }
L_08851D44:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    goto L_08851D4C;
L_08851D4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08851D60u);
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1u, 0x0881C004u>(ctx, &aot_mem) && ctx.pc == 0x08851D60u) goto L_08851D60;
    return;
L_08851D60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26912)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26912), ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2244u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(24288));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851DD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26912)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08851E3C;
      }
      goto L_08851DF4;
    }
L_08851DF4:
    ctx.set_gpr(16, 2244u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(24288));
    goto L_08851DFC;
L_08851DFC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08851E24;
      }
      goto L_08851E08;
    }
L_08851E08:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26908), ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08851E24;
      }
      goto L_08851E1C;
    }
L_08851E1C:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08851E24u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08851E24u) goto L_08851E24;
    return;
L_08851E24:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26912)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08851DFC;
      }
      goto L_08851E3C;
    }
L_08851E3C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08851F00;
      }
      goto L_08851E44;
    }
L_08851E44:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26912)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08851EB8;
      }
      goto L_08851E58;
    }
L_08851E58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_08851E78;
      }
      goto L_08851E60;
    }
L_08851E60:
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08851E78;
      }
      goto L_08851E74;
    }
L_08851E74:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08851E78;
L_08851E78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08851EB8;
      }
      goto L_08851E80;
    }
L_08851E80:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24288));
    goto L_08851E88;
L_08851E88:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(200), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(252), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(356), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(416));
      if (branch_taken) {
          goto L_08851E88;
      }
      goto L_08851EB8;
    }
L_08851EB8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26912)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08851F00;
      }
      goto L_08851ECC;
    }
L_08851ECC:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2244u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24288));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08851EEC;
L_08851EEC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08851EEC;
      }
      goto L_08851F00;
    }
L_08851F00:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27936));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08851F14u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1024));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08851F14u) goto L_08851F14;
    return;
L_08851F14:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26912), 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-27936));
    ctx.set_gpr(2, 2244u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24328), ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26904)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26900)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26896)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x08851F50u);
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    goto L_08852084;
L_08851F50:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x08851F5Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26888)));
    goto L_08852494;
L_08851F5C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26884)));
    ctx.set_gpr(31, 0x08851F6Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_088522A8;
L_08851F6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851F80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26912)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_0885204C;
      }
      goto L_08851F98;
    }
L_08851F98:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08852004;
      }
      goto L_08851FA4;
    }
L_08851FA4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_08851FC4;
      }
      goto L_08851FAC;
    }
L_08851FAC:
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08851FC4;
      }
      goto L_08851FC0;
    }
L_08851FC0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08851FC4;
L_08851FC4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852004;
      }
      goto L_08851FCC;
    }
L_08851FCC:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24288));
    goto L_08851FD4;
L_08851FD4:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(200), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(252), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(356), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(416));
      if (branch_taken) {
          goto L_08851FD4;
      }
      goto L_08852004;
    }
L_08852004:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26912)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885204C;
      }
      goto L_08852018;
    }
L_08852018:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2244u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24288));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08852038;
L_08852038:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08852038;
      }
      goto L_0885204C;
    }
L_0885204C:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27936));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08852060u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1024));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08852060u) goto L_08852060;
    return;
L_08852060:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26912), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27936));
    ctx.set_gpr(3, 2244u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24328), ctx.gpr[4]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852084:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26912)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852244;
      }
      goto L_08852098;
    }
L_08852098:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[3]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 256 ? 1u : 0u);
        goto L_088521FC;
    }
    goto L_088520AC;
L_088520AC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 257 ? 1u : 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_088520D8;
      }
      goto L_088520C0;
    }
L_088520C0:
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088520D8;
      }
      goto L_088520D4;
    }
L_088520D4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088520D8;
L_088520D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088520F8;
      }
      goto L_088520E0;
    }
L_088520E0:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26912)));
    ctx.set_gpr(4, 32768u << 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088520F8;
      }
      goto L_088520F4;
    }
L_088520F4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_088520F8;
L_088520F8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852140;
      }
      goto L_08852100;
    }
L_08852100:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26912)));
    ctx.set_gpr(5, 32768u << 16u);
    ctx.set_gpr(4, 0u - ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08852134;
      }
      goto L_0885211C;
    }
L_0885211C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852134;
      }
      goto L_08852130;
    }
L_08852130:
    ctx.set_gpr(7, 0u + 0u);
    goto L_08852134;
L_08852134:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852140;
      }
      goto L_0885213C;
    }
L_0885213C:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_08852140;
L_08852140:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088521F8;
      }
      goto L_08852148;
    }
L_08852148:
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24288));
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[5]);
    goto L_08852168;
L_08852168:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 248 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(416));
      if (branch_taken) {
          goto L_08852168;
      }
      goto L_088521F8;
    }
L_088521F8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 256 ? 1u : 0u);
    goto L_088521FC;
L_088521FC:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852244;
      }
      goto L_08852204;
    }
L_08852204:
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24288));
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[5]);
    goto L_08852224;
L_08852224:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08852224;
      }
      goto L_08852244;
    }
L_08852244:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26904), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26900), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26896), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_gpr(3, 2245u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26892), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852268:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26912)));
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24300));
    ctx.set_gpr(5, ctx.gpr[6] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(3, 2244u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(24304));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088522A8:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26912)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088523FC;
      }
      goto L_088522BC;
    }
L_088522BC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 256 ? 1u : 0u);
        goto L_088523C0;
    }
    goto L_088522D0;
L_088522D0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 257 ? 1u : 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_088522FC;
      }
      goto L_088522E4;
    }
L_088522E4:
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088522FC;
      }
      goto L_088522F8;
    }
L_088522F8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_088522FC;
L_088522FC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885231C;
      }
      goto L_08852304;
    }
L_08852304:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26912)));
    ctx.set_gpr(5, 32768u << 16u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885231C;
      }
      goto L_08852318;
    }
L_08852318:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_0885231C;
L_0885231C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852364;
      }
      goto L_08852324;
    }
L_08852324:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26912)));
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(5, 0u - ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08852358;
      }
      goto L_08852340;
    }
L_08852340:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852358;
      }
      goto L_08852354;
    }
L_08852354:
    ctx.set_gpr(8, 0u + 0u);
    goto L_08852358;
L_08852358:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852364;
      }
      goto L_08852360;
    }
L_08852360:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    goto L_08852364;
L_08852364:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088523BC;
      }
      goto L_0885236C;
    }
L_0885236C:
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, 2244u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24288));
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[6]);
    goto L_0885238C;
L_0885238C:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(268), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(320), ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(372), ctx.gpr[4]);
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[3]) < 248 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(416));
      if (branch_taken) {
          goto L_0885238C;
      }
      goto L_088523BC;
    }
L_088523BC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 256 ? 1u : 0u);
    goto L_088523C0;
L_088523C0:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088523FC;
      }
      goto L_088523C8;
    }
L_088523C8:
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, 2244u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24288));
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[6]);
    goto L_088523E8;
L_088523E8:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[3]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_088523E8;
      }
      goto L_088523FC;
    }
L_088523FC:
    ctx.set_gpr(3, 2245u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26884), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852408:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0885241Cu);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_08852434;
L_0885241C:
    ctx.set_gpr(31, 0x08852424u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08852464;
L_08852424:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852434:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26912)));
    ctx.set_gpr(5, ctx.gpr[6] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, 2244u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(24288));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852464:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26912)));
    ctx.set_gpr(5, ctx.gpr[6] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, 2244u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(24292));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852494:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26912)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088525E8;
      }
      goto L_088524A8;
    }
L_088524A8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 256 ? 1u : 0u);
        goto L_088525AC;
    }
    goto L_088524BC;
L_088524BC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 257 ? 1u : 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_088524E8;
      }
      goto L_088524D0;
    }
L_088524D0:
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088524E8;
      }
      goto L_088524E4;
    }
L_088524E4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_088524E8;
L_088524E8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852508;
      }
      goto L_088524F0;
    }
L_088524F0:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26912)));
    ctx.set_gpr(5, 32768u << 16u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08852508;
      }
      goto L_08852504;
    }
L_08852504:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_08852508;
L_08852508:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852550;
      }
      goto L_08852510;
    }
L_08852510:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26912)));
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(5, 0u - ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08852544;
      }
      goto L_0885252C;
    }
L_0885252C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852544;
      }
      goto L_08852540;
    }
L_08852540:
    ctx.set_gpr(8, 0u + 0u);
    goto L_08852544;
L_08852544:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852550;
      }
      goto L_0885254C;
    }
L_0885254C:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    goto L_08852550;
L_08852550:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088525A8;
      }
      goto L_08852558;
    }
L_08852558:
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, 2244u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24288));
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[6]);
    goto L_08852578;
L_08852578:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(204), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(360), ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[3]) < 248 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(416));
      if (branch_taken) {
          goto L_08852578;
      }
      goto L_088525A8;
    }
L_088525A8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 256 ? 1u : 0u);
    goto L_088525AC;
L_088525AC:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088525E8;
      }
      goto L_088525B4;
    }
L_088525B4:
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, 2244u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24288));
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[6]);
    goto L_088525D4;
L_088525D4:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[3]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_088525D4;
      }
      goto L_088525E8;
    }
L_088525E8:
    ctx.set_gpr(3, 2245u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26888), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088525F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08852690;
      }
      goto L_0885260C;
    }
L_0885260C:
    ctx.set_gpr(31, 0x08852614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 177u, 0x08848BDCu>(ctx, &aot_mem) && ctx.pc == 0x08852614u) goto L_08852614;
    return;
L_08852614:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08852628u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x08852628u) goto L_08852628;
    return;
L_08852628:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08852634u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 858u, 0x0883FF30u>(ctx, &aot_mem) && ctx.pc == 0x08852634u) goto L_08852634;
    return;
L_08852634:
    ctx.set_gpr(31, 0x0885263Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 177u, 0x08848BDCu>(ctx, &aot_mem) && ctx.pc == 0x0885263Cu) goto L_0885263C;
    return;
L_0885263C:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08852658u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x08852658u) goto L_08852658;
    return;
L_08852658:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08852664u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 859u, 0x0883FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x08852664u) goto L_08852664;
    return;
L_08852664:
    ctx.set_gpr(31, 0x0885266Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 177u, 0x08848BDCu>(ctx, &aot_mem) && ctx.pc == 0x0885266Cu) goto L_0885266C;
    return;
L_0885266C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08852690u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 275u, 0x0883D598u>(ctx, &aot_mem) && ctx.pc == 0x08852690u) goto L_08852690;
    return;
L_08852690:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088526A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26888)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8980));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088526C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26888)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8984));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088526E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 2181u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6104));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5476));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(110));
    ctx.set_gpr(31, 0x0885272Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 179u, 0x08804B94u>(ctx, &aot_mem) && ctx.pc == 0x0885272Cu) goto L_0885272C;
    return;
L_0885272C:
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 2181u << 16u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(13216));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-14636));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23932));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0885274Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(110));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 179u, 0x08804B94u>(ctx, &aot_mem) && ctx.pc == 0x0885274Cu) goto L_0885274C;
    return;
L_0885274C:
    ctx.set_gpr(31, 0x08852754u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(14516));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08852754u) goto L_08852754;
    return;
L_08852754:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(22, 0u + 0u);
    goto L_08852764;
L_08852764:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_0885276C;
L_0885276C:
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(13216));
    ctx.set_gpr(31, 0x08852780u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x08852780u) goto L_08852780;
    return;
L_08852780:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13656), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13766), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13876), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885276C;
      }
      goto L_088527A4;
    }
L_088527A4:
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(14428), 0u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 22 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08852764;
      }
      goto L_088527C4;
    }
L_088527C4:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(14580), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_08852800:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08852860;
      }
      goto L_0885281C;
    }
L_0885281C:
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(13216));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23932));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08852834u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(110));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 174u, 0x08804B28u>(ctx, &aot_mem) && ctx.pc == 0x08852834u) goto L_08852834;
    return;
L_08852834:
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5476));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x0885284Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(110));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 174u, 0x08804B28u>(ctx, &aot_mem) && ctx.pc == 0x0885284Cu) goto L_0885284C;
    return;
L_0885284C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08852864;
    }
    goto L_08852858;
L_08852858:
    ctx.set_gpr(31, 0x08852860u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08852860u) goto L_08852860;
    return;
L_08852860:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08852864;
L_08852864:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852878:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852880:
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
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088528C0;
      }
      goto L_088528B8;
    }
L_088528B8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08852930;
      }
      goto L_088528C0;
    }
L_088528C0:
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[22] + 0u);
    ctx.set_gpr(18, ctx.gpr[22] + 0u);
    ctx.set_gpr(17, ctx.gpr[22] + 0u);
    goto L_088528D0;
L_088528D0:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    goto L_088528D8;
L_088528D8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(13216));
    ctx.set_gpr(31, 0x088528E4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x088528E4u) goto L_088528E4;
    return;
L_088528E4:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13656), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13766), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13876), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088528D8;
      }
      goto L_08852904;
    }
L_08852904:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(14428), 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 22 ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088528D0;
      }
      goto L_08852920;
    }
L_08852920:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(12), ctx.gpr[23]);
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(14580), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08852930;
L_08852930:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
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
L_0885295C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(14580)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08852B14;
      }
      goto L_0885299C;
    }
L_0885299C:
    ctx.set_gpr(31, 0x088529A4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x088529A4u) goto L_088529A4;
    return;
L_088529A4:
    ctx.set_gpr(31, 0x088529ACu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x088529ACu) goto L_088529AC;
    return;
L_088529AC:
    ctx.set_gpr(31, 0x088529B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x088529B4u) goto L_088529B4;
    return;
L_088529B4:
    ctx.set_gpr(31, 0x088529BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 510u, 0x08847284u>(ctx, &aot_mem) && ctx.pc == 0x088529BCu) goto L_088529BC;
    return;
L_088529BC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088529C8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x088529C8u) goto L_088529C8;
    return;
L_088529C8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    ctx.set_gpr(30, ctx.gpr[21] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    ctx.set_gpr(23, ctx.gpr[21] + 0u);
    goto L_088529DC;
L_088529DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(14428)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08852AC4;
      }
      goto L_088529E8;
    }
L_088529E8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_088529F0;
L_088529F0:
    ctx.set_gpr(16, ctx.gpr[30] + ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(13656)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.set_gpr(22, ctx.gpr[16] + static_cast<std::uint32_t>(13656));
      if (branch_taken) {
          goto L_08852AAC;
      }
      goto L_08852A04;
    }
L_08852A04:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(13766)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_08852A74;
    }
    goto L_08852A10;
L_08852A10:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(13876)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(13876));
      if (branch_taken) {
          goto L_08852A24;
      }
      goto L_08852A1C;
    }
L_08852A1C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08852A70;
      }
      goto L_08852A24;
    }
L_08852A24:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08852A30u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08850B30;
L_08852A30:
    ctx.set_gpr(31, 0x08852A38u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x08852A38u) goto L_08852A38;
    return;
L_08852A38:
    ctx.set_gpr(31, 0x08852A40u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 560u, 0x0884A250u>(ctx, &aot_mem) && ctx.pc == 0x08852A40u) goto L_08852A40;
    return;
L_08852A40:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08852A50u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08852A50u) goto L_08852A50;
    return;
L_08852A50:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08852A60u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(14516));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08852A60u) goto L_08852A60;
    return;
L_08852A60:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08852A70u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08852A70u) goto L_08852A70;
    return;
L_08852A70:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_08852A74;
L_08852A74:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08852A80u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08850450;
L_08852A80:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(14428)));
        goto L_08852AB0;
    }
    goto L_08852A8C;
L_08852A8C:
    ctx.set_gpr(31, 0x08852A94u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08852A94u) goto L_08852A94;
    return;
L_08852A94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13988)));
    ctx.set_gpr(31, 0x08852AA4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_088519C4;
L_08852AA4:
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13876), static_cast<std::uint8_t>(0u));
    goto L_08852AAC;
L_08852AAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(14428)));
    goto L_08852AB0;
L_08852AB0:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088529F0;
      }
      goto L_08852AC4;
    }
L_08852AC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(600));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088529DC;
      }
      goto L_08852AF8;
    }
L_08852AF8:
    ctx.set_gpr(31, 0x08852B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08852B00u) goto L_08852B00;
    return;
L_08852B00:
    ctx.set_gpr(31, 0x08852B08u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 510u, 0x08847284u>(ctx, &aot_mem) && ctx.pc == 0x08852B08u) goto L_08852B08;
    return;
L_08852B08:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(14516));
    ctx.set_gpr(31, 0x08852B14u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 872u, 0x08843A88u>(ctx, &aot_mem) && ctx.pc == 0x08852B14u) goto L_08852B14;
    return;
L_08852B14:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852B44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16324)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16328)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16376));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16332)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16336)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16340)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16344)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16348)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16352)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16356)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16360)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16364)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16368)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08852C0C;
L_08852C0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08852C0C;
      }
      goto L_08852C2C;
    }
L_08852C2C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08852C40;
    }
    goto L_08852C38;
L_08852C38:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08853014;
      }
      goto L_08852C40;
    }
L_08852C40:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08853014;
    }
    goto L_08852C4C;
L_08852C4C:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8548));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852C68:
    ctx.set_gpr(31, 0x08852C70u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 518u, 0x08B06174u>(ctx, &aot_mem) && ctx.pc == 0x08852C70u) goto L_08852C70;
    return;
L_08852C70:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(19, ctx.gpr[16] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(22, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    goto L_08852C80;
L_08852C80:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[19] + 0u);
    goto L_08852C88;
L_08852C88:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(13216));
    ctx.set_gpr(31, 0x08852C94u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x08852C94u) goto L_08852C94;
    return;
L_08852C94:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13656), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13766), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13876), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08852C88;
      }
      goto L_08852CB4;
    }
L_08852CB4:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(14428), 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 22 ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08852C80;
      }
      goto L_08852CD0;
    }
L_08852CD0:
    ctx.set_gpr(31, 0x08852CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08852CD8u) goto L_08852CD8;
    return;
L_08852CD8:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08852CE8u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16472));
    goto L_0885303C;
L_08852CE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08852CFC;
L_08852CFC:
    ctx.set_gpr(31, 0x08852D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08852D04u) goto L_08852D04;
    return;
L_08852D04:
    ctx.set_gpr(31, 0x08852D0Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1038u, 0x08AAFF54u>(ctx, &aot_mem) && ctx.pc == 0x08852D0Cu) goto L_08852D0C;
    return;
L_08852D0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853010;
      }
      goto L_08852D14;
    }
L_08852D14:
    ctx.set_gpr(31, 0x08852D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08852D1Cu) goto L_08852D1C;
    return;
L_08852D1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08852D3Cu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 27u, 0x08AB0148u>(ctx, &aot_mem) && ctx.pc == 0x08852D3Cu) goto L_08852D3C;
    return;
L_08852D3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08852D48;
L_08852D48:
    ctx.set_gpr(31, 0x08852D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08852D50u) goto L_08852D50;
    return;
L_08852D50:
    ctx.set_gpr(31, 0x08852D58u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 61u, 0x08AB0304u>(ctx, &aot_mem) && ctx.pc == 0x08852D58u) goto L_08852D58;
    return;
L_08852D58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853010;
      }
      goto L_08852D60;
    }
L_08852D60:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08852D84u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 790u, 0x0884EB34u>(ctx, &aot_mem) && ctx.pc == 0x08852D84u) goto L_08852D84;
    return;
L_08852D84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08853010;
      }
      goto L_08852D94;
    }
L_08852D94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08852DC8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 791u, 0x0884EB3Cu>(ctx, &aot_mem) && ctx.pc == 0x08852DC8u) goto L_08852DC8;
    return;
L_08852DC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853010;
      }
      goto L_08852DD0;
    }
L_08852DD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08853010;
      }
      goto L_08852DE0;
    }
L_08852DE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(21, 0u + 0u);
      if (branch_taken) {
          goto L_08852F40;
      }
      goto L_08852DFC;
    }
L_08852DFC:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08852E0C;
L_08852E0C:
    ctx.set_gpr(2, ctx.gpr[4] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-216), ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-212), ctx.gpr[19]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(9, ctx.gpr[8] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08852E74u);
    ctx.set_gpr(10, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 1069u, 0x0884F85Cu>(ctx, &aot_mem) && ctx.pc == 0x08852E74u) goto L_08852E74;
    return;
L_08852E74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(31, 0x08852E98u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 569u, 0x0884A2D4u>(ctx, &aot_mem) && ctx.pc == 0x08852E98u) goto L_08852E98;
    return;
L_08852E98:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x08852EA4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08852EA4u) goto L_08852EA4;
    return;
L_08852EA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13656), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13766), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13876), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13988), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08852E0C;
      }
      goto L_08852F40;
    }
L_08852F40:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(14428), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[4] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08852F7Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 808u, 0x0884EC14u>(ctx, &aot_mem) && ctx.pc == 0x08852F7Cu) goto L_08852F7C;
    return;
L_08852F7C:
    ctx.set_gpr(31, 0x08852F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08852F84u) goto L_08852F84;
    return;
L_08852F84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08852FA0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 97u, 0x08AB0554u>(ctx, &aot_mem) && ctx.pc == 0x08852FA0u) goto L_08852FA0;
    return;
L_08852FA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08852FC0;
      }
      goto L_08852FB4;
    }
L_08852FB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08853010;
      }
      goto L_08852FC0;
    }
L_08852FC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08853010;
      }
      goto L_08852FD0;
    }
L_08852FD0:
    ctx.set_gpr(31, 0x08852FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08852FD8u) goto L_08852FD8;
    return;
L_08852FD8:
    ctx.set_gpr(31, 0x08852FE0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x08852FE0u) goto L_08852FE0;
    return;
L_08852FE0:
    ctx.set_gpr(31, 0x08852FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08852FE8u) goto L_08852FE8;
    return;
L_08852FE8:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08852FF8u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16492));
    goto L_0885303C;
L_08852FF8:
    ctx.set_gpr(31, 0x08853000u);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 518u, 0x08B06174u>(ctx, &aot_mem) && ctx.pc == 0x08853000u) goto L_08853000;
    return;
L_08853000:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08853014;
      }
      goto L_08853010;
    }
L_08853010:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08853014;
L_08853014:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885303C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28));
    goto L_08853044;
L_08853044:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08853060u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_08853170;
L_08853060:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885306Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0885306Cu) goto L_0885306C;
    return;
L_0885306C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08853078u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08853094;
L_08853078:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
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
L_08853094:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x088530A8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08853128;
L_088530A8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_088530C4;
    }
    goto L_088530B0;
L_088530B0:
    ctx.set_gpr(31, 0x088530B8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0885311C;
L_088530B8:
    ctx.set_gpr(31, 0x088530C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088530D0;
L_088530C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_088530C4;
L_088530C4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088530D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088530E8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_0885310C;
L_088530E8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08853100;
    }
    goto L_088530F0;
L_088530F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088530FCu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088530FCu) goto L_088530FC;
    return;
L_088530FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08853100;
L_08853100:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885310C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885311C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853128:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08853154;
    }
    goto L_08853140;
L_08853140:
    ctx.set_gpr(31, 0x08853148u);
    // nop
    goto L_0885315C;
L_08853148:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08853154;
L_08853154:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885315C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853170:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088531A8;
      }
      goto L_08853188;
    }
L_08853188:
    ctx.set_gpr(31, 0x08853190u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08853190u) goto L_08853190;
    return;
L_08853190:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088531A0;
      }
      goto L_08853198;
    }
L_08853198:
    ctx.set_gpr(31, 0x088531A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x088531A0u) goto L_088531A0;
    return;
L_088531A0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_088531A8;
L_088531A8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088531BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088531FC;
      }
      goto L_088531F4;
    }
L_088531F4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08853524;
      }
      goto L_088531FC;
    }
L_088531FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08853524;
    }
    goto L_0885320C;
L_0885320C:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8572));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853228:
    if (ctx.gpr[10] == 0u) {
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
        goto L_0885325C;
    }
    goto L_08853230;
L_08853230:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08853248u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08853248u) goto L_08853248;
    return;
L_08853248:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853258;
      }
      goto L_08853250;
    }
L_08853250:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08853524;
      }
      goto L_08853258;
    }
L_08853258:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_0885325C;
L_0885325C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08853268u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_088537A8;
L_08853268:
    ctx.set_gpr(31, 0x08853270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08853270u) goto L_08853270;
    return;
L_08853270:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08853280u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16472));
    goto L_0885303C;
L_08853280:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_0885329C;
    }
    goto L_0885328C;
L_0885328C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08853520;
      }
      goto L_0885329C;
    }
L_0885329C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088532A4;
L_088532A4:
    ctx.set_gpr(31, 0x088532ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x088532ACu) goto L_088532AC;
    return;
L_088532AC:
    ctx.set_gpr(31, 0x088532B4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1038u, 0x08AAFF54u>(ctx, &aot_mem) && ctx.pc == 0x088532B4u) goto L_088532B4;
    return;
L_088532B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853520;
      }
      goto L_088532BC;
    }
L_088532BC:
    ctx.set_gpr(31, 0x088532C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x088532C4u) goto L_088532C4;
    return;
L_088532C4:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088532D4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 27u, 0x08AB0148u>(ctx, &aot_mem) && ctx.pc == 0x088532D4u) goto L_088532D4;
    return;
L_088532D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088532E0;
L_088532E0:
    ctx.set_gpr(31, 0x088532E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x088532E8u) goto L_088532E8;
    return;
L_088532E8:
    ctx.set_gpr(31, 0x088532F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 61u, 0x08AB0304u>(ctx, &aot_mem) && ctx.pc == 0x088532F0u) goto L_088532F0;
    return;
L_088532F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853520;
      }
      goto L_088532F8;
    }
L_088532F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08853520;
      }
      goto L_08853308;
    }
L_08853308:
    ctx.set_gpr(31, 0x08853310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08853310u) goto L_08853310;
    return;
L_08853310:
    ctx.set_gpr(31, 0x08853318u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1038u, 0x08AAFF54u>(ctx, &aot_mem) && ctx.pc == 0x08853318u) goto L_08853318;
    return;
L_08853318:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853520;
      }
      goto L_08853320;
    }
L_08853320:
    ctx.set_gpr(2, ctx.gpr[19] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08853358u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 790u, 0x0884EB34u>(ctx, &aot_mem) && ctx.pc == 0x08853358u) goto L_08853358;
    return;
L_08853358:
    ctx.set_gpr(31, 0x08853360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08853360u) goto L_08853360;
    return;
L_08853360:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08853370u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 33u, 0x08AB01ACu>(ctx, &aot_mem) && ctx.pc == 0x08853370u) goto L_08853370;
    return;
L_08853370:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0885337C;
L_0885337C:
    ctx.set_gpr(31, 0x08853384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08853384u) goto L_08853384;
    return;
L_08853384:
    ctx.set_gpr(31, 0x0885338Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 61u, 0x08AB0304u>(ctx, &aot_mem) && ctx.pc == 0x0885338Cu) goto L_0885338C;
    return;
L_0885338C:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08853520;
      }
      goto L_0885339C;
    }
L_0885339C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08853520;
      }
      goto L_088533AC;
    }
L_088533AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
        goto L_088534B4;
    }
    goto L_088533BC;
L_088533BC:
    ctx.set_gpr(2, ctx.gpr[19] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[9] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08853400u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 975u, 0x0884F404u>(ctx, &aot_mem) && ctx.pc == 0x08853400u) goto L_08853400;
    return;
L_08853400:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(17, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08853428u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 569u, 0x0884A2D4u>(ctx, &aot_mem) && ctx.pc == 0x08853428u) goto L_08853428;
    return;
L_08853428:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08853434u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08853434u) goto L_08853434;
    return;
L_08853434:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13656), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13766), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13876), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08853490;
    }
    goto L_08853474;
L_08853474:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[16]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13988), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088534A4;
      }
      goto L_08853490;
    }
L_08853490:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[16]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13988), ctx.gpr[4]);
    goto L_088534A4;
L_088534A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08853520;
      }
      goto L_088534B4;
    }
L_088534B4:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(14428), ctx.gpr[17]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088534DC;
      }
      goto L_088534C8;
    }
L_088534C8:
    ctx.set_gpr(31, 0x088534D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x088534D0u) goto L_088534D0;
    return;
L_088534D0:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088534DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 97u, 0x08AB0554u>(ctx, &aot_mem) && ctx.pc == 0x088534DCu) goto L_088534DC;
    return;
L_088534DC:
    ctx.set_gpr(31, 0x088534E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x088534E4u) goto L_088534E4;
    return;
L_088534E4:
    ctx.set_gpr(31, 0x088534ECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x088534ECu) goto L_088534EC;
    return;
L_088534EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08853520;
      }
      goto L_088534FC;
    }
L_088534FC:
    ctx.set_gpr(31, 0x08853504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08853504u) goto L_08853504;
    return;
L_08853504:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08853514u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16492));
    goto L_0885303C;
L_08853514:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08853524;
      }
      goto L_08853520;
    }
L_08853520:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08853524;
L_08853524:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853544:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    ctx.set_gpr(30, ctx.gpr[10] + 0u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08853594;
      }
      goto L_0885358C;
    }
L_0885358C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08853778;
      }
      goto L_08853594;
    }
L_08853594:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(20, 0u + 0u);
        goto L_08853658;
    }
    goto L_088535A4;
L_088535A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[22] << 4u);
        goto L_08853620;
    }
    goto L_088535B0;
L_088535B0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088535C0;
      }
      goto L_088535B8;
    }
L_088535B8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08853778;
      }
      goto L_088535C0;
    }
L_088535C0:
    if (ctx.gpr[11] == 0u) {
    ctx.set_gpr(2, ctx.gpr[22] << 4u);
        goto L_088535F4;
    }
    goto L_088535C8;
L_088535C8:
    ctx.set_gpr(2, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x088535E0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088535E0u) goto L_088535E0;
    return;
L_088535E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088535F0;
      }
      goto L_088535E8;
    }
L_088535E8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08853778;
      }
      goto L_088535F0;
    }
L_088535F0:
    ctx.set_gpr(2, ctx.gpr[22] << 4u);
    goto L_088535F4;
L_088535F4:
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08853610u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 790u, 0x0884EB34u>(ctx, &aot_mem) && ctx.pc == 0x08853610u) goto L_08853610;
    return;
L_08853610:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08853774;
      }
      goto L_08853620;
    }
L_08853620:
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08853640u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 791u, 0x0884EB3Cu>(ctx, &aot_mem) && ctx.pc == 0x08853640u) goto L_08853640;
    return;
L_08853640:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853774;
      }
      goto L_08853648;
    }
L_08853648:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08853774;
      }
      goto L_08853658;
    }
L_08853658:
    if (static_cast<std::int32_t>(ctx.gpr[23]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[22] << 4u);
        goto L_0885373C;
    }
    goto L_08853660;
L_08853660:
    ctx.set_gpr(19, ctx.gpr[9] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    goto L_08853668;
L_08853668:
    ctx.set_gpr(17, ctx.gpr[22] + ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885367Cu);
    ctx.set_gpr(6, 0u + 0u);
    goto L_088537A8;
L_0885367C:
    ctx.set_gpr(2, ctx.gpr[17] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x088536B4u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 1069u, 0x0884F85Cu>(ctx, &aot_mem) && ctx.pc == 0x088536B4u) goto L_088536B4;
    return;
L_088536B4:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(16, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(13216));
    ctx.set_gpr(31, 0x088536D0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 569u, 0x0884A2D4u>(ctx, &aot_mem) && ctx.pc == 0x088536D0u) goto L_088536D0;
    return;
L_088536D0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x088536DCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x088536DCu) goto L_088536DC;
    return;
L_088536DC:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(13656), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(13766), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(13876), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(5)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
        goto L_08853710;
    }
    goto L_08853704;
L_08853704:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(13988), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08853714;
      }
      goto L_08853710;
    }
L_08853710:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(13988), ctx.gpr[2]);
    goto L_08853714;
L_08853714:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(14428), ctx.gpr[3]);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08853668;
      }
      goto L_08853738;
    }
L_08853738:
    ctx.set_gpr(2, ctx.gpr[22] << 4u);
    goto L_0885373C;
L_0885373C:
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x0885375Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 808u, 0x0884EC14u>(ctx, &aot_mem) && ctx.pc == 0x0885375Cu) goto L_0885375C;
    return;
L_0885375C:
    ctx.set_gpr(31, 0x08853764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08853764u) goto L_08853764;
    return;
L_08853764:
    ctx.set_gpr(31, 0x0885376Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x0885376Cu) goto L_0885376C;
    return;
L_0885376C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08853778;
      }
      goto L_08853774;
    }
L_08853774:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08853778;
L_08853778:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088537A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(22, ctx.gpr[3] + static_cast<std::uint32_t>(14428));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14428)));
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08853898;
      }
      goto L_088537EC;
    }
L_088537EC:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(18, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(17, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(16, ctx.gpr[21] + ctx.gpr[2]);
    goto L_08853814;
L_08853814:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(13656)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(13216));
        goto L_0885386C;
    }
    goto L_08853820;
L_08853820:
    if (ctx.gpr[20] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(13216));
        goto L_08853848;
    }
    goto L_08853828;
L_08853828:
    ctx.set_gpr(31, 0x08853830u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08853830u) goto L_08853830;
    return;
L_08853830:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13988)));
    ctx.set_gpr(31, 0x08853840u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_088519C4;
L_08853840:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(13656), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08853860;
      }
      goto L_08853848;
    }
L_08853848:
    ctx.set_gpr(31, 0x08853850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08853850u) goto L_08853850;
    return;
L_08853850:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885385Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x0885385Cu) goto L_0885385C;
    return;
L_0885385C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(13656), static_cast<std::uint8_t>(0u));
    goto L_08853860;
L_08853860:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(13766), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(13876), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(13216));
    goto L_0885386C;
L_0885386C:
    ctx.set_gpr(31, 0x08853874u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x08853874u) goto L_08853874;
    return;
L_08853874:
    ctx.set_gpr(31, 0x0885387Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08850228;
L_0885387C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(120));
      if (branch_taken) {
          goto L_08853814;
      }
      goto L_08853898;
    }
L_08853898:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_088538C4:
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[21]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(14428));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14428)));
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08853A38;
      }
      goto L_08853918;
    }
L_08853918:
    ctx.set_gpr(18, ctx.gpr[4] + ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[21] + ctx.gpr[18]);
    goto L_08853920;
L_08853920:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13656)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
        goto L_08853A28;
    }
    goto L_0885392C;
L_0885392C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08853954;
      }
      goto L_08853938;
    }
L_08853938:
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13988), ctx.gpr[8]);
    goto L_08853954;
L_08853954:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
        goto L_0885399C;
    }
    goto L_0885395C;
L_0885395C:
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(16, ctx.gpr[2] << 2u);
    ctx.set_gpr(17, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(31, 0x0885397Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885397Cu) goto L_0885397C;
    return;
L_0885397C:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[21]);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13988)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08853994u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0885186C;
L_08853994:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[20] << 4u);
      if (branch_taken) {
          goto L_088539C8;
      }
      goto L_0885399C;
    }
L_0885399C:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x088539B8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088539B8u) goto L_088539B8;
    return;
L_088539B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088539C4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x088539C4u) goto L_088539C4;
    return;
L_088539C4:
    ctx.set_gpr(2, ctx.gpr[20] << 4u);
    goto L_088539C8;
L_088539C8:
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08853A00u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08850B38;
L_08853A00:
    ctx.set_gpr(31, 0x08853A08u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0885092C;
L_08853A08:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[21]);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[20] << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(13656), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(13876), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08853A3C;
      }
      goto L_08853A28;
    }
L_08853A28:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08853920;
      }
      goto L_08853A38;
    }
L_08853A38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08853A3C;
L_08853A3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
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
L_08853A68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(23, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08853B54;
      }
      goto L_08853AA4;
    }
L_08853AA4:
    ctx.set_gpr(30, 0u + 0u);
    ctx.set_gpr(22, ctx.gpr[23] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    ctx.set_gpr(19, ctx.gpr[23] + 0u);
    goto L_08853AB4;
L_08853AB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(14428)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08853B2C;
      }
      goto L_08853AC0;
    }
L_08853AC0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08853AC4;
L_08853AC4:
    ctx.set_gpr(17, ctx.gpr[22] + ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(13656)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(13656));
      if (branch_taken) {
          goto L_08853B18;
      }
      goto L_08853AD4;
    }
L_08853AD4:
    if (ctx.gpr[21] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(13216));
        goto L_08853AFC;
    }
    goto L_08853ADC;
L_08853ADC:
    ctx.set_gpr(31, 0x08853AE4u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08853AE4u) goto L_08853AE4;
    return;
L_08853AE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(13988)));
    ctx.set_gpr(31, 0x08853AF4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_088519C4;
L_08853AF4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08853B14;
      }
      goto L_08853AFC;
    }
L_08853AFC:
    ctx.set_gpr(31, 0x08853B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08853B04u) goto L_08853B04;
    return;
L_08853B04:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08853B10u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x08853B10u) goto L_08853B10;
    return;
L_08853B10:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08853B14;
L_08853B14:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(13876), static_cast<std::uint8_t>(0u));
    goto L_08853B18;
L_08853B18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(14428)));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08853AC4;
      }
      goto L_08853B2C;
    }
L_08853B2C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(20));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[30]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08853AB4;
      }
      goto L_08853B4C;
    }
L_08853B4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08853BF4;
      }
      goto L_08853B54;
    }
L_08853B54:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(18, ctx.gpr[5] & 255u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[23]);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(13656)));
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(13656));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08853BF0;
      }
      goto L_08853B80;
    }
L_08853B80:
    if (ctx.gpr[21] != 0u) {
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
        goto L_08853BC0;
    }
    goto L_08853B88;
L_08853B88:
    ctx.set_gpr(19, ctx.gpr[17] << 2u);
    ctx.set_gpr(20, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(31, 0x08853BA0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08853BA0u) goto L_08853BA0;
    return;
L_08853BA0:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[23]);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13988)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08853BB8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_088519C4;
L_08853BB8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_08853BE4;
      }
      goto L_08853BC0;
    }
L_08853BC0:
    ctx.set_gpr(3, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08853BD4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08853BD4u) goto L_08853BD4;
    return;
L_08853BD4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08853BE0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x08853BE0u) goto L_08853BE0;
    return;
L_08853BE0:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[23]);
    goto L_08853BE4;
L_08853BE4:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(13876), static_cast<std::uint8_t>(0u));
    goto L_08853BF0;
L_08853BF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08853BF4;
L_08853BF4:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853C20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(13656)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08853C84;
    }
    goto L_08853C50;
L_08853C50:
    ctx.set_gpr(2, ctx.gpr[7] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08853C80u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    goto L_08850884;
L_08853C80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08853C84;
L_08853C84:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853C8C:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    ctx.set_gpr(2, ctx.gpr[6] << 4u);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853CC4:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[5] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13766)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853CE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08853CFCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32088));
    goto L_08853D74;
L_08853CFC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32000));
    ctx.set_gpr(31, 0x08853D14u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08853D14u) goto L_08853D14;
    return;
L_08853D14:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32012), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32080), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32088));
    ctx.set_gpr(31, 0x08853D2Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32084), 0u);
    goto L_08853D5C;
L_08853D2C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32120), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32016), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32020), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32024), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32028), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32164), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853D5C:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853D74:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853D90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08853DC0;
    }
    goto L_08853DA8;
L_08853DA8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08853DBC;
      }
      goto L_08853DB4;
    }
L_08853DB4:
    ctx.set_gpr(31, 0x08853DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08853DBCu) goto L_08853DBC;
    return;
L_08853DBC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08853DC0;
L_08853DC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853DD0:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853DD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08853EDC;
      }
      goto L_08853E1C;
    }
L_08853E1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08853E70;
      }
      goto L_08853E28;
    }
L_08853E28:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853E38;
      }
      goto L_08853E30;
    }
L_08853E30:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08853F8C;
      }
      goto L_08853E38;
    }
L_08853E38:
    ctx.set_gpr(31, 0x08853E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08853E40u) goto L_08853E40;
    return;
L_08853E40:
    ctx.set_gpr(31, 0x08853E48u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1038u, 0x08AAFF54u>(ctx, &aot_mem) && ctx.pc == 0x08853E48u) goto L_08853E48;
    return;
L_08853E48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853F88;
      }
      goto L_08853E50;
    }
L_08853E50:
    ctx.set_gpr(31, 0x08853E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08853E58u) goto L_08853E58;
    return;
L_08853E58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08853E64u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1048u, 0x08AAFFD4u>(ctx, &aot_mem) && ctx.pc == 0x08853E64u) goto L_08853E64;
    return;
L_08853E64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08853E70;
L_08853E70:
    ctx.set_gpr(31, 0x08853E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08853E78u) goto L_08853E78;
    return;
L_08853E78:
    ctx.set_gpr(31, 0x08853E80u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1049u, 0x08AAFFE8u>(ctx, &aot_mem) && ctx.pc == 0x08853E80u) goto L_08853E80;
    return;
L_08853E80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853F88;
      }
      goto L_08853E88;
    }
L_08853E88:
    ctx.set_gpr(31, 0x08853E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08853E90u) goto L_08853E90;
    return;
L_08853E90:
    ctx.set_gpr(31, 0x08853E98u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 976u, 0x08AAFC48u>(ctx, &aot_mem) && ctx.pc == 0x08853E98u) goto L_08853E98;
    return;
L_08853E98:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(1, ctx.gpr[16] < static_cast<std::uint32_t>(32001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08853EAC;
      }
      goto L_08853EA8;
    }
L_08853EA8:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(32000));
    goto L_08853EAC;
L_08853EAC:
    ctx.set_gpr(31, 0x08853EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08853EB4u) goto L_08853EB4;
    return;
L_08853EB4:
    ctx.set_gpr(31, 0x08853EBCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08853EBCu) goto L_08853EBC;
    return;
L_08853EBC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08853ECCu);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08853ECCu) goto L_08853ECC;
    return;
L_08853ECC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08853F88;
      }
      goto L_08853EDC;
    }
L_08853EDC:
    ctx.set_gpr(31, 0x08853EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08853EE4u) goto L_08853EE4;
    return;
L_08853EE4:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32124), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08853EF0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32128), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08853EF0u) goto L_08853EF0;
    return;
L_08853EF0:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32132), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08853EFCu);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32136), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 183u, 0x08848C24u>(ctx, &aot_mem) && ctx.pc == 0x08853EFCu) goto L_08853EFC;
    return;
L_08853EFC:
    ctx.set_gpr(31, 0x08853F04u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32140), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08853F04u) goto L_08853F04;
    return;
L_08853F04:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32144), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32148), ctx.gpr[17]);
    ctx.set_gpr(31, 0x08853F14u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32152), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08853F14u) goto L_08853F14;
    return;
L_08853F14:
    ctx.set_gpr(31, 0x08853F1Cu);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32156), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08853F1Cu) goto L_08853F1C;
    return;
L_08853F1C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32160), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32164), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32032), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32016), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32020), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32024), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32028), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32036), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32044), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32048), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32052), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32056), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32060), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32064), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(32040), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32080), 0u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(32088));
    ctx.set_gpr(31, 0x08853F78u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32084), 0u);
    goto L_08853D5C;
L_08853F78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08853F8C;
      }
      goto L_08853F88;
    }
L_08853F88:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08853F8C;
L_08853F8C:
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
L_08853FB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08853FECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32000));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08853FECu) goto L_08853FEC;
    return;
L_08853FEC:
    ctx.set_gpr(31, 0x08853FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08853FF4u) goto L_08853FF4;
    return;
L_08853FF4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32124), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08854000u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32128), ctx.gpr[20]);
    (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0019(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0019_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_19(Runtime &runtime) {
    runtime.register_generated_unit(19u, 0x08850000u, 16384u, &recomp_unit_0019, &recomp_unit_0019_entry);
    runtime.register_function(0x08850000u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850004u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885000Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850018u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850020u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885002Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850034u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850044u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885004Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850064u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885006Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850078u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850080u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885008Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850098u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850104u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850108u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850110u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850114u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850118u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850130u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850138u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850140u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850148u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850150u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850170u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885017Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088501A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088501B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088501CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088501E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088501F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850214u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850228u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850244u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885024Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850254u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885025Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850264u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885026Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850274u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850280u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885028Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850294u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850304u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850310u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885031Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850324u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850330u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885033Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850344u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850350u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850358u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850364u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885036Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850374u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885037Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850384u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850390u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885039Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088503A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088503B0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088503B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088503C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088503CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088503D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088503E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088503E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088503F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088503F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850400u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885040Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850418u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850424u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850430u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885043Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850440u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850450u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850494u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088504A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088504A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088504B0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088504B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088504C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088504C8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088504D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088504D8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088504E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088504E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088504F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088504F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850508u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850514u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850528u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850534u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885053Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850544u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885054Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850554u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850560u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850564u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885056Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850578u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850580u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850588u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850594u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885059Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505B0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505D8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850604u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850610u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850624u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850630u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850640u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850654u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885065Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885066Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850678u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850684u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885068Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850698u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088506A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088506B0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088506B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088506CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088506D8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088506E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088506F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088506F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850710u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850720u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885072Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850738u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885073Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850784u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850788u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850790u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850798u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507B0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507D8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850804u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850814u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850820u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885082Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850830u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885083Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850840u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850874u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885087Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850884u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885089Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088508CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088508DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088508ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088508FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885090Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885091Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885092Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850944u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885094Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850954u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885095Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850964u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885096Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850974u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885097Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850980u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850988u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850990u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088509B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088509BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088509DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088509F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088509F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A18u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A2Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A48u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A58u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A68u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A70u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A7Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A98u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850AA0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850AA8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850AB8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850AC0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850AD4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850AECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850AF4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B00u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B08u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B10u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B14u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B24u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B30u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B38u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B54u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B60u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B6Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B70u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B94u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B9Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BB4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BBCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BCCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BD4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BD8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BF4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C00u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C08u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C18u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C30u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C50u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C54u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C5Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C70u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C78u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C9Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850CA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850CB8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850CC0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850CD0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850CD8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850CE8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D14u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D20u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D28u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D38u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D50u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D70u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D74u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D88u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850DB0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850DB8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850DD0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850DDCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850DE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850DF4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E2Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E30u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E44u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E78u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E98u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850EB8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850EBCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850EC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850ED8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850EE0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850EE8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850EF0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850EF8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F00u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F08u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F10u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F1Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F28u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F38u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F68u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F74u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F80u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F98u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FB0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FBCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FD8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851000u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851014u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851028u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885103Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851050u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885106Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851074u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851080u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851088u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885108Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510D8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851100u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851110u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885111Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851128u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851134u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851140u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885114Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851158u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851164u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885117Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851194u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088511ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088511B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088511C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088511C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088511E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851218u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851220u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885122Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851234u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851240u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851248u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885125Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851264u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851270u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851280u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851288u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851294u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885129Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512C8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851304u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851310u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885131Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851324u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851330u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851338u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851344u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851350u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851358u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851364u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885136Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851378u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851384u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885138Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851398u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851408u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851410u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851420u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851428u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851434u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885143Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851444u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851450u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851458u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851468u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851470u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885147Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088514B0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088514D8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088514E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088514E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088514F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851504u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885150Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851514u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885151Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851524u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885152Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851540u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885154Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851560u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851574u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851580u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851594u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088515C8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088515D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088515DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088515E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088515FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851604u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851614u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885161Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851628u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885163Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851644u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851654u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851668u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885168Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885171Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885172Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851734u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851760u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885176Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851778u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851790u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851798u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088517B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088517BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088517CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088517E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088517F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088517F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851808u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851814u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851828u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885183Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851840u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885184Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885186Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851894u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518C8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851904u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885190Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851918u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851920u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885192Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851934u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851940u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851948u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851954u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885195Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851968u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885196Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851974u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851980u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885198Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851994u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088519A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088519A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088519ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088519C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088519ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088519F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A14u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A20u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A28u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A34u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A3Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A48u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A50u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A5Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A64u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A70u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A78u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A98u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851AA0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851AACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851AB4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851AC0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851AC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851ACCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851AD8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851AE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851AECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851AF8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851AFCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B1Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B24u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B3Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B54u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B78u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B98u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851CC8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851CD8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851D2Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851D3Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851D44u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851D4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851D60u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851DD4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851DF4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851DFCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E08u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E1Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E24u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E3Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E44u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E58u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E60u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E74u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E78u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E80u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E88u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851EB8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851ECCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851EECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F00u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F14u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F50u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F5Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F6Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F80u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F98u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851FA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851FACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851FC0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851FC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851FCCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851FD4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852004u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852018u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852038u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885204Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852060u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852084u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852098u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088520ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088520C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088520D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088520D8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088520E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088520F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088520F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852100u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885211Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852130u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852134u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885213Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852140u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852148u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852168u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088521F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088521FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852204u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852224u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852244u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852268u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088522A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088522BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088522D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088522E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088522F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088522FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852304u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852318u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885231Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852324u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852340u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852354u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852358u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852360u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852364u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885236Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885238Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088523BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088523C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088523C8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088523E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088523FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852408u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885241Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852424u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852434u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852464u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852494u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088524A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088524BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088524D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088524E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088524E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088524F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852504u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852508u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852510u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885252Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852540u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852544u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885254Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852550u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852558u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852578u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088525A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088525ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088525B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088525D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088525E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088525F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885260Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852614u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852628u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852634u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885263Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852658u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852664u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885266Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852690u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088526A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088526C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088526E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885272Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885274Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852754u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852764u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885276Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852780u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088527A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088527C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852800u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885281Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852834u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885284Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852858u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852860u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852864u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852878u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852880u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088528B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088528C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088528D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088528D8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088528E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852904u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852920u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852930u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885295Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885299Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088529A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088529ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088529B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088529BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088529C8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088529DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088529E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088529F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A10u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A1Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A24u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A30u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A38u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A40u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A50u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A60u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A70u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A74u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A80u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A94u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852AA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852AACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852AB0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852AC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852AF8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852B00u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852B08u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852B14u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852B44u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C2Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C38u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C40u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C68u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C70u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C80u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C88u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C94u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852CB4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852CD0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852CD8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852CE8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852CFCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D14u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D1Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D3Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D48u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D50u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D58u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D60u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D94u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852DC8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852DD0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852DE0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852DFCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852E0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852E74u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852E98u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852EA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852F40u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852F7Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852F84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852FA0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852FB4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852FC0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852FD0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852FD8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852FE0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852FE8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852FF8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853000u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853010u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853014u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885303Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853044u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853060u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885306Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853078u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853094u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088530A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088530B0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088530B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088530C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088530C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088530D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088530E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088530F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088530FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853100u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885310Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885311Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853128u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853140u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853148u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853154u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885315Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853170u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853188u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853190u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853198u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088531A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088531A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088531BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088531F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088531FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885320Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853228u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853230u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853248u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853250u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853258u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885325Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853268u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853270u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853280u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885328Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885329Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853308u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853310u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853318u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853320u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853358u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853360u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853370u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885337Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853384u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885338Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885339Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088533ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088533BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853400u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853428u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853434u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853474u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853490u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088534A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088534B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088534C8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088534D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088534DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088534E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088534ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088534FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853504u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853514u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853520u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853524u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853544u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885358Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853594u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088535A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088535B0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088535B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088535C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088535C8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088535E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088535E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088535F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088535F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853610u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853620u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853640u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853648u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853658u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853660u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853668u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885367Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088536B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088536D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088536DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853704u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853710u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853714u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853738u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885373Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885375Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853764u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885376Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853774u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853778u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088537A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088537ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853814u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853820u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853828u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853830u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853840u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853848u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853850u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885385Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853860u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885386Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853874u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885387Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853898u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088538C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853918u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853920u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885392Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853938u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853954u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885395Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885397Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853994u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885399Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088539B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088539C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088539C8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A00u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A08u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A28u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A38u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A3Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A68u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AB4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AC0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AD4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853ADCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AF4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AFCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B10u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B14u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B18u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B2Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B54u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B80u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B88u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853BA0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853BB8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853BC0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853BD4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853BE0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853BE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853BF0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853BF4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C20u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C50u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C80u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853CC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853CE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853CFCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D14u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D2Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D5Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D74u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D90u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853DA8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853DB4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853DBCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853DC0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853DD0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853DD8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E1Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E28u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E30u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E38u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E40u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E48u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E50u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E58u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E64u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E70u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E78u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E80u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E88u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E90u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E98u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853EA8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853EACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853EB4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853EBCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853ECCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853EDCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853EE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853EF0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853EFCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F14u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F1Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F78u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F88u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853FB0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853FECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853FF4u, &recomp_unit_0019, "recomp_unit_0019");
}
} // namespace psprecomp
