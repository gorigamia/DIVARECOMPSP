#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0192[4085] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0,
    0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 13, 0, 14, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 22, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 28, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 35, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 43, 0, 44, 0, 45, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 49, 0, 0, 0, 50, 0, 51,
    0, 0, 52, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 59, 0, 0,
    0, 60, 61, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 68, 0, 69, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 74, 0, 0, 75, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 83, 0, 84, 0, 0, 0, 85, 0,
    86, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0,
    92, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 96, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0,
    124, 0, 0, 0, 0, 125, 0, 0, 126, 127, 0, 128, 0, 0, 0, 0, 0, 129, 0, 130, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0,
    0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 136, 137, 0, 0, 138, 0, 139, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142,
    0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 155, 156, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0,
    0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 0, 163, 0, 164, 0, 165, 0, 166, 0, 0, 0, 167, 168,
    0, 169, 0, 0, 0, 0, 170, 171, 0, 172, 0, 0, 173, 0, 0, 0, 0, 174, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0,
    0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 0, 0, 184, 0,
    185, 0, 186, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 201, 0, 202, 0, 203, 0, 0, 0,
    204, 0, 205, 0, 206, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 220, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 0, 233, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 236, 0, 237, 0, 238, 0, 239, 0, 0, 240, 0, 241, 242, 0, 243, 0, 0, 244,
    245, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 248, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0,
    252, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 257, 0, 258, 0, 259, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 262, 0, 263,
    0, 264, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 270, 0, 0, 0, 271, 272, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 277, 0, 0, 278, 279, 0, 0,
    0, 0, 280, 0, 0, 0, 0, 281, 282, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 287, 0,
    0, 0, 288, 0, 0, 0, 289, 0, 290, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296,
    0, 297, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 309, 0, 310, 0,
    311, 0, 0, 312, 0, 313, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 317, 0, 0, 318, 0, 0, 319, 0, 320, 321,
    0, 322, 0, 0, 323, 0, 0, 324, 0, 325, 326, 0, 0, 327, 0, 0, 328, 0, 329, 0, 330, 0, 0, 331, 0, 332, 333, 0, 0, 0, 0, 0,
    0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 341, 0, 342, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0, 347, 0, 0, 348, 0, 349, 0,
    350, 0, 0, 0, 351, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 356, 0, 0, 357, 358, 0, 0, 0, 359, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 365, 0, 366, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    370, 371, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0,
    0, 0, 0, 0, 0, 381, 382, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 388, 0,
    0, 389, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 393, 0, 394, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 401, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404,
    405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 409, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 412, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 417, 0, 0, 418, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 421, 0, 0, 422, 0, 423, 0, 0, 0, 424, 0, 425, 0, 0, 426, 0, 427, 0, 0, 428, 0,
    0, 0, 429, 0, 0, 0, 0, 430, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0,
    0, 0, 0, 434, 0, 435, 0, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 0, 442, 0, 0, 443, 0, 444, 0, 445, 0, 446, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 450, 0, 0, 451, 0, 452, 0, 453, 0, 0, 454, 0, 455,
    0, 0, 456, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 467, 0,
    0, 0, 0, 0, 0, 0, 468, 0, 469, 0, 470, 0, 471, 472, 473, 0, 0, 474, 0, 475, 0, 476, 477, 0, 0, 478, 0, 0, 0, 0, 479, 0,
    0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 482, 0, 483, 484, 0, 485, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0,
    0, 0, 0, 488, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 493,
    0, 494, 0, 0, 495, 0, 496, 0, 0, 497, 0, 0, 0, 0, 0, 498, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 501, 0, 502, 0, 503, 0, 504, 0, 505, 0, 506, 0, 0, 507, 0, 0, 508, 0, 0, 509, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0,
    0, 0, 512, 0, 0, 513, 0, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 0, 518, 0, 0,
    0, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 521, 0, 0, 522, 0, 523, 0, 524, 0, 525, 0, 526, 0, 527, 0, 0, 528, 0, 529, 0, 530,
    0, 531, 0, 0, 532, 0, 533, 0, 534, 0, 535, 0, 536, 0, 0, 537, 0, 538, 0, 539, 0, 540, 0, 0, 541, 0, 542, 0, 543, 0, 544, 0,
    545, 0, 0, 546, 0, 547, 0, 548, 0, 549, 0, 0, 550, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0,
    0, 554, 0, 0, 555, 0, 556, 0, 557, 0, 558, 0, 559, 0, 0, 560, 0, 0, 561, 0, 562, 0, 563, 0, 564, 0, 0, 565, 0, 0, 566, 0,
    567, 0, 568, 0, 569, 0, 0, 570, 0, 0, 571, 0, 572, 0, 573, 0, 574, 0, 0, 575, 0, 0, 576, 0, 577, 0, 578, 0, 579, 0, 0, 580,
    0, 0, 581, 0, 582, 0, 583, 584, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 588, 0, 0, 589, 0, 0, 0, 0,
    590, 0, 591, 0, 0, 0, 0, 592, 593, 0, 0, 594, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0,
    0, 0, 0, 598, 0, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 0,
    0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 0, 606, 0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 609, 610, 0, 0, 0, 0, 611, 0, 0, 0,
    612, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0,
    616, 617, 0, 0, 0, 0, 0, 618, 0, 0, 619, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0,
    0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0,
    0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0,
    636, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 640, 0, 641, 0, 0, 0, 0, 642, 0, 0,
    0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 645, 0, 0, 646, 0, 647, 648, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 0, 0, 651, 0,
    0, 652, 0, 0, 0, 653, 0, 654, 0, 655, 0, 656, 0, 657, 0, 658, 0, 0, 0, 659, 0, 660, 0, 661, 0, 0, 662, 0, 663, 0, 664, 0,
    665, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 669, 0, 670, 0, 671, 0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 0,
    0, 0, 674, 0, 0, 0, 675, 0, 676, 0, 677, 0, 0, 678, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0, 682, 0,
    683, 0, 0, 0, 0, 0, 684, 0, 685, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 687, 0, 688, 0, 689, 0, 0, 690, 0, 0, 691, 0,
    0, 692, 693, 0, 0, 694, 0, 0, 695, 0, 0, 0, 0, 0, 696, 0, 0, 697, 0, 698, 0, 0, 699, 0, 700, 0, 0, 0, 0, 701, 0, 0,
    702, 0, 703, 704, 0, 0, 705, 0, 0, 0, 706, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 709, 710, 0, 0, 711, 0, 712, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 714, 0, 0, 0,
    715, 0, 0, 0, 0, 0, 0, 716, 0, 717, 0, 718, 0, 719, 0, 720, 0, 721, 0, 0, 0, 0, 0, 722, 0, 0, 723, 724, 0, 725, 0, 0,
    726, 0, 727, 0, 0, 0, 0, 0, 0, 728, 0, 729, 0, 0, 0, 0, 730, 0, 0, 0, 0, 731, 0, 732, 0, 0, 733, 0, 734, 0, 735, 0,
    0, 736, 0, 0, 0, 737, 0, 0, 0, 738, 0, 739, 0, 0, 0, 0, 740, 0, 741, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743,
    0, 744, 0, 0, 0, 745, 0, 0, 746, 0, 0, 747, 0, 748, 0, 0, 749, 0, 750, 0, 0, 751, 0, 0, 0, 752, 0, 753, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 0, 756, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 761, 0, 0, 0, 0, 762, 0, 763, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 765, 0, 0, 0, 0, 766, 0, 0, 0, 767, 0, 0, 0, 768, 0, 769, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0,
    773, 0, 0, 0, 0, 774, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 779, 0, 0,
    0, 780, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 783,
    0, 0, 0, 0, 784, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 787, 0, 0, 0, 0, 788, 0, 789, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 791, 0, 0, 0, 0, 792, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 794, 0, 795, 0, 0, 0, 0, 796, 0, 797, 0, 0, 0, 798, 0, 799, 0, 0, 800, 0, 801, 0, 0, 802, 0, 803, 0, 0, 804,
    0, 805, 0, 0, 806, 0, 807, 0, 808, 0, 0, 0, 809, 0, 0, 0, 810, 0, 811, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 812, 813,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 815, 0, 0, 0, 816, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 818, 0, 819, 0,
    820, 0, 821, 0, 822, 0, 0, 823, 0, 824, 0, 0, 825, 0, 826, 0, 827, 0, 828, 0, 829, 0, 830, 0, 831, 832, 0, 833, 0, 0, 0, 834,
    0, 0, 0, 835, 836, 0, 837, 0, 0, 0, 838, 0, 0, 0, 839, 840, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    842, 0, 843, 0, 0, 0, 0, 0, 844, 845, 0, 846, 0, 847, 0, 848, 849, 0, 0, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0, 0, 0, 0,
    851, 0, 852, 0, 853, 0, 0, 0, 854, 855, 0, 0, 0, 856, 0, 0, 0, 0, 0, 857, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 859, 0,
    0, 0, 0, 860, 0, 0, 0, 0, 0, 0, 0, 861, 0, 862, 0, 863, 0, 864, 0, 0, 0, 0, 0, 865, 0, 866, 0, 0, 0, 0, 0, 0,
    867, 868, 0, 0, 0, 0, 869, 0, 0, 0, 0, 0, 0, 0, 0, 870, 0, 871, 0, 0, 872, 0, 0, 0, 0, 0, 873, 0, 0, 0, 0, 0,
    0, 874, 0, 875, 0, 0, 0, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0, 878, 0, 0, 879, 0, 0, 0, 0, 0, 880, 0, 0,
    0, 0, 0, 0, 881, 0, 882, 0, 0, 0, 0, 0, 883, 884, 0, 0, 0, 0, 885, 0, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 0,
    887, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0, 0, 889,
    0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 0, 0, 0, 0, 0, 891, 0, 0, 0, 0, 892, 0, 0, 0, 0, 0, 0, 0, 893, 0, 0,
    0, 0, 894, 0, 0, 0, 0, 0, 0, 0, 0, 895, 0, 0, 0, 0, 0, 0, 0, 896, 0, 0, 897, 0, 898, 0, 0, 899, 0, 900, 0, 0,
    901, 0, 0, 0, 0, 0, 902, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 903, 0, 904, 0, 0, 905, 0, 0, 906, 0, 907,
    0, 0, 908, 0, 0, 909, 910, 0, 911, 0, 0, 912, 0, 0, 0, 913, 0, 914, 0, 915, 0, 0, 916, 917, 918, 0, 919, 0, 920, 0, 0, 0,
    0, 0, 921, 0, 922, 0, 0, 0, 0, 0, 923, 0, 924, 0, 0, 925, 0, 926, 0, 0, 927, 0, 0, 0, 0, 0, 928, 0, 929, 0, 0, 0,
    0, 930, 0, 931, 0, 932, 0, 0, 0, 0, 0, 933, 0, 934, 0, 0, 0, 0, 935, 936, 0, 937, 0, 938, 0, 939, 0, 0, 0, 0, 0, 940,
    0, 941, 0, 942, 0, 0, 0, 0, 0, 943, 944, 0, 0, 945, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 946, 0, 0, 0, 0, 947, 0,
    0, 0, 0, 0, 0, 948, 0, 0, 949, 0, 950, 951, 0, 0, 952, 0, 953, 0, 0, 0, 0, 0, 0, 0, 0, 954, 0, 0, 955, 0, 956, 0,
    0, 0, 0, 957, 0, 0, 0, 0, 0, 0, 0, 0, 0, 958, 0, 959, 0, 0, 960, 0, 961, 962, 0, 0, 0, 0, 963, 0, 964, 0, 0, 0,
    0, 0, 0, 0, 965, 0, 0, 966, 0, 967, 0, 0, 0, 0, 968, 0, 0, 0, 0, 0, 0, 0, 0, 0, 969, 0, 970, 0, 0, 971, 0, 972,
    973, 0, 0, 974, 0, 975, 0, 0, 0, 0, 0, 0, 0, 0, 976, 0, 0, 977, 0, 978, 0, 0, 0, 0, 979, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 980, 0, 981, 0, 0, 982, 0, 983, 984, 0, 0, 0, 0, 985, 0, 986, 0, 0, 0, 0, 0, 0, 0, 987, 0, 0, 988, 0, 989, 0,
    0, 0, 0, 990, 0, 0, 0, 0, 0, 0, 0, 0, 0, 991, 0, 992, 0, 0, 993, 0, 994, 0, 0, 0, 995, 0, 0, 0, 996, 0, 997, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 998, 0, 0, 999, 1000, 0, 0, 0, 1001, 0, 0, 1002, 1003,
};
void recomp_unit_0192_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B04000u;
        entry_id = (entry_delta < 16340u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0192[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B04000;
    case 2u: goto L_08B04008;
    case 3u: goto L_08B04038;
    case 4u: goto L_08B04048;
    case 5u: goto L_08B04068;
    case 6u: goto L_08B04074;
    case 7u: goto L_08B04088;
    case 8u: goto L_08B04098;
    case 9u: goto L_08B040A0;
    case 10u: goto L_08B040AC;
    case 11u: goto L_08B040D0;
    case 12u: goto L_08B040DC;
    case 13u: goto L_08B040EC;
    case 14u: goto L_08B040F4;
    case 15u: goto L_08B04130;
    case 16u: goto L_08B04144;
    case 17u: goto L_08B04148;
    case 18u: goto L_08B0416C;
    case 19u: goto L_08B04194;
    case 20u: goto L_08B0419C;
    case 21u: goto L_08B041A4;
    case 22u: goto L_08B041AC;
    case 23u: goto L_08B041B0;
    case 24u: goto L_08B041B8;
    case 25u: goto L_08B041EC;
    case 26u: goto L_08B04228;
    case 27u: goto L_08B04230;
    case 28u: goto L_08B0423C;
    case 29u: goto L_08B04240;
    case 30u: goto L_08B04248;
    case 31u: goto L_08B0427C;
    case 32u: goto L_08B042B8;
    case 33u: goto L_08B042BC;
    case 34u: goto L_08B042D8;
    case 35u: goto L_08B04304;
    case 36u: goto L_08B04308;
    case 37u: goto L_08B04310;
    case 38u: goto L_08B04344;
    case 39u: goto L_08B04358;
    case 40u: goto L_08B04360;
    case 41u: goto L_08B04370;
    case 42u: goto L_08B04390;
    case 43u: goto L_08B0439C;
    case 44u: goto L_08B043A4;
    case 45u: goto L_08B043AC;
    case 46u: goto L_08B043B0;
    case 47u: goto L_08B043B8;
    case 48u: goto L_08B043E0;
    case 49u: goto L_08B043E4;
    case 50u: goto L_08B043F4;
    case 51u: goto L_08B043FC;
    case 52u: goto L_08B04408;
    case 53u: goto L_08B04410;
    case 54u: goto L_08B0441C;
    case 55u: goto L_08B04424;
    case 56u: goto L_08B04450;
    case 57u: goto L_08B04460;
    case 58u: goto L_08B0446C;
    case 59u: goto L_08B04474;
    case 60u: goto L_08B04484;
    case 61u: goto L_08B04488;
    case 62u: goto L_08B04498;
    case 63u: goto L_08B044A0;
    case 64u: goto L_08B044D8;
    case 65u: goto L_08B0450C;
    case 66u: goto L_08B04534;
    case 67u: goto L_08B0453C;
    case 68u: goto L_08B04544;
    case 69u: goto L_08B0454C;
    case 70u: goto L_08B04550;
    case 71u: goto L_08B04558;
    case 72u: goto L_08B0459C;
    case 73u: goto L_08B045B0;
    case 74u: goto L_08B045B8;
    case 75u: goto L_08B045C4;
    case 76u: goto L_08B045C8;
    case 77u: goto L_08B045D0;
    case 78u: goto L_08B04614;
    case 79u: goto L_08B04628;
    case 80u: goto L_08B0462C;
    case 81u: goto L_08B04648;
    case 82u: goto L_08B04658;
    case 83u: goto L_08B04660;
    case 84u: goto L_08B04668;
    case 85u: goto L_08B04678;
    case 86u: goto L_08B04680;
    case 87u: goto L_08B0468C;
    case 88u: goto L_08B04694;
    case 89u: goto L_08B046D8;
    case 90u: goto L_08B046E0;
    case 91u: goto L_08B046E8;
    case 92u: goto L_08B04700;
    case 93u: goto L_08B04708;
    case 94u: goto L_08B04710;
    case 95u: goto L_08B04744;
    case 96u: goto L_08B04748;
    case 97u: goto L_08B04750;
    case 98u: goto L_08B0475C;
    case 99u: goto L_08B0476C;
    case 100u: goto L_08B04798;
    case 101u: goto L_08B047AC;
    case 102u: goto L_08B047B8;
    case 103u: goto L_08B047C0;
    case 104u: goto L_08B047D0;
    case 105u: goto L_08B047F8;
    case 106u: goto L_08B04800;
    case 107u: goto L_08B0480C;
    case 108u: goto L_08B04828;
    case 109u: goto L_08B04844;
    case 110u: goto L_08B04850;
    case 111u: goto L_08B04870;
    case 112u: goto L_08B04880;
    case 113u: goto L_08B04890;
    case 114u: goto L_08B048C0;
    case 115u: goto L_08B048D4;
    case 116u: goto L_08B04914;
    case 117u: goto L_08B0491C;
    case 118u: goto L_08B04930;
    case 119u: goto L_08B04944;
    case 120u: goto L_08B04950;
    case 121u: goto L_08B0495C;
    case 122u: goto L_08B04968;
    case 123u: goto L_08B04974;
    case 124u: goto L_08B04980;
    case 125u: goto L_08B04994;
    case 126u: goto L_08B049A0;
    case 127u: goto L_08B049A4;
    case 128u: goto L_08B049AC;
    case 129u: goto L_08B049C4;
    case 130u: goto L_08B049CC;
    case 131u: goto L_08B049D0;
    case 132u: goto L_08B049D8;
    case 133u: goto L_08B049F8;
    case 134u: goto L_08B04A04;
    case 135u: goto L_08B04A14;
    case 136u: goto L_08B04A28;
    case 137u: goto L_08B04A2C;
    case 138u: goto L_08B04A38;
    case 139u: goto L_08B04A40;
    case 140u: goto L_08B04A44;
    case 141u: goto L_08B04A60;
    case 142u: goto L_08B04A7C;
    case 143u: goto L_08B04A8C;
    case 144u: goto L_08B04A94;
    case 145u: goto L_08B04AA4;
    case 146u: goto L_08B04AAC;
    case 147u: goto L_08B04AB4;
    case 148u: goto L_08B04ABC;
    case 149u: goto L_08B04AC8;
    case 150u: goto L_08B04AE0;
    case 151u: goto L_08B04AEC;
    case 152u: goto L_08B04B08;
    case 153u: goto L_08B04B28;
    case 154u: goto L_08B04B3C;
    case 155u: goto L_08B04B4C;
    case 156u: goto L_08B04B50;
    case 157u: goto L_08B04B58;
    case 158u: goto L_08B04B74;
    case 159u: goto L_08B04B94;
    case 160u: goto L_08B04BA8;
    case 161u: goto L_08B04BB8;
    case 162u: goto L_08B04BC0;
    case 163u: goto L_08B04BD0;
    case 164u: goto L_08B04BD8;
    case 165u: goto L_08B04BE0;
    case 166u: goto L_08B04BE8;
    case 167u: goto L_08B04BF8;
    case 168u: goto L_08B04BFC;
    case 169u: goto L_08B04C04;
    case 170u: goto L_08B04C18;
    case 171u: goto L_08B04C1C;
    case 172u: goto L_08B04C24;
    case 173u: goto L_08B04C30;
    case 174u: goto L_08B04C44;
    case 175u: goto L_08B04C48;
    case 176u: goto L_08B04C64;
    case 177u: goto L_08B04C74;
    case 178u: goto L_08B04C84;
    case 179u: goto L_08B04C9C;
    case 180u: goto L_08B04CD0;
    case 181u: goto L_08B04CD8;
    case 182u: goto L_08B04CE0;
    case 183u: goto L_08B04CE8;
    case 184u: goto L_08B04CF8;
    case 185u: goto L_08B04D00;
    case 186u: goto L_08B04D08;
    case 187u: goto L_08B04D10;
    case 188u: goto L_08B04D1C;
    case 189u: goto L_08B04D3C;
    case 190u: goto L_08B04D48;
    case 191u: goto L_08B04D5C;
    case 192u: goto L_08B04D70;
    case 193u: goto L_08B04DA0;
    case 194u: goto L_08B04DD4;
    case 195u: goto L_08B04E24;
    case 196u: goto L_08B04E2C;
    case 197u: goto L_08B04E34;
    case 198u: goto L_08B04E40;
    case 199u: goto L_08B04E54;
    case 200u: goto L_08B04E5C;
    case 201u: goto L_08B04E60;
    case 202u: goto L_08B04E68;
    case 203u: goto L_08B04E70;
    case 204u: goto L_08B04E80;
    case 205u: goto L_08B04E88;
    case 206u: goto L_08B04E90;
    case 207u: goto L_08B04E94;
    case 208u: goto L_08B04E9C;
    case 209u: goto L_08B04EC0;
    case 210u: goto L_08B04EF0;
    case 211u: goto L_08B04F10;
    case 212u: goto L_08B04F18;
    case 213u: goto L_08B04F20;
    case 214u: goto L_08B04F2C;
    case 215u: goto L_08B04F40;
    case 216u: goto L_08B04F48;
    case 217u: goto L_08B04F50;
    case 218u: goto L_08B04F58;
    case 219u: goto L_08B04F60;
    case 220u: goto L_08B04F74;
    case 221u: goto L_08B04FA4;
    case 222u: goto L_08B04FC0;
    case 223u: goto L_08B04FC8;
    case 224u: goto L_08B04FD8;
    case 225u: goto L_08B04FF8;
    case 226u: goto L_08B050A8;
    case 227u: goto L_08B050BC;
    case 228u: goto L_08B050CC;
    case 229u: goto L_08B050D4;
    case 230u: goto L_08B050DC;
    case 231u: goto L_08B050E4;
    case 232u: goto L_08B050EC;
    case 233u: goto L_08B050F8;
    case 234u: goto L_08B05124;
    case 235u: goto L_08B05130;
    case 236u: goto L_08B05138;
    case 237u: goto L_08B05140;
    case 238u: goto L_08B05148;
    case 239u: goto L_08B05150;
    case 240u: goto L_08B0515C;
    case 241u: goto L_08B05164;
    case 242u: goto L_08B05168;
    case 243u: goto L_08B05170;
    case 244u: goto L_08B0517C;
    case 245u: goto L_08B05180;
    case 246u: goto L_08B05194;
    case 247u: goto L_08B051A4;
    case 248u: goto L_08B051AC;
    case 249u: goto L_08B051B4;
    case 250u: goto L_08B051C0;
    case 251u: goto L_08B051F8;
    case 252u: goto L_08B05200;
    case 253u: goto L_08B05208;
    case 254u: goto L_08B05214;
    case 255u: goto L_08B05220;
    case 256u: goto L_08B05230;
    case 257u: goto L_08B05238;
    case 258u: goto L_08B05240;
    case 259u: goto L_08B05248;
    case 260u: goto L_08B05258;
    case 261u: goto L_08B05260;
    case 262u: goto L_08B05274;
    case 263u: goto L_08B0527C;
    case 264u: goto L_08B05284;
    case 265u: goto L_08B05290;
    case 266u: goto L_08B0529C;
    case 267u: goto L_08B052A4;
    case 268u: goto L_08B052C8;
    case 269u: goto L_08B052F0;
    case 270u: goto L_08B05304;
    case 271u: goto L_08B05314;
    case 272u: goto L_08B05318;
    case 273u: goto L_08B05330;
    case 274u: goto L_08B0533C;
    case 275u: goto L_08B0534C;
    case 276u: goto L_08B0535C;
    case 277u: goto L_08B05364;
    case 278u: goto L_08B05370;
    case 279u: goto L_08B05374;
    case 280u: goto L_08B05388;
    case 281u: goto L_08B0539C;
    case 282u: goto L_08B053A0;
    case 283u: goto L_08B053A4;
    case 284u: goto L_08B053C4;
    case 285u: goto L_08B053E8;
    case 286u: goto L_08B053F0;
    case 287u: goto L_08B053F8;
    case 288u: goto L_08B05408;
    case 289u: goto L_08B05418;
    case 290u: goto L_08B05420;
    case 291u: goto L_08B05428;
    case 292u: goto L_08B05430;
    case 293u: goto L_08B05438;
    case 294u: goto L_08B05440;
    case 295u: goto L_08B05448;
    case 296u: goto L_08B0547C;
    case 297u: goto L_08B05484;
    case 298u: goto L_08B0548C;
    case 299u: goto L_08B05494;
    case 300u: goto L_08B0549C;
    case 301u: goto L_08B054A4;
    case 302u: goto L_08B054AC;
    case 303u: goto L_08B054B4;
    case 304u: goto L_08B054BC;
    case 305u: goto L_08B054C4;
    case 306u: goto L_08B054CC;
    case 307u: goto L_08B054D8;
    case 308u: goto L_08B054E8;
    case 309u: goto L_08B054F0;
    case 310u: goto L_08B054F8;
    case 311u: goto L_08B05500;
    case 312u: goto L_08B0550C;
    case 313u: goto L_08B05514;
    case 314u: goto L_08B05518;
    case 315u: goto L_08B05520;
    case 316u: goto L_08B05554;
    case 317u: goto L_08B05558;
    case 318u: goto L_08B05564;
    case 319u: goto L_08B05570;
    case 320u: goto L_08B05578;
    case 321u: goto L_08B0557C;
    case 322u: goto L_08B05584;
    case 323u: goto L_08B05590;
    case 324u: goto L_08B0559C;
    case 325u: goto L_08B055A4;
    case 326u: goto L_08B055A8;
    case 327u: goto L_08B055B4;
    case 328u: goto L_08B055C0;
    case 329u: goto L_08B055C8;
    case 330u: goto L_08B055D0;
    case 331u: goto L_08B055DC;
    case 332u: goto L_08B055E4;
    case 333u: goto L_08B055E8;
    case 334u: goto L_08B05608;
    case 335u: goto L_08B05630;
    case 336u: goto L_08B05638;
    case 337u: goto L_08B0564C;
    case 338u: goto L_08B05668;
    case 339u: goto L_08B05694;
    case 340u: goto L_08B056A0;
    case 341u: goto L_08B056A8;
    case 342u: goto L_08B056B0;
    case 343u: goto L_08B056B8;
    case 344u: goto L_08B056C4;
    case 345u: goto L_08B056D0;
    case 346u: goto L_08B056DC;
    case 347u: goto L_08B056E4;
    case 348u: goto L_08B056F0;
    case 349u: goto L_08B056F8;
    case 350u: goto L_08B05700;
    case 351u: goto L_08B05710;
    case 352u: goto L_08B05714;
    case 353u: goto L_08B0572C;
    case 354u: goto L_08B05744;
    case 355u: goto L_08B05750;
    case 356u: goto L_08B05758;
    case 357u: goto L_08B05764;
    case 358u: goto L_08B05768;
    case 359u: goto L_08B05778;
    case 360u: goto L_08B057AC;
    case 361u: goto L_08B057C0;
    case 362u: goto L_08B057CC;
    case 363u: goto L_08B057D8;
    case 364u: goto L_08B057E4;
    case 365u: goto L_08B057EC;
    case 366u: goto L_08B057F4;
    case 367u: goto L_08B05820;
    case 368u: goto L_08B0584C;
    case 369u: goto L_08B05854;
    case 370u: goto L_08B05880;
    case 371u: goto L_08B05884;
    case 372u: goto L_08B0588C;
    case 373u: goto L_08B05898;
    case 374u: goto L_08B058A4;
    case 375u: goto L_08B058BC;
    case 376u: goto L_08B058C4;
    case 377u: goto L_08B058CC;
    case 378u: goto L_08B058D4;
    case 379u: goto L_08B058F0;
    case 380u: goto L_08B058F8;
    case 381u: goto L_08B05914;
    case 382u: goto L_08B05918;
    case 383u: goto L_08B05924;
    case 384u: goto L_08B05940;
    case 385u: goto L_08B05948;
    case 386u: goto L_08B05964;
    case 387u: goto L_08B05970;
    case 388u: goto L_08B05978;
    case 389u: goto L_08B05984;
    case 390u: goto L_08B05988;
    case 391u: goto L_08B0599C;
    case 392u: goto L_08B059B0;
    case 393u: goto L_08B059BC;
    case 394u: goto L_08B059C4;
    case 395u: goto L_08B059CC;
    case 396u: goto L_08B059DC;
    case 397u: goto L_08B05A04;
    case 398u: goto L_08B05A14;
    case 399u: goto L_08B05A30;
    case 400u: goto L_08B05A3C;
    case 401u: goto L_08B05A44;
    case 402u: goto L_08B05A4C;
    case 403u: goto L_08B05A54;
    case 404u: goto L_08B05A7C;
    case 405u: goto L_08B05A80;
    case 406u: goto L_08B05A94;
    case 407u: goto L_08B05AB0;
    case 408u: goto L_08B05ABC;
    case 409u: goto L_08B05AC4;
    case 410u: goto L_08B05ACC;
    case 411u: goto L_08B05AD4;
    case 412u: goto L_08B05B04;
    case 413u: goto L_08B05B08;
    case 414u: goto L_08B05B1C;
    case 415u: goto L_08B05B54;
    case 416u: goto L_08B05B5C;
    case 417u: goto L_08B05B60;
    case 418u: goto L_08B05B6C;
    case 419u: goto L_08B05B98;
    case 420u: goto L_08B05BA0;
    case 421u: goto L_08B05BAC;
    case 422u: goto L_08B05BB8;
    case 423u: goto L_08B05BC0;
    case 424u: goto L_08B05BD0;
    case 425u: goto L_08B05BD8;
    case 426u: goto L_08B05BE4;
    case 427u: goto L_08B05BEC;
    case 428u: goto L_08B05BF8;
    case 429u: goto L_08B05C08;
    case 430u: goto L_08B05C1C;
    case 431u: goto L_08B05C24;
    case 432u: goto L_08B05C2C;
    case 433u: goto L_08B05C78;
    case 434u: goto L_08B05C8C;
    case 435u: goto L_08B05C94;
    case 436u: goto L_08B05CA0;
    case 437u: goto L_08B05CA8;
    case 438u: goto L_08B05CB0;
    case 439u: goto L_08B05CB8;
    case 440u: goto L_08B05CC0;
    case 441u: goto L_08B05CC8;
    case 442u: goto L_08B05CD4;
    case 443u: goto L_08B05CE0;
    case 444u: goto L_08B05CE8;
    case 445u: goto L_08B05CF0;
    case 446u: goto L_08B05CF8;
    case 447u: goto L_08B05D20;
    case 448u: goto L_08B05D30;
    case 449u: goto L_08B05D44;
    case 450u: goto L_08B05D4C;
    case 451u: goto L_08B05D58;
    case 452u: goto L_08B05D60;
    case 453u: goto L_08B05D68;
    case 454u: goto L_08B05D74;
    case 455u: goto L_08B05D7C;
    case 456u: goto L_08B05D88;
    case 457u: goto L_08B05D8C;
    case 458u: goto L_08B05D9C;
    case 459u: goto L_08B05DC0;
    case 460u: goto L_08B05DD4;
    case 461u: goto L_08B05DE0;
    case 462u: goto L_08B05DF8;
    case 463u: goto L_08B05E38;
    case 464u: goto L_08B05E40;
    case 465u: goto L_08B05E58;
    case 466u: goto L_08B05E64;
    case 467u: goto L_08B05E78;
    case 468u: goto L_08B05E98;
    case 469u: goto L_08B05EA0;
    case 470u: goto L_08B05EA8;
    case 471u: goto L_08B05EB0;
    case 472u: goto L_08B05EB4;
    case 473u: goto L_08B05EB8;
    case 474u: goto L_08B05EC4;
    case 475u: goto L_08B05ECC;
    case 476u: goto L_08B05ED4;
    case 477u: goto L_08B05ED8;
    case 478u: goto L_08B05EE4;
    case 479u: goto L_08B05EF8;
    case 480u: goto L_08B05F18;
    case 481u: goto L_08B05F20;
    case 482u: goto L_08B05F28;
    case 483u: goto L_08B05F30;
    case 484u: goto L_08B05F34;
    case 485u: goto L_08B05F3C;
    case 486u: goto L_08B05F40;
    case 487u: goto L_08B05F68;
    case 488u: goto L_08B05F8C;
    case 489u: goto L_08B05F94;
    case 490u: goto L_08B05FA8;
    case 491u: goto L_08B05FC0;
    case 492u: goto L_08B05FF4;
    case 493u: goto L_08B05FFC;
    case 494u: goto L_08B06004;
    case 495u: goto L_08B06010;
    case 496u: goto L_08B06018;
    case 497u: goto L_08B06024;
    case 498u: goto L_08B0603C;
    case 499u: goto L_08B06040;
    case 500u: goto L_08B06058;
    case 501u: goto L_08B06088;
    case 502u: goto L_08B06090;
    case 503u: goto L_08B06098;
    case 504u: goto L_08B060A0;
    case 505u: goto L_08B060A8;
    case 506u: goto L_08B060B0;
    case 507u: goto L_08B060BC;
    case 508u: goto L_08B060C8;
    case 509u: goto L_08B060D4;
    case 510u: goto L_08B060E0;
    case 511u: goto L_08B060F4;
    case 512u: goto L_08B06108;
    case 513u: goto L_08B06114;
    case 514u: goto L_08B06120;
    case 515u: goto L_08B0613C;
    case 516u: goto L_08B0614C;
    case 517u: goto L_08B06160;
    case 518u: goto L_08B06174;
    case 519u: goto L_08B06194;
    case 520u: goto L_08B061A0;
    case 521u: goto L_08B061AC;
    case 522u: goto L_08B061B8;
    case 523u: goto L_08B061C0;
    case 524u: goto L_08B061C8;
    case 525u: goto L_08B061D0;
    case 526u: goto L_08B061D8;
    case 527u: goto L_08B061E0;
    case 528u: goto L_08B061EC;
    case 529u: goto L_08B061F4;
    case 530u: goto L_08B061FC;
    case 531u: goto L_08B06204;
    case 532u: goto L_08B06210;
    case 533u: goto L_08B06218;
    case 534u: goto L_08B06220;
    case 535u: goto L_08B06228;
    case 536u: goto L_08B06230;
    case 537u: goto L_08B0623C;
    case 538u: goto L_08B06244;
    case 539u: goto L_08B0624C;
    case 540u: goto L_08B06254;
    case 541u: goto L_08B06260;
    case 542u: goto L_08B06268;
    case 543u: goto L_08B06270;
    case 544u: goto L_08B06278;
    case 545u: goto L_08B06280;
    case 546u: goto L_08B0628C;
    case 547u: goto L_08B06294;
    case 548u: goto L_08B0629C;
    case 549u: goto L_08B062A4;
    case 550u: goto L_08B062B0;
    case 551u: goto L_08B062CC;
    case 552u: goto L_08B062EC;
    case 553u: goto L_08B062F8;
    case 554u: goto L_08B06304;
    case 555u: goto L_08B06310;
    case 556u: goto L_08B06318;
    case 557u: goto L_08B06320;
    case 558u: goto L_08B06328;
    case 559u: goto L_08B06330;
    case 560u: goto L_08B0633C;
    case 561u: goto L_08B06348;
    case 562u: goto L_08B06350;
    case 563u: goto L_08B06358;
    case 564u: goto L_08B06360;
    case 565u: goto L_08B0636C;
    case 566u: goto L_08B06378;
    case 567u: goto L_08B06380;
    case 568u: goto L_08B06388;
    case 569u: goto L_08B06390;
    case 570u: goto L_08B0639C;
    case 571u: goto L_08B063A8;
    case 572u: goto L_08B063B0;
    case 573u: goto L_08B063B8;
    case 574u: goto L_08B063C0;
    case 575u: goto L_08B063CC;
    case 576u: goto L_08B063D8;
    case 577u: goto L_08B063E0;
    case 578u: goto L_08B063E8;
    case 579u: goto L_08B063F0;
    case 580u: goto L_08B063FC;
    case 581u: goto L_08B06408;
    case 582u: goto L_08B06410;
    case 583u: goto L_08B06418;
    case 584u: goto L_08B0641C;
    case 585u: goto L_08B06428;
    case 586u: goto L_08B06440;
    case 587u: goto L_08B06458;
    case 588u: goto L_08B06460;
    case 589u: goto L_08B0646C;
    case 590u: goto L_08B06480;
    case 591u: goto L_08B06488;
    case 592u: goto L_08B0649C;
    case 593u: goto L_08B064A0;
    case 594u: goto L_08B064AC;
    case 595u: goto L_08B064B4;
    case 596u: goto L_08B064C8;
    case 597u: goto L_08B064F8;
    case 598u: goto L_08B0650C;
    case 599u: goto L_08B06520;
    case 600u: goto L_08B06534;
    case 601u: goto L_08B06548;
    case 602u: goto L_08B0655C;
    case 603u: goto L_08B06570;
    case 604u: goto L_08B06584;
    case 605u: goto L_08B06598;
    case 606u: goto L_08B065AC;
    case 607u: goto L_08B065B4;
    case 608u: goto L_08B065C8;
    case 609u: goto L_08B065D8;
    case 610u: goto L_08B065DC;
    case 611u: goto L_08B065F0;
    case 612u: goto L_08B06600;
    case 613u: goto L_08B06624;
    case 614u: goto L_08B06660;
    case 615u: goto L_08B06674;
    case 616u: goto L_08B06680;
    case 617u: goto L_08B06684;
    case 618u: goto L_08B0669C;
    case 619u: goto L_08B066A8;
    case 620u: goto L_08B066AC;
    case 621u: goto L_08B066C0;
    case 622u: goto L_08B066D4;
    case 623u: goto L_08B066E8;
    case 624u: goto L_08B06718;
    case 625u: goto L_08B06738;
    case 626u: goto L_08B06754;
    case 627u: goto L_08B06774;
    case 628u: goto L_08B06790;
    case 629u: goto L_08B067B0;
    case 630u: goto L_08B067CC;
    case 631u: goto L_08B067EC;
    case 632u: goto L_08B06808;
    case 633u: goto L_08B06828;
    case 634u: goto L_08B06844;
    case 635u: goto L_08B06864;
    case 636u: goto L_08B06880;
    case 637u: goto L_08B068A0;
    case 638u: goto L_08B068BC;
    case 639u: goto L_08B068D0;
    case 640u: goto L_08B068D8;
    case 641u: goto L_08B068E0;
    case 642u: goto L_08B068F4;
    case 643u: goto L_08B06910;
    case 644u: goto L_08B0691C;
    case 645u: goto L_08B06928;
    case 646u: goto L_08B06934;
    case 647u: goto L_08B0693C;
    case 648u: goto L_08B06940;
    case 649u: goto L_08B06954;
    case 650u: goto L_08B0695C;
    case 651u: goto L_08B06978;
    case 652u: goto L_08B06984;
    case 653u: goto L_08B06994;
    case 654u: goto L_08B0699C;
    case 655u: goto L_08B069A4;
    case 656u: goto L_08B069AC;
    case 657u: goto L_08B069B4;
    case 658u: goto L_08B069BC;
    case 659u: goto L_08B069CC;
    case 660u: goto L_08B069D4;
    case 661u: goto L_08B069DC;
    case 662u: goto L_08B069E8;
    case 663u: goto L_08B069F0;
    case 664u: goto L_08B069F8;
    case 665u: goto L_08B06A00;
    case 666u: goto L_08B06A08;
    case 667u: goto L_08B06A1C;
    case 668u: goto L_08B06A2C;
    case 669u: goto L_08B06A38;
    case 670u: goto L_08B06A40;
    case 671u: goto L_08B06A48;
    case 672u: goto L_08B06A60;
    case 673u: goto L_08B06A68;
    case 674u: goto L_08B06A88;
    case 675u: goto L_08B06A98;
    case 676u: goto L_08B06AA0;
    case 677u: goto L_08B06AA8;
    case 678u: goto L_08B06AB4;
    case 679u: goto L_08B06ABC;
    case 680u: goto L_08B06AE8;
    case 681u: goto L_08B06AF0;
    case 682u: goto L_08B06AF8;
    case 683u: goto L_08B06B00;
    case 684u: goto L_08B06B18;
    case 685u: goto L_08B06B20;
    case 686u: goto L_08B06B40;
    case 687u: goto L_08B06B50;
    case 688u: goto L_08B06B58;
    case 689u: goto L_08B06B60;
    case 690u: goto L_08B06B6C;
    case 691u: goto L_08B06B78;
    case 692u: goto L_08B06B84;
    case 693u: goto L_08B06B88;
    case 694u: goto L_08B06B94;
    case 695u: goto L_08B06BA0;
    case 696u: goto L_08B06BB8;
    case 697u: goto L_08B06BC4;
    case 698u: goto L_08B06BCC;
    case 699u: goto L_08B06BD8;
    case 700u: goto L_08B06BE0;
    case 701u: goto L_08B06BF4;
    case 702u: goto L_08B06C00;
    case 703u: goto L_08B06C08;
    case 704u: goto L_08B06C0C;
    case 705u: goto L_08B06C18;
    case 706u: goto L_08B06C28;
    case 707u: goto L_08B06C34;
    case 708u: goto L_08B06C44;
    case 709u: goto L_08B06C60;
    case 710u: goto L_08B06C64;
    case 711u: goto L_08B06C70;
    case 712u: goto L_08B06C78;
    case 713u: goto L_08B06CE8;
    case 714u: goto L_08B06CF0;
    case 715u: goto L_08B06D00;
    case 716u: goto L_08B06D1C;
    case 717u: goto L_08B06D24;
    case 718u: goto L_08B06D2C;
    case 719u: goto L_08B06D34;
    case 720u: goto L_08B06D3C;
    case 721u: goto L_08B06D44;
    case 722u: goto L_08B06D5C;
    case 723u: goto L_08B06D68;
    case 724u: goto L_08B06D6C;
    case 725u: goto L_08B06D74;
    case 726u: goto L_08B06D80;
    case 727u: goto L_08B06D88;
    case 728u: goto L_08B06DA4;
    case 729u: goto L_08B06DAC;
    case 730u: goto L_08B06DC0;
    case 731u: goto L_08B06DD4;
    case 732u: goto L_08B06DDC;
    case 733u: goto L_08B06DE8;
    case 734u: goto L_08B06DF0;
    case 735u: goto L_08B06DF8;
    case 736u: goto L_08B06E04;
    case 737u: goto L_08B06E14;
    case 738u: goto L_08B06E24;
    case 739u: goto L_08B06E2C;
    case 740u: goto L_08B06E40;
    case 741u: goto L_08B06E48;
    case 742u: goto L_08B06E50;
    case 743u: goto L_08B06E7C;
    case 744u: goto L_08B06E84;
    case 745u: goto L_08B06E94;
    case 746u: goto L_08B06EA0;
    case 747u: goto L_08B06EAC;
    case 748u: goto L_08B06EB4;
    case 749u: goto L_08B06EC0;
    case 750u: goto L_08B06EC8;
    case 751u: goto L_08B06ED4;
    case 752u: goto L_08B06EE4;
    case 753u: goto L_08B06EEC;
    case 754u: goto L_08B06F28;
    case 755u: goto L_08B06F30;
    case 756u: goto L_08B06F44;
    case 757u: goto L_08B06F4C;
    case 758u: goto L_08B06F74;
    case 759u: goto L_08B06F9C;
    case 760u: goto L_08B06FCC;
    case 761u: goto L_08B06FD4;
    case 762u: goto L_08B06FE8;
    case 763u: goto L_08B06FF0;
    case 764u: goto L_08B07020;
    case 765u: goto L_08B07028;
    case 766u: goto L_08B0703C;
    case 767u: goto L_08B0704C;
    case 768u: goto L_08B0705C;
    case 769u: goto L_08B07064;
    case 770u: goto L_08B07098;
    case 771u: goto L_08B070CC;
    case 772u: goto L_08B070F8;
    case 773u: goto L_08B07100;
    case 774u: goto L_08B07114;
    case 775u: goto L_08B0711C;
    case 776u: goto L_08B07148;
    case 777u: goto L_08B07150;
    case 778u: goto L_08B07164;
    case 779u: goto L_08B07174;
    case 780u: goto L_08B07184;
    case 781u: goto L_08B0718C;
    case 782u: goto L_08B071F4;
    case 783u: goto L_08B071FC;
    case 784u: goto L_08B07210;
    case 785u: goto L_08B07218;
    case 786u: goto L_08B07250;
    case 787u: goto L_08B07258;
    case 788u: goto L_08B0726C;
    case 789u: goto L_08B07274;
    case 790u: goto L_08B072B0;
    case 791u: goto L_08B072B8;
    case 792u: goto L_08B072CC;
    case 793u: goto L_08B072D4;
    case 794u: goto L_08B0730C;
    case 795u: goto L_08B07314;
    case 796u: goto L_08B07328;
    case 797u: goto L_08B07330;
    case 798u: goto L_08B07340;
    case 799u: goto L_08B07348;
    case 800u: goto L_08B07354;
    case 801u: goto L_08B0735C;
    case 802u: goto L_08B07368;
    case 803u: goto L_08B07370;
    case 804u: goto L_08B0737C;
    case 805u: goto L_08B07384;
    case 806u: goto L_08B07390;
    case 807u: goto L_08B07398;
    case 808u: goto L_08B073A0;
    case 809u: goto L_08B073B0;
    case 810u: goto L_08B073C0;
    case 811u: goto L_08B073C8;
    case 812u: goto L_08B073F8;
    case 813u: goto L_08B073FC;
    case 814u: goto L_08B07428;
    case 815u: goto L_08B07434;
    case 816u: goto L_08B07444;
    case 817u: goto L_08B07454;
    case 818u: goto L_08B07470;
    case 819u: goto L_08B07478;
    case 820u: goto L_08B07480;
    case 821u: goto L_08B07488;
    case 822u: goto L_08B07490;
    case 823u: goto L_08B0749C;
    case 824u: goto L_08B074A4;
    case 825u: goto L_08B074B0;
    case 826u: goto L_08B074B8;
    case 827u: goto L_08B074C0;
    case 828u: goto L_08B074C8;
    case 829u: goto L_08B074D0;
    case 830u: goto L_08B074D8;
    case 831u: goto L_08B074E0;
    case 832u: goto L_08B074E4;
    case 833u: goto L_08B074EC;
    case 834u: goto L_08B074FC;
    case 835u: goto L_08B0750C;
    case 836u: goto L_08B07510;
    case 837u: goto L_08B07518;
    case 838u: goto L_08B07528;
    case 839u: goto L_08B07538;
    case 840u: goto L_08B0753C;
    case 841u: goto L_08B07550;
    case 842u: goto L_08B07580;
    case 843u: goto L_08B07588;
    case 844u: goto L_08B075A0;
    case 845u: goto L_08B075A4;
    case 846u: goto L_08B075AC;
    case 847u: goto L_08B075B4;
    case 848u: goto L_08B075BC;
    case 849u: goto L_08B075C0;
    case 850u: goto L_08B075DC;
    case 851u: goto L_08B07600;
    case 852u: goto L_08B07608;
    case 853u: goto L_08B07610;
    case 854u: goto L_08B07620;
    case 855u: goto L_08B07624;
    case 856u: goto L_08B07634;
    case 857u: goto L_08B0764C;
    case 858u: goto L_08B07658;
    case 859u: goto L_08B07678;
    case 860u: goto L_08B0768C;
    case 861u: goto L_08B076AC;
    case 862u: goto L_08B076B4;
    case 863u: goto L_08B076BC;
    case 864u: goto L_08B076C4;
    case 865u: goto L_08B076DC;
    case 866u: goto L_08B076E4;
    case 867u: goto L_08B07700;
    case 868u: goto L_08B07704;
    case 869u: goto L_08B07718;
    case 870u: goto L_08B0773C;
    case 871u: goto L_08B07744;
    case 872u: goto L_08B07750;
    case 873u: goto L_08B07768;
    case 874u: goto L_08B07784;
    case 875u: goto L_08B0778C;
    case 876u: goto L_08B077A4;
    case 877u: goto L_08B077C8;
    case 878u: goto L_08B077D0;
    case 879u: goto L_08B077DC;
    case 880u: goto L_08B077F4;
    case 881u: goto L_08B07810;
    case 882u: goto L_08B07818;
    case 883u: goto L_08B07830;
    case 884u: goto L_08B07834;
    case 885u: goto L_08B07848;
    case 886u: goto L_08B07868;
    case 887u: goto L_08B07880;
    case 888u: goto L_08B078E8;
    case 889u: goto L_08B078FC;
    case 890u: goto L_08B0791C;
    case 891u: goto L_08B07940;
    case 892u: goto L_08B07954;
    case 893u: goto L_08B07974;
    case 894u: goto L_08B07988;
    case 895u: goto L_08B079AC;
    case 896u: goto L_08B079CC;
    case 897u: goto L_08B079D8;
    case 898u: goto L_08B079E0;
    case 899u: goto L_08B079EC;
    case 900u: goto L_08B079F4;
    case 901u: goto L_08B07A00;
    case 902u: goto L_08B07A18;
    case 903u: goto L_08B07A54;
    case 904u: goto L_08B07A5C;
    case 905u: goto L_08B07A68;
    case 906u: goto L_08B07A74;
    case 907u: goto L_08B07A7C;
    case 908u: goto L_08B07A88;
    case 909u: goto L_08B07A94;
    case 910u: goto L_08B07A98;
    case 911u: goto L_08B07AA0;
    case 912u: goto L_08B07AAC;
    case 913u: goto L_08B07ABC;
    case 914u: goto L_08B07AC4;
    case 915u: goto L_08B07ACC;
    case 916u: goto L_08B07AD8;
    case 917u: goto L_08B07ADC;
    case 918u: goto L_08B07AE0;
    case 919u: goto L_08B07AE8;
    case 920u: goto L_08B07AF0;
    case 921u: goto L_08B07B08;
    case 922u: goto L_08B07B10;
    case 923u: goto L_08B07B28;
    case 924u: goto L_08B07B30;
    case 925u: goto L_08B07B3C;
    case 926u: goto L_08B07B44;
    case 927u: goto L_08B07B50;
    case 928u: goto L_08B07B68;
    case 929u: goto L_08B07B70;
    case 930u: goto L_08B07B84;
    case 931u: goto L_08B07B8C;
    case 932u: goto L_08B07B94;
    case 933u: goto L_08B07BAC;
    case 934u: goto L_08B07BB4;
    case 935u: goto L_08B07BC8;
    case 936u: goto L_08B07BCC;
    case 937u: goto L_08B07BD4;
    case 938u: goto L_08B07BDC;
    case 939u: goto L_08B07BE4;
    case 940u: goto L_08B07BFC;
    case 941u: goto L_08B07C04;
    case 942u: goto L_08B07C0C;
    case 943u: goto L_08B07C24;
    case 944u: goto L_08B07C28;
    case 945u: goto L_08B07C34;
    case 946u: goto L_08B07C64;
    case 947u: goto L_08B07C78;
    case 948u: goto L_08B07C94;
    case 949u: goto L_08B07CA0;
    case 950u: goto L_08B07CA8;
    case 951u: goto L_08B07CAC;
    case 952u: goto L_08B07CB8;
    case 953u: goto L_08B07CC0;
    case 954u: goto L_08B07CE4;
    case 955u: goto L_08B07CF0;
    case 956u: goto L_08B07CF8;
    case 957u: goto L_08B07D0C;
    case 958u: goto L_08B07D34;
    case 959u: goto L_08B07D3C;
    case 960u: goto L_08B07D48;
    case 961u: goto L_08B07D50;
    case 962u: goto L_08B07D54;
    case 963u: goto L_08B07D68;
    case 964u: goto L_08B07D70;
    case 965u: goto L_08B07D90;
    case 966u: goto L_08B07D9C;
    case 967u: goto L_08B07DA4;
    case 968u: goto L_08B07DB8;
    case 969u: goto L_08B07DE0;
    case 970u: goto L_08B07DE8;
    case 971u: goto L_08B07DF4;
    case 972u: goto L_08B07DFC;
    case 973u: goto L_08B07E00;
    case 974u: goto L_08B07E0C;
    case 975u: goto L_08B07E14;
    case 976u: goto L_08B07E38;
    case 977u: goto L_08B07E44;
    case 978u: goto L_08B07E4C;
    case 979u: goto L_08B07E60;
    case 980u: goto L_08B07E88;
    case 981u: goto L_08B07E90;
    case 982u: goto L_08B07E9C;
    case 983u: goto L_08B07EA4;
    case 984u: goto L_08B07EA8;
    case 985u: goto L_08B07EBC;
    case 986u: goto L_08B07EC4;
    case 987u: goto L_08B07EE4;
    case 988u: goto L_08B07EF0;
    case 989u: goto L_08B07EF8;
    case 990u: goto L_08B07F0C;
    case 991u: goto L_08B07F34;
    case 992u: goto L_08B07F3C;
    case 993u: goto L_08B07F48;
    case 994u: goto L_08B07F50;
    case 995u: goto L_08B07F60;
    case 996u: goto L_08B07F70;
    case 997u: goto L_08B07F78;
    case 998u: goto L_08B07FA0;
    case 999u: goto L_08B07FAC;
    case 1000u: goto L_08B07FB0;
    case 1001u: goto L_08B07FC0;
    case 1002u: goto L_08B07FCC;
    case 1003u: goto L_08B07FD0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B04000:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04008:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B04144;
      }
      goto L_08B04038;
    }
L_08B04038:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08B04148;
    }
    goto L_08B04048;
L_08B04048:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08B04068u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    goto L_08B0416C;
L_08B04068:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B04074u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08B042D8;
L_08B04074:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B04088u);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 766u, 0x08B03A20u>(ctx, &aot_mem) && ctx.pc == 0x08B04088u) goto L_08B04088;
    return;
L_08B04088:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08B04144;
      }
      goto L_08B04098;
    }
L_08B04098:
    ctx.set_gpr(16, 0u - ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[20] + 0u);
    goto L_08B040A0;
L_08B040A0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08B040ACu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 697u, 0x08B034D8u>(ctx, &aot_mem) && ctx.pc == 0x08B040ACu) goto L_08B040AC;
    return;
L_08B040AC:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.fpr[20] = ctx.fpr[0] - ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B040EC;
      }
      goto L_08B040D0;
    }
L_08B040D0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    goto L_08B040DC;
L_08B040DC:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
        goto L_08B040DC;
    }
    goto L_08B040EC;
L_08B040EC:
    ctx.set_gpr(31, 0x08B040F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B040F4u) goto L_08B040F4;
    return;
L_08B040F4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08B04130u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B04130u) goto L_08B04130;
    return;
L_08B04130:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B040A0;
      }
      goto L_08B04144;
    }
L_08B04144:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08B04148;
L_08B04148:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0416C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_08B04230;
      }
      goto L_08B04194;
    }
L_08B04194:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
        goto L_08B041A4;
    }
    goto L_08B0419C;
L_08B0419C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08B042BC;
      }
      goto L_08B041A4;
    }
L_08B041A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08B042B8;
      }
      goto L_08B041AC;
    }
L_08B041AC:
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    goto L_08B041B0;
L_08B041B0:
    ctx.set_gpr(31, 0x08B041B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B041B8u) goto L_08B041B8;
    return;
L_08B041B8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B041ECu);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08B041ECu) goto L_08B041EC;
    return;
L_08B041EC:
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(3, 16704u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B041B0;
      }
      goto L_08B04228;
    }
L_08B04228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B042B8;
      }
      goto L_08B04230;
    }
L_08B04230:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08B042B8;
      }
      goto L_08B0423C;
    }
L_08B0423C:
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    goto L_08B04240;
L_08B04240:
    ctx.set_gpr(31, 0x08B04248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B04248u) goto L_08B04248;
    return;
L_08B04248:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B0427Cu);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08B0427Cu) goto L_08B0427C;
    return;
L_08B0427C:
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(3, 16704u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B04240;
      }
      goto L_08B042B8;
    }
L_08B042B8:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_08B042BC;
L_08B042BC:
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
L_08B042D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08B04370;
      }
      goto L_08B04304;
    }
L_08B04304:
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    goto L_08B04308;
L_08B04308:
    ctx.set_gpr(31, 0x08B04310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B04310u) goto L_08B04310;
    return;
L_08B04310:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B04344u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08B04344u) goto L_08B04344;
    return;
L_08B04344:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
        goto L_08B04360;
    }
    goto L_08B04358;
L_08B04358:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    goto L_08B04360;
L_08B04360:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B04308;
      }
      goto L_08B04370;
    }
L_08B04370:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_08B04390:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B043AC;
      }
      goto L_08B0439C;
    }
L_08B0439C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B043B0;
      }
      goto L_08B043A4;
    }
L_08B043A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B043B0;
      }
      goto L_08B043AC;
    }
L_08B043AC:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    goto L_08B043B0;
L_08B043B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B043B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08B04498;
      }
      goto L_08B043E0;
    }
L_08B043E0:
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_08B043E4;
L_08B043E4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08B0441C;
      }
      goto L_08B043F4;
    }
L_08B043F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_08B043FC;
L_08B043FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
        goto L_08B04410;
    }
    goto L_08B04408;
L_08B04408:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0441C;
      }
      goto L_08B04410;
    }
L_08B04410:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B043FC;
      }
      goto L_08B0441C;
    }
L_08B0441C:
    if (ctx.gpr[8] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_08B04488;
    }
    goto L_08B04424;
L_08B04424:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B04450u);
    ctx.set_gpr(19, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B04450u) goto L_08B04450;
    return;
L_08B04450:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B04460u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08B04460u) goto L_08B04460;
    return;
L_08B04460:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B04484;
      }
      goto L_08B0446C;
    }
L_08B0446C:
    ctx.set_gpr(31, 0x08B04474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B04474u) goto L_08B04474;
    return;
L_08B04474:
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B04484u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08B04484u) goto L_08B04484;
    return;
L_08B04484:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_08B04488;
L_08B04488:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B043E4;
      }
      goto L_08B04498;
    }
L_08B04498:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08B044A0;
L_08B044A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 6 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B044A0;
      }
      goto L_08B044D8;
    }
L_08B044D8:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[3]);
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
L_08B0450C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08B045B8;
      }
      goto L_08B04534;
    }
L_08B04534:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
        goto L_08B04544;
    }
    goto L_08B0453C;
L_08B0453C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B0462C;
      }
      goto L_08B04544;
    }
L_08B04544:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08B04628;
      }
      goto L_08B0454C;
    }
L_08B0454C:
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    goto L_08B04550;
L_08B04550:
    ctx.set_gpr(31, 0x08B04558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B04558u) goto L_08B04558;
    return;
L_08B04558:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B0459Cu);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0459Cu) goto L_08B0459C;
    return;
L_08B0459C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B04550;
      }
      goto L_08B045B0;
    }
L_08B045B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04628;
      }
      goto L_08B045B8;
    }
L_08B045B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08B04628;
      }
      goto L_08B045C4;
    }
L_08B045C4:
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    goto L_08B045C8;
L_08B045C8:
    ctx.set_gpr(31, 0x08B045D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B045D0u) goto L_08B045D0;
    return;
L_08B045D0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B04614u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B04614u) goto L_08B04614;
    return;
L_08B04614:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B045C8;
      }
      goto L_08B04628;
    }
L_08B04628:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    goto L_08B0462C;
L_08B0462C:
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
L_08B04648:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B04660;
      }
      goto L_08B04658;
    }
L_08B04658:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0468C;
      }
      goto L_08B04660;
    }
L_08B04660:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08B0468C;
      }
      goto L_08B04668;
    }
L_08B04668:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
        goto L_08B04680;
    }
    goto L_08B04678;
L_08B04678:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0468C;
      }
      goto L_08B04680;
    }
L_08B04680:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B04668;
      }
      goto L_08B0468C;
    }
L_08B0468C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04694:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_fpr_bits(20, ctx.fpr_bits(13));
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x08B046D8u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 112u, 0x08A7C738u>(ctx, &aot_mem) && ctx.pc == 0x08B046D8u) goto L_08B046D8;
    return;
L_08B046D8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B04708;
      }
      goto L_08B046E0;
    }
L_08B046E0:
    ctx.set_gpr(31, 0x08B046E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B046E8u) goto L_08B046E8;
    return;
L_08B046E8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08B04700u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 768u, 0x08AFBC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08B04700u) goto L_08B04700;
    return;
L_08B04700:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08B04748;
      }
      goto L_08B04708;
    }
L_08B04708:
    ctx.set_gpr(31, 0x08B04710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B04710u) goto L_08B04710;
    return;
L_08B04710:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(14, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08B04744u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08B04744u) goto L_08B04744;
    return;
L_08B04744:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    goto L_08B04748;
L_08B04748:
    ctx.set_gpr(31, 0x08B04750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B04750u) goto L_08B04750;
    return;
L_08B04750:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08B0475Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 831u, 0x08AFBFD8u>(ctx, &aot_mem) && ctx.pc == 0x08B0475Cu) goto L_08B0475C;
    return;
L_08B0475C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B0476Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B0476Cu) goto L_08B0476C;
    return;
L_08B0476C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04798:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B047ACu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B047ACu) goto L_08B047AC;
    return;
L_08B047AC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08B047B8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B047B8u) goto L_08B047B8;
    return;
L_08B047B8:
    ctx.set_gpr(31, 0x08B047C0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 112u, 0x08A7C738u>(ctx, &aot_mem) && ctx.pc == 0x08B047C0u) goto L_08B047C0;
    return;
L_08B047C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B047D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08B04880;
      }
      goto L_08B047F8;
    }
L_08B047F8:
    ctx.set_gpr(31, 0x08B04800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B04800u) goto L_08B04800;
    return;
L_08B04800:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0480Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 73u, 0x08AB4508u>(ctx, &aot_mem) && ctx.pc == 0x08B0480Cu) goto L_08B0480C;
    return;
L_08B0480C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B04828u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B04828u) goto L_08B04828;
    return;
L_08B04828:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B04844u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B04844u) goto L_08B04844;
    return;
L_08B04844:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08B04870;
    }
    goto L_08B04850;
L_08B04850:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B04870;
L_08B04870:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B047F8;
      }
      goto L_08B04880;
    }
L_08B04880:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B048C0;
    }
    goto L_08B04890;
L_08B04890:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 17096u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B048C0;
L_08B048C0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B048D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B04914u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08B04914u) goto L_08B04914;
    return;
L_08B04914:
    ctx.set_gpr(31, 0x08B0491Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08B0491Cu) goto L_08B0491C;
    return;
L_08B0491C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(31, 0x08B04930u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08B04930u) goto L_08B04930;
    return;
L_08B04930:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B04944u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B04944u) goto L_08B04944;
    return;
L_08B04944:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B04950u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08B04950u) goto L_08B04950;
    return;
L_08B04950:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(45)));
    ctx.set_gpr(31, 0x08B0495Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 651u, 0x08AF29BCu>(ctx, &aot_mem) && ctx.pc == 0x08B0495Cu) goto L_08B0495C;
    return;
L_08B0495C:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(46)));
    ctx.set_gpr(31, 0x08B04968u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 657u, 0x08AF2A34u>(ctx, &aot_mem) && ctx.pc == 0x08B04968u) goto L_08B04968;
    return;
L_08B04968:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(47)));
    ctx.set_gpr(31, 0x08B04974u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08B04CE0;
L_08B04974:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(47)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08B049A4;
    }
    goto L_08B04980;
L_08B04980:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B04994u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B04994u) goto L_08B04994;
    return;
L_08B04994:
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x08B049A0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08B04CD8;
L_08B049A0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08B049A4;
L_08B049A4:
    ctx.set_gpr(31, 0x08B049ACu);
    // nop
    goto L_08B04CD0;
L_08B049AC:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
        goto L_08B049D0;
    }
    goto L_08B049C4;
L_08B049C4:
    ctx.set_gpr(31, 0x08B049CCu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 670u, 0x08AF2B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B049CCu) goto L_08B049CC;
    return;
L_08B049CC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    goto L_08B049D0;
L_08B049D0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
        goto L_08B04A38;
    }
    goto L_08B049D8;
L_08B049D8:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8864));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08B049F8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08B049F8u) goto L_08B049F8;
    return;
L_08B049F8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_08B04A2C;
    }
    goto L_08B04A04;
L_08B04A04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B04A28;
      }
      goto L_08B04A14;
    }
L_08B04A14:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B04A28u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 639u, 0x08AF28A4u>(ctx, &aot_mem) && ctx.pc == 0x08B04A28u) goto L_08B04A28;
    return;
L_08B04A28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08B04A2C;
L_08B04A2C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    goto L_08B04A38;
L_08B04A38:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(23, 0u + 0u);
      if (branch_taken) {
          goto L_08B04C84;
      }
      goto L_08B04A40;
    }
L_08B04A40:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    goto L_08B04A44;
L_08B04A44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[23]);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B04A60u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B04A60u) goto L_08B04A60;
    return;
L_08B04A60:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B04A7Cu);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B04A7Cu) goto L_08B04A7C;
    return;
L_08B04A7C:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B04A8Cu);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 343u, 0x08805400u>(ctx, &aot_mem) && ctx.pc == 0x08B04A8Cu) goto L_08B04A8C;
    return;
L_08B04A8C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08B04AAC;
    }
    goto L_08B04A94;
L_08B04A94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08B04AA4u);
    ctx.set_gpr(25, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 340u, 0x088053CCu>(ctx, &aot_mem) && ctx.pc == 0x08B04AA4u) goto L_08B04AA4;
    return;
L_08B04AA4:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08B04AAC;
L_08B04AAC:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08B04AB4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B04AB4u) goto L_08B04AB4;
    return;
L_08B04AB4:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
        goto L_08B04AC8;
    }
    goto L_08B04ABC;
L_08B04ABC:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8872));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08B04AC8;
L_08B04AC8:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B04AE0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08B04AE0u) goto L_08B04AE0;
    return;
L_08B04AE0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(45)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(46)));
        goto L_08B04B50;
    }
    goto L_08B04AEC;
L_08B04AEC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B04B08u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B04B08u) goto L_08B04B08;
    return;
L_08B04B08:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B04B28u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B04B28u) goto L_08B04B28;
    return;
L_08B04B28:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08B04B3Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 655u, 0x08AF29F4u>(ctx, &aot_mem) && ctx.pc == 0x08B04B3Cu) goto L_08B04B3C;
    return;
L_08B04B3C:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08B04B4Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 656u, 0x08AF2A14u>(ctx, &aot_mem) && ctx.pc == 0x08B04B4Cu) goto L_08B04B4C;
    return;
L_08B04B4C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(46)));
    goto L_08B04B50;
L_08B04B50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04BB8;
      }
      goto L_08B04B58;
    }
L_08B04B58:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B04B74u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B04B74u) goto L_08B04B74;
    return;
L_08B04B74:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B04B94u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B04B94u) goto L_08B04B94;
    return;
L_08B04B94:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08B04BA8u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 661u, 0x08AF2A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B04BA8u) goto L_08B04BA8;
    return;
L_08B04BA8:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08B04BB8u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 662u, 0x08AF2A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B04BB8u) goto L_08B04BB8;
    return;
L_08B04BB8:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16));
        goto L_08B04BD8;
    }
    goto L_08B04BC0;
L_08B04BC0:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08B04BD0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 644u, 0x08AF2918u>(ctx, &aot_mem) && ctx.pc == 0x08B04BD0u) goto L_08B04BD0;
    return;
L_08B04BD0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B04C74;
      }
      goto L_08B04BD8;
    }
L_08B04BD8:
    ctx.set_gpr(31, 0x08B04BE0u);
    ctx.set_gpr(16, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 343u, 0x08805400u>(ctx, &aot_mem) && ctx.pc == 0x08B04BE0u) goto L_08B04BE0;
    return;
L_08B04BE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04BFC;
      }
      goto L_08B04BE8;
    }
L_08B04BE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08B04BF8u);
    ctx.set_gpr(25, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 340u, 0x088053CCu>(ctx, &aot_mem) && ctx.pc == 0x08B04BF8u) goto L_08B04BF8;
    return;
L_08B04BF8:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    goto L_08B04BFC;
L_08B04BFC:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
        goto L_08B04C1C;
    }
    goto L_08B04C04;
L_08B04C04:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08B04C18u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 639u, 0x08AF28A4u>(ctx, &aot_mem) && ctx.pc == 0x08B04C18u) goto L_08B04C18;
    return;
L_08B04C18:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    goto L_08B04C1C;
L_08B04C1C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
        goto L_08B04C48;
    }
    goto L_08B04C24;
L_08B04C24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B04C44;
      }
      goto L_08B04C30;
    }
L_08B04C30:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B04C44u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 639u, 0x08AF28A4u>(ctx, &aot_mem) && ctx.pc == 0x08B04C44u) goto L_08B04C44;
    return;
L_08B04C44:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    goto L_08B04C48;
L_08B04C48:
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B04C64u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B04C64u) goto L_08B04C64;
    return;
L_08B04C64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    goto L_08B04C74;
L_08B04C74:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
        goto L_08B04A44;
    }
    goto L_08B04C84;
L_08B04C84:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B04C9Cu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B04C9Cu) goto L_08B04C9C;
    return;
L_08B04C9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04CD0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04CD8:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04CE0:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04CE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08B04CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B04CF8u) goto L_08B04CF8;
    return;
L_08B04CF8:
    ctx.set_gpr(31, 0x08B04D00u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 800u, 0x08AF754Cu>(ctx, &aot_mem) && ctx.pc == 0x08B04D00u) goto L_08B04D00;
    return;
L_08B04D00:
    ctx.set_gpr(31, 0x08B04D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B04D08u) goto L_08B04D08;
    return;
L_08B04D08:
    ctx.set_gpr(31, 0x08B04D10u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 276u, 0x08ABCD84u>(ctx, &aot_mem) && ctx.pc == 0x08B04D10u) goto L_08B04D10;
    return;
L_08B04D10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04D1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08B04D5C;
      }
      goto L_08B04D3C;
    }
L_08B04D3C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B04D48u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 589u, 0x08AF2560u>(ctx, &aot_mem) && ctx.pc == 0x08B04D48u) goto L_08B04D48;
    return;
L_08B04D48:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B04D5Cu);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 639u, 0x08AF28A4u>(ctx, &aot_mem) && ctx.pc == 0x08B04D5Cu) goto L_08B04D5C;
    return;
L_08B04D5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04D70:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(8, 0u + 0u);
    jump_target = ctx.gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04DA0:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(8, 0u + 0u);
    jump_target = ctx.gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04DD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23044)));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_fpr_bits(20, ctx.fpr_bits(13));
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_08B04E40;
      }
      goto L_08B04E24;
    }
L_08B04E24:
    ctx.set_gpr(31, 0x08B04E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08B04E2Cu) goto L_08B04E2C;
    return;
L_08B04E2C:
    ctx.set_gpr(31, 0x08B04E34u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08B04E34u) goto L_08B04E34;
    return;
L_08B04E34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B04E40u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08B04E40u) goto L_08B04E40;
    return;
L_08B04E40:
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23044), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04E60;
      }
      goto L_08B04E54;
    }
L_08B04E54:
    ctx.set_gpr(31, 0x08B04E5Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 974u, 0x08ABB3D0u>(ctx, &aot_mem) && ctx.pc == 0x08B04E5Cu) goto L_08B04E5C;
    return;
L_08B04E5C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), 0u);
    goto L_08B04E60;
L_08B04E60:
    ctx.set_gpr(31, 0x08B04E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08B04E68u) goto L_08B04E68;
    return;
L_08B04E68:
    ctx.set_gpr(31, 0x08B04E70u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08B04E70u) goto L_08B04E70;
    return;
L_08B04E70:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] | 25696u);
    ctx.set_gpr(31, 0x08B04E80u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 285u, 0x08ACCF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B04E80u) goto L_08B04E80;
    return;
L_08B04E80:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
        goto L_08B04E94;
    }
    goto L_08B04E88;
L_08B04E88:
    ctx.set_gpr(31, 0x08B04E90u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 971u, 0x08ABB350u>(ctx, &aot_mem) && ctx.pc == 0x08B04E90u) goto L_08B04E90;
    return;
L_08B04E90:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    goto L_08B04E94;
L_08B04E94:
    ctx.set_gpr(31, 0x08B04E9Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 842u, 0x08ABACD0u>(ctx, &aot_mem) && ctx.pc == 0x08B04E9Cu) goto L_08B04E9C;
    return;
L_08B04E9C:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08B04EC0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08B04694;
L_08B04EC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04EF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23044)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B04F2C;
      }
      goto L_08B04F10;
    }
L_08B04F10:
    ctx.set_gpr(31, 0x08B04F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08B04F18u) goto L_08B04F18;
    return;
L_08B04F18:
    ctx.set_gpr(31, 0x08B04F20u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08B04F20u) goto L_08B04F20;
    return;
L_08B04F20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B04F2Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08B04F2Cu) goto L_08B04F2C;
    return;
L_08B04F2C:
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23044), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08B04F50;
    }
    goto L_08B04F40;
L_08B04F40:
    ctx.set_gpr(31, 0x08B04F48u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 974u, 0x08ABB3D0u>(ctx, &aot_mem) && ctx.pc == 0x08B04F48u) goto L_08B04F48;
    return;
L_08B04F48:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08B04F50;
L_08B04F50:
    ctx.set_gpr(31, 0x08B04F58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 109u, 0x08A7C6BCu>(ctx, &aot_mem) && ctx.pc == 0x08B04F58u) goto L_08B04F58;
    return;
L_08B04F58:
    ctx.set_gpr(31, 0x08B04F60u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08B04798;
L_08B04F60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04F74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8928)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8932)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04FA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B04FC0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08B04FC0u) goto L_08B04FC0;
    return;
L_08B04FC0:
    ctx.set_gpr(31, 0x08B04FC8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08B04FC8u) goto L_08B04FC8;
    return;
L_08B04FC8:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8960));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(12));
    goto L_08B04FD8;
L_08B04FD8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B04FD8;
      }
      goto L_08B04FF8;
    }
L_08B04FF8:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8936)));
    ctx.set_gpr(3, 2233u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8940)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8944)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8948)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8952)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8956)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08B050A8u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08B050A8u) goto L_08B050A8;
    return;
L_08B050A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B050BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08B050D4;
      }
      goto L_08B050CC;
    }
L_08B050CC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08B050EC;
      }
      goto L_08B050D4;
    }
L_08B050D4:
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
        goto L_08B050EC;
    }
    goto L_08B050DC;
L_08B050DC:
    ctx.set_gpr(31, 0x08B050E4u);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 652u, 0x08862860u>(ctx, &aot_mem) && ctx.pc == 0x08B050E4u) goto L_08B050E4;
    return;
L_08B050E4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    goto L_08B050EC;
L_08B050EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B050F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08B05124u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 938u, 0x08A93290u>(ctx, &aot_mem) && ctx.pc == 0x08B05124u) goto L_08B05124;
    return;
L_08B05124:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B05138;
      }
      goto L_08B05130;
    }
L_08B05130:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08B05168;
      }
      goto L_08B05138;
    }
L_08B05138:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05148;
      }
      goto L_08B05140;
    }
L_08B05140:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08B05168;
      }
      goto L_08B05148;
    }
L_08B05148:
    ctx.set_gpr(31, 0x08B05150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B05150u) goto L_08B05150;
    return;
L_08B05150:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0515Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 454u, 0x08AB1AD8u>(ctx, &aot_mem) && ctx.pc == 0x08B0515Cu) goto L_08B0515C;
    return;
L_08B0515C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05168;
      }
      goto L_08B05164;
    }
L_08B05164:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08B05168;
L_08B05168:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B05180;
    }
    goto L_08B05170;
L_08B05170:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B0517Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 589u, 0x08AF2560u>(ctx, &aot_mem) && ctx.pc == 0x08B0517Cu) goto L_08B0517C;
    return;
L_08B0517C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B05180;
L_08B05180:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05194:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08B051A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08B051A4u) goto L_08B051A4;
    return;
L_08B051A4:
    ctx.set_gpr(31, 0x08B051ACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08B051ACu) goto L_08B051AC;
    return;
L_08B051AC:
    ctx.set_gpr(31, 0x08B051B4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 405u, 0x08861980u>(ctx, &aot_mem) && ctx.pc == 0x08B051B4u) goto L_08B051B4;
    return;
L_08B051B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B051C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08B05208;
      }
      goto L_08B051F8;
    }
L_08B051F8:
    ctx.set_gpr(31, 0x08B05200u);
    // nop
    goto L_08B048D4;
L_08B05200:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08B053A4;
      }
      goto L_08B05208;
    }
L_08B05208:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(31, 0x08B05214u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 520u, 0x08AB9BE4u>(ctx, &aot_mem) && ctx.pc == 0x08B05214u) goto L_08B05214;
    return;
L_08B05214:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
        goto L_08B05238;
    }
    goto L_08B05220;
L_08B05220:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B05230u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08B05778;
L_08B05230:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B053A0;
      }
      goto L_08B05238;
    }
L_08B05238:
    ctx.set_gpr(31, 0x08B05240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 845u, 0x08ABAD10u>(ctx, &aot_mem) && ctx.pc == 0x08B05240u) goto L_08B05240;
    return;
L_08B05240:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B05260;
      }
      goto L_08B05248;
    }
L_08B05248:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B05258u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08B05778;
L_08B05258:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B053A0;
      }
      goto L_08B05260;
    }
L_08B05260:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23044)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05290;
      }
      goto L_08B05274;
    }
L_08B05274:
    ctx.set_gpr(31, 0x08B0527Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08B0527Cu) goto L_08B0527C;
    return;
L_08B0527C:
    ctx.set_gpr(31, 0x08B05284u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08B05284u) goto L_08B05284;
    return;
L_08B05284:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B05290u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08B05290u) goto L_08B05290;
    return;
L_08B05290:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(31, 0x08B0529Cu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23044), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08B0529Cu) goto L_08B0529C;
    return;
L_08B0529C:
    ctx.set_gpr(31, 0x08B052A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08B052A4u) goto L_08B052A4;
    return;
L_08B052A4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B052C8u);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B052C8u) goto L_08B052C8;
    return;
L_08B052C8:
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23044), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(31, 0x08B052F0u);
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08B052F0u) goto L_08B052F0;
    return;
L_08B052F0:
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B05304u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08B048D4;
L_08B05304:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08B0539C;
      }
      goto L_08B05314;
    }
L_08B05314:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08B05318;
L_08B05318:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23044)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08B05330u);
    ctx.set_gpr(21, ctx.gpr[2] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 864u, 0x08ABAE54u>(ctx, &aot_mem) && ctx.pc == 0x08B05330u) goto L_08B05330;
    return;
L_08B05330:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[7]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08B05364;
    }
    goto L_08B0533C;
L_08B0533C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08B0534Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 639u, 0x08AF28A4u>(ctx, &aot_mem) && ctx.pc == 0x08B0534Cu) goto L_08B0534C;
    return;
L_08B0534C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08B0535Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 656u, 0x08AF2A14u>(ctx, &aot_mem) && ctx.pc == 0x08B0535Cu) goto L_08B0535C;
    return;
L_08B0535C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08B05374;
      }
      goto L_08B05364;
    }
L_08B05364:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08B05370u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 639u, 0x08AF28A4u>(ctx, &aot_mem) && ctx.pc == 0x08B05370u) goto L_08B05370;
    return;
L_08B05370:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    goto L_08B05374;
L_08B05374:
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(51));
    ctx.set_gpr(31, 0x08B05388u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(50));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 848u, 0x08ABAD30u>(ctx, &aot_mem) && ctx.pc == 0x08B05388u) goto L_08B05388;
    return;
L_08B05388:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(51));
      if (branch_taken) {
          goto L_08B05318;
      }
      goto L_08B0539C;
    }
L_08B0539C:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    goto L_08B053A0;
L_08B053A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08B053A4;
L_08B053A4:
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
L_08B053C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B053E8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08B053E8u) goto L_08B053E8;
    return;
L_08B053E8:
    ctx.set_gpr(31, 0x08B053F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 636u, 0x08847AF4u>(ctx, &aot_mem) && ctx.pc == 0x08B053F0u) goto L_08B053F0;
    return;
L_08B053F0:
    ctx.set_gpr(31, 0x08B053F8u);
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 637u, 0x08847B04u>(ctx, &aot_mem) && ctx.pc == 0x08B053F8u) goto L_08B053F8;
    return;
L_08B053F8:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B05420;
      }
      goto L_08B05408;
    }
L_08B05408:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05484;
      }
      goto L_08B05418;
    }
L_08B05418:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B055E8;
      }
      goto L_08B05420;
    }
L_08B05420:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05430;
      }
      goto L_08B05428;
    }
L_08B05428:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B055E8;
      }
      goto L_08B05430;
    }
L_08B05430:
    if (ctx.gpr[3] != 0u) {
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
        goto L_08B05440;
    }
    goto L_08B05438;
L_08B05438:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B055E8;
      }
      goto L_08B05440;
    }
L_08B05440:
    ctx.set_gpr(31, 0x08B05448u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 842u, 0x08ABACD0u>(ctx, &aot_mem) && ctx.pc == 0x08B05448u) goto L_08B05448;
    return;
L_08B05448:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9056)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9060)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9064)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B0547Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B0547Cu) goto L_08B0547C;
    return;
L_08B0547C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B055E8;
      }
      goto L_08B05484;
    }
L_08B05484:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05494;
      }
      goto L_08B0548C;
    }
L_08B0548C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B055E8;
      }
      goto L_08B05494;
    }
L_08B05494:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08B054A4;
    }
    goto L_08B0549C;
L_08B0549C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B055E8;
      }
      goto L_08B054A4;
    }
L_08B054A4:
    ctx.set_gpr(31, 0x08B054ACu);
    // nop
    goto L_08B04CE8;
L_08B054AC:
    ctx.set_gpr(31, 0x08B054B4u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B054B4u) goto L_08B054B4;
    return;
L_08B054B4:
    ctx.set_gpr(31, 0x08B054BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 74u, 0x08AB4530u>(ctx, &aot_mem) && ctx.pc == 0x08B054BCu) goto L_08B054BC;
    return;
L_08B054BC:
    ctx.set_gpr(31, 0x08B054C4u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B054C4u) goto L_08B054C4;
    return;
L_08B054C4:
    ctx.set_gpr(31, 0x08B054CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 990u, 0x08ABFC78u>(ctx, &aot_mem) && ctx.pc == 0x08B054CCu) goto L_08B054CC;
    return;
L_08B054CC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B054D8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08B054D8u) goto L_08B054D8;
    return;
L_08B054D8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[20] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
        goto L_08B054F8;
    }
    goto L_08B054E8;
L_08B054E8:
    if (ctx.gpr[20] == 0u) {
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
        goto L_08B055E8;
    }
    goto L_08B054F0;
L_08B054F0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B0557C;
      }
      goto L_08B054F8;
    }
L_08B054F8:
    if (ctx.gpr[18] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
        goto L_08B05518;
    }
    goto L_08B05500;
L_08B05500:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B05514;
      }
      goto L_08B0550C;
    }
L_08B0550C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08B05558;
      }
      goto L_08B05514;
    }
L_08B05514:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    goto L_08B05518;
L_08B05518:
    ctx.set_gpr(31, 0x08B05520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 842u, 0x08ABACD0u>(ctx, &aot_mem) && ctx.pc == 0x08B05520u) goto L_08B05520;
    return;
L_08B05520:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9068)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9072)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9076)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B05554u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B05554u) goto L_08B05554;
    return;
L_08B05554:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08B05558;
L_08B05558:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B05564u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_08B05608;
L_08B05564:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05578;
      }
      goto L_08B05570;
    }
L_08B05570:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B055E8;
      }
      goto L_08B05578;
    }
L_08B05578:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_08B0557C;
L_08B0557C:
    if (ctx.gpr[18] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08B055C8;
    }
    goto L_08B05584;
L_08B05584:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    if (ctx.gpr[18] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08B055A8;
    }
    goto L_08B05590;
L_08B05590:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B055A4;
      }
      goto L_08B0559C;
    }
L_08B0559C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08B055E8;
      }
      goto L_08B055A4;
    }
L_08B055A4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08B055A8;
L_08B055A8:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B055B4u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08B05668;
L_08B055B4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B055E4;
      }
      goto L_08B055C0;
    }
L_08B055C0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B055E8;
      }
      goto L_08B055C8;
    }
L_08B055C8:
    ctx.set_gpr(31, 0x08B055D0u);
    // nop
    goto L_08B0572C;
L_08B055D0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B055E4;
      }
      goto L_08B055DC;
    }
L_08B055DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B055E8;
      }
      goto L_08B055E4;
    }
L_08B055E4:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_08B055E8;
L_08B055E8:
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
L_08B05608:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08B05630u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 343u, 0x08805400u>(ctx, &aot_mem) && ctx.pc == 0x08B05630u) goto L_08B05630;
    return;
L_08B05630:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08B0564C;
    }
    goto L_08B05638;
L_08B05638:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B0564Cu);
    ctx.set_gpr(25, ctx.gpr[18] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 340u, 0x088053CCu>(ctx, &aot_mem) && ctx.pc == 0x08B0564Cu) goto L_08B0564C;
    return;
L_08B0564C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05668:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B05694u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 864u, 0x08ABAE54u>(ctx, &aot_mem) && ctx.pc == 0x08B05694u) goto L_08B05694;
    return;
L_08B05694:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
        goto L_08B056F8;
    }
    goto L_08B056A0;
L_08B056A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B056B0;
      }
      goto L_08B056A8;
    }
L_08B056A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B05714;
      }
      goto L_08B056B0;
    }
L_08B056B0:
    ctx.set_gpr(31, 0x08B056B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B056B8u) goto L_08B056B8;
    return;
L_08B056B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B056C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 352u, 0x08AB14ACu>(ctx, &aot_mem) && ctx.pc == 0x08B056C4u) goto L_08B056C4;
    return;
L_08B056C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08B056D0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 885u, 0x08ABAF90u>(ctx, &aot_mem) && ctx.pc == 0x08B056D0u) goto L_08B056D0;
    return;
L_08B056D0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08B056E4;
    }
    goto L_08B056DC;
L_08B056DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B05714;
      }
      goto L_08B056E4;
    }
L_08B056E4:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B056F0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    goto L_08B05778;
L_08B056F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05710;
      }
      goto L_08B056F8;
    }
L_08B056F8:
    ctx.set_gpr(31, 0x08B05700u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 871u, 0x08ABAEBCu>(ctx, &aot_mem) && ctx.pc == 0x08B05700u) goto L_08B05700;
    return;
L_08B05700:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B05710u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B05710u) goto L_08B05710;
    return;
L_08B05710:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B05714;
L_08B05714:
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
L_08B0572C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B05744u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 946u, 0x08ABB228u>(ctx, &aot_mem) && ctx.pc == 0x08B05744u) goto L_08B05744;
    return;
L_08B05744:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08B05758;
    }
    goto L_08B05750;
L_08B05750:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B05768;
      }
      goto L_08B05758;
    }
L_08B05758:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B05764u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B05764u) goto L_08B05764;
    return;
L_08B05764:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B05768;
L_08B05768:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05778:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, 2231u << 16u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B057ACu);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(9116));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08B057ACu) goto L_08B057AC;
    return;
L_08B057AC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B057C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B057C0u) goto L_08B057C0;
    return;
L_08B057C0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B057CCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08B057CCu) goto L_08B057CC;
    return;
L_08B057CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[19] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08B0584C;
    }
    goto L_08B057D8;
L_08B057D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[19] == ctx.gpr[2]) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08B05820;
    }
    goto L_08B057E4;
L_08B057E4:
    if (ctx.gpr[19] == 0u) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08B057F4;
    }
    goto L_08B057EC;
L_08B057EC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08B05884;
      }
      goto L_08B057F4;
    }
L_08B057F4:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9080)));
    ctx.set_gpr(16, 2231u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(9120));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9084)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9088)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B05880;
      }
      goto L_08B05820;
    }
L_08B05820:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9092)));
    ctx.set_gpr(16, 2231u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(9164));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9096)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9100)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B05880;
      }
      goto L_08B0584C;
    }
L_08B0584C:
    ctx.set_gpr(31, 0x08B05854u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08B05940;
L_08B05854:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9104)));
    ctx.set_gpr(16, 2231u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(9188));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9108)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9112)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B05880;
L_08B05880:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08B05884;
L_08B05884:
    ctx.set_gpr(31, 0x08B0588Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 446u, 0x08AB5F50u>(ctx, &aot_mem) && ctx.pc == 0x08B0588Cu) goto L_08B0588C;
    return;
L_08B0588C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B05898u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08B05898u) goto L_08B05898;
    return;
L_08B05898:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B058A4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 664u, 0x08AF2ACCu>(ctx, &aot_mem) && ctx.pc == 0x08B058A4u) goto L_08B058A4;
    return;
L_08B058A4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
      if (branch_taken) {
          goto L_08B058C4;
      }
      goto L_08B058BC;
    }
L_08B058BC:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_08B058C4;
L_08B058C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08B05924;
      }
      goto L_08B058CC;
    }
L_08B058CC:
    if (ctx.gpr[19] != ctx.gpr[18]) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08B058F8;
    }
    goto L_08B058D4;
L_08B058D4:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B058F0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08B058F0u) goto L_08B058F0;
    return;
L_08B058F0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B05918;
      }
      goto L_08B058F8;
    }
L_08B058F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9116));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B05914u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08B05914u) goto L_08B05914;
    return;
L_08B05914:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08B05918;
L_08B05918:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B058CC;
      }
      goto L_08B05924;
    }
L_08B05924:
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
L_08B05940:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05948:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B05964u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 520u, 0x08AB9BE4u>(ctx, &aot_mem) && ctx.pc == 0x08B05964u) goto L_08B05964;
    return;
L_08B05964:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08B05978;
    }
    goto L_08B05970;
L_08B05970:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B05988;
      }
      goto L_08B05978;
    }
L_08B05978:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B05984u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08B05778;
L_08B05984:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B05988;
L_08B05988:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0599C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B059B0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 520u, 0x08AB9BE4u>(ctx, &aot_mem) && ctx.pc == 0x08B059B0u) goto L_08B059B0;
    return;
L_08B059B0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_08B059C4;
    }
    goto L_08B059BC;
L_08B059BC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B05A04;
      }
      goto L_08B059C4;
    }
L_08B059C4:
    ctx.set_gpr(31, 0x08B059CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 967u, 0x08ABB328u>(ctx, &aot_mem) && ctx.pc == 0x08B059CCu) goto L_08B059CC;
    return;
L_08B059CC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B059DCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B059DCu) goto L_08B059DC;
    return;
L_08B059DC:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9216)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9220)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9224)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B05A04;
L_08B05A04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05A14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B05A30u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    goto L_08B05948;
L_08B05A30:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08B05A44;
    }
    goto L_08B05A3C;
L_08B05A3C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B05A80;
      }
      goto L_08B05A44;
    }
L_08B05A44:
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08B05A54;
    }
    goto L_08B05A4C;
L_08B05A4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B05A80;
      }
      goto L_08B05A54;
    }
L_08B05A54:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9228)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9232)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9236)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08B05A7Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B0572C;
L_08B05A7C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    goto L_08B05A80;
L_08B05A80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05A94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B05AB0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    goto L_08B05948;
L_08B05AB0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08B05AC4;
    }
    goto L_08B05ABC;
L_08B05ABC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B05B08;
      }
      goto L_08B05AC4;
    }
L_08B05AC4:
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08B05AD4;
    }
    goto L_08B05ACC;
L_08B05ACC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B05B08;
      }
      goto L_08B05AD4;
    }
L_08B05AD4:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9240)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9244)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9248)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B05B04u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B05B04u) goto L_08B05B04;
    return;
L_08B05B04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B05B08;
L_08B05B08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05B1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(23, ctx.fpr_bits(12));
    ctx.set_fpr_bits(22, ctx.fpr_bits(13));
    ctx.set_fpr_bits(21, ctx.fpr_bits(14));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_fpr_bits(20, ctx.fpr_bits(15));
      if (branch_taken) {
          goto L_08B05B5C;
      }
      goto L_08B05B54;
    }
L_08B05B54:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B05B60;
      }
      goto L_08B05B5C;
    }
L_08B05B5C:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(3));
    goto L_08B05B60;
L_08B05B60:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(31, 0x08B05B6Cu);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B05B6Cu) goto L_08B05B6C;
    return;
L_08B05B6C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_fpr_bits(14, ctx.fpr_bits(23));
    ctx.set_fpr_bits(15, ctx.fpr_bits(22));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08B05B98u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08B05B98u) goto L_08B05B98;
    return;
L_08B05B98:
    ctx.set_gpr(31, 0x08B05BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B05BA0u) goto L_08B05BA0;
    return;
L_08B05BA0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08B05BACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 831u, 0x08AFBFD8u>(ctx, &aot_mem) && ctx.pc == 0x08B05BACu) goto L_08B05BAC;
    return;
L_08B05BAC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05BD0;
      }
      goto L_08B05BB8;
    }
L_08B05BB8:
    ctx.set_gpr(31, 0x08B05BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B05BC0u) goto L_08B05BC0;
    return;
L_08B05BC0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B05BD0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC024u>(ctx, &aot_mem) && ctx.pc == 0x08B05BD0u) goto L_08B05BD0;
    return;
L_08B05BD0:
    ctx.set_gpr(31, 0x08B05BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B05BD8u) goto L_08B05BD8;
    return;
L_08B05BD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B05BE4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08B05BE4u) goto L_08B05BE4;
    return;
L_08B05BE4:
    ctx.set_gpr(31, 0x08B05BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B05BECu) goto L_08B05BEC;
    return;
L_08B05BEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B05BF8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 73u, 0x08AB4508u>(ctx, &aot_mem) && ctx.pc == 0x08B05BF8u) goto L_08B05BF8;
    return;
L_08B05BF8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B05C08u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08B05C08u) goto L_08B05C08;
    return;
L_08B05C08:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B05C1Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B05C1Cu) goto L_08B05C1C;
    return;
L_08B05C1C:
    ctx.set_gpr(31, 0x08B05C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B05C24u) goto L_08B05C24;
    return;
L_08B05C24:
    ctx.set_gpr(31, 0x08B05C2Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 404u, 0x08A81290u>(ctx, &aot_mem) && ctx.pc == 0x08B05C2Cu) goto L_08B05C2C;
    return;
L_08B05C2C:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(9252)));
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(9256)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(9260)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05C78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B05C8Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B05C8Cu) goto L_08B05C8C;
    return;
L_08B05C8C:
    ctx.set_gpr(31, 0x08B05C94u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 277u, 0x08ABCDA8u>(ctx, &aot_mem) && ctx.pc == 0x08B05C94u) goto L_08B05C94;
    return;
L_08B05C94:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05CA8;
      }
      goto L_08B05CA0;
    }
L_08B05CA0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B05D20;
      }
      goto L_08B05CA8;
    }
L_08B05CA8:
    ctx.set_gpr(31, 0x08B05CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B05CB0u) goto L_08B05CB0;
    return;
L_08B05CB0:
    ctx.set_gpr(31, 0x08B05CB8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 800u, 0x08AF754Cu>(ctx, &aot_mem) && ctx.pc == 0x08B05CB8u) goto L_08B05CB8;
    return;
L_08B05CB8:
    ctx.set_gpr(31, 0x08B05CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B05CC0u) goto L_08B05CC0;
    return;
L_08B05CC0:
    ctx.set_gpr(31, 0x08B05CC8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 276u, 0x08ABCD84u>(ctx, &aot_mem) && ctx.pc == 0x08B05CC8u) goto L_08B05CC8;
    return;
L_08B05CC8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
        goto L_08B05CE8;
    }
    goto L_08B05CD4;
L_08B05CD4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[3]));
        goto L_08B05CE8;
    }
    goto L_08B05CE0;
L_08B05CE0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B05D20;
      }
      goto L_08B05CE8;
    }
L_08B05CE8:
    ctx.set_gpr(31, 0x08B05CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B05CF0u) goto L_08B05CF0;
    return;
L_08B05CF0:
    ctx.set_gpr(31, 0x08B05CF8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 393u, 0x08A811E0u>(ctx, &aot_mem) && ctx.pc == 0x08B05CF8u) goto L_08B05CF8;
    return;
L_08B05CF8:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9264)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9268)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9272)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B05D20;
L_08B05D20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05D30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B05D44u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B05D44u) goto L_08B05D44;
    return;
L_08B05D44:
    ctx.set_gpr(31, 0x08B05D4Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 277u, 0x08ABCDA8u>(ctx, &aot_mem) && ctx.pc == 0x08B05D4Cu) goto L_08B05D4C;
    return;
L_08B05D4C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05D60;
      }
      goto L_08B05D58;
    }
L_08B05D58:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B05D8C;
      }
      goto L_08B05D60;
    }
L_08B05D60:
    ctx.set_gpr(31, 0x08B05D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B05D68u) goto L_08B05D68;
    return;
L_08B05D68:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08B05D74u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B05D74u) goto L_08B05D74;
    return;
L_08B05D74:
    ctx.set_gpr(31, 0x08B05D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B05D7Cu) goto L_08B05D7C;
    return;
L_08B05D7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B05D88u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08B05D88u) goto L_08B05D88;
    return;
L_08B05D88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B05D8C;
L_08B05D8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05D9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08B05DC0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 705u, 0x088A6B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B05DC0u) goto L_08B05DC0;
    return;
L_08B05DC0:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] << 2u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08B05DD4u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08B05DD4u) goto L_08B05DD4;
    return;
L_08B05DD4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B05DE0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08B05DF8;
L_08B05DE0:
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
L_08B05DF8:
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
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B05F3C;
      }
      goto L_08B05E38;
    }
L_08B05E38:
    ctx.set_gpr(31, 0x08B05E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08B05E40u) goto L_08B05E40;
    return;
L_08B05E40:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08B05E58;
L_08B05E58:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B05E64u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08B05F68;
L_08B05E64:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B05E78u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08B05F68;
L_08B05E78:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B05E98u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    goto L_08B064B4;
L_08B05E98:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08B05EA8;
      }
      goto L_08B05EA0;
    }
L_08B05EA0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08B05EB4;
      }
      goto L_08B05EA8;
    }
L_08B05EA8:
    if (ctx.gpr[17] != ctx.gpr[19]) {
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
        goto L_08B05EB8;
    }
    goto L_08B05EB0;
L_08B05EB0:
    ctx.set_gpr(19, ctx.gpr[18] + 0u);
    goto L_08B05EB4;
L_08B05EB4:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08B05EB8;
L_08B05EB8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[22]) < 30 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08B05E58;
    }
    goto L_08B05EC4;
L_08B05EC4:
    if (ctx.gpr[23] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08B05F40;
    }
    goto L_08B05ECC;
L_08B05ECC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B05F3C;
      }
      goto L_08B05ED4;
    }
L_08B05ED4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08B05ED8;
L_08B05ED8:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B05EE4u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08B05F68;
L_08B05EE4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B05EF8u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08B05F68;
L_08B05EF8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B05F18u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    goto L_08B064B4;
L_08B05F18:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08B05F28;
      }
      goto L_08B05F20;
    }
L_08B05F20:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08B05F34;
      }
      goto L_08B05F28;
    }
L_08B05F28:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08B05F34;
      }
      goto L_08B05F30;
    }
L_08B05F30:
    ctx.set_gpr(19, ctx.gpr[18] + 0u);
    goto L_08B05F34;
L_08B05F34:
    if (ctx.gpr[19] == 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08B05ED8;
    }
    goto L_08B05F3C;
L_08B05F3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08B05F40;
L_08B05F40:
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
L_08B05F68:
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
          goto L_08B05FA8;
      }
      goto L_08B05F8C;
    }
L_08B05F8C:
    ctx.set_gpr(31, 0x08B05F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 157u, 0x0885C91Cu>(ctx, &aot_mem) && ctx.pc == 0x08B05F94u) goto L_08B05F94;
    return;
L_08B05F94:
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    goto L_08B05FA8;
L_08B05FA8:
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
L_08B05FC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B06004;
      }
      goto L_08B05FF4;
    }
L_08B05FF4:
    ctx.set_gpr(31, 0x08B05FFCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08B05DF8;
L_08B05FFC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08B06040;
      }
      goto L_08B06004;
    }
L_08B06004:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0603C;
      }
      goto L_08B06010;
    }
L_08B06010:
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08B06018;
L_08B06018:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08B06024u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    goto L_08B064B4;
L_08B06024:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B06018;
      }
      goto L_08B0603C;
    }
L_08B0603C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08B06040;
L_08B06040:
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
L_08B06058:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08B06088u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    goto L_08B0614C;
L_08B06088:
    ctx.set_gpr(31, 0x08B06090u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    goto L_08B0614C;
L_08B06090:
    ctx.set_gpr(31, 0x08B06098u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_08B0614C;
L_08B06098:
    ctx.set_gpr(31, 0x08B060A0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08B060A0u) goto L_08B060A0;
    return;
L_08B060A0:
    ctx.set_gpr(31, 0x08B060A8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08B060A8u) goto L_08B060A8;
    return;
L_08B060A8:
    ctx.set_gpr(31, 0x08B060B0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08B060B0u) goto L_08B060B0;
    return;
L_08B060B0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B060BCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    goto L_08B0613C;
L_08B060BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B060C8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    goto L_08B0613C;
L_08B060C8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B060D4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08B060D4u) goto L_08B060D4;
    return;
L_08B060D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B060E0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08B060E0u) goto L_08B060E0;
    return;
L_08B060E0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x08B060F4u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 202u, 0x08A02A60u>(ctx, &aot_mem) && ctx.pc == 0x08B060F4u) goto L_08B060F4;
    return;
L_08B060F4:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08B06108u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 269u, 0x08A03174u>(ctx, &aot_mem) && ctx.pc == 0x08B06108u) goto L_08B06108;
    return;
L_08B06108:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B06114u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 66u, 0x08A00B54u>(ctx, &aot_mem) && ctx.pc == 0x08B06114u) goto L_08B06114;
    return;
L_08B06114:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B06120u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08B06120u) goto L_08B06120;
    return;
L_08B06120:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0613C:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 161u, 0x08A0226Cu>(ctx, &aot_mem); return;
L_08B0614C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B06160u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 456u, 0x088419DCu>(ctx, &aot_mem) && ctx.pc == 0x08B06160u) goto L_08B06160;
    return;
L_08B06160:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06174:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B062B0;
      }
      goto L_08B06194;
    }
L_08B06194:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B062B0;
      }
      goto L_08B061A0;
    }
L_08B061A0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B06268;
      }
      goto L_08B061AC;
    }
L_08B061AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B06218;
      }
      goto L_08B061B8;
    }
L_08B061B8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B061C8;
      }
      goto L_08B061C0;
    }
L_08B061C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B062B0;
      }
      goto L_08B061C8;
    }
L_08B061C8:
    ctx.set_gpr(31, 0x08B061D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08B061D0u) goto L_08B061D0;
    return;
L_08B061D0:
    ctx.set_gpr(31, 0x08B061D8u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08B061D8u) goto L_08B061D8;
    return;
L_08B061D8:
    ctx.set_gpr(31, 0x08B061E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08B061E0u) goto L_08B061E0;
    return;
L_08B061E0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B061ECu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 154u, 0x0883CE50u>(ctx, &aot_mem) && ctx.pc == 0x08B061ECu) goto L_08B061EC;
    return;
L_08B061EC:
    ctx.set_gpr(31, 0x08B061F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08B061F4u) goto L_08B061F4;
    return;
L_08B061F4:
    ctx.set_gpr(31, 0x08B061FCu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08B061FCu) goto L_08B061FC;
    return;
L_08B061FC:
    ctx.set_gpr(31, 0x08B06204u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08B06204u) goto L_08B06204;
    return;
L_08B06204:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B06210u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 153u, 0x0883CE48u>(ctx, &aot_mem) && ctx.pc == 0x08B06210u) goto L_08B06210;
    return;
L_08B06210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B062B0;
      }
      goto L_08B06218;
    }
L_08B06218:
    ctx.set_gpr(31, 0x08B06220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08B06220u) goto L_08B06220;
    return;
L_08B06220:
    ctx.set_gpr(31, 0x08B06228u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 234u, 0x0893CEFCu>(ctx, &aot_mem) && ctx.pc == 0x08B06228u) goto L_08B06228;
    return;
L_08B06228:
    ctx.set_gpr(31, 0x08B06230u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08B06230u) goto L_08B06230;
    return;
L_08B06230:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B0623Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 154u, 0x0883CE50u>(ctx, &aot_mem) && ctx.pc == 0x08B0623Cu) goto L_08B0623C;
    return;
L_08B0623C:
    ctx.set_gpr(31, 0x08B06244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08B06244u) goto L_08B06244;
    return;
L_08B06244:
    ctx.set_gpr(31, 0x08B0624Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 234u, 0x0893CEFCu>(ctx, &aot_mem) && ctx.pc == 0x08B0624Cu) goto L_08B0624C;
    return;
L_08B0624C:
    ctx.set_gpr(31, 0x08B06254u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08B06254u) goto L_08B06254;
    return;
L_08B06254:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B06260u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 153u, 0x0883CE48u>(ctx, &aot_mem) && ctx.pc == 0x08B06260u) goto L_08B06260;
    return;
L_08B06260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B062B0;
      }
      goto L_08B06268;
    }
L_08B06268:
    ctx.set_gpr(31, 0x08B06270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08B06270u) goto L_08B06270;
    return;
L_08B06270:
    ctx.set_gpr(31, 0x08B06278u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 235u, 0x0893CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08B06278u) goto L_08B06278;
    return;
L_08B06278:
    ctx.set_gpr(31, 0x08B06280u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08B06280u) goto L_08B06280;
    return;
L_08B06280:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B0628Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 154u, 0x0883CE50u>(ctx, &aot_mem) && ctx.pc == 0x08B0628Cu) goto L_08B0628C;
    return;
L_08B0628C:
    ctx.set_gpr(31, 0x08B06294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08B06294u) goto L_08B06294;
    return;
L_08B06294:
    ctx.set_gpr(31, 0x08B0629Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 235u, 0x0893CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0629Cu) goto L_08B0629C;
    return;
L_08B0629C:
    ctx.set_gpr(31, 0x08B062A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08B062A4u) goto L_08B062A4;
    return;
L_08B062A4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B062B0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 153u, 0x0883CE48u>(ctx, &aot_mem) && ctx.pc == 0x08B062B0u) goto L_08B062B0;
    return;
L_08B062B0:
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23036), ctx.gpr[16]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B062CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23036)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B063E0;
      }
      goto L_08B062EC;
    }
L_08B062EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B063B0;
      }
      goto L_08B062F8;
    }
L_08B062F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B06380;
      }
      goto L_08B06304;
    }
L_08B06304:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B06350;
      }
      goto L_08B06310;
    }
L_08B06310:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06320;
      }
      goto L_08B06318;
    }
L_08B06318:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08B06410;
      }
      goto L_08B06320;
    }
L_08B06320:
    ctx.set_gpr(31, 0x08B06328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08B06328u) goto L_08B06328;
    return;
L_08B06328:
    ctx.set_gpr(31, 0x08B06330u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08B06330u) goto L_08B06330;
    return;
L_08B06330:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0633Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_08B06458;
L_08B0633C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B06348u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_08B06428;
L_08B06348:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B0641C;
      }
      goto L_08B06350;
    }
L_08B06350:
    ctx.set_gpr(31, 0x08B06358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 234u, 0x0893CEFCu>(ctx, &aot_mem) && ctx.pc == 0x08B06358u) goto L_08B06358;
    return;
L_08B06358:
    ctx.set_gpr(31, 0x08B06360u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08B06360u) goto L_08B06360;
    return;
L_08B06360:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0636Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_08B06458;
L_08B0636C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B06378u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_08B06428;
L_08B06378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06418;
      }
      goto L_08B06380;
    }
L_08B06380:
    ctx.set_gpr(31, 0x08B06388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 235u, 0x0893CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08B06388u) goto L_08B06388;
    return;
L_08B06388:
    ctx.set_gpr(31, 0x08B06390u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08B06390u) goto L_08B06390;
    return;
L_08B06390:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0639Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_08B06458;
L_08B0639C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B063A8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_08B06428;
L_08B063A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06418;
      }
      goto L_08B063B0;
    }
L_08B063B0:
    ctx.set_gpr(31, 0x08B063B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 236u, 0x0893CF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B063B8u) goto L_08B063B8;
    return;
L_08B063B8:
    ctx.set_gpr(31, 0x08B063C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08B063C0u) goto L_08B063C0;
    return;
L_08B063C0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B063CCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08B06458;
L_08B063CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B063D8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08B06428;
L_08B063D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06418;
      }
      goto L_08B063E0;
    }
L_08B063E0:
    ctx.set_gpr(31, 0x08B063E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 237u, 0x0893CF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08B063E8u) goto L_08B063E8;
    return;
L_08B063E8:
    ctx.set_gpr(31, 0x08B063F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08B063F0u) goto L_08B063F0;
    return;
L_08B063F0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B063FCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_08B06458;
L_08B063FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B06408u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_08B06428;
L_08B06408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06418;
      }
      goto L_08B06410;
    }
L_08B06410:
    ctx.set_gpr(31, 0x08B06418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 268u, 0x0883D530u>(ctx, &aot_mem) && ctx.pc == 0x08B06418u) goto L_08B06418;
    return;
L_08B06418:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B0641C;
L_08B0641C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06428:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B06440u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 257u, 0x08995790u>(ctx, &aot_mem) && ctx.pc == 0x08B06440u) goto L_08B06440;
    return;
L_08B06440:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06458:
    // nop
    goto L_08B06460;
L_08B06460:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0646C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B06480u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08B064AC;
L_08B06480:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B064A0;
    }
    goto L_08B06488;
L_08B06488:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(272)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B0649Cu);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B0649Cu) goto L_08B0649C;
    return;
L_08B0649C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B064A0;
L_08B064A0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B064AC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B064B4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B064C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B064F8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 695u, 0x08AAA6B0u>(ctx, &aot_mem) && ctx.pc == 0x08B064F8u) goto L_08B064F8;
    return;
L_08B064F8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B0650Cu);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    goto L_08B06880;
L_08B0650C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B06520u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    goto L_08B06880;
L_08B06520:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B06534u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    goto L_08B06880;
L_08B06534:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B06548u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    goto L_08B06880;
L_08B06548:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B0655Cu);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    goto L_08B06844;
L_08B0655C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(17));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B06570u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    goto L_08B06844;
L_08B06570:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B06584u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    goto L_08B06880;
L_08B06584:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B06598u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    goto L_08B06880;
L_08B06598:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B065ACu);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    goto L_08B06808;
L_08B065AC:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[18] + 0u);
    goto L_08B065B4;
L_08B065B4:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(33));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B065C8u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    goto L_08B067CC;
L_08B065C8:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08B065B4;
      }
      goto L_08B065D8;
    }
L_08B065D8:
    ctx.set_gpr(19, 0u + 0u);
    goto L_08B065DC;
L_08B065DC:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B065F0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    goto L_08B06790;
L_08B065F0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08B065DC;
      }
      goto L_08B06600;
    }
L_08B06600:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06624:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
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
    ctx.set_gpr(23, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B06660u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 721u, 0x08AAA8DCu>(ctx, &aot_mem) && ctx.pc == 0x08B06660u) goto L_08B06660;
    return;
L_08B06660:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08B06674u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    goto L_08B06754;
L_08B06674:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08B066E8;
      }
      goto L_08B06680;
    }
L_08B06680:
    ctx.set_gpr(22, ctx.gpr[23] + 0u);
    goto L_08B06684;
L_08B06684:
    ctx.set_gpr(18, ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08B0669Cu);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    goto L_08B06754;
L_08B0669C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08B066D4;
      }
      goto L_08B066A8;
    }
L_08B066A8:
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_08B066AC;
L_08B066AC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08B066C0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    goto L_08B06718;
L_08B066C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08B066AC;
      }
      goto L_08B066D4;
    }
L_08B066D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1044));
      if (branch_taken) {
          goto L_08B06684;
      }
      goto L_08B066E8;
    }
L_08B066E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06718:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B06738u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08B06738u) goto L_08B06738;
    return;
L_08B06738:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06754:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B06774u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08B06774u) goto L_08B06774;
    return;
L_08B06774:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06790:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B067B0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08B067B0u) goto L_08B067B0;
    return;
L_08B067B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(60));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B067CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B067ECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08B067ECu) goto L_08B067EC;
    return;
L_08B067EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06808:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B06828u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08B06828u) goto L_08B06828;
    return;
L_08B06828:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06844:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B06864u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08B06864u) goto L_08B06864;
    return;
L_08B06864:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06880:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B068A0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08B068A0u) goto L_08B068A0;
    return;
L_08B068A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B068BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B068D0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 717u, 0x08862D58u>(ctx, &aot_mem) && ctx.pc == 0x08B068D0u) goto L_08B068D0;
    return;
L_08B068D0:
    ctx.set_gpr(31, 0x08B068D8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 618u, 0x0885E49Cu>(ctx, &aot_mem) && ctx.pc == 0x08B068D8u) goto L_08B068D8;
    return;
L_08B068D8:
    ctx.set_gpr(31, 0x08B068E0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08B07880;
L_08B068E0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B068F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08B0693C;
      }
      goto L_08B06910;
    }
L_08B06910:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08B0691Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 626u, 0x0885E5ACu>(ctx, &aot_mem) && ctx.pc == 0x08B0691Cu) goto L_08B0691C;
    return;
L_08B0691C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B06928u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 708u, 0x08862CD4u>(ctx, &aot_mem) && ctx.pc == 0x08B06928u) goto L_08B06928;
    return;
L_08B06928:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08B06940;
    }
    goto L_08B06934;
L_08B06934:
    ctx.set_gpr(31, 0x08B0693Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08B06954;
L_08B0693C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08B06940;
L_08B06940:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06954:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08B0695C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B06BA0;
      }
      goto L_08B06978;
    }
L_08B06978:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B06C00;
      }
      goto L_08B06984;
    }
L_08B06984:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B06B50;
      }
      goto L_08B06994;
    }
L_08B06994:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B06A98;
      }
      goto L_08B0699C;
    }
L_08B0699C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B06A2C;
      }
      goto L_08B069A4;
    }
L_08B069A4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B069B4;
      }
      goto L_08B069AC;
    }
L_08B069AC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B06B88;
      }
      goto L_08B069B4;
    }
L_08B069B4:
    ctx.set_gpr(31, 0x08B069BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 167u, 0x08848AFCu>(ctx, &aot_mem) && ctx.pc == 0x08B069BCu) goto L_08B069BC;
    return;
L_08B069BC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23028)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B06A00;
      }
      goto L_08B069CC;
    }
L_08B069CC:
    ctx.set_gpr(31, 0x08B069D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08B069D4u) goto L_08B069D4;
    return;
L_08B069D4:
    ctx.set_gpr(31, 0x08B069DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08B069DCu) goto L_08B069DC;
    return;
L_08B069DC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3632));
    ctx.set_gpr(31, 0x08B069E8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08B06C70;
L_08B069E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B069F8;
      }
      goto L_08B069F0;
    }
L_08B069F0:
    ctx.set_gpr(31, 0x08B069F8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08B068BC;
L_08B069F8:
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23028), ctx.gpr[2]);
    goto L_08B06A00;
L_08B06A00:
    ctx.set_gpr(31, 0x08B06A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B06A08u) goto L_08B06A08;
    return;
L_08B06A08:
    ctx.set_gpr(3, 15820u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(31, 0x08B06A1Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1017u, 0x08A7F7C8u>(ctx, &aot_mem) && ctx.pc == 0x08B06A1Cu) goto L_08B06A1C;
    return;
L_08B06A1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08B06B84;
      }
      goto L_08B06A2C;
    }
L_08B06A2C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(31, 0x08B06A38u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23028)));
    goto L_08B06C78;
L_08B06A38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06B84;
      }
      goto L_08B06A40;
    }
L_08B06A40:
    ctx.set_gpr(31, 0x08B06A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B06A48u) goto L_08B06A48;
    return;
L_08B06A48:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B06A60u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08B06A60u) goto L_08B06A60;
    return;
L_08B06A60:
    ctx.set_gpr(31, 0x08B06A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B06A68u) goto L_08B06A68;
    return;
L_08B06A68:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B06A88u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08B06A88u) goto L_08B06A88;
    return;
L_08B06A88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08B06B84;
      }
      goto L_08B06A98;
    }
L_08B06A98:
    ctx.set_gpr(31, 0x08B06AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B06AA0u) goto L_08B06AA0;
    return;
L_08B06AA0:
    ctx.set_gpr(31, 0x08B06AA8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x08B06AA8u) goto L_08B06AA8;
    return;
L_08B06AA8:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B06B84;
      }
      goto L_08B06AB4;
    }
L_08B06AB4:
    ctx.set_gpr(31, 0x08B06ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B06ABCu) goto L_08B06ABC;
    return;
L_08B06ABC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16448u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(69));
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08B06AE8u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 308u, 0x08AB11D4u>(ctx, &aot_mem) && ctx.pc == 0x08B06AE8u) goto L_08B06AE8;
    return;
L_08B06AE8:
    ctx.set_gpr(31, 0x08B06AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08B06AF0u) goto L_08B06AF0;
    return;
L_08B06AF0:
    ctx.set_gpr(31, 0x08B06AF8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 814u, 0x08ACEC40u>(ctx, &aot_mem) && ctx.pc == 0x08B06AF8u) goto L_08B06AF8;
    return;
L_08B06AF8:
    ctx.set_gpr(31, 0x08B06B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B06B00u) goto L_08B06B00;
    return;
L_08B06B00:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B06B18u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08B06B18u) goto L_08B06B18;
    return;
L_08B06B18:
    ctx.set_gpr(31, 0x08B06B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B06B20u) goto L_08B06B20;
    return;
L_08B06B20:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B06B40u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08B06B40u) goto L_08B06B40;
    return;
L_08B06B40:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08B06B84;
      }
      goto L_08B06B50;
    }
L_08B06B50:
    ctx.set_gpr(31, 0x08B06B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B06B58u) goto L_08B06B58;
    return;
L_08B06B58:
    ctx.set_gpr(31, 0x08B06B60u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x08B06B60u) goto L_08B06B60;
    return;
L_08B06B60:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B06B78;
      }
      goto L_08B06B6C;
    }
L_08B06B6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_08B06B78;
L_08B06B78:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(31, 0x08B06B84u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23028)));
    goto L_08B075DC;
L_08B06B84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08B06B88;
L_08B06B88:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 4 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B06C64;
    }
    goto L_08B06B94;
L_08B06B94:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_08B06C60;
      }
      goto L_08B06BA0;
    }
L_08B06BA0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08B06BB8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23028)));
    goto L_08B07550;
L_08B06BB8:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B06C60;
      }
      goto L_08B06BC4;
    }
L_08B06BC4:
    ctx.set_gpr(31, 0x08B06BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08B06BCCu) goto L_08B06BCC;
    return;
L_08B06BCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B06BD8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08B06BD8u) goto L_08B06BD8;
    return;
L_08B06BD8:
    ctx.set_gpr(31, 0x08B06BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B06BE0u) goto L_08B06BE0;
    return;
L_08B06BE0:
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B06BF4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 365u, 0x08AB1554u>(ctx, &aot_mem) && ctx.pc == 0x08B06BF4u) goto L_08B06BF4;
    return;
L_08B06BF4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_08B06C60;
      }
      goto L_08B06C00;
    }
L_08B06C00:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B06C0C;
      }
      goto L_08B06C08;
    }
L_08B06C08:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_08B06C0C;
L_08B06C0C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(31, 0x08B06C18u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23028)));
    goto L_08B07454;
L_08B06C18:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23028)));
    ctx.set_gpr(31, 0x08B06C28u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08B068F4;
L_08B06C28:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(31, 0x08B06C34u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23028), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B06C34u) goto L_08B06C34;
    return;
L_08B06C34:
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(31, 0x08B06C44u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1017u, 0x08A7F7C8u>(ctx, &aot_mem) && ctx.pc == 0x08B06C44u) goto L_08B06C44;
    return;
L_08B06C44:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23032)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_08B06C60;
L_08B06C60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B06C64;
L_08B06C64:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06C70:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_08B06C78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9276)));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9280)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9284)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9288)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9292)));
    ctx.set_gpr(31, 0x08B06CE8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08B06CE8u) goto L_08B06CE8;
    return;
L_08B06CE8:
    ctx.set_gpr(31, 0x08B06CF0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08B06CF0u) goto L_08B06CF0;
    return;
L_08B06CF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3576)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08B073FC;
    }
    goto L_08B06D00;
L_08B06D00:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1564));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06D1C:
    ctx.set_gpr(31, 0x08B06D24u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08B07880;
L_08B06D24:
    ctx.set_gpr(31, 0x08B06D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 167u, 0x08848AFCu>(ctx, &aot_mem) && ctx.pc == 0x08B06D2Cu) goto L_08B06D2C;
    return;
L_08B06D2C:
    ctx.set_gpr(31, 0x08B06D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08B06D34u) goto L_08B06D34;
    return;
L_08B06D34:
    ctx.set_gpr(31, 0x08B06D3Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08B07444;
L_08B06D3C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(24));
        goto L_08B06D6C;
    }
    goto L_08B06D44;
L_08B06D44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3588), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3592), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B06D5Cu);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3596), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08B06D5Cu) goto L_08B06D5C;
    return;
L_08B06D5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B06D68u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08B07434;
L_08B06D68:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(24));
    goto L_08B06D6C;
L_08B06D6C:
    ctx.set_gpr(31, 0x08B06D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 633u, 0x0885E624u>(ctx, &aot_mem) && ctx.pc == 0x08B06D74u) goto L_08B06D74;
    return;
L_08B06D74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3576)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3576), ctx.gpr[2]);
    goto L_08B06D80;
L_08B06D80:
    ctx.set_gpr(31, 0x08B06D88u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3584)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B06D88u) goto L_08B06D88;
    return;
L_08B06D88:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B06DA4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08B06DA4u) goto L_08B06DA4;
    return;
L_08B06DA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B073F8;
      }
      goto L_08B06DAC;
    }
L_08B06DAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3584)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3584), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08B073F8;
      }
      goto L_08B06DC0;
    }
L_08B06DC0:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3584), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3576)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3576), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B073F8;
      }
      goto L_08B06DD4;
    }
L_08B06DD4:
    ctx.set_gpr(31, 0x08B06DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08B06DDCu) goto L_08B06DDC;
    return;
L_08B06DDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B06DE8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 109u, 0x08AF0728u>(ctx, &aot_mem) && ctx.pc == 0x08B06DE8u) goto L_08B06DE8;
    return;
L_08B06DE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B073F8;
      }
      goto L_08B06DF0;
    }
L_08B06DF0:
    ctx.set_gpr(31, 0x08B06DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08B06DF8u) goto L_08B06DF8;
    return;
L_08B06DF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B06E04u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08B06E04u) goto L_08B06E04;
    return;
L_08B06E04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3576)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3576), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B073F8;
      }
      goto L_08B06E14;
    }
L_08B06E14:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1706));
    ctx.set_gpr(31, 0x08B06E24u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 664u, 0x0885E894u>(ctx, &aot_mem) && ctx.pc == 0x08B06E24u) goto L_08B06E24;
    return;
L_08B06E24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B073F8;
      }
      goto L_08B06E2C;
    }
L_08B06E2C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B06E40u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 787u, 0x0885F02Cu>(ctx, &aot_mem) && ctx.pc == 0x08B06E40u) goto L_08B06E40;
    return;
L_08B06E40:
    ctx.set_gpr(31, 0x08B06E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08B06E48u) goto L_08B06E48;
    return;
L_08B06E48:
    ctx.set_gpr(31, 0x08B06E50u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08B07428;
L_08B06E50:
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16353u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 57826u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.fpr[16] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(31, 0x08B06E7Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 427u, 0x08849A60u>(ctx, &aot_mem) && ctx.pc == 0x08B06E7Cu) goto L_08B06E7C;
    return;
L_08B06E7C:
    ctx.set_gpr(31, 0x08B06E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08B06E84u) goto L_08B06E84;
    return;
L_08B06E84:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08B06E94u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 870u, 0x08843A60u>(ctx, &aot_mem) && ctx.pc == 0x08B06E94u) goto L_08B06E94;
    return;
L_08B06E94:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B06EA0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 521u, 0x08851B24u>(ctx, &aot_mem) && ctx.pc == 0x08B06EA0u) goto L_08B06EA0;
    return;
L_08B06EA0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B06EACu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08B06EACu) goto L_08B06EAC;
    return;
L_08B06EAC:
    ctx.set_gpr(31, 0x08B06EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08B06EB4u) goto L_08B06EB4;
    return;
L_08B06EB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B06EC0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 462u, 0x08A85A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08B06EC0u) goto L_08B06EC0;
    return;
L_08B06EC0:
    ctx.set_gpr(31, 0x08B06EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08B06EC8u) goto L_08B06EC8;
    return;
L_08B06EC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B06ED4u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 535u, 0x0884A0DCu>(ctx, &aot_mem) && ctx.pc == 0x08B06ED4u) goto L_08B06ED4;
    return;
L_08B06ED4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3576)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3576), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B073F8;
      }
      goto L_08B06EE4;
    }
L_08B06EE4:
    ctx.set_gpr(31, 0x08B06EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B06EECu) goto L_08B06EEC;
    return;
L_08B06EEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17256u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16441u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08B06F28u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08B06F28u) goto L_08B06F28;
    return;
L_08B06F28:
    ctx.set_gpr(31, 0x08B06F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B06F30u) goto L_08B06F30;
    return;
L_08B06F30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B06F44u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B06F44u) goto L_08B06F44;
    return;
L_08B06F44:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08B06F4C;
L_08B06F4C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16932u << 16u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17044u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[21] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    goto L_08B06F74;
L_08B06F74:
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17036u << 16u);
    ctx.set_gpr(20, ctx.gpr[17] + ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17026u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B06F9Cu);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B06F9Cu) goto L_08B06F9C;
    return;
L_08B06F9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16435u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 13107u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08B06FCCu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08B06FCCu) goto L_08B06FCC;
    return;
L_08B06FCC:
    ctx.set_gpr(31, 0x08B06FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B06FD4u) goto L_08B06FD4;
    return;
L_08B06FD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B06FE8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B06FE8u) goto L_08B06FE8;
    return;
L_08B06FE8:
    ctx.set_gpr(31, 0x08B06FF0u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(25));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B06FF0u) goto L_08B06FF0;
    return;
L_08B06FF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16435u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 13107u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08B07020u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08B07020u) goto L_08B07020;
    return;
L_08B07020:
    ctx.set_gpr(31, 0x08B07028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B07028u) goto L_08B07028;
    return;
L_08B07028:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B0703Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0703Cu) goto L_08B0703C;
    return;
L_08B0703C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
        goto L_08B06F74;
    }
    goto L_08B0704C;
L_08B0704C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08B06F4C;
      }
      goto L_08B0705C;
    }
L_08B0705C:
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    goto L_08B07064;
L_08B07064:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16932u << 16u);
    ctx.set_gpr(3, 17044u << 16u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 49564u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[21] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[20]);
    goto L_08B07098;
L_08B07098:
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17036u << 16u);
    ctx.set_gpr(16, ctx.gpr[20] + ctx.gpr[18]);
    ctx.set_gpr(3, 17026u << 16u);
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(49));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 49604u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B070CCu);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B070CCu) goto L_08B070CC;
    return;
L_08B070CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16432u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(5));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08B070F8u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08B070F8u) goto L_08B070F8;
    return;
L_08B070F8:
    ctx.set_gpr(31, 0x08B07100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B07100u) goto L_08B07100;
    return;
L_08B07100:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B07114u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07114u) goto L_08B07114;
    return;
L_08B07114:
    ctx.set_gpr(31, 0x08B0711Cu);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(73));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0711Cu) goto L_08B0711C;
    return;
L_08B0711C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16432u << 16u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(5));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08B07148u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08B07148u) goto L_08B07148;
    return;
L_08B07148:
    ctx.set_gpr(31, 0x08B07150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B07150u) goto L_08B07150;
    return;
L_08B07150:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B07164u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07164u) goto L_08B07164;
    return;
L_08B07164:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 6 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[20]);
        goto L_08B07098;
    }
    goto L_08B07174;
L_08B07174:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08B07064;
      }
      goto L_08B07184;
    }
L_08B07184:
    ctx.set_gpr(31, 0x08B0718Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0718Cu) goto L_08B0718C;
    return;
L_08B0718C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3592)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17036u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(8, 17026u << 16u);
    ctx.set_gpr(10, 16932u << 16u);
    ctx.set_gpr(3, 17044u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + 0u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.set_gpr(2, 16438u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3596)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(97));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[2];
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 0u + 0u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08B071F4u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08B071F4u) goto L_08B071F4;
    return;
L_08B071F4:
    ctx.set_gpr(31, 0x08B071FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B071FCu) goto L_08B071FC;
    return;
L_08B071FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08B07210u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07210u) goto L_08B07210;
    return;
L_08B07210:
    ctx.set_gpr(31, 0x08B07218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B07218u) goto L_08B07218;
    return;
L_08B07218:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16772u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16438u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08B07250u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08B07250u) goto L_08B07250;
    return;
L_08B07250:
    ctx.set_gpr(31, 0x08B07258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B07258u) goto L_08B07258;
    return;
L_08B07258:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(31, 0x08B0726Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0726Cu) goto L_08B0726C;
    return;
L_08B0726C:
    ctx.set_gpr(31, 0x08B07274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B07274u) goto L_08B07274;
    return;
L_08B07274:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17383u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16438u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(99));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08B072B0u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08B072B0u) goto L_08B072B0;
    return;
L_08B072B0:
    ctx.set_gpr(31, 0x08B072B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B072B8u) goto L_08B072B8;
    return;
L_08B072B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(99));
    ctx.set_gpr(31, 0x08B072CCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B072CCu) goto L_08B072CC;
    return;
L_08B072CC:
    ctx.set_gpr(31, 0x08B072D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B072D4u) goto L_08B072D4;
    return;
L_08B072D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16345u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08B0730Cu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08B0730Cu) goto L_08B0730C;
    return;
L_08B0730C:
    ctx.set_gpr(31, 0x08B07314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B07314u) goto L_08B07314;
    return;
L_08B07314:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08B07328u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07328u) goto L_08B07328;
    return;
L_08B07328:
    ctx.set_gpr(31, 0x08B07330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07330u) goto L_08B07330;
    return;
L_08B07330:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B07340u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9308));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08B07340u) goto L_08B07340;
    return;
L_08B07340:
    ctx.set_gpr(31, 0x08B07348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B07348u) goto L_08B07348;
    return;
L_08B07348:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B07354u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(23));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08B07354u) goto L_08B07354;
    return;
L_08B07354:
    ctx.set_gpr(31, 0x08B0735Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B0735Cu) goto L_08B0735C;
    return;
L_08B0735C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B07368u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08B07368u) goto L_08B07368;
    return;
L_08B07368:
    ctx.set_gpr(31, 0x08B07370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B07370u) goto L_08B07370;
    return;
L_08B07370:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0737Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08B0737Cu) goto L_08B0737C;
    return;
L_08B0737C:
    ctx.set_gpr(31, 0x08B07384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B07384u) goto L_08B07384;
    return;
L_08B07384:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B07390u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08B07390u) goto L_08B07390;
    return;
L_08B07390:
    ctx.set_gpr(31, 0x08B07398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B07398u) goto L_08B07398;
    return;
L_08B07398:
    ctx.set_gpr(31, 0x08B073A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 475u, 0x08B024FCu>(ctx, &aot_mem) && ctx.pc == 0x08B073A0u) goto L_08B073A0;
    return;
L_08B073A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3588)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08B073B0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08B07A18;
L_08B073B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3576)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3576), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B073F8;
      }
      goto L_08B073C0;
    }
L_08B073C0:
    ctx.set_gpr(31, 0x08B073C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 160u, 0x08848A74u>(ctx, &aot_mem) && ctx.pc == 0x08B073C8u) goto L_08B073C8;
    return;
L_08B073C8:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9296)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9300)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9304)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3572), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08B073FC;
      }
      goto L_08B073F8;
    }
L_08B073F8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08B073FC;
L_08B073FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B07428:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(28004));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32760));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B07434:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-4780), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B07444:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-4780)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B07454:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3572)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B0753C;
      }
      goto L_08B07470;
    }
L_08B07470:
    ctx.set_gpr(31, 0x08B07478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07478u) goto L_08B07478;
    return;
L_08B07478:
    ctx.set_gpr(31, 0x08B07480u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07480u) goto L_08B07480;
    return;
L_08B07480:
    ctx.set_gpr(31, 0x08B07488u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 642u, 0x0885E700u>(ctx, &aot_mem) && ctx.pc == 0x08B07488u) goto L_08B07488;
    return;
L_08B07488:
    ctx.set_gpr(31, 0x08B07490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08B07490u) goto L_08B07490;
    return;
L_08B07490:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0749Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 135u, 0x08AF0944u>(ctx, &aot_mem) && ctx.pc == 0x08B0749Cu) goto L_08B0749C;
    return;
L_08B0749C:
    ctx.set_gpr(31, 0x08B074A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08B074A4u) goto L_08B074A4;
    return;
L_08B074A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B074B0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 118u, 0x08AF07C4u>(ctx, &aot_mem) && ctx.pc == 0x08B074B0u) goto L_08B074B0;
    return;
L_08B074B0:
    ctx.set_gpr(31, 0x08B074B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B074B8u) goto L_08B074B8;
    return;
L_08B074B8:
    ctx.set_gpr(31, 0x08B074C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08B074C0u) goto L_08B074C0;
    return;
L_08B074C0:
    ctx.set_gpr(31, 0x08B074C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B074C8u) goto L_08B074C8;
    return;
L_08B074C8:
    ctx.set_gpr(31, 0x08B074D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08B074D0u) goto L_08B074D0;
    return;
L_08B074D0:
    ctx.set_gpr(31, 0x08B074D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B074D8u) goto L_08B074D8;
    return;
L_08B074D8:
    ctx.set_gpr(31, 0x08B074E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08B074E0u) goto L_08B074E0;
    return;
L_08B074E0:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08B074E4;
L_08B074E4:
    ctx.set_gpr(31, 0x08B074ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B074ECu) goto L_08B074EC;
    return;
L_08B074EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B074FCu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08B074FCu) goto L_08B074FC;
    return;
L_08B074FC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 101 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B074E4;
      }
      goto L_08B0750C;
    }
L_08B0750C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08B07510;
L_08B07510:
    ctx.set_gpr(31, 0x08B07518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B07518u) goto L_08B07518;
    return;
L_08B07518:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B07528u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 562u, 0x0884764Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07528u) goto L_08B07528;
    return;
L_08B07528:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B07510;
      }
      goto L_08B07538;
    }
L_08B07538:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3572), static_cast<std::uint8_t>(0u));
    goto L_08B0753C;
L_08B0753C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B07550:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B07580u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(3560));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 343u, 0x08805400u>(ctx, &aot_mem) && ctx.pc == 0x08B07580u) goto L_08B07580;
    return;
L_08B07580:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3580)));
        goto L_08B075A4;
    }
    goto L_08B07588;
L_08B07588:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B075A0u);
    ctx.set_gpr(25, ctx.gpr[18] + static_cast<std::uint32_t>(3560));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 340u, 0x088053CCu>(ctx, &aot_mem) && ctx.pc == 0x08B075A0u) goto L_08B075A0;
    return;
L_08B075A0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3580)));
    goto L_08B075A4;
L_08B075A4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08B075B4;
    }
    goto L_08B075AC;
L_08B075AC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B075C0;
      }
      goto L_08B075B4;
    }
L_08B075B4:
    ctx.set_gpr(31, 0x08B075BCu);
    // nop
    goto L_08B075DC;
L_08B075BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B075C0;
L_08B075C0:
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
L_08B075DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B07600u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B07600u) goto L_08B07600;
    return;
L_08B07600:
    ctx.set_gpr(31, 0x08B07608u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07608u) goto L_08B07608;
    return;
L_08B07608:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08B07620;
    }
    goto L_08B07610;
L_08B07610:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B07624;
      }
      goto L_08B07620;
    }
L_08B07620:
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_08B07624;
L_08B07624:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B07634u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08B07634u) goto L_08B07634;
    return;
L_08B07634:
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3616)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[12])) || ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3620)));
        goto L_08B07704;
    }
    goto L_08B0764C;
L_08B0764C:
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08B07658u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08B07658u) goto L_08B07658;
    return;
L_08B07658:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3588)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9312));
    ctx.set_gpr(31, 0x08B07678u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08B07678u) goto L_08B07678;
    return;
L_08B07678:
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3616)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08B0768Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08B0768Cu) goto L_08B0768C;
    return;
L_08B0768C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3588)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(34));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9312));
    ctx.set_gpr(31, 0x08B076ACu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08B076ACu) goto L_08B076AC;
    return;
L_08B076AC:
    ctx.set_gpr(31, 0x08B076B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08B076B4u) goto L_08B076B4;
    return;
L_08B076B4:
    ctx.set_gpr(31, 0x08B076BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08B076BCu) goto L_08B076BC;
    return;
L_08B076BC:
    ctx.set_gpr(31, 0x08B076C4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08B07868;
L_08B076C4:
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3616)));
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08B076DCu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08B076DCu) goto L_08B076DC;
    return;
L_08B076DC:
    ctx.set_gpr(31, 0x08B076E4u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08B076E4u) goto L_08B076E4;
    return;
L_08B076E4:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(228));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(226));
    ctx.set_gpr(31, 0x08B07700u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9332));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08B07700u) goto L_08B07700;
    return;
L_08B07700:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3620)));
    goto L_08B07704;
L_08B07704:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08B07834;
    }
    goto L_08B07718;
L_08B07718:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3596)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3592)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3588)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(31, 0x08B0773Cu);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08B078E8;
L_08B0773C:
    ctx.set_gpr(31, 0x08B07744u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08B07940;
L_08B07744:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B07750u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08B07750u) goto L_08B07750;
    return;
L_08B07750:
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3620)));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08B07768u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08B07768u) goto L_08B07768;
    return;
L_08B07768:
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(480));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
      if (branch_taken) {
          goto L_08B0778C;
      }
      goto L_08B07784;
    }
L_08B07784:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_08B0778C;
L_08B0778C:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-131));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(226));
    ctx.set_gpr(31, 0x08B077A4u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9340));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08B077A4u) goto L_08B077A4;
    return;
L_08B077A4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3596)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3592)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3588)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(31, 0x08B077C8u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08B078E8;
L_08B077C8:
    ctx.set_gpr(31, 0x08B077D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08B07988;
L_08B077D0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B077DCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08B077DCu) goto L_08B077DC;
    return;
L_08B077DC:
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3620)));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08B077F4u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08B077F4u) goto L_08B077F4;
    return;
L_08B077F4:
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(480));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
      if (branch_taken) {
          goto L_08B07818;
      }
      goto L_08B07810;
    }
L_08B07810:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_08B07818;
L_08B07818:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(226));
    ctx.set_gpr(31, 0x08B07830u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9340));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08B07830u) goto L_08B07830;
    return;
L_08B07830:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08B07834;
L_08B07834:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08B07848u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08B07848u) goto L_08B07848;
    return;
L_08B07848:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08B07868:
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(27885));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(197));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(200));
    (void)rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 469u, 0x08861C48u>(ctx, &aot_mem); return;
L_08B07880:
    ctx.set_gpr(5, 2233u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(3, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3572), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3576), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3580), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3584), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3588), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3592), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3596), 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(30));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3600), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3604), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3608), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3612), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3616), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3620), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3624), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B078E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-960));
    ctx.set_gpr(8, 2231u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(9344));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(0));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(120));
    goto L_08B078FC;
L_08B078FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B078FC;
      }
      goto L_08B0791C;
    }
L_08B0791C:
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(960));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B07940:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-800));
    ctx.set_gpr(7, 2231u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(10496));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(99));
    goto L_08B07954;
L_08B07954:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B07954;
      }
      goto L_08B07974;
    }
L_08B07974:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(800));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B07988:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-816));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(13044));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(99));
    goto L_08B079AC;
L_08B079AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B079AC;
      }
      goto L_08B079CC;
    }
L_08B079CC:
    ctx.set_gpr(17, 2231u << 16u);
    ctx.set_gpr(31, 0x08B079D8u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(11288));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08B079D8u) goto L_08B079D8;
    return;
L_08B079D8:
    ctx.set_gpr(31, 0x08B079E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08B079E0u) goto L_08B079E0;
    return;
L_08B079E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B079ECu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 364u, 0x0886170Cu>(ctx, &aot_mem) && ctx.pc == 0x08B079ECu) goto L_08B079EC;
    return;
L_08B079EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B07A00;
      }
      goto L_08B079F4;
    }
L_08B079F4:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    goto L_08B07A00;
L_08B07A00:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(816));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B07A18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(23, ctx.gpr[4] + 0u);
    ctx.set_gpr(30, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08B07A54u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08B07A54u) goto L_08B07A54;
    return;
L_08B07A54:
    ctx.set_gpr(31, 0x08B07A5Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08B07A5Cu) goto L_08B07A5C;
    return;
L_08B07A5C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    goto L_08B07A68;
L_08B07A68:
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08B07A74u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08B078E8;
L_08B07A74:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 61 ? 1u : 0u);
        goto L_08B07A98;
    }
    goto L_08B07A7C;
L_08B07A7C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 61 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B07A94;
      }
      goto L_08B07A88;
    }
L_08B07A88:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B07ADC;
      }
      goto L_08B07A94;
    }
L_08B07A94:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 61 ? 1u : 0u);
    goto L_08B07A98;
L_08B07A98:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(198));
        goto L_08B07AE0;
    }
    goto L_08B07AA0;
L_08B07AA0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 198 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B07ADC;
      }
      goto L_08B07AAC;
    }
L_08B07AAC:
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-61));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 64 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 128 ? 1u : 0u);
        goto L_08B07AC4;
    }
    goto L_08B07ABC;
L_08B07ABC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B07ADC;
      }
      goto L_08B07AC4;
    }
L_08B07AC4:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(4));
        goto L_08B07AD8;
    }
    goto L_08B07ACC;
L_08B07ACC:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-64));
      if (branch_taken) {
          goto L_08B07ADC;
      }
      goto L_08B07AD8;
    }
L_08B07AD8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-128));
    goto L_08B07ADC;
L_08B07ADC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(198));
    goto L_08B07AE0;
L_08B07AE0:
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
        goto L_08B07B30;
    }
    goto L_08B07AE8;
L_08B07AE8:
    ctx.set_gpr(31, 0x08B07AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B07AF0u) goto L_08B07AF0;
    return;
L_08B07AF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B07B08u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07B08u) goto L_08B07B08;
    return;
L_08B07B08:
    ctx.set_gpr(31, 0x08B07B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B07B10u) goto L_08B07B10;
    return;
L_08B07B10:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(49));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B07B28u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07B28u) goto L_08B07B28;
    return;
L_08B07B28:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B07C28;
      }
      goto L_08B07B30;
    }
L_08B07B30:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B07B3Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 364u, 0x0886170Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07B3Cu) goto L_08B07B3C;
    return;
L_08B07B3C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08B07B8C;
    }
    goto L_08B07B44;
L_08B07B44:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08B07B50u);
    ctx.set_gpr(21, ctx.gpr[2] + ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B07B50u) goto L_08B07B50;
    return;
L_08B07B50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08B07B68u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08B07B68u) goto L_08B07B68;
    return;
L_08B07B68:
    ctx.set_gpr(31, 0x08B07B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B07B70u) goto L_08B07B70;
    return;
L_08B07B70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B07B84u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07B84u) goto L_08B07B84;
    return;
L_08B07B84:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
      if (branch_taken) {
          goto L_08B07BCC;
      }
      goto L_08B07B8C;
    }
L_08B07B8C:
    ctx.set_gpr(31, 0x08B07B94u);
    ctx.set_gpr(21, ctx.gpr[2] + ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B07B94u) goto L_08B07B94;
    return;
L_08B07B94:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08B07BACu);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08B07BACu) goto L_08B07BAC;
    return;
L_08B07BAC:
    ctx.set_gpr(31, 0x08B07BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B07BB4u) goto L_08B07BB4;
    return;
L_08B07BB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B07BC8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07BC8u) goto L_08B07BC8;
    return;
L_08B07BC8:
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    goto L_08B07BCC;
L_08B07BCC:
    ctx.set_gpr(31, 0x08B07BD4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08B07C64;
L_08B07BD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B07C04;
      }
      goto L_08B07BDC;
    }
L_08B07BDC:
    ctx.set_gpr(31, 0x08B07BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B07BE4u) goto L_08B07BE4;
    return;
L_08B07BE4:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(49));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B07BFCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07BFCu) goto L_08B07BFC;
    return;
L_08B07BFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B07C24;
      }
      goto L_08B07C04;
    }
L_08B07C04:
    ctx.set_gpr(31, 0x08B07C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B07C0Cu) goto L_08B07C0C;
    return;
L_08B07C0C:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(49));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B07C24u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07C24u) goto L_08B07C24;
    return;
L_08B07C24:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08B07C28;
L_08B07C28:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 24 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
        goto L_08B07A68;
    }
    goto L_08B07C34;
L_08B07C34:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B07C64:
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(27910));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(200));
    (void)rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 458u, 0x08861BE8u>(ctx, &aot_mem); return;
L_08B07C78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B07C94u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B07C94u) goto L_08B07C94;
    return;
L_08B07C94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B07CA0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08B07CA0u) goto L_08B07CA0;
    return;
L_08B07CA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B07D34;
      }
      goto L_08B07CA8;
    }
L_08B07CA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3596)));
    goto L_08B07CAC;
L_08B07CAC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3596), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B07CC0;
      }
      goto L_08B07CB8;
    }
L_08B07CB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3596), ctx.gpr[2]);
    goto L_08B07CC0;
L_08B07CC0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3596)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3592)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3588)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(31, 0x08B07CE4u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08B078E8;
L_08B07CE4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(198));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3596)));
        goto L_08B07CAC;
    }
    goto L_08B07CF0;
L_08B07CF0:
    ctx.set_gpr(31, 0x08B07CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07CF8u) goto L_08B07CF8;
    return;
L_08B07CF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B07D0Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07D0Cu) goto L_08B07D0C;
    return;
L_08B07D0C:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13836)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13840)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13844)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 40u, 0x08B08294u>(ctx, &aot_mem); return;
      }
      goto L_08B07D34;
    }
L_08B07D34:
    ctx.set_gpr(31, 0x08B07D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B07D3Cu) goto L_08B07D3C;
    return;
L_08B07D3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B07D48u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08B07D48u) goto L_08B07D48;
    return;
L_08B07D48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B07DE0;
      }
      goto L_08B07D50;
    }
L_08B07D50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3596)));
    goto L_08B07D54;
L_08B07D54:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3596), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3596)));
        goto L_08B07D70;
    }
    goto L_08B07D68;
L_08B07D68:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3596), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3596)));
    goto L_08B07D70;
L_08B07D70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3592)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3588)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(31, 0x08B07D90u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08B078E8;
L_08B07D90:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(198));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3596)));
        goto L_08B07D54;
    }
    goto L_08B07D9C;
L_08B07D9C:
    ctx.set_gpr(31, 0x08B07DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07DA4u) goto L_08B07DA4;
    return;
L_08B07DA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B07DB8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07DB8u) goto L_08B07DB8;
    return;
L_08B07DB8:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13848)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13852)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13856)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 40u, 0x08B08294u>(ctx, &aot_mem); return;
      }
      goto L_08B07DE0;
    }
L_08B07DE0:
    ctx.set_gpr(31, 0x08B07DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B07DE8u) goto L_08B07DE8;
    return;
L_08B07DE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B07DF4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08B07DF4u) goto L_08B07DF4;
    return;
L_08B07DF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B07E88;
      }
      goto L_08B07DFC;
    }
L_08B07DFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3592)));
    goto L_08B07E00;
L_08B07E00:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3592), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B07E14;
      }
      goto L_08B07E0C;
    }
L_08B07E0C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3592), ctx.gpr[2]);
    goto L_08B07E14;
L_08B07E14:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3596)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3592)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3588)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(31, 0x08B07E38u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08B078E8;
L_08B07E38:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(198));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3592)));
        goto L_08B07E00;
    }
    goto L_08B07E44;
L_08B07E44:
    ctx.set_gpr(31, 0x08B07E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07E4Cu) goto L_08B07E4C;
    return;
L_08B07E4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B07E60u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07E60u) goto L_08B07E60;
    return;
L_08B07E60:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13860)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13864)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13868)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 40u, 0x08B08294u>(ctx, &aot_mem); return;
      }
      goto L_08B07E88;
    }
L_08B07E88:
    ctx.set_gpr(31, 0x08B07E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B07E90u) goto L_08B07E90;
    return;
L_08B07E90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B07E9Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08B07E9Cu) goto L_08B07E9C;
    return;
L_08B07E9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B07F34;
      }
      goto L_08B07EA4;
    }
L_08B07EA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3592)));
    goto L_08B07EA8;
L_08B07EA8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3592), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3596)));
        goto L_08B07EC4;
    }
    goto L_08B07EBC;
L_08B07EBC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3592), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3596)));
    goto L_08B07EC4;
L_08B07EC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3592)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3588)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(31, 0x08B07EE4u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08B078E8;
L_08B07EE4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(198));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3592)));
        goto L_08B07EA8;
    }
    goto L_08B07EF0;
L_08B07EF0:
    ctx.set_gpr(31, 0x08B07EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07EF8u) goto L_08B07EF8;
    return;
L_08B07EF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B07F0Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08B07F0Cu) goto L_08B07F0C;
    return;
L_08B07F0C:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13872)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13876)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13880)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 40u, 0x08B08294u>(ctx, &aot_mem); return;
      }
      goto L_08B07F34;
    }
L_08B07F34:
    ctx.set_gpr(31, 0x08B07F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B07F3Cu) goto L_08B07F3C;
    return;
L_08B07F3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B07F48u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08B07F48u) goto L_08B07F48;
    return;
L_08B07F48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 4u, 0x08B08044u>(ctx, &aot_mem); return;
      }
      goto L_08B07F50;
    }
L_08B07F50:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3588)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B07F60u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    goto L_08B07A18;
L_08B07F60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3588)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3588), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B07F78;
      }
      goto L_08B07F70;
    }
L_08B07F70:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3588), ctx.gpr[2]);
    goto L_08B07F78;
L_08B07F78:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3596)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3592)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3588)));
    ctx.set_gpr(31, 0x08B07FA0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08B078E8;
L_08B07FA0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(198));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
        goto L_08B07FD0;
    }
    goto L_08B07FAC;
L_08B07FAC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3588)));
    goto L_08B07FB0;
L_08B07FB0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B07FC0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08B078E8;
L_08B07FC0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(198));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3588)));
        goto L_08B07FB0;
    }
    goto L_08B07FCC;
L_08B07FCC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    goto L_08B07FD0;
L_08B07FD0:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(4, ctx.gpr[16] >> 31u);
    ctx.set_gpr(2, 10922u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 43691u);
    ctx.set_gpr(5, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3592), ctx.gpr[5]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3596), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3620), 0u);
    ctx.pc = 0x08B08000u; return;
}

void recomp_unit_0192(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0192_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_192(Runtime &runtime) {
    runtime.register_generated_unit(192u, 0x08B04000u, 16384u, &recomp_unit_0192, &recomp_unit_0192_entry);
    runtime.register_function(0x08B04000u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04008u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04038u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04048u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04068u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04074u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04088u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04098u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B040A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B040ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B040D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B040DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B040ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B040F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04130u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04144u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04148u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0416Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04194u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0419Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B041A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B041ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B041B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B041B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B041ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04228u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04230u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0423Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04240u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04248u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0427Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B042B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B042BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B042D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04304u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04308u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04310u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04344u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04358u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04360u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04370u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04390u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0439Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B043A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B043ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B043B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B043B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B043E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B043E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B043F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B043FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04408u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04410u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0441Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04424u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04450u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04460u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0446Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04474u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04484u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04488u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04498u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B044A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B044D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0450Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04534u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0453Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04544u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0454Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04550u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04558u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0459Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B045B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B045B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B045C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B045C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B045D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04614u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04628u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0462Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04648u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04658u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04660u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04668u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04678u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04680u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0468Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04694u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B046D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B046E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B046E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04700u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04708u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04710u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04744u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04748u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04750u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0475Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0476Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04798u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B047ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B047B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B047C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B047D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B047F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04800u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0480Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04828u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04844u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04850u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04870u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04880u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04890u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B048C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B048D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04914u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0491Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04930u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04944u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04950u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0495Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04968u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04974u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04980u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04994u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B049A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B049A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B049ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B049C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B049CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B049D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B049D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B049F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A04u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A14u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A28u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A2Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A38u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A40u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A7Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A8Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04AA4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04AACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04AB4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04ABCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04AC8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04AE0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04AECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B08u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B28u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B3Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B4Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B50u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B58u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04BA8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04BB8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04BC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04BD0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04BD8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04BE0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04BE8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04BF8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04BFCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C04u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C1Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C24u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C30u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C48u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C64u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C84u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C9Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04CD0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04CD8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04CE0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04CE8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04CF8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04D00u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04D08u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04D10u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04D1Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04D3Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04D48u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04D5Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04D70u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04DA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04DD4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E24u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E2Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E40u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E54u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E5Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E68u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E70u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E80u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E88u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E90u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E9Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04EC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04EF0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F10u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F20u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F2Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F40u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F48u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F50u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F58u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04FA4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04FC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04FC8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04FD8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04FF8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05124u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05130u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05138u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05140u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05148u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05150u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0515Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05164u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05168u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05170u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0517Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05180u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05194u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B051A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B051ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B051B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B051C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B051F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05200u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05208u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05214u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05220u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05230u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05238u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05240u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05248u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05258u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05260u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05274u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0527Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05284u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05290u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0529Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B052A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B052C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B052F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05304u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05314u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05318u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05330u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0533Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0534Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0535Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05364u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05370u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05374u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05388u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0539Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B053A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B053A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B053C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B053E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B053F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B053F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05408u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05418u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05420u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05428u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05430u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05438u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05440u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05448u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0547Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05484u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0548Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05494u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0549Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B054A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B054ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B054B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B054BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B054C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B054CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B054D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B054E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B054F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B054F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05500u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0550Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05514u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05518u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05520u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05554u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05558u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05564u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05570u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05578u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0557Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05584u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05590u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0559Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B055A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B055A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B055B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B055C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B055C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B055D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B055DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B055E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B055E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05608u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05630u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05638u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0564Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05668u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05694u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B056A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B056A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B056B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B056B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B056C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B056D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B056DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B056E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B056F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B056F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05700u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05710u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05714u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0572Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05744u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05750u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05758u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05764u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05768u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05778u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B057ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B057C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B057CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B057D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B057E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B057ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B057F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05820u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0584Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05854u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05880u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05884u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0588Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05898u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B058A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B058BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B058C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B058CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B058D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B058F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B058F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05914u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05918u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05924u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05940u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05948u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05964u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05970u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05978u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05984u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05988u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0599Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B059B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B059BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B059C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B059CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B059DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A04u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A14u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A30u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A3Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A4Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A54u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A7Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A80u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05AB0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05ABCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05AC4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05ACCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05AD4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05B04u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05B08u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05B1Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05B54u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05B5Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05B60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05B6Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05B98u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05BA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05BACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05BB8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05BC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05BD0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05BD8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05BE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05BECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05BF8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C08u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C1Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C24u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C2Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C8Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05CA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05CA8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05CB0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05CB8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05CC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05CC8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05CD4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05CE0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05CE8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05CF0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05CF8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D20u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D30u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D4Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D58u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D68u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D7Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D88u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D8Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D9Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05DC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05DD4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05DE0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05DF8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E38u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E40u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E58u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E64u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E98u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EA8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EB0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EB4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EB8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EC4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05ECCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05ED4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05ED8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EF8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F20u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F28u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F30u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F3Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F40u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F68u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F8Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FA8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FF4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FFCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06004u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06010u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06018u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06024u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0603Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06040u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06058u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06088u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06090u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06098u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B060A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B060A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B060B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B060BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B060C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B060D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B060E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B060F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06108u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06114u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06120u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0613Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0614Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06160u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06174u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06194u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06204u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06210u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06218u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06220u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06228u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06230u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0623Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06244u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0624Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06254u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06260u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06268u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06270u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06278u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06280u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0628Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06294u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0629Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B062A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B062B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B062CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B062ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B062F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06304u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06310u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06318u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06320u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06328u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06330u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0633Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06348u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06350u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06358u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06360u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0636Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06378u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06380u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06388u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06390u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0639Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06408u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06410u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06418u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0641Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06428u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06440u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06458u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06460u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0646Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06480u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06488u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0649Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B064A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B064ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B064B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B064C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B064F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0650Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06520u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06534u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06548u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0655Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06570u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06584u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06598u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B065ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B065B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B065C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B065D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B065DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B065F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06600u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06624u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06660u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06674u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06680u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06684u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0669Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B066A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B066ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B066C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B066D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B066E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06718u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06738u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06754u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06774u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06790u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B067B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B067CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B067ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06808u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06828u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06844u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06864u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06880u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B068A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B068BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B068D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B068D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B068E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B068F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06910u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0691Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06928u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06934u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0693Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06940u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06954u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0695Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06978u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06984u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06994u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0699Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A00u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A08u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A1Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A2Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A38u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A40u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A48u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A68u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A88u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A98u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06AA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06AA8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06AB4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06ABCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06AE8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06AF0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06AF8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B00u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B20u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B40u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B50u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B58u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B6Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B84u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B88u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06BA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06BB8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06BC4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06BCCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06BD8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06BE0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06BF4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06C00u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06C08u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06C0Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06C18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06C28u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06C34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06C44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06C60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06C64u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06C70u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06C78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06CE8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06CF0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D00u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D1Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D24u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D2Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D3Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D5Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D68u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D6Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D80u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D88u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06DA4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06DACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06DC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06DD4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06DDCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06DE8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06DF0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06DF8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E04u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E14u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E24u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E2Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E40u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E48u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E50u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E7Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E84u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06EA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06EACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06EB4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06EC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06EC8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06ED4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06EE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06EECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F28u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F30u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F4Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F9Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06FCCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06FD4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06FE8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06FF0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07020u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07028u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0703Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0704Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0705Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07064u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07098u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B070CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B070F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07100u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07114u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0711Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07148u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07150u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07164u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07174u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07184u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0718Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B071F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B071FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07210u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07218u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07250u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07258u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0726Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07274u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B072B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B072B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B072CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B072D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0730Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07314u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07328u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07330u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07340u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07348u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07354u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0735Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07368u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07370u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0737Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07384u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07390u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07398u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07428u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07434u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07444u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07454u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07470u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07478u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07480u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07488u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07490u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0749Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0750Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07510u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07518u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07528u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07538u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0753Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07550u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07580u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07588u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B075A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B075A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B075ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B075B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B075BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B075C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B075DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07600u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07608u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07610u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07620u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07624u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07634u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0764Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07658u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07678u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0768Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B076ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B076B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B076BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B076C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B076DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B076E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07700u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07704u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07718u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0773Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07744u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07750u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07768u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07784u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0778Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B077A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B077C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B077D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B077DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B077F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07810u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07818u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07830u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07834u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07848u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07868u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07880u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B078E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B078FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0791Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07940u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07954u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07974u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07988u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B079ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B079CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B079D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B079E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B079ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B079F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A00u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A54u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A5Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A68u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A7Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A88u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A98u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07AA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07AACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07ABCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07AC4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07ACCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07AD8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07ADCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07AE0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07AE8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07AF0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B08u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B10u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B28u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B30u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B3Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B50u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B68u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B70u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B84u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B8Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07BACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07BB4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07BC8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07BCCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07BD4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07BDCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07BE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07BFCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C04u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C0Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C24u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C28u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C64u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CA8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CB8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CF0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CF8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D0Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D3Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D48u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D50u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D54u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D68u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D70u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D90u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D9Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07DA4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07DB8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07DE0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07DE8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07DF4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07DFCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E00u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E0Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E14u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E38u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E4Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E88u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E90u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E9Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07EA4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07EA8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07EBCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07EC4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07EE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07EF0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07EF8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F0Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F3Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F48u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F50u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F70u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07FA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07FACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07FB0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07FC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07FCCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07FD0u, &recomp_unit_0192, "recomp_unit_0192");
}
} // namespace psprecomp
